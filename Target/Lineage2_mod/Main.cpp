
#include <windows.h>
#include <iostream>

#include "SDK.hpp"
// can be #include "SDK/L2_***.hpp" if you want only specific headers.

using namespace L2_SDK;
// can be changed in generator.
using namespace std;

typedef void(__thiscall * tProcessEvent)(void* Class, UFunction* Function, void* Parms, void* _some);
static tProcessEvent oldProcessEvent = nullptr;

class UObjectClone : public UObject {
private: void  hook_before(UFunction* Function, void* Parms, void* _some) {
	// if you want something to happen before usual processing is done
		auto name = this->GetFullName();
		auto fnname = Function->GetFullName();
		if (fnname.find("Tick") != std::string::npos) {
			// do something every tick for every entity
			return;
		}
	}
public: void HookedProcessEvent(UFunction* Function, void* Parms, void* _some) {
	//this was really tricky to get without an actual class, so thats the soluttion - just make a dummy class.
		this->hook_before(Function, Parms, _some);
		oldProcessEvent(this, Function, Parms, _some);
		this->hook_after(Function,Parms, _some);
	}
private: void hook_after(UFunction* Function, void* Parms, void* _some) {
		auto name = this->GetFullName();
		auto fnname = Function->GetFullName();
		// if you want something to happen after usual processing is done
		if (this->IsA(APawn::StaticClass())) {
			// do something only when its APawn 
			UObject* Obj = static_cast<UObject*>(this);
			APawn* pawn = static_cast<APawn*>(Obj);
			cout << pawn->GetFullName() << endl;
		}
	}

};

DWORD WINAPI OnAttach(LPVOID lpParameter)
{
	//create console for debugging and maybe interaction
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
	std::cout << "\nBUILD DATE:" << __DATE__ << "\nBUILD TIME:" << __TIME__ << "\n";
	std::cout << "\n=======================================\n";
	bool hooked = false;
	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		if (i < UObject::GObjects->Num())
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);
			if (Obj)
			{
				// This is not the best solution, but the one i found and the one that works :/
				auto vtable = *(reinterpret_cast<void***>(reinterpret_cast<void*>(Obj)));
				if (!hooked) {
					oldProcessEvent = reinterpret_cast<tProcessEvent>(vtable[4]);
				}
				DWORD oldProtect;
				VirtualProtect(vtable + 4, sizeof(tProcessEvent), PAGE_EXECUTE_READWRITE, &oldProtect);
				auto methodptr = &UObjectClone::HookedProcessEvent;
				void* fnptr = *reinterpret_cast<void**>(&methodptr); // i really thought there was a better way? but
				// in the end its always *(void**)(&something)
				vtable[4] = fnptr;
				hooked = true;
			}
		}
	}
	std::cout << "\n=======================================\n";
	return 0;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(nullptr, 0, OnAttach, hModule, 0, nullptr);
		return TRUE;
	}
	return FALSE;
}

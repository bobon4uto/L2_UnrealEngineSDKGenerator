
#include <windows.h>
#include <assert.h>
#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <chrono>
#include <filesystem>
#include "SDK.hpp"
#include <fstream>
// can be #include "SDK/L2_***.hpp" if you want only specific headers.

using namespace L2_SDK;
// can be changed in generator.
using namespace std;

typedef void(__thiscall* tProcessEvent)(void* Class, UFunction* Function, void* Parms, void* _some);
static tProcessEvent oldProcessEvent = nullptr;


void replace_pe(UObject* Obj, bool* hooked);
void checkall_replace_wrong();

string command;
void execute_command(string cmd);


typedef void(* tModFn)(UObject* pThis, UFunction* Function, void* Parms, void* _some);
typedef void(*tModCleanupFn)();
HINSTANCE hleb = nullptr;
const char* dllPath;
static tModFn mod_hook_before = nullptr;
static tModFn mod_hook_after = nullptr;
static tModCleanupFn mod_cleanup = nullptr;



class UObjectClone : public UObject {
private: void  hook_before(UFunction* Function, void* Parms, void* _some) {
	// if you want something to happen before usual processing is done
	
	
	if (mod_hook_before) {
		mod_hook_before(this, Function, Parms, _some);
	}
    // this is so we can unload mod if we want
	if (this->IsA(UChatWnd::StaticClass())) {
		auto fnname = Function->GetFullName();
		if (fnname.find("OnKeyDown") != std::string::npos) {
			UUIScript_OnKeyDown_Params* parms = static_cast<UUIScript_OnKeyDown_Params*>(Parms);
			char k = static_cast<char>(static_cast<uint8_t> (parms->Key.GetValue()));
			cout << k << endl;

			if (k == static_cast<char>(static_cast<uint8_t>(EInputKey::IK_Enter))) {
				execute_command(command);
				command.clear();
			}
			else if (k == static_cast<char>(static_cast<uint8_t>(EInputKey::IK_Backspace))) {
				if (!command.empty())
					command.pop_back();
			}
			else if (k == static_cast<char>(static_cast<uint8_t>(EInputKey::IK_Period))) {
				command.push_back('.');
			}
			else {
				command.push_back(k);
			}
		}
	}
}
public: void HookedProcessEvent(UFunction* Function, void* Parms, void* _some) {
	//this was really tricky to get without an actual class, so thats the soluttion - just make a dummy class.
	this->hook_before(Function, Parms, _some);
	oldProcessEvent(this, Function, Parms, _some);
	this->hook_after(Function, Parms, _some);
}
private: void hook_after(UFunction* Function, void* Parms, void* _some) {
	// if you want something to happen after usual processing is done
	if (mod_hook_after) {
		mod_hook_after(this, Function, Parms, _some);
	}
}

};
auto methodptr = &UObjectClone::HookedProcessEvent;
tProcessEvent fnptr = *reinterpret_cast<tProcessEvent*>(&methodptr);
// i really thought there was a better way? but
// in the end its always *(void**)(&something)




void replace_pe(UObject* Obj, bool* hooked) {
	// This is not the best solution, but the one i found and the one that works :/
	auto vtable = *(reinterpret_cast<void***>(reinterpret_cast<void*>(Obj)));
	if (!(*hooked)) {
		oldProcessEvent = reinterpret_cast<tProcessEvent>(vtable[4]);
	}
	DWORD oldProtect;
	VirtualProtect(vtable + 4, sizeof(tProcessEvent), PAGE_EXECUTE_READWRITE, &oldProtect);
	vtable[4] = fnptr;
	*hooked = true;
}
void LoadMod() {


	std::filesystem::path src(__FILE__);
	const char* buildType =
#if defined(_DEBUG)
		"Debug";
#else
		"Release";
#endif

	auto p = (src.parent_path().parent_path().parent_path() / "x86" / buildType / "Lineage2_mod.dll").string();

	dllPath =
#ifndef CUSTOM_MOD_DLL_PATH
		p.c_str();
#else
		CUSTOM_MOD_DLL_PATH;
#endif
	//std::cout << dllPath;
	//std::cout << "\nwill be loaded if you write lm in chat\n";

	if (!hleb) {
		std::cout << "loading dll: " << dllPath << "\n";
		hleb = LoadLibraryA(dllPath);
	}
	else {
		cout << "Mod was Loaded before\n";
	}
	
	if (hleb) {
		mod_hook_before = (tModFn)GetProcAddress(hleb, "mod_hook_before");
		if (!mod_hook_before) {
			cout << "failed to get the mod_hook_before\n";
		}
		mod_hook_after = (tModFn)GetProcAddress(hleb, "mod_hook_after");
		if (!mod_hook_after) {
			cout << "failed to get the mod_hook_after\n";
		}
		mod_cleanup = (tModCleanupFn)GetProcAddress(hleb, "mod_cleanup");
		if (!mod_cleanup) {
			cout << "failed to get the mod_cleanup\n";
		}
	} else {
		cout << "failed to load the mod\n";
	}
}
void UnloadMod() {
	if (mod_cleanup) {
		mod_cleanup();
	}
	if (hleb) {
		mod_hook_before = nullptr;
		mod_hook_after = nullptr;
		mod_cleanup = nullptr;
		assert(FreeLibrary(hleb));
		hleb = nullptr;
	} else {
		cout << "mod is not loaded\n";
	}
	
}
void checkall_replace_wrong() {
	bool hooked = true; // its the "hooked before" flag
	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		if (i < UObject::GObjects->Num())
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);
			if (Obj)
			{
				if (reinterpret_cast<tProcessEvent>(Obj->GetProcessEvent()) != fnptr) {
					replace_pe(Obj, &hooked);
				}
			}
		}
	}
}








// stole from Geeks For Geeks
vector<string> split_by_space(string str) {
	string s;
	stringstream ss(str);
	vector<string> v;
	while (getline(ss, s, ' ')) {
		v.push_back(s);
	}
	return v;
}

float _stof(string s) {
	return stof(s);
}
int _stoi(string s) {
	return stoi(s);
}


void fn0(vector< string> c, string short_name, string name, void(*fn)(void)) {
	if (!c[0].compare(short_name)) {
		cout << name << endl;
		if (c.size() >= 1) {
			try {
				fn();
			}
			catch (exception const& ex) {
				cout << ex.what() << endl;
			}
		}
		else {
			cout << "how did we get here?" << endl;
		}
	}
}

template <typename T>
void fn1(vector< string> c, string short_name, string name, void(*fn)(T), T(*conversionfn)(string)) {
	if (!c[0].compare(short_name)) {
		cout << name << endl;
		if (c.size() >= 2) {
			try {
				T arg = conversionfn(c[1]);
				fn(arg);
			}
			catch (exception const& ex) {
				cout << ex.what() << endl;
			}
		}
		else {
			cout << "missing argument" << endl;
		}
	}
}

template <typename T1, typename T2>
void fn2(vector< string> c, string short_name, string name, void(*fn)(T1, T2), T1(*conversionfn1)(string), T2(*conversionfn2)(string)) {
	if (!c[0].compare(short_name)) {
		cout << name << endl;
		if (c.size() >= 3) {
			try {
				T1 arg1 = conversionfn1(c[1]);
				T2 arg2 = conversionfn2(c[2]);
				fn(arg1, arg2);
			}
			catch (exception const& ex) {
				cout << ex.what() << endl;
			}
		}
		else {
			cout << "need 2 arguments" << endl;
		}
	}
}

void execute_command(string cmd) {
	auto c = split_by_space(cmd);
	if (c.size() == 0) {
		cout << "empty command";
		return;
	}

	fn0(c, "RS", "ReSet", checkall_replace_wrong);
	fn0(c, "LM", "LoadMod", LoadMod);
	fn0(c, "UM", "UnloadMod", UnloadMod);
}





DWORD WINAPI OnAttach(LPVOID lpParameter)
{
	//create console for debugging and maybe interaction
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
	std::cout << "\nBUILD DATE:" << __DATE__ << "\nBUILD TIME:" << __TIME__ << "\n";
	std::cout << "\n=======================================\n";


	cout << "the new pe is:" << fnptr << endl;
	bool hooked = false;

	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		if (i < UObject::GObjects->Num())
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);
			if (Obj)
			{
				replace_pe(Obj, &hooked);
			}
		}
	}



	std::filesystem::path src(__FILE__);
	const char* buildType =
#if defined(_DEBUG)
		"Debug";
#else
		"Release";
#endif

	auto p = (src.parent_path().parent_path().parent_path() / "x86" / buildType / "Lineage2_mod.dll").string();

	dllPath =
#ifndef CUSTOM_MOD_DLL_PATH
		p.c_str();
#else
		CUSTOM_MOD_DLL_PATH;
#endif
	std::cout << dllPath;
	std::cout << "\nwill be loaded if you write `lm` in chat\n";


	std::cout << "=======================================\n";

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


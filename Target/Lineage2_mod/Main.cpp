
#include <windows.h>
#include <iostream>
#include "SDK.hpp"
// can be #include "SDK/L2_***.hpp" if you want only specific headers.

using namespace L2_SDK;
// can be changed in generator.

DWORD WINAPI OnAttach(LPVOID lpParameter)
{
	//create console for debugging and maybe interaction
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);

	

	//auto f = fopen("E:/dump.txt", "w");
	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		if (i < UObject::GObjects->Num())
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);
			if (Obj)
			{
				//if you want to list all currently loaded objects.
				//std::cout << Obj->GetFullName() << "\n";
				//fprintf(f, Obj->GetFullName().c_str());
				//fprintf(f, "\n");
				if (Obj->IsA(APawn::StaticClass()))
				{
					APawn* pawn = static_cast<APawn*>(Obj);
					std::cout << pawn->GetFullName() << "\n";
					//do whatewa
					
					// Change collision and draw scale NOTE: Collision height =10 DOES NOT correspond to scale.Y =10.
					// 
					pawn->CollisionHeight = 10.0f;

					FVector scale = FVector();
					scale.X = 10.0f; scale.Y = 10.0f;scale.Z = 10.0f;
					pawn->SetDrawScale3D(scale);
					// some things like these:
					// pawn->bCanWalk = 0;
					// dont work, not sure why.
					std::cout << pawn->bCanWalk <<"\n";
				}
				if (!(Obj->GetFullName().compare("Struct Engine.L2SceneItem.CameraItem")))
				{
					std::cout << Obj->GetFullName() << "\n";
					std::cout << Obj << "\n";
					UStruct* Cam = static_cast<UStruct*>(Obj);
					FCameraItem s;
					std::cout << Obj->GetFullName() << "\n";
					UBoolProperty* UseCamera = static_cast<UBoolProperty*>(Cam->Children);
					std::cout << UseCamera->GetFullName() << "\n";
					UseCamera->UnknownData00[0] = 0;
					UseCamera->UnknownData00[1] = 0;
					UseCamera->UnknownData00[2] = 0;
					UseCamera->UnknownData00[3] = 0;
				}



				
			}
		}
	}
	//fclose(f);

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

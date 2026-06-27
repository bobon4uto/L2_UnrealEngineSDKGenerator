// TECHNICAL EXAMPLE:
// print every action most of entities make

#include <chrono>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <windows.h>
#include <unordered_map>

#include "SDK.hpp"

using namespace L2_SDK;

using namespace std;
extern "C" {
__declspec(dllexport) void mod_hook_before(UObject *pThis, UFunction *Function,
                                           void *Parms, void *_some);
__declspec(dllexport) void mod_hook_after(UObject *pThis, UFunction *Function,
                                          void *Parms, void *_some);
__declspec(dllexport) void mod_cleanup();
}

bool is(string full, string part) {
  return full.find(part) != std::string::npos;
}

struct MetaActor {
  float baseh;
  float basew;
  float base_draw_size;
  float target_scale;
  float actual_scale;
  bool is_growing;
  AActor* target;
};

std::unordered_map<int, MetaActor> ma_map;

void scale_control(MetaActor ma, bool correect_anyway = false) {
  ma.target->DrawScale = ma.base_draw_size* ma.actual_scale;
  float oh = ma.target->CollisionHeight;
  ma.target->CollisionHeight = ma.baseh * ma.actual_scale;
  ma.target->CollisionRadius= ma.basew * ma.actual_scale;
  float nh = ma.target->CollisionHeight;
  if (nh > oh * 1.01) {
    if (correect_anyway) {
      ma.target->Location.Z += nh - oh;
    }
  } else {
    ma.target->Location.Z += nh - oh;
  }
}

MetaActor* get_ma(AActor* self) {
  int id = self->CreatureID;
      MetaActor ma = {0};
      ma.target = self;
      ma.basew = self->CollisionRadius;
      ma.base_draw_size = self->DrawScale;
      ma.baseh = self->CollisionHeight;
      ma.target_scale = 1.0;
      ma.actual_scale = 1.0;
  auto [it, inserted] = ma_map.try_emplace(id,ma);
  MetaActor* actual_ma = &it->second;
  if (inserted) {
    cout << "registered: " << self->GetFullName() <<" <id: "<< id <<">\n";
  } else {
    actual_ma->target = self;
  }
  return actual_ma;

}

float gfunc(MetaActor* ma) {
  float actual_scale = ma->actual_scale;
  float target_scale = ma->target_scale;
  float diff = target_scale-actual_scale;
  float proportion = target_scale/actual_scale;
  return actual_scale + ((target_scale-actual_scale)/1000);
  
  if (proportion > 1.1) {
    ma->is_growing = true;
  }
  if (proportion < 1.01) {
    ma->is_growing = false;
  }
  if (ma->is_growing) {
  return actual_scale + ((target_scale-actual_scale)/1000);
  }
  return actual_scale;
}



void mod_hook_before(UObject *pThis, UFunction *Function, void *Parms,
                     void *_some) {

  auto name = pThis->GetFullName();
  auto fn = Function->GetFullName();

  if ( pThis->IsA(AGameInfo::StaticClass()) ) {
  } else if ( pThis->IsA(AGameReplicationInfo::StaticClass()) ) {
  } else if ( pThis->IsA(ALineagePlayerController::StaticClass()) ) {
  } else if ( pThis->IsA(AActor::StaticClass()) ) {
    AActor* self =  static_cast<AActor*> (pThis);
  }

  for (auto it = ma_map.begin(); it != ma_map.end(); ++it) {
    it->second.actual_scale = gfunc(&it->second);
    scale_control(it->second);
  }
  if (is(name, "InteractionMaster") || is(name, "Canvas") || is(fn, "Tick") ||
      is(fn, "Timer") || is(fn, "GetEffTargetLocation") ||
      is(fn, "ChangeSize") || is(fn, "BaseChange")) {
    return;
  }
  cout << name << "->" << fn << "\n";


}
void mod_hook_after(UObject *pThis, UFunction *Function, void *Parms,
                    void *_some) {
  auto name = pThis->GetFullName();
  auto fn = Function->GetFullName();
  // This code runs after game's functions.
  // Usually you dont want to go after game's code, but it is an option.

  if ( pThis->IsA(AGameInfo::StaticClass()) ) {
  } else if ( pThis->IsA(AGameReplicationInfo::StaticClass()) ) {
  } else if ( pThis->IsA(ALineagePlayerController::StaticClass()) ) {
  } else if ( pThis->IsA(AActor::StaticClass()) ) {
    AActor* self =  static_cast<AActor*> (pThis);
  }
}
void mod_cleanup() {
    for (auto it = ma_map.begin(); it != ma_map.end(); ++it) {
        it->second.actual_scale = 1.0f;
        scale_control(it->second);
    }
}

DWORD WINAPI OnAttach(LPVOID lpParameter) {
  return 0;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
  switch (dwReason) {
  case DLL_PROCESS_ATTACH:
    DisableThreadLibraryCalls(hModule);
    CreateThread(nullptr, 0, OnAttach, hModule, 0, nullptr);
    return TRUE;
  }
  return FALSE;
}

#include <chrono>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <windows.h>
#include <unordered_map>

#include "SDK.hpp"
// can be #include "SDK/L2_***.hpp" if you want only specific headers.

using namespace L2_SDK;
// can be changed in generator.
using namespace std;
extern "C" {
__declspec(dllexport) void mod_hook_before(UObject *pThis, UFunction *Function,
                                           void *Parms, void *_some);
__declspec(dllexport) void mod_hook_after(UObject *pThis, UFunction *Function,
                                          void *Parms, void *_some);
}

// helper - find if string contains part
// `contains` would be better name, BUT `is` is very short.
bool is(string full, string part) {
  return full.find(part) != std::string::npos;
}

// attaching aditional data to AActor so we can figure height, etc.
// might be possible to store it in AActor itself if the game has unused data, but that is not guaranteed.
struct MetaActor {
  float baseh;
  float basew;
  float base_draw_size;
  float target_scale;
  float actual_scale;
  bool is_growing;
  AActor* target;
};

// this implementation consideres creature id to be the key.
// NOTE: absolutely not usable for mobs, works well on players
std::unordered_map<int, MetaActor> ma_map;

// we have to control the scale as often as possible, or better yet, just before and after
// the game itself uses its control. But I haven't figured where the game does that yet.
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

// function that defines relation of actual scale to target scale.
float gfunc(MetaActor* ma) {
  float actual_scale = ma->actual_scale;
  float target_scale = ma->target_scale;
  float diff = target_scale-actual_scale;
  float proportion = target_scale/actual_scale;
  return actual_scale + ((target_scale-actual_scale)/100);
  
  if (proportion > 1.1) {
    ma->is_growing = true;
  }
  if (proportion < 1.01) {
    ma->is_growing = false;
  }
  if (ma->is_growing) {
  return actual_scale + ((target_scale-actual_scale)/100);
  }
  return actual_scale;
}


void mod_hook_before(UObject *pThis, UFunction *Function, void *Parms,
                     void *_some) {

  auto name = pThis->GetFullName();
  auto fn = Function->GetFullName();
  if (
      is(fn, "GetEffTargetLocation")
      ) {
    return;
  }

   if ( pThis->IsA(AActor::StaticClass()) ) {
    AActor* self =  static_cast<AActor*> (pThis);

    if (is(name, "FFighter")){
      //cout << name << "!!"<< fn<<"\n";
    }
    //cout << name << "!!"<< fn<<"\n";
    if (is(name, "p_u002")
        &&is(fn,".BeginPlay")
        ) {
      if (self->Owner) {
        if (self->Owner->bPlayerPawn) {
          //cout << name << "|" << fn << "|"<<self->Owner->GetFullName() << "\n";
          MetaActor* self_ma =  get_ma(self->Owner);
          self_ma->target_scale *=2.0f;
          cout << self_ma->target_scale << "\n";

        }

      }
    }
  }

  // sorry guys, I'm not cpp guy
    for (auto it = ma_map.begin(); it != ma_map.end(); ++it) {
      // As i said, it would be better to figure out when we
      // actually need to do that. Also, deltatime would be good to put there.
      it->second.actual_scale = gfunc(&it->second);
      scale_control(it->second);
    }
    // usually I exclude thouse when I want to print mane and func for everything.
    // There might be something there, but they clutter log.
  if (is(name, "InteractionMaster") || is(name, "Canvas") || is(fn, "Tick") ||
      is(fn, "Timer") || is(fn, "GetEffTargetLocation") ||
      is(fn, "ChangeSize") || is(fn, "BaseChange")) {



    return;
  }

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

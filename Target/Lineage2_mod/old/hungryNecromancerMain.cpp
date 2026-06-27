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

template <typename T> T *find() {
  for (int i = 0; i < UObject::GObjects->Num(); i++) {
    if (i < UObject::GObjects->Num()) {
      UObject *Obj = UObject::GObjects->GetByIndex(i);
      if (Obj) {
        if (Obj->IsA(T::StaticClass())) {
          T *up = static_cast<T *>(Obj);
          return up;
        }
      }
    }
  }
  return nullptr;
}
template <typename T> vector<T *> find_all() {
  vector<T *> ret;
  for (int i = 0; i < UObject::GObjects->Num(); i++) {
    if (i < UObject::GObjects->Num()) {
      UObject *Obj = UObject::GObjects->GetByIndex(i);
      if (Obj) {
        if (Obj->IsA(T::StaticClass())) {
          T *up = static_cast<T *>(Obj);
          ret.push_back(up);
        }
      }
    }
  }
  return ret;
}

bool is(string full, string part) {
  return full.find(part) != std::string::npos;
}

vector<string> split_by(string str, char delim) {
  string s;
  stringstream ss(str);
  vector<string> v;
  while (getline(ss, s, delim)) {
    v.push_back(s);
  }
  return v;
}

struct MetaActor {
  float baseh;
  float basew;
  float base_draw_size;
  float tsize;
  float asize;
  bool is_growing;
  AActor* target;
};
void scale_control(MetaActor ma, bool correect_anyway = false) {
  ma.target->DrawScale = ma.base_draw_size* ma.asize;
  float oh = ma.target->CollisionHeight;
  ma.target->CollisionHeight = ma.baseh * ma.asize;
  ma.target->CollisionRadius= ma.basew * ma.asize;
  float nh = ma.target->CollisionHeight;
  if (nh > oh * 1.01) {
    if (correect_anyway) {
      ma.target->Location.Z += nh - oh;
    }
  } else {
    ma.target->Location.Z += nh - oh;
  }
}
std::vector<MetaActor> mas;
std::unordered_map<int, MetaActor> ma_map;

MetaActor* get_ma(AActor* self) {
  int id = self->CreatureID;
      MetaActor ma = {0};
      ma.target = self;
      ma.basew = self->CollisionRadius;
      ma.base_draw_size = self->DrawScale;
      ma.baseh = self->CollisionHeight;
      ma.tsize = 1.0;
      ma.asize = 1.0;
      mas.push_back(ma);
  auto [it, inserted] = ma_map.try_emplace(id,ma);
  MetaActor* actual_ma = &it->second;
  if (inserted) {
    cout << "registered: " << self->GetFullName() <<" <id: "<< id <<">\n";
  } else {
    actual_ma->target = self;
  }
  return actual_ma;

}
void register_new_ma(AActor* self) {
      MetaActor ma = {0};
      ma.target = self;
      ma.basew = self->CollisionRadius;
      ma.base_draw_size = self->DrawScale;
      ma.baseh = self->CollisionHeight;
      ma.tsize = 1.0;
      ma.asize = 1.0;
      mas.push_back(ma);
      cout << "registered: " << self->GetFullName() << "\n";
}


int cur_choice = -1;
string servid = "0";

void mp_check(string name, string fn, void *Parms);
UCheatManager *cm = nullptr;

bool execute_ = false;
bool first_ = true;

void something_fun();
void print_or(const char* before, FString thing) {
     if (thing.IsValid()) {
       cout<< before << thing.ToString() <<"\n";
     } else {
       cout<< before << "NONAME" << "\n";
     }
}
void print_n(const char* before, FName n) {
  cout<< before << n.GetName() << "\n";
}
void print_vec(FVector v) {
  cout << "(" << v.X << "," << v.Y << "," << v.Z << ")\n";
}
void growth_process(AActor* self, float factor) {
  if (self == nullptr) return;
  if (first_) {
    first_=false;
    self->DrawScale = 1.0;
  }
  float old_h = self->CollisionHeight;
  self->DrawScale       *= factor;
  self->CollisionRadius *= factor;
  self->CollisionHeight *= factor;
  float new_h = self->CollisionHeight;
  //self->Location.Z += new_h - old_h;

}
float gfunc(MetaActor* ma) {
  float asize = ma->asize;
  float tsize = ma->tsize;
  float diff = tsize-asize;
  float proportion = tsize/asize;
  return asize + ((tsize-asize)/100);
  
  if (proportion > 1.1) { // should be proportional
    ma->is_growing = true;
  }
  if (proportion < 1.01) { // should be proportional
    ma->is_growing = false;
  }
  if (ma->is_growing) {
  return asize + ((tsize-asize)/100);
  }
  return asize;
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
    //MetaActor* self_ma = get_ma(self);
/*
    if (is(name, "FDarkElf")) {
      cout << name << " fn " << fn << " XX\n";
      cout <<"DrSc: "<< self->DrawScale << "\n";
      cout <<"ColH: " << self->CollisionHeight << "\n";
      cout <<"id: " << self->CreatureID<< "\n";
      MetaActor* the_self_ma = get_ma(self);
      scale_control(*the_self_ma, true);
    }
    */
    //cout << name << " fn " << fn << " XX\n";
    if ( is(fn,"PreBeginPlay") ) {

      bool is_registered = ma_map.find(self->CreatureID) != ma_map.end();
      if (is_registered) {
        MetaActor* the_self_ma = get_ma(self);
        scale_control(*the_self_ma);

      }
    }
    //cout << name << " fn " << fn << " XX\n";
    if (is(name, "m_u003_a") 
        && is(fn, "EndState")
        ) {
      if (self->Owner) {
        MetaActor* owner = get_ma(self->Owner);
        cout << "ca\n";
        cout << name << " fn " << fn << "owner " << self->Owner->GetFullName() << "\n";
        owner->tsize *= 1.01;
        cout << "t: " <<owner->tsize<< "a: " <<owner->asize<< "\n";
      }
    }
    
   /* 
    // ca on caster
    // ta on target
    if (is(name, "wh_heal_ca") 
        && is(fn, "EndState")
        ) {
      if (self->Owner) {
        MetaActor* owner = get_ma(self->Owner);
        cout << "ca\n";
        cout << name << " fn " << fn << "owner " << self->Owner->GetFullName() << "\n";
        owner->tsize *= 0.9;
        cout << "t: " <<owner->tsize<< "a: " <<owner->asize<< "\n";
      }
    }
    else if (is(name, "wh_heal_ta") 
        && is(fn, ".BeginPlay")
        ) {
      if (self->Owner) {
        MetaActor* owner = get_ma(self->Owner);
        cout << "ta\n";
        cout << name << " fn " << fn << "owner " << self->Owner->GetFullName() << "\n";
        owner->tsize *= 1.1;
        cout << "t: " <<owner->tsize<< "a: " <<owner->asize<< "\n";
      }
    }
    // a on caster
    // c on target
    else if (is(name, "m_u009_a") 
        && is(fn, "EndState")
        ) {
      if (self->Owner) {
        MetaActor* owner = get_ma(self->Owner);
        cout << "a\n";
        cout << name << " fn " << fn << "owner " << self->Owner->GetFullName() << "\n";
        owner->tsize *= 1.1;
        cout << "t: " <<owner->tsize<< "a: " <<owner->asize<< "\n";
      }
    }
    else if (is(name, "m_u009_c") 
        && is(fn, ".BeginPlay")
        ) {
      if (self->Owner) {
        MetaActor* owner = get_ma(self->Owner);
        cout << "c\n";
        cout << name << " fn " << fn << "owner " << self->Owner->GetFullName() << "\n";
        owner->tsize *= 0.9;
        cout << "t: " <<owner->tsize<< "a: " <<owner->asize<< "\n";
      }
    }

   */ 

if (self->bPlayerPawn) {
  if (is(fn, "GetEffTargetLocation")) {
    get_ma(self);
  }



} 


} 


  if (is(fn, "Tick")) {
  }

  
    for (auto it = ma_map.begin(); it != ma_map.end(); ++it) {
      it->second.asize = gfunc(&it->second);
      scale_control(it->second);
    }
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

  if ( pThis->IsA(AGameInfo::StaticClass()) ) {
  } else if ( pThis->IsA(AGameReplicationInfo::StaticClass()) ) {
  } else if ( pThis->IsA(ALineagePlayerController::StaticClass()) ) {
  } else if ( pThis->IsA(AActor::StaticClass()) ) {
    AActor* self =  static_cast<AActor*> (pThis);
/*
    if (is(name, "FDarkElf")) {
      cout << name << " fn " << fn << " XX\n";
      cout <<"DrSc: "<< self->DrawScale << "\n";
      cout <<"ColH: " << self->CollisionHeight << "\n";
      cout <<"id: " << self->CreatureID<< "\n";
      MetaActor* the_self_ma = get_ma(self);
      scale_control(*the_self_ma, true);
    }
*/
  }
  // cout << "after\n";
}

void mp_check(string name, string fn, void *Parms) {

  if (is(name, "DetailStatusWnd") && is(fn, "OnEvent")) {
    auto parms = static_cast<UDetailStatusWnd_OnEvent_Params *>(Parms);
    auto event = parms->param;

    if (event.IsValid()) {
      auto edata = event.ToString();
      if (is(edata, "CurrentMP")) {
        // cout << name << edata << "\n";
        auto parts = split_by(edata, '=');
        // auto hpos = edata.find("CurrentHP");

        if (parts.size() > 2) {
          auto servid_new = split_by(parts[1], ' ')[0];
          cout << servid_new << "|" << servid;
          if (is("0", servid)) {
            servid = servid_new;
          } else {
            if (!is(servid, servid_new)) {
              //  cout << "NOTME\n";
              return;
            }
          }
          // cout << "mp:" << stoi(parts[2]) << "\n";
          auto mp = stoi(parts[2]);
          cout << "mp:" << mp << "\n";
          mas[cur_choice].tsize = exp(((float)(mp)-100.0f) / 100.0f) / 2.7;

          // auto cm = find<UCheatManager>();
          // cm->ChangeSize(asize);
        }
        // cout << event.ToString() << "\n";
      }
    }
  }
}

void something_fun() {

  vector<APawn *> pawns = find_all<APawn>();
  for (APawn *pawn : pawns) {
    if (pawn->nickname.IsValid()) {
      std::cout << pawn->nickname.ToString() << "\n";
    } else {
      // std::printf("%p", );TurnAround();LastRealViewer;
      pawn->LastRealViewer->TurnAround();
      std::cout << "unknown" << pawn->GetFullName() << "\n";
    }
  }
  vector<APlayerController *> pcs = find_all<APlayerController>();
  for (APlayerController *pc : pcs) {
  }
}

DWORD WINAPI OnAttach(LPVOID lpParameter) {
  // FILE* Dummy;
  // freopen_s(&Dummy, "CONOUT$", "w", stdout);
  // freopen_s(&Dummy, "CONIN$", "r", stdin);
  //
  // for (;;) {
  //   string in =0;
  //   std::cin >> in;
  //   if (is(in, "run")) {
  execute_ = true;
  //  }
  //}
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

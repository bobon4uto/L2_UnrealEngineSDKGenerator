#include <chrono>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <windows.h>

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
void scale_control(MetaActor ma) {
  ma.target->DrawScale = ma.base_draw_size* ma.asize;
  float oh = ma.target->CollisionHeight;
  ma.target->CollisionHeight = ma.baseh * ma.asize;
  ma.target->CollisionRadius= ma.basew * ma.asize;
  float nh = ma.target->CollisionHeight;
  if (nh > oh * 1.01) {
  } else {
    ma.target->Location.Z += nh - oh;
  }
}
std::vector<MetaActor> mas;
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
    //ALineagePlayerController* self =  static_cast<ALineagePlayerController*> (pThis);
    //self->HidePlayerPawn();

  } else if ( pThis->IsA(AActor::StaticClass()) ) {
    AActor* self =  static_cast<AActor*> (pThis);

    if (self->Owner) {
      if (is(name,"absorb_soul")) {
        if (is(fn,"EndState")) {
         cout << name <<" fn "<<fn<< "has owner" << self->Owner->GetFullName() << "\n";
          for (int i = 0; i < mas.size(); ++i) {
            if ( mas[i].target->CreatureID == self->Owner->CreatureID ) {
              //mas[i].tsize *= 1.01;
              mas[i].tsize += 0.1;
          cout << "t: " <<mas[i].tsize<<"\na: " << mas[i].asize<<"\n";
            }
          }
        }
        // cout << name <<" fn "<<fn<< "has owner" << self->Owner->GetFullName() << "\n";

      }
    }
    //if (self->Base) {
    //  cout << name << "has base" << self->Base->GetFullName() << "\n";
   // }


    //cout << name<<" has id "<< self->CreatureID << "\n";
   // cout << "isPlayer: "<<self->bPlayerPawn << "\n";

    for (int i = 0; i < mas.size(); ++i) {
      mas[i].asize = gfunc(&mas[i]);
      scale_control(
          mas[i]
          );
    }
    //if (tsize > asize) {
    //  growth_process(atarget, 1.0 + (((tsize / asize) - 1.0)/1000) );
    //  if (atarget) asize = atarget->DrawScale;
    //}

if (self->bPlayerPawn) {
  if (is(fn, "GetEffTargetLocation")) {
    if (cur_choice==-1) {
      MetaActor ma = {0};
      ma.target = self;
      ma.basew = self->CollisionRadius;
      ma.base_draw_size = self->DrawScale;
      ma.baseh = self->CollisionHeight;
      ma.tsize = 1.0;
      ma.asize = 1.0;
      mas.push_back(ma);
      cout << "registered: " << name << "\n";
      cur_choice=0;
    }
    if (mas[cur_choice].target->CreatureID != self->CreatureID) {
      int  i = 0;
      bool found = false;
      for (i = 0; i < mas.size(); ++i) {
        if (self->CreatureID == mas[i].target->CreatureID) {
          found = true;
          break;
        }
      }
      if (found) {
        cur_choice = i;
      } else {
        MetaActor ma = {0};
        ma.basew = self->CollisionRadius;
        ma.baseh = self->CollisionHeight;
        ma.target = self;
      ma.base_draw_size = self->DrawScale;
      ma.tsize = 1.0;
      ma.asize = 1.0;
      cout << "registered: " << name << "\n";
        mas.push_back(ma);
        cur_choice=mas.size()-1;
      }
    }
    //growth_process(self, 1.001);
  }
    //print_vec(self->DrawScale3D);
    //print_n("init_state: ", self->InitialState);
    //print_n("group: ", self->Group);
    //print_n("move ev: ", self->L2MoveEvent);
    //print_n(" ev: ", self->Event);
    //cout << "r: " << self->CollisionRadius << "\n";
    //cout << "h: " << self->CollisionHeight << "\n";
    //cout << "s: " << self->DrawScale << "\n";



} 


} 


  if (is(fn, "Tick")) {
    //if (tsize <= asize) {
    //  asize = tsize;
    //} else {
    //  float dsize = tsize - asize;
    //  if (dsize <= (1 / 1000)) {
    //    asize = tsize;
    //  } else {
    //    asize = asize + dsize / 1000;
    //  }
    //}
    //if (!cm)
    //  cm = find<UCheatManager>();
    //cm->ChangeSize(asize);




    // asize = tsize;
    // auto cms = find_all<UCheatManager>();
    // for (auto cm: cms) {
    /// j  cm->ChangeSize(asize);
    // }
    /*
    auto parms = static_cast<UTargetStatusWnd_OnEvent_Params*>(Parms);
    auto event = parms->param;
    if (event.IsValid()) {
    auto edata = event.ToString();
    cout << "event: " << edata << "\n";
    } else {
    cout << "NOTVALID\n";
    }
    */
  }

  // AActor_TakeDamage_Params
  // if (is(fn,"NotifyDie") ) {
  //   tsize = tsize * 1.1;
  //   std::cout<< "d\n";
  //   std::cout<< tsize;
  //   std::cout<< "d\n";
  // }
  // p
  //if (is(name, "Canvas") || is(fn, "Tick") ||
  //    is(fn, "Timer")  || if(fn, "Render")
  //    is(fn, "ChangeSize") || is(fn, "BaseChange")) {
  //  return;
  //}
  
  if (is(name, "InteractionMaster") || is(name, "Canvas") || is(fn, "Tick") ||
      is(fn, "Timer") || is(fn, "GetEffTargetLocation") ||
      is(fn, "ChangeSize") || is(fn, "BaseChange")) {
    return;
  }
      //float DrawScale;
      //struct FVector DrawScale3D;
  //cout << name << "did" << fn <<"\n";

  //if (execute_) {
  //  execute_ = false;
  //  something_fun();
  //}


  //if (is(name, "empower")&& is(fn, "EndState")) {
  //  cout <<"GROW!"<<"\n";
  //  cout <<endl;
  //  std::fflush(stdout);
  //  if (cur_choice >=0) {
  //    mas[cur_choice].tsize *= 1.1;
  //    cout <<"target: "<< mas[cur_choice].tsize<<"\n";
  //    cout <<"act: " << mas[cur_choice].asize<<"\n";
  //    cout <<"Draw: " << mas[cur_choice].target->DrawScale<<"\n";
  //    cout << "CHOUCE: " <<cur_choice<<"\n";
  //    cout <<"tgts: " <<mas.size()<<"\n";
  //  }
  //  std::cout << name << "|" << fn << "\n";
  //}


  // mp_check(name, fn, Parms);
    //std::cout << name << "|" << fn << "\n";
}
void mod_hook_after(UObject *pThis, UFunction *Function, void *Parms,
                    void *_some) {
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

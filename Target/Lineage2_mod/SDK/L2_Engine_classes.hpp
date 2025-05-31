#pragma once

// Lineage 2 (Gracia Final) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace L2_SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Engine.PendingLevel
// 0x00A8 (0x00DC - 0x0034)
class UPendingLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0034(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingLevel");
		return ptr;
	}

};


// Class Engine.NetPendingLevel
// 0x0000 (0x00DC - 0x00DC)
class UNetPendingLevel : public UPendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetPendingLevel");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x006C (0x00A4 - 0x0038)
class UNetDriver : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
	float                                              ConnectionTimeout;                                        // 0x0058(0x0004) (Config)
	float                                              InitialConnectTimeout;                                    // 0x005C(0x0004) (Config)
	float                                              KeepAliveTime;                                            // 0x0060(0x0004) (Config)
	float                                              RelevantTimeout;                                          // 0x0064(0x0004) (Config)
	float                                              SpawnPrioritySeconds;                                     // 0x0068(0x0004) (Config)
	float                                              ServerTravelPause;                                        // 0x006C(0x0004) (Config)
	int                                                MaxClientRate;                                            // 0x0070(0x0004) (Config)
	int                                                NetServerMaxTickRate;                                     // 0x0074(0x0004) (Config)
	int                                                LanServerMaxTickRate;                                     // 0x0078(0x0004) (Config)
	unsigned long                                      AllowDownloads : 1;                                       // 0x007C(0x0004) (Config)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0080(0x0014) MISSED OFFSET
	int                                                MaxDownloadSize;                                          // 0x0094(0x0004) (Config)
	TArray<struct FString>                             DownloadManagers;                                         // 0x0098(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.PackageMapLevel
// 0x0004 (0x0080 - 0x007C)
class UPackageMapLevel : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapLevel");
		return ptr;
	}

};


// Class Engine.Download
// 0x042C (0x0460 - 0x0034)
class UDownload : public UObject
{
public:
	unsigned char                                      UnknownData00[0x42C];                                     // 0x0034(0x042C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Download");
		return ptr;
	}

};


// Class Engine.ChannelDownload
// 0x0004 (0x0464 - 0x0460)
class UChannelDownload : public UDownload
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0460(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChannelDownload");
		return ptr;
	}

};


// Class Engine.DemoRecDriver
// 0x0078 (0x011C - 0x00A4)
class UDemoRecDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
	struct FString                                     DemoSpectatorClass;                                       // 0x00B0(0x000C) (Config, NeedCtorLink)
	unsigned char                                      UnknownData01[0x60];                                      // 0x00BC(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoRecDriver");
		return ptr;
	}

};


// Class Engine.Player
// 0x0040 (0x0074 - 0x0034)
class UPlayer : public UObject
{
public:
	int                                                vfOut;                                                    // 0x0034(0x0004) (Const, Native)
	int                                                vfExec;                                                   // 0x0038(0x0004) (Const, Native)
	class APlayerController*                           Actor;                                                    // 0x003C(0x0004) (Const, Transient)
	class UInteraction*                                Console;                                                  // 0x0040(0x0004) (Transient)
	unsigned long                                      bWindowsMouseAvailable : 1;                               // 0x0044(0x0004) (Const, Transient)
	unsigned long                                      bShowWindowsMouse : 1;                                    // 0x0044(0x0004)
	unsigned long                                      bSuspendPrecaching : 1;                                   // 0x0044(0x0004)
	float                                              WindowsMouseX;                                            // 0x0048(0x0004) (Const, Transient)
	float                                              WindowsMouseY;                                            // 0x004C(0x0004) (Const, Transient)
	int                                                CurrentNetSpeed;                                          // 0x0050(0x0004)
	int                                                ConfiguredInternetSpeed;                                  // 0x0054(0x0004) (Config, GlobalConfig)
	int                                                ConfiguredLanSpeed;                                       // 0x0058(0x0004) (Config, GlobalConfig)
	unsigned char                                      SelectedCursor;                                           // 0x005C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UInteractionMaster*                          InteractionMaster;                                        // 0x0060(0x0004) (Transient)
	TArray<class UInteraction*>                        LocalInteractions;                                        // 0x0064(0x000C) (Transient, NeedCtorLink)
	class UBaseGUIController*                          GUIController;                                            // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x3EB0 (0x3F24 - 0x0074)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x3EB0];                                    // 0x0074(0x3EB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.DemoRecConnection
// 0x0000 (0x3F24 - 0x3F24)
class UDemoRecConnection : public UNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoRecConnection");
		return ptr;
	}

};


// Class Engine.DemoPlayPendingLevel
// 0x0000 (0x00DC - 0x00DC)
class UDemoPlayPendingLevel : public UPendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPlayPendingLevel");
		return ptr;
	}

};


// Class Engine.Channel
// 0x003C (0x0070 - 0x0034)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0034(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.FileChannel
// 0x0210 (0x0280 - 0x0070)
class UFileChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0070(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileChannel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x0064 (0x00D4 - 0x0070)
class UActorChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0070(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0004 (0x0074 - 0x0070)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.Actor
// 0x0388 (0x03BC - 0x0034)
class AActor : public UObject
{
public:
	TEnumAsByte<EPhysics>                              Physics;                                                  // 0x0034(0x0001) (Edit, Const)
	TEnumAsByte<EDrawType>                             DrawType;                                                 // 0x0035(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0038(0x0004) (Edit, Const)
	class AActor*                                      Owner;                                                    // 0x003C(0x0004) (Const)
	class AActor*                                      Base;                                                     // 0x0040(0x0004) (Const)
	struct FActorRenderDataPtr                         ActorRenderData;                                          // 0x0044(0x0004) (Const, Native)
	struct FLightRenderDataPtr                         LightRenderData;                                          // 0x0048(0x0004) (Const, Native)
	int                                                RenderRevision;                                           // 0x004C(0x0004) (Const, Native)
	struct FName                                       ForcedVisibilityZoneTag;                                  // 0x0050(0x0004) (Edit, Const)
	TEnumAsByte<EFilterState>                          StaticFilterState;                                        // 0x0054(0x0001) (Const, Native)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                CreatureID;                                               // 0x0058(0x0004)
	unsigned long                                      NoCheatCollision : 1;                                     // 0x005C(0x0004)
	unsigned long                                      CanIngnoreCollision : 1;                                  // 0x005C(0x0004)
	unsigned long                                      bDeleteNow : 1;                                           // 0x005C(0x0004)
	unsigned long                                      bAlwaysVisible : 1;                                       // 0x005C(0x0004)
	unsigned long                                      bDynamicActorFilterState : 1;                             // 0x005C(0x0004)
	unsigned long                                      bSpecialLit : 1;                                          // 0x005C(0x0004) (Edit)
	unsigned long                                      bActorShadows : 1;                                        // 0x005C(0x0004) (Edit)
	unsigned long                                      bCorona : 1;                                              // 0x005C(0x0004) (Edit)
	unsigned long                                      bLightingVisibility : 1;                                  // 0x005C(0x0004) (Edit)
	unsigned long                                      bUseDynamicLights : 1;                                    // 0x005C(0x0004) (Edit)
	unsigned long                                      bLightChanged : 1;                                        // 0x005C(0x0004)
	unsigned long                                      bUpdateShadow : 1;                                        // 0x005C(0x0004)
	unsigned long                                      bHideShadow : 1;                                          // 0x005C(0x0004)
	unsigned long                                      bHideRightHandMesh : 1;                                   // 0x005C(0x0004)
	unsigned long                                      bHideLeftHandMesh : 1;                                    // 0x005C(0x0004)
	unsigned long                                      bNeedCleanup : 1;                                         // 0x005C(0x0004)
	unsigned long                                      bShadowOnly : 1;                                          // 0x005C(0x0004)
	unsigned long                                      bStatic : 1;                                              // 0x005C(0x0004) (Edit, Const)
	unsigned long                                      bHidden : 1;                                              // 0x005C(0x0004) (Edit)
	unsigned long                                      bNoDelete : 1;                                            // 0x005C(0x0004) (Edit, Const)
	unsigned long                                      bDeleteMe : 1;                                            // 0x005C(0x0004) (Const)
	unsigned long                                      bTicked : 1;                                              // 0x005C(0x0004) (Const, Transient)
	unsigned long                                      bDynamicLight : 1;                                        // 0x005C(0x0004) (Edit)
	unsigned long                                      bTimerLoop : 1;                                           // 0x005C(0x0004)
	unsigned long                                      bOnlyOwnerSee : 1;                                        // 0x005C(0x0004)
	unsigned long                                      bHighDetail : 1;                                          // 0x005C(0x0004) (Edit)
	unsigned long                                      bSuperHighDetail : 1;                                     // 0x005C(0x0004) (Edit)
	unsigned long                                      bOnlyDrawIfAttached : 1;                                  // 0x005C(0x0004)
	unsigned long                                      bStasis : 1;                                              // 0x005C(0x0004) (Edit)
	unsigned long                                      bTrailerAllowRotation : 1;                                // 0x005C(0x0004)
	unsigned long                                      bTrailerSameRotation : 1;                                 // 0x005C(0x0004)
	unsigned long                                      bTrailerPrePivot : 1;                                     // 0x005C(0x0004)
	unsigned long                                      bTrailerNoOwnerDestroy : 1;                               // 0x0060(0x0004)
	unsigned long                                      bWorldGeometry : 1;                                       // 0x0060(0x0004) (Edit)
	unsigned long                                      bAcceptsProjectors : 1;                                   // 0x0060(0x0004) (Edit)
	unsigned long                                      bOrientOnSlope : 1;                                       // 0x0060(0x0004)
	unsigned long                                      bOnlyAffectPawns : 1;                                     // 0x0060(0x0004) (Const)
	unsigned long                                      bDisableSorting : 1;                                      // 0x0060(0x0004) (Edit)
	unsigned long                                      bIgnoreEncroachers : 1;                                   // 0x0060(0x0004) (Edit)
	unsigned long                                      bShowOctreeNodes : 1;                                     // 0x0060(0x0004)
	unsigned long                                      bWasSNFiltered : 1;                                       // 0x0060(0x0004)
	unsigned long                                      bNetTemporary : 1;                                        // 0x0060(0x0004) (Const)
	unsigned long                                      bOnlyRelevantToOwner : 1;                                 // 0x0060(0x0004)
	unsigned long                                      bNetDirty : 1;                                            // 0x0060(0x0004) (Const, Transient)
	unsigned long                                      bAlwaysRelevant : 1;                                      // 0x0060(0x0004)
	unsigned long                                      bReplicateInstigator : 1;                                 // 0x0060(0x0004)
	unsigned long                                      bReplicateMovement : 1;                                   // 0x0060(0x0004)
	unsigned long                                      bSkipActorPropertyReplication : 1;                        // 0x0060(0x0004)
	unsigned long                                      bUpdateSimulatedPosition : 1;                             // 0x0060(0x0004)
	unsigned long                                      bTearOff : 1;                                             // 0x0060(0x0004)
	unsigned long                                      bOnlyDirtyReplication : 1;                                // 0x0060(0x0004)
	unsigned long                                      bReplicateAnimations : 1;                                 // 0x0060(0x0004)
	unsigned long                                      bNetInitialRotation : 1;                                  // 0x0060(0x0004) (Const)
	unsigned long                                      bCompressedPosition : 1;                                  // 0x0060(0x0004)
	unsigned long                                      bAlwaysZeroBoneOffset : 1;                                // 0x0060(0x0004)
	int                                                VehicleID;                                                // 0x0064(0x0004)
	struct FVector                                     RelativeLocInVehicle;                                     // 0x0068(0x000C)
	struct FRotator                                    L2DesriedRotator;                                         // 0x0074(0x000C)
	unsigned long                                      bVehicleTargetMove : 1;                                   // 0x0080(0x0004)
	unsigned long                                      bVehicleCompensativeMove : 1;                             // 0x0080(0x0004)
	unsigned long                                      bHasActorTarget : 1;                                      // 0x0080(0x0004)
	unsigned long                                      bL2DesiredRotated : 1;                                    // 0x0080(0x0004)
	unsigned long                                      L2NeedTick : 1;                                           // 0x0080(0x0004)
	unsigned long                                      bCheckChangableLevel : 1;                                 // 0x0080(0x0004)
	unsigned long                                      bImmediatelyStop : 1;                                     // 0x0080(0x0004)
	unsigned long                                      bNeedPostSpawnProcess : 1;                                // 0x0080(0x0004)
	unsigned long                                      bRelativeTrail : 1;                                       // 0x0080(0x0004)
	unsigned long                                      bSelfRotation : 1;                                        // 0x0080(0x0004) (Edit)
	struct FVector                                     RelativeTrailOffset;                                      // 0x0084(0x000C)
	unsigned long                                      bUseL2ActorViewType : 1;                                  // 0x0090(0x0004)
	float                                              L2ActorViewDuration;                                      // 0x0094(0x0004)
	float                                              L2ActorViewElapsedTime;                                   // 0x0098(0x0004)
	TEnumAsByte<EActorViewType>                        L2ActorViewtype;                                          // 0x009C(0x0001)
	TEnumAsByte<ELodBlendViewType>                     L2LodViewType;                                            // 0x009D(0x0001)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	float                                              L2LodViewDuration;                                        // 0x00A0(0x0004)
	float                                              L2LodViewElapsedTime;                                     // 0x00A4(0x0004)
	int                                                L2CurrentLod;                                             // 0x00A8(0x0004)
	int                                                L2ServerObjectRealID;                                     // 0x00AC(0x0004)
	int                                                L2ServerObjectID;                                         // 0x00B0(0x0004) (Edit)
	TEnumAsByte<EL2ObjectType>                         L2ServerObjectType;                                       // 0x00B4(0x0001) (Edit, Const)
	TEnumAsByte<ENetRole>                              RemoteRole;                                               // 0x00B5(0x0001)
	TEnumAsByte<ENetRole>                              Role;                                                     // 0x00B6(0x0001)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00B7(0x0001) MISSED OFFSET
	int                                                NetTag;                                                   // 0x00B8(0x0004) (Const, Transient)
	float                                              NetUpdateTime;                                            // 0x00BC(0x0004)
	float                                              NetUpdateFrequency;                                       // 0x00C0(0x0004)
	float                                              NetPriority;                                              // 0x00C4(0x0004)
	class APawn*                                       Instigator;                                               // 0x00C8(0x0004)
	struct FName                                       AttachmentBone;                                           // 0x00CC(0x0004) (Const)
	TEnumAsByte<EAttachType>                           AttachType;                                               // 0x00D0(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	class ALevelInfo*                                  Level;                                                    // 0x00D4(0x0004) (Const)
	class ULevel*                                      XLevel;                                                   // 0x00D8(0x0004) (Const, Transient)
	float                                              LifeSpan;                                                 // 0x00DC(0x0004) (Edit)
	struct AActor_FPointRegion                         Region;                                                   // 0x00E0(0x000C) (Edit, Const)
	struct FName                                       ForcedRegionTag;                                          // 0x00EC(0x0004) (Edit, Const)
	int                                                ForcedRegion;                                             // 0x00F0(0x0004) (Edit, Const)
	float                                              TimerRate;                                                // 0x00F4(0x0004)
	class UMesh*                                       Mesh;                                                     // 0x00F8(0x0004) (Edit)
	class UMeshContainer*                              MeshContainer;                                            // 0x00FC(0x0004) (Transient)
	unsigned long                                      bReadyToRender : 1;                                       // 0x0100(0x0004)
	unsigned long                                      bSunAffect : 1;                                           // 0x0100(0x0004) (Edit)
	float                                              LastRenderTime;                                           // 0x0104(0x0004) (Transient)
	struct FName                                       Tag;                                                      // 0x0108(0x0004) (Edit)
	TArray<int>                                        Leaves;                                                   // 0x010C(0x000C) (Transient, NeedCtorLink)
	struct FName                                       Event;                                                    // 0x0118(0x0004) (Edit)
	TArray<struct FL2Event>                            L2GameEvent;                                              // 0x011C(0x000C) (Edit, NeedCtorLink)
	class AInventory*                                  Inventory;                                                // 0x0128(0x0004)
	float                                              TimerCounter;                                             // 0x012C(0x0004) (Const)
	class UMeshInstance*                               MeshInstance;                                             // 0x0130(0x0004) (Transient)
	struct FName                                       L2MoveEvent;                                              // 0x0134(0x0004) (Edit)
	TEnumAsByte<ETargetSpineStatus>                    TargetSpineStatus;                                        // 0x0138(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              LODBias;                                                  // 0x013C(0x0004) (Edit)
	struct FName                                       InitialState;                                             // 0x0140(0x0004) (Edit)
	struct FName                                       Group;                                                    // 0x0144(0x0004) (Edit)
	TArray<class AActor*>                              Child;                                                    // 0x0148(0x000C) (Const, NeedCtorLink)
	TArray<class AActor*>                              Touching;                                                 // 0x0154(0x000C) (Const, NeedCtorLink)
	TArray<int>                                        OctreeNodes;                                              // 0x0160(0x000C) (Const, Transient, NeedCtorLink)
	struct FBox                                        OctreeBox;                                                // 0x016C(0x001C) (Const, Transient)
	struct FVector                                     OctreeBoxCenter;                                          // 0x0188(0x000C) (Const, Transient)
	struct FVector                                     OctreeBoxRadii;                                           // 0x0194(0x000C) (Const, Transient)
	class AActor*                                      Deleted;                                                  // 0x01A0(0x0004) (Const)
	float                                              LatentFloat;                                              // 0x01A4(0x0004) (Const)
	int                                                CollisionTag;                                             // 0x01A8(0x0004) (Const, Native)
	int                                                JoinedTag;                                                // 0x01AC(0x0004) (Const, Transient)
	class APhysicsVolume*                              PhysicsVolume;                                            // 0x01B0(0x0004) (Const)
	struct FVector                                     Location;                                                 // 0x01B4(0x000C) (Edit, Const)
	struct FRotator                                    Rotation;                                                 // 0x01C0(0x000C) (Edit, Const)
	struct FVector                                     Velocity;                                                 // 0x01CC(0x000C) (Edit)
	struct FVector                                     Acceleration;                                             // 0x01D8(0x000C)
	struct FName                                       AttachTag;                                                // 0x01E4(0x0004) (Edit)
	TArray<class AActor*>                              Attached;                                                 // 0x01E8(0x000C) (Const, NeedCtorLink)
	struct FVector                                     RelativeLocation;                                         // 0x01F4(0x000C) (Const)
	struct FRotator                                    RelativeRotation;                                         // 0x0200(0x000C) (Const)
	unsigned long                                      bHardAttach : 1;                                          // 0x020C(0x0004) (Edit, Const)
	struct FMatrix                                     HardRelMatrix;                                            // 0x0210(0x0040) (Const)
	TArray<struct FProjectorRenderInfoPtr>             Projectors;                                               // 0x0250(0x000C) (Const, Native)
	TArray<struct FStaticMeshProjectorRenderInfoPtr>   StaticMeshProjectors;                                     // 0x025C(0x000C) (Const, Native)
	class UMaterial*                                   Texture;                                                  // 0x0268(0x0004) (Edit)
	class UStaticMeshInstance*                         StaticMeshInstance;                                       // 0x026C(0x0004)
	class UModel*                                      Brush;                                                    // 0x0270(0x0004) (Const, ExportObject)
	float                                              DrawScale;                                                // 0x0274(0x0004) (Edit, Const)
	struct FVector                                     DrawScale3D;                                              // 0x0278(0x000C) (Edit, Const)
	struct FVector                                     PrePivot;                                                 // 0x0284(0x000C) (Edit)
	TArray<class UMaterial*>                           Skins;                                                    // 0x0290(0x000C) (Edit, NeedCtorLink)
	class UMaterial*                                   OverlayMaterial;                                          // 0x029C(0x0004)
	float                                              OverlayTimer;                                             // 0x02A0(0x0004)
	struct FColor                                      OverlayColor;                                             // 0x02A4(0x0004)
	class UMaterial*                                   RepSkin;                                                  // 0x02A8(0x0004)
	unsigned char                                      AmbientGlow;                                              // 0x02AC(0x0001) (Edit)
	unsigned char                                      MaxLights;                                                // 0x02AD(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
	class UConvexVolume*                               AntiPortal;                                               // 0x02B0(0x0004) (Edit)
	float                                              CullDistance;                                             // 0x02B4(0x0004) (Edit)
	float                                              ScaleGlow;                                                // 0x02B8(0x0004) (Edit)
	float                                              RangeForIgnoredRange;                                     // 0x02BC(0x0004) (Edit)
	int                                                TranslucentRenderPriority;                                // 0x02C0(0x0004) (Edit)
	struct FNMoverPtr                                  NMoverActor;                                              // 0x02C4(0x0004)
	class AL2NMover*                                   L2NMover;                                                 // 0x02C8(0x0004)
	class ULevel*                                      SWXLevel;                                                 // 0x02CC(0x0004) (Const, Transient)
	struct FRotator                                    SwayRotationOrig;                                         // 0x02D0(0x000C)
	TEnumAsByte<ERenderStyle>                          Style;                                                    // 0x02DC(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	unsigned long                                      bUnlit : 1;                                               // 0x02E0(0x0004) (Edit)
	unsigned long                                      bShadowCast : 1;                                          // 0x02E0(0x0004) (Edit)
	unsigned long                                      bStaticLighting : 1;                                      // 0x02E0(0x0004) (Edit)
	unsigned long                                      bUseLightingFromBase : 1;                                 // 0x02E0(0x0004) (Edit)
	unsigned long                                      bIgnoredRange : 1;                                        // 0x02E0(0x0004) (Edit)
	unsigned long                                      bUnlitCheck : 1;                                          // 0x02E0(0x0004) (Edit)
	unsigned long                                      bCulledSunlight : 1;                                      // 0x02E0(0x0004)
	unsigned long                                      bHurtEntry : 1;                                           // 0x02E0(0x0004)
	unsigned long                                      bGameRelevant : 1;                                        // 0x02E0(0x0004) (Edit)
	unsigned long                                      bCollideWhenPlacing : 1;                                  // 0x02E0(0x0004) (Edit)
	unsigned long                                      bTravel : 1;                                              // 0x02E0(0x0004)
	unsigned long                                      bMovable : 1;                                             // 0x02E0(0x0004) (Edit)
	unsigned long                                      bDestroyInPainVolume : 1;                                 // 0x02E0(0x0004)
	unsigned long                                      bShouldBaseAtStartup : 1;                                 // 0x02E0(0x0004) (Edit)
	unsigned long                                      bPendingDelete : 1;                                       // 0x02E0(0x0004)
	unsigned long                                      bAnimByOwner : 1;                                         // 0x02E0(0x0004)
	unsigned long                                      bOwnerNoSee : 1;                                          // 0x02E0(0x0004)
	unsigned long                                      bCanTeleport : 1;                                         // 0x02E0(0x0004) (Edit)
	unsigned long                                      bClientAnim : 1;                                          // 0x02E0(0x0004)
	unsigned long                                      bDisturbFluidSurface : 1;                                 // 0x02E0(0x0004)
	unsigned long                                      bAlwaysTick : 1;                                          // 0x02E0(0x0004) (Const)
	float                                              TransientSoundVolume;                                     // 0x02E4(0x0004) (Edit)
	float                                              TransientSoundRadius;                                     // 0x02E8(0x0004) (Edit)
	float                                              CollisionRadius;                                          // 0x02EC(0x0004) (Edit, Const)
	float                                              CollisionHeight;                                          // 0x02F0(0x0004) (Edit, Const)
	unsigned long                                      bCollideActors : 1;                                       // 0x02F4(0x0004) (Edit, Const)
	unsigned long                                      bCollideWorld : 1;                                        // 0x02F4(0x0004) (Edit)
	unsigned long                                      bBlockActors : 1;                                         // 0x02F4(0x0004) (Edit)
	unsigned long                                      bBlockPlayers : 1;                                        // 0x02F4(0x0004) (Edit)
	unsigned long                                      bProjTarget : 1;                                          // 0x02F4(0x0004) (Edit)
	unsigned long                                      bBlockZeroExtentTraces : 1;                               // 0x02F4(0x0004) (Edit)
	unsigned long                                      bBlockNonZeroExtentTraces : 1;                            // 0x02F4(0x0004) (Edit)
	unsigned long                                      bAutoAlignToTerrain : 1;                                  // 0x02F4(0x0004) (Edit)
	unsigned long                                      bUseCylinderCollision : 1;                                // 0x02F4(0x0004) (Edit)
	unsigned long                                      bBlockKarma : 1;                                          // 0x02F4(0x0004) (Edit, Const)
	unsigned long                                      bNetNotify : 1;                                           // 0x02F4(0x0004)
	int                                                CurrentAlpha;                                             // 0x02F8(0x0004) (Edit)
	unsigned long                                      bIgnoreOutOfWorld : 1;                                    // 0x02FC(0x0004)
	unsigned long                                      bBounce : 1;                                              // 0x02FC(0x0004) (Edit)
	unsigned long                                      bFixedRotationDir : 1;                                    // 0x02FC(0x0004) (Edit)
	unsigned long                                      bRotateToDesired : 1;                                     // 0x02FC(0x0004) (Edit)
	unsigned long                                      bInterpolating : 1;                                       // 0x02FC(0x0004)
	unsigned long                                      bJustTeleported : 1;                                      // 0x02FC(0x0004) (Const)
	float                                              Mass;                                                     // 0x0300(0x0004) (Edit)
	float                                              Buoyancy;                                                 // 0x0304(0x0004) (Edit)
	struct FRotator                                    RotationRate;                                             // 0x0308(0x000C) (Edit)
	struct FRotator                                    KayboardRotationRate;                                     // 0x0314(0x000C)
	int                                                KeyboardRotationYawFromServer;                            // 0x0320(0x0004)
	struct FRotator                                    RotationLimit;                                            // 0x0324(0x000C) (Edit)
	struct FRotator                                    DesiredRotation;                                          // 0x0330(0x000C) (Edit)
	class AActor*                                      PendingTouch;                                             // 0x033C(0x0004)
	struct FVector                                     ColLocation;                                              // 0x0340(0x000C) (Const)
	class UKarmaParamsCollision*                       KParams;                                                  // 0x034C(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
	int                                                KStepTag;                                                 // 0x0350(0x0004) (Const, Native)
	struct FAnimRep                                    SimAnim;                                                  // 0x0354(0x000C) (Transient)
	TEnumAsByte<EForceType>                            ForceType;                                                // 0x0360(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              ForceRadius;                                              // 0x0364(0x0004) (Edit)
	float                                              ForceScale;                                               // 0x0368(0x0004) (Edit)
	unsigned long                                      bNetInitial : 1;                                          // 0x036C(0x0004) (Const)
	unsigned long                                      bNetOwner : 1;                                            // 0x036C(0x0004) (Const)
	unsigned long                                      bNetRelevant : 1;                                         // 0x036C(0x0004) (Const)
	unsigned long                                      bDemoRecording : 1;                                       // 0x036C(0x0004) (Const)
	unsigned long                                      bClientDemoRecording : 1;                                 // 0x036C(0x0004) (Const)
	unsigned long                                      bClientDemoNetFunc : 1;                                   // 0x036C(0x0004) (Const)
	unsigned long                                      bNoRepMesh : 1;                                           // 0x036C(0x0004)
	unsigned long                                      bHiddenEd : 1;                                            // 0x036C(0x0004) (Edit)
	unsigned long                                      bHiddenEdGroup : 1;                                       // 0x036C(0x0004) (Edit)
	unsigned long                                      bDirectional : 1;                                         // 0x036C(0x0004) (Edit)
	unsigned long                                      bSelected : 1;                                            // 0x036C(0x0004) (Const)
	unsigned long                                      bEdShouldSnap : 1;                                        // 0x036C(0x0004) (Edit)
	unsigned long                                      bEdSnap : 1;                                              // 0x036C(0x0004) (Transient)
	unsigned long                                      bTempEditor : 1;                                          // 0x036C(0x0004) (Const, Transient)
	unsigned long                                      bObsolete : 1;                                            // 0x036C(0x0004)
	unsigned long                                      bPathColliding : 1;                                       // 0x036C(0x0004) (Edit)
	unsigned long                                      bPathTemp : 1;                                            // 0x036C(0x0004) (Transient)
	unsigned long                                      bScriptInitialized : 1;                                   // 0x036C(0x0004)
	unsigned long                                      bLockLocation : 1;                                        // 0x036C(0x0004) (Edit)
	unsigned long                                      bLockUndelete : 1;                                        // 0x036C(0x0004) (Edit)
	unsigned long                                      bPlayerPawn : 1;                                          // 0x036C(0x0004)
	unsigned long                                      bTangentLoad : 1;                                         // 0x036C(0x0004) (Transient)
	int                                                nUseNormalmap;                                            // 0x0370(0x0004) (Transient)
	class UClass*                                      MessageClass;                                             // 0x0374(0x0004)
	TArray<class ANSkillProjectile*>                   NSkillProjectileActor;                                    // 0x0378(0x000C) (Transient, NeedCtorLink)
	TArray<class AActor*>                              SpelledNEffectActor;                                      // 0x0384(0x000C) (Transient, NeedCtorLink)
	TArray<class AActor*>                              NProjectileActor;                                         // 0x0390(0x000C) (Transient, NeedCtorLink)
	TEnumAsByte<ENAttackStatus>                        NAttackStatus;                                            // 0x039C(0x0001)
	unsigned char                                      UnknownData09[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class AActor*                                      EffectOwner;                                              // 0x03A0(0x0004)
	TEnumAsByte<ESpawnPos>                             SpawnPos;                                                 // 0x03A4(0x0001) (Edit)
	unsigned char                                      UnknownData10[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	struct FTextureModifyinfo                          TexModifyInfo;                                            // 0x03A8(0x0010)
	TEnumAsByte<EActorEffectType>                      L2ActorEffecttype;                                        // 0x03B8(0x0001)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	void GetEffTargetLocation(struct FVector* LocVector);
	void SetOverlayColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	bool EffectIsRelevant(const struct FVector& SpawnLocation, bool bForceDedicated);
	struct FVector GetCollisionExtent();
	bool CanSplash();
	void PlayTeleportEffect(bool bOut, bool bSound);
	bool IsInPain();
	bool IsInVolume(class AVolume* aVolume);
	void UntriggerEvent(const struct FName& EventName, class AActor* Other, class APawn* EventInstigator);
	void TriggerEvent(const struct FName& EventName, class AActor* Other, class APawn* EventInstigator);
	void Reset();
	void StartInterpolation();
	bool TouchingActor(class AActor* A);
	bool NearSpot(const struct FVector& Spot);
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	struct FString GetDebugName();
	void SetGRI(class AGameReplicationInfo* GRI);
	void MatchStarting();
	struct FString GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2);
	void SetDefaultDisplayProperties();
	void SetDisplayProperties(TEnumAsByte<ERenderStyle> NewStyle, class UMaterial* NewTexture, bool bLighting);
	void ReplaceText(const struct FString& Replace, const struct FString& With, struct FString* Text);
	struct FString GetHumanReadableName();
	struct FString GetItemName(const struct FString& FullName);
	void BecomeViewTarget();
	void TravelPostAccept();
	void TravelPreAccept();
	void HurtRadius(float DamageAmount, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HitLocation);
	void UpdatePrecacheStaticMeshes();
	void UpdatePrecacheMaterials();
	void PostSetPawnResource();
	void PostNetBeginPlay();
	void SetInitialState();
	void PostBeginPlay();
	void BroadcastLocalizedMessage(class UClass* MessageClass, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void PreBeginPlay();
	void RenderTexture(class UScriptedTexture* Tex);
	void RenderOverlays(class UCanvas* Canvas);
	struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	void CollidingActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, class AActor** Actor);
	void VisibleCollidingActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, bool bIgnoreHidden, class AActor** Actor);
	void VisibleActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, class AActor** Actor);
	void RadiusActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, class AActor** Actor);
	void TraceActors(class UClass* BaseClass, const struct FVector& End, const struct FVector& Start, const struct FVector& Extent, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm);
	void TouchingActors(class UClass* BaseClass, class AActor** Actor);
	void BasedActors(class UClass* BaseClass, class AActor** Actor);
	void ChildActors(class UClass* BaseClass, class AActor** Actor);
	void DynamicActors(class UClass* BaseClass, const struct FName& MatchTag, class AActor** Actor);
	void AllActors(class UClass* BaseClass, const struct FName& MatchTag, class AActor** Actor);
	bool MoveCacheEntry(const struct FString& Guid, const struct FString& NewFilename);
	bool GetCacheEntry(int Num, struct FString* Guid, struct FString* Filename);
	void GetNextIntDesc(const struct FString& ClassName, int Num, struct FString* Entry, struct FString* Description);
	struct FString GetNextInt(const struct FString& ClassName, int Num);
	struct FString GetURLMap();
	void GetNextSkin(const struct FString& Prefix, const struct FString& CurrentSkin, int Dir, struct FString* SkinName, struct FString* SkinDesc);
	struct FString GetMapName(const struct FString& NameEnding, const struct FString& MapName, int Dir);
	void BeginPlay();
	void PostTeleport(class ATeleporter* OutTeleporter);
	bool PreTeleport(class ATeleporter* InTeleporter);
	struct FVector SuggestFallVelocity(const struct FVector& Destination, const struct FVector& Start, float MaxZ, float MaxXYSpeed);
	bool PlayerCanSeeMe();
	void MakeNoise(float Loudness);
	float GetSoundDuration(class USound* Sound);
	void StopSound(class USound* a_Sound, float a_StopByFadeOutTime);
	void PlayLoopSound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate, float FadeInDuration);
	void PlaySoundOnVehicle(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate);
	void DemoPlaySound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate);
	void PlayOwnedSound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate);
	void PlaySound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate);
	void SetTimer(float NewTimerRate, bool bLoop);
	void TornOff();
	bool Destroy();
	class AActor* Spawn(class UClass* SpawnClass, class AActor* SpawnOwner, const struct FName& SpawnTag, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, bool bNoCollisionCheck, bool bNeedMeshContainer);
	bool FastTrace(const struct FVector& TraceEnd, const struct FVector& TraceStart);
	class AActor* Trace(const struct FVector& TraceEnd, const struct FVector& TraceStart, bool bTraceActors, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, class UMaterial** Material);
	void TakeDamage(int Damage, class APawn* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void KilledBy(class APawn* EventInstigator);
	void FellOutOfWorld(TEnumAsByte<EeKillZType> KillType);
	void UsedBy(class APawn* User);
	void EndedRotation();
	void FinishedInterpolation();
	void EncroachedBy(class AActor* Other);
	bool EncroachingOn(class AActor* Other);
	class AActor* SpecialHandling(class APawn* Other);
	void Detach(class AActor* Other);
	void Attach(class AActor* Other);
	void BaseChange();
	void Bump(class AActor* Other);
	void UnTouch(class AActor* Other);
	void PostTouch(class AActor* Other);
	void Touch(class AActor* Other);
	void PhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void ZoneChange(class AZoneInfo* NewZone);
	void Landed(const struct FVector& HitNormal);
	void Falling();
	void HitWall(const struct FVector& HitNormal, class AActor* HitWall);
	void Timer();
	void EndEvent();
	void BeginEvent();
	void UnTrigger(class AActor* Other, class APawn* EventInstigator);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void PostNetReceive();
	void Tick(float DeltaTime);
	void LostChild(class AActor* Other);
	void GainedChild(class AActor* Other);
	void Destroyed();
	void SetAlphaTexModifier(int a_Alpha);
	void SetActorViewType(TEnumAsByte<EActorViewType> a_ActorViewType);
	bool NDestroy();
	void StopAllMusic(float FadeOutTime);
	void StopMusic(int SongHandle, float FadeOutTime);
	int PlayMusic(const struct FString& Song, float FadeInTime);
	void UnClock(float* Time);
	void Clock(float* Time);
	bool KUpdateState(struct FKRigidBodyState* NewState);
	void KApplyForce(struct FVector* Force, struct FVector* Torque);
	void KSkelConvulse();
	void KVelDropBelow();
	void KImpact(class AActor* Other, const struct FVector& pos, const struct FVector& impactVel, const struct FVector& impactNorm);
	bool KIsRagdollAvailable();
	void KMakeRagdollAvailable();
	void KRemoveAllBoneLifters();
	void KRemoveLifterFromBone(const struct FName& bonename);
	void KAddBoneLifter(const struct FName& bonename, const struct FInterpCurve& LiftVel, float LateralFriction, const struct FInterpCurve& Softness);
	void KFreezeRagdoll();
	float KGetSkelMass();
	void KSetSkelVel(const struct FVector& Velocity, const struct FVector& AngVelocity, bool AddToCurrent);
	void KEnableCollision(class AActor* Other);
	void KDisableCollision(class AActor* Other);
	float KGetActorGravScale();
	void KSetActorGravScale(float ActorGravScale);
	void KSetBlockKarma(bool newBlock);
	void KSetStayUpright(bool stayUpright, bool allowRotate);
	void KAddImpulse(const struct FVector& Impulse, const struct FVector& Position, const struct FName& bonename);
	bool KIsAwake();
	void KWake();
	float KGetImpactThreshold();
	void KSetImpactThreshold(float thresh);
	void KGetCOMPosition(struct FVector* pos);
	void KGetCOMOffset(struct FVector* offset);
	void KSetCOMOffset(const struct FVector& offset);
	float KGetRestitution();
	void KSetRestitution(float rest);
	float KGetFriction();
	void KSetFriction(float friction);
	void KGetDampingProps(float* lindamp, float* angdamp);
	void KSetDampingProps(float lindamp, float angdamp);
	void KGetInertiaTensor(struct FVector* it1, struct FVector* it2);
	void KSetInertiaTensor(const struct FVector& it1, const struct FVector& it2);
	float KGetMass();
	void KSetMass(float Mass);
	struct FKRBVec KRBVecFromVector(const struct FVector& V);
	struct FVector KRBVecToVector(const struct FKRBVec& RBvec);
	void KDrawRigidBodyState(const struct FKRigidBodyState& RBstate, bool AltColour);
	void KGetRigidBodyState(struct FKRigidBodyState* RBstate);
	struct FQuat KGetRBQuaternion();
	void OnlyAffectPawns(bool B);
	void SetPhysics(TEnumAsByte<EPhysics> newPhysics);
	void FinishInterpolation();
	void DebugUnclock();
	void DebugClock();
	void DrawDebugLine(const struct FVector& LineStart, const struct FVector& LineEnd, unsigned char R, unsigned char G, unsigned char B);
	struct FPlane GetRenderBoundingSphere();
	bool AnimIsInGroup(int Channel, const struct FName& GroupName);
	void GetAnimParams(int Channel, struct FName* OutSeqName, float* OutAnimFrame, float* OutAnimRate);
	void SetBoneRotation(const struct FName& bonename, const struct FRotator& BoneTurn, int Space, float Alpha);
	void SetBoneLocation(const struct FName& bonename, const struct FVector& BoneTrans, float Alpha);
	void SetBoneDirection(const struct FName& bonename, const struct FRotator& BoneTurn, const struct FVector& BoneTrans, float Alpha, int Space);
	void SetBoneScale(int Slot, float BoneScale, const struct FName& bonename);
	void LockRootMotion(int Lock);
	bool AttachToBoneWithIndex(class AActor* Attachment, int BoneIndex);
	bool DetachFromBone(class AActor* Attachment);
	bool AttachToBone(class AActor* Attachment, const struct FName& bonename, int type);
	struct FRotator GetRootRotationDelta();
	struct FVector GetRootLocationDelta();
	struct FRotator GetRootRotation();
	struct FVector GetRootLocation();
	struct FCoords GetBoneCoordsWithBoneIndex(int BoneIndex);
	struct FRotator GetBoneRotation(const struct FName& bonename, int Space);
	struct FCoords GetBoneCoords(const struct FName& bonename);
	void AnimBlendToAlpha(int Stage, float TargetAlpha, float TimeInterval);
	void AnimBlendParams(int Stage, float BlendAlpha, float InTime, float OutTime, const struct FName& bonename, bool bGlobalPose);
	void BoneRefresh();
	void LinkMesh(class UMesh* NewMesh, bool bKeepAnim);
	void LinkSkelAnim(class UMeshAnimation* Anim, class UMesh* NewMesh);
	int GetNotifyChannel();
	void EnableChannelNotify(int Channel, int Switch);
	void AnimEnd(int Channel);
	void ClearL2Game();
	void L2GameActionNotify(TEnumAsByte<EL2GameAction> GameAction);
	bool IsTweening(int Channel);
	void SetAnimFrame(float Time, int Channel, int UnitFlag);
	void FreezeAnimAt(float Time, int Channel);
	bool HasBoneName(const struct FName& bonename);
	void StopAnimating(bool ClearAllButBase);
	bool HasAnim(const struct FName& Sequence);
	void FinishAnim(int Channel);
	bool IsAnimating(int Channel);
	void TweenAnim(const struct FName& Sequence, float Time, int Channel);
	void LoopAnim(const struct FName& Sequence, float Rate, float TweenTime, int Channel);
	void PlayAnim(const struct FName& Sequence, float Rate, float TweenTime, int Channel);
	struct FString GetMeshName();
	void SetOwner(class AActor* NewOwner);
	void SetBase(class AActor* NewBase, const struct FVector& NewFloor);
	void AutonomousPhysics(float DeltaSeconds);
	bool MoveSmooth(const struct FVector& Delta);
	bool SetRelativeLocation(const struct FVector& NewLocation);
	bool SetRelativeRotation(const struct FRotator& NewRotation);
	bool SetRotation(const struct FRotator& NewRotation);
	bool SetLocation(const struct FVector& NewLocation, bool bNoCheck);
	bool Move(const struct FVector& Delta);
	void SetDrawType(TEnumAsByte<EDrawType> NewDrawType);
	void SetStaticMesh(class UStaticMesh* NewStaticMesh);
	void SetDrawScale3D(const struct FVector& NewScale3D);
	void SetDrawScale(float NewScale);
	bool SetCollisionSize(float NewRadius, float NewHeight);
	void SetCollision(bool NewColActors, bool NewBlockActors, bool NewBlockPlayers);
	void Sleep(float Seconds);
	void Error(const struct FString& S);
	class UViewport* GetViewport();
	struct FString ConsoleCommand(const struct FString& Command);
};


// Class Engine.DecoVolumeObject
// 0x0000 (0x03BC - 0x03BC)
class ADecoVolumeObject : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecoVolumeObject");
		return ptr;
	}

};


// Class Engine.Keypoint
// 0x0000 (0x03BC - 0x03BC)
class AKeypoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Keypoint");
		return ptr;
	}

};


// Class Engine.DecorationList
// 0x000C (0x03C8 - 0x03BC)
class ADecorationList : public AKeypoint
{
public:
	TArray<struct FDecorationType>                     Decorations;                                              // 0x03BC(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecorationList");
		return ptr;
	}

};


// Class Engine.ViewportWindowController
// 0x0044 (0x0400 - 0x03BC)
class AViewportWindowController : public AActor
{
public:
	class USkeletalMeshInstance*                       TargetSMInst;                                             // 0x03BC(0x0004)
	int                                                BoneIndex;                                                // 0x03C0(0x0004)
	struct FVector                                     TargetLocation;                                           // 0x03C4(0x000C)
	struct FRotator                                    TargetRotation;                                           // 0x03D0(0x000C)
	TArray<struct FVector>                             CameraPath;                                               // 0x03DC(0x000C) (NeedCtorLink)
	int                                                CalcStep;                                                 // 0x03E8(0x0004)
	struct FVector                                     OrgLocation;                                              // 0x03EC(0x000C)
	int                                                EffectType;                                               // 0x03F8(0x0004)
	float                                              fEffectElapsedTime;                                       // 0x03FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ViewportWindowController");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x04B8 (0x04EC - 0x0034)
class UParticleEmitter : public UObject
{
public:
	struct FVector                                     Acceleration;                                             // 0x0034(0x000C) (Edit)
	unsigned long                                      IndependentSprayAccel : 1;                                // 0x0040(0x0004) (Edit)
	unsigned long                                      UseCollision : 1;                                         // 0x0040(0x0004) (Edit)
	struct FVector                                     ExtentMultiplier;                                         // 0x0044(0x000C) (Edit)
	struct FRangeVector                                DampingFactorRange;                                       // 0x0050(0x0018) (Edit)
	unsigned long                                      UseCollisionPlanes : 1;                                   // 0x0068(0x0004) (Edit)
	TArray<struct FPlane>                              CollisionPlanes;                                          // 0x006C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      UseMaxCollisions : 1;                                     // 0x0078(0x0004) (Edit)
	struct FRange                                      MaxCollisions;                                            // 0x007C(0x0008) (Edit)
	int                                                SpawnFromOtherEmitter;                                    // 0x0084(0x0004) (Edit)
	int                                                SpawnAmount;                                              // 0x0088(0x0004) (Edit)
	struct FRangeVector                                SpawnedVelocityScaleRange;                                // 0x008C(0x0018) (Edit)
	unsigned long                                      UseSpawnedVelocityScale : 1;                              // 0x00A4(0x0004) (Edit)
	unsigned long                                      UseColorScale : 1;                                        // 0x00A4(0x0004) (Edit)
	TArray<struct FParticleColorScale>                 ColorScale;                                               // 0x00A8(0x000C) (Edit, NeedCtorLink)
	float                                              ColorScaleRepeats;                                        // 0x00B4(0x0004) (Edit)
	struct FRangeVector                                ColorMultiplierRange;                                     // 0x00B8(0x0018) (Edit)
	float                                              Opacity;                                                  // 0x00D0(0x0004) (Edit)
	float                                              OpacityRatio;                                             // 0x00D4(0x0004) (Edit, Transient)
	unsigned long                                      UseCloudColor : 1;                                        // 0x00D8(0x0004) (Edit)
	struct FPlane                                      FadeOutFactor;                                            // 0x00DC(0x0010) (Edit)
	float                                              FadeOutStartTime;                                         // 0x00EC(0x0004) (Edit)
	unsigned long                                      FadeOut : 1;                                              // 0x00F0(0x0004) (Edit)
	struct FPlane                                      FadeInFactor;                                             // 0x00F4(0x0010) (Edit)
	float                                              FadeInEndTime;                                            // 0x0104(0x0004) (Edit)
	unsigned long                                      FadeIn : 1;                                               // 0x0108(0x0004) (Edit)
	unsigned long                                      UseActorForces : 1;                                       // 0x0108(0x0004) (Edit)
	TEnumAsByte<EParticleCoordinateSystem>             CoordinateSystem;                                         // 0x010C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	int                                                MaxParticles;                                             // 0x0110(0x0004) (Edit, Const)
	unsigned long                                      ResetAfterChange : 1;                                     // 0x0114(0x0004) (Edit)
	TEnumAsByte<EParticleEffectAxis>                   EffectAxis;                                               // 0x0118(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	int                                                LevelOfWeather;                                           // 0x011C(0x0004) (Edit, Const)
	int                                                CheckLevelOfWeather;                                      // 0x0120(0x0004) (Edit, Const)
	TEnumAsByte<EParticleParticleChoice>               ParticleChoice;                                           // 0x0124(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	unsigned long                                      WeatherEffect : 1;                                        // 0x0128(0x0004) (Edit)
	TArray<struct FRange>                              WeatherRangeTime;                                         // 0x012C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      WeatherSoundCheck : 1;                                    // 0x0138(0x0004) (Edit)
	unsigned long                                      ForcedLifeTime : 1;                                       // 0x0138(0x0004) (Edit)
	unsigned long                                      ForcedFade : 1;                                           // 0x0138(0x0004) (Edit)
	unsigned long                                      ForcedMaxParticles : 1;                                   // 0x0138(0x0004) (Edit)
	unsigned long                                      RespawnDeadParticles : 1;                                 // 0x0138(0x0004) (Edit)
	unsigned long                                      AutoDestroy : 1;                                          // 0x0138(0x0004) (Edit)
	unsigned long                                      AutoReset : 1;                                            // 0x0138(0x0004) (Edit)
	unsigned long                                      Disabled : 1;                                             // 0x0138(0x0004) (Edit)
	unsigned long                                      DisableFogging : 1;                                       // 0x0138(0x0004) (Edit)
	struct FRange                                      AutoResetTimeRange;                                       // 0x013C(0x0008) (Edit)
	struct FString                                     Name;                                                     // 0x0144(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     StartLocationOffset;                                      // 0x0150(0x000C) (Edit)
	struct FRangeVector                                StartLocationRange;                                       // 0x015C(0x0018) (Edit)
	int                                                AddLocationFromOtherEmitter;                              // 0x0174(0x0004) (Edit)
	TEnumAsByte<EParticleStartLocationShape>           StartLocationShape;                                       // 0x0178(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	struct FRange                                      SphereRadiusRange;                                        // 0x017C(0x0008) (Edit)
	struct FRangeVector                                StartLocationPolarRange;                                  // 0x0184(0x0018) (Edit)
	struct FRange                                      StartMassRange;                                           // 0x019C(0x0008) (Edit)
	class UStaticMesh*                                 MeshSpawningStaticMesh;                                   // 0x01A4(0x0004) (Edit)
	TEnumAsByte<EParticleMeshSpawning>                 MeshSpawning;                                             // 0x01A8(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	unsigned long                                      VelocityFromMesh : 1;                                     // 0x01AC(0x0004) (Edit)
	struct FRangeVector                                VelocityScaleRange;                                       // 0x01B0(0x0018) (Edit)
	struct FRangeVector                                MeshScaleRange;                                           // 0x01C8(0x0018) (Edit)
	unsigned long                                      UniformMeshScale : 1;                                     // 0x01E0(0x0004) (Edit)
	unsigned long                                      UniformVelocityScale : 1;                                 // 0x01E0(0x0004) (Edit)
	unsigned long                                      UseColorFromMesh : 1;                                     // 0x01E0(0x0004) (Edit)
	unsigned long                                      SpawnOnlyInDirectionOfNormal : 1;                         // 0x01E0(0x0004) (Edit)
	struct FVector                                     MeshNormal;                                               // 0x01E4(0x000C) (Edit)
	struct FRange                                      MeshNormalThresholdRange;                                 // 0x01F0(0x0008) (Edit)
	int                                                AlphaRef;                                                 // 0x01F8(0x0004) (Edit)
	unsigned long                                      AlphaTest : 1;                                            // 0x01FC(0x0004) (Edit)
	unsigned long                                      AcceptsProjectors : 1;                                    // 0x01FC(0x0004) (Edit)
	unsigned long                                      ZTest : 1;                                                // 0x01FC(0x0004) (Edit)
	unsigned long                                      ZWrite : 1;                                               // 0x01FC(0x0004) (Edit)
	unsigned long                                      UseRevolution : 1;                                        // 0x01FC(0x0004) (Edit)
	struct FRangeVector                                RevolutionCenterOffsetRange;                              // 0x0200(0x0018) (Edit)
	struct FRangeVector                                RevolutionsPerSecondRange;                                // 0x0218(0x0018) (Edit)
	unsigned long                                      UseRevolutionScale : 1;                                   // 0x0230(0x0004) (Edit)
	TArray<struct FParticleRevolutionScale>            RevolutionScale;                                          // 0x0234(0x000C) (Edit, NeedCtorLink)
	float                                              RevolutionScaleRepeats;                                   // 0x0240(0x0004) (Edit)
	TEnumAsByte<EParticleRotationSource>               UseRotationFrom;                                          // 0x0244(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	unsigned long                                      SpinParticles : 1;                                        // 0x0248(0x0004) (Edit)
	struct FRotator                                    RotationOffset;                                           // 0x024C(0x000C) (Edit)
	struct FVector                                     SpinCCWorCW;                                              // 0x0258(0x000C) (Edit)
	struct FRangeVector                                SpinsPerSecondRange;                                      // 0x0264(0x0018) (Edit)
	struct FRangeVector                                StartSpinRange;                                           // 0x027C(0x0018) (Edit)
	unsigned long                                      DampRotation : 1;                                         // 0x0294(0x0004) (Edit)
	struct FRangeVector                                RotationDampingFactorRange;                               // 0x0298(0x0018) (Edit)
	struct FVector                                     RotationNormal;                                           // 0x02B0(0x000C) (Edit)
	unsigned long                                      UseSizeScale : 1;                                         // 0x02BC(0x0004) (Edit)
	unsigned long                                      UseRegularSizeScale : 1;                                  // 0x02BC(0x0004) (Edit)
	TArray<struct FParticleTimeScale>                  SizeScale;                                                // 0x02C0(0x000C) (Edit, NeedCtorLink)
	float                                              SizeScaleRepeats;                                         // 0x02CC(0x0004) (Edit)
	struct FRangeVector                                StartSizeRange;                                           // 0x02D0(0x0018) (Edit)
	unsigned long                                      UniformSize : 1;                                          // 0x02E8(0x0004) (Edit)
	TEnumAsByte<ESkelLocationUpdate>                   UseSkeletalLocationAs;                                    // 0x02EC(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	class AActor*                                      SkeletalMeshActor;                                        // 0x02F0(0x0004) (Edit)
	struct FVector                                     SkeletalScale;                                            // 0x02F4(0x000C) (Edit)
	struct FRange                                      RelativeBoneIndexRange;                                   // 0x0300(0x0008) (Edit)
	TArray<struct FParticleSound>                      Sounds;                                                   // 0x0308(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EParticleCollisionSound>               SpawningSound;                                            // 0x0314(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FRange                                      SpawningSoundIndex;                                       // 0x0318(0x0008) (Edit)
	struct FRange                                      SpawningSoundProbability;                                 // 0x0320(0x0008) (Edit)
	TEnumAsByte<EParticleCollisionSound>               CollisionSound;                                           // 0x0328(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	struct FRange                                      CollisionSoundIndex;                                      // 0x032C(0x0008) (Edit)
	struct FRange                                      CollisionSoundProbability;                                // 0x0334(0x0008) (Edit)
	float                                              ParticlesPerSecond;                                       // 0x033C(0x0004) (Edit)
	float                                              InitialParticlesPerSecond;                                // 0x0340(0x0004) (Edit)
	unsigned long                                      AutomaticInitialSpawning : 1;                             // 0x0344(0x0004) (Edit)
	TEnumAsByte<EParticleDrawStyle>                    DrawStyle;                                                // 0x0348(0x0001) (Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x034C(0x0004) (Edit)
	int                                                TextureUSubdivisions;                                     // 0x0350(0x0004) (Edit)
	int                                                TextureVSubdivisions;                                     // 0x0354(0x0004) (Edit)
	unsigned long                                      BlendBetweenSubdivisions : 1;                             // 0x0358(0x0004) (Edit)
	unsigned long                                      UseSubdivisionScale : 1;                                  // 0x0358(0x0004) (Edit)
	TArray<float>                                      SubdivisionScale;                                         // 0x035C(0x000C) (Edit, NeedCtorLink)
	int                                                SubdivisionStart;                                         // 0x0368(0x0004) (Edit)
	int                                                SubdivisionEnd;                                           // 0x036C(0x0004) (Edit)
	unsigned long                                      UseRandomSubdivision : 1;                                 // 0x0370(0x0004) (Edit)
	float                                              SecondsBeforeInactive;                                    // 0x0374(0x0004) (Edit)
	float                                              MinSquaredVelocity;                                       // 0x0378(0x0004) (Edit)
	struct FRange                                      InitialTimeRange;                                         // 0x037C(0x0008) (Edit)
	struct FRange                                      LifetimeRange;                                            // 0x0384(0x0008) (Edit)
	struct FRange                                      InitialDelayRange;                                        // 0x038C(0x0008) (Edit)
	unsigned long                                      TriggerDisabled : 1;                                      // 0x0394(0x0004) (Edit)
	unsigned long                                      ResetOnTrigger : 1;                                       // 0x0394(0x0004) (Edit)
	struct FRange                                      SpawnOnTriggerRange;                                      // 0x0398(0x0008) (Edit)
	float                                              SpawnOnTriggerPPS;                                        // 0x03A0(0x0004) (Edit)
	struct FRangeVector                                StartVelocityRange;                                       // 0x03A4(0x0018) (Edit)
	struct FRange                                      StartVelocityRadialRange;                                 // 0x03BC(0x0008) (Edit)
	struct FVector                                     MaxAbsVelocity;                                           // 0x03C4(0x000C) (Edit)
	struct FRangeVector                                VelocityLossRange;                                        // 0x03D0(0x0018) (Edit)
	int                                                AddVelocityFromOtherEmitter;                              // 0x03E8(0x0004) (Edit)
	struct FRangeVector                                AddVelocityMultiplierRange;                               // 0x03EC(0x0018) (Edit)
	TEnumAsByte<EParticleVelocityDirection>            GetVelocityDirectionFrom;                                 // 0x0404(0x0001) (Edit)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	unsigned long                                      UseVelocityScale : 1;                                     // 0x0408(0x0004) (Edit)
	TArray<struct FParticleVelocityScale>              VelocityScale;                                            // 0x040C(0x000C) (Edit, NeedCtorLink)
	float                                              VelocityScaleRepeats;                                     // 0x0418(0x0004) (Edit)
	float                                              WarmupTicksPerSecond;                                     // 0x041C(0x0004) (Edit)
	float                                              RelativeWarmupTime;                                       // 0x0420(0x0004) (Edit)
	TArray<class UMaterial*>                           CustomMaterials;                                          // 0x0424(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      UseSoftParticle : 1;                                      // 0x0430(0x0004) (Edit)
	float                                              SoftParticleFadeDist;                                     // 0x0434(0x0004) (Edit)
	class AEmitter*                                    Owner;                                                    // 0x0438(0x0004) (Transient)
	unsigned long                                      Initialized : 1;                                          // 0x043C(0x0004) (Transient)
	unsigned long                                      Inactive : 1;                                             // 0x043C(0x0004) (Transient)
	float                                              InactiveTime;                                             // 0x0440(0x0004) (Transient)
	TArray<struct FParticle>                           Particles;                                                // 0x0444(0x000C) (Transient, NeedCtorLink)
	int                                                ParticleIndex;                                            // 0x0450(0x0004) (Transient)
	int                                                ActiveParticles;                                          // 0x0454(0x0004) (Transient)
	float                                              PPSFraction;                                              // 0x0458(0x0004) (Transient)
	struct FBox                                        BoundingBox;                                              // 0x045C(0x001C) (Transient)
	struct FVector                                     RealExtentMultiplier;                                     // 0x0478(0x000C) (Transient)
	unsigned long                                      RealDisableFogging : 1;                                   // 0x0484(0x0004) (Transient)
	unsigned long                                      AllParticlesDead : 1;                                     // 0x0484(0x0004) (Transient)
	unsigned long                                      WarmedUp : 1;                                             // 0x0484(0x0004) (Transient)
	int                                                OtherIndex;                                               // 0x0488(0x0004) (Transient)
	float                                              InitialDelay;                                             // 0x048C(0x0004) (Transient)
	struct FVector                                     GlobalOffset;                                             // 0x0490(0x000C) (Transient)
	float                                              TimeTillReset;                                            // 0x049C(0x0004) (Transient)
	int                                                PS2Data;                                                  // 0x04A0(0x0004) (Transient)
	int                                                MaxActiveParticles;                                       // 0x04A4(0x0004) (Transient)
	int                                                CurrentCollisionSoundIndex;                               // 0x04A8(0x0004) (Transient)
	int                                                CurrentSpawningSoundIndex;                                // 0x04AC(0x0004) (Transient)
	int                                                CurrentMeshSpawningIndex;                                 // 0x04B0(0x0004) (Transient)
	float                                              MaxSizeScale;                                             // 0x04B4(0x0004) (Transient)
	int                                                KillPending;                                              // 0x04B8(0x0004) (Transient)
	int                                                DeferredParticles;                                        // 0x04BC(0x0004) (Transient)
	struct FVector                                     RealMeshNormal;                                           // 0x04C0(0x000C) (Transient)
	TArray<struct FVector>                             MeshVertsAndNormals;                                      // 0x04CC(0x000C) (Transient, NeedCtorLink)
	int                                                CurrentSpawnOnTrigger;                                    // 0x04D8(0x0004) (Transient)
	unsigned long                                      bOwnerTracking : 1;                                       // 0x04DC(0x0004) (Transient)
	float                                              CurLifeTime;                                              // 0x04E0(0x0004) (Transient)
	unsigned long                                      bNotifyPreDestroy : 1;                                    // 0x04E4(0x0004) (Transient)
	class UParticleMaterial*                           ParticleMaterial;                                         // 0x04E8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}


	void Trigger();
	void SpawnParticle(int Amount);
};


// Class Engine.VertMeshEmitter
// 0x0050 (0x053C - 0x04EC)
class UVertMeshEmitter : public UParticleEmitter
{
public:
	TArray<int>                                        VertexStreams;                                            // 0x04EC(0x000C) (Transient, NeedCtorLink)
	TArray<int>                                        IndexBuffer;                                              // 0x04F8(0x000C) (Transient, NeedCtorLink)
	TArray<float>                                      AnimFrame;                                                // 0x0504(0x000C) (Transient, NeedCtorLink)
	TArray<float>                                      AnimRate;                                                 // 0x0510(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      StartAnimFrame;                                           // 0x051C(0x000C) (Edit, NeedCtorLink)
	class UVertMesh*                                   VertexMesh;                                               // 0x0528(0x0004) (Edit)
	unsigned long                                      UseMeshBlendMode : 1;                                     // 0x052C(0x0004) (Edit)
	unsigned long                                      RenderTwoSided : 1;                                       // 0x052C(0x0004) (Edit)
	unsigned long                                      UseParticleColor : 1;                                     // 0x052C(0x0004) (Edit)
	struct FVector                                     MeshExtent;                                               // 0x0530(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertMeshEmitter");
		return ptr;
	}

};


// Class Engine.Primitive
// 0x002C (0x0060 - 0x0034)
class UPrimitive : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0034(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Primitive");
		return ptr;
	}

};


// Class Engine.MeshInstance
// 0x0000 (0x0060 - 0x0060)
class UMeshInstance : public UPrimitive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshInstance");
		return ptr;
	}

};


// Class Engine.LodMeshInstance
// 0x002C (0x008C - 0x0060)
class ULodMeshInstance : public UMeshInstance
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0060(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LodMeshInstance");
		return ptr;
	}

};


// Class Engine.VertMeshInstance
// 0x00A0 (0x012C - 0x008C)
class UVertMeshInstance : public ULodMeshInstance
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x008C(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertMeshInstance");
		return ptr;
	}

};


// Class Engine.Mesh
// 0x0004 (0x0064 - 0x0060)
class UMesh : public UPrimitive
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0060(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Mesh");
		return ptr;
	}

};


// Class Engine.LodMesh
// 0x00E4 (0x0148 - 0x0064)
class ULodMesh : public UMesh
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0064(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LodMesh");
		return ptr;
	}

};


// Class Engine.VertMesh
// 0x012C (0x0274 - 0x0148)
class UVertMesh : public ULodMesh
{
public:
	unsigned char                                      UnknownData00[0x12C];                                     // 0x0148(0x012C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertMesh");
		return ptr;
	}

};


// Class Engine.TrailEmitter
// 0x0048 (0x0534 - 0x04EC)
class UTrailEmitter : public UParticleEmitter
{
public:
	TEnumAsByte<ETrailShadeType>                       TrailShadeType;                                           // 0x04EC(0x0001) (Edit)
	TEnumAsByte<ETrailLocation>                        TrailLocation;                                            // 0x04ED(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04EE(0x0002) MISSED OFFSET
	int                                                MaxPointsPerTrail;                                        // 0x04F0(0x0004) (Edit)
	float                                              DistanceThreshold;                                        // 0x04F4(0x0004) (Edit)
	unsigned long                                      UseCrossedSheets : 1;                                     // 0x04F8(0x0004) (Edit)
	int                                                MaxTrailTwistAngle;                                       // 0x04FC(0x0004) (Edit)
	float                                              PointLifeTime;                                            // 0x0500(0x0004) (Edit)
	float                                              VelocityThreshold;                                        // 0x0504(0x0004) (Edit)
	TArray<struct FParticleTrailData>                  TrailData;                                                // 0x0508(0x000C) (Transient, NeedCtorLink)
	TArray<struct FParticleTrailInfo>                  TrailInfo;                                                // 0x0514(0x000C) (Transient, NeedCtorLink)
	class UVertexBuffer*                               VertexBuffer;                                             // 0x0520(0x0004) (Transient)
	class UIndexBuffer*                                IndexBuffer;                                              // 0x0524(0x0004) (Transient)
	int                                                VerticesPerParticle;                                      // 0x0528(0x0004) (Transient)
	int                                                IndicesPerParticle;                                       // 0x052C(0x0004) (Transient)
	int                                                PrimitivesPerParticle;                                    // 0x0530(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TrailEmitter");
		return ptr;
	}


	void ResetTrail();
};


// Class Engine.Material
// 0x0020 (0x0054 - 0x0034)
class UMaterial : public UObject
{
public:
	class UMaterial*                                   FallbackMaterial;                                         // 0x0034(0x0004) (Edit)
	class UMaterial*                                   DefaultMaterial;                                          // 0x0038(0x0004)
	unsigned long                                      UseFallback : 1;                                          // 0x003C(0x0004) (Const, Transient)
	unsigned long                                      Validated : 1;                                            // 0x003C(0x0004) (Const, Transient)
	int                                                ShaderProperty;                                           // 0x0040(0x0004) (Transient)
	struct FString                                     ShaderCode;                                               // 0x0044(0x000C) (Edit, Transient, NeedCtorLink)
	int                                                MaterialCodeVersion;                                      // 0x0050(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}


	void Trigger(class AActor* Other, class AActor* EventInstigator);
	void Reset();
};


// Class Engine.RenderedMaterial
// 0x0000 (0x0054 - 0x0054)
class URenderedMaterial : public UMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RenderedMaterial");
		return ptr;
	}

};


// Class Engine.BitmapMaterial
// 0x0028 (0x007C - 0x0054)
class UBitmapMaterial : public URenderedMaterial
{
public:
	TEnumAsByte<ETextureFormat>                        Format;                                                   // 0x0054(0x0001) (Edit, Const, EditConst)
	TEnumAsByte<ETexClampMode>                         UClampMode;                                               // 0x0055(0x0001) (Edit)
	TEnumAsByte<ETexClampMode>                         VClampMode;                                               // 0x0056(0x0001) (Edit)
	unsigned char                                      UBits;                                                    // 0x0057(0x0001) (Const)
	unsigned char                                      VBits;                                                    // 0x0058(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                USize;                                                    // 0x005C(0x0004) (Const)
	int                                                VSize;                                                    // 0x0060(0x0004) (Const)
	int                                                UClamp;                                                   // 0x0064(0x0004) (Edit, Const)
	int                                                VClamp;                                                   // 0x0068(0x0004) (Edit, Const)
	int                                                LossDetail;                                               // 0x006C(0x0004)
	int                                                MinFilter;                                                // 0x0070(0x0004)
	int                                                MagFilter;                                                // 0x0074(0x0004)
	int                                                MipFilter;                                                // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BitmapMaterial");
		return ptr;
	}

};


// Class Engine.Texture
// 0x0094 (0x0110 - 0x007C)
class UTexture : public UBitmapMaterial
{
public:
	class UPalette*                                    Palette;                                                  // 0x007C(0x0004) (Edit)
	class UMaterial*                                   Detail;                                                   // 0x0080(0x0004) (Edit)
	float                                              DetailScale;                                              // 0x0084(0x0004) (Edit)
	struct FColor                                      MipZero;                                                  // 0x0088(0x0004) (Const)
	struct FColor                                      MaxColor;                                                 // 0x008C(0x0004) (Const)
	int                                                InternalTime[0x2];                                        // 0x0090(0x0004) (Const)
	class UTexture*                                    DetailTexture;                                            // 0x0098(0x0004) (Deprecated)
	class UTexture*                                    EnvironmentMap;                                           // 0x009C(0x0004) (Deprecated)
	TEnumAsByte<EEnvMapTransformType>                  EnvMapTransformType;                                      // 0x00A0(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              Specular;                                                 // 0x00A4(0x0004) (Deprecated)
	unsigned long                                      bMasked : 1;                                              // 0x00A8(0x0004) (Edit)
	unsigned long                                      bAlphaTexture : 1;                                        // 0x00A8(0x0004) (Edit)
	unsigned long                                      bTwoSided : 1;                                            // 0x00A8(0x0004) (Edit)
	unsigned long                                      bHighColorQuality : 1;                                    // 0x00A8(0x0004) (Edit)
	unsigned long                                      bHighTextureQuality : 1;                                  // 0x00A8(0x0004) (Edit)
	unsigned long                                      bRealtime : 1;                                            // 0x00A8(0x0004)
	unsigned long                                      bParametric : 1;                                          // 0x00A8(0x0004)
	unsigned long                                      bRealtimeChanged : 1;                                     // 0x00A8(0x0004) (Transient)
	unsigned long                                      bHasComp : 1;                                             // 0x00A8(0x0004) (Const, EditConst)
	unsigned long                                      bSplit9Texture : 1;                                       // 0x00A8(0x0004) (Edit)
	int                                                Split9X1;                                                 // 0x00AC(0x0004) (Edit)
	int                                                Split9X2;                                                 // 0x00B0(0x0004) (Edit)
	int                                                Split9X3;                                                 // 0x00B4(0x0004) (Edit)
	int                                                Split9Y1;                                                 // 0x00B8(0x0004) (Edit)
	int                                                Split9Y2;                                                 // 0x00BC(0x0004) (Edit)
	int                                                Split9Y3;                                                 // 0x00C0(0x0004) (Edit)
	int                                                pSplit9TexCacheMap;                                       // 0x00C4(0x0004)
	TEnumAsByte<ELODSet>                               LODSet;                                                   // 0x00C8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                NormalLOD;                                                // 0x00CC(0x0004) (Edit)
	int                                                MinLOD;                                                   // 0x00D0(0x0004)
	int                                                MaxLOD;                                                   // 0x00D4(0x0004) (Transient)
	class UTexture*                                    AnimNext;                                                 // 0x00D8(0x0004) (Edit)
	class UTexture*                                    AnimCurrent;                                              // 0x00DC(0x0004) (Transient)
	unsigned char                                      PrimeCount;                                               // 0x00E0(0x0001) (Edit)
	unsigned char                                      PrimeCurrent;                                             // 0x00E1(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	float                                              MinFrameRate;                                             // 0x00E4(0x0004) (Edit)
	float                                              MaxFrameRate;                                             // 0x00E8(0x0004) (Edit)
	int                                                TotalFrameNum;                                            // 0x00EC(0x0004) (Edit)
	float                                              Accumulator;                                              // 0x00F0(0x0004) (Transient)
	TArray<int>                                        Mips;                                                     // 0x00F4(0x000C) (Const, Native)
	TEnumAsByte<ETextureFormat>                        CompFormat;                                               // 0x0100(0x0001) (Const, EditConst)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	int                                                RenderInterface;                                          // 0x0104(0x0004) (Const, Transient)
	int                                                __LastUpdateTime[0x2];                                    // 0x0108(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.Cubemap
// 0x001C (0x012C - 0x0110)
class UCubemap : public UTexture
{
public:
	class UTexture*                                    Faces[0x6];                                               // 0x0110(0x0004) (Edit)
	int                                                CubemapRenderInterface;                                   // 0x0128(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Cubemap");
		return ptr;
	}

};


// Class Engine.Palette
// 0x000C (0x0040 - 0x0034)
class UPalette : public UObject
{
public:
	TArray<struct FColor>                              Colors;                                                   // 0x0034(0x000C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Palette");
		return ptr;
	}

};


// Class Engine.TerrainMaterial
// 0x0014 (0x0068 - 0x0054)
class UTerrainMaterial : public URenderedMaterial
{
public:
	TArray<struct FTerrainMaterialLayer>               Layers;                                                   // 0x0054(0x000C) (Const, NeedCtorLink)
	unsigned char                                      RenderMethod;                                             // 0x0060(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	unsigned long                                      FirstPass : 1;                                            // 0x0064(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainMaterial");
		return ptr;
	}

};


// Class Engine.Info
// 0x0000 (0x03BC - 0x03BC)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.TerrainInfo
// 0x1EDC (0x2298 - 0x03BC)
class ATerrainInfo : public AInfo
{
public:
	int                                                TerrainSectorSize;                                        // 0x03BC(0x0004) (Edit)
	class UTexture*                                    TerrainMap;                                               // 0x03C0(0x0004) (Edit)
	struct FVector                                     TerrainScale;                                             // 0x03C4(0x000C) (Edit)
	struct FTerrainLayer                               Layers[0x20];                                             // 0x03D0(0x00E8) (Edit)
	TArray<struct FDecorationLayer>                    DecoLayers;                                               // 0x20D0(0x000C) (Edit, NeedCtorLink)
	float                                              DecoLayerOffset;                                          // 0x20DC(0x0004) (Edit)
	unsigned long                                      Inverted : 1;                                             // 0x20E0(0x0004) (Edit)
	unsigned long                                      bKCollisionHalfRes : 1;                                   // 0x20E0(0x0004) (Edit)
	int                                                JustLoaded;                                               // 0x20E4(0x0004) (Transient)
	TArray<struct FDecorationLayerData>                DecoLayerData;                                            // 0x20E8(0x000C) (Const, Native)
	TArray<class UTerrainSector*>                      Sectors;                                                  // 0x20F4(0x000C) (Const, Native)
	TArray<struct FVector>                             Vertices;                                                 // 0x2100(0x000C) (Const, Native)
	int                                                HeightmapX;                                               // 0x210C(0x0004) (Const, Native)
	int                                                HeightmapY;                                               // 0x2110(0x0004) (Const, Native)
	int                                                SectorsX;                                                 // 0x2114(0x0004) (Const, Native)
	int                                                SectorsY;                                                 // 0x2118(0x0004) (Const, Native)
	class UTerrainPrimitive*                           Primitive;                                                // 0x211C(0x0004) (Const, Native)
	TArray<struct FNormalPair>                         FaceNormals;                                              // 0x2120(0x000C) (Const, Native)
	struct FVector                                     ToWorld[0x4];                                             // 0x212C(0x000C) (Const, Native)
	struct FVector                                     ToHeightmap[0x4];                                         // 0x215C(0x000C) (Const, Native)
	TArray<int>                                        SelectedVertices;                                         // 0x218C(0x000C) (Const, Native)
	int                                                ShowGrid;                                                 // 0x2198(0x0004) (Const, Native)
	TArray<int>                                        QuadVisibilityBitmap;                                     // 0x219C(0x000C) (Const, NeedCtorLink)
	TArray<int>                                        EdgeTurnBitmap;                                           // 0x21A8(0x000C) (Const, NeedCtorLink)
	TArray<class UMaterial*>                           QuadDomMaterialBitmap;                                    // 0x21B4(0x000C) (Const, NeedCtorLink)
	TArray<int>                                        RenderCombinations;                                       // 0x21C0(0x000C) (Const, Native)
	TArray<int>                                        VertexStreams;                                            // 0x21CC(0x000C) (Const, Native)
	TArray<struct FColor>                              VertexColors;                                             // 0x21D8(0x000C) (Const, Native)
	TArray<struct FColor>                              PaintedColor;                                             // 0x21E4(0x000C) (Const, Native)
	class UTexture*                                    OldTerrainMap;                                            // 0x21F0(0x0004) (Const, Native)
	TArray<unsigned char>                              OldHeightmap;                                             // 0x21F4(0x000C) (Const, Native)
	int                                                BaseHeight;                                               // 0x2200(0x0004) (Edit)
	int                                                VTGruop;                                                  // 0x2204(0x0004)
	int                                                VTGroupOrig;                                              // 0x2208(0x0004)
	int                                                MapX;                                                     // 0x220C(0x0004)
	int                                                MapY;                                                     // 0x2210(0x0004)
	int                                                bUpdatedHEdge;                                            // 0x2214(0x0004)
	int                                                bUpdatedVEdge;                                            // 0x2218(0x0004)
	int                                                bUpdatedZ;                                                // 0x221C(0x0004)
	TArray<int>                                        SectorsOrig;                                              // 0x2220(0x000C) (NeedCtorLink)
	struct FVector                                     ToHeightmapOrig[0x4];                                     // 0x222C(0x000C) (Const, Native)
	TArray<int>                                        QuadVisibilityBitmapOrig;                                 // 0x225C(0x000C) (Const, NeedCtorLink)
	TArray<int>                                        EdgeTurnBitmapOrig;                                       // 0x2268(0x000C) (Const, NeedCtorLink)
	int                                                GeneratedSectorCounter;                                   // 0x2274(0x0004)
	int                                                NumIntMap;                                                // 0x2278(0x0004)
	unsigned long                                      bAutoTimeGeneration : 1;                                  // 0x227C(0x0004)
	int                                                NightMapStart;                                            // 0x2280(0x0004)
	int                                                DayMapStart;                                              // 0x2284(0x0004)
	TArray<struct FTerrainIntensityMap>                TIntMap;                                                  // 0x2288(0x000C) (NeedCtorLink)
	float                                              TickTime;                                                 // 0x2294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainInfo");
		return ptr;
	}

};


// Class Engine.TerrainPrimitive
// 0x0004 (0x0064 - 0x0060)
class UTerrainPrimitive : public UPrimitive
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0060(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainPrimitive");
		return ptr;
	}

};


// Class Engine.TerrainSector
// 0x0138 (0x016C - 0x0034)
class UTerrainSector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0034(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainSector");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0058 (0x0414 - 0x03BC)
class AStaticMeshActor : public AActor
{
public:
	unsigned long                                      bAgitDefaultStaticMesh : 1;                               // 0x03BC(0x0004) (Edit)
	int                                                AgitID;                                                   // 0x03C0(0x0004) (Edit)
	int                                                AccessoryIndex;                                           // 0x03C4(0x0004) (Edit)
	int                                                AgitStatus;                                               // 0x03C8(0x0004) (Edit)
	int                                                CurrAccessoryType;                                        // 0x03CC(0x0004) (Edit, Transient)
	TArray<struct FAccessoryType>                      AccessoryTypeList;                                        // 0x03D0(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bTimeReactor : 1;                                         // 0x03DC(0x0004) (Edit)
	float                                              ShowTime;                                                 // 0x03E0(0x0004) (Edit)
	float                                              HideTime;                                                 // 0x03E4(0x0004) (Edit)
	class USound*                                      StepSound_1;                                              // 0x03E8(0x0004) (Edit)
	class USound*                                      StepSound_2;                                              // 0x03EC(0x0004) (Edit)
	class USound*                                      StepSound_3;                                              // 0x03F0(0x0004) (Edit)
	unsigned long                                      bTargetable : 1;                                          // 0x03F4(0x0004) (Edit)
	TArray<class UStaticMesh*>                         StateStaticMeshs;                                         // 0x03F8(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               StateChangeEffectNames;                                   // 0x0404(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bExactProjectileCollision : 1;                            // 0x0410(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.MovableStaticMeshActor
// 0x0068 (0x047C - 0x0414)
class AMovableStaticMeshActor : public AStaticMeshActor
{
public:
	struct FRotator                                    L2OrgRotator;                                             // 0x0414(0x000C)
	struct FL2RotatorTime                              L2CycleDeltaTime;                                         // 0x0420(0x000C)
	struct FL2RotatorTime                              L2CurrentCycleTime;                                       // 0x042C(0x000C)
	struct FL2RotatorTime                              L2CurrentMax;                                             // 0x0438(0x000C)
	unsigned long                                      bL2InitMove : 1;                                          // 0x0444(0x0004)
	TArray<struct FName>                               L2MovementTag;                                            // 0x0448(0x000C) (Edit, NeedCtorLink)
	struct FL2RotatorTime                              L2AccelRatio;                                             // 0x0454(0x000C) (Edit)
	unsigned long                                      bUseL2RotatorMaxRandom : 1;                               // 0x0460(0x0004) (Edit)
	unsigned long                                      bUseL2RotatorRandomStart : 1;                             // 0x0460(0x0004) (Edit)
	struct FRotator                                    L2RotatorRate;                                            // 0x0464(0x000C) (Edit)
	struct FRotator                                    L2RotatorMax;                                             // 0x0470(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovableStaticMeshActor");
		return ptr;
	}

};


// Class Engine.StaticMeshInstance
// 0x00B0 (0x00E4 - 0x0034)
class UStaticMeshInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0034(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshInstance");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x01A4 (0x0204 - 0x0060)
class UStaticMesh : public UPrimitive
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0060(0x00E0) MISSED OFFSET
	TArray<struct FStaticMeshMaterial>                 Materials;                                                // 0x0140(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	unsigned char                                      UnknownData01[0x38];                                      // 0x014C(0x0038) MISSED OFFSET
	unsigned long                                      UseSimpleLineCollision : 1;                               // 0x0184(0x0004) (Edit)
	unsigned long                                      UnknownData02 : 31;                                       // 0x0184(0x0001)
	unsigned long                                      UseSimpleBoxCollision : 1;                                // 0x0188(0x0004) (Edit)
	unsigned long                                      UnknownData03 : 31;                                       // 0x0188(0x0001)
	unsigned long                                      UseVertexColor : 1;                                       // 0x018C(0x0004) (Edit)
	unsigned long                                      UnknownData04 : 31;                                       // 0x018C(0x0001)
	unsigned long                                      UseSimpleKarmaCollision : 1;                              // 0x0190(0x0004) (Edit)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	unsigned long                                      bStaticMeshLod : 1;                                       // 0x0198(0x0004) (Edit)
	class UStaticMesh*                                 StaticMeshLod01;                                          // 0x019C(0x0004) (Edit)
	class UStaticMesh*                                 StaticMeshLod02;                                          // 0x01A0(0x0004) (Edit)
	float                                              LodRange01;                                               // 0x01A4(0x0004) (Edit)
	float                                              LodRange02;                                               // 0x01A8(0x0004) (Edit)
	unsigned long                                      bSwayObject : 1;                                          // 0x01AC(0x0004) (Edit)
	float                                              Frequency;                                                // 0x01B0(0x0004) (Edit)
	float                                              MaxSwayAngle;                                             // 0x01B4(0x0004) (Edit)
	unsigned long                                      bStaticMeshLodBlend : 1;                                  // 0x01B8(0x0004) (Edit)
	unsigned long                                      UnknownData06 : 31;                                       // 0x01B8(0x0001)
	unsigned long                                      bMakeTwoSideMesh : 1;                                     // 0x01BC(0x0004) (Edit)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01C0(0x0004) MISSED OFFSET
	unsigned long                                      bUseBillBoard : 1;                                        // 0x01C4(0x0004) (Edit)
	unsigned long                                      UnknownData08 : 31;                                       // 0x01C4(0x0001)
	unsigned long                                      bUseNormalmap : 1;                                        // 0x01C8(0x0004) (Edit)
	unsigned char                                      UnknownData09[0x38];                                      // 0x01CC(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

};


// Class Engine.SpriteEmitter
// 0x0028 (0x0514 - 0x04EC)
class USpriteEmitter : public UParticleEmitter
{
public:
	TEnumAsByte<EParticleDirectionUsage>               UseDirectionAs;                                           // 0x04EC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	struct FVector                                     ProjectionNormal;                                         // 0x04F0(0x000C) (Edit)
	int                                                Refraction;                                               // 0x04FC(0x0004) (Edit)
	float                                              RefrUScale;                                               // 0x0500(0x0004) (Edit)
	float                                              RefrVScale;                                               // 0x0504(0x0004) (Edit)
	struct FVector                                     RealProjectionNormal;                                     // 0x0508(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpriteEmitter");
		return ptr;
	}

};


// Class Engine.SparkEmitter
// 0x003C (0x0528 - 0x04EC)
class USparkEmitter : public UParticleEmitter
{
public:
	struct FRange                                      LineSegmentsRange;                                        // 0x04EC(0x0008) (Edit)
	struct FRange                                      TimeBeforeVisibleRange;                                   // 0x04F4(0x0008) (Edit)
	struct FRange                                      TimeBetweenSegmentsRange;                                 // 0x04FC(0x0008) (Edit)
	TArray<struct FParticleSparkData>                  SparkData;                                                // 0x0504(0x000C) (Transient, NeedCtorLink)
	class UVertexBuffer*                               VertexBuffer;                                             // 0x0510(0x0004) (Transient)
	class UIndexBuffer*                                IndexBuffer;                                              // 0x0514(0x0004) (Transient)
	int                                                NumSegments;                                              // 0x0518(0x0004) (Transient)
	int                                                VerticesPerParticle;                                      // 0x051C(0x0004) (Transient)
	int                                                IndicesPerParticle;                                       // 0x0520(0x0004) (Transient)
	int                                                PrimitivesPerParticle;                                    // 0x0524(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SparkEmitter");
		return ptr;
	}

};


// Class Engine.AnimNotify
// 0x0004 (0x0038 - 0x0034)
class UAnimNotify : public UObject
{
public:
	int                                                Revision;                                                 // 0x0034(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}

};


// Class Engine.AnimNotify_IdleSound
// 0x001C (0x0054 - 0x0038)
class UAnimNotify_IdleSound : public UAnimNotify
{
public:
	class USound*                                      Sound;                                                    // 0x0038(0x0004) (Edit)
	float                                              Volume;                                                   // 0x003C(0x0004) (Edit)
	int                                                Radius;                                                   // 0x0040(0x0004) (Edit)
	int                                                Random;                                                   // 0x0044(0x0004) (Edit)
	class USound*                                      IdleSound[0x3];                                           // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_IdleSound");
		return ptr;
	}

};


// Class Engine.AnimNotify_MatSubAction
// 0x0004 (0x003C - 0x0038)
class UAnimNotify_MatSubAction : public UAnimNotify
{
public:
	class UMatSubAction*                               SubAction;                                                // 0x0038(0x0004) (Edit, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_MatSubAction");
		return ptr;
	}

};


// Class Engine.AnimNotify_Scripted
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Scripted : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Scripted");
		return ptr;
	}


	void Notify(class AActor* Owner);
};


// Class Engine.AnimNotify_Script
// 0x0004 (0x003C - 0x0038)
class UAnimNotify_Script : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Script");
		return ptr;
	}

};


// Class Engine.AnimNotify_Sound
// 0x0070 (0x00A8 - 0x0038)
class UAnimNotify_Sound : public UAnimNotify
{
public:
	class USound*                                      Sound;                                                    // 0x0038(0x0004) (Edit)
	float                                              Volume;                                                   // 0x003C(0x0004) (Edit)
	int                                                Radius;                                                   // 0x0040(0x0004) (Edit)
	int                                                Random;                                                   // 0x0044(0x0004) (Edit)
	class USound*                                      DefaultWalkSound[0x3];                                    // 0x0048(0x0004)
	class USound*                                      DefaultRunSound[0x3];                                     // 0x0054(0x0004)
	class USound*                                      GrassWalkSound[0x3];                                      // 0x0060(0x0004)
	class USound*                                      GrassRunSound[0x3];                                       // 0x006C(0x0004)
	class USound*                                      WaterWalkSound[0x3];                                      // 0x0078(0x0004)
	class USound*                                      WaterRunSound[0x3];                                       // 0x0084(0x0004)
	class USound*                                      DefaultActorWalkSound[0x3];                               // 0x0090(0x0004)
	class USound*                                      DefaultActorRunSound[0x3];                                // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Sound");
		return ptr;
	}

};


// Class Engine.AnimNotify_SwimSound
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_SwimSound : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_SwimSound");
		return ptr;
	}

};


// Class Engine.AnimNotify_DestroyEffect
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_DestroyEffect : public UAnimNotify
{
public:
	struct FName                                       DestroyTag;                                               // 0x0038(0x0004) (Edit)
	unsigned long                                      bExpireParticles : 1;                                     // 0x003C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_DestroyEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_Effect
// 0x0044 (0x007C - 0x0038)
class UAnimNotify_Effect : public UAnimNotify
{
public:
	class UClass*                                      EffectClass;                                              // 0x0038(0x0004) (Edit)
	struct FName                                       Bone;                                                     // 0x003C(0x0004) (Edit)
	struct FVector                                     OffsetLocation;                                           // 0x0040(0x000C) (Edit)
	struct FRotator                                    OffsetRotation;                                           // 0x004C(0x000C) (Edit)
	unsigned long                                      Attach : 1;                                               // 0x0058(0x0004) (Edit)
	struct FName                                       Tag;                                                      // 0x005C(0x0004) (Edit)
	float                                              DrawScale;                                                // 0x0060(0x0004) (Edit)
	struct FVector                                     DrawScale3D;                                              // 0x0064(0x000C) (Edit)
	unsigned long                                      TrailCamera : 1;                                          // 0x0070(0x0004) (Edit)
	unsigned long                                      IndependentRotation : 1;                                  // 0x0070(0x0004) (Edit)
	float                                              EffectScale;                                              // 0x0074(0x0004) (Edit)
	class AActor*                                      LastSpawnedEffect;                                        // 0x0078(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Effect");
		return ptr;
	}

};


// Class Engine.AnimNotify_AttackVoice
// 0x000C (0x0044 - 0x0038)
class UAnimNotify_AttackVoice : public UAnimNotify
{
public:
	float                                              Volume;                                                   // 0x0038(0x0004) (Edit)
	float                                              Radius;                                                   // 0x003C(0x0004) (Edit)
	int                                                Random;                                                   // 0x0040(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_AttackVoice");
		return ptr;
	}

};


// Class Engine.AnimNotify_CameraLocation
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CameraLocation : public UAnimNotify
{
public:
	int                                                BoneIndex;                                                // 0x0038(0x0004) (Edit)
	unsigned long                                      bCalcWithBone : 1;                                        // 0x003C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_CameraLocation");
		return ptr;
	}

};


// Class Engine.AnimNotify_Illusion
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_Illusion : public UAnimNotify
{
public:
	float                                              SpawnDelay;                                               // 0x0038(0x0004) (Edit)
	float                                              RemainTime;                                               // 0x003C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Illusion");
		return ptr;
	}

};


// Class Engine.AnimNotify_Channeling
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Channeling : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Channeling");
		return ptr;
	}

};


// Class Engine.AnimNotify_AttackPreShot
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_AttackPreShot : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_AttackPreShot");
		return ptr;
	}

};


// Class Engine.AnimNotify_AttackShot
// 0x0004 (0x003C - 0x0038)
class UAnimNotify_AttackShot : public UAnimNotify
{
public:
	int                                                TargetIndex;                                              // 0x0038(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_AttackShot");
		return ptr;
	}

};


// Class Engine.AnimNotify_AttackItem
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_AttackItem : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_AttackItem");
		return ptr;
	}

};


// Class Engine.AnimNotify_ScreenFade
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_ScreenFade : public UAnimNotify
{
public:
	float                                              FadeOutDuration;                                          // 0x0038(0x0004) (Edit)
	struct FColor                                      FadeOutColor;                                             // 0x003C(0x0004) (Edit)
	float                                              BlackOutDuration;                                         // 0x0040(0x0004) (Edit)
	float                                              FadeInDuration;                                           // 0x0044(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ScreenFade");
		return ptr;
	}

};


// Class Engine.AnimNotify_ViewShake
// 0x001C (0x0054 - 0x0038)
class UAnimNotify_ViewShake : public UAnimNotify
{
public:
	TEnumAsByte<EViewShakeType>                        ShakeType;                                                // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              ShakeIntensity;                                           // 0x003C(0x0004) (Edit)
	struct FVector                                     ShakeVector;                                              // 0x0040(0x000C) (Edit)
	float                                              ShakeRange;                                               // 0x004C(0x0004) (Edit)
	int                                                ShakeCount;                                               // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ViewShake");
		return ptr;
	}

};


// Class Engine.AnimNotify_BoneScale
// 0x001C (0x0054 - 0x0038)
class UAnimNotify_BoneScale : public UAnimNotify
{
public:
	int                                                BoneIndex;                                                // 0x0038(0x0004) (Edit)
	float                                              StartScale;                                               // 0x003C(0x0004) (Edit)
	float                                              EndScale;                                                 // 0x0040(0x0004) (Edit)
	float                                              StartFrameIndex;                                          // 0x0044(0x0004) (Edit)
	float                                              EndFrameIndex;                                            // 0x0048(0x0004) (Edit)
	unsigned long                                      ApplySubBones : 1;                                        // 0x004C(0x0004) (Edit)
	TEnumAsByte<EL2PartialBoneScalerType>              BoneScalerType;                                           // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_BoneScale");
		return ptr;
	}

};


// Class Engine.SkeletalMeshInstance
// 0x0304 (0x0390 - 0x008C)
class USkeletalMeshInstance : public ULodMeshInstance
{
public:
	unsigned char                                      UnknownData00[0x304];                                     // 0x008C(0x0304) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshInstance");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x0204 (0x034C - 0x0148)
class USkeletalMesh : public ULodMesh
{
public:
	unsigned char                                      UnknownData00[0x204];                                     // 0x0148(0x0204) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

};


// Class Engine.Animation
// 0x0000 (0x0034 - 0x0034)
class UAnimation : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Animation");
		return ptr;
	}

};


// Class Engine.MeshAnimation
// 0x0048 (0x007C - 0x0034)
class UMeshAnimation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0034(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshAnimation");
		return ptr;
	}

};


// Class Engine.SimulationNotify
// 0x0024 (0x0058 - 0x0034)
class USimulationNotify : public UObject
{
public:
	float                                              frame;                                                    // 0x0034(0x0004)
	unsigned long                                      UseForce : 1;                                             // 0x0038(0x0004)
	struct FVector                                     Force;                                                    // 0x003C(0x000C)
	float                                              ResetFactor;                                              // 0x0048(0x0004)
	unsigned long                                      TerrainCollision : 1;                                     // 0x004C(0x0004)
	float                                              TerrainCollisionZ;                                        // 0x0050(0x0004)
	float                                              Stiffness;                                                // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationNotify");
		return ptr;
	}

};


// Class Engine.SimulationCollision
// 0x0014 (0x0048 - 0x0034)
class USimulationCollision : public UObject
{
public:
	int                                                BoneIndexA;                                               // 0x0034(0x0004)
	struct FVector                                     BoneCenterA;                                              // 0x0038(0x000C) (Transient)
	unsigned long                                      ValidBone : 1;                                            // 0x0044(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationCollision");
		return ptr;
	}

};


// Class Engine.SimulationCylinderCollision
// 0x0024 (0x006C - 0x0048)
class USimulationCylinderCollision : public USimulationCollision
{
public:
	float                                              Radius;                                                   // 0x0048(0x0004)
	int                                                BoneIndexB;                                               // 0x004C(0x0004)
	unsigned long                                      SphereA : 1;                                              // 0x0050(0x0004)
	unsigned long                                      SphereB : 1;                                              // 0x0050(0x0004)
	struct FVector                                     BoneCenterB;                                              // 0x0054(0x000C) (Transient)
	struct FVector                                     AB;                                                       // 0x0060(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationCylinderCollision");
		return ptr;
	}

};


// Class Engine.SimulationSphereCollision
// 0x0004 (0x004C - 0x0048)
class USimulationSphereCollision : public USimulationCollision
{
public:
	float                                              Radius;                                                   // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationSphereCollision");
		return ptr;
	}

};


// Class Engine.SimulationSpringConstraint
// 0x0060 (0x0094 - 0x0034)
class USimulationSpringConstraint : public UObject
{
public:
	int                                                Responsiveness[0x8];                                      // 0x0034(0x0004)
	int                                                NeighbourIndex[0x8];                                      // 0x0054(0x0004)
	float                                              DistAtRest[0x8];                                          // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationSpringConstraint");
		return ptr;
	}

};


// Class Engine.SimulationData
// 0x0048 (0x007C - 0x0034)
class USimulationData : public UObject
{
public:
	TArray<int>                                        Anchors;                                                  // 0x0034(0x000C) (NeedCtorLink)
	TArray<int>                                        WidthNodesCounts;                                         // 0x0040(0x000C) (NeedCtorLink)
	TArray<class USimulationSpringConstraint*>         SpringConstraintData;                                     // 0x004C(0x000C) (NeedCtorLink)
	TArray<class USimulationCollision*>                CollisionObjects;                                         // 0x0058(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              NeighbourState;                                           // 0x0064(0x000C) (NeedCtorLink)
	TArray<struct FVector>                             ForceSensitiveness;                                       // 0x0070(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationData");
		return ptr;
	}

};


// Class Engine.SimulationMesh
// 0x00E0 (0x0228 - 0x0148)
class USimulationMesh : public ULodMesh
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0148(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationMesh");
		return ptr;
	}

};


// Class Engine.SimulationMeshInstance
// 0x00C8 (0x0154 - 0x008C)
class USimulationMeshInstance : public ULodMeshInstance
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x008C(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulationMeshInstance");
		return ptr;
	}

};


// Class Engine.ShadowBitmapMaterial
// 0x0040 (0x00BC - 0x007C)
class UShadowBitmapMaterial : public UBitmapMaterial
{
public:
	int                                                TextureInterfaces[0x2];                                   // 0x007C(0x0004) (Const, Transient)
	int                                                ShadowInterface;                                          // 0x0084(0x0004) (Const, Transient)
	class AActor*                                      ShadowActor;                                              // 0x0088(0x0004)
	struct FVector                                     LightDirection;                                           // 0x008C(0x000C)
	float                                              LightDistance;                                            // 0x0098(0x0004)
	float                                              LightFOV;                                                 // 0x009C(0x0004)
	unsigned long                                      Dirty : 1;                                                // 0x00A0(0x0004)
	unsigned long                                      Invalid : 1;                                              // 0x00A0(0x0004)
	unsigned long                                      bBlobShadow : 1;                                          // 0x00A0(0x0004)
	float                                              CullDistance;                                             // 0x00A4(0x0004)
	unsigned char                                      ShadowDarkness;                                           // 0x00A8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	class UBitmapMaterial*                             BlobShadow;                                               // 0x00AC(0x0004)
	unsigned long                                      bDefaultShadow : 1;                                       // 0x00B0(0x0004)
	int                                                ShadowIndex;                                              // 0x00B4(0x0004)
	int                                                ShadowTextureRevision;                                    // 0x00B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowBitmapMaterial");
		return ptr;
	}


	bool Destroy();
};


// Class Engine.Projector
// 0x0190 (0x054C - 0x03BC)
class AProjector : public AActor
{
public:
	TEnumAsByte<EProjectorBlending>                    MaterialBlendingOp;                                       // 0x03BC(0x0001) (Edit)
	TEnumAsByte<EProjectorBlending>                    FrameBufferBlendingOp;                                    // 0x03BD(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	class UMaterial*                                   ProjTexture;                                              // 0x03C0(0x0004) (Edit)
	int                                                FOV;                                                      // 0x03C4(0x0004) (Edit)
	int                                                MaxTraceDistance;                                         // 0x03C8(0x0004) (Edit)
	unsigned long                                      bProjectBSP : 1;                                          // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectTerrain : 1;                                      // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectStaticMesh : 1;                                   // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectParticles : 1;                                    // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectActor : 1;                                        // 0x03CC(0x0004) (Edit)
	unsigned long                                      bLevelStatic : 1;                                         // 0x03CC(0x0004) (Edit)
	unsigned long                                      bClipBSP : 1;                                             // 0x03CC(0x0004) (Edit)
	unsigned long                                      bClipStaticMesh : 1;                                      // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectOnUnlit : 1;                                      // 0x03CC(0x0004) (Edit)
	unsigned long                                      bGradient : 1;                                            // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectOnBackfaces : 1;                                  // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectOnAlpha : 1;                                      // 0x03CC(0x0004) (Edit)
	unsigned long                                      bProjectOnParallelBSP : 1;                                // 0x03CC(0x0004) (Edit)
	struct FName                                       ProjectTag;                                               // 0x03D0(0x0004) (Edit)
	unsigned long                                      bDynamicAttach : 1;                                       // 0x03D4(0x0004) (Edit)
	struct FPlane                                      FrustumPlanes[0x6];                                       // 0x03D8(0x0010) (Const, Transient)
	struct FVector                                     FrustumVertices[0x8];                                     // 0x0438(0x000C) (Const, Transient)
	struct FBox                                        Box;                                                      // 0x0498(0x001C) (Const, Transient)
	struct FProjectorRenderInfoPtr                     RenderInfo;                                               // 0x04B4(0x0004) (Const, Transient)
	class UTexture*                                    GradientTexture;                                          // 0x04B8(0x0004)
	struct FMatrix                                     GradientMatrix;                                           // 0x04BC(0x0040) (Transient)
	struct FMatrix                                     Matrix;                                                   // 0x04FC(0x0040) (Transient)
	struct FVector                                     OldLocation;                                              // 0x053C(0x000C) (Transient)
	float                                              ProjectorRadius;                                          // 0x0548(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Projector");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other);
	void PostBeginPlay();
	void DetachActor(class AActor* A);
	void AttachActor(class AActor* A);
	void AbandonProjector(float LifeTime);
	void DetachProjector(bool Force);
	void AttachProjector();
};


// Class Engine.MarkProjector
// 0x0020 (0x056C - 0x054C)
class AMarkProjector : public AProjector
{
public:
	struct FVector                                     DesireLocation;                                           // 0x054C(0x000C) (Edit)
	struct FVector                                     OffsetDesireLocation;                                     // 0x0558(0x000C) (Edit)
	unsigned long                                      bAttachMark : 1;                                          // 0x0564(0x0004) (Edit)
	class AActor*                                      ProjectedActor;                                           // 0x0568(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MarkProjector");
		return ptr;
	}


	void Touch(class AActor* Other);
	void Tick(float DeltaTime);
	void UpdateMarkProjector();
	void Timer();
	void Destroyed();
	void PostBeginPlay();
	bool UpdateDesireLocation();
};


// Class Engine.ShadowProjector
// 0x0020 (0x056C - 0x054C)
class AShadowProjector : public AProjector
{
public:
	class AActor*                                      ShadowActor;                                              // 0x054C(0x0004) (Edit)
	struct FVector                                     LightDirection;                                           // 0x0550(0x000C) (Edit)
	float                                              LightDistance;                                            // 0x055C(0x0004) (Edit)
	unsigned long                                      RootMotion : 1;                                           // 0x0560(0x0004) (Edit)
	unsigned long                                      bBlobShadow : 1;                                          // 0x0560(0x0004) (Edit)
	unsigned long                                      bShadowActive : 1;                                        // 0x0560(0x0004) (Edit)
	class UShadowBitmapMaterial*                       ShadowTexture;                                            // 0x0564(0x0004)
	unsigned long                                      L2Hidden : 1;                                             // 0x0568(0x0004) (Edit)
	unsigned long                                      L2DefaultShadow : 1;                                      // 0x0568(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowProjector");
		return ptr;
	}


	void Tick(float DeltaTime);
	void UpdateShadow();
	void InitShadow();
	bool IsUnderWaterCamera();
	void Destroyed();
	void PostBeginPlay();
	bool CheckVisible();
	bool UpdateLightInfo();
};


// Class Engine.Security
// 0x001C (0x03D8 - 0x03BC)
class ASecurity : public AInfo
{
public:
	int                                                LastType;                                                 // 0x03BC(0x0004)
	struct FString                                     LastParams[0x2];                                          // 0x03C0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Security");
		return ptr;
	}


	void ClientMessage(const struct FString& S);
	void BadClient(int Code, const struct FString& Data);
	void Perform(int SecType, const struct FString& Param1, const struct FString& Param2, float TimeOut);
	void ServerCallback(int SecType, const struct FString& Data);
	void ClientPerform(int SecType, const struct FString& Param1, const struct FString& Param2);
	void NativePerform(int SecType, const struct FString& Param1, const struct FString& Param2);
};


// Class Engine.ScriptedTexture
// 0x0014 (0x0090 - 0x007C)
class UScriptedTexture : public UBitmapMaterial
{
public:
	int                                                RenderTarget;                                             // 0x007C(0x0004) (Const, Transient)
	class UViewport*                                   RenderViewport;                                           // 0x0080(0x0004) (Const, Transient)
	class AActor*                                      Client;                                                   // 0x0084(0x0004)
	int                                                Revision;                                                 // 0x0088(0x0004) (Transient)
	int                                                OldRevision;                                              // 0x008C(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptedTexture");
		return ptr;
	}


	void DrawPortal(int X, int Y, int Width, int Height, class AActor* CamActor, const struct FVector& CamLocation, const struct FRotator& CamRotation, int FOV, bool ClearZ);
	void DrawTile(float X, float Y, float XL, float YL, float U, float V, float UL, float VL, class UMaterial* Material, const struct FColor& Color);
	void TextSize(const struct FString& Text, class UFont* Font, int* Width, int* Height);
	void DrawText(int StartX, int StartY, const struct FString& Text, class UFont* Font, const struct FColor& Color);
	void SetSize(int Width, int Height);
};


// Class Engine.Light
// 0x003C (0x03F8 - 0x03BC)
class ALight : public AActor
{
public:
	TEnumAsByte<ELightType>                            LightType;                                                // 0x03BC(0x0001) (Edit)
	TEnumAsByte<ELightEffect>                          LightEffect;                                              // 0x03BD(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	float                                              LightBrightness;                                          // 0x03C0(0x0004) (Edit)
	float                                              LightRadius;                                              // 0x03C4(0x0004) (Edit)
	unsigned char                                      LightHue;                                                 // 0x03C8(0x0001) (Edit)
	unsigned char                                      LightSaturation;                                          // 0x03C9(0x0001) (Edit)
	unsigned char                                      LightPeriod;                                              // 0x03CA(0x0001) (Edit)
	unsigned char                                      LightPhase;                                               // 0x03CB(0x0001) (Edit)
	unsigned char                                      LightCone;                                                // 0x03CC(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	unsigned long                                      bSunlightColor : 1;                                       // 0x03D0(0x0004)
	unsigned long                                      bTimeLight : 1;                                           // 0x03D0(0x0004) (Edit)
	float                                              LightOnTime;                                              // 0x03D4(0x0004) (Edit)
	float                                              LightOffTime;                                             // 0x03D8(0x0004) (Edit)
	float                                              LightPrevTime;                                            // 0x03DC(0x0004)
	float                                              LightLifeTime;                                            // 0x03E0(0x0004)
	float                                              MinCoronaSize;                                            // 0x03E4(0x0004) (Edit)
	float                                              MaxCoronaSize;                                            // 0x03E8(0x0004) (Edit)
	float                                              CoronaRotation;                                           // 0x03EC(0x0004) (Edit)
	float                                              CoronaRotationOffset;                                     // 0x03F0(0x0004) (Edit)
	unsigned long                                      UseOwnFinalBlend : 1;                                     // 0x03F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}

};


// Class Engine.DynamicLight
// 0x0000 (0x03F8 - 0x03F8)
class ADynamicLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicLight");
		return ptr;
	}

};


// Class Engine.LookTarget
// 0x0000 (0x03BC - 0x03BC)
class ALookTarget : public AKeypoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LookTarget");
		return ptr;
	}

};


// Class Engine.MatObject
// 0x0000 (0x0034 - 0x0034)
class UMatObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatObject");
		return ptr;
	}

};


// Class Engine.MatSubAction
// 0x0028 (0x005C - 0x0034)
class UMatSubAction : public UMatObject
{
public:
	float                                              Delay;                                                    // 0x0034(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0038(0x0004) (Edit)
	class UTexture*                                    Icon;                                                     // 0x003C(0x0004)
	TEnumAsByte<ESAStatus>                             Status;                                                   // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FString                                     Desc;                                                     // 0x0044(0x000C) (Localized, NeedCtorLink)
	float                                              PctStarting;                                              // 0x0050(0x0004) (Transient)
	float                                              PctEnding;                                                // 0x0054(0x0004) (Transient)
	float                                              PctDuration;                                              // 0x0058(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatSubAction");
		return ptr;
	}

};


// Class Engine.SubActionSceneSpeed
// 0x0008 (0x0064 - 0x005C)
class USubActionSceneSpeed : public UMatSubAction
{
public:
	struct FRange                                      SceneSpeed;                                               // 0x005C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionSceneSpeed");
		return ptr;
	}

};


// Class Engine.SubActionGameSpeed
// 0x0008 (0x0064 - 0x005C)
class USubActionGameSpeed : public UMatSubAction
{
public:
	struct FRange                                      GameSpeed;                                                // 0x005C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionGameSpeed");
		return ptr;
	}

};


// Class Engine.SubActionOrientation
// 0x0034 (0x0090 - 0x005C)
class USubActionOrientation : public UMatSubAction
{
public:
	struct UMatObject_FOrientation                     CamOrientation;                                           // 0x005C(0x0034) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionOrientation");
		return ptr;
	}

};


// Class Engine.SubActionCameraShake
// 0x0018 (0x0074 - 0x005C)
class USubActionCameraShake : public UMatSubAction
{
public:
	struct FRangeVector                                Shake;                                                    // 0x005C(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionCameraShake");
		return ptr;
	}

};


// Class Engine.SubActionFOV
// 0x0008 (0x0064 - 0x005C)
class USubActionFOV : public UMatSubAction
{
public:
	struct FRange                                      FOV;                                                      // 0x005C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionFOV");
		return ptr;
	}

};


// Class Engine.SubActionTrigger
// 0x0004 (0x0060 - 0x005C)
class USubActionTrigger : public UMatSubAction
{
public:
	struct FName                                       EventName;                                                // 0x005C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionTrigger");
		return ptr;
	}

};


// Class Engine.SubActionFade
// 0x0008 (0x0064 - 0x005C)
class USubActionFade : public UMatSubAction
{
public:
	struct FColor                                      FadeColor;                                                // 0x005C(0x0004) (Edit)
	unsigned long                                      bFadeOut : 1;                                             // 0x0060(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionFade");
		return ptr;
	}

};


// Class Engine.MatDemoActor
// 0x0000 (0x03BC - 0x03BC)
class AMatDemoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatDemoActor");
		return ptr;
	}

};


// Class Engine.MatAction
// 0x0060 (0x0094 - 0x0034)
class UMatAction : public UMatObject
{
public:
	class AInterpolationPoint*                         IntPoint;                                                 // 0x0034(0x0004) (Edit)
	struct FString                                     Comment;                                                  // 0x0038(0x000C) (Edit, NeedCtorLink)
	float                                              Duration;                                                 // 0x0044(0x0004) (Edit)
	TArray<class UMatSubAction*>                       SubActions;                                               // 0x0048(0x000C) (Edit, ExportObject, NeedCtorLink, EditInline)
	unsigned long                                      bSmoothCorner : 1;                                        // 0x0054(0x0004) (Edit)
	struct FVector                                     StartControlPoint;                                        // 0x0058(0x000C) (Edit)
	struct FVector                                     EndControlPoint;                                          // 0x0064(0x000C) (Edit)
	unsigned long                                      bConstantPathVelocity : 1;                                // 0x0070(0x0004) (Edit)
	float                                              PathVelocity;                                             // 0x0074(0x0004) (Edit)
	float                                              PathLength;                                               // 0x0078(0x0004)
	TArray<struct FVector>                             SampleLocations;                                          // 0x007C(0x000C) (Transient, NeedCtorLink)
	float                                              PctStarting;                                              // 0x0088(0x0004) (Transient)
	float                                              PctEnding;                                                // 0x008C(0x0004) (Transient)
	float                                              PctDuration;                                              // 0x0090(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatAction");
		return ptr;
	}

};


// Class Engine.ActionWarp
// 0x0000 (0x0094 - 0x0094)
class UActionWarp : public UMatAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActionWarp");
		return ptr;
	}

};


// Class Engine.ActionPause
// 0x0000 (0x0094 - 0x0094)
class UActionPause : public UMatAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActionPause");
		return ptr;
	}

};


// Class Engine.ActionMoveCamera
// 0x0004 (0x0098 - 0x0094)
class UActionMoveCamera : public UMatAction
{
public:
	TEnumAsByte<EPathStyle>                            PathStyle;                                                // 0x0094(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActionMoveCamera");
		return ptr;
	}

};


// Class Engine.MeshObject
// 0x0000 (0x0034 - 0x0034)
class UMeshObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshObject");
		return ptr;
	}

};


// Class Engine.SceneManager
// 0x00F8 (0x04B4 - 0x03BC)
class ASceneManager : public AInfo
{
public:
	TArray<class UMatAction*>                          Actions;                                                  // 0x03BC(0x000C) (Edit, ExportObject, NeedCtorLink, EditInline)
	TEnumAsByte<EAffect>                               Affect;                                                   // 0x03C8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	class AActor*                                      AffectedActor;                                            // 0x03CC(0x0004) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x03D0(0x0004) (Edit)
	unsigned long                                      bCinematicView : 1;                                       // 0x03D0(0x0004) (Edit)
	struct FName                                       PlayerScriptTag;                                          // 0x03D4(0x0004) (Edit)
	struct FName                                       NextSceneTag;                                             // 0x03D8(0x0004) (Edit)
	unsigned long                                      bReverseView : 1;                                         // 0x03DC(0x0004)
	int                                                nSceneManagerID;                                          // 0x03E0(0x0004)
	float                                              PctSceneComplete;                                         // 0x03E4(0x0004) (Transient)
	class UMatAction*                                  CurrentAction;                                            // 0x03E8(0x0004) (Transient)
	float                                              SceneSpeed;                                               // 0x03EC(0x0004) (Transient)
	float                                              TotalSceneTime;                                           // 0x03F0(0x0004) (Transient)
	class AActor*                                      Viewer;                                                   // 0x03F4(0x0004) (Transient)
	class APawn*                                       OldPawn;                                                  // 0x03F8(0x0004) (Transient)
	unsigned long                                      bIsRunning : 1;                                           // 0x03FC(0x0004) (Transient)
	unsigned long                                      bIsSceneStarted : 1;                                      // 0x03FC(0x0004) (Transient)
	float                                              CurrentTime;                                              // 0x0400(0x0004) (Transient)
	TArray<struct FVector>                             SampleLocations;                                          // 0x0404(0x000C) (Transient, NeedCtorLink)
	TArray<class UMatSubAction*>                       SubActions;                                               // 0x0410(0x000C) (Transient, NeedCtorLink)
	struct ASceneManager_FOrientation                  CamOrientation;                                           // 0x041C(0x0034) (Transient)
	struct ASceneManager_FOrientation                  PrevOrientation;                                          // 0x0450(0x0034) (Transient)
	struct FInterpolator                               RotInterpolator;                                          // 0x0484(0x0018) (Transient)
	struct FVector                                     CameraShake;                                              // 0x049C(0x000C) (Transient)
	struct FVector                                     DollyOffset;                                              // 0x04A8(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneManager");
		return ptr;
	}


	void SceneEnded();
	void SceneStarted(class ALevelInfo* Info);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void BeginPlay();
	float GetTotalSceneTime();
};


// Class Engine.RibbonEmitter
// 0x00E0 (0x05CC - 0x04EC)
class URibbonEmitter : public UParticleEmitter
{
public:
	float                                              SampleRate;                                               // 0x04EC(0x0004) (Edit)
	float                                              DecayRate;                                                // 0x04F0(0x0004) (Edit)
	int                                                NumPoints;                                                // 0x04F4(0x0004) (Edit)
	TEnumAsByte<EAccDrop>                              AccDrop;                                                  // 0x04F8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	int                                                PointsDropRate;                                           // 0x04FC(0x0004) (Edit)
	float                                              ThresholdTime;                                            // 0x0500(0x0004) (Edit)
	int                                                MinPoints;                                                // 0x0504(0x0004) (Edit)
	float                                              ThresholdTime2;                                           // 0x0508(0x0004) (Edit)
	float                                              RibbonWidth;                                              // 0x050C(0x0004) (Edit)
	TEnumAsByte<EGetPointAxis>                         GetPointAxisFrom;                                         // 0x0510(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	struct FVector                                     AxisNormal;                                               // 0x0514(0x000C) (Edit)
	float                                              MinSampleDist;                                            // 0x0520(0x0004) (Edit)
	float                                              MinSampleDot;                                             // 0x0524(0x0004) (Edit)
	float                                              PointOriginOffset;                                        // 0x0528(0x0004) (Edit)
	float                                              RibbonTextureUScale;                                      // 0x052C(0x0004) (Edit)
	float                                              RibbonTextureVScale;                                      // 0x0530(0x0004) (Edit)
	int                                                NumSheets;                                                // 0x0534(0x0004) (Edit)
	TArray<float>                                      SheetScale;                                               // 0x0538(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     StartBoneOffset;                                          // 0x0544(0x000C) (Edit)
	struct FVector                                     EndBoneOffset;                                            // 0x0550(0x000C) (Edit)
	struct FName                                       BoneNameStart;                                            // 0x055C(0x0004) (Edit)
	struct FName                                       BoneNameEnd;                                              // 0x0560(0x0004) (Edit)
	TArray<struct FRibbonPoint>                        RibbonPoints;                                             // 0x0564(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bUseInterpolation : 1;                                    // 0x0570(0x0004) (Edit)
	int                                                CntrPoints;                                               // 0x0574(0x0004) (Edit)
	float                                              ScaleRatio;                                               // 0x0578(0x0004) (Edit)
	unsigned long                                      bSamplePoints : 1;                                        // 0x057C(0x0004) (Edit)
	unsigned long                                      bDecayPoints : 1;                                         // 0x057C(0x0004) (Edit)
	unsigned long                                      bDecayPointsWhenStopped : 1;                              // 0x057C(0x0004) (Edit)
	unsigned long                                      bSyncDecayWhenKilled : 1;                                 // 0x057C(0x0004) (Edit)
	unsigned long                                      bLengthBasedTextureU : 1;                                 // 0x057C(0x0004) (Edit)
	unsigned long                                      bUseSheetScale : 1;                                       // 0x057C(0x0004) (Edit)
	unsigned long                                      bUseBones : 1;                                            // 0x057C(0x0004) (Edit)
	unsigned long                                      bUseBoneDistance : 1;                                     // 0x057C(0x0004) (Edit)
	float                                              SampleTimer;                                              // 0x0580(0x0004) (Transient)
	float                                              DecayTimer;                                               // 0x0584(0x0004) (Transient)
	float                                              RealSampleRate;                                           // 0x0588(0x0004) (Transient)
	float                                              RealDecayRate;                                            // 0x058C(0x0004) (Transient)
	int                                                SheetsUsed;                                               // 0x0590(0x0004) (Transient)
	struct FRibbonPoint                                LastSampledPoint;                                         // 0x0594(0x0034) (Transient)
	unsigned long                                      bKilled : 1;                                              // 0x05C8(0x0004) (Transient)
	unsigned long                                      bDecaying : 1;                                            // 0x05C8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RibbonEmitter");
		return ptr;
	}

};


// Class Engine.RenderResource
// 0x0004 (0x0038 - 0x0034)
class URenderResource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RenderResource");
		return ptr;
	}

};


// Class Engine.SkinVertexBuffer
// 0x000C (0x0044 - 0x0038)
class USkinVertexBuffer : public URenderResource
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0038(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinVertexBuffer");
		return ptr;
	}

};


// Class Engine.IndexBuffer
// 0x000C (0x0044 - 0x0038)
class UIndexBuffer : public URenderResource
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0038(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IndexBuffer");
		return ptr;
	}

};


// Class Engine.VertexStreamBase
// 0x000C (0x0044 - 0x0038)
class UVertexStreamBase : public URenderResource
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0038(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexStreamBase");
		return ptr;
	}

};


// Class Engine.VertexBuffer
// 0x000C (0x0050 - 0x0044)
class UVertexBuffer : public UVertexStreamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexBuffer");
		return ptr;
	}

};


// Class Engine.VertexStreamPosNormTex
// 0x000C (0x0050 - 0x0044)
class UVertexStreamPosNormTex : public UVertexStreamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexStreamPosNormTex");
		return ptr;
	}

};


// Class Engine.VertexStreamUV
// 0x000C (0x0050 - 0x0044)
class UVertexStreamUV : public UVertexStreamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexStreamUV");
		return ptr;
	}

};


// Class Engine.VertexStreamCOLOR
// 0x000C (0x0050 - 0x0044)
class UVertexStreamCOLOR : public UVertexStreamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexStreamCOLOR");
		return ptr;
	}

};


// Class Engine.VertexStreamVECTOR
// 0x000C (0x0050 - 0x0044)
class UVertexStreamVECTOR : public UVertexStreamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexStreamVECTOR");
		return ptr;
	}

};


// Class Engine.ProjectorMaterial
// 0x0094 (0x00E8 - 0x0054)
class UProjectorMaterial : public URenderedMaterial
{
public:
	class UBitmapMaterial*                             Gradient;                                                 // 0x0054(0x0004) (Const, Transient)
	class UMaterial*                                   Projected;                                                // 0x0058(0x0004) (Const, Transient)
	class UMaterial*                                   BaseMaterial;                                             // 0x005C(0x0004) (Const, Transient)
	unsigned char                                      BaseMaterialBlending;                                     // 0x0060(0x0001) (Const, Transient)
	unsigned char                                      FrameBufferBlending;                                      // 0x0061(0x0001) (Const, Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	struct FMatrix                                     Matrix;                                                   // 0x0064(0x0040) (Const, Transient)
	struct FMatrix                                     GradientMatrix;                                           // 0x00A4(0x0040) (Const, Transient)
	unsigned long                                      bProjected : 1;                                           // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bProjectOnUnlit : 1;                                      // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bGradient : 1;                                            // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bProjectOnAlpha : 1;                                      // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bProjectOnBackfaces : 1;                                  // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bStaticProjector : 1;                                     // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bTwoSided : 1;                                            // 0x00E4(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectorMaterial");
		return ptr;
	}

};


// Class Engine.ProjectorPrimitive
// 0x0000 (0x0060 - 0x0060)
class UProjectorPrimitive : public UPrimitive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectorPrimitive");
		return ptr;
	}

};


// Class Engine.L2MovableStaticMeshActor
// 0x00C4 (0x04D8 - 0x0414)
class AL2MovableStaticMeshActor : public AStaticMeshActor
{
public:
	struct FVector                                     OrgScale;                                                 // 0x0414(0x000C)
	struct FRotator                                    OrgRotation;                                              // 0x0420(0x000C)
	struct FVector                                     OrgLocation;                                              // 0x042C(0x000C)
	struct FVector                                     ScaleMaxRatio;                                            // 0x0438(0x000C)
	struct FVector                                     RotationMaxRatio;                                         // 0x0444(0x000C)
	struct FVector                                     TranslationMaxRatio;                                      // 0x0450(0x000C)
	struct FVector                                     ScaleCurrent;                                             // 0x045C(0x000C)
	struct FVector                                     RotationCurrent;                                          // 0x0468(0x000C)
	struct FVector                                     TranslationCurrent;                                       // 0x0474(0x000C)
	unsigned long                                      bInitialized : 1;                                         // 0x0480(0x0004)
	unsigned long                                      bRandomMax : 1;                                           // 0x0480(0x0004) (Edit)
	unsigned long                                      bRandomStart : 1;                                         // 0x0480(0x0004) (Edit)
	TArray<struct FName>                               L2MovementTag;                                            // 0x0484(0x000C) (Edit, NeedCtorLink)
	struct FRotator                                    RotationMax;                                              // 0x0490(0x000C) (Edit)
	struct FRotator                                    RotationRate;                                             // 0x049C(0x000C) (Edit)
	struct FVector                                     ScaleMax;                                                 // 0x04A8(0x000C) (Edit)
	struct FVector                                     ScaleRate;                                                // 0x04B4(0x000C) (Edit)
	struct FVector                                     TranslationMax;                                           // 0x04C0(0x000C) (Edit)
	struct FVector                                     TranslationRate;                                          // 0x04CC(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2MovableStaticMeshActor");
		return ptr;
	}

};


// Class Engine.Pawn
// 0x1B50 (0x1F0C - 0x03BC)
class APawn : public AActor
{
public:
	class UMesh*                                       SubMeshes[0x9];                                           // 0x03BC(0x0004)
	class UMesh*                                       RightHandMesh;                                            // 0x03E0(0x0004)
	class UMesh*                                       LeftHandMesh;                                             // 0x03E4(0x0004)
	class UMesh*                                       RightArmMesh;                                             // 0x03E8(0x0004)
	class UMesh*                                       LeftArmMesh;                                              // 0x03EC(0x0004)
	class UMesh*                                       CloakMesh;                                                // 0x03F0(0x0004)
	class UMesh*                                       CloakCoverMesh;                                           // 0x03F4(0x0004)
	class UMeshInstance*                               SubMeshInstances[0x9];                                    // 0x03F8(0x0004) (Transient)
	class UMeshInstance*                               RightHandMeshInstance;                                    // 0x041C(0x0004) (Transient)
	class UMeshInstance*                               LeftHandMeshInstance;                                     // 0x0420(0x0004) (Transient)
	class UMeshInstance*                               RightArmMeshInstance;                                     // 0x0424(0x0004) (Transient)
	class UMeshInstance*                               LeftArmMeshInstance;                                      // 0x0428(0x0004) (Transient)
	class UMeshInstance*                               CloakMeshInstance;                                        // 0x042C(0x0004) (Transient)
	class UMeshInstance*                               CloakCoverMeshInstance;                                   // 0x0430(0x0004) (Transient)
	struct FName                                       RightHandBone;                                            // 0x0434(0x0004)
	struct FName                                       LeftHandBone;                                             // 0x0438(0x0004)
	struct FName                                       RightArmBone;                                             // 0x043C(0x0004)
	struct FName                                       LeftArmBone;                                              // 0x0440(0x0004)
	struct FName                                       SpineBone;                                                // 0x0444(0x0004)
	struct FName                                       LowbodyBone;                                              // 0x0448(0x0004)
	struct FName                                       CapeBone;                                                 // 0x044C(0x0004)
	struct FName                                       HeadBone;                                                 // 0x0450(0x0004)
	struct FName                                       RightFootBone;                                            // 0x0454(0x0004)
	struct FName                                       LeftFootBone;                                             // 0x0458(0x0004)
	struct FName                                       WingBone;                                                 // 0x045C(0x0004)
	struct FName                                       LeftUpperArmBone;                                         // 0x0460(0x0004)
	struct FName                                       RightUpperArmBone;                                        // 0x0464(0x0004)
	struct FName                                       LeftShoulderBone;                                         // 0x0468(0x0004)
	struct FName                                       RightShoulderBone;                                        // 0x046C(0x0004)
	int                                                EffectSpawnBoneIdx;                                       // 0x0470(0x0004)
	struct FName                                       SecondHeadBone;                                           // 0x0474(0x0004)
	unsigned long                                      bHasSecondHeadBone : 1;                                   // 0x0478(0x0004)
	class UMaterial*                                   SubSkins[0x9];                                            // 0x047C(0x0004) (Config)
	class UMaterial*                                   RightHandSkins;                                           // 0x04A0(0x0004) (Config)
	class UMaterial*                                   LeftHandSkins;                                            // 0x04A4(0x0004) (Config)
	class UMaterial*                                   RightArmSkins;                                            // 0x04A8(0x0004) (Config)
	class UMaterial*                                   LeftArmSkins[0x3];                                        // 0x04AC(0x0004) (Config)
	class UMaterial*                                   CloakSkins[0x2];                                          // 0x04B8(0x0004) (Config)
	struct FString                                     nickname;                                                 // 0x04C0(0x000C) (Edit, NeedCtorLink)
	struct FName                                       ai;                                                       // 0x04CC(0x0004) (Edit)
	TArray<struct FNpcPrivate>                         Privates;                                                 // 0x04D0(0x000C) (Edit, NeedCtorLink)
	struct FWhenExtinctionCreate                       when_extinction_create;                                   // 0x04DC(0x0018) (Edit, NeedCtorLink)
	unsigned long                                      bWayPointsShow : 1;                                       // 0x04F4(0x0004) (Edit)
	TArray<struct FWayPoint>                           WayPoints;                                                // 0x04F8(0x000C) (Edit, NeedCtorLink)
	float                                              WeaponScale;                                              // 0x0504(0x0004)
	struct FNMagicInfo                                 MagicInfo;                                                // 0x0508(0x00B8) (Transient, NeedCtorLink)
	class UMesh*                                       SubMeshesBuffer[0x9];                                     // 0x05C0(0x0004)
	class UMaterial*                                   SubSkinsBuffer[0x9];                                      // 0x05E4(0x0004)
	class UMesh*                                       RightHandMeshBuffer;                                      // 0x0608(0x0004)
	class UMaterial*                                   RightHandSkinsBuffer;                                     // 0x060C(0x0004)
	class UMesh*                                       LeftHandMeshBuffer;                                       // 0x0610(0x0004)
	class UMaterial*                                   LeftHandSkinsBuffer;                                      // 0x0614(0x0004)
	class UMesh*                                       RightArmMeshBuffer;                                       // 0x0618(0x0004)
	class UMaterial*                                   RightArmSkinsBuffer;                                      // 0x061C(0x0004)
	class UMesh*                                       LeftArmMeshBuffer;                                        // 0x0620(0x0004)
	class UMaterial*                                   LeftArmSkinsBuffer[0x3];                                  // 0x0624(0x0004)
	class UMesh*                                       CloakMeshBuffer;                                          // 0x0630(0x0004)
	class UMaterial*                                   CloakSkinsBuffer[0x2];                                    // 0x0634(0x0004)
	class UMesh*                                       CloakCoverMeshBuffer;                                     // 0x063C(0x0004)
	struct FNSilhouetteParam                           NSilhouetteData;                                          // 0x0640(0x0004)
	struct FNPrimeActionParam                          NPrimeAction;                                             // 0x0644(0x002C) (NeedCtorLink)
	TArray<struct APawn_FNActionPtr>                   NActions;                                                 // 0x0670(0x000C) (NeedCtorLink)
	struct FNAtkConsumeItemParam                       NAtkConsumeItem;                                          // 0x067C(0x0008)
	TArray<class UExtraMeshData*>                      ExtraMeshDatas;                                           // 0x0684(0x000C) (NeedCtorLink)
	unsigned long                                      bUpdateMovementAnim : 1;                                  // 0x0690(0x0004)
	unsigned long                                      bPhysicInit : 1;                                          // 0x0690(0x0004)
	unsigned long                                      bAsTreatWorld : 1;                                        // 0x0690(0x0004)
	unsigned long                                      bIgnorePhysics : 1;                                       // 0x0690(0x0004)
	unsigned long                                      CanBeIngnoredCollision : 1;                               // 0x0690(0x0004)
	unsigned long                                      bPlayingSpecialAnim : 1;                                  // 0x0690(0x0004)
	unsigned long                                      bFaceRotation : 1;                                        // 0x0690(0x0004)
	unsigned long                                      bEnableFaceRotation : 1;                                  // 0x0690(0x0004)
	unsigned long                                      bNpc : 1;                                                 // 0x0690(0x0004)
	unsigned long                                      bWantChangeYaw : 1;                                       // 0x0690(0x0004)
	unsigned long                                      bTurning : 1;                                             // 0x0690(0x0004)
	unsigned long                                      bNotRotationMoving : 1;                                   // 0x0690(0x0004)
	struct FRotator                                    LastNeckRot;                                              // 0x0694(0x000C)
	struct FRotator                                    LastBodyRot;                                              // 0x06A0(0x000C)
	int                                                CharClassID;                                              // 0x06AC(0x0004)
	int                                                NpcClassID;                                               // 0x06B0(0x0004)
	int                                                AttackItemClassID;                                        // 0x06B4(0x0004)
	int                                                DefenseItemClassID;                                       // 0x06B8(0x0004)
	int                                                ShieldItemClassID;                                        // 0x06BC(0x0004)
	float                                              AttackSpeedRate;                                          // 0x06C0(0x0004)
	float                                              NonAttackSpeedRate;                                       // 0x06C4(0x0004)
	float                                              SkillSpeedRate;                                           // 0x06C8(0x0004)
	float                                              PhysicalSkillSpeedRate;                                   // 0x06CC(0x0004)
	float                                              MoveTimer;                                                // 0x06D0(0x0004)
	float                                              MoveToPawnAdjust;                                         // 0x06D4(0x0004)
	int                                                MoveEmergencyLevel;                                       // 0x06D8(0x0004)
	int                                                WalkAnimFrameInMove;                                      // 0x06DC(0x0004)
	float                                              ValidateLocationMoveTime;                                 // 0x06E0(0x0004)
	float                                              ValidateLocationSpeed;                                    // 0x06E4(0x0004)
	int                                                WantedYaw;                                                // 0x06E8(0x0004)
	int                                                TurningDir;                                               // 0x06EC(0x0004)
	class UClass*                                      DamageEffect;                                             // 0x06F0(0x0004)
	float                                              GroundMaxSpeed;                                           // 0x06F4(0x0004)
	float                                              GroundMinSpeed;                                           // 0x06F8(0x0004)
	float                                              WaterMaxSpeed;                                            // 0x06FC(0x0004)
	float                                              WaterMinSpeed;                                            // 0x0700(0x0004)
	float                                              AirMaxSpeed;                                              // 0x0704(0x0004)
	float                                              AirMinSpeed;                                              // 0x0708(0x0004)
	float                                              HoverMaxSpeed;                                            // 0x070C(0x0004)
	float                                              HoverMinSpeed;                                            // 0x0710(0x0004)
	TEnumAsByte<EUpdateMovementAnimType>               UpdateMovementAnimType;                                   // 0x0714(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	class APawn*                                       RidePawn;                                                 // 0x0718(0x0004)
	TEnumAsByte<ERideType>                             CurRideType;                                              // 0x071C(0x0001)
	TEnumAsByte<EWeaponType>                           CurWeaponType;                                            // 0x071D(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x071E(0x0002) MISSED OFFSET
	unsigned long                                      bRide : 1;                                                // 0x0720(0x0004)
	unsigned long                                      bDriver : 1;                                              // 0x0720(0x0004)
	int                                                VehicleType;                                              // 0x0724(0x0004)
	TEnumAsByte<EFlyType>                              FlyingType;                                               // 0x0728(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	unsigned long                                      bFly : 1;                                                 // 0x072C(0x0004)
	unsigned long                                      bFish : 1;                                                // 0x072C(0x0004)
	unsigned long                                      bBrightFloat : 1;                                         // 0x072C(0x0004)
	TEnumAsByte<EFishingType>                          CurFishingType;                                           // 0x0730(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	class AActor*                                      FishLine;                                                 // 0x0734(0x0004)
	class AL2Float*                                    FishFloat;                                                // 0x0738(0x0004)
	class AViewportWindowController*                   VWController;                                             // 0x073C(0x0004)
	float                                              SkinNotifyElapsedTime;                                    // 0x0740(0x0004)
	float                                              SkinNotifyNextStartTime;                                  // 0x0744(0x0004)
	int                                                bDemageStatus;                                            // 0x0748(0x0004)
	float                                              DemageDist;                                               // 0x074C(0x0004)
	unsigned long                                      bDemageAct : 1;                                           // 0x0750(0x0004)
	unsigned long                                      bSpineRotation : 1;                                       // 0x0750(0x0004)
	unsigned long                                      bTargetSpineRotation : 1;                                 // 0x0750(0x0004)
	unsigned long                                      bCreatedResource : 1;                                     // 0x0750(0x0004) (Transient)
	struct FVector                                     EffTargetLocation;                                        // 0x0754(0x000C) (Transient)
	int                                                LoadingResourceRef;                                       // 0x0760(0x0004) (Transient)
	int                                                Curvature;                                                // 0x0764(0x0004) (Edit)
	float                                              WaistAngle;                                               // 0x0768(0x0004) (Edit)
	struct FVector                                     WarpDest;                                                 // 0x076C(0x000C)
	unsigned long                                      IsWarpDest : 1;                                           // 0x0778(0x0004)
	unsigned long                                      bReadyToWarp : 1;                                         // 0x0778(0x0004)
	unsigned long                                      bIgnoreToWarp : 1;                                        // 0x0778(0x0004)
	unsigned long                                      bTreasureMimic : 1;                                       // 0x0778(0x0004)
	unsigned long                                      bTreasureMimicEven : 1;                                   // 0x0778(0x0004)
	unsigned long                                      bHitGroundInWater : 1;                                    // 0x0778(0x0004) (Transient)
	unsigned long                                      bSwimAfloat : 1;                                          // 0x0778(0x0004) (Transient)
	int                                                Environment;                                              // 0x077C(0x0004) (Transient)
	struct FRotator                                    LastFootRot;                                              // 0x0780(0x000C) (Transient)
	struct FName                                       TurnAnimName[0xB];                                        // 0x078C(0x0004) (Localized)
	struct FName                                       WalkAnimName[0xB];                                        // 0x07B8(0x0004) (Localized)
	struct FName                                       RunAnimName[0xB];                                         // 0x07E4(0x0004) (Localized)
	struct FName                                       FallAnimName[0xB];                                        // 0x0810(0x0004) (Localized)
	struct FName                                       DamageFlyAnimName[0xB];                                   // 0x083C(0x0004) (Localized)
	struct FName                                       JumpAnimName[0xB];                                        // 0x0868(0x0004) (Localized)
	struct FName                                       BJumpAnimName[0xB];                                       // 0x0894(0x0004) (Localized)
	struct FName                                       WaitAnimName[0xB];                                        // 0x08C0(0x0004) (Localized)
	struct FName                                       AtkWaitAnimName[0xB];                                     // 0x08EC(0x0004) (Localized)
	struct FName                                       SitAnimName[0xB];                                         // 0x0918(0x0004) (Localized)
	struct FName                                       SitWaitAnimName[0xB];                                     // 0x0944(0x0004) (Localized)
	struct FName                                       StandAnimName[0xB];                                       // 0x0970(0x0004) (Localized)
	struct FName                                       DeathStandAnimName[0xB];                                  // 0x099C(0x0004) (Localized)
	struct FName                                       ChairSitAnimName[0xB];                                    // 0x09C8(0x0004) (Localized)
	struct FName                                       ChairWaitAnimName[0xB];                                   // 0x09F4(0x0004) (Localized)
	struct FName                                       ChairStandAnimName[0xB];                                  // 0x0A20(0x0004) (Localized)
	struct FName                                       StunAnimName[0xB];                                        // 0x0A4C(0x0004) (Localized)
	struct FName                                       Atk01AnimName[0xB];                                       // 0x0A78(0x0004) (Localized)
	struct FName                                       Atk02AnimName[0xB];                                       // 0x0AA4(0x0004) (Localized)
	struct FName                                       Atk03AnimName[0xB];                                       // 0x0AD0(0x0004) (Localized)
	struct FName                                       AtkUpAnimName[0xB];                                       // 0x0AFC(0x0004) (Localized)
	struct FName                                       AtkDownAnimName[0xB];                                     // 0x0B28(0x0004) (Localized)
	struct FName                                       SpAtk01AnimName[0xB];                                     // 0x0B54(0x0004) (Localized)
	struct FName                                       SpAtk02AnimName[0xB];                                     // 0x0B80(0x0004) (Localized)
	struct FName                                       SpAtk03AnimName[0xB];                                     // 0x0BAC(0x0004) (Localized)
	struct FName                                       SpAtk04AnimName[0xB];                                     // 0x0BD8(0x0004) (Localized)
	struct FName                                       SpAtk05AnimName[0xB];                                     // 0x0C04(0x0004) (Localized)
	struct FName                                       SpAtk06AnimName[0xB];                                     // 0x0C30(0x0004) (Localized)
	struct FName                                       SpAtk07AnimName[0xB];                                     // 0x0C5C(0x0004) (Localized)
	struct FName                                       SpAtk08AnimName[0xB];                                     // 0x0C88(0x0004) (Localized)
	struct FName                                       SpAtk09AnimName[0xB];                                     // 0x0CB4(0x0004) (Localized)
	struct FName                                       SpAtk10AnimName[0xB];                                     // 0x0CE0(0x0004) (Localized)
	struct FName                                       SpAtk11AnimName[0xB];                                     // 0x0D0C(0x0004) (Localized)
	struct FName                                       SpAtk12AnimName[0xB];                                     // 0x0D38(0x0004) (Localized)
	struct FName                                       SpAtk13AnimName[0xB];                                     // 0x0D64(0x0004) (Localized)
	struct FName                                       SpAtk14AnimName[0xB];                                     // 0x0D90(0x0004) (Localized)
	struct FName                                       SpAtk15AnimName[0xB];                                     // 0x0DBC(0x0004) (Localized)
	struct FName                                       SpAtk16AnimName[0xB];                                     // 0x0DE8(0x0004) (Localized)
	struct FName                                       SpAtk17AnimName[0xB];                                     // 0x0E14(0x0004) (Localized)
	struct FName                                       SpAtk18AnimName[0xB];                                     // 0x0E40(0x0004) (Localized)
	struct FName                                       SpAtk19AnimName[0xB];                                     // 0x0E6C(0x0004) (Localized)
	struct FName                                       SpAtk20AnimName[0xB];                                     // 0x0E98(0x0004) (Localized)
	struct FName                                       SpAtk21AnimName[0xB];                                     // 0x0EC4(0x0004) (Localized)
	struct FName                                       SpAtk22AnimName[0xB];                                     // 0x0EF0(0x0004) (Localized)
	struct FName                                       SpAtk23AnimName[0xB];                                     // 0x0F1C(0x0004) (Localized)
	struct FName                                       SpAtk24AnimName[0xB];                                     // 0x0F48(0x0004) (Localized)
	struct FName                                       SpAtk25AnimName[0xB];                                     // 0x0F74(0x0004) (Localized)
	struct FName                                       SpAtk26AnimName[0xB];                                     // 0x0FA0(0x0004) (Localized)
	struct FName                                       SpAtk27AnimName[0xB];                                     // 0x0FCC(0x0004) (Localized)
	struct FName                                       SpAtk28AnimName[0xB];                                     // 0x0FF8(0x0004) (Localized)
	struct FName                                       ShieldAtkAnimName[0xB];                                   // 0x1024(0x0004) (Localized)
	struct FName                                       DefenceAnimName[0xB];                                     // 0x1050(0x0004) (Localized)
	struct FName                                       DodgeAnimName[0xB];                                       // 0x107C(0x0004) (Localized)
	struct FName                                       DeathAnimName[0xB];                                       // 0x10A8(0x0004) (Localized)
	struct FName                                       DeathWaitAnimName[0xB];                                   // 0x10D4(0x0004) (Localized)
	struct FName                                       SitDeathAnimName[0xB];                                    // 0x1100(0x0004) (Localized)
	struct FName                                       SitDeathWaitAnimName[0xB];                                // 0x112C(0x0004) (Localized)
	struct FName                                       DamageAnimName[0xB];                                      // 0x1158(0x0004) (Localized)
	struct FName                                       CastShortAnimName[0xB];                                   // 0x1184(0x0004) (Localized)
	struct FName                                       CastMidAnimName[0xB];                                     // 0x11B0(0x0004) (Localized)
	struct FName                                       CastLongAnimName[0xB];                                    // 0x11DC(0x0004) (Localized)
	struct FName                                       CastEndAnimName[0xB];                                     // 0x1208(0x0004) (Localized)
	struct FName                                       MagicThrowAnimName[0xB];                                  // 0x1234(0x0004) (Localized)
	struct FName                                       MagicShotAnimName[0xB];                                   // 0x1260(0x0004) (Localized)
	struct FName                                       MagicNoTargetAnimName[0xB];                               // 0x128C(0x0004) (Localized)
	struct FName                                       MagicFriendAnimName[0xB];                                 // 0x12B8(0x0004) (Localized)
	struct FName                                       PicItemAnimName[0xB];                                     // 0x12E4(0x0004) (Localized)
	struct FName                                       ThrowAnimName[0xB];                                       // 0x1310(0x0004) (Localized)
	struct FName                                       PcSocialAnimName[0x14];                                   // 0x133C(0x0004) (Localized)
	struct FName                                       NpcSocialAnimName[0x5];                                   // 0x138C(0x0004) (Localized)
	struct FName                                       RiderWaitAnimName[0xB];                                   // 0x13A0(0x0004) (Localized)
	struct FName                                       RiderAtkAnimName[0xB];                                    // 0x13CC(0x0004) (Localized)
	struct FName                                       RiderRunAnimName[0xB];                                    // 0x13F8(0x0004) (Localized)
	struct FName                                       RiderDeathWaitAnimName[0xB];                              // 0x1424(0x0004) (Localized)
	struct FName                                       RiderDeathAnimName[0xB];                                  // 0x1450(0x0004) (Localized)
	struct FName                                       SwimDeathAnimName[0xB];                                   // 0x147C(0x0004) (Localized)
	struct FName                                       SwimAnimName[0xB];                                        // 0x14A8(0x0004) (Localized)
	struct FName                                       SwimWaitAnimName[0xB];                                    // 0x14D4(0x0004) (Localized)
	struct FName                                       SwimDeathWaitAnimName[0xB];                               // 0x1500(0x0004) (Localized)
	struct FName                                       SwimAttackWaitAnimName[0xB];                              // 0x152C(0x0004) (Localized)
	struct FName                                       FishStartAnimName;                                        // 0x1558(0x0004) (Localized)
	struct FName                                       FishWaitAnimName;                                         // 0x155C(0x0004) (Localized)
	struct FName                                       FishControlAnimName;                                      // 0x1560(0x0004) (Localized)
	struct FName                                       FishPullAnimName;                                         // 0x1564(0x0004) (Localized)
	struct FName                                       FishEndAnimName;                                          // 0x1568(0x0004) (Localized)
	struct FName                                       CastShort2AnimName[0xB];                                  // 0x156C(0x0004) (Localized)
	struct FName                                       CastMid2AnimName[0xB];                                    // 0x1598(0x0004) (Localized)
	struct FName                                       CastLong2AnimName[0xB];                                   // 0x15C4(0x0004) (Localized)
	struct FName                                       CastEnd2AnimName[0xB];                                    // 0x15F0(0x0004) (Localized)
	struct FName                                       SocialCannonAnimName;                                     // 0x161C(0x0004) (Localized)
	struct FName                                       SocialOperateAnimName;                                    // 0x1620(0x0004) (Localized)
	struct FName                                       RiseAnimName;                                             // 0x1624(0x0004) (Localized)
	struct FName                                       GlideAnimName;                                            // 0x1628(0x0004) (Localized)
	struct FName                                       ShieldWaitAnimName;                                       // 0x162C(0x0004) (Localized)
	float                                              WalkAnimRate[0xB];                                        // 0x1630(0x0004) (Localized)
	float                                              RunAnimRate[0xB];                                         // 0x165C(0x0004) (Localized)
	float                                              Atk01AnimRate[0xB];                                       // 0x1688(0x0004) (Localized)
	float                                              Atk02AnimRate[0xB];                                       // 0x16B4(0x0004) (Localized)
	float                                              Atk03AnimRate[0xB];                                       // 0x16E0(0x0004) (Localized)
	float                                              AtkUpAnimRate[0xB];                                       // 0x170C(0x0004) (Localized)
	float                                              AtkDownAnimRate[0xB];                                     // 0x1738(0x0004) (Localized)
	float                                              SpAtk01AnimRate[0xB];                                     // 0x1764(0x0004) (Localized)
	float                                              SpAtk02AnimRate[0xB];                                     // 0x1790(0x0004) (Localized)
	float                                              SpAtk03AnimRate[0xB];                                     // 0x17BC(0x0004) (Localized)
	float                                              SpAtk04AnimRate[0xB];                                     // 0x17E8(0x0004) (Localized)
	float                                              ShieldAtkAnimRate[0xB];                                   // 0x1814(0x0004) (Localized)
	float                                              CastShortAnimRate[0xB];                                   // 0x1840(0x0004) (Localized)
	float                                              CastMidAnimRate[0xB];                                     // 0x186C(0x0004) (Localized)
	float                                              CastLongAnimRate[0xB];                                    // 0x1898(0x0004) (Localized)
	float                                              CastShortEndAnimRate[0xB];                                // 0x18C4(0x0004) (Localized)
	float                                              MagicThrowAnimRate[0xB];                                  // 0x18F0(0x0004) (Localized)
	float                                              MagicShotAnimRate[0xB];                                   // 0x191C(0x0004) (Localized)
	float                                              MagicNoTargetAnimRate[0xB];                               // 0x1948(0x0004) (Localized)
	float                                              MagicFriendAnimRate[0xB];                                 // 0x1974(0x0004) (Localized)
	float                                              ThrowAnimRate[0xB];                                       // 0x19A0(0x0004) (Localized)
	float                                              SitAnimRate;                                              // 0x19CC(0x0004) (Localized)
	float                                              StandAnimRate;                                            // 0x19D0(0x0004) (Localized)
	int                                                PcSocialHideRightWeapon[0x14];                            // 0x19D4(0x0004) (Localized)
	int                                                PcSocialHideLeftWeapon[0x14];                             // 0x1A24(0x0004) (Localized)
	int                                                NpcSocialHideRightWeapon[0x5];                            // 0x1A74(0x0004) (Localized)
	int                                                NpcSocialHideLeftWeapon[0x5];                             // 0x1A88(0x0004) (Localized)
	int                                                PcCastHideRightWeapon;                                    // 0x1A9C(0x0004) (Localized)
	int                                                PcCastHideLeftWeapon;                                     // 0x1AA0(0x0004) (Localized)
	class AController*                                 Controller;                                               // 0x1AA4(0x0004) (Net)
	float                                              NetRelevancyTime;                                         // 0x1AA8(0x0004)
	class APlayerController*                           LastRealViewer;                                           // 0x1AAC(0x0004)
	class AActor*                                      LastViewer;                                               // 0x1AB0(0x0004)
	unsigned long                                      bJustLanded : 1;                                          // 0x1AB4(0x0004)
	unsigned long                                      bUpAndOut : 1;                                            // 0x1AB4(0x0004)
	unsigned long                                      bIsWalking : 1;                                           // 0x1AB4(0x0004) (Net)
	unsigned long                                      bWarping : 1;                                             // 0x1AB4(0x0004)
	unsigned long                                      bWantsToCrouch : 1;                                       // 0x1AB4(0x0004)
	unsigned long                                      bIsCrouched : 1;                                          // 0x1AB4(0x0004) (Const, Net)
	unsigned long                                      bTryToUncrouch : 1;                                       // 0x1AB4(0x0004) (Const)
	unsigned long                                      bCanCrouch : 1;                                           // 0x1AB4(0x0004) (Edit)
	unsigned long                                      bCrawler : 1;                                             // 0x1AB4(0x0004)
	unsigned long                                      bReducedSpeed : 1;                                        // 0x1AB4(0x0004) (Const)
	unsigned long                                      bJumpCapable : 1;                                         // 0x1AB4(0x0004)
	unsigned long                                      bCanJump : 1;                                             // 0x1AB4(0x0004)
	unsigned long                                      bCanWalk : 1;                                             // 0x1AB4(0x0004)
	unsigned long                                      bCanSwim : 1;                                             // 0x1AB4(0x0004)
	unsigned long                                      bCanFly : 1;                                              // 0x1AB4(0x0004)
	unsigned long                                      bCanClimbLadders : 1;                                     // 0x1AB4(0x0004)
	unsigned long                                      bCanStrafe : 1;                                           // 0x1AB4(0x0004)
	unsigned long                                      bCanDoubleJump : 1;                                       // 0x1AB4(0x0004)
	unsigned long                                      bAvoidLedges : 1;                                         // 0x1AB4(0x0004)
	unsigned long                                      bStopAtLedges : 1;                                        // 0x1AB4(0x0004)
	unsigned long                                      bNoJumpAdjust : 1;                                        // 0x1AB4(0x0004)
	unsigned long                                      bCountJumps : 1;                                          // 0x1AB4(0x0004)
	unsigned long                                      bSimulateGravity : 1;                                     // 0x1AB4(0x0004) (Const, Net)
	unsigned long                                      bUpdateEyeheight : 1;                                     // 0x1AB4(0x0004)
	unsigned long                                      bIgnoreForces : 1;                                        // 0x1AB4(0x0004)
	unsigned long                                      bNoVelocityUpdate : 1;                                    // 0x1AB4(0x0004) (Const)
	unsigned long                                      bCanWalkOffLedges : 1;                                    // 0x1AB4(0x0004)
	unsigned long                                      bSteadyFiring : 1;                                        // 0x1AB4(0x0004) (Net)
	unsigned long                                      bCanBeBaseForPawns : 1;                                   // 0x1AB4(0x0004)
	unsigned long                                      bClientCollision : 1;                                     // 0x1AB4(0x0004)
	unsigned long                                      bSimGravityDisabled : 1;                                  // 0x1AB4(0x0004) (Const)
	unsigned long                                      bDirectHitWall : 1;                                       // 0x1AB4(0x0004)
	unsigned long                                      bThumped : 1;                                             // 0x1AB8(0x0004)
	unsigned long                                      bInvulnerableBody : 1;                                    // 0x1AB8(0x0004)
	unsigned long                                      bIsFemale : 1;                                            // 0x1AB8(0x0004)
	unsigned long                                      bAutoActivate : 1;                                        // 0x1AB8(0x0004)
	unsigned long                                      bCanPickupInventory : 1;                                  // 0x1AB8(0x0004)
	unsigned long                                      bUpdatingDisplay : 1;                                     // 0x1AB8(0x0004)
	unsigned long                                      bAmbientCreature : 1;                                     // 0x1AB8(0x0004)
	unsigned long                                      bLOSHearing : 1;                                          // 0x1AB8(0x0004) (Edit)
	unsigned long                                      bSameZoneHearing : 1;                                     // 0x1AB8(0x0004) (Edit)
	unsigned long                                      bAdjacentZoneHearing : 1;                                 // 0x1AB8(0x0004) (Edit)
	unsigned long                                      bMuffledHearing : 1;                                      // 0x1AB8(0x0004) (Edit)
	unsigned long                                      bAroundCornerHearing : 1;                                 // 0x1AB8(0x0004) (Edit)
	unsigned long                                      bDontPossess : 1;                                         // 0x1AB8(0x0004) (Edit)
	unsigned long                                      bAutoFire : 1;                                            // 0x1AB8(0x0004)
	unsigned long                                      bRollToDesired : 1;                                       // 0x1AB8(0x0004)
	unsigned long                                      bIgnorePlayFiring : 1;                                    // 0x1AB8(0x0004)
	unsigned long                                      bCachedRelevant : 1;                                      // 0x1AB8(0x0004)
	unsigned long                                      bUseCompressedPosition : 1;                               // 0x1AB8(0x0004)
	unsigned long                                      bWeaponBob : 1;                                           // 0x1AB8(0x0004) (Config, GlobalConfig)
	unsigned long                                      bHideRegularHUD : 1;                                      // 0x1AB8(0x0004)
	unsigned long                                      bSpecialHUD : 1;                                          // 0x1AB8(0x0004)
	unsigned long                                      bSpecialCalcView : 1;                                     // 0x1AB8(0x0004)
	unsigned long                                      bNoWeaponFiring : 1;                                      // 0x1AB8(0x0004)
	unsigned long                                      bIsTyping : 1;                                            // 0x1AB8(0x0004) (Net)
	unsigned char                                      FlashCount;                                               // 0x1ABC(0x0001)
	unsigned char                                      Visibility;                                               // 0x1ABD(0x0001)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1ABE(0x0002) MISSED OFFSET
	float                                              DesiredSpeed;                                             // 0x1AC0(0x0004)
	float                                              MaxDesiredSpeed;                                          // 0x1AC4(0x0004)
	struct FName                                       AIScriptTag;                                              // 0x1AC8(0x0004) (Edit)
	float                                              HearingThreshold;                                         // 0x1ACC(0x0004) (Edit)
	float                                              Alertness;                                                // 0x1AD0(0x0004) (Edit)
	float                                              SightRadius;                                              // 0x1AD4(0x0004) (Edit)
	float                                              PeripheralVision;                                         // 0x1AD8(0x0004) (Edit)
	float                                              SkillModifier;                                            // 0x1ADC(0x0004) (Edit)
	float                                              AvgPhysicsTime;                                           // 0x1AE0(0x0004) (Const)
	float                                              MeleeRange;                                               // 0x1AE4(0x0004)
	class ANavigationPoint*                            Anchor;                                                   // 0x1AE8(0x0004)
	class ANavigationPoint*                            LastAnchor;                                               // 0x1AEC(0x0004) (Const)
	float                                              FindAnchorFailedTime;                                     // 0x1AF0(0x0004)
	float                                              LastValidAnchorTime;                                      // 0x1AF4(0x0004)
	float                                              DestinationOffset;                                        // 0x1AF8(0x0004)
	float                                              NextPathRadius;                                           // 0x1AFC(0x0004)
	struct FVector                                     SerpentineDir;                                            // 0x1B00(0x000C)
	float                                              SerpentineDist;                                           // 0x1B0C(0x0004)
	float                                              SerpentineTime;                                           // 0x1B10(0x0004)
	float                                              UncrouchTime;                                             // 0x1B14(0x0004) (Const)
	float                                              SpawnTime;                                                // 0x1B18(0x0004)
	float                                              GroundSpeed;                                              // 0x1B1C(0x0004) (Net)
	float                                              WaterSpeed;                                               // 0x1B20(0x0004) (Net)
	float                                              AirSpeed;                                                 // 0x1B24(0x0004) (Net)
	float                                              LadderSpeed;                                              // 0x1B28(0x0004)
	float                                              AccelRate;                                                // 0x1B2C(0x0004) (Net)
	float                                              JumpZ;                                                    // 0x1B30(0x0004) (Net)
	float                                              AirControl;                                               // 0x1B34(0x0004) (Net)
	float                                              WalkingPct;                                               // 0x1B38(0x0004)
	float                                              CrouchedPct;                                              // 0x1B3C(0x0004)
	float                                              MaxFallSpeed;                                             // 0x1B40(0x0004)
	struct FVector                                     ConstantAcceleration;                                     // 0x1B44(0x000C)
	struct FString                                     OwnerName;                                                // 0x1B50(0x000C) (NeedCtorLink)
	class AWeapon*                                     Weapon;                                                   // 0x1B5C(0x0004)
	class AWeapon*                                     PendingWeapon;                                            // 0x1B60(0x0004)
	class APowerups*                                   SelectedItem;                                             // 0x1B64(0x0004) (Net)
	float                                              BaseEyeHeight;                                            // 0x1B68(0x0004)
	float                                              EyeHeight;                                                // 0x1B6C(0x0004)
	struct FVector                                     Floor;                                                    // 0x1B70(0x000C) (Const)
	float                                              SplashTime;                                               // 0x1B7C(0x0004)
	float                                              CrouchHeight;                                             // 0x1B80(0x0004)
	float                                              CrouchRadius;                                             // 0x1B84(0x0004)
	float                                              OldZ;                                                     // 0x1B88(0x0004)
	class APhysicsVolume*                              HeadVolume;                                               // 0x1B8C(0x0004)
	int                                                Health;                                                   // 0x1B90(0x0004) (Net)
	float                                              BreathTime;                                               // 0x1B94(0x0004)
	float                                              UnderWaterTime;                                           // 0x1B98(0x0004)
	float                                              LastPainTime;                                             // 0x1B9C(0x0004)
	class UClass*                                      ReducedDamageType;                                        // 0x1BA0(0x0004)
	float                                              HeadScale;                                                // 0x1BA4(0x0004) (Net)
	class APhysicsVolume*                              FootVolume;                                               // 0x1BA8(0x0004)
	struct FVector                                     noise1spot;                                               // 0x1BAC(0x000C) (Const)
	float                                              noise1time;                                               // 0x1BB8(0x0004) (Const)
	class APawn*                                       noise1other;                                              // 0x1BBC(0x0004) (Const)
	float                                              noise1loudness;                                           // 0x1BC0(0x0004) (Const)
	struct FVector                                     noise2spot;                                               // 0x1BC4(0x000C) (Const)
	float                                              noise2time;                                               // 0x1BD0(0x0004) (Const)
	class APawn*                                       noise2other;                                              // 0x1BD4(0x0004) (Const)
	float                                              noise2loudness;                                           // 0x1BD8(0x0004) (Const)
	float                                              LastPainSound;                                            // 0x1BDC(0x0004)
	float                                              Bob;                                                      // 0x1BE0(0x0004) (Config, GlobalConfig)
	float                                              LandBob;                                                  // 0x1BE4(0x0004)
	float                                              AppliedBob;                                               // 0x1BE8(0x0004)
	float                                              bobtime;                                                  // 0x1BEC(0x0004)
	struct FVector                                     WalkBob;                                                  // 0x1BF0(0x000C)
	float                                              SoundDampening;                                           // 0x1BFC(0x0004)
	float                                              DamageScaling;                                            // 0x1C00(0x0004)
	struct FString                                     MenuName;                                                 // 0x1C04(0x000C) (Localized, NeedCtorLink)
	class AProjector*                                  Shadow;                                                   // 0x1C10(0x0004)
	class AShadowProjector*                            Shadow1;                                                  // 0x1C14(0x0004)
	unsigned long                                      bIgnoreShadowClipping : 1;                                // 0x1C18(0x0004)
	unsigned long                                      bSameAnim : 1;                                            // 0x1C18(0x0004)
	unsigned long                                      bLongDeathWaitAnim : 1;                                   // 0x1C18(0x0004)
	unsigned long                                      bShowArrow : 1;                                           // 0x1C18(0x0004)
	class AL2Alarm*                                    OverHeadAlarm;                                            // 0x1C1C(0x0004)
	struct FVector                                     ArrowTarget;                                              // 0x1C20(0x000C)
	TArray<struct FNPawnLightPtr>                      NPawnLight;                                               // 0x1C2C(0x000C) (NeedCtorLink)
	TArray<struct FNAbnormalStatPtr>                   NAbnormalStat;                                            // 0x1C38(0x000C) (NeedCtorLink)
	TArray<struct FNBoneScalerStatPtr>                 NBoneScalerStat;                                          // 0x1C44(0x000C) (NeedCtorLink)
	TArray<class ANCubics*>                            NCubicArray;                                              // 0x1C50(0x000C) (NeedCtorLink)
	class ANAgathion*                                  Agathion;                                                 // 0x1C5C(0x0004)
	TArray<struct FNAppendixEffectPtr>                 NAppendixEffect;                                          // 0x1C60(0x000C) (NeedCtorLink)
	TArray<struct FNWeaponEffectPtr>                   NWeaponEffect;                                            // 0x1C6C(0x000C) (NeedCtorLink)
	class AEmitter*                                    NHeroEffect;                                              // 0x1C78(0x0004)
	struct FNCursedWeaponEffectPtr                     NCursedWeaponEffect;                                      // 0x1C7C(0x0004)
	TArray<class AEmitter*>                            NDecoEffect;                                              // 0x1C80(0x000C) (NeedCtorLink)
	class AEmitter*                                    NSpoilEffect;                                             // 0x1C8C(0x0004)
	TArray<struct FNAbnormalStatPtr>                   BR_NAbnormalStat;                                         // 0x1C90(0x000C) (NeedCtorLink)
	TEnumAsByte<ESamePoseStat>                         SamePoseStat;                                             // 0x1C9C(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1C9D(0x0003) MISSED OFFSET
	class UClass*                                      BloodEffect;                                              // 0x1CA0(0x0004)
	class UClass*                                      LowGoreBlood;                                             // 0x1CA4(0x0004)
	class UClass*                                      ControllerClass;                                          // 0x1CA8(0x0004)
	class APlayerReplicationInfo*                      PlayerReplicationInfo;                                    // 0x1CAC(0x0004) (Net)
	class ALadderVolume*                               OnLadder;                                                 // 0x1CB0(0x0004)
	struct FName                                       LandMovementState;                                        // 0x1CB4(0x0004)
	struct FName                                       WaterMovementState;                                       // 0x1CB8(0x0004)
	class APlayerStart*                                LastStartSpot;                                            // 0x1CBC(0x0004)
	float                                              LastStartTime;                                            // 0x1CC0(0x0004)
	int                                                ComboAnimPlayNum;                                         // 0x1CC4(0x0004)
	struct FName                                       ComboAnimPlayName[0x8];                                   // 0x1CC8(0x0004)
	int                                                ComboAnimPlayCount;                                       // 0x1CE8(0x0004)
	struct FName                                       AnimAction;                                               // 0x1CEC(0x0004) (Net)
	struct FVector                                     TakeHitLocation;                                          // 0x1CF0(0x000C) (Net)
	class UClass*                                      HitDamageType;                                            // 0x1CFC(0x0004) (Net)
	struct FVector                                     TearOffMomentum;                                          // 0x1D00(0x000C) (Net)
	unsigned long                                      bPhysicsAnimUpdate : 1;                                   // 0x1D0C(0x0004)
	unsigned long                                      bWasCrouched : 1;                                         // 0x1D0C(0x0004)
	unsigned long                                      bWasWalking : 1;                                          // 0x1D0C(0x0004)
	unsigned long                                      bWasOnGround : 1;                                         // 0x1D0C(0x0004)
	unsigned long                                      bInitializeAnimation : 1;                                 // 0x1D0C(0x0004)
	unsigned long                                      bPlayedDeath : 1;                                         // 0x1D0C(0x0004)
	TEnumAsByte<EPhysics>                              OldPhysics;                                               // 0x1D10(0x0001)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1D11(0x0003) MISSED OFFSET
	float                                              OldRotYaw;                                                // 0x1D14(0x0004)
	struct FVector                                     OldAcceleration;                                          // 0x1D18(0x000C)
	float                                              BaseMovementRate;                                         // 0x1D24(0x0004)
	struct FName                                       MovementAnims[0x4];                                       // 0x1D28(0x0004)
	struct FName                                       TurnLeftAnim;                                             // 0x1D38(0x0004)
	struct FName                                       TurnRightAnim;                                            // 0x1D3C(0x0004)
	float                                              BlendChangeTime;                                          // 0x1D40(0x0004) (Edit)
	float                                              MovementBlendStartTime;                                   // 0x1D44(0x0004)
	float                                              ForwardStrafeBias;                                        // 0x1D48(0x0004)
	float                                              BackwardStrafeBias;                                       // 0x1D4C(0x0004)
	struct FString                                     ChatMsg;                                                  // 0x1D50(0x000C) (NeedCtorLink)
	struct FVector                                     HitLocation;                                              // 0x1D5C(0x000C)
	float                                              HitWaterEffectTimer;                                      // 0x1D68(0x0004)
	float                                              RecentHitWaterInterval;                                   // 0x1D6C(0x0004) (Transient)
	struct FString                                     PrivateStoreChatMsg;                                      // 0x1D70(0x000C) (NeedCtorLink)
	struct FString                                     PrivateBuyChatMsg;                                        // 0x1D7C(0x000C) (NeedCtorLink)
	struct FString                                     PrivateStoreWholeChatMsg;                                 // 0x1D88(0x000C) (NeedCtorLink)
	struct FString                                     RecipeShopMsg;                                            // 0x1D94(0x000C) (NeedCtorLink)
	struct FINT64                                      AbnormalVisualEffectType;                                 // 0x1DA0(0x0008)
	int                                                AbnormalVisualEffectStopMoveFlag;                         // 0x1DA8(0x0004)
	float                                              AbnormalVisualEffectLifeTime;                             // 0x1DAC(0x0004)
	int                                                AppendixEffectType;                                       // 0x1DB0(0x0004)
	int                                                BR_ExtraVisualEffectType;                                 // 0x1DB4(0x0004)
	class AMarkProjector*                              Mark;                                                     // 0x1DB8(0x0004)
	struct FRotator                                    TargetDirSpineRot;                                        // 0x1DBC(0x000C)
	unsigned long                                      bNeedTurnAnim : 1;                                        // 0x1DC8(0x0004)
	unsigned long                                      bPlayerCharacter : 1;                                     // 0x1DC8(0x0004)
	int                                                PlayerSlotNum;                                            // 0x1DCC(0x0004)
	float                                              BoundRadius;                                              // 0x1DD0(0x0004)
	float                                              fBlinkTime;                                               // 0x1DD4(0x0004)
	unsigned long                                      bShowGuilty : 1;                                          // 0x1DD8(0x0004)
	float                                              fTotalAcceleratedBlickTime;                               // 0x1DDC(0x0004) (Const)
	float                                              fInitBlinkGap;                                            // 0x1DE0(0x0004) (Const)
	float                                              flastBlinkGap;                                            // 0x1DE4(0x0004) (Const)
	float                                              fAcceleratedRate;                                         // 0x1DE8(0x0004)
	float                                              fCurBlinkGap;                                             // 0x1DEC(0x0004)
	float                                              fCurAcceleratedBlinkTime;                                 // 0x1DF0(0x0004)
	unsigned long                                      bLobbyCharacter : 1;                                      // 0x1DF4(0x0004)
	struct FName                                       LobbyWaitAnim;                                            // 0x1DF8(0x0004)
	float                                              NameOffset;                                               // 0x1DFC(0x0004)
	float                                              DeadNameOffset;                                           // 0x1E00(0x0004)
	float                                              fMaxAirSpeed;                                             // 0x1E04(0x0004)
	float                                              fMinAirSpeed;                                             // 0x1E08(0x0004)
	float                                              fAirSpeedAccel;                                           // 0x1E0C(0x0004)
	int                                                CameraWalkingAccelMode;                                   // 0x1E10(0x0004)
	float                                              fMaxAirSpeedIncRate;                                      // 0x1E14(0x0004)
	float                                              CastingEffectScale;                                       // 0x1E18(0x0004)
	unsigned long                                      bUseDarkEffect : 1;                                       // 0x1E1C(0x0004)
	unsigned long                                      bIsHero : 1;                                              // 0x1E1C(0x0004)
	unsigned long                                      bHeroWeapon : 1;                                          // 0x1E1C(0x0004)
	unsigned long                                      bRendered : 1;                                            // 0x1E1C(0x0004)
	unsigned long                                      bIsCursedWeapon : 1;                                      // 0x1E1C(0x0004)
	int                                                CursedWeaponLevel;                                        // 0x1E20(0x0004)
	int                                                SoundableBootsClassID;                                    // 0x1E24(0x0004)
	int                                                LastAttackItemClassID;                                    // 0x1E28(0x0004)
	int                                                AttackItemEnchantedValue;                                 // 0x1E2C(0x0004)
	int                                                AttackItemVariationOption1;                               // 0x1E30(0x0004)
	int                                                AttackItemVariationOption2;                               // 0x1E34(0x0004)
	float                                              OriCollisionRadius;                                       // 0x1E38(0x0004) (Edit, Const)
	float                                              OriCollisionHeight;                                       // 0x1E3C(0x0004) (Edit, Const)
	struct FVector                                     HelmMeshOrigin;                                           // 0x1E40(0x000C)
	struct FRotator                                    HelmMeshRotOrigin;                                        // 0x1E4C(0x000C)
	struct FVector                                     HairAcceMeshOrigin[0x2];                                  // 0x1E58(0x000C)
	struct FRotator                                    HairAcceMeshRotOrigin[0x2];                               // 0x1E70(0x000C)
	TArray<struct FNCollisionInfo>                     ExCollisionInfos;                                         // 0x1E88(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        NQuestList;                                               // 0x1E94(0x000C) (NeedCtorLink)
	float                                              fAutoTargetPendingTime;                                   // 0x1EA0(0x0004)
	class APawn*                                       AutoTargetPawn;                                           // 0x1EA4(0x0004)
	unsigned long                                      bNeedSetPawnResource : 1;                                 // 0x1EA8(0x0004)
	unsigned long                                      bNeedPostSetPawnResourceProcess : 1;                      // 0x1EA8(0x0004)
	unsigned long                                      bPendingTransform : 1;                                    // 0x1EA8(0x0004)
	unsigned long                                      bColosseumSelected : 1;                                   // 0x1EA8(0x0004)
	struct FCompressedPosition                         PawnPosition;                                             // 0x1EAC(0x0024) (Net, Transient)
	int                                                ColosseumTeam;                                            // 0x1ED0(0x0004)
	int                                                ColosseumPartyNum;                                        // 0x1ED4(0x0004)
	TArray<class USound*>                              SkillLoopingSoundList;                                    // 0x1ED8(0x000C) (NeedCtorLink)
	TArray<struct FNIllusionParam>                     NIllusionSpawnList;                                       // 0x1EE4(0x000C) (NeedCtorLink)
	TArray<struct FNIllusionPawnParam>                 NIllusionPawnList;                                        // 0x1EF0(0x000C) (NeedCtorLink)
	struct FName                                       ChargeAniName;                                            // 0x1EFC(0x0004)
	unsigned long                                      bChangeWeapon : 1;                                        // 0x1F00(0x0004)
	unsigned long                                      bUseDefaultMesh : 1;                                      // 0x1F00(0x0004)
	int                                                EquipItem;                                                // 0x1F04(0x0004)
	unsigned long                                      bBR_ShowTargetName : 1;                                   // 0x1F08(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void SetSimulationCollision(TArray<class USimulationCollision*> SimulationCollisions);
	void GetSimulationCollision(TArray<class USimulationCollision*>* SimulationCollisions);
	void NotifyDie();
	int GetRefSkeletonNum();
	class USound* GetShieldItemSound();
	class USound* GetDefenseItemSound();
	bool SetRelativeCoords(class AActor* Goal);
	void NotifyAttack(class AActor* Attacker);
	void AssociateAttackedNotify(class APawn* Attacker, class AActor* AttackActor, int type, int Damage, bool bMiss, bool bShieldDefense, bool bCritical, bool bSpirit, bool keepframerate, bool showeffect);
	void AttackedNotify(class APawn* Attacker, class AActor* AttackActor, int type, bool keepframerate, bool showeffect);
	void HoldCarriedObject(class ACarriedObject* O, const struct FName& AttachmentBone);
	void PlayVictoryAnimation();
	void PlayLandingAnimation(float impactVel);
	void PlayLanded(float impactVel);
	void PlayWaiting();
	void PlayMoving();
	void PlayFalling();
	void PlayJump();
	bool CannotJumpNow();
	void AnimEnd(int Channel);
	void ChangeAnimation();
	void PlayTakeHit(const struct FVector& HitLoc, int Damage, class UClass* DamageType);
	void StopPlayFiring();
	void PlayWeaponSwitch(class AWeapon* newWeapon);
	void PlayFiring(float Rate, const struct FName& FiringMode);
	void PlayDying(class UClass* DamageType, const struct FVector& HitLoc);
	void SetAnimAction(const struct FName& NewAction);
	void ChunkUp(const struct FRotator& HitRotation, class UClass* D);
	void PlayHit(float Damage, class APawn* instigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum);
	void PlayDyingSound();
	void PlayMoverHitSound();
	bool DoJump(bool bUpdating);
	bool Dodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove);
	void UpdateRocketAcceleration(float DeltaTime, float YawChange, float PitchChange);
	bool CanDoubleJump();
	void DoDoubleJump(bool bUpdating);
	bool CheckWaterJump(struct FVector* WallNormal);
	void TakeDrowningDamage();
	void BreathTimer();
	bool IsInPain();
	bool TouchingWaterVolume();
	void HeadVolumeChange(class APhysicsVolume* newHeadVolume);
	void Landed(const struct FVector& HitNormal);
	void HitWall(const struct FVector& HitNormal, class AActor* Wall);
	void Falling();
	bool Gibbed(class UClass* DamageType);
	void Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void GetEffTargetLocation(struct FVector* LocVector);
	class AController* GetKillerController();
	class ATeamInfo* GetTeam();
	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void SetMovementPhysics();
	void Gasp();
	void SetMesh();
	void PostNetBeginPlay();
	void PostBeginPlay();
	void PreBeginPlay();
	void Destroyed();
	struct FVector EyePosition();
	void UpdateEyeHeight(float DeltaTime);
	void BaseChange();
	void JumpOffPawn();
	void gibbedBy(class AActor* Other);
	void EncroachedBy(class AActor* Other);
	bool EncroachingOn(class AActor* Other);
	void ServerChangedWeapon(class AWeapon* OldWeapon, class AWeapon* W);
	struct FName GetWeaponBoneFor(class AInventory* i);
	void ChangedWeapon();
	void DeleteInventory(class AInventory* item);
	bool AddInventory(class AInventory* NewItem);
	class AInventory* FindInventoryType(class UClass* DesiredClass);
	void NextItem();
	void TossWeapon(const struct FVector& TossVel);
	bool CanThrowWeapon();
	bool InCurrentCombo();
	void ClientDying(class UClass* DamageType, const struct FVector& HitLocation);
	void FaceRotation(const struct FRotator& NewRotation, float DeltaTime);
	void ClientSetRotation(const struct FRotator& NewRotation);
	void ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void ClientReStart();
	void TakeFallingDamage();
	void KilledBy(class APawn* EventInstigator);
	void AddVelocity(const struct FVector& NewVelocity);
	void RestartPlayer();
	void StartCrouch(float HeightAdjust);
	void EndCrouch(float HeightAdjust);
	void ShouldCrouch(bool Crouch);
	void FellOutOfWorld(TEnumAsByte<EeKillZType> KillType);
	void ModifyVelocity(float DeltaTime, const struct FVector& OldVelocity);
	void JumpOutOfWater(const struct FVector& jumpDir);
	void FinishedInterpolation();
	void SetDefaultDisplayProperties();
	void SetDisplayProperties(TEnumAsByte<ERenderStyle> NewStyle, class UMaterial* NewTexture, bool bLighting);
	void GiveWeapon(const struct FString& aClassName);
	bool CanTrigger(class ATrigger* t);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void ClientMessage(const struct FString& S, const struct FName& type);
	void ReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void HandlePickup(class APickup* pick);
	float AdjustedStrength();
	class AActor* ShootSpecial(class AActor* A);
	struct FRotator AdjustAim(class AAmmunition* FiredAmmunition, const struct FVector& projStart, int aimerror);
	bool LineOfSightTo(class AActor* Other);
	void SetMoveTarget(class AActor* NewTarget);
	class AActor* GetMoveTarget();
	bool PressingAltFire();
	bool PressingFire();
	bool NearMoveTarget();
	bool InGodMode();
	void SetViewRotation(const struct FRotator& NewRotation);
	struct FRotator GetViewRotation();
	bool IsFirstPerson();
	bool IsLocallyControlled();
	bool IsHumanControlled();
	bool WasPlayerPawn();
	bool IsPlayerPawn();
	void CheckBob(float DeltaTime, const struct FVector& Y);
	struct FVector WeaponBob(float BobDamping);
	struct FVector ModifiedPlayerViewOffset(class AInventory* Inv);
	struct FVector CalcDrawOffset(class AInventory* Inv);
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	void ClimbLadder(class ALadderVolume* L);
	void EndClimbLadder(class ALadderVolume* OldLadder);
	bool CanSplash();
	void SetWalking(bool bNewIsWalking);
	bool CanGrabLadder();
	void DropToGround();
	void BecomeViewTarget();
	bool PointOfView();
	void UnPossessed();
	void PossessedBy(class AController* C);
	void PlayTeleportEffect(bool bOut, bool bSound);
	struct FString GetHumanReadableName();
	bool SpecialCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void DrawHUD(class UCanvas* Canvas);
	void Fire(float f);
	void Reset();
	void PlayAnimUM(const struct FName& Sequence, int UpdateMovementAnim, float Rate, float TweenTime, int Channel);
	void ForceCrouch();
	bool ReachedDestination(class AActor* Goal);
	void AnimBegin(const struct FName& SequenceName);
	void SetHeadScale(float NewScale);
	struct FName GetRiderDeathAnimName();
	struct FName GetRiderDeathWaitAnimName();
	struct FName GetRiderRunAnimName();
	struct FName GetRiderAtkAnimName();
	struct FName GetRiderWaitAnimName();
	struct FName GetThrowAnimName();
	struct FName GetPicItemAnimName();
	struct FName GetMagicFriendAnimName();
	struct FName GetMagicNoTargetAnimName();
	struct FName GetMagicShotAnimName();
	struct FName GetMagicThrowAnimName();
	struct FName GetCastEndAnimName();
	struct FName GetCastLongAnimName();
	struct FName GetCastMidAnimName();
	struct FName GetCastShortAnimName();
	struct FName GetDamageAnimName();
	struct FName GetDeathWaitAnimName();
	struct FName GetDeathAnimName();
	struct FName GetDodgeAnimName();
	struct FName GetDefenceAnimName();
	struct FName GetShieldAtkAnimName();
	struct FName GetSpAtk28AnimName();
	struct FName GetSpAtk27AnimName();
	struct FName GetSpAtk26AnimName();
	struct FName GetSpAtk25AnimName();
	struct FName GetSpAtk24AnimName();
	struct FName GetSpAtk23AnimName();
	struct FName GetSpAtk22AnimName();
	struct FName GetSpAtk21AnimName();
	struct FName GetSpAtk20AnimName();
	struct FName GetSpAtk19AnimName();
	struct FName GetSpAtk18AnimName();
	struct FName GetSpAtk17AnimName();
	struct FName GetSpAtk16AnimName();
	struct FName GetSpAtk15AnimName();
	struct FName GetSpAtk14AnimName();
	struct FName GetSpAtk13AnimName();
	struct FName GetSpAtk12AnimName();
	struct FName GetSpAtk11AnimName();
	struct FName GetSpAtk10AnimName();
	struct FName GetSpAtk09AnimName();
	struct FName GetSpAtk08AnimName();
	struct FName GetSpAtk07AnimName();
	struct FName GetSpAtk06AnimName();
	struct FName GetSpAtk05AnimName();
	struct FName GetSpAtk04AnimName();
	struct FName GetSpAtk03AnimName();
	struct FName GetSpAtk02AnimName();
	struct FName GetSpAtk01AnimName();
	struct FName GetAtkDownAnimName();
	struct FName GetAtkUpAnimName();
	struct FName GetAtk03AnimName();
	struct FName GetAtk02AnimName();
	struct FName GetAtk01AnimName();
	struct FName GetStunAnimName();
	struct FName GetChairStandAnimName();
	struct FName GetChairWaitAnimName();
	struct FName GetChairSitAnimName();
	struct FName GetDeathStandAnimName();
	struct FName GetStandAnimName();
	struct FName GetSitWaitAnimName();
	struct FName GetSitAnimName();
	struct FName GetAtkWaitAnimName();
	struct FName GetWaitAnimName();
	struct FName GetBJumpAnimName();
	struct FName GetJumpAnimName();
	struct FName GetRunAnimName();
	struct FName GetWalkAnimName();
	struct FName GetTurnAnimName();
};


// Class Engine.Emitter
// 0x017C (0x0538 - 0x03BC)
class AEmitter : public AActor
{
public:
	TArray<class UParticleEmitter*>                    Emitters;                                                 // 0x03BC(0x000C) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FRangeVector                                GlobalOffsetRange;                                        // 0x03C8(0x0018) (Edit)
	struct FRange                                      TimeTillResetRange;                                       // 0x03E0(0x0008) (Edit)
	unsigned long                                      AutoDestroy : 1;                                          // 0x03E8(0x0004) (Edit)
	unsigned long                                      AutoReset : 1;                                            // 0x03E8(0x0004) (Edit)
	unsigned long                                      DisableFogging : 1;                                       // 0x03E8(0x0004) (Edit)
	unsigned long                                      AutoReplay : 1;                                           // 0x03E8(0x0004) (Edit)
	unsigned long                                      bRotEmitter : 1;                                          // 0x03E8(0x0004) (Edit)
	unsigned long                                      FixedBoundingBox : 1;                                     // 0x03E8(0x0004) (Edit)
	struct FRotator                                    RotPerSecond;                                             // 0x03EC(0x000C) (Edit)
	float                                              FixedBoundingBoxExpand;                                   // 0x03F8(0x0004) (Edit)
	float                                              SpeedRate;                                                // 0x03FC(0x0004)
	TArray<class USound*>                              SpawnSound;                                               // 0x0400(0x000C) (Edit, NeedCtorLink)
	float                                              SoundRadius;                                              // 0x040C(0x0004) (Edit)
	float                                              SoundVolume;                                              // 0x0410(0x0004) (Edit)
	float                                              SoundPitchMin;                                            // 0x0414(0x0004) (Edit)
	float                                              SoundPitchMax;                                            // 0x0418(0x0004) (Edit)
	unsigned long                                      SoundLooping : 1;                                         // 0x041C(0x0004) (Edit)
	float                                              SoundFadeInDuration;                                      // 0x0420(0x0004) (Edit)
	float                                              SoundFadeOutStart;                                        // 0x0424(0x0004) (Edit)
	float                                              SoundFadeOutDuration;                                     // 0x0428(0x0004) (Edit)
	unsigned long                                      ActorForcesEnabled : 1;                                   // 0x042C(0x0004) (Transient)
	unsigned long                                      UseParticleProjectors : 1;                                // 0x042C(0x0004) (Transient)
	unsigned long                                      DeleteParticleEmitters : 1;                               // 0x042C(0x0004) (Transient)
	unsigned long                                      bSkipTick : 1;                                            // 0x042C(0x0004) (Transient)
	int                                                Initialized;                                              // 0x0430(0x0004) (Transient)
	struct FBox                                        BoundingBox;                                              // 0x0434(0x001C) (Transient)
	float                                              EmitterRadius;                                            // 0x0450(0x0004) (Transient)
	float                                              EmitterHeight;                                            // 0x0454(0x0004) (Transient)
	struct FVector                                     GlobalOffset;                                             // 0x0458(0x000C) (Transient)
	float                                              TimeTillReset;                                            // 0x0464(0x0004) (Transient)
	float                                              FixedLifeTime;                                            // 0x0468(0x0004) (Transient)
	struct FVector                                     TrailerPrePivot;                                          // 0x046C(0x000C) (Transient)
	unsigned long                                      FirstSpawnParticle : 1;                                   // 0x0478(0x0004) (Transient)
	unsigned long                                      bUseLight : 1;                                            // 0x0478(0x0004) (Edit)
	unsigned char                                      LightType;                                                // 0x047C(0x0001) (Edit)
	unsigned char                                      LightEffect;                                              // 0x047D(0x0001) (Edit)
	unsigned char                                      LightBrightness;                                          // 0x047E(0x0001) (Edit)
	unsigned char                                      LightHue;                                                 // 0x047F(0x0001) (Edit)
	unsigned char                                      LightSaturation;                                          // 0x0480(0x0001) (Edit)
	unsigned char                                      EmitterLightingType;                                      // 0x0481(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	float                                              LightRadius;                                              // 0x0484(0x0004) (Edit)
	float                                              EL_LifeSpan;                                              // 0x0488(0x0004) (Edit)
	float                                              EL_InitialDelay;                                          // 0x048C(0x0004) (Edit)
	class AEmitterLight*                               pEmitterLight;                                            // 0x0490(0x0004) (Transient)
	unsigned long                                      bUseQuake : 1;                                            // 0x0494(0x0004) (Edit)
	unsigned char                                      ShakeType;                                                // 0x0498(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              ShakeIntensity;                                           // 0x049C(0x0004) (Edit)
	struct FVector                                     ShakeVector;                                              // 0x04A0(0x000C) (Edit)
	float                                              ShakeRange;                                               // 0x04AC(0x0004) (Edit)
	int                                                ShakeCount;                                               // 0x04B0(0x0004) (Edit)
	float                                              ShakeTime;                                                // 0x04B4(0x0004) (Edit)
	float                                              EQ_InitialDelay;                                          // 0x04B8(0x0004) (Edit)
	float                                              ShakeScope;                                               // 0x04BC(0x0004) (Edit)
	float                                              ShakeLiveTime;                                            // 0x04C0(0x0004) (Edit)
	float                                              ShakeStopTime;                                            // 0x04C4(0x0004) (Edit)
	struct FRange                                      VisibleLimit;                                             // 0x04C8(0x0008) (Edit)
	float                                              VisibilityInterpRange;                                    // 0x04D0(0x0004) (Edit)
	unsigned long                                      bSetSizeScale : 1;                                        // 0x04D4(0x0004) (Edit)
	unsigned long                                      bSetMatrix : 1;                                           // 0x04D4(0x0004) (Edit)
	struct FVector                                     EnchantOffset;                                            // 0x04D8(0x000C) (Edit)
	struct FVector                                     EnchantScale;                                             // 0x04E4(0x000C) (Edit)
	struct FName                                       EnchantBone;                                              // 0x04F0(0x0004) (Edit)
	struct FMatrix                                     EditorEnchantMatrix;                                      // 0x04F4(0x0040) (Edit)
	unsigned long                                      bIsSkillEffectEmitter : 1;                                // 0x0534(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void SetDisabled(bool dis);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void UpdatePrecacheMaterials();
	void SetSizeScale(float NewScale);
	void Kill();
};


// Class Engine.AirEmitter
// 0x002C (0x0564 - 0x0538)
class AAirEmitter : public AEmitter
{
public:
	unsigned long                                      bAttachToPawn : 1;                                        // 0x0538(0x0004) (Edit)
	unsigned long                                      bByOpacity : 1;                                           // 0x0538(0x0004) (Edit)
	int                                                NumSteps;                                                 // 0x053C(0x0004) (Edit)
	struct FRange                                      FadeRange;                                                // 0x0540(0x0008) (Edit)
	float                                              FadeAlpha;                                                // 0x0548(0x0004) (Edit, Transient)
	int                                                FadeAlphaByNum;                                           // 0x054C(0x0004) (Edit, Transient)
	class AAirVolume*                                  RecentVolume;                                             // 0x0550(0x0004) (Edit, Transient)
	float                                              RecentFadeSeconds;                                        // 0x0554(0x0004) (Edit, Transient)
	float                                              BoostVanishCoef;                                          // 0x0558(0x0004) (Edit)
	float                                              VanishCoef;                                               // 0x055C(0x0004) (Edit)
	int                                                IndexPE;                                                  // 0x0560(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AirEmitter");
		return ptr;
	}


	void PostBeginPlay();
	void ApplyFadeAlpha();
	void Timer();
	void SetAirVolume(class AAirVolume* NewVolume);
	void UnTouchVolume();
	void TouchVolume();
	void ForceKill();
	void ClearL2Game();
	void Destroyed();
	bool IsInAirVolume();
};


// Class Engine.WaterHitEmitter
// 0x0000 (0x0538 - 0x0538)
class AWaterHitEmitter : public AEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterHitEmitter");
		return ptr;
	}


	float GetSpawnRate(float PawnVelocity);
};


// Class Engine.ParticleMaterial
// 0x0294 (0x02E8 - 0x0054)
class UParticleMaterial : public URenderedMaterial
{
public:
	int                                                ParticleBlending;                                         // 0x0054(0x0004) (Const)
	int                                                BlendBetweenSubdivisions;                                 // 0x0058(0x0004) (Const)
	int                                                RenderTwoSided;                                           // 0x005C(0x0004) (Const)
	int                                                UseTFactor;                                               // 0x0060(0x0004) (Const)
	class UBitmapMaterial*                             BitmapMaterial;                                           // 0x0064(0x0004) (Const)
	int                                                Refraction;                                               // 0x0068(0x0004) (Const)
	int                                                AlphaTest;                                                // 0x006C(0x0004) (Const)
	int                                                AlphaRef;                                                 // 0x0070(0x0004) (Const)
	int                                                ZTest;                                                    // 0x0074(0x0004) (Const)
	int                                                ZWrite;                                                   // 0x0078(0x0004) (Const)
	int                                                Wireframe;                                                // 0x007C(0x0004) (Const)
	unsigned long                                      AcceptsProjectors : 1;                                    // 0x0080(0x0004) (Transient)
	int                                                NumProjectors;                                            // 0x0084(0x0004) (Const, Transient)
	struct FParticleProjectorInfo                      Projectors[0x8];                                          // 0x0088(0x004C) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleMaterial");
		return ptr;
	}

};


// Class Engine.PackageCheckInfo
// 0x0020 (0x0054 - 0x0034)
class UPackageCheckInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0034(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageCheckInfo");
		return ptr;
	}

};


// Class Engine.Mover
// 0x0284 (0x0640 - 0x03BC)
class AMover : public AActor
{
public:
	unsigned long                                      bCanBeAttacked : 1;                                       // 0x03BC(0x0004)
	unsigned long                                      bOpen : 1;                                                // 0x03BC(0x0004) (Edit)
	int                                                DamageGrade;                                              // 0x03C0(0x0004)
	struct FString                                     MoverName;                                                // 0x03C4(0x000C) (Edit, NeedCtorLink)
	class UStaticMesh*                                 MeshGrade[0x7];                                           // 0x03D0(0x0004) (Edit)
	float                                              RangeHeight;                                              // 0x03EC(0x0004) (Edit)
	struct FVector                                     RangeDelta[0x4];                                          // 0x03F0(0x000C) (Edit)
	struct FVector                                     HitActorNormal;                                           // 0x0420(0x000C) (Edit)
	TArray<class USound*>                              DamageSounds;                                             // 0x042C(0x000C) (Edit, NeedCtorLink)
	TArray<class USound*>                              BrokenSounds;                                             // 0x0438(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EMoverEncroachType>                    MoverEncroachType;                                        // 0x0444(0x0001) (Edit)
	TEnumAsByte<EMoverGlideType>                       MoverGlideType;                                           // 0x0445(0x0001) (Edit)
	TEnumAsByte<EBumpType>                             BumpType;                                                 // 0x0446(0x0001) (Edit)
	unsigned char                                      KeyNum;                                                   // 0x0447(0x0001) (Edit)
	unsigned char                                      PrevKeyNum;                                               // 0x0448(0x0001)
	unsigned char                                      NumKeys;                                                  // 0x0449(0x0001) (Edit, Const)
	unsigned char                                      WorldRaytraceKey;                                         // 0x044A(0x0001) (Edit, Const)
	unsigned char                                      BrushRaytraceKey;                                         // 0x044B(0x0001) (Edit, Const)
	float                                              MoveTime;                                                 // 0x044C(0x0004) (Edit)
	float                                              StayOpenTime;                                             // 0x0450(0x0004) (Edit)
	float                                              OtherTime;                                                // 0x0454(0x0004) (Edit)
	int                                                EncroachDamage;                                           // 0x0458(0x0004) (Edit)
	unsigned long                                      bTriggerOnceOnly : 1;                                     // 0x045C(0x0004) (Edit)
	unsigned long                                      bSlave : 1;                                               // 0x045C(0x0004) (Edit)
	unsigned long                                      bUseTriggered : 1;                                        // 0x045C(0x0004) (Edit)
	unsigned long                                      bDamageTriggered : 1;                                     // 0x045C(0x0004) (Edit)
	unsigned long                                      bDynamicLightMover : 1;                                   // 0x045C(0x0004) (Edit)
	unsigned long                                      bUseShortestRotation : 1;                                 // 0x045C(0x0004) (Edit)
	unsigned long                                      bIsLeader : 1;                                            // 0x045C(0x0004) (Edit)
	struct FName                                       PlayerBumpEvent;                                          // 0x0460(0x0004) (Edit)
	struct FName                                       BumpEvent;                                                // 0x0464(0x0004) (Edit)
	class AActor*                                      SavedTrigger;                                             // 0x0468(0x0004)
	float                                              DamageThreshold;                                          // 0x046C(0x0004) (Edit)
	int                                                numTriggerEvents;                                         // 0x0470(0x0004)
	class AMover*                                      Leader;                                                   // 0x0474(0x0004)
	class AMover*                                      Follower;                                                 // 0x0478(0x0004)
	struct FName                                       ReturnGroup;                                              // 0x047C(0x0004) (Edit)
	float                                              DelayTime;                                                // 0x0480(0x0004) (Edit)
	class USound*                                      OpeningSound;                                             // 0x0484(0x0004) (Edit)
	class USound*                                      OpenedSound;                                              // 0x0488(0x0004) (Edit)
	class USound*                                      ClosingSound;                                             // 0x048C(0x0004) (Edit)
	class USound*                                      ClosedSound;                                              // 0x0490(0x0004) (Edit)
	class USound*                                      MoveAmbientSound;                                         // 0x0494(0x0004) (Edit)
	class USound*                                      LoopSound;                                                // 0x0498(0x0004) (Edit)
	struct FName                                       OpeningEvent;                                             // 0x049C(0x0004) (Edit)
	struct FName                                       OpenedEvent;                                              // 0x04A0(0x0004) (Edit)
	struct FName                                       ClosingEvent;                                             // 0x04A4(0x0004) (Edit)
	struct FName                                       ClosedEvent;                                              // 0x04A8(0x0004) (Edit)
	struct FName                                       LoopEvent;                                                // 0x04AC(0x0004) (Edit)
	struct FVector                                     KeyPos[0x8];                                              // 0x04B0(0x000C)
	struct FRotator                                    KeyRot[0x8];                                              // 0x0510(0x000C)
	struct FVector                                     BasePos;                                                  // 0x0570(0x000C)
	struct FVector                                     OldPos;                                                   // 0x057C(0x000C)
	struct FVector                                     OldPrePivot;                                              // 0x0588(0x000C)
	struct FVector                                     SavedPos;                                                 // 0x0594(0x000C)
	struct FRotator                                    BaseRot;                                                  // 0x05A0(0x000C)
	struct FRotator                                    OldRot;                                                   // 0x05AC(0x000C)
	struct FRotator                                    SavedRot;                                                 // 0x05B8(0x000C)
	float                                              PhysAlpha;                                                // 0x05C4(0x0004)
	float                                              PhysRate;                                                 // 0x05C8(0x0004)
	class ANavigationPoint*                            myMarker;                                                 // 0x05CC(0x0004)
	unsigned long                                      bOpening : 1;                                             // 0x05D0(0x0004)
	unsigned long                                      bDelaying : 1;                                            // 0x05D0(0x0004)
	unsigned long                                      bClientPause : 1;                                         // 0x05D0(0x0004)
	unsigned long                                      bClosed : 1;                                              // 0x05D0(0x0004)
	unsigned long                                      bPlayerOnly : 1;                                          // 0x05D0(0x0004)
	unsigned long                                      bAutoDoor : 1;                                            // 0x05D0(0x0004) (Edit)
	unsigned long                                      bNoAIRelevance : 1;                                       // 0x05D0(0x0004) (Edit)
	struct FVector                                     SimOldPos;                                                // 0x05D4(0x000C) (Net)
	int                                                SimOldRotPitch;                                           // 0x05E0(0x0004) (Net)
	int                                                SimOldRotYaw;                                             // 0x05E4(0x0004) (Net)
	int                                                SimOldRotRoll;                                            // 0x05E8(0x0004) (Net)
	struct FVector                                     SimInterpolate;                                           // 0x05EC(0x000C) (Net)
	struct FVector                                     RealPosition;                                             // 0x05F8(0x000C) (Net)
	struct FRotator                                    RealRotation;                                             // 0x0604(0x000C) (Net)
	int                                                ClientUpdate;                                             // 0x0610(0x0004)
	TArray<class AAntiPortalActor*>                    AntiPortals;                                              // 0x0614(0x000C) (NeedCtorLink)
	struct FName                                       AntiPortalTag;                                            // 0x0620(0x0004) (Edit)
	unsigned long                                      bTargetable : 1;                                          // 0x0624(0x0004) (Edit)
	TArray<class UStaticMesh*>                         StateStaticMeshs;                                         // 0x0628(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               StateChangeEffectNames;                                   // 0x0634(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Mover");
		return ptr;
	}


	void GetEffTargetLocation(struct FVector* LocVector);
	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void Bump(class AActor* Other);
	bool EncroachingOn(class AActor* Other);
	void MakeGroupReturn();
	void MakeGroupStop();
	void PostBeginPlay();
	void BeginPlay();
	void DoClose();
	void DoOpen();
	void FinishedOpening();
	void FinishedClosing();
	void FinishNotify();
	void KeyFrameReached();
	void SetKeyframe(unsigned char NewKeyNum, const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void InterpolateTo(unsigned char NewKeyNum, float Seconds);
	void Timer();
	void StartInterpolation();
};


// Class Engine.Model
// 0x06D8 (0x0738 - 0x0060)
class UModel : public UPrimitive
{
public:
	unsigned char                                      UnknownData00[0x6D8];                                     // 0x0060(0x06D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.MeshEmitter
// 0x0014 (0x0500 - 0x04EC)
class UMeshEmitter : public UParticleEmitter
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x04EC(0x0004) (Edit)
	unsigned long                                      UseMeshBlendMode : 1;                                     // 0x04F0(0x0004) (Edit)
	unsigned long                                      RenderTwoSided : 1;                                       // 0x04F0(0x0004) (Edit)
	unsigned long                                      UseParticleColor : 1;                                     // 0x04F0(0x0004) (Edit)
	unsigned long                                      IsEnchantEffect : 1;                                      // 0x04F0(0x0004) (Edit)
	struct FVector                                     MeshExtent;                                               // 0x04F4(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshEmitter");
		return ptr;
	}

};


// Class Engine.MeshContainer
// 0x0104 (0x0138 - 0x0034)
class UMeshContainer : public UObject
{
public:
	class AActor*                                      Owner;                                                    // 0x0034(0x0004)
	class UMeshComponent*                              FirstMeshComponent;                                       // 0x0038(0x0004)
	struct FMeshComponentArrayPtr                      MeshComponentArray[0x1F];                                 // 0x003C(0x0004) (Native)
	struct FMeshComponentArrayPtr                      MeshComponentBufferArray[0x1F];                           // 0x00B8(0x0004) (Native)
	unsigned long                                      bLoaded : 1;                                              // 0x0134(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshContainer");
		return ptr;
	}

};


// Class Engine.MeshComponent
// 0x0078 (0x00AC - 0x0034)
class UMeshComponent : public UObject
{
public:
	class AActor*                                      Owner;                                                    // 0x0034(0x0004)
	class UMesh*                                       Mesh;                                                     // 0x0038(0x0004)
	class UMeshInstance*                               MeshInstance;                                             // 0x003C(0x0004)
	TArray<class UMaterial*>                           Materials;                                                // 0x0040(0x000C) (NeedCtorLink)
	class UMeshComponent*                              LastMeshComponent;                                        // 0x004C(0x0004)
	class UMeshComponent*                              NextMeshComponent;                                        // 0x0050(0x0004)
	class UMeshComponent*                              AnimMeshComponent;                                        // 0x0054(0x0004)
	struct FMeshComponentData                          MeshData;                                                 // 0x0058(0x0048) (NeedCtorLink)
	float                                              fAlphaFactor;                                             // 0x00A0(0x0004)
	unsigned long                                      bLoaded : 1;                                              // 0x00A4(0x0004)
	unsigned long                                      bByResourceManager : 1;                                   // 0x00A4(0x0004)
	TEnumAsByte<EMeshComponentStatus>                  MeshComponentStatus;                                      // 0x00A8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}

};


// Class Engine.Modifier
// 0x0004 (0x0058 - 0x0054)
class UModifier : public UMaterial
{
public:
	class UMaterial*                                   Material;                                                 // 0x0054(0x0004) (Edit, EditInline, EditInlineUse)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Modifier");
		return ptr;
	}


	void Trigger(class AActor* Other, class AActor* EventInstigator);
	void Reset();
};


// Class Engine.GlowModifier
// 0x0004 (0x005C - 0x0058)
class UGlowModifier : public UModifier
{
public:
	struct FColor                                      GlowColor;                                                // 0x0058(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GlowModifier");
		return ptr;
	}

};


// Class Engine.UnderWaterMaterial
// 0x0008 (0x005C - 0x0054)
class UUnderWaterMaterial : public URenderedMaterial
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0054(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UnderWaterMaterial");
		return ptr;
	}

};


// Class Engine.WaterMaterial
// 0x0020 (0x0074 - 0x0054)
class UWaterMaterial : public URenderedMaterial
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0054(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterMaterial");
		return ptr;
	}

};


// Class Engine.UnderWaterShader
// 0x0014 (0x0068 - 0x0054)
class UUnderWaterShader : public URenderedMaterial
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0054(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UnderWaterShader");
		return ptr;
	}

};


// Class Engine.BumpShader
// 0x0014 (0x0068 - 0x0054)
class UBumpShader : public URenderedMaterial
{
public:
	class UMaterial*                                   Diffuse;                                                  // 0x0054(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   BumpMaterial;                                             // 0x0058(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   OldBumpMaterial;                                          // 0x005C(0x0004)
	unsigned char                                      BumpRawData;                                              // 0x0060(0x0001) (Const, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                BumpTexInterface;                                         // 0x0064(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BumpShader");
		return ptr;
	}


	void Trigger(class AActor* Other, class AActor* EventInstigator);
	void Reset();
};


// Class Engine.OpacityModifier
// 0x0008 (0x0060 - 0x0058)
class UOpacityModifier : public UModifier
{
public:
	class UMaterial*                                   Opacity;                                                  // 0x0058(0x0004)
	unsigned long                                      bOverrideTexModifier : 1;                                 // 0x005C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OpacityModifier");
		return ptr;
	}

};


// Class Engine.MaterialSequence
// 0x0020 (0x0078 - 0x0058)
class UMaterialSequence : public UModifier
{
public:
	TArray<struct FMaterialSequenceItem>               SequenceItems;                                            // 0x0058(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EMaterialSequenceTriggerActon>         TriggerAction;                                            // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	unsigned long                                      Loop : 1;                                                 // 0x0068(0x0004) (Edit)
	unsigned long                                      Paused : 1;                                               // 0x0068(0x0004) (Edit)
	float                                              CurrentTime;                                              // 0x006C(0x0004) (Transient)
	float                                              LastTime;                                                 // 0x0070(0x0004) (Transient)
	float                                              TotalTime;                                                // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialSequence");
		return ptr;
	}


	void Trigger(class AActor* Other, class AActor* EventInstigator);
	void Reset();
};


// Class Engine.MaterialSwitch
// 0x0010 (0x0068 - 0x0058)
class UMaterialSwitch : public UModifier
{
public:
	int                                                Current;                                                  // 0x0058(0x0004) (Edit, Transient)
	TArray<class UMaterial*>                           Materials;                                                // 0x005C(0x000C) (Edit, NeedCtorLink, EditInline, EditInlineUse)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialSwitch");
		return ptr;
	}


	void Trigger(class AActor* Other, class AActor* EventInstigator);
	void Reset();
};


// Class Engine.FinalBlend
// 0x0010 (0x0068 - 0x0058)
class UFinalBlend : public UModifier
{
public:
	TEnumAsByte<EFrameBufferBlending>                  FrameBufferBlending;                                      // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	unsigned long                                      ZWrite : 1;                                               // 0x005C(0x0004) (Edit)
	unsigned long                                      ZTest : 1;                                                // 0x005C(0x0004) (Edit)
	unsigned long                                      AlphaTest : 1;                                            // 0x005C(0x0004) (Edit)
	unsigned long                                      TwoSided : 1;                                             // 0x005C(0x0004) (Edit)
	unsigned char                                      AlphaRef;                                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	unsigned long                                      TreatAsTwoSided : 1;                                      // 0x0064(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FinalBlend");
		return ptr;
	}

};


// Class Engine.VertexColor
// 0x0000 (0x0054 - 0x0054)
class UVertexColor : public URenderedMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexColor");
		return ptr;
	}

};


// Class Engine.TexModifier
// 0x0008 (0x0060 - 0x0058)
class UTexModifier : public UModifier
{
public:
	TEnumAsByte<ETexCoordSrc>                          TexCoordSource;                                           // 0x0058(0x0001)
	TEnumAsByte<ETexCoordCount>                        TexCoordCount;                                            // 0x0059(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	unsigned long                                      TexCoordProjected : 1;                                    // 0x005C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexModifier");
		return ptr;
	}

};


// Class Engine.TexCoordSource
// 0x0004 (0x0064 - 0x0060)
class UTexCoordSource : public UTexModifier
{
public:
	int                                                SourceChannel;                                            // 0x0060(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexCoordSource");
		return ptr;
	}

};


// Class Engine.TexMatrix
// 0x0040 (0x00A0 - 0x0060)
class UTexMatrix : public UTexModifier
{
public:
	struct FMatrix                                     Matrix;                                                   // 0x0060(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexMatrix");
		return ptr;
	}

};


// Class Engine.TexEnvMap
// 0x0004 (0x0064 - 0x0060)
class UTexEnvMap : public UTexModifier
{
public:
	TEnumAsByte<ETexEnvMapType>                        EnvMapType;                                               // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexEnvMap");
		return ptr;
	}

};


// Class Engine.TexOscillator
// 0x0074 (0x00D4 - 0x0060)
class UTexOscillator : public UTexModifier
{
public:
	float                                              UOscillationRate;                                         // 0x0060(0x0004) (Edit)
	float                                              VOscillationRate;                                         // 0x0064(0x0004) (Edit)
	float                                              UOscillationPhase;                                        // 0x0068(0x0004) (Edit)
	float                                              VOscillationPhase;                                        // 0x006C(0x0004) (Edit)
	float                                              UOscillationAmplitude;                                    // 0x0070(0x0004) (Edit)
	float                                              VOscillationAmplitude;                                    // 0x0074(0x0004) (Edit)
	TEnumAsByte<ETexOscillationType>                   UOscillationType;                                         // 0x0078(0x0001) (Edit)
	TEnumAsByte<ETexOscillationType>                   VOscillationType;                                         // 0x0079(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              UOffset;                                                  // 0x007C(0x0004) (Edit)
	float                                              VOffset;                                                  // 0x0080(0x0004) (Edit)
	float                                              LastSu;                                                   // 0x0084(0x0004)
	float                                              LastSv;                                                   // 0x0088(0x0004)
	float                                              CurrentUJitter;                                           // 0x008C(0x0004)
	float                                              CurrentVJitter;                                           // 0x0090(0x0004)
	struct FMatrix                                     M;                                                        // 0x0094(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexOscillator");
		return ptr;
	}

};


// Class Engine.TexOscillatorTriggered
// 0x0010 (0x00E4 - 0x00D4)
class UTexOscillatorTriggered : public UTexOscillator
{
public:
	TEnumAsByte<ERetriggerAction>                      RetriggerAction;                                          // 0x00D4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              StopAfterPeriod;                                          // 0x00D8(0x0004) (Edit)
	float                                              TriggeredTime;                                            // 0x00DC(0x0004) (Transient)
	unsigned long                                      Reverse : 1;                                              // 0x00E0(0x0004) (Transient)
	unsigned long                                      Triggered : 1;                                            // 0x00E0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexOscillatorTriggered");
		return ptr;
	}


	void Reset();
	void Trigger(class AActor* Other, class AActor* EventInstigator);
};


// Class Engine.TexRotator
// 0x0080 (0x00E0 - 0x0060)
class UTexRotator : public UTexModifier
{
public:
	TEnumAsByte<ETexRotationType>                      TexRotationType;                                          // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0064(0x000C) (Edit)
	unsigned long                                      ConstantRotation : 1;                                     // 0x0070(0x0004) (Deprecated)
	float                                              UOffset;                                                  // 0x0074(0x0004) (Edit)
	float                                              VOffset;                                                  // 0x0078(0x0004) (Edit)
	struct FRotator                                    OscillationRate;                                          // 0x007C(0x000C) (Edit)
	struct FRotator                                    OscillationAmplitude;                                     // 0x0088(0x000C) (Edit)
	struct FRotator                                    OscillationPhase;                                         // 0x0094(0x000C) (Edit)
	struct FMatrix                                     M;                                                        // 0x00A0(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexRotator");
		return ptr;
	}

};


// Class Engine.TexScaler
// 0x0050 (0x00B0 - 0x0060)
class UTexScaler : public UTexModifier
{
public:
	float                                              UScale;                                                   // 0x0060(0x0004) (Edit)
	float                                              VScale;                                                   // 0x0064(0x0004) (Edit)
	float                                              UOffset;                                                  // 0x0068(0x0004) (Edit)
	float                                              VOffset;                                                  // 0x006C(0x0004) (Edit)
	struct FMatrix                                     M;                                                        // 0x0070(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexScaler");
		return ptr;
	}

};


// Class Engine.TexPanner
// 0x0050 (0x00B0 - 0x0060)
class UTexPanner : public UTexModifier
{
public:
	struct FRotator                                    PanDirection;                                             // 0x0060(0x000C) (Edit)
	float                                              PanRate;                                                  // 0x006C(0x0004) (Edit)
	struct FMatrix                                     M;                                                        // 0x0070(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexPanner");
		return ptr;
	}

};


// Class Engine.TexPannerTriggered
// 0x0010 (0x00C0 - 0x00B0)
class UTexPannerTriggered : public UTexPanner
{
public:
	TEnumAsByte<ERetriggerAction>                      RetriggerAction;                                          // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StopAfterPeriod;                                          // 0x00B4(0x0004) (Edit)
	float                                              TriggeredTime;                                            // 0x00B8(0x0004) (Transient)
	unsigned long                                      Reverse : 1;                                              // 0x00BC(0x0004) (Transient)
	unsigned long                                      Triggered : 1;                                            // 0x00BC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexPannerTriggered");
		return ptr;
	}


	void Reset();
	void Trigger(class AActor* Other, class AActor* EventInstigator);
};


// Class Engine.ConstantMaterial
// 0x0000 (0x0054 - 0x0054)
class UConstantMaterial : public URenderedMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ConstantMaterial");
		return ptr;
	}

};


// Class Engine.FadeColor
// 0x0014 (0x0068 - 0x0054)
class UFadeColor : public UConstantMaterial
{
public:
	struct FColor                                      Color1;                                                   // 0x0054(0x0004) (Edit)
	struct FColor                                      Color2;                                                   // 0x0058(0x0004) (Edit)
	float                                              FadePeriod;                                               // 0x005C(0x0004) (Edit)
	float                                              FadePhase;                                                // 0x0060(0x0004) (Edit)
	TEnumAsByte<EColorFadeType>                        ColorFadeType;                                            // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FadeColor");
		return ptr;
	}

};


// Class Engine.ConstantColor
// 0x0004 (0x0058 - 0x0054)
class UConstantColor : public UConstantMaterial
{
public:
	struct FColor                                      Color;                                                    // 0x0054(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ConstantColor");
		return ptr;
	}

};


// Class Engine.Combiner
// 0x0014 (0x0068 - 0x0054)
class UCombiner : public UMaterial
{
public:
	TEnumAsByte<EColorOperation>                       CombineOperation;                                         // 0x0054(0x0001) (Edit)
	TEnumAsByte<EAlphaOperation>                       AlphaOperation;                                           // 0x0055(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	class UMaterial*                                   Material1;                                                // 0x0058(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   Material2;                                                // 0x005C(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   Mask;                                                     // 0x0060(0x0004) (Edit, EditInline, EditInlineUse)
	unsigned long                                      InvertMask : 1;                                           // 0x0064(0x0004) (Edit)
	unsigned long                                      Modulate2X : 1;                                           // 0x0064(0x0004) (Edit)
	unsigned long                                      Modulate4X : 1;                                           // 0x0064(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Combiner");
		return ptr;
	}

};


// Class Engine.Shader
// 0x0044 (0x0098 - 0x0054)
class UShader : public URenderedMaterial
{
public:
	class UMaterial*                                   Diffuse;                                                  // 0x0054(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   Opacity;                                                  // 0x0058(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   Specular;                                                 // 0x005C(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   SpecularityMask;                                          // 0x0060(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   SelfIllumination;                                         // 0x0064(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   SelfIlluminationMask;                                     // 0x0068(0x0004) (Edit, EditInline, EditInlineUse)
	class UMaterial*                                   Detail;                                                   // 0x006C(0x0004) (Edit, EditInline, EditInlineUse)
	float                                              DetailScale;                                              // 0x0070(0x0004) (Edit)
	TEnumAsByte<EOutputBlending>                       OutputBlending;                                           // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	unsigned long                                      TwoSided : 1;                                             // 0x0078(0x0004) (Edit)
	unsigned long                                      Wireframe : 1;                                            // 0x0078(0x0004) (Edit)
	unsigned long                                      ModulateStaticLighting2X : 1;                             // 0x0078(0x0004)
	unsigned long                                      PerformLightingOnSpecularPass : 1;                        // 0x0078(0x0004) (Edit)
	unsigned long                                      TreatAsTwoSided : 1;                                      // 0x0078(0x0004) (Edit)
	unsigned long                                      ZWrite : 1;                                               // 0x0078(0x0004) (Edit)
	unsigned long                                      AlphaTest : 1;                                            // 0x0078(0x0004) (Edit)
	unsigned char                                      AlphaRef;                                                 // 0x007C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	class UMaterial*                                   NormalMap;                                                // 0x0080(0x0004) (Edit, EditInline, EditInlineUse)
	float                                              BumpOffsetScaleFactor;                                    // 0x0084(0x0004) (Edit)
	float                                              BumpOffsetBiasFactor;                                     // 0x0088(0x0004) (Edit)
	class UMaterial*                                   SpecularMap;                                              // 0x008C(0x0004) (Edit, EditInline, EditInlineUse)
	float                                              SpecularPower;                                            // 0x0090(0x0004) (Edit)
	float                                              SpecularScale;                                            // 0x0094(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Shader");
		return ptr;
	}


	void Trigger(class AActor* Other, class AActor* EventInstigator);
	void Reset();
};


// Class Engine.L2ColorModifier
// 0x000C (0x0064 - 0x0058)
class UL2ColorModifier : public UModifier
{
public:
	struct FColor                                      Color;                                                    // 0x0058(0x0004) (Edit)
	unsigned long                                      RenderTwoSided : 1;                                       // 0x005C(0x0004) (Edit)
	unsigned long                                      AlphaBlend : 1;                                           // 0x005C(0x0004) (Edit)
	TEnumAsByte<EL2TextureOp>                          AlphaOp;                                                  // 0x0060(0x0001) (Edit)
	TEnumAsByte<EL2TextureOp>                          ColorOp;                                                  // 0x0061(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2ColorModifier");
		return ptr;
	}

};


// Class Engine.ColorModifier
// 0x0008 (0x0060 - 0x0058)
class UColorModifier : public UModifier
{
public:
	struct FColor                                      Color;                                                    // 0x0058(0x0004) (Edit)
	unsigned long                                      RenderTwoSided : 1;                                       // 0x005C(0x0004) (Edit)
	unsigned long                                      AlphaBlend : 1;                                           // 0x005C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ColorModifier");
		return ptr;
	}

};


// Class Engine.TexCoordMaterial
// 0x0008 (0x005C - 0x0054)
class UTexCoordMaterial : public URenderedMaterial
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0054(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TexCoordMaterial");
		return ptr;
	}

};


// Class Engine.ProxyBitmapMaterial
// 0x0004 (0x0080 - 0x007C)
class UProxyBitmapMaterial : public UBitmapMaterial
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProxyBitmapMaterial");
		return ptr;
	}

};


// Class Engine.LevelBase
// 0x008C (0x00C0 - 0x0034)
class ULevelBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0034(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBase");
		return ptr;
	}

};


// Class Engine.Level
// 0x1114 (0x11D4 - 0x00C0)
class ULevel : public ULevelBase
{
public:
	unsigned char                                      UnknownData00[0x1114];                                    // 0x00C0(0x1114) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.MasterLevel
// 0x0018 (0x11EC - 0x11D4)
class UMasterLevel : public ULevel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x11D4(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MasterLevel");
		return ptr;
	}

};


// Class Engine.Interactions
// 0x0000 (0x0034 - 0x0034)
class UInteractions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interactions");
		return ptr;
	}

};


// Class Engine.InteractionMaster
// 0x001C (0x0050 - 0x0034)
class UInteractionMaster : public UInteractions
{
public:
	class UClient*                                     Client;                                                   // 0x0034(0x0004) (Transient)
	class UInteraction*                                BaseMenu;                                                 // 0x0038(0x0004) (Const, Transient)
	class UInteraction*                                Console;                                                  // 0x003C(0x0004) (Const, Transient)
	TArray<class UInteraction*>                        GlobalInteractions;                                       // 0x0040(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bRequireRawJoystick : 1;                                  // 0x004C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractionMaster");
		return ptr;
	}


	void Process_Message(const struct FString& Msg, float MsgLife, TArray<class UInteraction*> InteractionArray);
	void Process_Tick(TArray<class UInteraction*> InteractionArray, float DeltaTime);
	void Process_PostRender(TArray<class UInteraction*> InteractionArray, class UCanvas* Canvas);
	void Process_PreRender(TArray<class UInteraction*> InteractionArray, class UCanvas* Canvas);
	bool Process_KeyEvent(TArray<class UInteraction*> InteractionArray, float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action);
	bool Process_KeyType(TArray<class UInteraction*> InteractionArray, const struct FString& Unicode, TEnumAsByte<EInputKey>* Key);
	void SetFocusTo(class UInteraction* Inter, class UPlayer* ViewportOwner);
	void RemoveInteraction(class UInteraction* RemoveMe);
	class UInteraction* AddInteraction(const struct FString& InteractionName, class UPlayer* AttachTo);
	void Travel(const struct FString& URL);
};


// Class Engine.Interaction
// 0x000C (0x0040 - 0x0034)
class UInteraction : public UInteractions
{
public:
	unsigned long                                      bActive : 1;                                              // 0x0034(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0034(0x0004)
	unsigned long                                      bRequiresTick : 1;                                        // 0x0034(0x0004)
	unsigned long                                      bNativeEvents : 1;                                        // 0x0034(0x0004)
	class UPlayer*                                     ViewportOwner;                                            // 0x0038(0x0004)
	class UInteractionMaster*                          Master;                                                   // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interaction");
		return ptr;
	}


	void Tick(float DeltaTime);
	void SetFocus();
	void PostRender(class UCanvas* Canvas);
	void PreRender(class UCanvas* Canvas);
	bool KeyEvent(float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action);
	bool KeyType(const struct FString& Unicode, TEnumAsByte<EInputKey>* Key);
	void Message(const struct FString& Msg, float MsgLife);
	void Initialized();
	struct FVector ScreenToWorld(const struct FVector& Location, const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
	struct FVector WorldToScreen(const struct FVector& Location, const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
	bool ConsoleCommand(const struct FString& S);
	void Initialize();
};


// Class Engine.BaseGUIController
// 0x0014 (0x0054 - 0x0040)
class UBaseGUIController : public UInteraction
{
public:
	class UMaterial*                                   DefaultPens[0x3];                                         // 0x0040(0x0004)
	struct FScriptDelegate                             __OnAdminReply__Delegate;                                 // 0x004C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BaseGUIController");
		return ptr;
	}


	void SetRequiredGameResolution(const struct FString& GameRes);
	bool NeedsMenuResolution();
	void InitializeController();
	void SetControllerStatus(bool On);
	void CloseAll(bool bCancel);
	bool CloseMenu(bool bCanceled);
	bool ReplaceMenu(const struct FString& NewMenuName, const struct FString& Param1, const struct FString& Param2);
	bool OpenMenu(const struct FString& NewMenuName, const struct FString& Param1, const struct FString& Param2);
	void OnAdminReply(const struct FString& Reply);
};


// Class Engine.Console
// 0x00E0 (0x0120 - 0x0040)
class UConsole : public UInteraction
{
public:
	unsigned char                                      ConsoleKey;                                               // 0x0040(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                HistoryTop;                                               // 0x0044(0x0004)
	int                                                HistoryBot;                                               // 0x0048(0x0004)
	int                                                HistoryCur;                                               // 0x004C(0x0004)
	struct FString                                     TypedStr;                                                 // 0x0050(0x000C) (NeedCtorLink)
	struct FString                                     History[0x10];                                            // 0x005C(0x000C) (NeedCtorLink)
	unsigned long                                      bTyping : 1;                                              // 0x011C(0x0004)
	unsigned long                                      bIgnoreKeys : 1;                                          // 0x011C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}


	bool KeyEvent(TEnumAsByte<EInputKey> Key, TEnumAsByte<EInputAction> Action, float Delta);
	void Message(const struct FString& Msg, float MsgLife);
	void TeamTalk();
	void Talk();
	void type();
};


// Class Engine.Input
// 0x1F84 (0x1FBC - 0x0038)
class UInput : public USubsystem
{
public:
	struct FAlias                                      Aliases[0x28];                                            // 0x0038(0x0010) (Config, NeedCtorLink)
	struct FString                                     StrProperty0;                                             // 0x02B8(0x000C) (Config, NeedCtorLink)
	struct FString                                     LeftMouse;                                                // 0x02C4(0x000C) (Config, NeedCtorLink)
	struct FString                                     RightMouse;                                               // 0x02D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Cancel;                                                   // 0x02DC(0x000C) (Config, NeedCtorLink)
	struct FString                                     MiddleMouse;                                              // 0x02E8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown05;                                                // 0x02F4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown06;                                                // 0x0300(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown07;                                                // 0x030C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Backspace;                                                // 0x0318(0x000C) (Config, NeedCtorLink)
	struct FString                                     tab;                                                      // 0x0324(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown0A;                                                // 0x0330(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown0B;                                                // 0x033C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown0C;                                                // 0x0348(0x000C) (Config, NeedCtorLink)
	struct FString                                     Enter;                                                    // 0x0354(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown0E;                                                // 0x0360(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown0F;                                                // 0x036C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Shift;                                                    // 0x0378(0x000C) (Config, NeedCtorLink)
	struct FString                                     Ctrl;                                                     // 0x0384(0x000C) (Config, NeedCtorLink)
	struct FString                                     Alt;                                                      // 0x0390(0x000C) (Config, NeedCtorLink)
	struct FString                                     Pause;                                                    // 0x039C(0x000C) (Config, NeedCtorLink)
	struct FString                                     CapsLock;                                                 // 0x03A8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown15;                                                // 0x03B4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown16;                                                // 0x03C0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown17;                                                // 0x03CC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown18;                                                // 0x03D8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown19;                                                // 0x03E4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown1A;                                                // 0x03F0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Escape;                                                   // 0x03FC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown1C;                                                // 0x0408(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown1D;                                                // 0x0414(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown1E;                                                // 0x0420(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown1F;                                                // 0x042C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Space;                                                    // 0x0438(0x000C) (Config, NeedCtorLink)
	struct FString                                     PageUp;                                                   // 0x0444(0x000C) (Config, NeedCtorLink)
	struct FString                                     PageDown;                                                 // 0x0450(0x000C) (Config, NeedCtorLink)
	struct FString                                     End;                                                      // 0x045C(0x000C) (Config, NeedCtorLink)
	struct FString                                     home;                                                     // 0x0468(0x000C) (Config, NeedCtorLink)
	struct FString                                     Left;                                                     // 0x0474(0x000C) (Config, NeedCtorLink)
	struct FString                                     Up;                                                       // 0x0480(0x000C) (Config, NeedCtorLink)
	struct FString                                     Right;                                                    // 0x048C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Down;                                                     // 0x0498(0x000C) (Config, NeedCtorLink)
	struct FString                                     Select;                                                   // 0x04A4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Print;                                                    // 0x04B0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Execute;                                                  // 0x04BC(0x000C) (Config, NeedCtorLink)
	struct FString                                     PrintScrn;                                                // 0x04C8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Insert;                                                   // 0x04D4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Delete;                                                   // 0x04E0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Help;                                                     // 0x04EC(0x000C) (Config, NeedCtorLink)
	struct FString                                     _0;                                                       // 0x04F8(0x000C) (Config, NeedCtorLink)
	struct FString                                     _1;                                                       // 0x0504(0x000C) (Config, NeedCtorLink)
	struct FString                                     _2;                                                       // 0x0510(0x000C) (Config, NeedCtorLink)
	struct FString                                     _3;                                                       // 0x051C(0x000C) (Config, NeedCtorLink)
	struct FString                                     _4;                                                       // 0x0528(0x000C) (Config, NeedCtorLink)
	struct FString                                     _5;                                                       // 0x0534(0x000C) (Config, NeedCtorLink)
	struct FString                                     _6;                                                       // 0x0540(0x000C) (Config, NeedCtorLink)
	struct FString                                     _7;                                                       // 0x054C(0x000C) (Config, NeedCtorLink)
	struct FString                                     _8;                                                       // 0x0558(0x000C) (Config, NeedCtorLink)
	struct FString                                     _9;                                                       // 0x0564(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown3A;                                                // 0x0570(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown3B;                                                // 0x057C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown3C;                                                // 0x0588(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown3D;                                                // 0x0594(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown3E;                                                // 0x05A0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown3F;                                                // 0x05AC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown40;                                                // 0x05B8(0x000C) (Config, NeedCtorLink)
	struct FString                                     A;                                                        // 0x05C4(0x000C) (Config, NeedCtorLink)
	struct FString                                     B;                                                        // 0x05D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     C;                                                        // 0x05DC(0x000C) (Config, NeedCtorLink)
	struct FString                                     D;                                                        // 0x05E8(0x000C) (Config, NeedCtorLink)
	struct FString                                     E;                                                        // 0x05F4(0x000C) (Config, NeedCtorLink)
	struct FString                                     f;                                                        // 0x0600(0x000C) (Config, NeedCtorLink)
	struct FString                                     G;                                                        // 0x060C(0x000C) (Config, NeedCtorLink)
	struct FString                                     H;                                                        // 0x0618(0x000C) (Config, NeedCtorLink)
	struct FString                                     i;                                                        // 0x0624(0x000C) (Config, NeedCtorLink)
	struct FString                                     j;                                                        // 0x0630(0x000C) (Config, NeedCtorLink)
	struct FString                                     K;                                                        // 0x063C(0x000C) (Config, NeedCtorLink)
	struct FString                                     L;                                                        // 0x0648(0x000C) (Config, NeedCtorLink)
	struct FString                                     M;                                                        // 0x0654(0x000C) (Config, NeedCtorLink)
	struct FString                                     N;                                                        // 0x0660(0x000C) (Config, NeedCtorLink)
	struct FString                                     O;                                                        // 0x066C(0x000C) (Config, NeedCtorLink)
	struct FString                                     P;                                                        // 0x0678(0x000C) (Config, NeedCtorLink)
	struct FString                                     Q;                                                        // 0x0684(0x000C) (Config, NeedCtorLink)
	struct FString                                     R;                                                        // 0x0690(0x000C) (Config, NeedCtorLink)
	struct FString                                     S;                                                        // 0x069C(0x000C) (Config, NeedCtorLink)
	struct FString                                     t;                                                        // 0x06A8(0x000C) (Config, NeedCtorLink)
	struct FString                                     U;                                                        // 0x06B4(0x000C) (Config, NeedCtorLink)
	struct FString                                     V;                                                        // 0x06C0(0x000C) (Config, NeedCtorLink)
	struct FString                                     W;                                                        // 0x06CC(0x000C) (Config, NeedCtorLink)
	struct FString                                     X;                                                        // 0x06D8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Y;                                                        // 0x06E4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Z;                                                        // 0x06F0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown5B;                                                // 0x06FC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown5C;                                                // 0x0708(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown5D;                                                // 0x0714(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown5E;                                                // 0x0720(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown5F;                                                // 0x072C(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad0;                                                  // 0x0738(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad1;                                                  // 0x0744(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad2;                                                  // 0x0750(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad3;                                                  // 0x075C(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad4;                                                  // 0x0768(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad5;                                                  // 0x0774(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad6;                                                  // 0x0780(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad7;                                                  // 0x078C(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad8;                                                  // 0x0798(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPad9;                                                  // 0x07A4(0x000C) (Config, NeedCtorLink)
	struct FString                                     GreyStar;                                                 // 0x07B0(0x000C) (Config, NeedCtorLink)
	struct FString                                     GreyPlus;                                                 // 0x07BC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Separator;                                                // 0x07C8(0x000C) (Config, NeedCtorLink)
	struct FString                                     GreyMinus;                                                // 0x07D4(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumPadPeriod;                                             // 0x07E0(0x000C) (Config, NeedCtorLink)
	struct FString                                     GreySlash;                                                // 0x07EC(0x000C) (Config, NeedCtorLink)
	struct FString                                     F1;                                                       // 0x07F8(0x000C) (Config, NeedCtorLink)
	struct FString                                     F2;                                                       // 0x0804(0x000C) (Config, NeedCtorLink)
	struct FString                                     F3;                                                       // 0x0810(0x000C) (Config, NeedCtorLink)
	struct FString                                     F4;                                                       // 0x081C(0x000C) (Config, NeedCtorLink)
	struct FString                                     F5;                                                       // 0x0828(0x000C) (Config, NeedCtorLink)
	struct FString                                     F6;                                                       // 0x0834(0x000C) (Config, NeedCtorLink)
	struct FString                                     F7;                                                       // 0x0840(0x000C) (Config, NeedCtorLink)
	struct FString                                     F8;                                                       // 0x084C(0x000C) (Config, NeedCtorLink)
	struct FString                                     F9;                                                       // 0x0858(0x000C) (Config, NeedCtorLink)
	struct FString                                     F10;                                                      // 0x0864(0x000C) (Config, NeedCtorLink)
	struct FString                                     F11;                                                      // 0x0870(0x000C) (Config, NeedCtorLink)
	struct FString                                     F12;                                                      // 0x087C(0x000C) (Config, NeedCtorLink)
	struct FString                                     F13;                                                      // 0x0888(0x000C) (Config, NeedCtorLink)
	struct FString                                     F14;                                                      // 0x0894(0x000C) (Config, NeedCtorLink)
	struct FString                                     F15;                                                      // 0x08A0(0x000C) (Config, NeedCtorLink)
	struct FString                                     F16;                                                      // 0x08AC(0x000C) (Config, NeedCtorLink)
	struct FString                                     F17;                                                      // 0x08B8(0x000C) (Config, NeedCtorLink)
	struct FString                                     F18;                                                      // 0x08C4(0x000C) (Config, NeedCtorLink)
	struct FString                                     F19;                                                      // 0x08D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     F20;                                                      // 0x08DC(0x000C) (Config, NeedCtorLink)
	struct FString                                     F21;                                                      // 0x08E8(0x000C) (Config, NeedCtorLink)
	struct FString                                     F22;                                                      // 0x08F4(0x000C) (Config, NeedCtorLink)
	struct FString                                     F23;                                                      // 0x0900(0x000C) (Config, NeedCtorLink)
	struct FString                                     F24;                                                      // 0x090C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown88;                                                // 0x0918(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown89;                                                // 0x0924(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown8A;                                                // 0x0930(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown8B;                                                // 0x093C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown8C;                                                // 0x0948(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown8D;                                                // 0x0954(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown8E;                                                // 0x0960(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown8F;                                                // 0x096C(0x000C) (Config, NeedCtorLink)
	struct FString                                     NumLock;                                                  // 0x0978(0x000C) (Config, NeedCtorLink)
	struct FString                                     ScrollLock;                                               // 0x0984(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown92;                                                // 0x0990(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown93;                                                // 0x099C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown94;                                                // 0x09A8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown95;                                                // 0x09B4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown96;                                                // 0x09C0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown97;                                                // 0x09CC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown98;                                                // 0x09D8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown99;                                                // 0x09E4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown9A;                                                // 0x09F0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown9B;                                                // 0x09FC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown9C;                                                // 0x0A08(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown9D;                                                // 0x0A14(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown9E;                                                // 0x0A20(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown9F;                                                // 0x0A2C(0x000C) (Config, NeedCtorLink)
	struct FString                                     LShift;                                                   // 0x0A38(0x000C) (Config, NeedCtorLink)
	struct FString                                     RShift;                                                   // 0x0A44(0x000C) (Config, NeedCtorLink)
	struct FString                                     LControl;                                                 // 0x0A50(0x000C) (Config, NeedCtorLink)
	struct FString                                     RControl;                                                 // 0x0A5C(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownA4;                                                // 0x0A68(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownA5;                                                // 0x0A74(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownA6;                                                // 0x0A80(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownA7;                                                // 0x0A8C(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownA8;                                                // 0x0A98(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownA9;                                                // 0x0AA4(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownAA;                                                // 0x0AB0(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownAB;                                                // 0x0ABC(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownAC;                                                // 0x0AC8(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownAD;                                                // 0x0AD4(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownAE;                                                // 0x0AE0(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownAF;                                                // 0x0AEC(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB0;                                                // 0x0AF8(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB1;                                                // 0x0B04(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB2;                                                // 0x0B10(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB3;                                                // 0x0B1C(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB4;                                                // 0x0B28(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB5;                                                // 0x0B34(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB6;                                                // 0x0B40(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB7;                                                // 0x0B4C(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownB8;                                                // 0x0B58(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unicode;                                                  // 0x0B64(0x000C) (Config, NeedCtorLink)
	struct FString                                     Semicolon;                                                // 0x0B70(0x000C) (Config, NeedCtorLink)
	struct FString                                     Equals;                                                   // 0x0B7C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Comma;                                                    // 0x0B88(0x000C) (Config, NeedCtorLink)
	struct FString                                     Minus;                                                    // 0x0B94(0x000C) (Config, NeedCtorLink)
	struct FString                                     Period;                                                   // 0x0BA0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Slash;                                                    // 0x0BAC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Tilde;                                                    // 0x0BB8(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC1;                                                // 0x0BC4(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC2;                                                // 0x0BD0(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC3;                                                // 0x0BDC(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC4;                                                // 0x0BE8(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC5;                                                // 0x0BF4(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC6;                                                // 0x0C00(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownC7;                                                // 0x0C0C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy1;                                                     // 0x0C18(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy2;                                                     // 0x0C24(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy3;                                                     // 0x0C30(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy4;                                                     // 0x0C3C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy5;                                                     // 0x0C48(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy6;                                                     // 0x0C54(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy7;                                                     // 0x0C60(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy8;                                                     // 0x0C6C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy9;                                                     // 0x0C78(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy10;                                                    // 0x0C84(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy11;                                                    // 0x0C90(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy12;                                                    // 0x0C9C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy13;                                                    // 0x0CA8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy14;                                                    // 0x0CB4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy15;                                                    // 0x0CC0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Joy16;                                                    // 0x0CCC(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownD8;                                                // 0x0CD8(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownD9;                                                // 0x0CE4(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownDA;                                                // 0x0CF0(0x000C) (Config, NeedCtorLink)
	struct FString                                     LeftBracket;                                              // 0x0CFC(0x000C) (Config, NeedCtorLink)
	struct FString                                     Backslash;                                                // 0x0D08(0x000C) (Config, NeedCtorLink)
	struct FString                                     RightBracket;                                             // 0x0D14(0x000C) (Config, NeedCtorLink)
	struct FString                                     SingleQuote;                                              // 0x0D20(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownDF;                                                // 0x0D2C(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownE0;                                                // 0x0D38(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownE1;                                                // 0x0D44(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownE2;                                                // 0x0D50(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownE3;                                                // 0x0D5C(0x000C) (Config, NeedCtorLink)
	struct FString                                     MouseX;                                                   // 0x0D68(0x000C) (Config, NeedCtorLink)
	struct FString                                     MouseY;                                                   // 0x0D74(0x000C) (Config, NeedCtorLink)
	struct FString                                     MouseZ;                                                   // 0x0D80(0x000C) (Config, NeedCtorLink)
	struct FString                                     MouseW;                                                   // 0x0D8C(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoyU;                                                     // 0x0D98(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoyV;                                                     // 0x0DA4(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoySlider1;                                               // 0x0DB0(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoySlider2;                                               // 0x0DBC(0x000C) (Config, NeedCtorLink)
	struct FString                                     MouseWheelUp;                                             // 0x0DC8(0x000C) (Config, NeedCtorLink)
	struct FString                                     MouseWheelDown;                                           // 0x0DD4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown10E;                                               // 0x0DE0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Unknown10F;                                               // 0x0DEC(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoyX;                                                     // 0x0DF8(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoyY;                                                     // 0x0E04(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoyZ;                                                     // 0x0E10(0x000C) (Config, NeedCtorLink)
	struct FString                                     JoyR;                                                     // 0x0E1C(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownF4;                                                // 0x0E28(0x000C) (Config, NeedCtorLink)
	struct FString                                     UnknownF5;                                                // 0x0E34(0x000C) (Config, NeedCtorLink)
	struct FString                                     Attn;                                                     // 0x0E40(0x000C) (Config, NeedCtorLink)
	struct FString                                     CrSel;                                                    // 0x0E4C(0x000C) (Config, NeedCtorLink)
	struct FString                                     ExSel;                                                    // 0x0E58(0x000C) (Config, NeedCtorLink)
	struct FString                                     ErEof;                                                    // 0x0E64(0x000C) (Config, NeedCtorLink)
	struct FString                                     Play;                                                     // 0x0E70(0x000C) (Config, NeedCtorLink)
	struct FString                                     zoom;                                                     // 0x0E7C(0x000C) (Config, NeedCtorLink)
	struct FString                                     NoName;                                                   // 0x0E88(0x000C) (Config, NeedCtorLink)
	struct FString                                     PA1;                                                      // 0x0E94(0x000C) (Config, NeedCtorLink)
	struct FString                                     OEMClear;                                                 // 0x0EA0(0x000C) (Config, NeedCtorLink)
	unsigned char                                      UnknownData00[0x1110];                                    // 0x0EAC(0x1110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Input");
		return ptr;
	}

};


// Class Engine.CameraEffect
// 0x0008 (0x003C - 0x0034)
class UCameraEffect : public UObject
{
public:
	float                                              Alpha;                                                    // 0x0034(0x0004)
	unsigned long                                      FinalEffect : 1;                                          // 0x0038(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraEffect");
		return ptr;
	}

};


// Class Engine.HDREffect
// 0x003C (0x0078 - 0x003C)
class UHDREffect : public UCameraEffect
{
public:
	int                                                RenderTargets[0x7];                                       // 0x003C(0x0004) (Const)
	float                                              HDRTimeStamp;                                             // 0x0058(0x0004)
	int                                                idxCurLum;                                                // 0x005C(0x0004)
	float                                              GrayLum;                                                  // 0x0060(0x0004)
	float                                              FinalCoef;                                                // 0x0064(0x0004)
	float                                              ExpBase;                                                  // 0x0068(0x0004)
	float                                              ExpCoef;                                                  // 0x006C(0x0004)
	float                                              ClampMin;                                                 // 0x0070(0x0004)
	float                                              ClampMax;                                                 // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HDREffect");
		return ptr;
	}

};


// Class Engine.L2SeamlessInfo
// 0x001C (0x03D8 - 0x03BC)
class AL2SeamlessInfo : public AInfo
{
public:
	float                                              AffectRange;                                              // 0x03BC(0x0004) (Edit)
	int                                                MapX;                                                     // 0x03C0(0x0004) (Edit)
	int                                                MapY;                                                     // 0x03C4(0x0004) (Edit)
	struct FVector                                     AffectBox;                                                // 0x03C8(0x000C) (Edit)
	unsigned long                                      bUseAffectBox : 1;                                        // 0x03D4(0x0004) (Edit)
	unsigned long                                      bLoaded : 1;                                              // 0x03D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2SeamlessInfo");
		return ptr;
	}

};


// Class Engine.Engine
// 0x017C (0x01B4 - 0x0038)
class UEngine : public USubsystem
{
public:
	class UClass*                                      AudioDevice;                                              // 0x0038(0x0004) (Edit, Config)
	class UClass*                                      FlashDevice;                                              // 0x003C(0x0004) (Edit, Config)
	class UClass*                                      Console;                                                  // 0x0040(0x0004) (Edit, Config)
	class UClass*                                      DefaultMenu;                                              // 0x0044(0x0004) (Edit, Config)
	class UClass*                                      DefaultPlayerMenu;                                        // 0x0048(0x0004) (Edit, Config)
	class UClass*                                      NetworkDevice;                                            // 0x004C(0x0004) (Edit, Config)
	class UClass*                                      Language;                                                 // 0x0050(0x0004) (Edit, Config)
	class UPrimitive*                                  Cylinder;                                                 // 0x0054(0x0004)
	class UClient*                                     Client;                                                   // 0x0058(0x0004) (Const)
	class UAudioSubsystem*                             Audio;                                                    // 0x005C(0x0004) (Const)
	class UFlashSubsystem*                             Flash;                                                    // 0x0060(0x0004) (Const)
	class URenderDevice*                               GRenDev;                                                  // 0x0064(0x0004) (Const)
	class UClass*                                      Network;                                                  // 0x0068(0x0004) (Config)
	int                                                bWaitNetCommand;                                          // 0x006C(0x0004)
	class UClass*                                      NConsoleClass;                                            // 0x0070(0x0004) (Config)
	class UClass*                                      NTimer;                                                   // 0x0074(0x0004) (Config)
	class UClass*                                      OrcBabo;                                                  // 0x0078(0x0004) (Config)
	int                                                bOrcCheck;                                                // 0x007C(0x0004)
	int                                                bShowFrameRate;                                           // 0x0080(0x0004)
	int                                                bShowRenderStats;                                         // 0x0084(0x0004)
	int                                                bShowHardwareStats;                                       // 0x0088(0x0004)
	int                                                bShowGameStats;                                           // 0x008C(0x0004)
	int                                                bShowNetStats;                                            // 0x0090(0x0004)
	int                                                bShowAnimStats;                                           // 0x0094(0x0004)
	int                                                bShowHistograph;                                          // 0x0098(0x0004)
	int                                                bShowXboxMemStats;                                        // 0x009C(0x0004)
	int                                                bShowMatineeStats;                                        // 0x00A0(0x0004)
	int                                                bShowAudioStats;                                          // 0x00A4(0x0004)
	int                                                bShowLightStats;                                          // 0x00A8(0x0004)
	int                                                bShowL2Stats;                                             // 0x00AC(0x0004)
	int                                                bShowL2MemStats;                                          // 0x00B0(0x0004)
	int                                                bShowL2ServerPacketStats;                                 // 0x00B4(0x0004)
	int                                                bShowL2ServerExPacketStats;                               // 0x00B8(0x0004)
	int                                                bShowL2ThreadStats;                                       // 0x00BC(0x0004)
	int                                                bShowScriptStats;                                         // 0x00C0(0x0004)
	int                                                bShowScenePlayerStats;                                    // 0x00C4(0x0004)
	int                                                TickCycles;                                               // 0x00C8(0x0004)
	int                                                GameCycles;                                               // 0x00CC(0x0004)
	int                                                ClientCycles;                                             // 0x00D0(0x0004)
	int                                                CacheSizeMegs;                                            // 0x00D4(0x0004) (Edit, Config)
	unsigned long                                      UseSound : 1;                                             // 0x00D8(0x0004) (Edit, Config)
	float                                              CurrentTickRate;                                          // 0x00DC(0x0004) (Edit)
	float                                              MaxTickRate;                                              // 0x00E0(0x0004) (Edit)
	float                                              MinTickRate;                                              // 0x00E4(0x0004) (Edit)
	float                                              AverageTickRate;                                          // 0x00E8(0x0004) (Edit)
	int                                                TotalFrame;                                               // 0x00EC(0x0004) (Edit)
	int                                                bHideCompass;                                             // 0x00F0(0x0004) (Edit)
	int                                                bTurnOnCompass;                                           // 0x00F4(0x0004)
	int                                                bShowConsoleTime;                                         // 0x00F8(0x0004)
	int                                                ConsoleDrawTime;                                          // 0x00FC(0x0004)
	struct FColor                                      DefaultWaterVolumeColor;                                  // 0x0100(0x0004)
	float                                              DefaultWaterFogStart;                                     // 0x0104(0x0004)
	float                                              DefaultWaterFogEnd;                                       // 0x0108(0x0004)
	int                                                CurrentRealTimeShadowIndex;                               // 0x010C(0x0004)
	unsigned long                                      bStopDraw : 1;                                            // 0x0110(0x0004)
	struct FColor                                      C_WorldBox;                                               // 0x0114(0x0004) (Edit, Config)
	struct FColor                                      C_GroundPlane;                                            // 0x0118(0x0004) (Edit, Config)
	struct FColor                                      C_GroundHighlight;                                        // 0x011C(0x0004) (Edit, Config)
	struct FColor                                      C_BrushWire;                                              // 0x0120(0x0004) (Edit, Config)
	struct FColor                                      C_Pivot;                                                  // 0x0124(0x0004) (Edit, Config)
	struct FColor                                      C_Select;                                                 // 0x0128(0x0004) (Edit, Config)
	struct FColor                                      C_Current;                                                // 0x012C(0x0004) (Edit, Config)
	struct FColor                                      C_AddWire;                                                // 0x0130(0x0004) (Edit, Config)
	struct FColor                                      C_SubtractWire;                                           // 0x0134(0x0004) (Edit, Config)
	struct FColor                                      C_GreyWire;                                               // 0x0138(0x0004) (Edit, Config)
	struct FColor                                      C_BrushVertex;                                            // 0x013C(0x0004) (Edit, Config)
	struct FColor                                      C_BrushSnap;                                              // 0x0140(0x0004) (Edit, Config)
	struct FColor                                      C_Invalid;                                                // 0x0144(0x0004) (Edit, Config)
	struct FColor                                      C_ActorWire;                                              // 0x0148(0x0004) (Edit, Config)
	struct FColor                                      C_ActorHiWire;                                            // 0x014C(0x0004) (Edit, Config)
	struct FColor                                      C_Black;                                                  // 0x0150(0x0004) (Edit, Config)
	struct FColor                                      C_White;                                                  // 0x0154(0x0004) (Edit, Config)
	struct FColor                                      C_Mask;                                                   // 0x0158(0x0004) (Edit, Config)
	struct FColor                                      C_SemiSolidWire;                                          // 0x015C(0x0004) (Edit, Config)
	struct FColor                                      C_NonSolidWire;                                           // 0x0160(0x0004) (Edit, Config)
	struct FColor                                      C_WireBackground;                                         // 0x0164(0x0004) (Edit, Config)
	struct FColor                                      C_WireGridAxis;                                           // 0x0168(0x0004) (Edit, Config)
	struct FColor                                      C_ActorArrow;                                             // 0x016C(0x0004) (Edit, Config)
	struct FColor                                      C_ScaleBox;                                               // 0x0170(0x0004) (Edit, Config)
	struct FColor                                      C_ScaleBoxHi;                                             // 0x0174(0x0004) (Edit, Config)
	struct FColor                                      C_ZoneWire;                                               // 0x0178(0x0004) (Edit, Config)
	struct FColor                                      C_Mover;                                                  // 0x017C(0x0004) (Edit, Config)
	struct FColor                                      C_OrthoBackground;                                        // 0x0180(0x0004) (Edit, Config)
	struct FColor                                      C_StaticMesh;                                             // 0x0184(0x0004) (Edit, Config)
	struct FColor                                      C_VolumeBrush;                                            // 0x0188(0x0004) (Edit, Config)
	struct FColor                                      C_ConstraintLine;                                         // 0x018C(0x0004) (Edit, Config)
	struct FColor                                      C_AnimMesh;                                               // 0x0190(0x0004) (Edit, Config)
	struct FColor                                      C_TerrainWire;                                            // 0x0194(0x0004) (Edit, Config)
	int                                                L2Fog;                                                    // 0x0198(0x0004)
	int                                                L2Sky;                                                    // 0x019C(0x0004)
	int                                                bNextTargetLock;                                          // 0x01A0(0x0004)
	int                                                ReplayManager;                                            // 0x01A4(0x0004)
	TArray<struct FFWind>                              Wind;                                                     // 0x01A8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0200 (0x03B4 - 0x01B4)
class UGameEngine : public UEngine
{
public:
	class ULevel*                                      GLevel;                                                   // 0x01B4(0x0004)
	class ULevel*                                      GEntry;                                                   // 0x01B8(0x0004)
	class ULevel*                                      GSkyLevel;                                                // 0x01BC(0x0004)
	class UPendingLevel*                               GPendingLevel;                                            // 0x01C0(0x0004)
	struct FURL                                        LastURL;                                                  // 0x01C4(0x0044) (NeedCtorLink)
	TArray<struct FString>                             ServerActors;                                             // 0x0208(0x000C) (Config, NeedCtorLink)
	TArray<struct FString>                             ServerPackages;                                           // 0x0214(0x000C) (Config, NeedCtorLink)
	TArray<class UObject*>                             DummyArray;                                               // 0x0220(0x000C) (NeedCtorLink)
	class UObject*                                     DummyObject;                                              // 0x022C(0x0004)
	int                                                LastHitObject;                                            // 0x0230(0x0004)
	unsigned long                                      bClicked : 1;                                             // 0x0234(0x0004)
	float                                              ClickedMouseX;                                            // 0x0238(0x0004)
	float                                              ClickedMouseY;                                            // 0x023C(0x0004)
	struct FVector                                     ClickLocation;                                            // 0x0240(0x000C)
	struct FVector                                     ClickRelativeLocation;                                    // 0x024C(0x000C)
	struct FPlane                                      ClickPlane;                                               // 0x0258(0x0010)
	class AActor*                                      ClickActor;                                               // 0x0268(0x0004)
	int                                                StartTempNpcID;                                           // 0x026C(0x0004)
	int                                                EndTempNpcID;                                             // 0x0270(0x0004)
	int                                                CurrentTempNpcID;                                         // 0x0274(0x0004)
	float                                              AvgFPS;                                                   // 0x0278(0x0004)
	float                                              LastDeltaTime;                                            // 0x027C(0x0004)
	float                                              LastDeltaSeconds[0x1E];                                   // 0x0280(0x0004)
	int                                                CurTickIndex;                                             // 0x02F8(0x0004)
	class UObject*                                     pFontManager;                                             // 0x02FC(0x0004)
	TArray<int>                                        LoadingMap;                                               // 0x0300(0x000C) (NeedCtorLink)
	TArray<int>                                        CommandMacro;                                             // 0x030C(0x000C) (NeedCtorLink)
	int                                                LandMark;                                                 // 0x0318(0x0004)
	unsigned long                                      bUseUnderWaterEffect : 1;                                 // 0x031C(0x0004)
	float                                              FadeTime;                                                 // 0x0320(0x0004)
	unsigned long                                      bFadeOut : 1;                                             // 0x0324(0x0004)
	float                                              FadeElaspedTime;                                          // 0x0328(0x0004)
	unsigned long                                      bFadeIn : 1;                                              // 0x032C(0x0004)
	struct FColor                                      FadeColor;                                                // 0x0330(0x0004)
	int                                                nFadeType;                                                // 0x0334(0x0004)
	unsigned long                                      bPlayerObserverMode : 1;                                  // 0x0338(0x0004)
	struct FVector                                     TeleportLoc;                                              // 0x033C(0x000C)
	class AActor*                                      TeleportTargetActor;                                      // 0x0348(0x0004)
	unsigned long                                      bTimeCheck : 1;                                           // 0x034C(0x0004)
	int                                                RequestedTime;                                            // 0x0350(0x0004)
	int                                                ElapsedTimeCheck;                                         // 0x0354(0x0004)
	float                                              MusicMaxTime;                                             // 0x0358(0x0004)
	float                                              DefaultMusicMaxTime;                                      // 0x035C(0x0004)
	float                                              BlackOutDuration;                                         // 0x0360(0x0004)
	float                                              FadeInTime;                                               // 0x0364(0x0004)
	unsigned long                                      bLazyMode : 1;                                            // 0x0368(0x0004)
	int                                                UnderWaterEffect;                                         // 0x036C(0x0004)
	unsigned long                                      bAttachedUnderWaterEffect : 1;                            // 0x0370(0x0004)
	int                                                InspectorCount;                                           // 0x0374(0x0004)
	int                                                InspectorParams;                                          // 0x0378(0x0004)
	class UClass*                                      InspectorClass;                                           // 0x037C(0x0004)
	TArray<class UObject*>                             CameraEffects;                                            // 0x0380(0x000C) (NeedCtorLink)
	int                                                AuthData[0x4];                                            // 0x038C(0x0004)
	unsigned long                                      bConnectionClosed : 1;                                    // 0x039C(0x0004)
	unsigned long                                      bAuthDataFlag : 1;                                        // 0x039C(0x0004)
	class UObject*                                     DOFEffect;                                                // 0x03A0(0x0004)
	class UObject*                                     HDREffect;                                                // 0x03A4(0x0004)
	class UObject*                                     GlowEffect;                                               // 0x03A8(0x0004)
	float                                              fElapsedTime;                                             // 0x03AC(0x0004)
	int                                                pSceneManager;                                            // 0x03B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0010 (0x0044 - 0x0034)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0034(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.Font
// 0x0034 (0x0068 - 0x0034)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0034(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.FluidSurfaceOscillator
// 0x0018 (0x03D4 - 0x03BC)
class AFluidSurfaceOscillator : public AActor
{
public:
	class AFluidSurfaceInfo*                           FluidInfo;                                                // 0x03BC(0x0004) (Edit)
	float                                              Frequency;                                                // 0x03C0(0x0004) (Edit)
	unsigned char                                      Phase;                                                    // 0x03C4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	float                                              Strength;                                                 // 0x03C8(0x0004) (Edit)
	float                                              Radius;                                                   // 0x03CC(0x0004) (Edit)
	float                                              OscTime;                                                  // 0x03D0(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceOscillator");
		return ptr;
	}

};


// Class Engine.FluidSurfacePrimitive
// 0x0004 (0x0064 - 0x0060)
class UFluidSurfacePrimitive : public UPrimitive
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0060(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfacePrimitive");
		return ptr;
	}

};


// Class Engine.FluidSurfaceInfo
// 0x0104 (0x04C0 - 0x03BC)
class AFluidSurfaceInfo : public AInfo
{
public:
	TEnumAsByte<EFluidGridType>                        FluidGridType;                                            // 0x03BC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              FluidGridSpacing;                                         // 0x03C0(0x0004) (Edit)
	int                                                FluidXSize;                                               // 0x03C4(0x0004) (Edit)
	int                                                FluidYSize;                                               // 0x03C8(0x0004) (Edit)
	float                                              FluidHeightScale;                                         // 0x03CC(0x0004) (Edit)
	float                                              FluidSpeed;                                               // 0x03D0(0x0004) (Edit)
	float                                              FluidDamping;                                             // 0x03D4(0x0004) (Edit)
	float                                              FluidNoiseFrequency;                                      // 0x03D8(0x0004) (Edit)
	struct FRange                                      FluidNoiseStrength;                                       // 0x03DC(0x0008) (Edit)
	unsigned long                                      TestRipple : 1;                                           // 0x03E4(0x0004) (Edit)
	float                                              TestRippleSpeed;                                          // 0x03E8(0x0004) (Edit)
	float                                              TestRippleStrength;                                       // 0x03EC(0x0004) (Edit)
	float                                              TestRippleRadius;                                         // 0x03F0(0x0004) (Edit)
	float                                              UTiles;                                                   // 0x03F4(0x0004) (Edit)
	float                                              UOffset;                                                  // 0x03F8(0x0004) (Edit)
	float                                              VTiles;                                                   // 0x03FC(0x0004) (Edit)
	float                                              VOffset;                                                  // 0x0400(0x0004) (Edit)
	float                                              AlphaCurveScale;                                          // 0x0404(0x0004) (Edit)
	float                                              AlphaHeightScale;                                         // 0x0408(0x0004) (Edit)
	unsigned char                                      AlphaMax;                                                 // 0x040C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              ShootStrength;                                            // 0x0410(0x0004) (Edit)
	float                                              ShootRadius;                                              // 0x0414(0x0004) (Edit)
	float                                              RippleVelocityFactor;                                     // 0x0418(0x0004) (Edit)
	float                                              TouchStrength;                                            // 0x041C(0x0004) (Edit)
	class UClass*                                      ShootEffect;                                              // 0x0420(0x0004) (Edit)
	unsigned long                                      OrientShootEffect : 1;                                    // 0x0424(0x0004) (Edit)
	class UClass*                                      TouchEffect;                                              // 0x0428(0x0004) (Edit)
	unsigned long                                      OrientTouchEffect : 1;                                    // 0x042C(0x0004) (Edit)
	TArray<int>                                        ClampBitmap;                                              // 0x0430(0x000C) (Const, NeedCtorLink)
	class ATerrainInfo*                                ClampTerrain;                                             // 0x043C(0x0004) (Edit)
	unsigned long                                      bShowBoundingBox : 1;                                     // 0x0440(0x0004) (Edit)
	unsigned long                                      bUseNoRenderZ : 1;                                        // 0x0440(0x0004) (Edit)
	float                                              NoRenderZ;                                                // 0x0444(0x0004) (Edit)
	float                                              WarmUpTime;                                               // 0x0448(0x0004) (Edit)
	float                                              UpdateRate;                                               // 0x044C(0x0004) (Edit)
	struct FColor                                      FluidColor;                                               // 0x0450(0x0004) (Edit)
	TArray<float>                                      Verts0;                                                   // 0x0454(0x000C) (Const, Transient, NeedCtorLink)
	TArray<float>                                      Verts1;                                                   // 0x0460(0x000C) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              VertAlpha;                                                // 0x046C(0x000C) (Const, Transient, NeedCtorLink)
	int                                                LatestVerts;                                              // 0x0478(0x0004) (Const, Transient)
	struct FBox                                        FluidBoundingBox;                                         // 0x047C(0x001C) (Const, Transient)
	struct FVector                                     FluidOrigin;                                              // 0x0498(0x000C) (Const, Transient)
	float                                              TimeRollover;                                             // 0x04A4(0x0004) (Const, Transient)
	float                                              TestRippleAng;                                            // 0x04A8(0x0004) (Const, Transient)
	class UFluidSurfacePrimitive*                      Primitive;                                                // 0x04AC(0x0004) (Const, Transient)
	TArray<class AFluidSurfaceOscillator*>             Oscillators;                                              // 0x04B0(0x000C) (Const, Transient, NeedCtorLink)
	unsigned long                                      bHasWarmedUp : 1;                                         // 0x04BC(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceInfo");
		return ptr;
	}


	void Touch(class AActor* Other);
	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void Pling(const struct FVector& Position, float Strength, float Radius);
};


// Class Engine.FlashSubsystem
// 0x0000 (0x0038 - 0x0038)
class UFlashSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FlashSubsystem");
		return ptr;
	}

};


// Class Engine.GlobalTempObjects
// 0x000C (0x0040 - 0x0034)
class UGlobalTempObjects : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GlobalTempObjects");
		return ptr;
	}

};


// Class Engine.SaveReplayResourceCommandlet
// 0x0000 (0x01E8 - 0x01E8)
class USaveReplayResourceCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveReplayResourceCommandlet");
		return ptr;
	}

};


// Class Engine.ConvertOggCommandlet
// 0x0000 (0x01E8 - 0x01E8)
class UConvertOggCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ConvertOggCommandlet");
		return ptr;
	}

};


// Class Engine.XMLConvertCommandlet
// 0x0000 (0x01E8 - 0x01E8)
class UXMLConvertCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.XMLConvertCommandlet");
		return ptr;
	}

};


// Class Engine.ScriptConvertCommandlet
// 0x0000 (0x01E8 - 0x01E8)
class UScriptConvertCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptConvertCommandlet");
		return ptr;
	}

};


// Class Engine.ServerDataConvertCommandlet
// 0x0000 (0x01E8 - 0x01E8)
class UServerDataConvertCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerDataConvertCommandlet");
		return ptr;
	}

};


// Class Engine.MasterMD5Commandlet
// 0x0010 (0x01F8 - 0x01E8)
class UMasterMD5Commandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MasterMD5Commandlet");
		return ptr;
	}

};


// Class Engine.ServerCommandlet
// 0x0000 (0x01E8 - 0x01E8)
class UServerCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerCommandlet");
		return ptr;
	}

};


// Class Engine.RenderDevice
// 0x0094 (0x00CC - 0x0038)
class URenderDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0040(0x000C) (Config, NeedCtorLink)
	int                                                DescFlags;                                                // 0x004C(0x0004) (Config)
	unsigned long                                      HighDetailActors : 1;                                     // 0x0050(0x0004) (Config)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0050(0x0001)
	unsigned long                                      SuperHighDetailActors : 1;                                // 0x0054(0x0004) (Config)
	unsigned long                                      UnknownData02 : 31;                                       // 0x0054(0x0001)
	unsigned long                                      DetailTextures : 1;                                       // 0x0058(0x0004) (Config)
	unsigned char                                      UnknownData03[0xC];                                       // 0x005C(0x000C) MISSED OFFSET
	unsigned long                                      UseCompressedLightmaps : 1;                               // 0x0068(0x0004) (Config)
	unsigned long                                      UnknownData04 : 31;                                       // 0x0068(0x0001)
	unsigned long                                      UseStencil : 1;                                           // 0x006C(0x0004) (Config)
	unsigned long                                      UnknownData05 : 31;                                       // 0x006C(0x0001)
	unsigned long                                      Use16bit : 1;                                             // 0x0070(0x0004) (Config)
	unsigned long                                      UnknownData06 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      Use16bitTextures : 1;                                     // 0x0074(0x0004) (Config)
	unsigned char                                      UnknownData07[0x54];                                      // 0x0078(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RenderDevice");
		return ptr;
	}

};


// Class Engine.DOFEffect
// 0x0064 (0x00A0 - 0x003C)
class UDOFEffect : public UCameraEffect
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x003C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFEffect");
		return ptr;
	}

};


// Class Engine.ConvexVolume
// 0x0034 (0x0094 - 0x0060)
class UConvexVolume : public UPrimitive
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0060(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ConvexVolume");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0058 (0x008C - 0x0034)
class UPlayerInput : public UObject
{
public:
	unsigned long                                      bInvertMouse : 1;                                         // 0x0034(0x0004) (Config, GlobalConfig)
	unsigned long                                      bWasForward : 1;                                          // 0x0034(0x0004)
	unsigned long                                      bWasBack : 1;                                             // 0x0034(0x0004)
	unsigned long                                      bWasLeft : 1;                                             // 0x0034(0x0004)
	unsigned long                                      bWasRight : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bEdgeForward : 1;                                         // 0x0034(0x0004)
	unsigned long                                      bEdgeBack : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bEdgeLeft : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bEdgeRight : 1;                                           // 0x0034(0x0004)
	unsigned long                                      bAdjustSampling : 1;                                      // 0x0034(0x0004)
	unsigned char                                      MouseSmoothingMode;                                       // 0x0038(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              MouseSmoothingStrength;                                   // 0x003C(0x0004) (Config, GlobalConfig)
	float                                              MouseSensitivity;                                         // 0x0040(0x0004) (Config, GlobalConfig)
	float                                              MouseSamplingTime;                                        // 0x0044(0x0004) (Config, GlobalConfig)
	float                                              MouseAccelThreshold;                                      // 0x0048(0x0004) (Config, GlobalConfig)
	float                                              SmoothedMouse[0x2];                                       // 0x004C(0x0004)
	float                                              ZeroTime[0x2];                                            // 0x0054(0x0004)
	float                                              SamplingTime[0x2];                                        // 0x005C(0x0004)
	float                                              MaybeTime[0x2];                                           // 0x0064(0x0004)
	float                                              OldSamples[0x4];                                          // 0x006C(0x0004)
	int                                                MouseSamples[0x2];                                        // 0x007C(0x0004)
	float                                              DoubleClickTimer;                                         // 0x0084(0x0004)
	float                                              DoubleClickTime;                                          // 0x0088(0x0004) (Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	TEnumAsByte<EDoubleClickDir> CheckForDoubleClickMove(float DeltaTime);
	void ChangeSnapView(bool B);
	void UpdateSmoothing(int Mode);
	void UpdateAccel(float f);
	void UpdateSensitivity(float f);
	float SmoothMouse(float aMouse, float DeltaTime, int Index, unsigned char* SampleCount);
	float AccelerateMouse(float aMouse);
	void SetSmoothingStrength(float f);
	void SetSmoothingMode(unsigned char B);
	void PlayerInput(float DeltaTime);
	bool InvertLook();
};


// Class Engine.CheatManager
// 0x000C (0x0040 - 0x0034)
class UCheatManager : public UObject
{
public:
	struct FRotator                                    LockedRotation;                                           // 0x0034(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void AllWeapons();
	void Loaded();
	void ViewClass(class UClass* aClass, bool bQuiet, bool bCheat);
	void ViewBot();
	void ViewFlag();
	void ViewActor(const struct FName& ActorName);
	void ViewPlayer(const struct FString& S);
	void ViewSelf(bool bQuiet);
	void RememberSpot();
	void CheatView(class UClass* aClass, bool bQuiet);
	void PlayersOnly();
	void Summon(const struct FString& ClassName);
	void Avatar(const struct FString& ClassName);
	void KillPawns();
	void KillAllPawns(class UClass* aClass);
	void KillAll(class UClass* aClass);
	void SetSpeed(float f);
	void SetGravity(float f);
	void SetJumpZ(float f);
	void SloMo(float t);
	void God();
	void Invisible(bool B);
	void AllAmmo();
	void Ghost();
	void Walk();
	void Fly();
	void Amphibious();
	void CauseEvent(const struct FName& EventName);
	void FreeCamera(bool B);
	void EndPath();
	void SetCameraDist(float f);
	void LockCamera();
	void ChangeSize(float f);
	void Teleport();
	void LogScriptedSequences();
	void KillViewedActor();
	void SetFogB(float f);
	void SetFogG(float f);
	void SetFogR(float f);
	void SetFlash(float f);
	void WriteToLog();
	void FreezeFrame(float Delay);
	void ListDynamicActors();
	void ReviewJumpSpots(const struct FName& TestLabel);
};


// Class Engine.Canvas
// 0x0100 (0x0134 - 0x0034)
class UCanvas : public UObject
{
public:
	int                                                m_CapturingSplit9Tex;                                     // 0x0034(0x0004)
	int                                                m_Split9TexCaptureList;                                   // 0x0038(0x0004)
	class UFont*                                       Font;                                                     // 0x003C(0x0004)
	float                                              SpaceX;                                                   // 0x0040(0x0004)
	float                                              SpaceY;                                                   // 0x0044(0x0004)
	float                                              OrgX;                                                     // 0x0048(0x0004)
	float                                              OrgY;                                                     // 0x004C(0x0004)
	float                                              ClipX;                                                    // 0x0050(0x0004)
	float                                              ClipY;                                                    // 0x0054(0x0004)
	float                                              CurX;                                                     // 0x0058(0x0004)
	float                                              CurY;                                                     // 0x005C(0x0004)
	float                                              Z;                                                        // 0x0060(0x0004)
	unsigned char                                      Style;                                                    // 0x0064(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              CurYL;                                                    // 0x0068(0x0004)
	struct FColor                                      DrawColor;                                                // 0x006C(0x0004)
	unsigned long                                      bCenter : 1;                                              // 0x0070(0x0004)
	unsigned long                                      bNoSmooth : 1;                                            // 0x0070(0x0004)
	int                                                SizeX;                                                    // 0x0074(0x0004) (Const)
	int                                                SizeY;                                                    // 0x0078(0x0004) (Const)
	class UFont*                                       TinyFont;                                                 // 0x007C(0x0004)
	class UFont*                                       SmallFont;                                                // 0x0080(0x0004)
	class UFont*                                       MedFont;                                                  // 0x0084(0x0004)
	struct FString                                     TinyFontName;                                             // 0x0088(0x000C) (NeedCtorLink)
	struct FString                                     SmallFontName;                                            // 0x0094(0x000C) (NeedCtorLink)
	struct FString                                     MedFontName;                                              // 0x00A0(0x000C) (NeedCtorLink)
	class UViewport*                                   Viewport;                                                 // 0x00AC(0x0004) (Const)
	int                                                pCanvasUtil;                                              // 0x00B0(0x0004) (Const)
	unsigned long                                      m_IsClipped : 1;                                          // 0x00B4(0x0004)
	float                                              m_OldCurX;                                                // 0x00B8(0x0004)
	float                                              m_OldCurY;                                                // 0x00BC(0x0004)
	float                                              m_OldOrgX;                                                // 0x00C0(0x0004)
	float                                              m_OldOrgY;                                                // 0x00C4(0x0004)
	float                                              m_OldClipX;                                               // 0x00C8(0x0004)
	float                                              m_OldClipY;                                               // 0x00CC(0x0004)
	class UFont*                                       m_L2Font[0x3];                                            // 0x00D0(0x0004)
	class UTexture*                                    pChatBack1_1;                                             // 0x00DC(0x0004)
	class UTexture*                                    pChatBack1_2;                                             // 0x00E0(0x0004)
	class UTexture*                                    pChatBack1_3;                                             // 0x00E4(0x0004)
	class UTexture*                                    pChatBack1_4;                                             // 0x00E8(0x0004)
	class UTexture*                                    pChatBack1_5;                                             // 0x00EC(0x0004)
	class UTexture*                                    pChatBack1_6;                                             // 0x00F0(0x0004)
	class UTexture*                                    pChatBack1_7;                                             // 0x00F4(0x0004)
	class UTexture*                                    pChatBack1_8;                                             // 0x00F8(0x0004)
	class UTexture*                                    pChatBack1_9;                                             // 0x00FC(0x0004)
	class UTexture*                                    pChatBack1_10;                                            // 0x0100(0x0004)
	class UTexture*                                    pChatBack2_1;                                             // 0x0104(0x0004)
	class UTexture*                                    pChatBack2_2;                                             // 0x0108(0x0004)
	class UTexture*                                    pChatBack2_3;                                             // 0x010C(0x0004)
	class UTexture*                                    pChatBack2_4;                                             // 0x0110(0x0004)
	int                                                m_pViewportWindowRenderTarget[0x2];                       // 0x0114(0x0004)
	float                                              m_fRecordMarkTimer;                                       // 0x011C(0x0004)
	class UTexture*                                    m_pReplayRecordTimerTex;                                  // 0x0120(0x0004)
	float                                              m_fTimePerFont;                                           // 0x0124(0x0004)
	float                                              m_fStartTime;                                             // 0x0128(0x0004)
	int                                                m_nTextIndex;                                             // 0x012C(0x0004)
	unsigned long                                      m_bTextAnim : 1;                                          // 0x0130(0x0004)
	unsigned long                                      m_bTextEnd : 1;                                           // 0x0130(0x0004)
	unsigned long                                      m_bFirstTextAnim : 1;                                     // 0x0130(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	void DrawBox(class UCanvas* Canvas, float Width, float Height);
	void DrawBracket(float Width, float Height, float bracket_size);
	void DrawLine(int Direction, float Size);
	void DrawHorizontal(float Y, float Width);
	void DrawVertical(float X, float Height);
	struct FColor MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	void SetDrawColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	void DrawRect(class UTexture* Tex, float RectX, float RectY);
	void DrawIcon(class UTexture* Tex, float Scale);
	void DrawPattern(class UMaterial* Tex, float XL, float YL, float Scale);
	void SetClip(float X, float Y);
	void SetOrigin(float X, float Y);
	void SetPos(float X, float Y);
	void Reset();
	void DrawTextJustified(const struct FString& String, unsigned char Justification, float x1, float y1, float x2, float y2);
	void DrawTileScaled(class UMaterial* mat, float XScale, float YScale);
	void DrawTileJustified(class UMaterial* mat, unsigned char Justification, float XL, float YL);
	void DrawTileStretched(class UMaterial* mat, float XL, float YL);
	void WrapStringToArray(const struct FString& Text, float dx, const struct FString& EOL, TArray<struct FString>* OutArray);
	void DrawPortal(int X, int Y, int Width, int Height, class AActor* CamActor, const struct FVector& CamLocation, const struct FRotator& CamRotation, int FOV, bool ClearZ);
	void TextSize(const struct FString& String, float* XL, float* YL);
	void DrawTextClipped(const struct FString& Text, bool bCheckHotKey);
	void DrawTileClipped(class UMaterial* mat, float XL, float YL, float U, float V, float UL, float VL);
	void DrawActor(class AActor* A, bool Wireframe, bool ClearZ, float DisplayFOV);
	void DrawTile(class UMaterial* mat, float XL, float YL, float U, float V, float UL, float VL);
	void DrawText(const struct FString& Text, bool CR);
	void StrLen(const struct FString& String, float* XL, float* YL);
};


// Class Engine.L2Radar
// 0x0004 (0x03C0 - 0x03BC)
class AL2Radar : public AActor
{
public:
	int                                                type;                                                     // 0x03BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Radar");
		return ptr;
	}

};


// Class Engine.L2Font
// 0x0000 (0x0038 - 0x0038)
class UL2Font : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Font");
		return ptr;
	}

};


// Class Engine.L2TextureFactory
// 0x0000 (0x0074 - 0x0074)
class UL2TextureFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2TextureFactory");
		return ptr;
	}

};


// Class Engine.Client
// 0x0084 (0x00B8 - 0x0034)
class UClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0034(0x0010) MISSED OFFSET
	unsigned long                                      CaptureMouse : 1;                                         // 0x0044(0x0004) (Config)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0044(0x0001)
	unsigned long                                      ScreenFlashes : 1;                                        // 0x0048(0x0004) (Config)
	unsigned long                                      UnknownData02 : 31;                                       // 0x0048(0x0001)
	unsigned long                                      NoLighting : 1;                                           // 0x004C(0x0004) (Config)
	unsigned long                                      UnknownData03 : 31;                                       // 0x004C(0x0001)
	unsigned long                                      Decals : 1;                                               // 0x0050(0x0004) (Config)
	unsigned long                                      UnknownData04 : 31;                                       // 0x0050(0x0001)
	unsigned long                                      NoDynamicLights : 1;                                      // 0x0054(0x0004) (Config)
	unsigned long                                      UnknownData05 : 31;                                       // 0x0054(0x0001)
	unsigned long                                      NoFractalAnim : 1;                                        // 0x0058(0x0004) (Config)
	unsigned long                                      UnknownData06 : 31;                                       // 0x0058(0x0001)
	unsigned long                                      Coronas : 1;                                              // 0x005C(0x0004) (Config)
	unsigned long                                      UnknownData07 : 31;                                       // 0x005C(0x0001)
	unsigned long                                      DecoLayers : 1;                                           // 0x0060(0x0004) (Config)
	unsigned long                                      UnknownData08 : 31;                                       // 0x0060(0x0001)
	unsigned long                                      Projectors : 1;                                           // 0x0064(0x0004) (Config)
	unsigned long                                      UnknownData09 : 31;                                       // 0x0064(0x0001)
	unsigned long                                      ReportDynamicUploads : 1;                                 // 0x0068(0x0004) (Config)
	int                                                WindowedViewportX;                                        // 0x006C(0x0004) (Config)
	int                                                WindowedViewportY;                                        // 0x0070(0x0004) (Config)
	int                                                FullscreenViewportX;                                      // 0x0074(0x0004) (Config)
	int                                                FullscreenViewportY;                                      // 0x0078(0x0004) (Config)
	float                                              Brightness;                                               // 0x007C(0x0004) (Config)
	float                                              Contrast;                                                 // 0x0080(0x0004) (Config)
	float                                              Gamma;                                                    // 0x0084(0x0004) (Config)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0088(0x0004) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailWorld;                                       // 0x008C(0x0001) (Config)
	unsigned char                                      UnknownData11[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailPlayerSkin;                                  // 0x0090(0x0001) (Config)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailWeaponSkin;                                  // 0x0094(0x0001) (Config)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailTerrain;                                     // 0x0098(0x0001) (Config)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailInterface;                                   // 0x009C(0x0001) (Config)
	unsigned char                                      UnknownData15[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailRenderMap;                                   // 0x00A0(0x0001) (Config)
	unsigned char                                      UnknownData16[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureDetail>                        TextureDetailLightmap;                                    // 0x00A4(0x0001) (Config)
	unsigned char                                      UnknownData17[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              MinDesiredFrameRate;                                      // 0x00A8(0x0004) (Config)
	unsigned char                                      UnknownData18[0xC];                                       // 0x00AC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Client");
		return ptr;
	}

};


// Class Engine.EdgeDetectEffect
// 0x0004 (0x0040 - 0x003C)
class UEdgeDetectEffect : public UCameraEffect
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdgeDetectEffect");
		return ptr;
	}

};


// Class Engine.GlowEffect
// 0x0040 (0x007C - 0x003C)
class UGlowEffect : public UCameraEffect
{
public:
	int                                                RenderTargets[0x5];                                       // 0x003C(0x0004) (Const)
	float                                              Luminance;                                                // 0x0050(0x0004)
	float                                              MiddleGray;                                               // 0x0054(0x0004)
	float                                              WhiteCutoff;                                              // 0x0058(0x0004)
	float                                              Threshold;                                                // 0x005C(0x0004)
	float                                              BloomScale;                                               // 0x0060(0x0004)
	int                                                BlurNum;                                                  // 0x0064(0x0004)
	int                                                GlowType;                                                 // 0x0068(0x0004)
	float                                              RGBCutoff;                                                // 0x006C(0x0004)
	int                                                FinalBlendBlurType;                                       // 0x0070(0x0004)
	int                                                FinalBlendOpacity;                                        // 0x0074(0x0004)
	int                                                AspectBlendOpacity;                                       // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GlowEffect");
		return ptr;
	}

};


// Class Engine.BlackWhite
// 0x0000 (0x003C - 0x003C)
class UBlackWhite : public UCameraEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlackWhite");
		return ptr;
	}

};


// Class Engine.MotionBlur
// 0x0010 (0x004C - 0x003C)
class UMotionBlur : public UCameraEffect
{
public:
	unsigned char                                      BlurAlpha;                                                // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                RenderTargets[0x2];                                       // 0x0040(0x0004) (Const)
	float                                              LastFrameTime;                                            // 0x0048(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MotionBlur");
		return ptr;
	}

};


// Class Engine.UnderWaterEffect
// 0x001C (0x0068 - 0x004C)
class UUnderWaterEffect : public UMotionBlur
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x004C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UnderWaterEffect");
		return ptr;
	}

};


// Class Engine.CameraOverlay
// 0x0008 (0x0044 - 0x003C)
class UCameraOverlay : public UCameraEffect
{
public:
	struct FColor                                      OverlayColor;                                             // 0x003C(0x0004) (Edit)
	class UMaterial*                                   OverlayMaterial;                                          // 0x0040(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraOverlay");
		return ptr;
	}

};


// Class Engine.SubActionCameraEffect
// 0x0010 (0x006C - 0x005C)
class USubActionCameraEffect : public UMatSubAction
{
public:
	class UCameraEffect*                               CameraEffect;                                             // 0x005C(0x0004) (Edit, EditInline)
	float                                              StartAlpha;                                               // 0x0060(0x0004) (Edit)
	float                                              EndAlpha;                                                 // 0x0064(0x0004) (Edit)
	unsigned long                                      DisableAfterDuration : 1;                                 // 0x0068(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubActionCameraEffect");
		return ptr;
	}

};


// Class Engine.Viewport
// 0x014C (0x01C0 - 0x0074)
class UViewport : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x14C];                                     // 0x0074(0x014C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Viewport");
		return ptr;
	}

};


// Class Engine.BeamEmitter
// 0x010C (0x05F8 - 0x04EC)
class UBeamEmitter : public UParticleEmitter
{
public:
	struct FRange                                      BeamDistanceRange;                                        // 0x04EC(0x0008) (Edit)
	TArray<struct FParticleBeamEndPoint>               BeamEndPoints;                                            // 0x04F4(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EBeamEndPointType>                     DetermineEndPointBy;                                      // 0x0500(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              BeamTextureUScale;                                        // 0x0504(0x0004) (Edit)
	float                                              BeamTextureVScale;                                        // 0x0508(0x0004) (Edit)
	int                                                RotatingSheets;                                           // 0x050C(0x0004) (Edit)
	unsigned long                                      TriggerEndpoint : 1;                                      // 0x0510(0x0004) (Edit)
	struct FRangeVector                                LowFrequencyNoiseRange;                                   // 0x0514(0x0018) (Edit)
	int                                                LowFrequencyPoints;                                       // 0x052C(0x0004) (Edit)
	struct FRangeVector                                HighFrequencyNoiseRange;                                  // 0x0530(0x0018) (Edit)
	int                                                HighFrequencyPoints;                                      // 0x0548(0x0004) (Edit)
	TArray<struct FParticleBeamScale>                  LFScaleFactors;                                           // 0x054C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FParticleBeamScale>                  HFScaleFactors;                                           // 0x0558(0x000C) (Edit, NeedCtorLink)
	float                                              LFScaleRepeats;                                           // 0x0564(0x0004) (Edit)
	float                                              HFScaleRepeats;                                           // 0x0568(0x0004) (Edit)
	unsigned long                                      UseHighFrequencyScale : 1;                                // 0x056C(0x0004) (Edit)
	unsigned long                                      UseLowFrequencyScale : 1;                                 // 0x056C(0x0004) (Edit)
	unsigned long                                      NoiseDeterminesEndPoint : 1;                              // 0x056C(0x0004) (Edit)
	struct FRangeVector                                DynamicHFNoiseRange;                                      // 0x0570(0x0018) (Edit)
	struct FRange                                      DynamicHFNoisePointsRange;                                // 0x0588(0x0008) (Edit)
	struct FRange                                      DynamicTimeBetweenNoiseRange;                             // 0x0590(0x0008) (Edit)
	unsigned long                                      UseBranching : 1;                                         // 0x0598(0x0004) (Edit)
	struct FRange                                      BranchProbability;                                        // 0x059C(0x0008) (Edit)
	struct FRange                                      BranchHFPointsRange;                                      // 0x05A4(0x0008) (Edit)
	int                                                BranchEmitter;                                            // 0x05AC(0x0004) (Edit)
	struct FRange                                      BranchSpawnAmountRange;                                   // 0x05B0(0x0008) (Edit)
	unsigned long                                      LinkupLifetime : 1;                                       // 0x05B8(0x0004) (Edit)
	int                                                SheetsUsed;                                               // 0x05BC(0x0004) (Transient)
	int                                                VerticesPerParticle;                                      // 0x05C0(0x0004) (Transient)
	int                                                IndicesPerParticle;                                       // 0x05C4(0x0004) (Transient)
	int                                                PrimitivesPerParticle;                                    // 0x05C8(0x0004) (Transient)
	float                                              BeamValueSum;                                             // 0x05CC(0x0004) (Transient)
	TArray<struct FParticleBeamData>                   HFPoints;                                                 // 0x05D0(0x000C) (Transient, NeedCtorLink)
	TArray<struct FVector>                             LFPoints;                                                 // 0x05DC(0x000C) (Transient, NeedCtorLink)
	TArray<class AActor*>                              HitActors;                                                // 0x05E8(0x000C) (Transient, NeedCtorLink)
	float                                              TimeSinceLastDynamicNoise;                                // 0x05F4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BeamEmitter");
		return ptr;
	}

};


// Class Engine.I3DL2Listener
// 0x0074 (0x00A8 - 0x0034)
class UI3DL2Listener : public UObject
{
public:
	float                                              EnvironmentSize;                                          // 0x0034(0x0004) (Edit)
	float                                              EnvironmentDiffusion;                                     // 0x0038(0x0004) (Edit)
	int                                                Room;                                                     // 0x003C(0x0004) (Edit)
	int                                                RoomHF;                                                   // 0x0040(0x0004) (Edit)
	int                                                RoomLF;                                                   // 0x0044(0x0004) (Edit)
	float                                              DecayTime;                                                // 0x0048(0x0004) (Edit)
	float                                              DecayHFRatio;                                             // 0x004C(0x0004) (Edit)
	float                                              DecayLFRatio;                                             // 0x0050(0x0004) (Edit)
	int                                                Reflections;                                              // 0x0054(0x0004) (Edit)
	float                                              ReflectionsDelay;                                         // 0x0058(0x0004) (Edit)
	struct FVector                                     ReflectionsPan;                                           // 0x005C(0x000C) (Edit)
	int                                                Reverb;                                                   // 0x0068(0x0004) (Edit)
	float                                              ReverbDelay;                                              // 0x006C(0x0004) (Edit)
	struct FVector                                     ReverbPan;                                                // 0x0070(0x000C) (Edit)
	float                                              EchoTime;                                                 // 0x007C(0x0004) (Edit)
	float                                              EchoDepth;                                                // 0x0080(0x0004) (Edit)
	float                                              ModulationTime;                                           // 0x0084(0x0004) (Edit)
	float                                              ModulationDepth;                                          // 0x0088(0x0004) (Edit)
	float                                              RoomRolloffFactor;                                        // 0x008C(0x0004) (Edit)
	float                                              AirAbsorptionHF;                                          // 0x0090(0x0004) (Edit)
	float                                              HFReference;                                              // 0x0094(0x0004) (Edit)
	float                                              LFReference;                                              // 0x0098(0x0004) (Edit)
	unsigned long                                      bDecayTimeScale : 1;                                      // 0x009C(0x0004) (Edit)
	unsigned long                                      bReflectionsScale : 1;                                    // 0x009C(0x0004) (Edit)
	unsigned long                                      bReflectionsDelayScale : 1;                               // 0x009C(0x0004) (Edit)
	unsigned long                                      bReverbScale : 1;                                         // 0x009C(0x0004) (Edit)
	unsigned long                                      bReverbDelayScale : 1;                                    // 0x009C(0x0004) (Edit)
	unsigned long                                      bEchoTimeScale : 1;                                       // 0x009C(0x0004) (Edit)
	unsigned long                                      bModulationTimeScale : 1;                                 // 0x009C(0x0004) (Edit)
	unsigned long                                      bDecayHFLimit : 1;                                        // 0x009C(0x0004) (Edit)
	int                                                Environment;                                              // 0x00A0(0x0004) (Transient)
	int                                                Updated;                                                  // 0x00A4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.I3DL2Listener");
		return ptr;
	}

};


// Class Engine.AudioSubsystem
// 0x0000 (0x0038 - 0x0038)
class UAudioSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSubsystem");
		return ptr;
	}

};


// Class Engine.Sound
// 0x0044 (0x0078 - 0x0034)
class USound : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0034(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Sound");
		return ptr;
	}

};


// Class Engine.AirShip
// 0x0004 (0x1F10 - 0x1F0C)
class AAirShip : public APawn
{
public:
	class APawn*                                       DriverPawn;                                               // 0x1F0C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AirShip");
		return ptr;
	}

};


// Class Engine.EmitterLight
// 0x0004 (0x03FC - 0x03F8)
class AEmitterLight : public ALight
{
public:
	TEnumAsByte<EEmitterLightType>                     EmitterLightType;                                         // 0x03F8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterLight");
		return ptr;
	}

};


// Class Engine.Vehicle
// 0x00CC (0x1FD8 - 0x1F0C)
class AVehicle : public APawn
{
public:
	TArray<struct FVehiclePartInfo>                    VehiclePartList;                                          // 0x1F0C(0x000C) (NeedCtorLink)
	TEnumAsByte<EVehicleType>                          type;                                                     // 0x1F18(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1F19(0x0003) MISSED OFFSET
	class APawn*                                       DriverPawn;                                               // 0x1F1C(0x0004)
	int                                                DriverID;                                                 // 0x1F20(0x0004)
	TArray<int>                                        PassengerIDList;                                          // 0x1F24(0x000C) (NeedCtorLink)
	int                                                MaxHP;                                                    // 0x1F30(0x0004)
	int                                                CurHP;                                                    // 0x1F34(0x0004)
	int                                                MaxFuel;                                                  // 0x1F38(0x0004)
	int                                                CurFuel;                                                  // 0x1F3C(0x0004)
	struct FVector                                     DriverRelLoc;                                             // 0x1F40(0x000C)
	unsigned long                                      bAutoCalcDriverLoc : 1;                                   // 0x1F4C(0x0004)
	unsigned long                                      bStart : 1;                                               // 0x1F4C(0x0004)
	unsigned long                                      bBoost : 1;                                               // 0x1F4C(0x0004)
	unsigned long                                      bMoveUp : 1;                                              // 0x1F4C(0x0004)
	unsigned long                                      bMoveDown : 1;                                            // 0x1F4C(0x0004)
	unsigned long                                      bTurning : 1;                                             // 0x1F4C(0x0004)
	float                                              OldAltitude;                                              // 0x1F50(0x0004)
	int                                                BoostCurTickCount;                                        // 0x1F54(0x0004)
	int                                                BoostTickCount;                                           // 0x1F58(0x0004)
	int                                                MoveUpCurTickCount;                                       // 0x1F5C(0x0004)
	int                                                MoveUpTickCount;                                          // 0x1F60(0x0004)
	int                                                MoveDownCurTickCount;                                     // 0x1F64(0x0004)
	int                                                MoveDownTickCount;                                        // 0x1F68(0x0004)
	int                                                TurningCurTickCount;                                      // 0x1F6C(0x0004)
	int                                                TurningTickCount;                                         // 0x1F70(0x0004)
	unsigned long                                      bTrip : 1;                                                // 0x1F74(0x0004)
	struct FVector                                     TripTarget;                                               // 0x1F78(0x000C)
	float                                              MoveSpeed;                                                // 0x1F84(0x0004)
	int                                                RotationSpeed;                                            // 0x1F88(0x0004)
	class USound*                                      SpawnSound;                                               // 0x1F8C(0x0004)
	class USound*                                      BasicSound;                                               // 0x1F90(0x0004)
	class USound*                                      MoveUpSound;                                              // 0x1F94(0x0004)
	class USound*                                      MoveDownSound;                                            // 0x1F98(0x0004)
	class USound*                                      TurnSound;                                                // 0x1F9C(0x0004)
	TArray<class USound*>                              RandomSounds;                                             // 0x1FA0(0x000C) (NeedCtorLink)
	unsigned long                                      bRandomSound : 1;                                         // 0x1FAC(0x0004)
	float                                              RandomTime;                                               // 0x1FB0(0x0004)
	int                                                RandomPercent;                                            // 0x1FB4(0x0004)
	float                                              RandomTick;                                               // 0x1FB8(0x0004)
	float                                              WaveTotalTime;                                            // 0x1FBC(0x0004)
	float                                              WaveElapsedTime;                                          // 0x1FC0(0x0004)
	float                                              WaveMaxHeight;                                            // 0x1FC4(0x0004)
	float                                              WaveOldHeight;                                            // 0x1FC8(0x0004)
	unsigned long                                      bWaveOn : 1;                                              // 0x1FCC(0x0004)
	float                                              DriverElasticCameraDist;                                  // 0x1FD0(0x0004)
	float                                              DriverElasticCameraVelocity;                              // 0x1FD4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Vehicle");
		return ptr;
	}


	void Destroyed();
	void AddVehiclePart(class UClass* a_Class, const struct FVector& a_Offset);
	TEnumAsByte<EVehicleType> GetType();
	void PostSetPawnResource();
	void OnDriverOut();
	void OnDriverIn(int a_DriverID);
	void OnTurning();
	void OnMoveDown();
	void OnMoveUp();
	void OnBoost();
	void OnStop();
	void OnStart();
};


// Class Engine.VehicleRoutePoint
// 0x007C (0x2054 - 0x1FD8)
class AVehicleRoutePoint : public AVehicle
{
public:
	struct FString                                     RouteName;                                                // 0x1FD8(0x000C) (Edit, NeedCtorLink)
	TArray<struct FVector>                             DeltaPoint;                                               // 0x1FE4(0x000C) (Edit, NeedCtorLink)
	TArray<struct FVector>                             AbsPoint;                                                 // 0x1FF0(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        MovingSpeed;                                              // 0x1FFC(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        RotatingSpeed;                                            // 0x2008(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        TimeToNextAction;                                         // 0x2014(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        SpeakerID;                                                // 0x2020(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        WaitingMessageID;                                         // 0x202C(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        StationID;                                                // 0x2038(0x000C) (Edit, NeedCtorLink)
	struct FColor                                      LineColor;                                                // 0x2044(0x0004) (Edit)
	struct FColor                                      PathColor;                                                // 0x2048(0x0004) (Edit)
	struct FColor                                      FontColor;                                                // 0x204C(0x0004) (Edit)
	int                                                Paths;                                                    // 0x2050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleRoutePoint");
		return ptr;
	}

};


// Class Engine.SuperPointInfo
// 0x0044 (0x0400 - 0x03BC)
class ASuperPointInfo : public AInfo
{
public:
	struct FString                                     SuperPointName;                                           // 0x03BC(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<ESuperPointMoveType>                   MoveType;                                                 // 0x03C8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	TArray<struct FVector>                             DeltaPoint;                                               // 0x03CC(0x000C) (Edit, NeedCtorLink)
	TArray<struct FVector>                             AbsPoint;                                                 // 0x03D8(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        Delay;                                                    // 0x03E4(0x000C) (Edit, NeedCtorLink)
	struct FColor                                      LineColor;                                                // 0x03F0(0x0004) (Edit)
	struct FColor                                      PathColor;                                                // 0x03F4(0x0004) (Edit)
	struct FColor                                      FontColor;                                                // 0x03F8(0x0004) (Edit)
	int                                                Paths;                                                    // 0x03FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SuperPointInfo");
		return ptr;
	}

};


// Class Engine.ServerPrimitive
// 0x0028 (0x03E4 - 0x03BC)
class AServerPrimitive : public AInfo
{
public:
	TArray<struct FServerPointStruct>                  PointArray;                                               // 0x03BC(0x000C) (Edit, NeedCtorLink)
	TArray<struct FServerLineStruct>                   LineArray;                                                // 0x03C8(0x000C) (Edit, NeedCtorLink)
	struct FColor                                      LineColor;                                                // 0x03D4(0x0004) (Edit)
	struct FString                                     Name;                                                     // 0x03D8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerPrimitive");
		return ptr;
	}

};


// Class Engine.L2Float
// 0x0058 (0x0414 - 0x03BC)
class AL2Float : public AActor
{
public:
	TEnumAsByte<ETagState>                             State;                                                    // 0x03BC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	int                                                FishType;                                                 // 0x03C0(0x0004)
	unsigned long                                      Gut : 1;                                                  // 0x03C4(0x0004)
	unsigned long                                      Fake : 1;                                                 // 0x03C4(0x0004)
	float                                              WaterEffectTimer;                                         // 0x03C8(0x0004)
	float                                              FakeEffectTimer;                                          // 0x03CC(0x0004)
	struct FVector                                     OldEffectLoc;                                             // 0x03D0(0x000C)
	float                                              fEffectElapsedTime;                                       // 0x03DC(0x0004)
	int                                                EffectType;                                               // 0x03E0(0x0004)
	struct FVector                                     OrgLocation;                                              // 0x03E4(0x000C)
	class AEmitter*                                    BrightEffect;                                             // 0x03F0(0x0004)
	struct FName                                       WaitAnimName;                                             // 0x03F4(0x0004)
	struct FName                                       BattleAnimName;                                           // 0x03F8(0x0004)
	struct FName                                       BattleWaitAnimName[0x6];                                  // 0x03FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Float");
		return ptr;
	}

};


// Class Engine.NLine
// 0x0008 (0x03C4 - 0x03BC)
class ANLine : public AActor
{
public:
	int                                                SpringSim;                                                // 0x03BC(0x0004) (Const)
	unsigned char                                      Alpha;                                                    // 0x03C0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NLine");
		return ptr;
	}

};


// Class Engine.SpawnableStaticMeshActor
// 0x0000 (0x0414 - 0x0414)
class ASpawnableStaticMeshActor : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpawnableStaticMeshActor");
		return ptr;
	}

};


// Class Engine.Brush
// 0x005C (0x0418 - 0x03BC)
class ABrush : public AActor
{
public:
	TEnumAsByte<ECsgOper>                              CsgOper;                                                  // 0x03BC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UObject*                                     UnusedLightMesh;                                          // 0x03C0(0x0004) (Const)
	struct FVector                                     PostPivot;                                                // 0x03C4(0x000C)
	struct FScale                                      MainScale;                                                // 0x03D0(0x0014)
	struct FScale                                      PostScale;                                                // 0x03E4(0x0014)
	struct FScale                                      TempScale;                                                // 0x03F8(0x0014)
	struct FColor                                      BrushColor;                                               // 0x040C(0x0004) (Edit)
	int                                                PolyFlags;                                                // 0x0410(0x0004) (Edit)
	unsigned long                                      bColored : 1;                                             // 0x0414(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x001C (0x0434 - 0x0418)
class AVolume : public ABrush
{
public:
	class AActor*                                      AssociatedActor;                                          // 0x0418(0x0004)
	struct FName                                       AssociatedActorTag;                                       // 0x041C(0x0004) (Edit)
	int                                                LocationPriority;                                         // 0x0420(0x0004) (Edit)
	struct FString                                     LocationName;                                             // 0x0424(0x000C) (Edit, Localized, NeedCtorLink)
	class ADecorationList*                             DecoList;                                                 // 0x0430(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}


	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	void PostBeginPlay();
	bool Encompasses(class AActor* Other);
};


// Class Engine.ServerBlockingVolume
// 0x0000 (0x0434 - 0x0434)
class AServerBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerBlockingVolume");
		return ptr;
	}

};


// Class Engine.L2Indicator
// 0x0004 (0x053C - 0x0538)
class AL2Indicator : public AEmitter
{
public:
	int                                                type;                                                     // 0x0538(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Indicator");
		return ptr;
	}

};


// Class Engine.AirVolume
// 0x000C (0x0440 - 0x0434)
class AAirVolume : public AVolume
{
public:
	struct FName                                       EffectName;                                               // 0x0434(0x0004) (Edit)
	float                                              FullFadeSeconds;                                          // 0x0438(0x0004) (Edit)
	float                                              RelativeOffset;                                           // 0x043C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AirVolume");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.L2Alarm
// 0x0004 (0x03C0 - 0x03BC)
class AL2Alarm : public AActor
{
public:
	class USound*                                      ClickSound;                                               // 0x03BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Alarm");
		return ptr;
	}

};


// Class Engine.MusicVolume
// 0x000C (0x0440 - 0x0434)
class AMusicVolume : public AVolume
{
public:
	int                                                nMusicID;                                                 // 0x0434(0x0004) (Edit)
	unsigned long                                      bForcePlayMusic : 1;                                      // 0x0438(0x0004) (Edit)
	unsigned long                                      bLoopMusic : 1;                                           // 0x0438(0x0004) (Edit)
	unsigned long                                      bHasNightMusic : 1;                                       // 0x0438(0x0004) (Edit)
	int                                                nNightMusicID;                                            // 0x043C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MusicVolume");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.NMoon
// 0x0064 (0x0420 - 0x03BC)
class ANMoon : public AActor
{
public:
	float                                              Radius;                                                   // 0x03BC(0x0004) (Edit)
	float                                              Latitude;                                                 // 0x03C0(0x0004)
	float                                              Longitude;                                                // 0x03C4(0x0004)
	float                                              LimitMaxRadius;                                           // 0x03C8(0x0004) (Edit)
	float                                              MoonScale;                                                // 0x03CC(0x0004) (Edit)
	unsigned long                                      bMakeLightmap : 1;                                        // 0x03D0(0x0004)
	struct FVector                                     Position;                                                 // 0x03D4(0x000C)
	unsigned long                                      bMoonLight : 1;                                           // 0x03E0(0x0004) (Edit)
	int                                                EnvType;                                                  // 0x03E4(0x0004) (Edit)
	class UTexture*                                    Flame[0xC];                                               // 0x03E8(0x0004) (Edit)
	unsigned char                                      LightHue;                                                 // 0x0418(0x0001) (Edit)
	unsigned char                                      LightSaturation;                                          // 0x0419(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              LightBrightness;                                          // 0x041C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NMoon");
		return ptr;
	}

};


// Class Engine.NSun
// 0x0024 (0x03E0 - 0x03BC)
class ANSun : public AActor
{
public:
	float                                              Radius;                                                   // 0x03BC(0x0004) (Edit)
	float                                              Latitude;                                                 // 0x03C0(0x0004)
	float                                              Longitude;                                                // 0x03C4(0x0004)
	float                                              LimitMaxRadius;                                           // 0x03C8(0x0004) (Edit)
	float                                              SunScale;                                                 // 0x03CC(0x0004) (Edit)
	unsigned long                                      bMakeLightmap : 1;                                        // 0x03D0(0x0004)
	struct FVector                                     Position;                                                 // 0x03D4(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NSun");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.ExtraMeshData
// 0x0014 (0x0048 - 0x0034)
class UExtraMeshData : public UObject
{
public:
	class AActor*                                      Owner;                                                    // 0x0034(0x0004)
	class UMesh*                                       ExtraMesh;                                                // 0x0038(0x0004)
	class UMeshInstance*                               ExtraMeshInstance;                                        // 0x003C(0x0004)
	class UMaterial*                                   ExtraTex;                                                 // 0x0040(0x0004)
	int                                                ExtraBodyPart;                                            // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExtraMeshData");
		return ptr;
	}

};


// Class Engine.Inspector
// 0x0000 (0x03BC - 0x03BC)
class AInspector : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Inspector");
		return ptr;
	}


	int Inspection(int Param1, int Param2, int param3, int param4);
	void InspectorFunc006(class UMesh* InMesh, int AnimSeqIndex, int frame);
	int InspectorFunc005(class UMesh* InMesh, int AnimSeqIndex);
	int InspectorFunc004(class UMesh* InMesh);
	int InspectorFunc003(class UMesh* InMesh);
	int InspectorFunc002(class UMesh* InMesh);
	struct FCoords InspectorFunc001(class UMesh* InMesh, int BoneIndex);
};


// Class Engine.L2Dice
// 0x0030 (0x03EC - 0x03BC)
class AL2Dice : public AActor
{
public:
	struct FRotator                                    TargetRotation;                                           // 0x03BC(0x000C)
	struct FRotator                                    DeltaRotation;                                            // 0x03C8(0x000C)
	class USound*                                      DropSound;                                                // 0x03D4(0x0004)
	struct FVector                                     CheckLocation;                                            // 0x03D8(0x000C)
	struct AL2Dice_FNActionPtr                         Action;                                                   // 0x03E4(0x0004)
	unsigned long                                      bActionOn : 1;                                            // 0x03E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Dice");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x001C (0x03D8 - 0x03BC)
class AAmbientSound : public AKeypoint
{
public:
	TEnumAsByte<EASType>                               AmbientSoundType;                                         // 0x03BC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	int                                                AmbientRandom;                                            // 0x03C0(0x0004) (Edit)
	float                                              AmbientSoundStartTime;                                    // 0x03C4(0x0004)
	class USound*                                      AmbientSound;                                             // 0x03C8(0x0004) (Edit)
	float                                              SoundRadius;                                              // 0x03CC(0x0004) (Edit)
	unsigned char                                      SoundVolume;                                              // 0x03D0(0x0001) (Edit)
	unsigned char                                      SoundPitch;                                               // 0x03D1(0x0001) (Edit)
	TEnumAsByte<ESoundOcclusion>                       SoundOcclusion;                                           // 0x03D2(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03D3(0x0001) MISSED OFFSET
	unsigned long                                      bFullVolume : 1;                                          // 0x03D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}

};


// Class Engine.NpcPosInfo
// 0x0058 (0x0414 - 0x03BC)
class ANpcPosInfo : public AInfo
{
public:
	TArray<struct FNpcPos>                             pos;                                                      // 0x03BC(0x000C) (Edit, NeedCtorLink)
	struct FColor                                      LineColor;                                                // 0x03C8(0x0004) (Edit)
	struct FName                                       NpcName;                                                  // 0x03CC(0x0004) (Edit)
	struct FString                                     nickname;                                                 // 0x03D0(0x000C) (Edit, NeedCtorLink)
	struct FName                                       ai;                                                       // 0x03DC(0x0004) (Edit)
	TArray<struct FNpcPrivate>                         Privates;                                                 // 0x03E0(0x000C) (Edit, NeedCtorLink)
	struct FWhenExtinctionCreate                       when_extinction_create;                                   // 0x03EC(0x0018) (Edit, NeedCtorLink)
	unsigned long                                      bWayPointsShow : 1;                                       // 0x0404(0x0004) (Edit)
	TArray<struct FWayPoint>                           WayPoints;                                                // 0x0408(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NpcPosInfo");
		return ptr;
	}

};


// Class Engine.LocationInfo
// 0x0004 (0x03C0 - 0x03BC)
class ALocationInfo : public AInfo
{
public:
	unsigned long                                      bMovable : 1;                                             // 0x03BC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocationInfo");
		return ptr;
	}

};


// Class Engine.TerritoryInfo
// 0x0324 (0x06E0 - 0x03BC)
class ATerritoryInfo : public AInfo
{
public:
	struct FString                                     TerritoryName;                                            // 0x03BC(0x000C) (Edit, NeedCtorLink)
	int                                                PointNum;                                                 // 0x03C8(0x0004) (Edit)
	float                                              TerritoryHeight;                                          // 0x03CC(0x0004) (Edit)
	struct FVector                                     DeltaPoint[0x40];                                         // 0x03D0(0x000C) (Edit)
	struct FColor                                      LineColor;                                                // 0x06D0(0x0004) (Edit)
	TArray<struct FAnywhereNpcMaker>                   npcmaker;                                                 // 0x06D4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerritoryInfo");
		return ptr;
	}

};


// Class Engine.L2Pickup
// 0x0034 (0x03F0 - 0x03BC)
class AL2Pickup : public AActor
{
public:
	struct FRotator                                    TargetRotation;                                           // 0x03BC(0x000C)
	struct FRotator                                    DeltaRotation;                                            // 0x03C8(0x000C)
	class USound*                                      DropSound;                                                // 0x03D4(0x0004)
	unsigned long                                      bPendingDrop : 1;                                         // 0x03D8(0x0004)
	class AEmitter*                                    DropEffectActor;                                          // 0x03DC(0x0004)
	unsigned long                                      bDropEffectActor : 1;                                     // 0x03E0(0x0004)
	struct FVector                                     CheckLocation;                                            // 0x03E4(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2Pickup");
		return ptr;
	}


	void Timer();
};


// Class Engine.Controller
// 0x01AC (0x0568 - 0x03BC)
class AController : public AActor
{
public:
	class APawn*                                       Pawn;                                                     // 0x03BC(0x0004) (Net)
	int                                                PlayerNum;                                                // 0x03C0(0x0004) (Const)
	float                                              SightCounter;                                             // 0x03C4(0x0004)
	float                                              FovAngle;                                                 // 0x03C8(0x0004)
	float                                              Handedness;                                               // 0x03CC(0x0004) (Config, GlobalConfig)
	unsigned long                                      bIsPlayer : 1;                                            // 0x03D0(0x0004)
	unsigned long                                      bGodMode : 1;                                             // 0x03D0(0x0004)
	unsigned long                                      bLOSflag : 1;                                             // 0x03D0(0x0004) (Const)
	unsigned long                                      bAdvancedTactics : 1;                                     // 0x03D0(0x0004)
	unsigned long                                      bCanOpenDoors : 1;                                        // 0x03D0(0x0004)
	unsigned long                                      bCanDoSpecial : 1;                                        // 0x03D0(0x0004)
	unsigned long                                      bAdjusting : 1;                                           // 0x03D0(0x0004)
	unsigned long                                      bPreparingMove : 1;                                       // 0x03D0(0x0004)
	unsigned long                                      bControlAnimations : 1;                                   // 0x03D0(0x0004)
	unsigned long                                      bEnemyInfoValid : 1;                                      // 0x03D0(0x0004)
	unsigned long                                      bNotifyApex : 1;                                          // 0x03D0(0x0004)
	unsigned long                                      bUsePlayerHearing : 1;                                    // 0x03D0(0x0004)
	unsigned long                                      bJumpOverWall : 1;                                        // 0x03D0(0x0004)
	unsigned long                                      bEnemyAcquired : 1;                                       // 0x03D0(0x0004)
	unsigned long                                      bSoaking : 1;                                             // 0x03D0(0x0004)
	unsigned long                                      bHuntPlayer : 1;                                          // 0x03D0(0x0004)
	unsigned long                                      bAllowedToTranslocate : 1;                                // 0x03D0(0x0004)
	unsigned long                                      bAllowedToImpactJump : 1;                                 // 0x03D0(0x0004)
	unsigned long                                      bMoveLocationDone : 1;                                    // 0x03D0(0x0004)
	unsigned long                                      bDead : 1;                                                // 0x03D0(0x0004)
	unsigned long                                      bAutoAttacking : 1;                                       // 0x03D0(0x0004)
	unsigned long                                      bAttackIntend : 1;                                        // 0x03D0(0x0004)
	unsigned long                                      bMyController : 1;                                        // 0x03D0(0x0004)
	unsigned long                                      bCharging : 1;                                            // 0x03D0(0x0004)
	unsigned long                                      bPrepareCharging : 1;                                     // 0x03D0(0x0004)
	unsigned char                                      bRun;                                                     // 0x03D4(0x0001) (Input)
	unsigned char                                      bDuck;                                                    // 0x03D5(0x0001) (Input)
	unsigned char                                      bFire;                                                    // 0x03D6(0x0001) (Input)
	unsigned char                                      bAltFire;                                                 // 0x03D7(0x0001) (Input)
	struct FVector                                     AdjustLoc;                                                // 0x03D8(0x000C)
	class AController*                                 nextController;                                           // 0x03E4(0x0004) (Const)
	float                                              Stimulus;                                                 // 0x03E8(0x0004)
	float                                              MoveTimer;                                                // 0x03EC(0x0004)
	class AActor*                                      MoveTarget;                                               // 0x03F0(0x0004)
	struct FVector                                     Destination;                                              // 0x03F4(0x000C)
	struct FVector                                     FocalPoint;                                               // 0x0400(0x000C)
	class AActor*                                      Focus;                                                    // 0x040C(0x0004)
	unsigned long                                      bRelativeMove : 1;                                        // 0x0410(0x0004)
	struct FVector                                     DestinationRel;                                           // 0x0414(0x000C)
	class AActor*                                      RelActor;                                                 // 0x0420(0x0004)
	int                                                SelectedCreatureID;                                       // 0x0424(0x0004)
	class AActor*                                      SelectedActor;                                            // 0x0428(0x0004)
	TArray<struct FVector>                             ReservedMovePoint;                                        // 0x042C(0x000C) (NeedCtorLink)
	class AActor*                                      ReservedMoveActor;                                        // 0x0438(0x0004)
	float                                              ReservedMoveDistance;                                     // 0x043C(0x0004)
	TEnumAsByte<EPMoveType>                            MoveType;                                                 // 0x0440(0x0001)
	TEnumAsByte<EPStopType>                            WaitType;                                                 // 0x0441(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0442(0x0002) MISSED OFFSET
	class AMover*                                      PendingMover;                                             // 0x0444(0x0004)
	class AActor*                                      GoalList[0x4];                                            // 0x0448(0x0004)
	class ANavigationPoint*                            home;                                                     // 0x0458(0x0004)
	float                                              MinHitWall;                                               // 0x045C(0x0004)
	float                                              RespawnPredictionTime;                                    // 0x0460(0x0004)
	int                                                AcquisitionYawRate;                                       // 0x0464(0x0004)
	class APawn*                                       Enemy;                                                    // 0x0468(0x0004)
	class AActor*                                      Target;                                                   // 0x046C(0x0004)
	struct FVector                                     LastSeenPos;                                              // 0x0470(0x000C)
	struct FVector                                     LastSeeingPos;                                            // 0x047C(0x000C)
	float                                              LastSeenTime;                                             // 0x0488(0x0004)
	struct FString                                     VoiceType;                                                // 0x048C(0x000C) (NeedCtorLink)
	float                                              OldMessageTime;                                           // 0x0498(0x0004)
	class AActor*                                      RouteCache[0x10];                                         // 0x049C(0x0004)
	class UReachSpec*                                  CurrentPath;                                              // 0x04DC(0x0004)
	struct FVector                                     CurrentPathDir;                                           // 0x04E0(0x000C)
	class AActor*                                      RouteGoal;                                                // 0x04EC(0x0004)
	float                                              RouteDist;                                                // 0x04F0(0x0004)
	float                                              LastRouteFind;                                            // 0x04F4(0x0004)
	class UClass*                                      PlayerReplicationInfoClass;                               // 0x04F8(0x0004) (Edit)
	class APlayerReplicationInfo*                      PlayerReplicationInfo;                                    // 0x04FC(0x0004) (Net)
	class UClass*                                      PawnClass;                                                // 0x0500(0x0004) (Net)
	class UClass*                                      PreviousPawnClass;                                        // 0x0504(0x0004)
	float                                              GroundPitchTime;                                          // 0x0508(0x0004)
	struct FVector                                     ViewX;                                                    // 0x050C(0x000C)
	struct FVector                                     ViewY;                                                    // 0x0518(0x000C)
	struct FVector                                     ViewZ;                                                    // 0x0524(0x000C)
	class ANavigationPoint*                            StartSpot;                                                // 0x0530(0x0004)
	struct FVector                                     MonitorStartLoc;                                          // 0x0534(0x000C)
	class APawn*                                       MonitoredPawn;                                            // 0x0540(0x0004)
	float                                              MonitorMaxDistSq;                                         // 0x0544(0x0004)
	class AAvoidMarker*                                FearSpots[0x2];                                           // 0x0548(0x0004)
	class AActor*                                      LastFailedReach;                                          // 0x0550(0x0004) (Const)
	float                                              FailedReachTime;                                          // 0x0554(0x0004) (Const)
	struct FVector                                     FailedReachLocation;                                      // 0x0558(0x000C) (Const)
	class AWeapon*                                     LastPawnWeapon;                                           // 0x0564(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	bool DontReuseTaunt(int t);
	bool AutoTaunt();
	void StartMonitoring(class APawn* P, float MaxDist);
	void MonitoredPawnAlert();
	void ServerGivePawn();
	void ServerReStartPlayer();
	void ChangedWeapon();
	bool CheckFutureSight(float DeltaTime);
	void SetPawnClass(const struct FString& InClass, const struct FString& InCharacter);
	void ClientSetWeapon(class UClass* WeaponClass);
	void ClientSwitchToBestWeapon();
	void SwitchToBestWeapon();
	void ReceiveWarning(class APawn* shooter, float projSpeed, const struct FVector& FireDir);
	struct FRotator AdjustAim(class AAmmunition* FiredAmmunition, const struct FVector& projStart, int aimerror);
	float WeaponPreference(class AWeapon* W);
	float RateWeapon(class AWeapon* W);
	void StopFiring();
	bool FireWeaponAt(class AActor* A);
	float AdjustDesireFor(class APickup* P);
	void damageAttitudeTo(class APawn* Other, float Damage);
	void NotifyKilled(class AController* Killer, class AController* Killed, class APawn* Other);
	void ShakeView(float ShakeTime, float RollMag, const struct FVector& OffsetMag, float RollRate, const struct FVector& OffsetRate, float OffsetTime);
	void EnemyNotVisible();
	void SeeMonster(class APawn* Seen);
	void SeePlayer(class APawn* Seen);
	void HearNoise(float Loudness, class AActor* NoiseMaker);
	void SetupSpecialPathAbilities();
	float Desireability(class APickup* P);
	void FearThisSpot(class AAvoidMarker* aSpot);
	void UnderLift(class AMover* M);
	void MoverFinished();
	void WaitForMover(class AMover* M);
	void PrepareForMove(class ANavigationPoint* Goal, class UReachSpec* Path);
	struct FVector AdjustToss(float TSpeed, const struct FVector& Start, const struct FVector& End, bool bNormalize);
	bool WouldReactToSeeing(class APawn* Seen);
	bool WouldReactToNoise(float Loudness, class AActor* NoiseMaker);
	void BotVoiceMessage(const struct FName& messagetype, unsigned char MessageID, class AController* Sender);
	void ClientVoiceMessage(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID);
	void SendVoiceMessage(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID, const struct FName& BroadcastType);
	bool AllowVoiceMessage(const struct FName& messagetype);
	void SendMessage(class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID, float Wait, const struct FName& BroadcastType);
	unsigned char GetMessageIndex(const struct FName& PhraseName);
	int GetFacingDirection();
	void RenderOverlays(class UCanvas* Canvas);
	void ClientGameEnded();
	void GameHasEnded();
	bool WantsSmoothedView();
	void AdjustView(float DeltaTime);
	bool AllowDetourTo(class ANavigationPoint* N);
	void Destroyed();
	void HandlePickup(class APickup* pick);
	bool SameTeamAs(class AController* C);
	void InitPlayerReplicationInfo();
	void PostBeginPlay();
	void PreBeginPlay();
	void PawnIsInPain(class APhysicsVolume* PainVolume);
	void SetFall();
	void NotifyTakeHit(class APawn* instigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void NotifyAddInventory(class AInventory* NewItem);
	void NotifyMissedJump();
	void NotifyJumpApex();
	void NotifyHitMover(const struct FVector& HitNormal, class AMover* Wall);
	bool NotifyBump(class AActor* Other);
	bool NotifyHitWall(const struct FVector& HitNormal, class AActor* Wall);
	bool NotifyLanded(const struct FVector& HitNormal);
	bool NotifyHeadVolumeChange(class APhysicsVolume* NewVolume);
	bool NotifyPhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void LongFall();
	void Restart();
	void PawnDied(class APawn* P);
	class AWeapon* GetLastWeapon();
	void WasKilledBy(class AController* Other);
	void Possess(class APawn* aPawn);
	void SoakStop(const struct FString& problem);
	void AIHearSound(class AActor* Actor, int Id, class USound* S, const struct FVector& SoundLocation, const struct FVector& Parameters, bool Attenuate);
	void ClientDying(class UClass* DamageType, const struct FVector& HitLocation);
	void ClientSetRotation(const struct FRotator& NewRotation);
	void ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	bool AvoidCertainDeath();
	void Reset();
	struct FRotator GetViewRotation();
	struct FString GetHumanReadableName();
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	void PendingStasis();
	void MayFall();
	void EndClimbLadder();
	void StopWaiting();
	bool InLatentExecution(int LatentActionNumber);
	class AActor* PickAnyTarget(const struct FVector& FireDir, const struct FVector& projStart, float* bestAim, float* bestDist);
	class APawn* PickTarget(const struct FVector& FireDir, const struct FVector& projStart, float MaxRange, float* bestAim, float* bestDist);
	void RemoveController();
	void AddController();
	class AActor* FindBestInventoryPath(float* MinWeight);
	void WaitForLanding();
	bool PickWallAdjust(const struct FVector& HitNormal);
	bool actorReachable(class AActor* anActor);
	bool pointReachable(const struct FVector& aPoint);
	struct FVector EAdjustJump(float BaseZ, float XYSpeed);
	class ANavigationPoint* FindRandomDest();
	class AActor* FindPathTowardNearest(class UClass* GoalClass, bool bWeightDetours);
	class AActor* FindPathToIntercept(class APawn* P, class AActor* RouteGoal, bool bWeightDetours);
	class AActor* FindPathToward(class AActor* anActor, bool bWeightDetours);
	class AActor* FindPathTo(const struct FVector& aPoint);
	bool CanSee(class APawn* Other);
	bool LineOfSightTo(class AActor* Other);
	void FinishRotation();
	void MoveToward(class AActor* NewTarget, class AActor* ViewFocus, float DestinationOffset, bool bUseStrafing, bool bShouldWalk);
	void MoveTo(const struct FVector& NewDestination, class AActor* ViewFocus, bool bShouldWalk);
};


// Class Engine.PlayerController
// 0x02F0 (0x0858 - 0x0568)
class APlayerController : public AController
{
public:
	class UPlayer*                                     Player;                                                   // 0x0568(0x0004) (Const)
	unsigned long                                      bLookUpStairs : 1;                                        // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bSnapToLevel : 1;                                         // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bAlwaysMouseLook : 1;                                     // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bKeyboardLook : 1;                                        // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bCenterView : 1;                                          // 0x056C(0x0004)
	unsigned long                                      bBehindView : 1;                                          // 0x056C(0x0004)
	unsigned long                                      bFrozen : 1;                                              // 0x056C(0x0004)
	unsigned long                                      bPressedJump : 1;                                         // 0x056C(0x0004)
	unsigned long                                      bDoubleJump : 1;                                          // 0x056C(0x0004)
	unsigned long                                      bUpdatePosition : 1;                                      // 0x056C(0x0004)
	unsigned long                                      bIsTyping : 1;                                            // 0x056C(0x0004)
	unsigned long                                      bFixedCamera : 1;                                         // 0x056C(0x0004)
	unsigned long                                      bJumpStatus : 1;                                          // 0x056C(0x0004)
	unsigned long                                      bUpdating : 1;                                            // 0x056C(0x0004)
	unsigned long                                      bNeverSwitchOnPickup : 1;                                 // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bZooming : 1;                                             // 0x056C(0x0004)
	unsigned long                                      bAlwaysLevel : 1;                                         // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bSetTurnRot : 1;                                          // 0x056C(0x0004)
	unsigned long                                      bCheatFlying : 1;                                         // 0x056C(0x0004)
	unsigned long                                      bFreeCamera : 1;                                          // 0x056C(0x0004)
	unsigned long                                      bZeroRoll : 1;                                            // 0x056C(0x0004)
	unsigned long                                      bCameraPositionLocked : 1;                                // 0x056C(0x0004)
	unsigned long                                      bViewBot : 1;                                             // 0x056C(0x0004)
	unsigned long                                      UseFixedVisibility : 1;                                   // 0x056C(0x0004)
	unsigned long                                      bBlockCloseCamera : 1;                                    // 0x056C(0x0004)
	unsigned long                                      bValidBehindCamera : 1;                                   // 0x056C(0x0004)
	unsigned long                                      bForcePrecache : 1;                                       // 0x056C(0x0004)
	unsigned long                                      bNoVoiceMessages : 1;                                     // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bNoVoiceTaunts : 1;                                       // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bNoAutoTaunts : 1;                                        // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bAutoTaunt : 1;                                           // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bNoMatureLanguage : 1;                                    // 0x056C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bRenderWide : 1;                                          // 0x0570(0x0004)
	unsigned long                                      bUseHoldCamera : 1;                                       // 0x0570(0x0004)
	unsigned char                                      AnnouncerLevel;                                           // 0x0574(0x0001) (Config, GlobalConfig)
	unsigned char                                      AnnouncerVolume;                                          // 0x0575(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0576(0x0002) MISSED OFFSET
	float                                              AimingHelp;                                               // 0x0578(0x0004) (Config, GlobalConfig)
	float                                              MaxResponseTime;                                          // 0x057C(0x0004) (Config, GlobalConfig)
	float                                              WaitDelay;                                                // 0x0580(0x0004)
	float                                              aBaseX;                                                   // 0x0584(0x0004) (Input)
	float                                              aBaseY;                                                   // 0x0588(0x0004) (Input)
	float                                              aBaseZ;                                                   // 0x058C(0x0004) (Input)
	float                                              aMouseX;                                                  // 0x0590(0x0004) (Input)
	float                                              aMouseY;                                                  // 0x0594(0x0004) (Input)
	float                                              aForward;                                                 // 0x0598(0x0004) (Input)
	float                                              aTurn;                                                    // 0x059C(0x0004) (Input)
	float                                              aStrafe;                                                  // 0x05A0(0x0004) (Input)
	float                                              aUp;                                                      // 0x05A4(0x0004) (Input)
	float                                              aLookUp;                                                  // 0x05A8(0x0004) (Input)
	unsigned char                                      bStrafe;                                                  // 0x05AC(0x0001) (Input)
	unsigned char                                      bSnapLevel;                                               // 0x05AD(0x0001) (Input)
	unsigned char                                      bLook;                                                    // 0x05AE(0x0001) (Input)
	unsigned char                                      bFreeLook;                                                // 0x05AF(0x0001) (Input)
	unsigned char                                      bTurn180;                                                 // 0x05B0(0x0001) (Input)
	unsigned char                                      bTurnToNearest;                                           // 0x05B1(0x0001) (Input)
	unsigned char                                      bXAxis;                                                   // 0x05B2(0x0001) (Input)
	unsigned char                                      bYAxis;                                                   // 0x05B3(0x0001) (Input)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickDir;                                           // 0x05B4(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	int                                                ShowFlags;                                                // 0x05B8(0x0004)
	int                                                Misc1;                                                    // 0x05BC(0x0004)
	int                                                Misc2;                                                    // 0x05C0(0x0004)
	int                                                RendMap;                                                  // 0x05C4(0x0004)
	float                                              OrthoZoom;                                                // 0x05C8(0x0004)
	class AActor*                                      ViewTarget;                                               // 0x05CC(0x0004) (Const)
	class AController*                                 RealViewTarget;                                           // 0x05D0(0x0004) (Const)
	float                                              CameraDist;                                               // 0x05D4(0x0004)
	struct FVector                                     OldCameraLoc;                                             // 0x05D8(0x000C)
	struct FRotator                                    OldCameraRot;                                             // 0x05E4(0x000C)
	TArray<class UCameraEffect*>                       CameraEffects;                                            // 0x05F0(0x000C) (Transient, NeedCtorLink)
	float                                              DesiredFOV;                                               // 0x05FC(0x0004) (Config, GlobalConfig)
	float                                              DefaultFOV;                                               // 0x0600(0x0004) (Config, GlobalConfig)
	float                                              ZoomLevel;                                                // 0x0604(0x0004)
	struct FVector                                     FixedLocation;                                            // 0x0608(0x000C)
	struct FRotator                                    FixedRotation;                                            // 0x0614(0x000C)
	struct FMatrix                                     RenderWorldToCamera;                                      // 0x0620(0x0040)
	struct FVector                                     FlashScale;                                               // 0x0660(0x000C)
	struct FVector                                     FlashFog;                                                 // 0x066C(0x000C)
	float                                              ConstantGlowScale;                                        // 0x0678(0x0004)
	struct FVector                                     ConstantGlowFog;                                          // 0x067C(0x000C)
	struct FColor                                      LastDistanceFogColor;                                     // 0x0688(0x0004)
	float                                              LastDistanceFogStart;                                     // 0x068C(0x0004)
	float                                              LastDistanceFogEnd;                                       // 0x0690(0x0004)
	float                                              CurrentDistanceFogEnd;                                    // 0x0694(0x0004)
	float                                              TimeSinceLastFogChange;                                   // 0x0698(0x0004)
	int                                                LastZone;                                                 // 0x069C(0x0004)
	struct FRotator                                    TargetViewRotation;                                       // 0x06A0(0x000C) (Net)
	float                                              TargetEyeHeight;                                          // 0x06AC(0x0004) (Net)
	struct FVector                                     TargetWeaponViewOffset;                                   // 0x06B0(0x000C) (Net)
	class AHUD*                                        myHUD;                                                    // 0x06BC(0x0004)
	float                                              LastPlaySound;                                            // 0x06C0(0x0004)
	float                                              LastPlaySpeech;                                           // 0x06C4(0x0004)
	struct FString                                     Song;                                                     // 0x06C8(0x000C) (NeedCtorLink)
	TEnumAsByte<EMusicTransition>                      Transition;                                               // 0x06D4(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	class ASavedMove*                                  SavedMoves;                                               // 0x06D8(0x0004)
	class ASavedMove*                                  FreeMoves;                                                // 0x06DC(0x0004)
	class ASavedMove*                                  PendingMove;                                              // 0x06E0(0x0004)
	float                                              CurrentTimeStamp;                                         // 0x06E4(0x0004)
	float                                              LastUpdateTime;                                           // 0x06E8(0x0004)
	float                                              ServerTimeStamp;                                          // 0x06EC(0x0004)
	float                                              TimeMargin;                                               // 0x06F0(0x0004)
	float                                              ClientUpdateTime;                                         // 0x06F4(0x0004)
	float                                              MaxTimeMargin;                                            // 0x06F8(0x0004) (Config, GlobalConfig)
	class AWeapon*                                     OldClientWeapon;                                          // 0x06FC(0x0004)
	int                                                WeaponUpdate;                                             // 0x0700(0x0004)
	struct FString                                     ProgressMessage[0x4];                                     // 0x0704(0x000C) (NeedCtorLink)
	struct FColor                                      ProgressColor[0x4];                                       // 0x0734(0x0004)
	float                                              ProgressTimeOut;                                          // 0x0744(0x0004)
	struct FString                                     QuickSaveString;                                          // 0x0748(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NoPauseMessage;                                           // 0x0754(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ViewingFrom;                                              // 0x0760(0x000C) (Localized, NeedCtorLink)
	struct FString                                     OwnCamera;                                                // 0x076C(0x000C) (Localized, NeedCtorLink)
	class AGameReplicationInfo*                        GameReplicationInfo;                                      // 0x0778(0x0004) (Net)
	struct FString                                     StatsUsername;                                            // 0x077C(0x000C) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     StatsPassword;                                            // 0x0788(0x000C) (Config, GlobalConfig, NeedCtorLink)
	class UClass*                                      LocalMessageClass;                                        // 0x0794(0x0004)
	float                                              MaxShakeRoll;                                             // 0x0798(0x0004)
	struct FVector                                     MaxShakeOffset;                                           // 0x079C(0x000C)
	float                                              ShakeRollRate;                                            // 0x07A8(0x0004)
	struct FVector                                     ShakeOffsetRate;                                          // 0x07AC(0x000C)
	struct FVector                                     ShakeOffset;                                              // 0x07B8(0x000C)
	float                                              ShakeRollTime;                                            // 0x07C4(0x0004)
	struct FVector                                     ShakeOffsetTime;                                          // 0x07C8(0x000C)
	class APawn*                                       TurnTarget;                                               // 0x07D4(0x0004)
	int                                                EnemyTurnSpeed;                                           // 0x07D8(0x0004) (Config)
	int                                                GroundPitch;                                              // 0x07DC(0x0004)
	struct FRotator                                    TurnRot180;                                               // 0x07E0(0x000C)
	struct FVector                                     OldFloor;                                                 // 0x07EC(0x000C)
	class UCheatManager*                               CheatManager;                                             // 0x07F8(0x0004) (Transient)
	class UClass*                                      CheatClass;                                               // 0x07FC(0x0004)
	class UPlayerInput*                                PlayerInput;                                              // 0x0800(0x0004) (Transient)
	class UClass*                                      InputClass;                                               // 0x0804(0x0004) (Config)
	struct FVector                                     FailedPathStart;                                          // 0x0808(0x000C) (Const)
	int                                                DemoViewPitch;                                            // 0x0814(0x0004) (Net)
	int                                                DemoViewYaw;                                              // 0x0818(0x0004) (Net)
	class ASecurity*                                   PlayerSecurity;                                           // 0x081C(0x0004)
	float                                              ForcePrecacheTime;                                        // 0x0820(0x0004)
	float                                              LastPingUpdate;                                           // 0x0824(0x0004)
	class APhysicsVolume*                              LastPhysicsVolume;                                        // 0x0828(0x0004)
	float                                              CurrentDistanceFogStart;                                  // 0x082C(0x0004)
	struct FColor                                      CurrentDistanceColor;                                     // 0x0830(0x0004)
	float                                              VolumeFogBlendRatio;                                      // 0x0834(0x0004)
	class USound*                                      UnderWaterLoopSound;                                      // 0x0838(0x0004)
	float                                              CompensateYaw;                                            // 0x083C(0x0004)
	float                                              CopmensatePitch;                                          // 0x0840(0x0004)
	class AEmitter*                                    FloatingSolid;                                            // 0x0844(0x0004)
	class AEmitter*                                    SunBeam;                                                  // 0x0848(0x0004)
	struct FVector                                     LastSamplingLocation;                                     // 0x084C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	void ClearL2Game();
	void LostChild(class AActor* Other);
	void ChangeVoiceChatter(int IpAddr, int Handle, bool Add);
	void LeaveVoiceChat();
	void ClientLeaveVoiceChat();
	void ClientChangeVoiceChatter(int IpAddr, int Handle, bool Add);
	void ServerGetVoiceChatters(class APlayerController* Player);
	void ServerChangeVoiceChatter(class APlayerController* Player, int IpAddr, int Handle, bool Add);
	bool CanRestartPlayer();
	void ClientCloseMenu(bool bCloseAll, bool bCancel);
	void ClientOpenMenu(const struct FString& Menu, bool bDisconnect, const struct FString& Msg1, const struct FString& Msg2);
	void ChangeAlwaysMouseLook(bool B);
	void ChangeStairLook(bool B);
	void LoadPlayers();
	void ServerViewSelf();
	void ServerViewNextPlayer();
	bool IsSpectating();
	void ClearDoubleClick();
	void UpdateRotation(float DeltaTime, float maxPitch);
	void TurnAround();
	bool TurnTowardNearestEnemy();
	void ViewShake(float DeltaTime);
	void CheckShake(float* MaxOffset, float* offset, float* Rate, float* Time);
	void PlayerCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	struct FRotator GetViewRotation();
	void CreateCameraEffect(class UClass* EffectClass);
	bool RemoveCameraEffect(class UCameraEffect* ExEffect);
	void AddCameraEffect(class UCameraEffect* NewEffect, bool RemoveExisting);
	void CalcFirstPersonView(struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void CalcBehindView(float dist, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void AdjustView(float DeltaTime);
	bool NotifyLanded(const struct FVector& HitNormal);
	struct FRotator AdjustAim(class AAmmunition* FiredAmmunition, const struct FVector& projStart, int aimerror);
	void PlayerMove(float DeltaTime);
	void PlayerTick(float DeltaTime);
	void TravelPostAccept();
	void ChangedWeapon();
	void BehindView(bool B);
	void ClientReStart();
	void EnterStartState();
	void Restart();
	void SetProgressTime(float t);
	void SetProgressMessage(int Index, const struct FString& S, const struct FColor& C);
	void ClearProgressMessages();
	void SwitchLevel(const struct FString& URL);
	void ChangeTeam(int N);
	void SwitchTeam();
	void ChangeName(const struct FString& S);
	void SetName(const struct FString& S);
	void Name(const struct FString& S);
	void Suicide();
	void ServerUse();
	void Use();
	void AltFire(float f);
	void Fire(float f);
	void ActivateItem();
	void PrevItem();
	void GetWeapon(class UClass* NewWeaponClass);
	void SwitchWeapon(unsigned char f);
	void NextWeapon();
	void PrevWeapon();
	void ServerThrowWeapon();
	void ThrowWeapon();
	void ActivateInventoryItem(class UClass* InvItem);
	void ShowMenu();
	void Pause();
	bool SetPause(bool bPause);
	void QuickLoad();
	void QuickSave();
	void LocalTravel(const struct FString& URL);
	void RestartLevel();
	void Speech(const struct FName& type, int Index, const struct FString& Callsign);
	void Jump(float f);
	void Typing(bool bTyping);
	void damageAttitudeTo(class APawn* Other, float Damage);
	void ShakeView(float ShakeTime, float RollMag, const struct FVector& OffsetMag, float RollRate, const struct FVector& OffsetRate, float OffsetTime);
	void ClientShake(const struct FVector& ShakeRoll, const struct FVector& OffsetMag, const struct FVector& ShakeRate, float OffsetTime);
	void ClientAdjustGlow(float Scale, const struct FVector& fog);
	void ClientFlash(float Scale, const struct FVector& fog);
	void SetFOVAngle(float NewFOV);
	void ServerRestartGame();
	void HandleWalking();
	void ReplicateMove(float DeltaTime, const struct FVector& NewAccel, TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FRotator& DeltaRot);
	int CompressAccel(int C);
	class ASavedMove* GetFreeMove();
	void ClientUpdatePosition();
	void ServerUpdatePing(int NewPing);
	void LongClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase, float NewFloorX, float NewFloorY, float NewFloorZ);
	void ClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase);
	void ShortClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase);
	void VeryShortClientAdjustPosition(float TimeStamp, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase);
	void MoveAutonomous(float DeltaTime, bool NewbRun, bool NewbDuck, bool NewbPressedJump, bool NewbDoubleJump, TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FVector& NewAccel, const struct FRotator& DeltaRot);
	void ProcessMove(float DeltaTime, const struct FVector& NewAccel, TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FRotator& DeltaRot);
	void ProcessDrive(float InForward, float InStrafe, bool InJump);
	void ServerDrive(float InForward, float InStrafe, bool InJump);
	void ServerMove(float TimeStamp, const struct FVector& InAccel, const struct FVector& ClientLoc, bool NewbRun, bool NewbDuck, bool NewbJumpStatus, bool NewbDoubleJump, TEnumAsByte<EDoubleClickDir> DoubleClickMove, unsigned char ClientRoll, int View, unsigned char OldTimeDelta, int OldAccel);
	void ShortServerMove(float TimeStamp, const struct FVector& ClientLoc, bool NewbRun, bool NewbDuck, bool NewbJumpStatus, unsigned char ClientRoll, int View);
	void RocketServerMove(float TimeStamp, const struct FVector& InAccel, const struct FVector& ClientLoc, unsigned char ClientRoll, int View);
	void ForceDeathUpdate();
	void ClientVoiceMessage(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID);
	void ClientSetBehindView(bool B);
	void ClientSetFixedCamera(bool B);
	void PreClientTravel();
	void ShowGun();
	bool IsDead();
	void SetWeaponHand(const struct FString& S);
	void SetHand(int IntValue);
	void ServerSetHandedness(float hand);
	void TeamSay(const struct FString& Msg);
	void Say(const struct FString& Msg);
	void ForceReload();
	void SetMouseAccel(float f);
	void SetMouseSmoothing(int Mode);
	void SetSensitivity(float f);
	void Mutate(const struct FString& MutateString);
	void FOV(float f);
	void ResetFOV();
	void SetFOV(float NewFOV);
	void FixFOV();
	void EndZoom();
	void StopZoom();
	void StartZoom();
	void ToggleZoom();
	void ClientSetMusic(const struct FString& NewSong, TEnumAsByte<EMusicTransition> NewTransition);
	void Destroyed();
	void ClientReliablePlaySound(class USound* ASound, bool bVolumeControl);
	void ClientPlaySound(class USound* ASound, bool bVolumeControl, float inAtten, TEnumAsByte<ESoundSlot> Slot);
	bool AllowVoiceMessage(const struct FName& messagetype);
	void PlayAnnouncement(class USound* ASound, unsigned char AnnouncementLevel, bool bForce);
	void PlayBeepSound();
	void TeamMessage(class APlayerReplicationInfo* PRI, const struct FString& S, const struct FName& type);
	void ClientMessage(const struct FString& S, const struct FName& type);
	void ReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void ViewFlash(float DeltaTime);
	float UpdateFlashComponent(float Current, float Step, float Goal);
	void HandlePickup(class APickup* pick);
	void ClientSetHUD(class UClass* newHUDType, class UClass* newScoringType);
	void PawnDied(class APawn* P);
	void ViewNextBot();
	void UnPossess();
	void Possess(class APawn* aPawn);
	int GetFacingDirection();
	void GivePawn(class APawn* NewPawn);
	void AskForPawn();
	void ClientGotoState(const struct FName& NewState, const struct FName& NewLabel);
	void InitInputSystem();
	void CleanOutSavedMoves();
	void Reset();
	void SpawnDefaultHUD();
	void ServerVerifyViewTarget();
	void ClientSetViewTarget(class AActor* A);
	void AddCheatManager();
	void AddCheats();
	void PendingStasis();
	void ServerGivePawn();
	void PostBeginPlay();
	void ClientHearSound(class AActor* Actor, int Id, class USound* S, const struct FVector& SoundLocation, const struct FVector& Parameters, bool Attenuate);
	int FindStairRotation(float DeltaTime);
	void ServerValidationResponse(const struct FString& R);
	void ClientValidate(const struct FString& C);
	struct FString PasteFromClipboard();
	void CopyToClipboard(const struct FString& Text);
	struct FString GetDefaultURL(const struct FString& Option);
	void UpdateURL(const struct FString& NewOption, const struct FString& NewValue, bool bSaveDefault);
	void ClientTravel(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bItems);
	void SetViewTarget(class AActor* NewViewTarget);
	void ResetKeyboard();
	class ALevelInfo* GetEntryLevel();
	struct FString ConsoleCommand(const struct FString& Command);
	struct FString GetServerNetworkAddress();
	struct FString GetPlayerNetworkAddress();
};


// Class Engine.LineagePlayerController
// 0x036C (0x0BC4 - 0x0858)
class ALineagePlayerController : public APlayerController
{
public:
	int                                                CheatFlyYaw;                                              // 0x0858(0x0004) (Config)
	float                                              AutoTrackingPawnSpeed;                                    // 0x085C(0x0004) (Config)
	int                                                VolumeCameraRadius;                                       // 0x0860(0x0004) (Config)
	int                                                HitCheckCameraMinDist;                                    // 0x0864(0x0004) (Config)
	int                                                FixedDefaultViewNum;                                      // 0x0868(0x0004) (Config)
	int                                                FixedDefaultGroupNum;                                     // 0x086C(0x0004) (Config)
	int                                                FixedDefaultCurrentGroup;                                 // 0x0870(0x0004) (Config)
	int                                                FixedDefaultCameraYaw[0xC];                               // 0x0874(0x0004) (Config)
	int                                                FixedDefaultCameraPitch[0xC];                             // 0x08A4(0x0004) (Config)
	float                                              FixedDefaultCameraDist[0xC];                              // 0x08D4(0x0004) (Config)
	float                                              FixedDefaultCameraViewHeight[0xC];                        // 0x0904(0x0004) (Config)
	int                                                FixedDefaultCameraHidePlayer[0xC];                        // 0x0934(0x0004) (Config)
	int                                                FixedDefaultCameraDisableZoom[0xC];                       // 0x0964(0x0004) (Config)
	int                                                FixedDefaultCameraExteriorView[0xC];                      // 0x0994(0x0004) (Config)
	int                                                FixedDefaultCameraMinDist[0xC];                           // 0x09C4(0x0004) (Config)
	int                                                FixedDefaultCameraMaxDist[0xC];                           // 0x09F4(0x0004) (Config)
	int                                                FixedDefaultCameraDisablePitch[0xC];                      // 0x0A24(0x0004) (Config)
	float                                              CameraViewHeightAdjust;                                   // 0x0A54(0x0004) (Config)
	unsigned long                                      bUseAutoTrackingPawn : 1;                                 // 0x0A58(0x0004) (Config)
	unsigned long                                      bUseVolumeCamera : 1;                                     // 0x0A58(0x0004) (Config)
	unsigned long                                      bUseHitCheckCamera : 1;                                   // 0x0A58(0x0004) (Config)
	unsigned long                                      bUseExteriorView : 1;                                     // 0x0A58(0x0004) (Config)
	unsigned long                                      bDisableCameraManuallyRotating : 1;                       // 0x0A58(0x0004)
	unsigned long                                      bCameraManuallyRotating : 1;                              // 0x0A58(0x0004)
	unsigned long                                      bCameraManuallyZoomed : 1;                                // 0x0A58(0x0004)
	unsigned long                                      bFixView : 1;                                             // 0x0A58(0x0004)
	unsigned long                                      bCameraMovingToDefault : 1;                               // 0x0A58(0x0004)
	unsigned long                                      bUseDefaultCameraYaw : 1;                                 // 0x0A58(0x0004)
	unsigned long                                      bUseDefaultCameraPitch : 1;                               // 0x0A58(0x0004)
	unsigned long                                      bUseDefaultCameraDist : 1;                                // 0x0A58(0x0004)
	unsigned long                                      bDisableZoom : 1;                                         // 0x0A58(0x0004)
	unsigned long                                      bDisablePitch : 1;                                        // 0x0A58(0x0004)
	unsigned long                                      bCameraSpecialMove : 1;                                   // 0x0A58(0x0004)
	unsigned long                                      bCameraMovingToSpecial : 1;                               // 0x0A58(0x0004)
	unsigned long                                      bKeyboardMoving : 1;                                      // 0x0A58(0x0004)
	unsigned long                                      bKeyboardMovingPermanently : 1;                           // 0x0A58(0x0004)
	unsigned long                                      bDesiredKeyboardMoving : 1;                               // 0x0A58(0x0004)
	unsigned long                                      bDesiredKeyboardMovingPermanently : 1;                    // 0x0A58(0x0004)
	unsigned long                                      bJoypadMoving : 1;                                        // 0x0A58(0x0004)
	unsigned long                                      bDesiredJoypadMoving : 1;                                 // 0x0A58(0x0004)
	unsigned long                                      bDesiredJoypadMovingPermanently : 1;                      // 0x0A58(0x0004)
	unsigned long                                      ShouldTurnToMovingDir : 1;                                // 0x0A58(0x0004)
	unsigned long                                      bObserverModeOn : 1;                                      // 0x0A58(0x0004)
	unsigned long                                      bBroadcastObserverModeOn : 1;                             // 0x0A58(0x0004)
	unsigned long                                      bCanPlayMusic : 1;                                        // 0x0A58(0x0004)
	unsigned long                                      bVehicleStart : 1;                                        // 0x0A58(0x0004)
	unsigned long                                      bGetServerMusic : 1;                                      // 0x0A58(0x0004)
	unsigned long                                      bLockMusic : 1;                                           // 0x0A58(0x0004)
	unsigned long                                      bCameraWalking : 1;                                       // 0x0A58(0x0004)
	float                                              OldZoomingDist;                                           // 0x0A5C(0x0004)
	struct FVector                                     OldCameraLocation;                                        // 0x0A60(0x000C)
	struct FRotator                                    OldCameraRotation;                                        // 0x0A6C(0x000C)
	struct FVector                                     OldViewTargetLocation;                                    // 0x0A78(0x000C)
	float                                              ManuallyCameraYaw;                                        // 0x0A84(0x0004)
	float                                              ManuallyCameraPitch;                                      // 0x0A88(0x0004)
	float                                              CurZoomingDist;                                           // 0x0A8C(0x0004)
	float                                              DesiredZoomingDist;                                       // 0x0A90(0x0004)
	int                                                DesiredPitch;                                             // 0x0A94(0x0004)
	int                                                CurVolumeCameraRadius;                                    // 0x0A98(0x0004)
	int                                                CurFixedDefaultCameraNo;                                  // 0x0A9C(0x0004)
	int                                                DefaultCameraYaw;                                         // 0x0AA0(0x0004)
	int                                                DefaultCameraPitch;                                       // 0x0AA4(0x0004)
	float                                              DefaultCameraDist;                                        // 0x0AA8(0x0004)
	float                                              HitCheckCameraDist;                                       // 0x0AAC(0x0004)
	float                                              HitCheckCameraReturnDist;                                 // 0x0AB0(0x0004)
	float                                              CameraViewDeltaTime;                                      // 0x0AB4(0x0004)
	int                                                SpecialCameraYaw;                                         // 0x0AB8(0x0004)
	int                                                SpecialCameraPitch;                                       // 0x0ABC(0x0004)
	float                                              SpecialCameraDist;                                        // 0x0AC0(0x0004)
	float                                              SpecialCameraDistSpeed;                                   // 0x0AC4(0x0004)
	int                                                SpecialCameraYawSpeed;                                    // 0x0AC8(0x0004)
	int                                                SpecialCameraPitchSpeed;                                  // 0x0ACC(0x0004)
	float                                              SpecialCameraDuration;                                    // 0x0AD0(0x0004)
	int                                                SpecialCurCameraYaw;                                      // 0x0AD4(0x0004)
	int                                                SpecialCurCameraPitch;                                    // 0x0AD8(0x0004)
	float                                              SpecialCurCameraDist;                                     // 0x0ADC(0x0004)
	int                                                CameraRelYaw;                                             // 0x0AE0(0x0004)
	int                                                CameraRelPitch;                                           // 0x0AE4(0x0004)
	int                                                CameraRelRoll;                                            // 0x0AE8(0x0004)
	int                                                CameraRelYawSpeed;                                        // 0x0AEC(0x0004)
	int                                                CameraRelPitchSpeed;                                      // 0x0AF0(0x0004)
	int                                                CameraRelRollSpeed;                                       // 0x0AF4(0x0004)
	int                                                CameraCurRelYaw;                                          // 0x0AF8(0x0004)
	int                                                CameraCurRelPitch;                                        // 0x0AFC(0x0004)
	int                                                CameraCurRelRoll;                                         // 0x0B00(0x0004)
	float                                              OriFovAngle;                                              // 0x0B04(0x0004)
	int                                                SavedViewTargetYaw;                                       // 0x0B08(0x0004)
	int                                                SavedViewTargetPitch;                                     // 0x0B0C(0x0004)
	float                                              ValidateLocationTime;                                     // 0x0B10(0x0004)
	float                                              TurningPendingTime;                                       // 0x0B14(0x0004)
	int                                                KeyboardMovingDir;                                        // 0x0B18(0x0004)
	int                                                KeyboardMovingDirFlg;                                     // 0x0B1C(0x0004)
	float                                              KeyboardMovingPendingTime;                                // 0x0B20(0x0004)
	int                                                JoypadMovingDir;                                          // 0x0B24(0x0004)
	float                                              JoypadMovingPendingTime;                                  // 0x0B28(0x0004)
	float                                              KeyboardMovingInputDelta;                                 // 0x0B2C(0x0004)
	float                                              KeyboardLeftTurnInputDelta;                               // 0x0B30(0x0004)
	float                                              KeyboardRightTurnInputDelta;                              // 0x0B34(0x0004)
	float                                              MaxZoomingDist;                                           // 0x0B38(0x0004)
	float                                              MinZoomingDist;                                           // 0x0B3C(0x0004)
	TArray<struct FNViewShakePtr>                      NViewShake;                                               // 0x0B40(0x000C) (NeedCtorLink)
	TArray<struct FNViewShakeMgrPtr>                   NViewShakeMgr;                                            // 0x0B4C(0x000C) (NeedCtorLink)
	class AMusicVolume*                                MusicVolume;                                              // 0x0B58(0x0004)
	float                                              MusicWaitTime;                                            // 0x0B5C(0x0004)
	float                                              DefaultMusicWaitTime;                                     // 0x0B60(0x0004)
	int                                                MusicHandle;                                              // 0x0B64(0x0004)
	int                                                VoiceHandle;                                              // 0x0B68(0x0004)
	int                                                nGetServerVoice;                                          // 0x0B6C(0x0004)
	float                                              PlayMusicDelay;                                           // 0x0B70(0x0004)
	float                                              PlayVoiceDelay;                                           // 0x0B74(0x0004)
	struct FString                                     bServerMusicName;                                         // 0x0B78(0x000C) (NeedCtorLink)
	struct FString                                     bServerVoiceName;                                         // 0x0B84(0x000C) (NeedCtorLink)
	class AActor*                                      CameraModeTarget;                                         // 0x0B90(0x0004)
	float                                              ManuallyCameraSpeed;                                      // 0x0B94(0x0004)
	class AAirEmitter*                                 AirEffect;                                                // 0x0B98(0x0004) (Edit)
	struct FVector                                     CurrentShakeEpicenter;                                    // 0x0B9C(0x000C)
	unsigned long                                      bCalcCameraLocationWithBone : 1;                          // 0x0BA8(0x0004)
	int                                                CalcBoneIndex;                                            // 0x0BAC(0x0004)
	struct FName                                       CalcBoneAnimName;                                         // 0x0BB0(0x0004)
	float                                              ElasticCameraDist;                                        // 0x0BB4(0x0004)
	float                                              ElasticCameraAccel;                                       // 0x0BB8(0x0004)
	float                                              ElasticCameraVel;                                         // 0x0BBC(0x0004)
	float                                              ElasticCameraOldDist;                                     // 0x0BC0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineagePlayerController");
		return ptr;
	}


	void ClearL2Game();
	void LostChild(class AActor* Other);
	void ClientReStart();
	void ViewPlayer();
	void PlayerCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void CalcBehindView(float dist, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void CalcVolumeCamera(float ViewDist, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void CalcCameraWalkingMode(float DeltaTime);
	void PlayerTick(float DeltaTime);
	void CalcVolumeZoomingDistance(float DeltaTime);
	bool IsBlockRotation(const struct FRotator& Rotation, const struct FVector& TargetLocation, float dist, int VolumeRadius);
	bool CalcCameraMovingToDefaultDistance(float DeltaTime);
	bool CalcCameraMovingToDefaultPitch(float DeltaTime, int TargetPitch);
	bool CalcCameraMovingToDefaultYaw(float DeltaTime, int TargetYaw);
	void UpdateRotation(float DeltaTime, float maxPitch);
	void ViewFix();
	void SetHitCheckCameraMinDist(int Delta);
	void UseHitCheckCameraOff();
	void UseHitCheckCameraOn();
	void SetFlyYaw(int Value);
	void ShowPlayerPawn();
	void HidePlayerPawn();
	struct FName GetWaitSeqName();
	struct FName GetMoveSeqName();
	void PostBeginPlay();
};


// Class Engine.EnvCreatureManagerInfo
// 0x0000 (0x03BC - 0x03BC)
class AEnvCreatureManagerInfo : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EnvCreatureManagerInfo");
		return ptr;
	}

};


// Class Engine.NMovableSunLight
// 0x0000 (0x03F8 - 0x03F8)
class ANMovableSunLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NMovableSunLight");
		return ptr;
	}

};


// Class Engine.CarriedObject
// 0x0014 (0x03D0 - 0x03BC)
class ACarriedObject : public AActor
{
public:
	unsigned long                                      bHome : 1;                                                // 0x03BC(0x0004) (Net)
	unsigned long                                      bHeld : 1;                                                // 0x03BC(0x0004) (Net)
	class APlayerReplicationInfo*                      HolderPRI;                                                // 0x03C0(0x0004) (Net)
	class APawn*                                       Holder;                                                   // 0x03C4(0x0004)
	class ANavigationPoint*                            LastAnchor;                                               // 0x03C8(0x0004) (Const)
	float                                              LastValidAnchorTime;                                      // 0x03CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CarriedObject");
		return ptr;
	}


	class AActor* Position();
};


// Class Engine.Triggers
// 0x0000 (0x03BC - 0x03BC)
class ATriggers : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Triggers");
		return ptr;
	}

};


// Class Engine.AvoidMarker
// 0x0000 (0x03BC - 0x03BC)
class AAvoidMarker : public ATriggers
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidMarker");
		return ptr;
	}


	void StartleBots();
	void Touch(class AActor* Other);
};


// Class Engine.NavigationPoint
// 0x0060 (0x041C - 0x03BC)
class ANavigationPoint : public AActor
{
public:
	TArray<class UReachSpec*>                          PathList;                                                 // 0x03BC(0x000C) (Const, NeedCtorLink)
	struct FName                                       ProscribedPaths[0x4];                                     // 0x03C8(0x0004) (Edit)
	struct FName                                       ForcedPaths[0x4];                                         // 0x03D8(0x0004) (Edit)
	int                                                visitedWeight;                                            // 0x03E8(0x0004)
	int                                                bestPathWeight;                                           // 0x03EC(0x0004) (Const)
	class ANavigationPoint*                            nextNavigationPoint;                                      // 0x03F0(0x0004) (Const)
	class ANavigationPoint*                            nextOrdered;                                              // 0x03F4(0x0004) (Const)
	class ANavigationPoint*                            prevOrdered;                                              // 0x03F8(0x0004) (Const)
	class ANavigationPoint*                            previousPath;                                             // 0x03FC(0x0004) (Const)
	int                                                cost;                                                     // 0x0400(0x0004)
	int                                                ExtraCost;                                                // 0x0404(0x0004) (Edit)
	int                                                TransientCost;                                            // 0x0408(0x0004) (Transient)
	int                                                FearCost;                                                 // 0x040C(0x0004) (Transient)
	unsigned long                                      bEndPoint : 1;                                            // 0x0410(0x0004) (Transient)
	unsigned long                                      bTransientEndPoint : 1;                                   // 0x0410(0x0004) (Transient)
	unsigned long                                      taken : 1;                                                // 0x0410(0x0004)
	unsigned long                                      bBlocked : 1;                                             // 0x0410(0x0004) (Edit)
	unsigned long                                      bPropagatesSound : 1;                                     // 0x0410(0x0004) (Edit)
	unsigned long                                      bOneWayPath : 1;                                          // 0x0410(0x0004) (Edit)
	unsigned long                                      bNeverUseStrafing : 1;                                    // 0x0410(0x0004) (Edit)
	unsigned long                                      bAlwaysUseStrafing : 1;                                   // 0x0410(0x0004) (Edit)
	unsigned long                                      bForceNoStrafing : 1;                                     // 0x0410(0x0004) (Const)
	unsigned long                                      bAutoBuilt : 1;                                           // 0x0410(0x0004) (Const)
	unsigned long                                      bSpecialMove : 1;                                         // 0x0410(0x0004)
	unsigned long                                      bNoAutoConnect : 1;                                       // 0x0410(0x0004)
	unsigned long                                      bNotBased : 1;                                            // 0x0410(0x0004) (Const)
	unsigned long                                      bPathsChanged : 1;                                        // 0x0410(0x0004) (Const)
	unsigned long                                      bDestinationOnly : 1;                                     // 0x0410(0x0004)
	unsigned long                                      bSourceOnly : 1;                                          // 0x0410(0x0004)
	unsigned long                                      bSpecialForced : 1;                                       // 0x0410(0x0004)
	unsigned long                                      bMustBeReachable : 1;                                     // 0x0410(0x0004)
	class APickup*                                     InventoryCache;                                           // 0x0414(0x0004)
	float                                              InventoryDist;                                            // 0x0418(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPoint");
		return ptr;
	}


	void MoverClosed();
	void MoverOpened();
	bool ProceedWithMove(class APawn* Other);
	bool SuggestMovePreparation(class APawn* Other);
	float DetourWeight(class APawn* Other, float PathWeight);
	bool Accept(class AActor* Incoming, class AActor* Source);
	int SpecialCost(class APawn* Seeker, class UReachSpec* Path);
	void PostBeginPlay();
};


// Class Engine.JumpDest
// 0x00A8 (0x04C4 - 0x041C)
class AJumpDest : public ANavigationPoint
{
public:
	unsigned long                                      bOptionalJumpDest : 1;                                    // 0x041C(0x0004)
	int                                                NumUpstreamPaths;                                         // 0x0420(0x0004)
	class UReachSpec*                                  UpstreamPaths[0x8];                                       // 0x0424(0x0004)
	struct FVector                                     NeededJump[0x8];                                          // 0x0444(0x000C)
	float                                              CalculatedGravityZ[0x8];                                  // 0x04A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.JumpDest");
		return ptr;
	}


	bool SuggestMovePreparation(class APawn* Other);
	void DoJump(class APawn* Other);
	int SpecialCost(class APawn* Other, class UReachSpec* Path);
	int GetPathIndex(class UReachSpec* Path);
};


// Class Engine.JumpPad
// 0x0018 (0x0434 - 0x041C)
class AJumpPad : public ANavigationPoint
{
public:
	struct FVector                                     JumpVelocity;                                             // 0x041C(0x000C)
	class AActor*                                      JumpTarget;                                               // 0x0428(0x0004)
	float                                              JumpZModifier;                                            // 0x042C(0x0004) (Edit)
	class USound*                                      JumpSound;                                                // 0x0430(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.JumpPad");
		return ptr;
	}


	void PostTouch(class AActor* Other);
	void Touch(class AActor* Other);
	void PostBeginPlay();
};


// Class Engine.Pickup
// 0x0038 (0x03F4 - 0x03BC)
class APickup : public AActor
{
public:
	float                                              MaxDesireability;                                         // 0x03BC(0x0004)
	class AInventorySpot*                              myMarker;                                                 // 0x03C0(0x0004)
	class ANavigationPoint*                            PickupCache;                                              // 0x03C4(0x0004)
	class UClass*                                      InventoryType;                                            // 0x03C8(0x0004) (Edit)
	unsigned long                                      bInstantRespawn : 1;                                      // 0x03CC(0x0004) (Edit)
	unsigned long                                      bOnlyReplicateHidden : 1;                                 // 0x03CC(0x0004)
	unsigned long                                      bAmbientGlow : 1;                                         // 0x03CC(0x0004) (Edit)
	unsigned long                                      bDropped : 1;                                             // 0x03CC(0x0004)
	unsigned long                                      bPredictRespawns : 1;                                     // 0x03CC(0x0004)
	float                                              RespawnTime;                                              // 0x03D0(0x0004) (Edit)
	float                                              RespawnEffectTime;                                        // 0x03D4(0x0004)
	struct FString                                     PickupMessage;                                            // 0x03D8(0x000C) (Edit, Localized, NeedCtorLink)
	class USound*                                      PickupSound;                                              // 0x03E4(0x0004) (Edit)
	struct FString                                     PickupForce;                                              // 0x03E8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pickup");
		return ptr;
	}


	float GetRespawnTime();
	void Landed(const struct FVector& HitNormal);
	bool ReadyToPickup(float MaxWait);
	void InitDroppedPickupFor(class AInventory* Inv);
	struct FString GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2);
	void SetRespawn();
	void AnnouncePickup(class APawn* Receiver);
	void StartSleeping();
	class AInventory* SpawnCopy(class APawn* Other);
	float BotDesireability(class APawn* Bot);
	float DetourWeight(class APawn* Other, float PathWeight);
	class APickup* Transmogrify(class UClass* NewClass);
	void RespawnEffect();
	void Reset();
	void Destroyed();
	void StaticPrecache(class ALevelInfo* L);
	void RemoveFromNavigation();
	void AddToNavigation();
};


// Class Engine.StationaryWeapons
// 0x0014 (0x0408 - 0x03F4)
class AStationaryWeapons : public APickup
{
public:
	int                                                TeamIndex;                                                // 0x03F4(0x0004) (Edit, Net)
	unsigned long                                      bIgnoreTeammates : 1;                                     // 0x03F8(0x0004) (Edit)
	class UStaticMesh*                                 Meshes[0x2];                                              // 0x03FC(0x0004) (Edit)
	unsigned char                                      bActive;                                                  // 0x0404(0x0001) (Net)
	unsigned char                                      bLastActive;                                              // 0x0405(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0406(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StationaryWeapons");
		return ptr;
	}


	void TakeDamage(int Damage, class APawn* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	float ReduceDamage(int Damage, class UClass* DamageType);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void DeActivate();
	void Activate();
	void Deactivated();
	void Activated();
	void SetTeam(int NewTeamIndex);
	void PostBeginPlay();
};


// Class Engine.AntiPortalActor
// 0x0000 (0x03BC - 0x03BC)
class AAntiPortalActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AntiPortalActor");
		return ptr;
	}

};


// Class Engine.InventoryAttachment
// 0x0000 (0x03BC - 0x03BC)
class AInventoryAttachment : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InventoryAttachment");
		return ptr;
	}


	void InitFor(class AInventory* i);
};


// Class Engine.WeaponAttachment
// 0x0010 (0x03CC - 0x03BC)
class AWeaponAttachment : public AInventoryAttachment
{
public:
	unsigned char                                      FlashCount;                                               // 0x03BC(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	unsigned long                                      bAutoFire : 1;                                            // 0x03C0(0x0004) (Net)
	struct FName                                       FiringMode;                                               // 0x03C4(0x0004) (Net)
	float                                              FiringSpeed;                                              // 0x03C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WeaponAttachment");
		return ptr;
	}


	void ThirdPersonEffects();
};


// Class Engine.ReplicationInfo
// 0x0000 (0x03BC - 0x03BC)
class AReplicationInfo : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationInfo");
		return ptr;
	}

};


// Class Engine.TeamInfo
// 0x005C (0x0418 - 0x03BC)
class ATeamInfo : public AReplicationInfo
{
public:
	struct FString                                     TeamName;                                                 // 0x03BC(0x000C) (Net, Localized, NeedCtorLink)
	int                                                Size;                                                     // 0x03C8(0x0004)
	float                                              Score;                                                    // 0x03CC(0x0004) (Net)
	int                                                TeamIndex;                                                // 0x03D0(0x0004) (Net)
	struct FColor                                      TeamColor;                                                // 0x03D4(0x0004) (Net)
	struct FColor                                      AltTeamColor;                                             // 0x03D8(0x0004) (Net)
	class AActor*                                      HomeBase;                                                 // 0x03DC(0x0004) (Net)
	class UClass*                                      DefaultPlayerClass;                                       // 0x03E0(0x0004) (Edit)
	struct FString                                     ColorNames[0x4];                                          // 0x03E4(0x000C) (Localized, NeedCtorLink)
	class UMaterial*                                   TeamIcon;                                                 // 0x0414(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TeamInfo");
		return ptr;
	}


	void RemoveFromTeam(class AController* Other);
	bool AddToTeam(class AController* Other);
	struct FString GetHumanReadableName();
	void UpdatePrecacheMaterials();
	bool BelongsOnTeam(class UClass* PawnClass);
};


// Class Engine.Door
// 0x0014 (0x0430 - 0x041C)
class ADoor : public ANavigationPoint
{
public:
	struct FName                                       DoorTag;                                                  // 0x041C(0x0004) (Edit)
	class AMover*                                      MyDoor;                                                   // 0x0420(0x0004)
	struct FName                                       DoorTrigger;                                              // 0x0424(0x0004) (Edit)
	class AActor*                                      RecommendedTrigger;                                       // 0x0428(0x0004)
	unsigned long                                      bInitiallyClosed : 1;                                     // 0x042C(0x0004) (Edit)
	unsigned long                                      bBlockedWhenClosed : 1;                                   // 0x042C(0x0004) (Edit)
	unsigned long                                      bDoorOpen : 1;                                            // 0x042C(0x0004)
	unsigned long                                      bTempNoCollide : 1;                                       // 0x042C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Door");
		return ptr;
	}


	bool SuggestMovePreparation(class APawn* Other);
	bool ProceedWithMove(class APawn* Other);
	class AActor* SpecialHandling(class APawn* Other);
	void MoverClosed();
	void MoverOpened();
	void PostBeginPlay();
};


// Class Engine.AutoDoor
// 0x0000 (0x0430 - 0x0430)
class AAutoDoor : public ADoor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoDoor");
		return ptr;
	}

};


// Class Engine.SmallNavigationPoint
// 0x0000 (0x041C - 0x041C)
class ASmallNavigationPoint : public ANavigationPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmallNavigationPoint");
		return ptr;
	}

};


// Class Engine.Ladder
// 0x0008 (0x0424 - 0x041C)
class ALadder : public ASmallNavigationPoint
{
public:
	class ALadderVolume*                               MyLadder;                                                 // 0x041C(0x0004)
	class ALadder*                                     LadderList;                                               // 0x0420(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Ladder");
		return ptr;
	}


	bool SuggestMovePreparation(class APawn* Other);
};


// Class Engine.AutoLadder
// 0x0000 (0x0424 - 0x0424)
class AAutoLadder : public ALadder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoLadder");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0004 (0x0438 - 0x0434)
class ABlockingVolume : public AVolume
{
public:
	unsigned long                                      bClampFluid : 1;                                          // 0x0434(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.PotentialClimbWatcher
// 0x0000 (0x03BC - 0x03BC)
class APotentialClimbWatcher : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PotentialClimbWatcher");
		return ptr;
	}


	void Tick(float DeltaTime);
};


// Class Engine.PhysicsVolume
// 0x0088 (0x04BC - 0x0434)
class APhysicsVolume : public AVolume
{
public:
	struct FVector                                     ZoneVelocity;                                             // 0x0434(0x000C) (Edit)
	struct FVector                                     Gravity;                                                  // 0x0440(0x000C) (Edit, Net)
	float                                              GroundFriction;                                           // 0x044C(0x0004) (Edit)
	float                                              TerminalVelocity;                                         // 0x0450(0x0004) (Edit)
	float                                              DamagePerSec;                                             // 0x0454(0x0004) (Edit)
	class UClass*                                      DamageType;                                               // 0x0458(0x0004) (Edit)
	int                                                Priority;                                                 // 0x045C(0x0004) (Edit)
	class USound*                                      EntrySound;                                               // 0x0460(0x0004) (Edit)
	class USound*                                      ExitSound;                                                // 0x0464(0x0004) (Edit)
	class UClass*                                      EntryActor;                                               // 0x0468(0x0004) (Edit)
	class UClass*                                      ExitActor;                                                // 0x046C(0x0004) (Edit)
	float                                              FluidFriction;                                            // 0x0470(0x0004) (Edit)
	struct FVector                                     ViewFlash;                                                // 0x0474(0x000C) (Edit)
	struct FVector                                     ViewFog;                                                  // 0x0480(0x000C) (Edit)
	class AInfo*                                       PainTimer;                                                // 0x048C(0x0004)
	unsigned long                                      bPainCausing : 1;                                         // 0x0490(0x0004) (Edit)
	unsigned long                                      bDestructive : 1;                                         // 0x0490(0x0004) (Edit)
	unsigned long                                      bNoInventory : 1;                                         // 0x0490(0x0004) (Edit)
	unsigned long                                      bMoveProjectiles : 1;                                     // 0x0490(0x0004) (Edit)
	unsigned long                                      bBounceVelocity : 1;                                      // 0x0490(0x0004) (Edit)
	unsigned long                                      bNeutralZone : 1;                                         // 0x0490(0x0004) (Edit)
	unsigned long                                      bWaterVolume : 1;                                         // 0x0490(0x0004)
	unsigned long                                      bDistanceFog : 1;                                         // 0x0490(0x0004) (Edit)
	unsigned long                                      bUseDistanceFogColor : 1;                                 // 0x0490(0x0004) (Edit)
	unsigned long                                      bUseCellophane : 1;                                       // 0x0490(0x0004) (Edit)
	struct FColor                                      DistanceFogColor;                                         // 0x0494(0x0004) (Edit)
	float                                              DistanceFogStart;                                         // 0x0498(0x0004) (Edit)
	float                                              DistanceFogEnd;                                           // 0x049C(0x0004) (Edit)
	struct FColor                                      CellophaneColor;                                          // 0x04A0(0x0004) (Edit)
	float                                              KExtraLinearDamping;                                      // 0x04A4(0x0004) (Edit)
	float                                              KExtraAngularDamping;                                     // 0x04A8(0x0004) (Edit)
	float                                              KBuoyancy;                                                // 0x04AC(0x0004) (Edit)
	class APhysicsVolume*                              NextPhysicsVolume;                                        // 0x04B0(0x0004)
	unsigned long                                      bL2WaterVolume : 1;                                       // 0x04B4(0x0004) (Edit)
	unsigned long                                      bL2StepVolume : 1;                                        // 0x04B4(0x0004) (Edit)
	int                                                StepSoundID;                                              // 0x04B8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}


	void GetHitEffectName(struct FName* A, struct FName* B);
	void CausePainTo(class AActor* Other);
	void PlayExitSplash(class AActor* Other);
	void UnTouch(class AActor* Other);
	void PlayEntrySplash(class AActor* Other);
	void Touch(class AActor* Other);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void TimerPop(class AVolumeTimer* t);
	void PawnLeavingVolume(class APawn* Other);
	void PawnEnteredVolume(class APawn* Other);
	void ActorLeavingVolume(class AActor* Other);
	void ActorEnteredVolume(class AActor* Other);
	void PhysicsChangedFor(class AActor* Other);
	void PostBeginPlay();
};


// Class Engine.LadderVolume
// 0x0038 (0x04F4 - 0x04BC)
class ALadderVolume : public APhysicsVolume
{
public:
	struct FName                                       ClimbingAnimation;                                        // 0x04BC(0x0004) (Edit)
	struct FName                                       TopAnimation;                                             // 0x04C0(0x0004) (Edit)
	struct FRotator                                    WallDir;                                                  // 0x04C4(0x000C) (Edit)
	struct FVector                                     LookDir;                                                  // 0x04D0(0x000C)
	struct FVector                                     ClimbDir;                                                 // 0x04DC(0x000C)
	class ALadder*                                     LadderList;                                               // 0x04E8(0x0004) (Const)
	unsigned long                                      bNoPhysicalLadder : 1;                                    // 0x04EC(0x0004) (Edit)
	unsigned long                                      bAutoPath : 1;                                            // 0x04EC(0x0004) (Edit)
	class APawn*                                       PendingClimber;                                           // 0x04F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LadderVolume");
		return ptr;
	}


	void PhysicsChangedFor(class AActor* Other);
	void PawnLeavingVolume(class APawn* P);
	void PawnEnteredVolume(class APawn* P);
	bool InUse(class APawn* Ignored);
	void PostBeginPlay();
};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x04BC - 0x04BC)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}


	void Destroyed();
};


// Class Engine.LineOfSightTrigger
// 0x001C (0x03D8 - 0x03BC)
class ALineOfSightTrigger : public ATriggers
{
public:
	float                                              MaxViewDist;                                              // 0x03BC(0x0004) (Edit)
	float                                              OldTickTime;                                              // 0x03C0(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x03C4(0x0004) (Edit)
	unsigned long                                      bTriggered : 1;                                           // 0x03C4(0x0004)
	struct FName                                       SeenActorTag;                                             // 0x03C8(0x0004) (Edit)
	class AActor*                                      SeenActor;                                                // 0x03CC(0x0004)
	int                                                MaxViewAngle;                                             // 0x03D0(0x0004) (Edit)
	float                                              RequiredViewDir;                                          // 0x03D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineOfSightTrigger");
		return ptr;
	}


	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void PlayerSeesMe(class APlayerController* P);
	void PostBeginPlay();
};


// Class Engine.AIScript
// 0x000C (0x03C8 - 0x03BC)
class AAIScript : public AKeypoint
{
public:
	class UClass*                                      ControllerClass;                                          // 0x03BC(0x0004) (Edit)
	unsigned long                                      bNavigate : 1;                                            // 0x03C0(0x0004)
	unsigned long                                      bLoggingEnabled : 1;                                      // 0x03C0(0x0004)
	class AAIMarker*                                   myMarker;                                                 // 0x03C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AIScript");
		return ptr;
	}


	void TakeOver(class APawn* P);
	class AActor* GetMoveTarget();
	void SpawnControllerFor(class APawn* P);
};


// Class Engine.DamageType
// 0x00AC (0x0468 - 0x03BC)
class ADamageType : public AActor
{
public:
	struct FString                                     DeathString;                                              // 0x03BC(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     FemaleSuicide;                                            // 0x03C8(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     MaleSuicide;                                              // 0x03D4(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              ViewFlash;                                                // 0x03E0(0x0004) (Edit)
	struct FVector                                     ViewFog;                                                  // 0x03E4(0x000C) (Edit)
	class UClass*                                      DamageEffect;                                             // 0x03F0(0x0004) (Edit)
	struct FString                                     DamageWeaponName;                                         // 0x03F4(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bArmorStops : 1;                                          // 0x0400(0x0004) (Edit)
	unsigned long                                      bInstantHit : 1;                                          // 0x0400(0x0004) (Edit)
	unsigned long                                      bFastInstantHit : 1;                                      // 0x0400(0x0004) (Edit)
	unsigned long                                      bAlwaysGibs : 1;                                          // 0x0400(0x0004) (Edit)
	unsigned long                                      bNoSpecificLocation : 1;                                  // 0x0400(0x0004) (Edit)
	unsigned long                                      bSkeletize : 1;                                           // 0x0400(0x0004) (Edit)
	unsigned long                                      bCausesBlood : 1;                                         // 0x0400(0x0004) (Edit)
	unsigned long                                      bKUseOwnDeathVel : 1;                                     // 0x0400(0x0004) (Edit)
	float                                              GibModifier;                                              // 0x0404(0x0004) (Edit)
	class UClass*                                      PawnDamageEffect;                                         // 0x0408(0x0004) (Edit)
	class UClass*                                      PawnDamageEmitter;                                        // 0x040C(0x0004) (Edit)
	TArray<class USound*>                              PawnDamageSounds;                                         // 0x0410(0x000C) (Edit, NeedCtorLink)
	class UClass*                                      LowGoreDamageEffect;                                      // 0x041C(0x0004) (Edit)
	class UClass*                                      LowGoreDamageEmitter;                                     // 0x0420(0x0004) (Edit)
	TArray<class USound*>                              LowGoreDamageSounds;                                      // 0x0424(0x000C) (Edit, NeedCtorLink)
	class UClass*                                      LowDetailEffect;                                          // 0x0430(0x0004) (Edit)
	class UClass*                                      LowDetailEmitter;                                         // 0x0434(0x0004) (Edit)
	float                                              FlashScale;                                               // 0x0438(0x0004) (Edit)
	struct FVector                                     FlashFog;                                                 // 0x043C(0x000C) (Edit)
	int                                                DamageDesc;                                               // 0x0448(0x0004) (Edit)
	int                                                DamageThreshold;                                          // 0x044C(0x0004) (Edit)
	struct FVector                                     DamageKick;                                               // 0x0450(0x000C) (Edit)
	float                                              KDamageImpulse;                                           // 0x045C(0x0004) (Edit)
	float                                              KDeathVel;                                                // 0x0460(0x0004) (Edit)
	float                                              KDeathUpKick;                                             // 0x0464(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}


	struct FString GetWeaponClass();
	bool IsOfType(int Description);
	class USound* GetPawnDamageSound();
	class UClass* GetPawnDamageEmitter(const struct FVector& HitLocation, float Damage, const struct FVector& Momentum, class APawn* Victim, bool bLowDetail);
	class UClass* GetPawnDamageEffect(const struct FVector& HitLocation, float Damage, const struct FVector& Momentum, class APawn* Victim, bool bLowDetail);
	struct FString SuicideMessage(class APlayerReplicationInfo* Victim);
	struct FString DeathMessage(class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim);
	void IncrementKills(class AController* Killer);
};


// Class Engine.VehicleServerPart
// 0x0020 (0x0434 - 0x0414)
class AVehicleServerPart : public AStaticMeshActor
{
public:
	class USound*                                      SpawnSound;                                               // 0x0414(0x0004)
	class USound*                                      BasicSound;                                               // 0x0418(0x0004)
	class USound*                                      MoveUpSound;                                              // 0x041C(0x0004)
	class USound*                                      MoveDownSound;                                            // 0x0420(0x0004)
	class USound*                                      TurnSound;                                                // 0x0424(0x0004)
	TArray<class USound*>                              RandomSounds;                                             // 0x0428(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleServerPart");
		return ptr;
	}


	void PostBeginPlay();
	void PostSetPawnResource();
	void OnTurning();
	void OnMoveDown();
	void OnMoveUp();
	void OnBoost();
	void OnStop();
	void OnStart();
	void OnDriverOut();
	void OnDriverIn(int a_DriverID);
};


// Class Engine.VehicleMeshPart
// 0x0020 (0x1F2C - 0x1F0C)
class AVehicleMeshPart : public APawn
{
public:
	class USound*                                      SpawnSound;                                               // 0x1F0C(0x0004)
	class USound*                                      BasicSound;                                               // 0x1F10(0x0004)
	class USound*                                      MoveUpSound;                                              // 0x1F14(0x0004)
	class USound*                                      MoveDownSound;                                            // 0x1F18(0x0004)
	class USound*                                      TurnSound;                                                // 0x1F1C(0x0004)
	TArray<class USound*>                              RandomSounds;                                             // 0x1F20(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleMeshPart");
		return ptr;
	}


	void Destroyed();
	void PostBeginPlay();
	void PostSetPawnResource();
	void OnTurning();
	void OnMoveDown();
	void OnMoveUp();
	void OnBoost();
	void OnStop();
	void OnStart();
	void OnDriverOut();
	void OnDriverIn(int a_DriverID);
};


// Class Engine.VehiclePart
// 0x0020 (0x03DC - 0x03BC)
class AVehiclePart : public AActor
{
public:
	class USound*                                      SpawnSound;                                               // 0x03BC(0x0004)
	class USound*                                      BasicSound;                                               // 0x03C0(0x0004)
	class USound*                                      MoveUpSound;                                              // 0x03C4(0x0004)
	class USound*                                      MoveDownSound;                                            // 0x03C8(0x0004)
	class USound*                                      TurnSound;                                                // 0x03CC(0x0004)
	TArray<class USound*>                              RandomSounds;                                             // 0x03D0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehiclePart");
		return ptr;
	}


	void PostBeginPlay();
	void PostSetPawnResource();
	void OnTurning();
	void OnMoveDown();
	void OnMoveUp();
	void OnBoost();
	void OnStop();
	void OnStart();
	void OnDriverOut();
	void OnDriverIn(int a_DriverID);
};


// Class Engine.Mutator
// 0x003C (0x03F8 - 0x03BC)
class AMutator : public AInfo
{
public:
	class AMutator*                                    NextMutator;                                              // 0x03BC(0x0004)
	class UClass*                                      DefaultWeapon;                                            // 0x03C0(0x0004)
	struct FString                                     DefaultWeaponName;                                        // 0x03C4(0x000C) (NeedCtorLink)
	struct FString                                     GroupName;                                                // 0x03D0(0x000C) (Edit, NeedCtorLink)
	struct FString                                     FriendlyName;                                             // 0x03DC(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     Description;                                              // 0x03E8(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      bUserAdded : 1;                                           // 0x03F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Mutator");
		return ptr;
	}


	struct FString ParseChatPercVar(class AController* Who, const struct FString& Cmd);
	void GetServerPlayers(struct FServerResponseLine* ServerState);
	void GetServerDetails(struct FServerResponseLine* ServerState);
	void PlayerChangedClass(class AController* aPlayer);
	bool CheckReplacement(class AActor* Other, unsigned char* bSuperRelevant);
	bool CheckRelevance(class AActor* Other);
	bool IsRelevant(class AActor* Other, unsigned char* bSuperRelevant);
	bool AlwaysKeep(class AActor* Other);
	bool ReplaceWith(class AActor* Other, const struct FString& aClassName);
	void AddMutator(class AMutator* M);
	class UClass* MyDefaultWeapon();
	struct FString GetInventoryClassOverride(const struct FString& InventoryClassName);
	class UClass* GetInventoryClass(const struct FString& InventoryClassName);
	class UClass* GetDefaultWeapon();
	void ModifyPlayer(class APawn* Other);
	void ModifyLogin(struct FString* Portal, struct FString* Options);
	void Mutate(const struct FString& MutateString, class APlayerController* Sender);
	void Destroyed();
	bool MutatorIsAllowed();
	void PreBeginPlay();
};


// Class Engine.AIController
// 0x000C (0x0574 - 0x0568)
class AAIController : public AController
{
public:
	unsigned long                                      bHunting : 1;                                             // 0x0568(0x0004)
	unsigned long                                      bAdjustFromWalls : 1;                                     // 0x0568(0x0004)
	class AAIScript*                                   MyScript;                                                 // 0x056C(0x0004)
	float                                              Skill;                                                    // 0x0570(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AIController");
		return ptr;
	}


	void Startle(class AActor* A);
	bool PriorityObjective();
	void UnderLift(class AMover* M);
	void MoverFinished();
	void WaitForMover(class AMover* M);
	void PrepareForMove(class ANavigationPoint* Goal, class UReachSpec* Path);
	struct FName GetOrders();
	class AActor* GetOrderObject();
	void SetOrders(const struct FName& NewOrders, class AController* OrderGiver);
	void AdjustView(float DeltaTime);
	int GetFacingDirection();
	float AdjustDesireFor(class APickup* P);
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	bool TriggerScript(class AActor* Other, class APawn* EventInstigator);
	bool WeaponFireAgain(float RefireRate, bool bFinishedFire);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void Reset();
	void PreBeginPlay();
	void GetSlaveDestination(class APawn* P);
	void GetDestination(class APawn* P);
	void OwnerPossess(class APawn* aPawn);
	void WaitToSeeEnemy();
};


// Class Engine.Inventory
// 0x004C (0x0408 - 0x03BC)
class AInventory : public AActor
{
public:
	unsigned char                                      InventoryGroup;                                           // 0x03BC(0x0001)
	unsigned char                                      GroupOffset;                                              // 0x03BD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	unsigned long                                      bDisplayableInv : 1;                                      // 0x03C0(0x0004)
	unsigned long                                      bTossedOut : 1;                                           // 0x03C0(0x0004)
	class UClass*                                      PickupClass;                                              // 0x03C4(0x0004)
	int                                                Charge;                                                   // 0x03C8(0x0004) (Edit, Net)
	struct FVector                                     PlayerViewOffset;                                         // 0x03CC(0x000C) (Edit)
	struct FRotator                                    PlayerViewPivot;                                          // 0x03D8(0x000C) (Edit)
	unsigned long                                      bDrawingFirstPerson : 1;                                  // 0x03E4(0x0004) (Edit)
	float                                              BobDamping;                                               // 0x03E8(0x0004)
	class AActor*                                      ThirdPersonActor;                                         // 0x03EC(0x0004) (Net)
	class UClass*                                      AttachmentClass;                                          // 0x03F0(0x0004)
	class UMaterial*                                   Icon;                                                     // 0x03F4(0x0004)
	class UMaterial*                                   StatusIcon;                                               // 0x03F8(0x0004)
	struct FString                                     ItemName;                                                 // 0x03FC(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Inventory");
		return ptr;
	}


	struct FString StaticItemName();
	void SetOwnerDisplay();
	void OwnerEvent(const struct FName& EventName);
	class AWeapon* NextWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon);
	class AWeapon* PrevWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon);
	class AWeapon* WeaponChange(unsigned char f);
	void Use(float Value);
	void DropFrom(const struct FVector& StartLocation);
	class APowerups* SelectNext();
	bool HandlePickupQuery(class APickup* item);
	void GiveTo(class APawn* Other);
	void Destroyed();
	void TravelPostAccept();
	void TravelPreAccept();
	class AWeapon* RecommendWeapon(float* rating);
	void PickupFunction(class APawn* Other);
	struct FString GetHumanReadableName();
	void RenderOverlays(class UCanvas* Canvas);
	void DetachFromPawn(class APawn* P);
	void updaterelative(int Pitch, int Yaw, int Roll);
	void AttachToPawn(class APawn* P);
};


// Class Engine.Ammunition
// 0x0028 (0x0430 - 0x0408)
class AAmmunition : public AInventory
{
public:
	int                                                MaxAmmo;                                                  // 0x0408(0x0004)
	int                                                AmmoAmount;                                               // 0x040C(0x0004) (Net)
	int                                                PickupAmmo;                                               // 0x0410(0x0004)
	unsigned long                                      bRecommendSplashDamage : 1;                               // 0x0414(0x0004)
	unsigned long                                      bTossed : 1;                                              // 0x0414(0x0004)
	unsigned long                                      bTrySplash : 1;                                           // 0x0414(0x0004)
	unsigned long                                      bLeadTarget : 1;                                          // 0x0414(0x0004)
	unsigned long                                      bInstantHit : 1;                                          // 0x0414(0x0004)
	unsigned long                                      bSplashDamage : 1;                                        // 0x0414(0x0004)
	class UClass*                                      ProjectileClass;                                          // 0x0418(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x041C(0x0004)
	float                                              WarnTargetPct;                                            // 0x0420(0x0004)
	float                                              RefireRate;                                               // 0x0424(0x0004)
	class USound*                                      FireSound;                                                // 0x0428(0x0004)
	float                                              MaxAutoAimRange;                                          // 0x042C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Ammunition");
		return ptr;
	}


	float GetDamageRadius();
	bool AddAmmo(int AmmoToAdd);
	bool HandlePickupQuery(class APickup* item);
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	void ProcessTraceHit(class AWeapon* W, class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	void SpawnProjectile(const struct FVector& Start, const struct FRotator& Dir);
	void WarnTarget(class AActor* Target, class APawn* P, const struct FVector& FireDir);
	float RateSelf(class APawn* shooter, struct FName* RecommendedFiringMode);
	bool HasAmmo();
};


// Class Engine.Powerups
// 0x001C (0x0424 - 0x0408)
class APowerups : public AInventory
{
public:
	int                                                NumCopies;                                                // 0x0408(0x0004) (Net)
	unsigned long                                      bCanHaveMultipleCopies : 1;                               // 0x040C(0x0004) (Edit)
	unsigned long                                      bAutoActivate : 1;                                        // 0x040C(0x0004) (Edit)
	unsigned long                                      bActivatable : 1;                                         // 0x040C(0x0004) (Edit, Net)
	unsigned long                                      bActive : 1;                                              // 0x040C(0x0004) (Net)
	struct FString                                     ExpireMessage;                                            // 0x0410(0x000C) (Edit, Localized, NeedCtorLink)
	class USound*                                      ActivateSound;                                            // 0x041C(0x0004) (Edit)
	class USound*                                      DeActivateSound;                                          // 0x0420(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Powerups");
		return ptr;
	}


	struct FString GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2);
	void UsedUp();
	void FireEffect();
	float UseCharge(float Amount);
	bool HandlePickupQuery(class APickup* item);
	void Activate();
	class APowerups* SelectNext();
	void PickupFunction(class APawn* Other);
	void TravelPreAccept();
};


// Class Engine.Ammo
// 0x0004 (0x03F8 - 0x03F4)
class AAmmo : public APickup
{
public:
	int                                                AmmoAmount;                                               // 0x03F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Ammo");
		return ptr;
	}


	class AInventory* SpawnCopy(class APawn* Other);
	float BotDesireability(class APawn* Bot);
	float DetourWeight(class APawn* Other, float PathWeight);
};


// Class Engine.LevelSummary
// 0x0028 (0x005C - 0x0034)
class ULevelSummary : public UObject
{
public:
	struct FString                                     Title;                                                    // 0x0034(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     Author;                                                   // 0x0040(0x000C) (Edit, NeedCtorLink)
	int                                                IdealPlayerCount;                                         // 0x004C(0x0004) (Edit)
	struct FString                                     LevelEnterText;                                           // 0x0050(0x000C) (Edit, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelSummary");
		return ptr;
	}

};


// Class Engine.GameReplicationInfo
// 0x00C8 (0x0484 - 0x03BC)
class AGameReplicationInfo : public AReplicationInfo
{
public:
	struct FString                                     GameName;                                                 // 0x03BC(0x000C) (Net, NeedCtorLink)
	struct FString                                     GameClass;                                                // 0x03C8(0x000C) (Net, NeedCtorLink)
	unsigned long                                      bTeamGame : 1;                                            // 0x03D4(0x0004) (Net)
	unsigned long                                      bStopCountDown : 1;                                       // 0x03D4(0x0004) (Net)
	unsigned long                                      bMatchHasBegun : 1;                                       // 0x03D4(0x0004) (Net)
	unsigned long                                      bTeamSymbolsUpdated : 1;                                  // 0x03D4(0x0004)
	int                                                RemainingTime;                                            // 0x03D8(0x0004) (Net)
	int                                                ElapsedTime;                                              // 0x03DC(0x0004) (Net)
	int                                                RemainingMinute;                                          // 0x03E0(0x0004) (Net)
	float                                              SecondCount;                                              // 0x03E4(0x0004)
	int                                                GoalScore;                                                // 0x03E8(0x0004) (Net)
	int                                                TimeLimit;                                                // 0x03EC(0x0004) (Net)
	int                                                MaxLives;                                                 // 0x03F0(0x0004) (Net)
	class ATeamInfo*                                   Teams[0x2];                                               // 0x03F4(0x0004) (Net)
	struct FString                                     ServerName;                                               // 0x03FC(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     ShortName;                                                // 0x0408(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     AdminName;                                                // 0x0414(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     AdminEmail;                                               // 0x0420(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	int                                                ServerRegion;                                             // 0x042C(0x0004) (Edit, Net, Config, GlobalConfig)
	struct FString                                     MOTDLine1;                                                // 0x0430(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     MOTDLine2;                                                // 0x043C(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     MOTDLine3;                                                // 0x0448(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     MOTDLine4;                                                // 0x0454(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)
	class AActor*                                      Winner;                                                   // 0x0460(0x0004) (Net)
	TArray<class APlayerReplicationInfo*>              PRIArray;                                                 // 0x0464(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     FlagPos;                                                  // 0x0470(0x000C) (Net)
	TEnumAsByte<ECarriedObjectState>                   CarriedObjectState[0x2];                                  // 0x047C(0x0001) (Net)
	unsigned char                                      UnknownData00[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	int                                                MatchID;                                                  // 0x0480(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameReplicationInfo");
		return ptr;
	}


	void GetPRIArray(TArray<class APlayerReplicationInfo*>* pris);
	void RemovePRI(class APlayerReplicationInfo* PRI);
	void AddPRI(class APlayerReplicationInfo* PRI);
	void Timer();
	void Reset();
	void PostBeginPlay();
	void TeamSymbolNotify();
	void PostNetBeginPlay();
	struct FName GetCarriedObjectState(int Team);
	void SetCarriedObjectState(int Team, const struct FName& NewState);
};


// Class Engine.InternetInfo
// 0x0000 (0x03BC - 0x03BC)
class AInternetInfo : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InternetInfo");
		return ptr;
	}


	struct FString GetBeaconText(int i);
	struct FString GetBeaconAddress(int i);
};


// Class Engine.PlayerReplicationInfo
// 0x0090 (0x044C - 0x03BC)
class APlayerReplicationInfo : public AReplicationInfo
{
public:
	float                                              Score;                                                    // 0x03BC(0x0004) (Net)
	float                                              Deaths;                                                   // 0x03C0(0x0004) (Net)
	class ACarriedObject*                              HasFlag;                                                  // 0x03C4(0x0004)
	int                                                Ping;                                                     // 0x03C8(0x0004) (Net)
	class AVolume*                                     PlayerVolume;                                             // 0x03CC(0x0004) (Net)
	class AZoneInfo*                                   PlayerZone;                                               // 0x03D0(0x0004) (Net)
	int                                                NumLives;                                                 // 0x03D4(0x0004)
	struct FString                                     PlayerName;                                               // 0x03D8(0x000C) (Net, NeedCtorLink)
	struct FString                                     CharacterName;                                            // 0x03E4(0x000C) (Net, NeedCtorLink)
	struct FString                                     OldCharacterName;                                         // 0x03F0(0x000C) (NeedCtorLink)
	struct FString                                     OldName;                                                  // 0x03FC(0x000C) (NeedCtorLink)
	struct FString                                     PreviousName;                                             // 0x0408(0x000C) (NeedCtorLink)
	int                                                PlayerID;                                                 // 0x0414(0x0004)
	class ATeamInfo*                                   Team;                                                     // 0x0418(0x0004) (Net)
	int                                                TeamID;                                                   // 0x041C(0x0004) (Net)
	class UClass*                                      VoiceType;                                                // 0x0420(0x0004) (Net)
	unsigned long                                      bAdmin : 1;                                               // 0x0424(0x0004) (Net)
	unsigned long                                      bIsFemale : 1;                                            // 0x0424(0x0004) (Net)
	unsigned long                                      bIsSpectator : 1;                                         // 0x0424(0x0004) (Net)
	unsigned long                                      bOnlySpectator : 1;                                       // 0x0424(0x0004) (Net)
	unsigned long                                      bWaitingPlayer : 1;                                       // 0x0424(0x0004) (Net)
	unsigned long                                      bReadyToPlay : 1;                                         // 0x0424(0x0004) (Net)
	unsigned long                                      bOutOfLives : 1;                                          // 0x0424(0x0004) (Net)
	unsigned long                                      bBot : 1;                                                 // 0x0424(0x0004) (Net)
	unsigned long                                      bWelcomed : 1;                                            // 0x0424(0x0004)
	unsigned long                                      bReceivedPing : 1;                                        // 0x0424(0x0004)
	unsigned long                                      bHasFlag : 1;                                             // 0x0424(0x0004) (Net)
	int                                                StartTime;                                                // 0x0428(0x0004) (Net)
	struct FString                                     StringSpectating;                                         // 0x042C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     StringUnknown;                                            // 0x0438(0x000C) (Localized, NeedCtorLink)
	int                                                GoalsScored;                                              // 0x0444(0x0004)
	int                                                Kills;                                                    // 0x0448(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerReplicationInfo");
		return ptr;
	}


	void SetWaitingPlayer(bool B);
	void SetPlayerName(const struct FString& S);
	void Timer();
	void ClientNameChange();
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	void UpdatePlayerLocation();
	void UpdateCharacter();
	class UMaterial* GetPortrait();
	struct FString GetLocationName();
	struct FString GetHumanReadableName();
	void SetFlag(class ACarriedObject* NewFlag);
	void Reset();
	void SetCharacterName(const struct FString& S);
	void Destroyed();
	void PostNetBeginPlay();
	void PostBeginPlay();
};


// Class Engine.LiftExit
// 0x000C (0x0428 - 0x041C)
class ALiftExit : public ANavigationPoint
{
public:
	struct FName                                       LiftTag;                                                  // 0x041C(0x0004) (Edit)
	class AMover*                                      MyLift;                                                   // 0x0420(0x0004)
	unsigned char                                      SuggestedKeyFrame;                                        // 0x0424(0x0001) (Edit)
	unsigned char                                      KeyFrame;                                                 // 0x0425(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0426(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LiftExit");
		return ptr;
	}


	bool SuggestMovePreparation(class APawn* Other);
};


// Class Engine.LiftCenter
// 0x0020 (0x043C - 0x041C)
class ALiftCenter : public ANavigationPoint
{
public:
	struct FName                                       LiftTag;                                                  // 0x041C(0x0004) (Edit)
	class AMover*                                      MyLift;                                                   // 0x0420(0x0004)
	struct FName                                       LiftTrigger;                                              // 0x0424(0x0004) (Edit)
	class ATrigger*                                    RecommendedTrigger;                                       // 0x0428(0x0004)
	float                                              MaxDist2D;                                                // 0x042C(0x0004)
	struct FVector                                     LiftOffset;                                               // 0x0430(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LiftCenter");
		return ptr;
	}


	bool ProceedWithMove(class APawn* Other);
	bool SuggestMovePreparation(class APawn* Other);
	class AActor* SpecialHandling(class APawn* Other);
	void PostBeginPlay();
};


// Class Engine.SavedMove
// 0x002C (0x03E8 - 0x03BC)
class ASavedMove : public AInfo
{
public:
	class ASavedMove*                                  NextMove;                                                 // 0x03BC(0x0004)
	float                                              TimeStamp;                                                // 0x03C0(0x0004)
	float                                              Delta;                                                    // 0x03C4(0x0004)
	unsigned long                                      bRun : 1;                                                 // 0x03C8(0x0004)
	unsigned long                                      bDuck : 1;                                                // 0x03C8(0x0004)
	unsigned long                                      bPressedJump : 1;                                         // 0x03C8(0x0004)
	unsigned long                                      bDoubleJump : 1;                                          // 0x03C8(0x0004)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // 0x03CC(0x0001)
	TEnumAsByte<EPhysics>                              SavedPhysics;                                             // 0x03CD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	struct FVector                                     SavedLocation;                                            // 0x03D0(0x000C)
	struct FVector                                     SavedVelocity;                                            // 0x03DC(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SavedMove");
		return ptr;
	}


	void SetMoveFor(class APlayerController* P, float DeltaTime, const struct FVector& NewAccel, TEnumAsByte<EDoubleClickDir> InDoubleClick);
	void PostUpdate(class APlayerController* P);
	void Clear();
};


// Class Engine.HUD
// 0x0234 (0x05F0 - 0x03BC)
class AHUD : public AActor
{
public:
	class UFont*                                       SmallFont;                                                // 0x03BC(0x0004)
	class UFont*                                       MedFont;                                                  // 0x03C0(0x0004)
	class UFont*                                       BigFont;                                                  // 0x03C4(0x0004)
	class UFont*                                       LargeFont;                                                // 0x03C8(0x0004)
	struct FString                                     HUDConfigWindowType;                                      // 0x03CC(0x000C) (NeedCtorLink)
	class AHUD*                                        nextHUD;                                                  // 0x03D8(0x0004)
	class APlayerController*                           PlayerOwner;                                              // 0x03DC(0x0004)
	struct FString                                     ProgressFontName;                                         // 0x03E0(0x000C) (Localized, NeedCtorLink)
	class UFont*                                       ProgressFontFont;                                         // 0x03EC(0x0004)
	float                                              ProgressFadeTime;                                         // 0x03F0(0x0004)
	struct FColor                                      MOTDColor;                                                // 0x03F4(0x0004)
	class AScoreBoard*                                 ScoreBoard;                                               // 0x03F8(0x0004)
	unsigned long                                      bHideHUD : 1;                                             // 0x03FC(0x0004)
	unsigned long                                      bShowScores : 1;                                          // 0x03FC(0x0004)
	unsigned long                                      bShowDebugInfo : 1;                                       // 0x03FC(0x0004)
	unsigned long                                      bHideCenterMessages : 1;                                  // 0x03FC(0x0004)
	unsigned long                                      bBadConnectionAlert : 1;                                  // 0x03FC(0x0004)
	unsigned long                                      bMessageBeep : 1;                                         // 0x03FC(0x0004) (Config)
	float                                              HudCanvasScale;                                           // 0x0400(0x0004) (Config, GlobalConfig)
	struct FString                                     LoadingMessage;                                           // 0x0404(0x000C) (Localized, NeedCtorLink)
	struct FString                                     SavingMessage;                                            // 0x0410(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConnectingMessage;                                        // 0x041C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     PausedMessage;                                            // 0x0428(0x000C) (Localized, NeedCtorLink)
	struct FString                                     PrecachingMessage;                                        // 0x0434(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      ConsoleColor;                                             // 0x0440(0x0004)
	int                                                ConsoleMessageCount;                                      // 0x0444(0x0004) (Config, GlobalConfig)
	int                                                ConsoleFontSize;                                          // 0x0448(0x0004) (Config, GlobalConfig)
	int                                                MessageFontOffset;                                        // 0x044C(0x0004) (Config, GlobalConfig)
	struct FConsoleMessage                             TextMessages[0x8];                                        // 0x0450(0x0018) (NeedCtorLink)
	float                                              ConsoleMessagePosX;                                       // 0x0510(0x0004) (Edit)
	float                                              ConsoleMessagePosY;                                       // 0x0514(0x0004) (Edit)
	struct FString                                     FontArrayNames[0x9];                                      // 0x0518(0x000C) (Localized, NeedCtorLink)
	class UFont*                                       FontArrayFonts[0x9];                                      // 0x0584(0x0004)
	int                                                FontScreenWidthMedium[0x9];                               // 0x05A8(0x0004)
	int                                                FontScreenWidthSmall[0x9];                                // 0x05CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void DrawTargeting(class UCanvas* C);
	class UFont* LoadProgressFont();
	class UFont* LargerFontThan(class UFont* aFont);
	class UFont* GetMediumFontFor(class UCanvas* Canvas);
	class UFont* GetConsoleFont(class UCanvas* C);
	class UFont* LoadFont(int i);
	class UFont* LoadFontStatic(int i);
	void UseHugeFont(class UCanvas* Canvas);
	void UseLargeFont(class UCanvas* Canvas);
	void UseMediumFont(class UCanvas* Canvas);
	void UseSmallFont(class UCanvas* Canvas);
	void AddTextMessage(const struct FString& M, class UClass* MessageClass, class APlayerReplicationInfo* PRI);
	void DisplayMessages(class UCanvas* C);
	bool ProcessKeyEvent(int Key, int Action, float Delta);
	void PlayReceivedMessage(const struct FString& S, const struct FString& PName, class AZoneInfo* PZone);
	void LocalizedMessage(class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject, const struct FString& CriticalString);
	void DisplayPortrait(class APlayerReplicationInfo* PRI);
	void Message(class APlayerReplicationInfo* PRI, const struct FString& Msg, const struct FName& MsgType);
	void DisplayBadConnectionAlert();
	bool DrawLevelAction(class UCanvas* C);
	void DisplayProgressMessage(class UCanvas* C);
	void PrintActionMessage(class UCanvas* C, const struct FString& BigMessage);
	void DrawHUD(class UCanvas* Canvas);
	void DrawRoute();
	void DrawSpectatingHud(class UCanvas* C);
	void PostRender(class UCanvas* Canvas);
	void CopyMessage(const struct FHUDLocalizedMessage& M2, struct FHUDLocalizedMessage* M1);
	void ClearMessage(struct FHUDLocalizedMessage* M);
	void PlayStartupMessage(unsigned char Stage);
	void ShowUpgradeMenu();
	void ConnectFailure(const struct FString& FailCode, const struct FString& URL);
	void CheckCountdown(class AGameReplicationInfo* GRI);
	void WorldSpaceOverlays();
	void ShowDebug();
	void ShowScores();
	void Destroyed();
	void SpawnScoreBoard(class UClass* ScoringType);
	void PostBeginPlay();
	void Draw3DLine(const struct FVector& Start, const struct FVector& End, const struct FColor& LineColor);
};


// Class Engine.WarpZoneMarker
// 0x000C (0x0428 - 0x041C)
class AWarpZoneMarker : public ASmallNavigationPoint
{
public:
	class AWarpZoneInfo*                               markedWarpZone;                                           // 0x041C(0x0004)
	class AActor*                                      TriggerActor;                                             // 0x0420(0x0004)
	class AActor*                                      TriggerActor2;                                            // 0x0424(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WarpZoneMarker");
		return ptr;
	}


	class AActor* SpecialHandling(class APawn* Other);
	void FindTriggerActor();
	void PostBeginPlay();
};


// Class Engine.Trigger
// 0x0034 (0x03F0 - 0x03BC)
class ATrigger : public ATriggers
{
public:
	TEnumAsByte<ETriggerType>                          TriggerType;                                              // 0x03BC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x03C0(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      bTriggerOnceOnly : 1;                                     // 0x03CC(0x0004) (Edit)
	unsigned long                                      bInitiallyActive : 1;                                     // 0x03CC(0x0004) (Edit)
	class UClass*                                      ClassProximityType;                                       // 0x03D0(0x0004) (Edit)
	float                                              RepeatTriggerTime;                                        // 0x03D4(0x0004) (Edit)
	float                                              ReTriggerDelay;                                           // 0x03D8(0x0004) (Edit)
	float                                              TriggerTime;                                              // 0x03DC(0x0004)
	float                                              DamageThreshold;                                          // 0x03E0(0x0004) (Edit)
	class AActor*                                      TriggerActor;                                             // 0x03E4(0x0004)
	class AActor*                                      TriggerActor2;                                            // 0x03E8(0x0004)
	unsigned long                                      bSavedInitialCollision : 1;                               // 0x03EC(0x0004)
	unsigned long                                      bSavedInitialActive : 1;                                  // 0x03EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void Timer();
	void Touch(class AActor* Other);
	bool IsRelevant(class AActor* Other);
	void CheckTouchList();
	class AActor* SpecialHandling(class APawn* Other);
	void FindTriggerActor();
	void Reset();
	void PostBeginPlay();
	void PreBeginPlay();
};


// Class Engine.AIMarker
// 0x0004 (0x0420 - 0x041C)
class AAIMarker : public ASmallNavigationPoint
{
public:
	class AAIScript*                                   markedScript;                                             // 0x041C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AIMarker");
		return ptr;
	}

};


// Class Engine.InventorySpot
// 0x0004 (0x0420 - 0x041C)
class AInventorySpot : public ASmallNavigationPoint
{
public:
	class APickup*                                     markedItem;                                               // 0x041C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InventorySpot");
		return ptr;
	}


	float DetourWeight(class APawn* Other, float PathWeight);
	class AActor* GetMoveTargetFor(class AAIController* B, float MaxWait);
};


// Class Engine.PlayerStart
// 0x000C (0x0428 - 0x041C)
class APlayerStart : public ASmallNavigationPoint
{
public:
	unsigned char                                      TeamNumber;                                               // 0x041C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	unsigned long                                      bSinglePlayerStart : 1;                                   // 0x0420(0x0004) (Edit)
	unsigned long                                      bCoopStart : 1;                                           // 0x0420(0x0004) (Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x0420(0x0004) (Edit)
	unsigned long                                      bPrimaryStart : 1;                                        // 0x0420(0x0004) (Edit)
	float                                              LastSpawnCampTime;                                        // 0x0424(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.Teleporter
// 0x002C (0x0448 - 0x041C)
class ATeleporter : public ASmallNavigationPoint
{
public:
	struct FString                                     URL;                                                      // 0x041C(0x000C) (Edit, Net, NeedCtorLink)
	struct FName                                       ProductRequired;                                          // 0x0428(0x0004) (Edit)
	unsigned long                                      bChangesVelocity : 1;                                     // 0x042C(0x0004) (Edit, Net)
	unsigned long                                      bChangesYaw : 1;                                          // 0x042C(0x0004) (Edit, Net)
	unsigned long                                      bReversesX : 1;                                           // 0x042C(0x0004) (Edit, Net)
	unsigned long                                      bReversesY : 1;                                           // 0x042C(0x0004) (Edit, Net)
	unsigned long                                      bReversesZ : 1;                                           // 0x042C(0x0004) (Edit, Net)
	unsigned long                                      bEnabled : 1;                                             // 0x042C(0x0004) (Edit, Net)
	struct FVector                                     TargetVelocity;                                           // 0x0430(0x000C) (Edit, Net)
	class AActor*                                      TriggerActor;                                             // 0x043C(0x0004)
	class AActor*                                      TriggerActor2;                                            // 0x0440(0x0004)
	float                                              LastFired;                                                // 0x0444(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Teleporter");
		return ptr;
	}


	class AActor* SpecialHandling(class APawn* Other);
	void PostTouch(class AActor* Other);
	void Touch(class AActor* Other);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	bool Accept(class AActor* Incoming, class AActor* Source);
	void FindTriggerActor();
	void PostBeginPlay();
};


// Class Engine.ZoneInfo
// 0x00FC (0x04B8 - 0x03BC)
class AZoneInfo : public AInfo
{
public:
	class ASkyZoneInfo*                                SkyZone;                                                  // 0x03BC(0x0004)
	struct FName                                       ZoneTag;                                                  // 0x03C0(0x0004) (Edit)
	struct FString                                     LocationName;                                             // 0x03C4(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              KillZ;                                                    // 0x03D0(0x0004) (Edit)
	TEnumAsByte<EeKillZType>                           KillZType;                                                // 0x03D4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	unsigned long                                      bSoftKillZ : 1;                                           // 0x03D8(0x0004) (Edit)
	unsigned long                                      bFogZone : 1;                                             // 0x03D8(0x0004) (Edit, Const)
	unsigned long                                      bTerrainZone : 1;                                         // 0x03D8(0x0004) (Edit)
	unsigned long                                      bDistanceFog : 1;                                         // 0x03D8(0x0004) (Edit)
	unsigned long                                      bClearToFogColor : 1;                                     // 0x03D8(0x0004) (Edit)
	TArray<class ATerrainInfo*>                        Terrains;                                                 // 0x03DC(0x000C) (Const, NeedCtorLink)
	struct FVector                                     AmbientVector;                                            // 0x03E8(0x000C)
	unsigned char                                      AmbientBrightness;                                        // 0x03F4(0x0001) (Edit)
	unsigned char                                      AmbientHue;                                               // 0x03F5(0x0001) (Edit)
	unsigned char                                      AmbientSaturation;                                        // 0x03F6(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03F7(0x0001) MISSED OFFSET
	struct FColor                                      DistanceFogColor;                                         // 0x03F8(0x0004) (Edit)
	float                                              DistanceFogStart;                                         // 0x03FC(0x0004) (Edit)
	float                                              DistanceFogEnd;                                           // 0x0400(0x0004) (Edit)
	float                                              DistanceFogBlendTime;                                     // 0x0404(0x0004) (Edit)
	class UTexture*                                    EnvironmentMap;                                           // 0x0408(0x0004) (Edit, Const)
	float                                              TexUPanSpeed;                                             // 0x040C(0x0004) (Edit)
	float                                              TexVPanSpeed;                                             // 0x0410(0x0004) (Edit)
	class UI3DL2Listener*                              ZoneEffect;                                               // 0x0414(0x0004) (Edit, EditInline)
	class UTexture*                                    LensFlare[0xC];                                           // 0x0418(0x0004) (Edit)
	float                                              LensFlareOffset[0xC];                                     // 0x0448(0x0004) (Edit)
	float                                              LensFlareScale[0xC];                                      // 0x0478(0x0004) (Edit)
	unsigned long                                      bLonelyZone : 1;                                          // 0x04A8(0x0004) (Edit)
	TArray<class AZoneInfo*>                           ManualExcludes;                                           // 0x04AC(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ZoneInfo");
		return ptr;
	}


	void ActorLeaving(class AActor* Other);
	void ActorEntered(class AActor* Other);
	void PreBeginPlay();
	void LinkToSkybox();
	void ZoneActors(class UClass* BaseClass, class AActor** Actor);
};


// Class Engine.WarpZoneInfo
// 0x00B4 (0x056C - 0x04B8)
class AWarpZoneInfo : public AZoneInfo
{
public:
	struct FString                                     OtherSideURL;                                             // 0x04B8(0x000C) (Edit, Net, NeedCtorLink)
	struct FName                                       ThisTag;                                                  // 0x04C4(0x0004) (Edit, Net)
	unsigned long                                      bNoTeleFrag : 1;                                          // 0x04C8(0x0004) (Edit)
	int                                                iWarpZone;                                                // 0x04CC(0x0004) (Const)
	struct FCoords                                     WarpCoords;                                               // 0x04D0(0x0030) (Const)
	class AWarpZoneInfo*                               OtherSideActor;                                           // 0x0500(0x0004) (Net, Transient)
	class UObject*                                     OtherSideLevel;                                           // 0x0504(0x0004) (Transient)
	struct FString                                     Destinations[0x8];                                        // 0x0508(0x000C) (Edit, NeedCtorLink)
	int                                                numDestinations;                                          // 0x0568(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WarpZoneInfo");
		return ptr;
	}


	void ActorLeaving(class AActor* Other);
	void ActorEntered(class AActor* Other);
	void ForceGenerate();
	void Generate();
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void PreBeginPlay();
	void UnWarp(struct FVector* Loc, struct FVector* Vel, struct FRotator* R);
	void Warp(struct FVector* Loc, struct FVector* Vel, struct FRotator* R);
};


// Class Engine.Projectile
// 0x0030 (0x03EC - 0x03BC)
class AProjectile : public AActor
{
public:
	float                                              Speed;                                                    // 0x03BC(0x0004)
	float                                              MaxSpeed;                                                 // 0x03C0(0x0004)
	float                                              TossZ;                                                    // 0x03C4(0x0004)
	unsigned long                                      bSwitchToZeroCollision : 1;                               // 0x03C8(0x0004)
	float                                              Damage;                                                   // 0x03CC(0x0004)
	float                                              DamageRadius;                                             // 0x03D0(0x0004)
	float                                              MomentumTransfer;                                         // 0x03D4(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x03D8(0x0004)
	class USound*                                      SpawnSound;                                               // 0x03DC(0x0004)
	class USound*                                      ImpactSound;                                              // 0x03E0(0x0004)
	class UClass*                                      ExplosionDecal;                                           // 0x03E4(0x0004)
	float                                              ExploWallOut;                                             // 0x03E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Projectile");
		return ptr;
	}


	struct FVector GetTossVelocity(class APawn* P, const struct FRotator& R);
	void RandSpin(float spinRate);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void BlowUp(const struct FVector& HitLocation);
	void HitWall(const struct FVector& HitNormal, class AActor* Wall);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation);
	void Touch(class AActor* Other);
	bool EncroachingOn(class AActor* Other);
};


// Class Engine.Decoration
// 0x0038 (0x03F4 - 0x03BC)
class ADecoration : public AActor
{
public:
	class UClass*                                      EffectWhenDestroyed;                                      // 0x03BC(0x0004) (Edit)
	unsigned long                                      bPushable : 1;                                            // 0x03C0(0x0004) (Edit)
	unsigned long                                      bDamageable : 1;                                          // 0x03C0(0x0004) (Edit)
	unsigned long                                      bPushSoundPlaying : 1;                                    // 0x03C0(0x0004)
	unsigned long                                      bSplash : 1;                                              // 0x03C0(0x0004)
	class USound*                                      PushSound;                                                // 0x03C4(0x0004) (Edit)
	class USound*                                      EndPushSound;                                             // 0x03C8(0x0004) (Edit)
	int                                                numLandings;                                              // 0x03CC(0x0004) (Const)
	class UClass*                                      contents;                                                 // 0x03D0(0x0004) (Edit)
	int                                                NumFrags;                                                 // 0x03D4(0x0004) (Edit)
	class UTexture*                                    FragSkin;                                                 // 0x03D8(0x0004) (Edit)
	class UClass*                                      FragType;                                                 // 0x03DC(0x0004) (Edit)
	struct FVector                                     FragMomentum;                                             // 0x03E0(0x000C)
	int                                                Health;                                                   // 0x03EC(0x0004) (Edit)
	float                                              SplashTime;                                               // 0x03F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Decoration");
		return ptr;
	}


	void Bump(class AActor* Other);
	void Timer();
	void Destroyed();
	void BaseChange();
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void PhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void TakeDamage(int NDamage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void HitWall(const struct FVector& HitNormal, class AActor* Wall);
	void Landed(const struct FVector& HitNormal);
	void Drop(const struct FVector& newVel);
	bool CanSplash();
};


// Class Engine.InterpolationPoint
// 0x0000 (0x03BC - 0x03BC)
class AInterpolationPoint : public AKeypoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpolationPoint");
		return ptr;
	}

};


// Class Engine.Scout
// 0x0004 (0x1F10 - 0x1F0C)
class AScout : public APawn
{
public:
	float                                              MaxLandingVelocity;                                       // 0x1F0C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scout");
		return ptr;
	}


	void PreBeginPlay();
};


// Class Engine.PathNode
// 0x0000 (0x041C - 0x041C)
class APathNode : public ANavigationPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathNode");
		return ptr;
	}

};


// Class Engine.ReachSpec
// 0x0024 (0x0058 - 0x0034)
class UReachSpec : public UObject
{
public:
	int                                                Distance;                                                 // 0x0034(0x0004)
	class ANavigationPoint*                            Start;                                                    // 0x0038(0x0004) (Const)
	class ANavigationPoint*                            End;                                                      // 0x003C(0x0004) (Const)
	int                                                CollisionRadius;                                          // 0x0040(0x0004)
	int                                                CollisionHeight;                                          // 0x0044(0x0004)
	int                                                reachFlags;                                               // 0x0048(0x0004)
	int                                                MaxLandingVelocity;                                       // 0x004C(0x0004)
	unsigned char                                      bPruned;                                                  // 0x0050(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	unsigned long                                      bForced : 1;                                              // 0x0054(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReachSpec");
		return ptr;
	}

};


// Class Engine.SkyZoneInfo
// 0x0000 (0x04B8 - 0x04B8)
class ASkyZoneInfo : public AZoneInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyZoneInfo");
		return ptr;
	}

};


// Class Engine.Camera
// 0x0000 (0x0858 - 0x0858)
class ACamera : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Camera");
		return ptr;
	}

};


// Class Engine.GameInfo
// 0x021C (0x05D8 - 0x03BC)
class AGameInfo : public AInfo
{
public:
	unsigned long                                      bRestartLevel : 1;                                        // 0x03BC(0x0004)
	unsigned long                                      bPauseable : 1;                                           // 0x03BC(0x0004)
	unsigned long                                      bWeaponStay : 1;                                          // 0x03BC(0x0004) (Config)
	unsigned long                                      bCanChangeSkin : 1;                                       // 0x03BC(0x0004)
	unsigned long                                      bTeamGame : 1;                                            // 0x03BC(0x0004)
	unsigned long                                      bGameEnded : 1;                                           // 0x03BC(0x0004)
	unsigned long                                      bOverTime : 1;                                            // 0x03BC(0x0004)
	unsigned long                                      bAlternateMode : 1;                                       // 0x03BC(0x0004) (Localized)
	unsigned long                                      bCanViewOthers : 1;                                       // 0x03BC(0x0004)
	unsigned long                                      bDelayedStart : 1;                                        // 0x03BC(0x0004)
	unsigned long                                      bWaitingToStartMatch : 1;                                 // 0x03BC(0x0004)
	unsigned long                                      bChangeLevels : 1;                                        // 0x03BC(0x0004) (Config, GlobalConfig)
	unsigned long                                      bAlreadyChanged : 1;                                      // 0x03BC(0x0004)
	unsigned long                                      bLoggingGame : 1;                                         // 0x03BC(0x0004)
	unsigned long                                      bEnableStatLogging : 1;                                   // 0x03BC(0x0004) (Config, GlobalConfig)
	unsigned long                                      bAllowWeaponThrowing : 1;                                 // 0x03BC(0x0004) (Config)
	float                                              GameDifficulty;                                           // 0x03C0(0x0004) (Config, GlobalConfig)
	int                                                GoreLevel;                                                // 0x03C4(0x0004) (Config, GlobalConfig)
	float                                              AutoAim;                                                  // 0x03C8(0x0004) (Config, GlobalConfig)
	float                                              GameSpeed;                                                // 0x03CC(0x0004) (Config, GlobalConfig)
	float                                              StartTime;                                                // 0x03D0(0x0004)
	struct FString                                     DefaultPlayerClassName;                                   // 0x03D4(0x000C) (NeedCtorLink)
	struct FString                                     ScoreBoardType;                                           // 0x03E0(0x000C) (NeedCtorLink)
	struct FString                                     BotMenuType;                                              // 0x03EC(0x000C) (NeedCtorLink)
	struct FString                                     RulesMenuType;                                            // 0x03F8(0x000C) (NeedCtorLink)
	struct FString                                     SettingsMenuType;                                         // 0x0404(0x000C) (NeedCtorLink)
	struct FString                                     GameUMenuType;                                            // 0x0410(0x000C) (NeedCtorLink)
	struct FString                                     MultiplayerUMenuType;                                     // 0x041C(0x000C) (NeedCtorLink)
	struct FString                                     GameOptionsMenuType;                                      // 0x0428(0x000C) (NeedCtorLink)
	struct FString                                     HUDType;                                                  // 0x0434(0x000C) (NeedCtorLink)
	struct FString                                     MapListType;                                              // 0x0440(0x000C) (NeedCtorLink)
	struct FString                                     MapPrefix;                                                // 0x044C(0x000C) (NeedCtorLink)
	struct FString                                     BeaconName;                                               // 0x0458(0x000C) (NeedCtorLink)
	int                                                MaxSpectators;                                            // 0x0464(0x0004) (Config, GlobalConfig)
	int                                                NumSpectators;                                            // 0x0468(0x0004)
	int                                                MaxPlayers;                                               // 0x046C(0x0004) (Config, GlobalConfig)
	int                                                NumPlayers;                                               // 0x0470(0x0004)
	int                                                NumBots;                                                  // 0x0474(0x0004)
	int                                                CurrentID;                                                // 0x0478(0x0004)
	struct FString                                     DefaultPlayerName;                                        // 0x047C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     GameName;                                                 // 0x0488(0x000C) (Localized, NeedCtorLink)
	float                                              FearCostFallOff;                                          // 0x0494(0x0004)
	int                                                GoalScore;                                                // 0x0498(0x0004) (Config)
	int                                                MaxLives;                                                 // 0x049C(0x0004) (Config)
	int                                                TimeLimit;                                                // 0x04A0(0x0004) (Config)
	class UClass*                                      DeathMessageClass;                                        // 0x04A4(0x0004)
	class UClass*                                      GameMessageClass;                                         // 0x04A8(0x0004)
	struct FName                                       OtherMesgGroup;                                           // 0x04AC(0x0004)
	struct FString                                     MutatorClass;                                             // 0x04B0(0x000C) (NeedCtorLink)
	class AMutator*                                    BaseMutator;                                              // 0x04BC(0x0004)
	struct FString                                     AccessControlClass;                                       // 0x04C0(0x000C) (Config, GlobalConfig, NeedCtorLink)
	class AAccessControl*                              AccessControl;                                            // 0x04CC(0x0004)
	class AGameRules*                                  GameRulesModifiers;                                       // 0x04D0(0x0004)
	struct FString                                     BroadcastHandlerClass;                                    // 0x04D4(0x000C) (NeedCtorLink)
	class ABroadcastHandler*                           BroadcastHandler;                                         // 0x04E0(0x0004)
	class UClass*                                      PlayerControllerClass;                                    // 0x04E4(0x0004)
	struct FString                                     PlayerControllerClassName;                                // 0x04E8(0x000C) (NeedCtorLink)
	class UClass*                                      GameReplicationInfoClass;                                 // 0x04F4(0x0004) (Edit)
	class AGameReplicationInfo*                        GameReplicationInfo;                                      // 0x04F8(0x0004)
	unsigned long                                      bWelcomePending : 1;                                      // 0x04FC(0x0004)
	class AGameStats*                                  GameStats;                                                // 0x0500(0x0004)
	class UClass*                                      GameStatsClass;                                           // 0x0504(0x0004)
	TArray<struct FVoiceChatterInfo>                   VoiceChatters;                                            // 0x0508(0x000C) (NeedCtorLink)
	class UClass*                                      SecurityClass;                                            // 0x0514(0x0004)
	struct FString                                     ScreenShotName;                                           // 0x0518(0x000C) (Edit, NeedCtorLink)
	struct FString                                     DecoTextName;                                             // 0x0524(0x000C) (Edit, NeedCtorLink)
	struct FString                                     Acronym;                                                  // 0x0530(0x000C) (Edit, NeedCtorLink)
	struct FString                                     GIPropsDisplayText[0xB];                                  // 0x053C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     GIPropsExtras[0x2];                                       // 0x05C0(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInfo");
		return ptr;
	}


	void AdminSay(const struct FString& Msg);
	void KillBots(int Num);
	class ATeamInfo* OtherTeam(class ATeamInfo* Requester);
	void ReviewJumpSpots(const struct FName& TestLabel);
	struct FString ParseMessageString(class AMutator* BaseMutator, class AController* Who, const struct FString& Message);
	struct FString FindTeamDesignation(class AGameReplicationInfo* GRI, class AActor* A);
	bool TooManyBots();
	void ScoreKill(class AController* Killer, class AController* Other);
	void CheckScore(class APlayerReplicationInfo* Scorer);
	void ScoreObjective(class APlayerReplicationInfo* Scorer, int Score);
	float RatePlayerStart(class ANavigationPoint* N, unsigned char Team, class AController* Player);
	class ANavigationPoint* FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& incomingName);
	void EndLogging(const struct FString& Reason);
	void EndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	bool CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	void BroadcastLocalized(class AActor* Sender, class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void BroadcastTeam(class AController* Sender, const struct FString& Msg, const struct FName& type);
	void Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& type);
	class AMapList* GetMapList(const struct FString& MapListType);
	void RestartGame();
	void SendPlayer(class APlayerController* aPlayer, const struct FString& URL);
	unsigned char PickTeam(unsigned char Current, class AController* C);
	bool ChangeTeam(class AController* Other, int N, bool bNewTeam);
	void ChangeName(class AController* Other, const struct FString& S, bool bNameChange);
	void DiscardInventory(class APawn* Other);
	bool PickupQuery(class APawn* Other, class APickup* item);
	bool ShouldRespawn(class APickup* Other);
	int ReduceDamage(int Damage, class APawn* injured, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	bool CanSpectate(class APlayerController* Viewer, bool bOnlySpectator, class AActor* ViewTarget);
	bool IsOnTeam(class AController* Other, int TeamNum);
	void KickBan(const struct FString& S);
	void Kick(const struct FString& S);
	struct FString ParseKillMessage(const struct FString& KillerName, const struct FString& VictimName, const struct FString& DeathMessage);
	void BroadcastDeathMessage(class AController* Killer, class AController* Other, class UClass* DamageType);
	bool PreventDeath(class APawn* Killed, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Killed(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType);
	void NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn);
	void SetPlayerDefaults(class APawn* PlayerPawn);
	void AddDefaultInventory(class APawn* PlayerPawn);
	void AddGameSpecificInventory(class APawn* P);
	void AcceptInventory(class APawn* PlayerPawn);
	void Logout(class AController* Exiting);
	void L2NetPostLogin(class APlayerController* NewPlayer);
	void PostLogin(class APlayerController* NewPlayer);
	class UClass* GetDefaultPlayerClass(class AController* C);
	void RestartPlayer(class AController* aPlayer);
	void SpawnPlayerPawn(class AController* aPlayer, const struct FString& PawnClassName, const struct FVector& StartLocation, const struct FRotator& StartRotation);
	void SpawnDefaultPlayerPawn(class AController* aPlayer);
	void L2NetStartMatch();
	void StartMatch();
	class APlayerController* L2NetLogin(const struct FString& Portal, const struct FString& Options, struct FString* Error);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, struct FString* Error);
	bool AtCapacity(bool bSpectator);
	int GetIntOption(const struct FString& Options, const struct FString& ParseString, int CurrentValue);
	void PreLogin(const struct FString& Options, const struct FString& Address, struct FString* Error, struct FString* FailCode);
	void ProcessServerTravel(const struct FString& URL, bool bItems);
	struct FString GetBeaconText();
	void AddMutator(const struct FString& mutname, bool bUserAdded);
	void InitGame(const struct FString& Options, struct FString* Error);
	struct FString ParseOption(const struct FString& Options, const struct FString& InKey);
	void GetKeyValue(const struct FString& Pair, struct FString* Key, struct FString* Value);
	bool GrabOption(struct FString* Options, struct FString* Result);
	void DetailChange();
	void SetGameSpeed(float t);
	void ChangeVoiceChatter(class AController* Client, int IpAddr, int Handle, bool Add);
	bool SetPause(bool bPause, class APlayerController* P);
	int GetServerPort();
	void GetServerPlayers(struct FServerResponseLine* ServerState);
	void GetServerDetails(struct FServerResponseLine* ServerState);
	int GetNumPlayers();
	void GetServerInfo(struct FServerResponseLine* ServerState);
	struct FString GetNetworkNumber();
	void InitGameReplicationInfo();
	void GameEnding();
	void Timer();
	void InitLogging();
	void Reset();
	void PostBeginPlay();
	bool UseLowGore();
	struct FString FindPlayerByID(int PlayerID);
	void PrecacheGameStaticMeshes(class ALevelInfo* myLevel);
	void PrecacheGameTextures(class ALevelInfo* myLevel);
	void UpdatePrecacheStaticMeshes();
	void UpdatePrecacheMaterials();
	void PreBeginPlay();
};


// Class Engine.LevelInfo
// 0x01A0 (0x0658 - 0x04B8)
class ALevelInfo : public AZoneInfo
{
public:
	float                                              TimeDilation;                                             // 0x04B8(0x0004) (Edit, Net)
	float                                              TimeSeconds;                                              // 0x04BC(0x0004)
	int                                                Year;                                                     // 0x04C0(0x0004) (Transient)
	int                                                Month;                                                    // 0x04C4(0x0004) (Transient)
	int                                                Day;                                                      // 0x04C8(0x0004) (Transient)
	int                                                DayOfWeek;                                                // 0x04CC(0x0004) (Transient)
	int                                                Hour;                                                     // 0x04D0(0x0004) (Transient)
	int                                                Minute;                                                   // 0x04D4(0x0004) (Transient)
	int                                                Second;                                                   // 0x04D8(0x0004) (Transient)
	int                                                Millisecond;                                              // 0x04DC(0x0004) (Transient)
	float                                              PauseDelay;                                               // 0x04E0(0x0004)
	float                                              DecalStayScale;                                           // 0x04E4(0x0004) (Config)
	TEnumAsByte<EPhysicsDetailLevel>                   PhysicsDetailLevel;                                       // 0x04E8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              KarmaTimeScale;                                           // 0x04EC(0x0004) (Edit, Net)
	float                                              RagdollTimeScale;                                         // 0x04F0(0x0004) (Edit, Net)
	int                                                MaxRagdolls;                                              // 0x04F4(0x0004) (Edit)
	float                                              KarmaGravScale;                                           // 0x04F8(0x0004) (Edit, Net)
	unsigned long                                      bKStaticFriction : 1;                                     // 0x04FC(0x0004) (Edit)
	unsigned long                                      bKNoInit : 1;                                             // 0x04FC(0x0004) (Edit)
	struct FString                                     Title;                                                    // 0x0500(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     Author;                                                   // 0x050C(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LevelEnterText;                                           // 0x0518(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     LocalizedPkg;                                             // 0x0524(0x000C) (Edit, NeedCtorLink)
	class APlayerReplicationInfo*                      Pauser;                                                   // 0x0530(0x0004) (Net)
	int                                                RecommendedNumPlayers;                                    // 0x0534(0x0004) (Edit)
	class ULevelSummary*                               Summary;                                                  // 0x0538(0x0004)
	struct FString                                     VisibleGroups;                                            // 0x053C(0x000C) (NeedCtorLink)
	struct FString                                     SelectedGroups;                                           // 0x0548(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bLonePlayer : 1;                                          // 0x0554(0x0004) (Edit)
	unsigned long                                      bBegunPlay : 1;                                           // 0x0554(0x0004)
	unsigned long                                      bPlayersOnly : 1;                                         // 0x0554(0x0004)
	TEnumAsByte<EDetailMode>                           DetailMode;                                               // 0x0558(0x0001) (Const)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	unsigned long                                      bDropDetail : 1;                                          // 0x055C(0x0004)
	unsigned long                                      bAggressiveLOD : 1;                                       // 0x055C(0x0004)
	unsigned long                                      bStartup : 1;                                             // 0x055C(0x0004)
	unsigned long                                      bPathsRebuilt : 1;                                        // 0x055C(0x0004)
	unsigned long                                      bHasPathNodes : 1;                                        // 0x055C(0x0004)
	unsigned long                                      bCapFramerate : 1;                                        // 0x055C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bNeverPrecache : 1;                                       // 0x055C(0x0004) (Config)
	struct FVector                                     CameraLocationDynamic;                                    // 0x0560(0x000C) (Edit)
	struct FVector                                     CameraLocationTop;                                        // 0x056C(0x000C) (Edit)
	struct FVector                                     CameraLocationFront;                                      // 0x0578(0x000C) (Edit)
	struct FVector                                     CameraLocationSide;                                       // 0x0584(0x000C) (Edit)
	struct FRotator                                    CameraRotationDynamic;                                    // 0x0590(0x000C) (Edit)
	struct FString                                     Song;                                                     // 0x059C(0x000C) (Edit, NeedCtorLink)
	float                                              PlayerDoppler;                                            // 0x05A8(0x0004) (Edit)
	float                                              MusicVolumeOverride;                                      // 0x05AC(0x0004) (Edit)
	float                                              Brightness;                                               // 0x05B0(0x0004) (Edit)
	class UTexture*                                    Screenshot;                                               // 0x05B4(0x0004) (Edit)
	class UTexture*                                    DefaultTexture;                                           // 0x05B8(0x0004)
	class UTexture*                                    WireframeTexture;                                         // 0x05BC(0x0004)
	class UTexture*                                    WhiteSquareTexture;                                       // 0x05C0(0x0004)
	class UTexture*                                    LargeVertex;                                              // 0x05C4(0x0004)
	int                                                HubStackLevel;                                            // 0x05C8(0x0004)
	TEnumAsByte<ELevelAction>                          LevelAction;                                              // 0x05CC(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	class AGameReplicationInfo*                        GRI;                                                      // 0x05D0(0x0004) (Transient)
	TEnumAsByte<ENetMode>                              NetMode;                                                  // 0x05D4(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05D5(0x0003) MISSED OFFSET
	struct FString                                     ComputerName;                                             // 0x05D8(0x000C) (NeedCtorLink)
	struct FString                                     EngineVersion;                                            // 0x05E4(0x000C) (NeedCtorLink)
	struct FString                                     MinNetVersion;                                            // 0x05F0(0x000C) (NeedCtorLink)
	struct FString                                     DefaultGameType;                                          // 0x05FC(0x000C) (Edit, NeedCtorLink)
	struct FString                                     PreCacheGame;                                             // 0x0608(0x000C) (Edit, NeedCtorLink)
	class AGameInfo*                                   Game;                                                     // 0x0614(0x0004)
	float                                              DefaultGravity;                                           // 0x0618(0x0004) (Net)
	class ANavigationPoint*                            NavigationPointList;                                      // 0x061C(0x0004) (Const)
	class AController*                                 ControllerList;                                           // 0x0620(0x0004) (Const)
	class APlayerController*                           LocalPlayerController;                                    // 0x0624(0x0004)
	struct FString                                     NextURL;                                                  // 0x0628(0x000C) (NeedCtorLink)
	unsigned long                                      bNextItems : 1;                                           // 0x0634(0x0004)
	float                                              NextSwitchCountdown;                                      // 0x0638(0x0004)
	class UObjectPool*                                 ObjectPool;                                               // 0x063C(0x0004) (Transient)
	TArray<class UMaterial*>                           PrecacheMaterials;                                        // 0x0640(0x000C) (Transient, NeedCtorLink)
	TArray<class UStaticMesh*>                         PrecacheStaticMeshes;                                     // 0x064C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelInfo");
		return ptr;
	}


	class APlayerController* GetLocalPlayerController();
	void PreBeginPlay();
	void Reset();
	void ThisIsNeverExecuted();
	void ServerTravel(const struct FString& URL, bool bItems);
	struct FString GetAddressURL();
	bool IsDemoBuild();
	struct FString GetLocalURL();
	void AddPrecacheStaticMesh(class UStaticMesh* stat);
	void AddPrecacheMaterial(class UMaterial* mat);
	void FillPrecacheStaticMeshesArray();
	void FillPrecacheMaterialsArray();
	class UClass* GetGameClass();
	void PostBeginPlay();
	bool IsEntry();
	void DetailChange(TEnumAsByte<EDetailMode> NewDetailMode);
};


// Class Engine.Note
// 0x000C (0x03C8 - 0x03BC)
class ANote : public AActor
{
public:
	struct FString                                     Text;                                                     // 0x03BC(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.Weapon
// 0x00E8 (0x04F0 - 0x0408)
class AWeapon : public AInventory
{
public:
	class UClass*                                      AmmoName;                                                 // 0x0408(0x0004)
	int                                                PickupAmmoCount;                                          // 0x040C(0x0004)
	class AAmmunition*                                 AmmoType;                                                 // 0x0410(0x0004) (Net)
	unsigned char                                      ReloadCount;                                              // 0x0414(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	unsigned long                                      bPointing : 1;                                            // 0x0418(0x0004)
	unsigned long                                      bWeaponUp : 1;                                            // 0x0418(0x0004)
	unsigned long                                      bChangeWeapon : 1;                                        // 0x0418(0x0004)
	unsigned long                                      bCanThrow : 1;                                            // 0x0418(0x0004)
	unsigned long                                      bRapidFire : 1;                                           // 0x0418(0x0004)
	unsigned long                                      bForceReload : 1;                                         // 0x0418(0x0004)
	float                                              StopFiringTime;                                           // 0x041C(0x0004)
	int                                                AutoSwitchPriority;                                       // 0x0420(0x0004)
	struct FVector                                     FireOffset;                                               // 0x0424(0x000C)
	float                                              ShakeMag;                                                 // 0x0430(0x0004)
	float                                              ShakeTime;                                                // 0x0434(0x0004)
	struct FVector                                     ShakeVert;                                                // 0x0438(0x000C)
	struct FVector                                     ShakeSpeed;                                               // 0x0444(0x000C)
	class UTexture*                                    CrossHair;                                                // 0x0450(0x0004)
	class APowerups*                                   Affector;                                                 // 0x0454(0x0004) (Net)
	float                                              TraceAccuracy;                                            // 0x0458(0x0004)
	unsigned long                                      bMeleeWeapon : 1;                                         // 0x045C(0x0004)
	unsigned long                                      bSniping : 1;                                             // 0x045C(0x0004)
	float                                              aimerror;                                                 // 0x0460(0x0004)
	float                                              AIRating;                                                 // 0x0464(0x0004)
	float                                              CurrentRating;                                            // 0x0468(0x0004)
	float                                              TraceDist;                                                // 0x046C(0x0004)
	float                                              MaxRange;                                                 // 0x0470(0x0004)
	struct FRotator                                    AdjustedAim;                                              // 0x0474(0x000C)
	class USound*                                      FireSound;                                                // 0x0480(0x0004) (Edit)
	class USound*                                      SelectSound;                                              // 0x0484(0x0004) (Edit)
	struct FString                                     MessageNoAmmo;                                            // 0x0488(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     WeaponDescription;                                        // 0x0494(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      NameColor;                                                // 0x04A0(0x0004)
	unsigned long                                      bSteadyToggle : 1;                                        // 0x04A4(0x0004)
	unsigned long                                      bForceFire : 1;                                           // 0x04A4(0x0004)
	unsigned long                                      bForceAltFire : 1;                                        // 0x04A4(0x0004)
	struct FString                                     LeftHandedMesh;                                           // 0x04A8(0x000C) (NeedCtorLink)
	float                                              DisplayFOV;                                               // 0x04B4(0x0004)
	float                                              FlashTime;                                                // 0x04B8(0x0004)
	float                                              MuzzleScale;                                              // 0x04BC(0x0004) (Edit)
	float                                              FlashOffsetY;                                             // 0x04C0(0x0004) (Edit)
	float                                              FlashOffsetX;                                             // 0x04C4(0x0004) (Edit)
	float                                              FlashLength;                                              // 0x04C8(0x0004) (Edit)
	float                                              MuzzleFlashSize;                                          // 0x04CC(0x0004) (Edit)
	class UTexture*                                    MFTexture;                                                // 0x04D0(0x0004)
	unsigned char                                      FlashCount;                                               // 0x04D4(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	unsigned long                                      bAutoFire : 1;                                            // 0x04D8(0x0004)
	unsigned long                                      bMuzzleFlash : 1;                                         // 0x04D8(0x0004)
	unsigned long                                      bSetFlashTime : 1;                                        // 0x04D8(0x0004)
	unsigned long                                      bDrawMuzzleFlash : 1;                                     // 0x04D8(0x0004)
	unsigned long                                      bMuzzleFlashParticles : 1;                                // 0x04D8(0x0004)
	class UMesh*                                       MuzzleFlashMesh;                                          // 0x04DC(0x0004)
	float                                              MuzzleFlashScale;                                         // 0x04E0(0x0004)
	TEnumAsByte<ERenderStyle>                          MuzzleFlashStyle;                                         // 0x04E4(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class UTexture*                                    MuzzleFlashTexture;                                       // 0x04E8(0x0004)
	float                                              FireAdjust;                                               // 0x04EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Weapon");
		return ptr;
	}


	void zoom();
	void PlayIdleAnim();
	void PlayPostSelect();
	void PlaySelect();
	void PlayReloading();
	void TweenDown();
	bool PutDown();
	void BringUp();
	void CheckAnimating();
	void ClientFinish();
	void CauseAltFire();
	void SwitchToWeaponWithAmmo();
	void Finish();
	bool IsIdle();
	bool BotFire(bool bFinished, const struct FName& FiringMode);
	bool NeedsToReload();
	void TraceFire(float Accuracy, float YOffset, float ZOffset);
	void ProjectileFire();
	struct FVector GetFireStart(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	void PlayFiring();
	void AltFire(float Value);
	void ServerAltFire();
	void LocalFire();
	void Fire(float Value);
	void ServerFire();
	void ServerRapidFire();
	void ServerStopFiring();
	bool RepeatFire();
	void DropFrom(const struct FVector& StartLocation);
	class AWeapon* RecommendWeapon(float* rating);
	void ClientWeaponSet(bool bOptionalSet);
	float SwitchPriority();
	void GiveAmmo(class APawn* Other);
	void AnimEnd(int Channel);
	class AWeapon* NextWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon);
	class AWeapon* PrevWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon);
	class AWeapon* WeaponChange(unsigned char f);
	void SetHand(float hand);
	bool HandlePickupQuery(class APickup* item);
	void ClientWeaponEvent(const struct FName& EventType);
	float SuggestDefenseStyle();
	float SuggestAttackStyle();
	float GetAIRating();
	float RateSelf();
	float GetRating();
	bool SplashJump();
	bool HasAmmo();
	float AmmoStatus();
	bool CanAttack(class AActor* Other);
	void DrawMuzzleFlash(class UCanvas* Canvas);
	void DrawCrossHair(class UCanvas* Canvas);
	void RenderOverlays(class UCanvas* Canvas);
	void GiveTo(class APawn* Other);
	void Destroyed();
	void SetAITarget(class AActor* t);
	void TravelPostAccept();
	void DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos);
	void ClientForceReload();
	void ServerForceReload();
	void ForceReload();
	void PostNetBeginPlay();
	void IncrementFlashCount();
	bool IsFiring();
	void FireHack(unsigned char Mode);
	bool RecommendSplashDamage();
	float RefireRate();
	bool FocusOnLeader(bool bLeaderFiring);
	float GetDamageRadius();
	bool SplashDamage();
	bool RecommendRangedAttack();
	float RangedAttackTime();
};


// Class Engine.PolyMarker
// 0x0000 (0x03BC - 0x03BC)
class APolyMarker : public AKeypoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PolyMarker");
		return ptr;
	}

};


// Class Engine.ClipMarker
// 0x0000 (0x03BC - 0x03BC)
class AClipMarker : public AKeypoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClipMarker");
		return ptr;
	}

};


// Class Engine.LevelObject
// 0x0034 (0x0068 - 0x0034)
class ULevelObject : public UObject
{
public:
	unsigned long                                      bDeleteMe : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bSelected : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0034(0x0004) (Edit)
	unsigned long                                      bHiddenEd : 1;                                            // 0x0034(0x0004) (Edit)
	unsigned long                                      bHiddenEdGroup : 1;                                       // 0x0034(0x0004) (Edit)
	unsigned long                                      bLockUndelete : 1;                                        // 0x0034(0x0004) (Edit)
	unsigned long                                      bLockLocation : 1;                                        // 0x0034(0x0004) (Edit)
	unsigned long                                      bPendingDelete : 1;                                       // 0x0034(0x0004)
	unsigned long                                      bTempEditor : 1;                                          // 0x0034(0x0004) (Const, Transient)
	struct FName                                       Group;                                                    // 0x0038(0x0004) (Edit)
	struct FVector                                     Location;                                                 // 0x003C(0x000C) (Edit)
	class UMaterial*                                   Texture;                                                  // 0x0048(0x0004) (Edit)
	float                                              DrawScale;                                                // 0x004C(0x0004) (Edit)
	struct ULevelObject_FPointRegion                   Region;                                                   // 0x0050(0x000C) (Edit, Const)
	class ULevel*                                      SWXLevel;                                                 // 0x005C(0x0004) (Const, Transient)
	class ULevel*                                      XLevel;                                                   // 0x0060(0x0004) (Const, Transient)
	class ULevelObject*                                Deleted;                                                  // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelObject");
		return ptr;
	}

};


// Class Engine.AmbientSoundObject
// 0x0018 (0x0080 - 0x0068)
class UAmbientSoundObject : public ULevelObject
{
public:
	TEnumAsByte<EASType1>                              AmbientSoundType;                                         // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                AmbientRandom;                                            // 0x006C(0x0004) (Edit)
	float                                              AmbientSoundStartTime;                                    // 0x0070(0x0004)
	class USound*                                      AmbientSound;                                             // 0x0074(0x0004) (Edit)
	float                                              SoundRadius;                                              // 0x0078(0x0004) (Edit)
	unsigned char                                      SoundVolume;                                              // 0x007C(0x0001) (Edit)
	unsigned char                                      SoundPitch;                                               // 0x007D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundObject");
		return ptr;
	}

};


// Class Engine.L2OrcMove
// 0x0000 (0x0038 - 0x0038)
class UL2OrcMove : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2OrcMove");
		return ptr;
	}

};


// Class Engine.OrcMove
// 0x0ACC (0x0B04 - 0x0038)
class UOrcMove : public UL2OrcMove
{
public:
	unsigned char                                      UnknownData00[0xACC];                                     // 0x0038(0x0ACC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OrcMove");
		return ptr;
	}

};


// Class Engine.NullRenderDevice
// 0x0028 (0x00F4 - 0x00CC)
class UNullRenderDevice : public URenderDevice
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00CC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NullRenderDevice");
		return ptr;
	}

};


// Class Engine.L2NEnvManager
// 0x01B8 (0x01EC - 0x0034)
class UL2NEnvManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0034(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2NEnvManager");
		return ptr;
	}

};


// Class Engine.L2NTimeLight
// 0x0034 (0x0068 - 0x0034)
class UL2NTimeLight : public UObject
{
public:
	unsigned long                                      bLoaded : 1;                                              // 0x0034(0x0004)
	TArray<struct FNTimeHSV>                           TerrainLight;                                             // 0x0038(0x000C) (NeedCtorLink)
	TArray<struct FNTimeHSV>                           ActorLight;                                               // 0x0044(0x000C) (NeedCtorLink)
	TArray<struct FNTimeHSV>                           StaticMeshLight;                                          // 0x0050(0x000C) (NeedCtorLink)
	TArray<struct FNTimeHSV>                           BSPLight;                                                 // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2NTimeLight");
		return ptr;
	}

};


// Class Engine.L2NEnvLight
// 0x00AC (0x0114 - 0x0068)
class UL2NEnvLight : public UL2NTimeLight
{
public:
	TArray<struct FNTimeColor>                         SkyColor;                                                 // 0x0068(0x000C) (NeedCtorLink)
	TArray<int>                                        HazeColorIndex;                                           // 0x0074(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         HazeColor;                                                // 0x0080(0x000C) (NeedCtorLink)
	TArray<int>                                        CloudColorIndex;                                          // 0x008C(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         CloudColor;                                               // 0x0098(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         StarColor;                                                // 0x00A4(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         SunColor;                                                 // 0x00B0(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         MoonColor;                                                // 0x00BC(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         TerrainAmbient;                                           // 0x00C8(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         ActorAmbient;                                             // 0x00D4(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         StaticMeshAmbient;                                        // 0x00E0(0x000C) (NeedCtorLink)
	TArray<struct FNTimeColor>                         BSPAmbient;                                               // 0x00EC(0x000C) (NeedCtorLink)
	TArray<struct FNTimeScale>                         SunScale;                                                 // 0x00F8(0x000C) (NeedCtorLink)
	TArray<struct FNTimeScale>                         MoonScale;                                                // 0x0104(0x000C) (NeedCtorLink)
	int                                                EnvType;                                                  // 0x0110(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2NEnvLight");
		return ptr;
	}

};


// Class Engine.L2SkillEffect
// 0x005C (0x0090 - 0x0034)
class UL2SkillEffect : public UObject
{
public:
	struct FString                                     Desc;                                                     // 0x0034(0x000C) (Edit, NeedCtorLink)
	int                                                SkillID;                                                  // 0x0040(0x0004) (Edit)
	TArray<class UL2EffectEmitter*>                    CastingAction;                                            // 0x0044(0x000C) (Edit, NeedCtorLink, EditInline, DataBinding)
	TArray<class UL2EffectEmitter*>                    ChannelingAction;                                         // 0x0050(0x000C) (Edit, NeedCtorLink, EditInline, DataBinding)
	TArray<class UL2EffectEmitter*>                    PreshotAction;                                            // 0x005C(0x000C) (Edit, NeedCtorLink, EditInline, DataBinding)
	TArray<class UL2EffectEmitter*>                    ShotAction;                                               // 0x0068(0x000C) (Edit, NeedCtorLink, EditInline, DataBinding)
	TArray<class UL2EffectEmitter*>                    ExplosionAction;                                          // 0x0074(0x000C) (Edit, NeedCtorLink, EditInline, DataBinding)
	TArray<class UL2EffectEmitter*>                    UnionTargetAction;                                        // 0x0080(0x000C) (Edit, NeedCtorLink, EditInline, DataBinding)
	float                                              FlyingTime;                                               // 0x008C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2SkillEffect");
		return ptr;
	}

};


// Class Engine.L2EffectEmitter
// 0x006C (0x00A0 - 0x0034)
class UL2EffectEmitter : public UObject
{
public:
	TEnumAsByte<EAttachMethod>                         AttachOn;                                                 // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FName                                       AttachBoneName;                                           // 0x0038(0x0004) (Edit)
	unsigned long                                      bAbsolute : 1;                                            // 0x003C(0x0004) (Edit)
	unsigned long                                      bSpawnOnTarget : 1;                                       // 0x003C(0x0004) (Edit)
	unsigned long                                      bRelativeToCylinder : 1;                                  // 0x003C(0x0004) (Edit)
	unsigned long                                      bOnMultiTarget : 1;                                       // 0x003C(0x0004) (Edit)
	unsigned long                                      bChaining : 1;                                            // 0x003C(0x0004) (Edit)
	unsigned long                                      bChangeHand : 1;                                          // 0x003C(0x0004) (Edit)
	unsigned long                                      bUseOffsetNative : 1;                                     // 0x003C(0x0004) (Edit)
	unsigned long                                      bMultiLocation : 1;                                       // 0x003C(0x0004) (Edit)
	struct FRotator                                    RelativeRotation;                                         // 0x0040(0x000C) (Edit)
	struct FVector                                     offset;                                                   // 0x004C(0x000C) (Edit)
	unsigned long                                      bAdjustLifeTime : 1;                                      // 0x0058(0x0004) (Edit)
	unsigned long                                      bRibbonSet : 1;                                           // 0x0058(0x0004) (Edit)
	unsigned long                                      bChanneling : 1;                                          // 0x0058(0x0004) (Edit)
	float                                              ScaleSize;                                                // 0x005C(0x0004) (Edit)
	float                                              SpawnDelay;                                               // 0x0060(0x0004) (Edit)
	class UClass*                                      EffectClass;                                              // 0x0064(0x0004) (Edit)
	unsigned long                                      bShotAndDrain : 1;                                        // 0x0068(0x0004) (Edit)
	unsigned long                                      bPawnLight : 1;                                           // 0x0068(0x0004) (Edit)
	struct FEffectPawnLightParam                       PawnLightParam;                                           // 0x006C(0x0020) (Edit)
	unsigned long                                      bHermiteInterpolation : 1;                                // 0x008C(0x0004) (Edit)
	unsigned long                                      bBezierCurve : 1;                                         // 0x008C(0x0004) (Edit)
	TArray<struct FVector>                             ControlPointOffset;                                       // 0x0090(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EtcEffectType>                         EtcEffect;                                                // 0x009C(0x0001) (Edit)
	TEnumAsByte<EtcEffectParam>                        EtcEffectInfo;                                            // 0x009D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x009E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2EffectEmitter");
		return ptr;
	}

};


// Class Engine.L2NMover
// 0x004C (0x0408 - 0x03BC)
class AL2NMover : public AActor
{
public:
	unsigned long                                      bLoop : 1;                                                // 0x03BC(0x0004)
	unsigned long                                      bMoveStart : 1;                                           // 0x03BC(0x0004)
	unsigned long                                      bMoveEnd : 1;                                             // 0x03BC(0x0004)
	unsigned long                                      bMovePause : 1;                                           // 0x03BC(0x0004)
	float                                              MoveStartDelay;                                           // 0x03C0(0x0004)
	struct FVector                                     OwnerOrigin;                                              // 0x03C4(0x000C)
	int                                                TargetIndex;                                              // 0x03D0(0x0004)
	TArray<struct FNMoverTarget>                       MoverTargets;                                             // 0x03D4(0x000C) (NeedCtorLink)
	float                                              MoveSpeed;                                                // 0x03E0(0x0004)
	float                                              CurMoveSpeed;                                             // 0x03E4(0x0004)
	float                                              AccelRate;                                                // 0x03E8(0x0004)
	float                                              AccelAccelRate;                                           // 0x03EC(0x0004)
	float                                              CurAccelRate;                                             // 0x03F0(0x0004)
	float                                              MaxSpeed;                                                 // 0x03F4(0x0004)
	float                                              MinSpeed;                                                 // 0x03F8(0x0004)
	float                                              MaxAccelRate;                                             // 0x03FC(0x0004)
	float                                              MinAccelRate;                                             // 0x0400(0x0004)
	class AActor*                                      ForceBounceActor;                                         // 0x0404(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2NMover");
		return ptr;
	}

};


// Class Engine.NProjectile
// 0x0124 (0x065C - 0x0538)
class ANProjectile : public AEmitter
{
public:
	float                                              Speed;                                                    // 0x0538(0x0004)
	float                                              AccSpeed;                                                 // 0x053C(0x0004)
	class AActor*                                      TargetActor;                                              // 0x0540(0x0004)
	struct FVector                                     LastTargetLocation;                                       // 0x0544(0x000C)
	struct FRotator                                    LastTargetRotation;                                       // 0x0550(0x000C)
	class AActor*                                      TraceActor;                                               // 0x055C(0x0004)
	unsigned long                                      bTrackingCamera : 1;                                      // 0x0560(0x0004)
	unsigned long                                      bPreDestroy : 1;                                          // 0x0560(0x0004)
	unsigned long                                      bHermiteInterpolation : 1;                                // 0x0560(0x0004) (Edit)
	struct FVector                                     VelInitial;                                               // 0x0564(0x000C) (Edit)
	struct FVector                                     VelFinal;                                                 // 0x0570(0x000C) (Edit)
	struct FVector                                     LocInitial;                                               // 0x057C(0x000C) (Edit)
	float                                              Duration;                                                 // 0x0588(0x0004) (Edit)
	float                                              CurTime;                                                  // 0x058C(0x0004) (Edit, Transient)
	float                                              Disp;                                                     // 0x0590(0x0004) (Edit)
	struct FNMagicInfo                                 MagicInfo;                                                // 0x0594(0x00B8) (Transient, NeedCtorLink)
	unsigned long                                      bBezierCurve : 1;                                         // 0x064C(0x0004) (Edit)
	TArray<struct FVector>                             ControlPoints;                                            // 0x0650(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NProjectile");
		return ptr;
	}


	void PreshotNotify(class APawn* Attacker);
	void ShotNotify();
};


// Class Engine.NSkillProjectile
// 0x0010 (0x066C - 0x065C)
class ANSkillProjectile : public ANProjectile
{
public:
	int                                                SkillID;                                                  // 0x065C(0x0004)
	struct FRotator                                    HitRot;                                                   // 0x0660(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NSkillProjectile");
		return ptr;
	}

};


// Class Engine.NCubics
// 0x00E4 (0x061C - 0x0538)
class ANCubics : public AEmitter
{
public:
	TEnumAsByte<ESummonCubicType>                      CubicType;                                                // 0x0538(0x0001)
	TEnumAsByte<ECubicMovementType>                    CubicMovementType;                                        // 0x0539(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x053A(0x0002) MISSED OFFSET
	struct FVector                                     DestLocation;                                             // 0x053C(0x000C)
	int                                                CubicIndex;                                               // 0x0548(0x0004)
	int                                                SkillID;                                                  // 0x054C(0x0004)
	class APawn*                                       TargetPawn;                                               // 0x0550(0x0004)
	float                                              SkillActiveTime;                                          // 0x0554(0x0004)
	struct FRotator                                    RotPerSecond;                                             // 0x0558(0x000C)
	struct FNMagicInfo                                 MagicInfo;                                                // 0x0564(0x00B8) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NCubics");
		return ptr;
	}

};


// Class Engine.NAgathion
// 0x0028 (0x1F34 - 0x1F0C)
class ANAgathion : public APawn
{
public:
	TEnumAsByte<EAgathionMovementType>                 MovementType;                                             // 0x1F0C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1F0D(0x0003) MISSED OFFSET
	struct FVector                                     DestLocation;                                             // 0x1F10(0x000C)
	struct FRotator                                    OriginalRotationRate;                                     // 0x1F1C(0x000C)
	int                                                RandomAnimPercent;                                        // 0x1F28(0x0004)
	int                                                RandomSpecialAnimationState;                              // 0x1F2C(0x0004)
	class APawn*                                       Master;                                                   // 0x1F30(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NAgathion");
		return ptr;
	}

};


// Class Engine.L2SceneInfo
// 0x001C (0x0050 - 0x0034)
class UL2SceneInfo : public UObject
{
public:
	int                                                SceneID;                                                  // 0x0034(0x0004)
	struct FString                                     SceneDesc;                                                // 0x0038(0x000C) (NeedCtorLink)
	TArray<class UL2SceneItem*>                        SceneInfo;                                                // 0x0044(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2SceneInfo");
		return ptr;
	}

};


// Class Engine.L2SceneItem
// 0x00A0 (0x00D4 - 0x0034)
class UL2SceneItem : public UObject
{
public:
	float                                              SceneTime;                                                // 0x0034(0x0004)
	struct FString                                     Description;                                              // 0x0038(0x000C) (NeedCtorLink)
	struct FCameraItem                                 CameraInfo;                                               // 0x0044(0x0030)
	struct FScreenItem                                 ScreenInfo;                                               // 0x0074(0x0034) (NeedCtorLink)
	struct FMusicItem                                  MusicInfo;                                                // 0x00A8(0x0020) (NeedCtorLink)
	TArray<struct FNpcItem>                            NpcInfo;                                                  // 0x00C8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2SceneItem");
		return ptr;
	}

};


// Class Engine.L2NetHandler
// 0x0000 (0x0038 - 0x0038)
class UL2NetHandler : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2NetHandler");
		return ptr;
	}

};


// Class Engine.L2FogInfo
// 0x0060 (0x041C - 0x03BC)
class AL2FogInfo : public AInfo
{
public:
	struct FRange                                      AffectRange;                                              // 0x03BC(0x0008) (Edit)
	struct FRange                                      FogRange1;                                                // 0x03C4(0x0008) (Edit)
	struct FRange                                      FogRange2;                                                // 0x03CC(0x0008) (Edit)
	struct FRange                                      FogRange3;                                                // 0x03D4(0x0008) (Edit)
	struct FRange                                      FogRange4;                                                // 0x03DC(0x0008) (Edit)
	struct FRange                                      FogRange5;                                                // 0x03E4(0x0008) (Edit)
	float                                              TextureDistance;                                          // 0x03EC(0x0004) (Edit)
	TArray<struct FL2EnvironmentColorInfo>             Colors;                                                   // 0x03F0(0x000C) (Edit, NeedCtorLink)
	class UMaterial*                                   CloudTexture;                                             // 0x03FC(0x0004) (Edit)
	struct FVector                                     AffectBoxMin;                                             // 0x0400(0x000C) (Edit)
	struct FVector                                     AffectBoxMax;                                             // 0x040C(0x000C) (Edit)
	unsigned long                                      bUseAffectBox : 1;                                        // 0x0418(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2FogInfo");
		return ptr;
	}

};


// Class Engine.L2ConsoleWnd
// 0x708C (0x70C4 - 0x0038)
class UL2ConsoleWnd : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x708C];                                    // 0x0038(0x708C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.L2ConsoleWnd");
		return ptr;
	}

};


// Class Engine.KVehicle
// 0x0084 (0x1F90 - 0x1F0C)
class AKVehicle : public APawn
{
public:
	float                                              Steering;                                                 // 0x1F0C(0x0004) (Edit)
	float                                              Throttle;                                                 // 0x1F10(0x0004) (Edit)
	class APawn*                                       Driver;                                                   // 0x1F14(0x0004)
	TArray<struct FVector>                             ExitPositions;                                            // 0x1F18(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     DrivePos;                                                 // 0x1F24(0x000C) (Edit)
	struct FRotator                                    DriveRot;                                                 // 0x1F30(0x000C) (Edit)
	class UClass*                                      DestroyEffectClass;                                       // 0x1F3C(0x0004) (Edit)
	unsigned long                                      bAutoDrive : 1;                                           // 0x1F40(0x0004) (Edit)
	unsigned long                                      bGetOut : 1;                                              // 0x1F40(0x0004)
	class AKVehicleFactory*                            ParentFactory;                                            // 0x1F44(0x0004)
	unsigned long                                      bVehicleIsFiring : 1;                                     // 0x1F48(0x0004)
	unsigned long                                      bVehicleIsAltFiring : 1;                                  // 0x1F48(0x0004)
	struct FVector                                     CameraHistory[0x5];                                       // 0x1F4C(0x000C)
	int                                                NextHistorySlot;                                          // 0x1F88(0x0004)
	unsigned long                                      bHistoryWarmup : 1;                                       // 0x1F8C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KVehicle");
		return ptr;
	}


	void Tick(float DeltaSeconds);
	void Destroyed();
	bool SpecialCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation);
	bool KDriverLeave(bool bForceLeave);
	void ClientKDriverLeave(class APlayerController* PC);
	void KDriverEnter(class APawn* P);
	void ClientKDriverEnter(class APlayerController* PC);
	void TryToDrive(class APawn* P);
	void VehicleCeaseFire(bool bWasAltFire);
	void VehicleFire(bool bWasAltFire);
	void KVehicleUpdateParams();
	void VehicleStateReceived();
	void EncroachedBy(class AActor* Other);
	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	void GraphData(const struct FString& DataName, float DataValue);
};


// Class Engine.KActor
// 0x0024 (0x03E0 - 0x03BC)
class AKActor : public AActor
{
public:
	unsigned long                                      bKTakeShot : 1;                                           // 0x03BC(0x0004) (Edit)
	TArray<class USound*>                              ImpactSounds;                                             // 0x03C0(0x000C) (Edit, NeedCtorLink)
	float                                              ImpactVolume;                                             // 0x03CC(0x0004) (Edit)
	class UClass*                                      ImpactEffect;                                             // 0x03D0(0x0004) (Edit)
	unsigned long                                      bOrientImpactEffect : 1;                                  // 0x03D4(0x0004) (Edit)
	float                                              ImpactInterval;                                           // 0x03D8(0x0004) (Edit)
	float                                              LastImpactTime;                                           // 0x03DC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActor");
		return ptr;
	}


	void KImpact(class AActor* Other, const struct FVector& pos, const struct FVector& impactVel, const struct FVector& impactNorm);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
};


// Class Engine.KTire
// 0x007C (0x045C - 0x03E0)
class AKTire : public AKActor
{
public:
	class AKCarWheelJoint*                             WheelJoint;                                               // 0x03E0(0x0004)
	float                                              RollFriction;                                             // 0x03E4(0x0004)
	float                                              LateralFriction;                                          // 0x03E8(0x0004)
	float                                              RollSlip;                                                 // 0x03EC(0x0004)
	float                                              LateralSlip;                                              // 0x03F0(0x0004)
	float                                              MinSlip;                                                  // 0x03F4(0x0004)
	float                                              SlipRate;                                                 // 0x03F8(0x0004)
	float                                              Softness;                                                 // 0x03FC(0x0004)
	float                                              Adhesion;                                                 // 0x0400(0x0004)
	float                                              Restitution;                                              // 0x0404(0x0004)
	unsigned long                                      bTireOnGround : 1;                                        // 0x0408(0x0004) (Const)
	float                                              GroundSlipVel;                                            // 0x040C(0x0004) (Const)
	struct FVector                                     GroundSlipVec;                                            // 0x0410(0x000C) (Const)
	float                                              SpinSpeed;                                                // 0x041C(0x0004) (Const)
	class UMaterial*                                   GroundMaterial;                                           // 0x0420(0x0004) (Const)
	struct FKRigidBodyState                            ReceiveState;                                             // 0x0424(0x0034)
	unsigned long                                      bReceiveStateNew : 1;                                     // 0x0458(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KTire");
		return ptr;
	}


	void TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	bool KUpdateState(struct FKRigidBodyState* NewState);
};


// Class Engine.KarmaParamsCollision
// 0x0020 (0x0054 - 0x0034)
class UKarmaParamsCollision : public UObject
{
public:
	int                                                KarmaData;                                                // 0x0034(0x0004) (Const, Transient)
	float                                              KScale;                                                   // 0x0038(0x0004) (Const)
	struct FVector                                     KScale3D;                                                 // 0x003C(0x000C) (Const)
	float                                              KFriction;                                                // 0x0048(0x0004) (Edit)
	float                                              KRestitution;                                             // 0x004C(0x0004) (Edit)
	float                                              KImpactThreshold;                                         // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KarmaParamsCollision");
		return ptr;
	}

};


// Class Engine.KarmaParams
// 0x0048 (0x009C - 0x0054)
class UKarmaParams : public UKarmaParamsCollision
{
public:
	int                                                KAng3;                                                    // 0x0054(0x0004) (Const, Transient)
	int                                                KTriList;                                                 // 0x0058(0x0004) (Const, Transient)
	float                                              KLastVel;                                                 // 0x005C(0x0004) (Const, Transient)
	float                                              KMass;                                                    // 0x0060(0x0004) (Edit)
	float                                              KLinearDamping;                                           // 0x0064(0x0004) (Edit)
	float                                              KAngularDamping;                                          // 0x0068(0x0004) (Edit)
	float                                              KBuoyancy;                                                // 0x006C(0x0004) (Edit)
	unsigned long                                      KStartEnabled : 1;                                        // 0x0070(0x0004) (Edit)
	struct FVector                                     KStartLinVel;                                             // 0x0074(0x000C) (Edit)
	struct FVector                                     KStartAngVel;                                             // 0x0080(0x000C) (Edit)
	unsigned long                                      bKNonSphericalInertia : 1;                                // 0x008C(0x0004) (Edit)
	float                                              KActorGravScale;                                          // 0x0090(0x0004) (Edit)
	float                                              KVelDropBelowThreshold;                                   // 0x0094(0x0004) (Edit)
	unsigned long                                      bHighDetailOnly : 1;                                      // 0x0098(0x0004) (Edit)
	unsigned long                                      bClientOnly : 1;                                          // 0x0098(0x0004)
	unsigned long                                      bKDoubleTickRate : 1;                                     // 0x0098(0x0004) (Edit, Const)
	unsigned long                                      bKStayUpright : 1;                                        // 0x0098(0x0004) (Edit)
	unsigned long                                      bKAllowRotate : 1;                                        // 0x0098(0x0004) (Edit)
	unsigned long                                      bDestroyOnSimError : 1;                                   // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KarmaParams");
		return ptr;
	}

};


// Class Engine.KarmaParamsSkel
// 0x0038 (0x00D4 - 0x009C)
class UKarmaParamsSkel : public UKarmaParams
{
public:
	struct FString                                     KSkeleton;                                                // 0x009C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bKDoConvulsions : 1;                                      // 0x00A8(0x0004) (Edit)
	struct FRange                                      KConvulseSpacing;                                         // 0x00AC(0x0008) (Edit)
	struct FVector                                     KShotStart;                                               // 0x00B4(0x000C) (Transient)
	struct FVector                                     KShotEnd;                                                 // 0x00C0(0x000C) (Transient)
	float                                              KShotStrength;                                            // 0x00CC(0x0004) (Transient)
	unsigned long                                      bKImportantRagdoll : 1;                                   // 0x00D0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KarmaParamsSkel");
		return ptr;
	}

};


// Class Engine.KarmaParamsRBFull
// 0x0024 (0x00C0 - 0x009C)
class UKarmaParamsRBFull : public UKarmaParams
{
public:
	float                                              KInertiaTensor[0x6];                                      // 0x009C(0x0004) (Edit)
	struct FVector                                     KCOMOffset;                                               // 0x00B4(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KarmaParamsRBFull");
		return ptr;
	}

};


// Class Engine.KMeshProps
// 0x0054 (0x0088 - 0x0034)
class UKMeshProps : public UObject
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0034(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KMeshProps");
		return ptr;
	}

};


// Class Engine.KConstraint
// 0x0068 (0x0448 - 0x03E0)
class AKConstraint : public AKActor
{
public:
	int                                                KConstraintData;                                          // 0x03E0(0x0004) (Const, Transient)
	class AActor*                                      KConstraintActor1;                                        // 0x03E4(0x0004) (Edit)
	class AActor*                                      KConstraintActor2;                                        // 0x03E8(0x0004) (Edit)
	struct FName                                       KConstraintBone1;                                         // 0x03EC(0x0004) (Edit)
	struct FName                                       KConstraintBone2;                                         // 0x03F0(0x0004) (Edit)
	unsigned long                                      bKDisableCollision : 1;                                   // 0x03F4(0x0004) (Edit, Const)
	struct FVector                                     KPos1;                                                    // 0x03F8(0x000C)
	struct FVector                                     KPriAxis1;                                                // 0x0404(0x000C)
	struct FVector                                     KSecAxis1;                                                // 0x0410(0x000C)
	struct FVector                                     KPos2;                                                    // 0x041C(0x000C)
	struct FVector                                     KPriAxis2;                                                // 0x0428(0x000C)
	struct FVector                                     KSecAxis2;                                                // 0x0434(0x000C)
	unsigned long                                      bKForceFrameUpdate : 1;                                   // 0x0440(0x0004) (Const)
	float                                              KForceThreshold;                                          // 0x0444(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KConstraint");
		return ptr;
	}


	void KForceExceed(float forceMag);
	void KGetConstraintTorque(struct FVector* Torque);
	void KGetConstraintForce(struct FVector* Force);
	void KUpdateConstraintParams();
};


// Class Engine.KCarWheelJoint
// 0x0038 (0x0480 - 0x0448)
class AKCarWheelJoint : public AKConstraint
{
public:
	float                                              KSteerAngle;                                              // 0x0448(0x0004) (Edit)
	float                                              KProportionalGap;                                         // 0x044C(0x0004) (Edit)
	float                                              KMaxSteerTorque;                                          // 0x0450(0x0004) (Edit)
	float                                              KMaxSteerSpeed;                                           // 0x0454(0x0004) (Edit)
	unsigned long                                      bKSteeringLocked : 1;                                     // 0x0458(0x0004) (Edit)
	float                                              KMotorTorque;                                             // 0x045C(0x0004) (Edit)
	float                                              KMaxSpeed;                                                // 0x0460(0x0004) (Edit)
	float                                              KBraking;                                                 // 0x0464(0x0004) (Edit)
	float                                              KSuspLowLimit;                                            // 0x0468(0x0004) (Edit)
	float                                              KSuspHighLimit;                                           // 0x046C(0x0004) (Edit)
	float                                              KSuspStiffness;                                           // 0x0470(0x0004) (Edit)
	float                                              KSuspDamping;                                             // 0x0474(0x0004) (Edit)
	float                                              KSuspRef;                                                 // 0x0478(0x0004) (Edit)
	float                                              KWheelHeight;                                             // 0x047C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KCarWheelJoint");
		return ptr;
	}

};


// Class Engine.KConeLimit
// 0x000C (0x0454 - 0x0448)
class AKConeLimit : public AKConstraint
{
public:
	float                                              KHalfAngle;                                               // 0x0448(0x0004) (Edit)
	float                                              KStiffness;                                               // 0x044C(0x0004) (Edit)
	float                                              KDamping;                                                 // 0x0450(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KConeLimit");
		return ptr;
	}

};


// Class Engine.KHinge
// 0x0028 (0x0470 - 0x0448)
class AKHinge : public AKConstraint
{
public:
	TEnumAsByte<EHingeType>                            KHingeType;                                               // 0x0448(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	float                                              KStiffness;                                               // 0x044C(0x0004) (Edit)
	float                                              KDamping;                                                 // 0x0450(0x0004) (Edit)
	float                                              KDesiredAngVel;                                           // 0x0454(0x0004) (Edit)
	float                                              KMaxTorque;                                               // 0x0458(0x0004) (Edit)
	float                                              KDesiredAngle;                                            // 0x045C(0x0004) (Edit)
	float                                              KProportionalGap;                                         // 0x0460(0x0004) (Edit)
	float                                              KAltDesiredAngle;                                         // 0x0464(0x0004) (Edit)
	unsigned long                                      KUseAltDesired : 1;                                       // 0x0468(0x0004)
	float                                              KCurrentAngle;                                            // 0x046C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KHinge");
		return ptr;
	}

};


// Class Engine.KBSJoint
// 0x0000 (0x0448 - 0x0448)
class AKBSJoint : public AKConstraint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KBSJoint");
		return ptr;
	}

};


// Class Engine.FontManager
// 0x0058 (0x008C - 0x0034)
class UFontManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0034(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontManager");
		return ptr;
	}

};


// Class Engine.FontCacheManager
// 0x0014 (0x0048 - 0x0034)
class UFontCacheManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0034(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontCacheManager");
		return ptr;
	}

};


// Class Engine.NetworkHandler
// 0x0184 (0x01BC - 0x0038)
class UNetworkHandler : public UL2NetHandler
{
public:
	unsigned char                                      UnknownData00[0x184];                                     // 0x0038(0x0184) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkHandler");
		return ptr;
	}

};


// Class Engine.ClientSocket
// 0x11FA8 (0x11FDC - 0x0034)
class UClientSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x11FA8];                                   // 0x0034(0x11FA8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClientSocket");
		return ptr;
	}

};


// Class Engine.DummySocket
// 0x0000 (0x11FDC - 0x11FDC)
class UDummySocket : public UClientSocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DummySocket");
		return ptr;
	}

};


// Class Engine.AuthSocket
// 0x14038 (0x1406C - 0x0034)
class UAuthSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14038];                                   // 0x0034(0x14038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AuthSocket");
		return ptr;
	}

};


// Class Engine.PingSocket
// 0x0820 (0x0854 - 0x0034)
class UPingSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x820];                                     // 0x0034(0x0820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PingSocket");
		return ptr;
	}

};


// Class Engine.StatLog
// 0x00D4 (0x0490 - 0x03BC)
class AStatLog : public AInfo
{
public:
	int                                                Context;                                                  // 0x03BC(0x0004)
	unsigned long                                      bWorld : 1;                                               // 0x03C0(0x0004)
	float                                              TimeStamp;                                                // 0x03C4(0x0004)
	struct FString                                     LocalStandard;                                            // 0x03C8(0x000C) (Edit, NeedCtorLink)
	struct FString                                     WorldStandard;                                            // 0x03D4(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LogVersion;                                               // 0x03E0(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LogInfoURL;                                               // 0x03EC(0x000C) (Edit, NeedCtorLink)
	struct FString                                     GameName;                                                 // 0x03F8(0x000C) (Edit, NeedCtorLink)
	struct FString                                     GameCreator;                                              // 0x0404(0x000C) (Edit, NeedCtorLink)
	struct FString                                     GameCreatorURL;                                           // 0x0410(0x000C) (Edit, NeedCtorLink)
	struct FString                                     DecoderRingURL;                                           // 0x041C(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LocalBatcherURL;                                          // 0x0428(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     LocalBatcherParams;                                       // 0x0434(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     LocalStatsURL;                                            // 0x0440(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     WorldBatcherURL;                                          // 0x044C(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     WorldBatcherParams;                                       // 0x0458(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     WorldStatsURL;                                            // 0x0464(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     LocalLogDir;                                              // 0x0470(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     WorldLogDir;                                              // 0x047C(0x000C) (Edit, Config, GlobalConfig, NeedCtorLink)
	unsigned long                                      bWorldBatcherError : 1;                                   // 0x0488(0x0004) (Config, GlobalConfig)
	unsigned long                                      bBatchLocal : 1;                                          // 0x0488(0x0004) (Config, GlobalConfig)
	class AStatLog*                                    LocalLog;                                                 // 0x048C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StatLog");
		return ptr;
	}


	void LogGameEnd(const struct FString& Reason);
	void LogGameStart();
	void LogPings();
	void LogSpecialEvent(const struct FString& EventType, const struct FString& Arg1, const struct FString& Arg2, const struct FString& Arg3, const struct FString& Arg4);
	void LogItemDeactivate(class AInventory* item, class APawn* Other);
	void LogItemActivate(class AInventory* item, class APawn* Other);
	void LogPickup(class APickup* item, class APawn* Other);
	void LogTypingEvent(bool bTyping, class AController* Other);
	void LogTeamChange(class AController* Other);
	void LogNameChange(class AController* Other);
	void LogKill(class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* VictimPRI, const struct FString& KillerWeaponName, const struct FString& VictimWeaponName, class UClass* DamageType);
	void LogPlayerDisconnect(class AController* Player);
	void LogPlayerInfo(class AController* Player);
	void LogPlayerConnect(class AController* Player, const struct FString& Checksum);
	void LogMapParameters();
	struct FString GetMapFileName();
	void LogGameSpecial2(const struct FString& SpecialID, const struct FString& SpecialParam, const struct FString& SpecialParam2);
	void LogGameSpecial(const struct FString& SpecialID, const struct FString& SpecialParam);
	void LogServerInfo();
	void LogStandardInfo();
	void Tick(float Delta);
	struct FString GetLocalLogFileName();
	struct FString GetTimeStamp();
	struct FString GetShortAbsoluteTime();
	struct FString GetAbsoluteTime();
	struct FString GetGMTRef();
	void GetPlayerChecksum(class APlayerController* P, struct FString* Checksum);
	void LogMutator(class AMutator* M);
	void InitialCheck(class AGameInfo* Game);
	void BrowseRelativeLocalURL(const struct FString& URL);
	void ExecuteWorldLogBatcher();
	void BatchLocal();
	void ExecuteSilentLogBatcher();
	void ExecuteLocalLogBatcher();
	void LogWorldEventString(const struct FString& EventString);
	void LogEventString(const struct FString& EventString);
	void FlushLog();
	void StopLog();
	void StartLog();
	void GenerateLogs(bool bLogLocal, bool bLogWorld);
	void Timer();
	void Destroyed();
	void BeginPlay();
};


// Class Engine.StatLogFile
// 0x0020 (0x04B0 - 0x0490)
class AStatLogFile : public AStatLog
{
public:
	unsigned long                                      bWatermark : 1;                                           // 0x0490(0x0004)
	int                                                LogAr;                                                    // 0x0494(0x0004)
	struct FString                                     StatLogFile;                                              // 0x0498(0x000C) (NeedCtorLink)
	struct FString                                     StatLogFinal;                                             // 0x04A4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StatLogFile");
		return ptr;
	}


	void LogGameEnd(const struct FString& Reason);
	void LogPlayerConnect(class AController* Player, const struct FString& Checksum);
	struct FString GetLocalLogFileName();
	void LogWorldEventString(const struct FString& EventString);
	void LogEventString(const struct FString& EventString);
	void FlushLog();
	void StopLog();
	void StartLog();
	void FileLog(const struct FString& EventString);
	void FileFlush();
	void GetChecksum(struct FString* Checksum);
	void Watermark(const struct FString& EventString);
	void CloseLog();
	void OpenLog();
};


// Class Engine.GameStats
// 0x000C (0x03C8 - 0x03BC)
class AGameStats : public AInfo
{
public:
	class AFileLog*                                    TempLog;                                                  // 0x03BC(0x0004)
	class AGameReplicationInfo*                        GRI;                                                      // 0x03C0(0x0004)
	unsigned long                                      bShowBots : 1;                                            // 0x03C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameStats");
		return ptr;
	}


	void GameEvent(const struct FString& GEvent, const struct FString& Desc, class APlayerReplicationInfo* Who);
	void SpecialEvent(class APlayerReplicationInfo* Who, const struct FString& Desc);
	void KillEvent(const struct FString& KillType, class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim, class UClass* Damage);
	void TeamScoreEvent(int Team, float Points, const struct FString& Desc);
	void ScoreEvent(class APlayerReplicationInfo* Who, float Points, const struct FString& Desc);
	void DisconnectEvent(class APlayerReplicationInfo* Who);
	void ConnectEvent(class APlayerReplicationInfo* Who);
	void EndGame(const struct FString& Reason);
	void StartGame();
	void ServerInfo();
	void NewGame();
	struct FString MapName();
	struct FString TimeZone();
	struct FString FullTimeDate();
	struct FString Header();
	struct FString TimeStamp();
	void Destroyed();
	void PostBeginPlay();
	void Logf(const struct FString& LogString);
	void Shutdown();
	void Init();
	struct FString GetMapFileName();
	struct FString GetStatsIdentifier(class AController* C);
};


// Class Engine.FileLog
// 0x0010 (0x03CC - 0x03BC)
class AFileLog : public AInfo
{
public:
	int                                                LogAr;                                                    // 0x03BC(0x0004)
	struct FString                                     LogFileName;                                              // 0x03C0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileLog");
		return ptr;
	}


	void Destroyed();
	void Logf(const struct FString& LogString);
	void CloseLog();
	void OpenLog(const struct FString& FName);
};


// Class Engine.LocalMessage
// 0x001C (0x03D8 - 0x03BC)
class ALocalMessage : public AInfo
{
public:
	unsigned long                                      bComplexString : 1;                                       // 0x03BC(0x0004)
	unsigned long                                      bIsSpecial : 1;                                           // 0x03BC(0x0004)
	unsigned long                                      bIsUnique : 1;                                            // 0x03BC(0x0004)
	unsigned long                                      bIsConsoleMessage : 1;                                    // 0x03BC(0x0004)
	unsigned long                                      bFadeMessage : 1;                                         // 0x03BC(0x0004)
	unsigned long                                      bBeep : 1;                                                // 0x03BC(0x0004)
	unsigned long                                      bOffsetYPos : 1;                                          // 0x03BC(0x0004)
	unsigned long                                      bCenter : 1;                                              // 0x03BC(0x0004)
	unsigned long                                      bFromBottom : 1;                                          // 0x03BC(0x0004)
	int                                                LifeTime;                                                 // 0x03C0(0x0004)
	class UClass*                                      ChildMessage;                                             // 0x03C4(0x0004) (Edit)
	struct FColor                                      DrawColor;                                                // 0x03C8(0x0004)
	float                                              XPos;                                                     // 0x03CC(0x0004)
	float                                              YPos;                                                     // 0x03D0(0x0004)
	int                                                FontSize;                                                 // 0x03D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}


	float GetLifeTime(int Switch);
	int GetFontSize(int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer);
	float GetOffset(int Switch, float YL, float ClipY);
	struct FColor GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2);
	struct FColor GetConsoleColor(class APlayerReplicationInfo* RelatedPRI_1);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	struct FString AssembleString(class AHUD* myHUD, int Switch, class APlayerReplicationInfo* RelatedPRI_1, const struct FString& MessageString);
	struct FString GetString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	struct FString GetRelatedString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void RenderComplexMessage(class UCanvas* Canvas, const struct FString& MessageString, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject, float* XL, float* YL);
};


// Class Engine.ObjectPool
// 0x000C (0x0040 - 0x0034)
class UObjectPool : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0034(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectPool");
		return ptr;
	}


	void Shrink();
	void FreeObject(class UObject* Obj);
	class UObject* AllocateObject(class UClass* ObjectClass);
};


// Class Engine.VoicePack
// 0x0000 (0x03BC - 0x03BC)
class AVoicePack : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoicePack");
		return ptr;
	}


	int PickRandomTauntFor(class AController* C, bool bNoMature, bool bNoHumanOnly);
	unsigned char GetMessageIndex(const struct FName& PhraseName);
	void PlayerSpeech(const struct FName& type, int Index, const struct FString& Callsign, class AActor* PackOwner);
	void ClientInitialize(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char messageIndex);
};


// Class Engine.Suicided
// 0x0000 (0x0468 - 0x0468)
class ASuicided : public ADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Suicided");
		return ptr;
	}

};


// Class Engine.ScoreBoard
// 0x000C (0x03C8 - 0x03BC)
class AScoreBoard : public AInfo
{
public:
	class AGameReplicationInfo*                        GRI;                                                      // 0x03BC(0x0004) (Edit)
	class UClass*                                      HudClass;                                                 // 0x03C0(0x0004) (Edit)
	unsigned long                                      bDisplayMessages : 1;                                     // 0x03C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScoreBoard");
		return ptr;
	}


	void SortPRIArray();
	bool InOrder(class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2);
	void UpdateScoreBoard(class UCanvas* Canvas);
	struct FString FormatTime(int Seconds);
	bool UpdateGRI();
	void DrawScoreboard(class UCanvas* C);
	void Init();
	struct FString InitTitle();
	void InitGRI();
	class UFont* GetSmallFontFor(int ScreenWidth, int offset);
	bool HaveHalfFont(class UCanvas* Canvas, int offset);
	class UFont* GetSmallerFontFor(class UCanvas* Canvas, int offset);
	void PostBeginPlay();
};


// Class Engine.VolumeTimer
// 0x0004 (0x03C0 - 0x03BC)
class AVolumeTimer : public AInfo
{
public:
	class APhysicsVolume*                              V;                                                        // 0x03BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTimer");
		return ptr;
	}


	void Timer();
	void PostBeginPlay();
};


// Class Engine.Crushed
// 0x0000 (0x0468 - 0x0468)
class ACrushed : public ADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Crushed");
		return ptr;
	}

};


// Class Engine.fell
// 0x0000 (0x0468 - 0x0468)
class Afell : public ADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.fell");
		return ptr;
	}

};


// Class Engine.FellLava
// 0x0000 (0x0468 - 0x0468)
class AFellLava : public Afell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FellLava");
		return ptr;
	}

};


// Class Engine.Effects
// 0x0000 (0x03BC - 0x03BC)
class AEffects : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Effects");
		return ptr;
	}

};


// Class Engine.DamTypeTelefragged
// 0x0000 (0x0468 - 0x0468)
class ADamTypeTelefragged : public ADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamTypeTelefragged");
		return ptr;
	}

};


// Class Engine.Gibbed
// 0x0000 (0x0468 - 0x0468)
class AGibbed : public ADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Gibbed");
		return ptr;
	}

};


// Class Engine.GameMessage
// 0x00C0 (0x0498 - 0x03D8)
class AGameMessage : public ALocalMessage
{
public:
	struct FString                                     SwitchLevelMessage;                                       // 0x03D8(0x000C) (Localized, NeedCtorLink)
	struct FString                                     LeftMessage;                                              // 0x03E4(0x000C) (Localized, NeedCtorLink)
	struct FString                                     FailedTeamMessage;                                        // 0x03F0(0x000C) (Localized, NeedCtorLink)
	struct FString                                     FailedPlaceMessage;                                       // 0x03FC(0x000C) (Localized, NeedCtorLink)
	struct FString                                     FailedSpawnMessage;                                       // 0x0408(0x000C) (Localized, NeedCtorLink)
	struct FString                                     EnteredMessage;                                           // 0x0414(0x000C) (Localized, NeedCtorLink)
	struct FString                                     MaxedOutMessage;                                          // 0x0420(0x000C) (Localized, NeedCtorLink)
	struct FString                                     OvertimeMessage;                                          // 0x042C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     GlobalNameChange;                                         // 0x0438(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NewTeamMessage;                                           // 0x0444(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NewTeamMessageTrailer;                                    // 0x0450(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NoNameChange;                                             // 0x045C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     VoteStarted;                                              // 0x0468(0x000C) (Localized, NeedCtorLink)
	struct FString                                     VotePassed;                                               // 0x0474(0x000C) (Localized, NeedCtorLink)
	struct FString                                     MustHaveStats;                                            // 0x0480(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NewPlayerMessage;                                         // 0x048C(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMessage");
		return ptr;
	}


	struct FString GetString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
};


// Class Engine.MapList
// 0x0010 (0x03CC - 0x03BC)
class AMapList : public AInfo
{
public:
	TArray<struct FString>                             Maps;                                                     // 0x03BC(0x000C) (Edit, Config, NeedCtorLink)
	int                                                MapNum;                                                   // 0x03C8(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapList");
		return ptr;
	}


	struct FString GetNextMap();
};


// Class Engine.AccessControl
// 0x029C (0x0658 - 0x03BC)
class AAccessControl : public AInfo
{
public:
	struct FString                                     IPPolicies[0x32];                                         // 0x03BC(0x000C) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     IPBanned;                                                 // 0x0614(0x000C) (Localized, NeedCtorLink)
	struct FString                                     WrongPassword;                                            // 0x0620(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NeedPassword;                                             // 0x062C(0x000C) (Localized, NeedCtorLink)
	class UClass*                                      AdminClass;                                               // 0x0638(0x0004)
	struct FString                                     AdminPassword;                                            // 0x063C(0x000C) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     GamePassword;                                             // 0x0648(0x000C) (Config, GlobalConfig, NeedCtorLink)
	unsigned long                                      bDontAddDefaultAdmin : 1;                                 // 0x0654(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AccessControl");
		return ptr;
	}


	bool CheckIPPolicy(const struct FString& Address);
	void PreLogin(const struct FString& Options, const struct FString& Address, bool bSpectator, struct FString* Error, struct FString* FailCode);
	bool AdminLogin(class APlayerController* P, const struct FString& Password);
	void KickBan(const struct FString& S);
	void Kick(const struct FString& S);
	bool RequiresPassword();
	void SetGamePassword(const struct FString& P);
	void SetAdminPassword(const struct FString& P);
};


// Class Engine.BroadcastHandler
// 0x0008 (0x03C4 - 0x03BC)
class ABroadcastHandler : public AInfo
{
public:
	int                                                SentText;                                                 // 0x03BC(0x0004)
	unsigned long                                      bMuteSpectators : 1;                                      // 0x03C0(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BroadcastHandler");
		return ptr;
	}


	void AllowBroadcastLocalized(class AActor* Sender, class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void BroadcastTeam(class AController* Sender, const struct FString& Msg, const struct FName& type);
	void Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& type);
	void BroadcastLocalized(class AActor* Sender, class APlayerController* Receiver, class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	void BroadcastText(class APlayerReplicationInfo* SenderPRI, class APlayerController* Receiver, const struct FString& Msg, const struct FName& type);
	bool AllowsBroadcast(class AActor* broadcaster, int Len);
	void UpdateSentText();
};


// Class Engine.GameRules
// 0x0004 (0x03C0 - 0x03BC)
class AGameRules : public AInfo
{
public:
	class AGameRules*                                  NextGameRules;                                            // 0x03BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameRules");
		return ptr;
	}


	int NetDamage(int OriginalDamage, int Damage, class APawn* injured, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType);
	bool CriticalPlayer(class AController* Other);
	void ScoreKill(class AController* Killer, class AController* Killed);
	void ScoreObjective(class APlayerReplicationInfo* Scorer, int Score);
	bool PreventDeath(class APawn* Killed, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	bool OverridePickupQuery(class APawn* Other, class APickup* item, unsigned char* bAllowPickup);
	bool CheckScore(class APlayerReplicationInfo* Scorer);
	bool CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	bool HandleRestartGame();
	struct FString GetRules();
	class ANavigationPoint* FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& incomingName);
	void AddGameRules(class AGameRules* GR);
};


// Class Engine.MessagingSpectator
// 0x0000 (0x0858 - 0x0858)
class AMessagingSpectator : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MessagingSpectator");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.WeaponPickup
// 0x0004 (0x03F8 - 0x03F4)
class AWeaponPickup : public APickup
{
public:
	unsigned long                                      bWeaponStay : 1;                                          // 0x03F4(0x0004)
	unsigned long                                      bThrown : 1;                                              // 0x03F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WeaponPickup");
		return ptr;
	}


	float GetRespawnTime();
	float BotDesireability(class APawn* Bot);
	float DetourWeight(class APawn* Other, float PathWeight);
	bool AllowRepeatPickup();
	void StartSleeping();
	void SetWeaponStay();
	void PostBeginPlay();
};


// Class Engine.FailedConnect
// 0x0030 (0x0408 - 0x03D8)
class AFailedConnect : public ALocalMessage
{
public:
	struct FString                                     FailMessage[0x4];                                         // 0x03D8(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FailedConnect");
		return ptr;
	}


	struct FString GetString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject);
	int GetFailSwitch(const struct FString& FailString);
};


// Class Engine.KVehicleFactory
// 0x000C (0x03C8 - 0x03BC)
class AKVehicleFactory : public AActor
{
public:
	class UClass*                                      VehicleClass;                                             // 0x03BC(0x0004) (Edit)
	int                                                MaxVehicleCount;                                          // 0x03C0(0x0004) (Edit)
	int                                                VehicleCount;                                             // 0x03C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KVehicleFactory");
		return ptr;
	}


	void Trigger(class AActor* Other, class APawn* EventInstigator);
};


// Class Engine.Fragment
// 0x0040 (0x03FC - 0x03BC)
class AFragment : public AEffects
{
public:
	class UMesh*                                       Fragments[0xB];                                           // 0x03BC(0x0004) (Edit)
	int                                                numFragmentTypes;                                         // 0x03E8(0x0004)
	unsigned long                                      bFirstHit : 1;                                            // 0x03EC(0x0004)
	class USound*                                      ImpactSound;                                              // 0x03F0(0x0004) (Edit)
	class USound*                                      AltImpactSound;                                           // 0x03F4(0x0004) (Edit)
	float                                              SplashTime;                                               // 0x03F8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Fragment");
		return ptr;
	}


	void RandSpin(float spinRate);
	void HitWall(const struct FVector& HitNormal, class AActor* HitWall);
	void CalcVelocity(const struct FVector& Momentum);
	bool CanSplash();
};


// Class Engine.Admin
// 0x0000 (0x0858 - 0x0858)
class AAdmin : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Admin");
		return ptr;
	}


	void Switch(const struct FString& URL);
	void RestartMap();
	void PlayerList();
	void Kick(const struct FString& S);
	void Say(const struct FString& Msg);
	void KickBan(const struct FString& S);
	void Admin(const struct FString& CommandLine);
	void PostBeginPlay();
};


// Class Engine.ZoneTrigger
// 0x0000 (0x03F0 - 0x03F0)
class AZoneTrigger : public ATrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ZoneTrigger");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Lineage 2 (Gracia Final) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace L2_SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.Actor.GetEffTargetLocation
struct AActor_GetEffTargetLocation_Params
{
	struct FVector                                     LocVector;                                                // (Parm, OutParm)
};

// Function Engine.Actor.SetOverlayColor
struct AActor_SetOverlayColor_Params
{
	unsigned char                                      R;                                                        // (Parm)
	unsigned char                                      G;                                                        // (Parm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      A;                                                        // (Parm)
};

// Function Engine.Actor.EffectIsRelevant
struct AActor_EffectIsRelevant_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm)
	bool                                               bForceDedicated;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetCollisionExtent
struct AActor_GetCollisionExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.CanSplash
struct AActor_CanSplash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.PlayTeleportEffect
struct AActor_PlayTeleportEffect_Params
{
	bool                                               bOut;                                                     // (Parm)
	bool                                               bSound;                                                   // (Parm)
};

// Function Engine.Actor.IsInPain
struct AActor_IsInPain_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.IsInVolume
struct AActor_IsInVolume_Params
{
	class AVolume*                                     aVolume;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.UntriggerEvent
struct AActor_UntriggerEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Actor.TriggerEvent
struct AActor_TriggerEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Actor.Reset
struct AActor_Reset_Params
{
};

// Function Engine.Actor.StartInterpolation
struct AActor_StartInterpolation_Params
{
};

// Function Engine.Actor.TouchingActor
struct AActor_TouchingActor_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.NearSpot
struct AActor_NearSpot_Params
{
	struct FVector                                     Spot;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.DisplayDebug
struct AActor_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.Actor.GetDebugName
struct AActor_GetDebugName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.SetGRI
struct AActor_SetGRI_Params
{
	class AGameReplicationInfo*                        GRI;                                                      // (Parm)
};

// Function Engine.Actor.MatchStarting
struct AActor_MatchStarting_Params
{
};

// Function Engine.Actor.GetLocalString
struct AActor_GetLocalString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.SetDefaultDisplayProperties
struct AActor_SetDefaultDisplayProperties_Params
{
};

// Function Engine.Actor.SetDisplayProperties
struct AActor_SetDisplayProperties_Params
{
	TEnumAsByte<ERenderStyle>                          NewStyle;                                                 // (Parm)
	class UMaterial*                                   NewTexture;                                               // (Parm)
	bool                                               bLighting;                                                // (Parm)
};

// Function Engine.Actor.ReplaceText
struct AActor_ReplaceText_Params
{
	struct FString                                     Text;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Replace;                                                  // (Parm, NeedCtorLink)
	struct FString                                     With;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.Actor.GetHumanReadableName
struct AActor_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.GetItemName
struct AActor_GetItemName_Params
{
	struct FString                                     FullName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.BecomeViewTarget
struct AActor_BecomeViewTarget_Params
{
};

// Function Engine.Actor.TravelPostAccept
struct AActor_TravelPostAccept_Params
{
};

// Function Engine.Actor.TravelPreAccept
struct AActor_TravelPreAccept_Params
{
};

// Function Engine.Actor.HurtRadius
struct AActor_HurtRadius_Params
{
	float                                              DamageAmount;                                             // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Engine.Actor.UpdatePrecacheStaticMeshes
struct AActor_UpdatePrecacheStaticMeshes_Params
{
};

// Function Engine.Actor.UpdatePrecacheMaterials
struct AActor_UpdatePrecacheMaterials_Params
{
};

// Function Engine.Actor.PostSetPawnResource
struct AActor_PostSetPawnResource_Params
{
};

// Function Engine.Actor.PostNetBeginPlay
struct AActor_PostNetBeginPlay_Params
{
};

// Function Engine.Actor.SetInitialState
struct AActor_SetInitialState_Params
{
};

// Function Engine.Actor.PostBeginPlay
struct AActor_PostBeginPlay_Params
{
};

// Function Engine.Actor.BroadcastLocalizedMessage
struct AActor_BroadcastLocalizedMessage_Params
{
	class UClass*                                      MessageClass;                                             // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.Actor.PreBeginPlay
struct AActor_PreBeginPlay_Params
{
};

// Function Engine.Actor.RenderTexture
struct AActor_RenderTexture_Params
{
	class UScriptedTexture*                            Tex;                                                      // (Parm)
};

// Function Engine.Actor.RenderOverlays
struct AActor_RenderOverlays_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Actor.Multiply_ColorFloat
struct AActor_Multiply_ColorFloat_Params
{
	struct FColor                                      A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Add_ColorColor
struct AActor_Add_ColorColor_Params
{
	struct FColor                                      A;                                                        // (Parm)
	struct FColor                                      B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Multiply_FloatColor
struct AActor_Multiply_FloatColor_Params
{
	float                                              A;                                                        // (Parm)
	struct FColor                                      B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Subtract_ColorColor
struct AActor_Subtract_ColorColor_Params
{
	struct FColor                                      A;                                                        // (Parm)
	struct FColor                                      B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.CollidingActors
struct AActor_CollidingActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	float                                              Radius;                                                   // (Parm)
	struct FVector                                     Loc;                                                      // (OptionalParm, Parm)
};

// Function Engine.Actor.VisibleCollidingActors
struct AActor_VisibleCollidingActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	float                                              Radius;                                                   // (Parm)
	struct FVector                                     Loc;                                                      // (OptionalParm, Parm)
	bool                                               bIgnoreHidden;                                            // (OptionalParm, Parm)
};

// Function Engine.Actor.VisibleActors
struct AActor_VisibleActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	struct FVector                                     Loc;                                                      // (OptionalParm, Parm)
};

// Function Engine.Actor.RadiusActors
struct AActor_RadiusActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	float                                              Radius;                                                   // (Parm)
	struct FVector                                     Loc;                                                      // (OptionalParm, Parm)
};

// Function Engine.Actor.TraceActors
struct AActor_TraceActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	struct FVector                                     HitLoc;                                                   // (Parm, OutParm)
	struct FVector                                     HitNorm;                                                  // (Parm, OutParm)
	struct FVector                                     End;                                                      // (Parm)
	struct FVector                                     Start;                                                    // (OptionalParm, Parm)
	struct FVector                                     Extent;                                                   // (OptionalParm, Parm)
};

// Function Engine.Actor.TouchingActors
struct AActor_TouchingActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
};

// Function Engine.Actor.BasedActors
struct AActor_BasedActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
};

// Function Engine.Actor.ChildActors
struct AActor_ChildActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
};

// Function Engine.Actor.DynamicActors
struct AActor_DynamicActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	struct FName                                       MatchTag;                                                 // (OptionalParm, Parm)
};

// Function Engine.Actor.AllActors
struct AActor_AllActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
	struct FName                                       MatchTag;                                                 // (OptionalParm, Parm)
};

// Function Engine.Actor.MoveCacheEntry
struct AActor_MoveCacheEntry_Params
{
	struct FString                                     Guid;                                                     // (Parm, NeedCtorLink)
	struct FString                                     NewFilename;                                              // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetCacheEntry
struct AActor_GetCacheEntry_Params
{
	int                                                Num;                                                      // (Parm)
	struct FString                                     Guid;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetNextIntDesc
struct AActor_GetNextIntDesc_Params
{
	struct FString                                     ClassName;                                                // (Parm, NeedCtorLink)
	int                                                Num;                                                      // (Parm)
	struct FString                                     Entry;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Description;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.Actor.GetNextInt
struct AActor_GetNextInt_Params
{
	struct FString                                     ClassName;                                                // (Parm, NeedCtorLink)
	int                                                Num;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.GetURLMap
struct AActor_GetURLMap_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.GetNextSkin
struct AActor_GetNextSkin_Params
{
	struct FString                                     Prefix;                                                   // (Parm, NeedCtorLink)
	struct FString                                     CurrentSkin;                                              // (Parm, NeedCtorLink)
	int                                                Dir;                                                      // (Parm)
	struct FString                                     SkinName;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     SkinDesc;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.Actor.GetMapName
struct AActor_GetMapName_Params
{
	struct FString                                     NameEnding;                                               // (Parm, NeedCtorLink)
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	int                                                Dir;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.BeginPlay
struct AActor_BeginPlay_Params
{
};

// Function Engine.Actor.PostTeleport
struct AActor_PostTeleport_Params
{
	class ATeleporter*                                 OutTeleporter;                                            // (Parm)
};

// Function Engine.Actor.PreTeleport
struct AActor_PreTeleport_Params
{
	class ATeleporter*                                 InTeleporter;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SuggestFallVelocity
struct AActor_SuggestFallVelocity_Params
{
	struct FVector                                     Destination;                                              // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	float                                              MaxZ;                                                     // (Parm)
	float                                              MaxXYSpeed;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.PlayerCanSeeMe
struct AActor_PlayerCanSeeMe_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.MakeNoise
struct AActor_MakeNoise_Params
{
	float                                              Loudness;                                                 // (Parm)
};

// Function Engine.Actor.GetSoundDuration
struct AActor_GetSoundDuration_Params
{
	class USound*                                      Sound;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.StopSound
struct AActor_StopSound_Params
{
	class USound*                                      a_Sound;                                                  // (Parm)
	float                                              a_StopByFadeOutTime;                                      // (OptionalParm, Parm)
};

// Function Engine.Actor.PlayLoopSound
struct AActor_PlayLoopSound_Params
{
	class USound*                                      Sound;                                                    // (Parm)
	TEnumAsByte<ESoundSlot>                            Slot;                                                     // (OptionalParm, Parm)
	float                                              Volume;                                                   // (OptionalParm, Parm)
	bool                                               bNoOverride;                                              // (OptionalParm, Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	float                                              Pitch;                                                    // (OptionalParm, Parm)
	bool                                               Attenuate;                                                // (OptionalParm, Parm)
	float                                              FadeInDuration;                                           // (OptionalParm, Parm)
};

// Function Engine.Actor.PlaySoundOnVehicle
struct AActor_PlaySoundOnVehicle_Params
{
	class USound*                                      Sound;                                                    // (Parm)
	TEnumAsByte<ESoundSlot>                            Slot;                                                     // (OptionalParm, Parm)
	float                                              Volume;                                                   // (OptionalParm, Parm)
	bool                                               bNoOverride;                                              // (OptionalParm, Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	float                                              Pitch;                                                    // (OptionalParm, Parm)
	bool                                               Attenuate;                                                // (OptionalParm, Parm)
};

// Function Engine.Actor.DemoPlaySound
struct AActor_DemoPlaySound_Params
{
	class USound*                                      Sound;                                                    // (Parm)
	TEnumAsByte<ESoundSlot>                            Slot;                                                     // (OptionalParm, Parm)
	float                                              Volume;                                                   // (OptionalParm, Parm)
	bool                                               bNoOverride;                                              // (OptionalParm, Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	float                                              Pitch;                                                    // (OptionalParm, Parm)
	bool                                               Attenuate;                                                // (OptionalParm, Parm)
};

// Function Engine.Actor.PlayOwnedSound
struct AActor_PlayOwnedSound_Params
{
	class USound*                                      Sound;                                                    // (Parm)
	TEnumAsByte<ESoundSlot>                            Slot;                                                     // (OptionalParm, Parm)
	float                                              Volume;                                                   // (OptionalParm, Parm)
	bool                                               bNoOverride;                                              // (OptionalParm, Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	float                                              Pitch;                                                    // (OptionalParm, Parm)
	bool                                               Attenuate;                                                // (OptionalParm, Parm)
};

// Function Engine.Actor.PlaySound
struct AActor_PlaySound_Params
{
	class USound*                                      Sound;                                                    // (Parm)
	TEnumAsByte<ESoundSlot>                            Slot;                                                     // (OptionalParm, Parm)
	float                                              Volume;                                                   // (OptionalParm, Parm)
	bool                                               bNoOverride;                                              // (OptionalParm, Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	float                                              Pitch;                                                    // (OptionalParm, Parm)
	bool                                               Attenuate;                                                // (OptionalParm, Parm)
};

// Function Engine.Actor.SetTimer
struct AActor_SetTimer_Params
{
	float                                              NewTimerRate;                                             // (Parm)
	bool                                               bLoop;                                                    // (Parm)
};

// Function Engine.Actor.TornOff
struct AActor_TornOff_Params
{
};

// Function Engine.Actor.Destroy
struct AActor_Destroy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Spawn
struct AActor_Spawn_Params
{
	class UClass*                                      SpawnClass;                                               // (Parm)
	class AActor*                                      SpawnOwner;                                               // (OptionalParm, Parm)
	struct FName                                       SpawnTag;                                                 // (OptionalParm, Parm)
	struct FVector                                     SpawnLocation;                                            // (OptionalParm, Parm)
	struct FRotator                                    SpawnRotation;                                            // (OptionalParm, Parm)
	bool                                               bNoCollisionCheck;                                        // (OptionalParm, Parm)
	bool                                               bNeedMeshContainer;                                       // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.FastTrace
struct AActor_FastTrace_Params
{
	struct FVector                                     TraceEnd;                                                 // (Parm)
	struct FVector                                     TraceStart;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Trace
struct AActor_Trace_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, OutParm)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm)
	struct FVector                                     TraceEnd;                                                 // (Parm)
	struct FVector                                     TraceStart;                                               // (OptionalParm, Parm)
	bool                                               bTraceActors;                                             // (OptionalParm, Parm)
	struct FVector                                     Extent;                                                   // (OptionalParm, Parm)
	class UMaterial*                                   Material;                                                 // (OptionalParm, Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.TakeDamage
struct AActor_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.Actor.KilledBy
struct AActor_KilledBy_Params
{
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Actor.FellOutOfWorld
struct AActor_FellOutOfWorld_Params
{
	TEnumAsByte<EeKillZType>                           KillType;                                                 // (Parm)
};

// Function Engine.Actor.UsedBy
struct AActor_UsedBy_Params
{
	class APawn*                                       User;                                                     // (Parm)
};

// Function Engine.Actor.EndedRotation
struct AActor_EndedRotation_Params
{
};

// Function Engine.Actor.FinishedInterpolation
struct AActor_FinishedInterpolation_Params
{
};

// Function Engine.Actor.EncroachedBy
struct AActor_EncroachedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.EncroachingOn
struct AActor_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SpecialHandling
struct AActor_SpecialHandling_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Detach
struct AActor_Detach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.Attach
struct AActor_Attach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.BaseChange
struct AActor_BaseChange_Params
{
};

// Function Engine.Actor.Bump
struct AActor_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.UnTouch
struct AActor_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.PostTouch
struct AActor_PostTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.Touch
struct AActor_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.PhysicsVolumeChange
struct AActor_PhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function Engine.Actor.ZoneChange
struct AActor_ZoneChange_Params
{
	class AZoneInfo*                                   NewZone;                                                  // (Parm)
};

// Function Engine.Actor.Landed
struct AActor_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Engine.Actor.Falling
struct AActor_Falling_Params
{
};

// Function Engine.Actor.HitWall
struct AActor_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitWall;                                                  // (Parm)
};

// Function Engine.Actor.Timer
struct AActor_Timer_Params
{
};

// Function Engine.Actor.EndEvent
struct AActor_EndEvent_Params
{
};

// Function Engine.Actor.BeginEvent
struct AActor_BeginEvent_Params
{
};

// Function Engine.Actor.UnTrigger
struct AActor_UnTrigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Actor.Trigger
struct AActor_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Actor.PostNetReceive
struct AActor_PostNetReceive_Params
{
};

// Function Engine.Actor.Tick
struct AActor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.Actor.LostChild
struct AActor_LostChild_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.GainedChild
struct AActor_GainedChild_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.Destroyed
struct AActor_Destroyed_Params
{
};

// Function Engine.Actor.SetAlphaTexModifier
struct AActor_SetAlphaTexModifier_Params
{
	int                                                a_Alpha;                                                  // (Parm)
};

// Function Engine.Actor.SetActorViewType
struct AActor_SetActorViewType_Params
{
	TEnumAsByte<EActorViewType>                        a_ActorViewType;                                          // (Parm)
};

// Function Engine.Actor.NDestroy
struct AActor_NDestroy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.StopAllMusic
struct AActor_StopAllMusic_Params
{
	float                                              FadeOutTime;                                              // (Parm)
};

// Function Engine.Actor.StopMusic
struct AActor_StopMusic_Params
{
	int                                                SongHandle;                                               // (Parm)
	float                                              FadeOutTime;                                              // (Parm)
};

// Function Engine.Actor.PlayMusic
struct AActor_PlayMusic_Params
{
	struct FString                                     Song;                                                     // (Parm, NeedCtorLink)
	float                                              FadeInTime;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.UnClock
struct AActor_UnClock_Params
{
	float                                              Time;                                                     // (Parm, OutParm)
};

// Function Engine.Actor.Clock
struct AActor_Clock_Params
{
	float                                              Time;                                                     // (Parm, OutParm)
};

// Function Engine.Actor.KUpdateState
struct AActor_KUpdateState_Params
{
	struct FKRigidBodyState                            NewState;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KApplyForce
struct AActor_KApplyForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, OutParm)
	struct FVector                                     Torque;                                                   // (Parm, OutParm)
};

// Function Engine.Actor.KSkelConvulse
struct AActor_KSkelConvulse_Params
{
};

// Function Engine.Actor.KVelDropBelow
struct AActor_KVelDropBelow_Params
{
};

// Function Engine.Actor.KImpact
struct AActor_KImpact_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     pos;                                                      // (Parm)
	struct FVector                                     impactVel;                                                // (Parm)
	struct FVector                                     impactNorm;                                               // (Parm)
};

// Function Engine.Actor.KIsRagdollAvailable
struct AActor_KIsRagdollAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KMakeRagdollAvailable
struct AActor_KMakeRagdollAvailable_Params
{
};

// Function Engine.Actor.KRemoveAllBoneLifters
struct AActor_KRemoveAllBoneLifters_Params
{
};

// Function Engine.Actor.KRemoveLifterFromBone
struct AActor_KRemoveLifterFromBone_Params
{
	struct FName                                       bonename;                                                 // (Parm)
};

// Function Engine.Actor.KAddBoneLifter
struct AActor_KAddBoneLifter_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	struct FInterpCurve                                LiftVel;                                                  // (Parm, NeedCtorLink)
	float                                              LateralFriction;                                          // (Parm)
	struct FInterpCurve                                Softness;                                                 // (Parm, NeedCtorLink)
};

// Function Engine.Actor.KFreezeRagdoll
struct AActor_KFreezeRagdoll_Params
{
};

// Function Engine.Actor.KGetSkelMass
struct AActor_KGetSkelMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KSetSkelVel
struct AActor_KSetSkelVel_Params
{
	struct FVector                                     Velocity;                                                 // (Parm)
	struct FVector                                     AngVelocity;                                              // (OptionalParm, Parm)
	bool                                               AddToCurrent;                                             // (OptionalParm, Parm)
};

// Function Engine.Actor.KEnableCollision
struct AActor_KEnableCollision_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.KDisableCollision
struct AActor_KDisableCollision_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Actor.KGetActorGravScale
struct AActor_KGetActorGravScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KSetActorGravScale
struct AActor_KSetActorGravScale_Params
{
	float                                              ActorGravScale;                                           // (Parm)
};

// Function Engine.Actor.KSetBlockKarma
struct AActor_KSetBlockKarma_Params
{
	bool                                               newBlock;                                                 // (Parm)
};

// Function Engine.Actor.KSetStayUpright
struct AActor_KSetStayUpright_Params
{
	bool                                               stayUpright;                                              // (Parm)
	bool                                               allowRotate;                                              // (Parm)
};

// Function Engine.Actor.KAddImpulse
struct AActor_KAddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm)
	struct FVector                                     Position;                                                 // (Parm)
	struct FName                                       bonename;                                                 // (OptionalParm, Parm)
};

// Function Engine.Actor.KIsAwake
struct AActor_KIsAwake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KWake
struct AActor_KWake_Params
{
};

// Function Engine.Actor.KGetImpactThreshold
struct AActor_KGetImpactThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KSetImpactThreshold
struct AActor_KSetImpactThreshold_Params
{
	float                                              thresh;                                                   // (Parm)
};

// Function Engine.Actor.KGetCOMPosition
struct AActor_KGetCOMPosition_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm)
};

// Function Engine.Actor.KGetCOMOffset
struct AActor_KGetCOMOffset_Params
{
	struct FVector                                     offset;                                                   // (Parm, OutParm)
};

// Function Engine.Actor.KSetCOMOffset
struct AActor_KSetCOMOffset_Params
{
	struct FVector                                     offset;                                                   // (Parm)
};

// Function Engine.Actor.KGetRestitution
struct AActor_KGetRestitution_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KSetRestitution
struct AActor_KSetRestitution_Params
{
	float                                              rest;                                                     // (Parm)
};

// Function Engine.Actor.KGetFriction
struct AActor_KGetFriction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KSetFriction
struct AActor_KSetFriction_Params
{
	float                                              friction;                                                 // (Parm)
};

// Function Engine.Actor.KGetDampingProps
struct AActor_KGetDampingProps_Params
{
	float                                              lindamp;                                                  // (Parm, OutParm)
	float                                              angdamp;                                                  // (Parm, OutParm)
};

// Function Engine.Actor.KSetDampingProps
struct AActor_KSetDampingProps_Params
{
	float                                              lindamp;                                                  // (Parm)
	float                                              angdamp;                                                  // (Parm)
};

// Function Engine.Actor.KGetInertiaTensor
struct AActor_KGetInertiaTensor_Params
{
	struct FVector                                     it1;                                                      // (Parm, OutParm)
	struct FVector                                     it2;                                                      // (Parm, OutParm)
};

// Function Engine.Actor.KSetInertiaTensor
struct AActor_KSetInertiaTensor_Params
{
	struct FVector                                     it1;                                                      // (Parm)
	struct FVector                                     it2;                                                      // (Parm)
};

// Function Engine.Actor.KGetMass
struct AActor_KGetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KSetMass
struct AActor_KSetMass_Params
{
	float                                              Mass;                                                     // (Parm)
};

// Function Engine.Actor.KRBVecFromVector
struct AActor_KRBVecFromVector_Params
{
	struct FVector                                     V;                                                        // (Parm)
	struct FKRBVec                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KRBVecToVector
struct AActor_KRBVecToVector_Params
{
	struct FKRBVec                                     RBvec;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.KDrawRigidBodyState
struct AActor_KDrawRigidBodyState_Params
{
	struct FKRigidBodyState                            RBstate;                                                  // (Parm)
	bool                                               AltColour;                                                // (Parm)
};

// Function Engine.Actor.KGetRigidBodyState
struct AActor_KGetRigidBodyState_Params
{
	struct FKRigidBodyState                            RBstate;                                                  // (Parm, OutParm)
};

// Function Engine.Actor.KGetRBQuaternion
struct AActor_KGetRBQuaternion_Params
{
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.OnlyAffectPawns
struct AActor_OnlyAffectPawns_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.Actor.SetPhysics
struct AActor_SetPhysics_Params
{
	TEnumAsByte<EPhysics>                              newPhysics;                                               // (Parm)
};

// Function Engine.Actor.FinishInterpolation
struct AActor_FinishInterpolation_Params
{
};

// Function Engine.Actor.DebugUnclock
struct AActor_DebugUnclock_Params
{
};

// Function Engine.Actor.DebugClock
struct AActor_DebugClock_Params
{
};

// Function Engine.Actor.DrawDebugLine
struct AActor_DrawDebugLine_Params
{
	struct FVector                                     LineStart;                                                // (Parm)
	struct FVector                                     LineEnd;                                                  // (Parm)
	unsigned char                                      R;                                                        // (Parm)
	unsigned char                                      G;                                                        // (Parm)
	unsigned char                                      B;                                                        // (Parm)
};

// Function Engine.Actor.GetRenderBoundingSphere
struct AActor_GetRenderBoundingSphere_Params
{
	struct FPlane                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.AnimIsInGroup
struct AActor_AnimIsInGroup_Params
{
	int                                                Channel;                                                  // (Parm)
	struct FName                                       GroupName;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetAnimParams
struct AActor_GetAnimParams_Params
{
	int                                                Channel;                                                  // (Parm)
	struct FName                                       OutSeqName;                                               // (Parm, OutParm)
	float                                              OutAnimFrame;                                             // (Parm, OutParm)
	float                                              OutAnimRate;                                              // (Parm, OutParm)
};

// Function Engine.Actor.SetBoneRotation
struct AActor_SetBoneRotation_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	struct FRotator                                    BoneTurn;                                                 // (OptionalParm, Parm)
	int                                                Space;                                                    // (OptionalParm, Parm)
	float                                              Alpha;                                                    // (OptionalParm, Parm)
};

// Function Engine.Actor.SetBoneLocation
struct AActor_SetBoneLocation_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	struct FVector                                     BoneTrans;                                                // (OptionalParm, Parm)
	float                                              Alpha;                                                    // (OptionalParm, Parm)
};

// Function Engine.Actor.SetBoneDirection
struct AActor_SetBoneDirection_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	struct FRotator                                    BoneTurn;                                                 // (Parm)
	struct FVector                                     BoneTrans;                                                // (OptionalParm, Parm)
	float                                              Alpha;                                                    // (OptionalParm, Parm)
	int                                                Space;                                                    // (OptionalParm, Parm)
};

// Function Engine.Actor.SetBoneScale
struct AActor_SetBoneScale_Params
{
	int                                                Slot;                                                     // (Parm)
	float                                              BoneScale;                                                // (OptionalParm, Parm)
	struct FName                                       bonename;                                                 // (OptionalParm, Parm)
};

// Function Engine.Actor.LockRootMotion
struct AActor_LockRootMotion_Params
{
	int                                                Lock;                                                     // (Parm)
};

// Function Engine.Actor.AttachToBoneWithIndex
struct AActor_AttachToBoneWithIndex_Params
{
	class AActor*                                      Attachment;                                               // (Parm)
	int                                                BoneIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.DetachFromBone
struct AActor_DetachFromBone_Params
{
	class AActor*                                      Attachment;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.AttachToBone
struct AActor_AttachToBone_Params
{
	class AActor*                                      Attachment;                                               // (Parm)
	struct FName                                       bonename;                                                 // (Parm)
	int                                                type;                                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetRootRotationDelta
struct AActor_GetRootRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetRootLocationDelta
struct AActor_GetRootLocationDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetRootRotation
struct AActor_GetRootRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetRootLocation
struct AActor_GetRootLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetBoneCoordsWithBoneIndex
struct AActor_GetBoneCoordsWithBoneIndex_Params
{
	int                                                BoneIndex;                                                // (Parm)
	struct FCoords                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetBoneRotation
struct AActor_GetBoneRotation_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	int                                                Space;                                                    // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.GetBoneCoords
struct AActor_GetBoneCoords_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	struct FCoords                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.AnimBlendToAlpha
struct AActor_AnimBlendToAlpha_Params
{
	int                                                Stage;                                                    // (Parm)
	float                                              TargetAlpha;                                              // (Parm)
	float                                              TimeInterval;                                             // (Parm)
};

// Function Engine.Actor.AnimBlendParams
struct AActor_AnimBlendParams_Params
{
	int                                                Stage;                                                    // (Parm)
	float                                              BlendAlpha;                                               // (OptionalParm, Parm)
	float                                              InTime;                                                   // (OptionalParm, Parm)
	float                                              OutTime;                                                  // (OptionalParm, Parm)
	struct FName                                       bonename;                                                 // (OptionalParm, Parm)
	bool                                               bGlobalPose;                                              // (OptionalParm, Parm)
};

// Function Engine.Actor.BoneRefresh
struct AActor_BoneRefresh_Params
{
};

// Function Engine.Actor.LinkMesh
struct AActor_LinkMesh_Params
{
	class UMesh*                                       NewMesh;                                                  // (Parm)
	bool                                               bKeepAnim;                                                // (OptionalParm, Parm)
};

// Function Engine.Actor.LinkSkelAnim
struct AActor_LinkSkelAnim_Params
{
	class UMeshAnimation*                              Anim;                                                     // (Parm)
	class UMesh*                                       NewMesh;                                                  // (OptionalParm, Parm)
};

// Function Engine.Actor.GetNotifyChannel
struct AActor_GetNotifyChannel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.EnableChannelNotify
struct AActor_EnableChannelNotify_Params
{
	int                                                Channel;                                                  // (Parm)
	int                                                Switch;                                                   // (Parm)
};

// Function Engine.Actor.AnimEnd
struct AActor_AnimEnd_Params
{
	int                                                Channel;                                                  // (Parm)
};

// Function Engine.Actor.ClearL2Game
struct AActor_ClearL2Game_Params
{
};

// Function Engine.Actor.L2GameActionNotify
struct AActor_L2GameActionNotify_Params
{
	TEnumAsByte<EL2GameAction>                         GameAction;                                               // (Parm)
};

// Function Engine.Actor.IsTweening
struct AActor_IsTweening_Params
{
	int                                                Channel;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetAnimFrame
struct AActor_SetAnimFrame_Params
{
	float                                              Time;                                                     // (Parm)
	int                                                Channel;                                                  // (OptionalParm, Parm)
	int                                                UnitFlag;                                                 // (OptionalParm, Parm)
};

// Function Engine.Actor.FreezeAnimAt
struct AActor_FreezeAnimAt_Params
{
	float                                              Time;                                                     // (Parm)
	int                                                Channel;                                                  // (OptionalParm, Parm)
};

// Function Engine.Actor.HasBoneName
struct AActor_HasBoneName_Params
{
	struct FName                                       bonename;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.StopAnimating
struct AActor_StopAnimating_Params
{
	bool                                               ClearAllButBase;                                          // (OptionalParm, Parm)
};

// Function Engine.Actor.HasAnim
struct AActor_HasAnim_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.FinishAnim
struct AActor_FinishAnim_Params
{
	int                                                Channel;                                                  // (OptionalParm, Parm)
};

// Function Engine.Actor.IsAnimating
struct AActor_IsAnimating_Params
{
	int                                                Channel;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.TweenAnim
struct AActor_TweenAnim_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              Time;                                                     // (Parm)
	int                                                Channel;                                                  // (OptionalParm, Parm)
};

// Function Engine.Actor.LoopAnim
struct AActor_LoopAnim_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              Rate;                                                     // (OptionalParm, Parm)
	float                                              TweenTime;                                                // (OptionalParm, Parm)
	int                                                Channel;                                                  // (OptionalParm, Parm)
};

// Function Engine.Actor.PlayAnim
struct AActor_PlayAnim_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              Rate;                                                     // (OptionalParm, Parm)
	float                                              TweenTime;                                                // (OptionalParm, Parm)
	int                                                Channel;                                                  // (OptionalParm, Parm)
};

// Function Engine.Actor.GetMeshName
struct AActor_GetMeshName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Actor.SetOwner
struct AActor_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (Parm)
};

// Function Engine.Actor.SetBase
struct AActor_SetBase_Params
{
	class AActor*                                      NewBase;                                                  // (Parm)
	struct FVector                                     NewFloor;                                                 // (OptionalParm, Parm)
};

// Function Engine.Actor.AutonomousPhysics
struct AActor_AutonomousPhysics_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Engine.Actor.MoveSmooth
struct AActor_MoveSmooth_Params
{
	struct FVector                                     Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetRelativeLocation
struct AActor_SetRelativeLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetRelativeRotation
struct AActor_SetRelativeRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetRotation
struct AActor_SetRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetLocation
struct AActor_SetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm)
	bool                                               bNoCheck;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.Move
struct AActor_Move_Params
{
	struct FVector                                     Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetDrawType
struct AActor_SetDrawType_Params
{
	TEnumAsByte<EDrawType>                             NewDrawType;                                              // (Parm)
};

// Function Engine.Actor.SetStaticMesh
struct AActor_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewStaticMesh;                                            // (Parm)
};

// Function Engine.Actor.SetDrawScale3D
struct AActor_SetDrawScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (Parm)
};

// Function Engine.Actor.SetDrawScale
struct AActor_SetDrawScale_Params
{
	float                                              NewScale;                                                 // (Parm)
};

// Function Engine.Actor.SetCollisionSize
struct AActor_SetCollisionSize_Params
{
	float                                              NewRadius;                                                // (Parm)
	float                                              NewHeight;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.SetCollision
struct AActor_SetCollision_Params
{
	bool                                               NewColActors;                                             // (OptionalParm, Parm)
	bool                                               NewBlockActors;                                           // (OptionalParm, Parm)
	bool                                               NewBlockPlayers;                                          // (OptionalParm, Parm)
};

// Function Engine.Actor.Sleep
struct AActor_Sleep_Params
{
	float                                              Seconds;                                                  // (Parm)
};

// Function Engine.Actor.Error
struct AActor_Error_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
};

// Function Engine.Actor.GetViewport
struct AActor_GetViewport_Params
{
	class UViewport*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Actor.ConsoleCommand
struct AActor_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.ParticleEmitter.Trigger
struct UParticleEmitter_Trigger_Params
{
};

// Function Engine.ParticleEmitter.SpawnParticle
struct UParticleEmitter_SpawnParticle_Params
{
	int                                                Amount;                                                   // (Parm)
};

// Function Engine.TrailEmitter.ResetTrail
struct UTrailEmitter_ResetTrail_Params
{
};

// Function Engine.Material.Trigger
struct UMaterial_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.Material.Reset
struct UMaterial_Reset_Params
{
};

// Function Engine.AnimNotify_Scripted.Notify
struct UAnimNotify_Scripted_Notify_Params
{
	class AActor*                                      Owner;                                                    // (Parm)
};

// Function Engine.ShadowBitmapMaterial.Destroy
struct UShadowBitmapMaterial_Destroy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Projector.UnTouch
struct AProjector_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Projector.Touch
struct AProjector_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Projector.PostBeginPlay
struct AProjector_PostBeginPlay_Params
{
};

// Function Engine.Projector.DetachActor
struct AProjector_DetachActor_Params
{
	class AActor*                                      A;                                                        // (Parm)
};

// Function Engine.Projector.AttachActor
struct AProjector_AttachActor_Params
{
	class AActor*                                      A;                                                        // (Parm)
};

// Function Engine.Projector.AbandonProjector
struct AProjector_AbandonProjector_Params
{
	float                                              LifeTime;                                                 // (OptionalParm, Parm)
};

// Function Engine.Projector.DetachProjector
struct AProjector_DetachProjector_Params
{
	bool                                               Force;                                                    // (OptionalParm, Parm)
};

// Function Engine.Projector.AttachProjector
struct AProjector_AttachProjector_Params
{
};

// Function Engine.MarkProjector.Touch
struct AMarkProjector_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.MarkProjector.Tick
struct AMarkProjector_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.MarkProjector.UpdateMarkProjector
struct AMarkProjector_UpdateMarkProjector_Params
{
};

// Function Engine.MarkProjector.Timer
struct AMarkProjector_Timer_Params
{
};

// Function Engine.MarkProjector.Destroyed
struct AMarkProjector_Destroyed_Params
{
};

// Function Engine.MarkProjector.PostBeginPlay
struct AMarkProjector_PostBeginPlay_Params
{
};

// Function Engine.MarkProjector.UpdateDesireLocation
struct AMarkProjector_UpdateDesireLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ShadowProjector.Tick
struct AShadowProjector_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.ShadowProjector.UpdateShadow
struct AShadowProjector_UpdateShadow_Params
{
};

// Function Engine.ShadowProjector.InitShadow
struct AShadowProjector_InitShadow_Params
{
};

// Function Engine.ShadowProjector.IsUnderWaterCamera
struct AShadowProjector_IsUnderWaterCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ShadowProjector.Destroyed
struct AShadowProjector_Destroyed_Params
{
};

// Function Engine.ShadowProjector.PostBeginPlay
struct AShadowProjector_PostBeginPlay_Params
{
};

// Function Engine.ShadowProjector.CheckVisible
struct AShadowProjector_CheckVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ShadowProjector.UpdateLightInfo
struct AShadowProjector_UpdateLightInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Security.ClientMessage
struct ASecurity_ClientMessage_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.Security.BadClient
struct ASecurity_BadClient_Params
{
	int                                                Code;                                                     // (Parm)
	struct FString                                     Data;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.Security.Perform
struct ASecurity_Perform_Params
{
	int                                                SecType;                                                  // (Parm)
	struct FString                                     Param1;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Param2;                                                   // (Parm, NeedCtorLink)
	float                                              TimeOut;                                                  // (Parm)
};

// Function Engine.Security.ServerCallback
struct ASecurity_ServerCallback_Params
{
	int                                                SecType;                                                  // (Parm)
	struct FString                                     Data;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.Security.ClientPerform
struct ASecurity_ClientPerform_Params
{
	int                                                SecType;                                                  // (Parm)
	struct FString                                     Param1;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Param2;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.Security.NativePerform
struct ASecurity_NativePerform_Params
{
	int                                                SecType;                                                  // (Parm)
	struct FString                                     Param1;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Param2;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.ScriptedTexture.DrawPortal
struct UScriptedTexture_DrawPortal_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
	class AActor*                                      CamActor;                                                 // (Parm)
	struct FVector                                     CamLocation;                                              // (Parm)
	struct FRotator                                    CamRotation;                                              // (Parm)
	int                                                FOV;                                                      // (OptionalParm, Parm)
	bool                                               ClearZ;                                                   // (OptionalParm, Parm)
};

// Function Engine.ScriptedTexture.DrawTile
struct UScriptedTexture_DrawTile_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
	class UMaterial*                                   Material;                                                 // (Parm)
	struct FColor                                      Color;                                                    // (Parm)
};

// Function Engine.ScriptedTexture.TextSize
struct UScriptedTexture_TextSize_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	class UFont*                                       Font;                                                     // (Parm)
	int                                                Width;                                                    // (Parm, OutParm)
	int                                                Height;                                                   // (Parm, OutParm)
};

// Function Engine.ScriptedTexture.DrawText
struct UScriptedTexture_DrawText_Params
{
	int                                                StartX;                                                   // (Parm)
	int                                                StartY;                                                   // (Parm)
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	class UFont*                                       Font;                                                     // (Parm)
	struct FColor                                      Color;                                                    // (Parm)
};

// Function Engine.ScriptedTexture.SetSize
struct UScriptedTexture_SetSize_Params
{
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
};

// Function Engine.SceneManager.SceneEnded
struct ASceneManager_SceneEnded_Params
{
};

// Function Engine.SceneManager.SceneStarted
struct ASceneManager_SceneStarted_Params
{
	class ALevelInfo*                                  Info;                                                     // (Parm)
};

// Function Engine.SceneManager.Trigger
struct ASceneManager_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.SceneManager.BeginPlay
struct ASceneManager_BeginPlay_Params
{
};

// Function Engine.SceneManager.GetTotalSceneTime
struct ASceneManager_GetTotalSceneTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.SetSimulationCollision
struct APawn_SetSimulationCollision_Params
{
	TArray<class USimulationCollision*>                SimulationCollisions;                                     // (Parm, NeedCtorLink)
};

// Function Engine.Pawn.GetSimulationCollision
struct APawn_GetSimulationCollision_Params
{
	TArray<class USimulationCollision*>                SimulationCollisions;                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.Pawn.NotifyDie
struct APawn_NotifyDie_Params
{
};

// Function Engine.Pawn.GetRefSkeletonNum
struct APawn_GetRefSkeletonNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetShieldItemSound
struct APawn_GetShieldItemSound_Params
{
	class USound*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDefenseItemSound
struct APawn_GetDefenseItemSound_Params
{
	class USound*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.SetRelativeCoords
struct APawn_SetRelativeCoords_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.NotifyAttack
struct APawn_NotifyAttack_Params
{
	class AActor*                                      Attacker;                                                 // (Parm)
};

// Function Engine.Pawn.AssociateAttackedNotify
struct APawn_AssociateAttackedNotify_Params
{
	class APawn*                                       Attacker;                                                 // (Parm)
	class AActor*                                      AttackActor;                                              // (Parm)
	int                                                type;                                                     // (Parm)
	int                                                Damage;                                                   // (Parm)
	bool                                               bMiss;                                                    // (Parm)
	bool                                               bShieldDefense;                                           // (Parm)
	bool                                               bCritical;                                                // (Parm)
	bool                                               bSpirit;                                                  // (Parm)
	bool                                               keepframerate;                                            // (Parm)
	bool                                               showeffect;                                               // (Parm)
};

// Function Engine.Pawn.AttackedNotify
struct APawn_AttackedNotify_Params
{
	class APawn*                                       Attacker;                                                 // (Parm)
	class AActor*                                      AttackActor;                                              // (Parm)
	int                                                type;                                                     // (Parm)
	bool                                               keepframerate;                                            // (Parm)
	bool                                               showeffect;                                               // (Parm)
};

// Function Engine.Pawn.HoldCarriedObject
struct APawn_HoldCarriedObject_Params
{
	class ACarriedObject*                              O;                                                        // (Parm)
	struct FName                                       AttachmentBone;                                           // (Parm)
};

// Function Engine.Pawn.PlayVictoryAnimation
struct APawn_PlayVictoryAnimation_Params
{
};

// Function Engine.Pawn.PlayLandingAnimation
struct APawn_PlayLandingAnimation_Params
{
	float                                              impactVel;                                                // (Parm)
};

// Function Engine.Pawn.PlayLanded
struct APawn_PlayLanded_Params
{
	float                                              impactVel;                                                // (Parm)
};

// Function Engine.Pawn.PlayWaiting
struct APawn_PlayWaiting_Params
{
};

// Function Engine.Pawn.PlayMoving
struct APawn_PlayMoving_Params
{
};

// Function Engine.Pawn.PlayFalling
struct APawn_PlayFalling_Params
{
};

// Function Engine.Pawn.PlayJump
struct APawn_PlayJump_Params
{
};

// Function Engine.Pawn.CannotJumpNow
struct APawn_CannotJumpNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.AnimEnd
struct APawn_AnimEnd_Params
{
	int                                                Channel;                                                  // (Parm)
};

// Function Engine.Pawn.ChangeAnimation
struct APawn_ChangeAnimation_Params
{
};

// Function Engine.Pawn.PlayTakeHit
struct APawn_PlayTakeHit_Params
{
	struct FVector                                     HitLoc;                                                   // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.Pawn.StopPlayFiring
struct APawn_StopPlayFiring_Params
{
};

// Function Engine.Pawn.PlayWeaponSwitch
struct APawn_PlayWeaponSwitch_Params
{
	class AWeapon*                                     newWeapon;                                                // (Parm)
};

// Function Engine.Pawn.PlayFiring
struct APawn_PlayFiring_Params
{
	float                                              Rate;                                                     // (Parm)
	struct FName                                       FiringMode;                                               // (Parm)
};

// Function Engine.Pawn.PlayDying
struct APawn_PlayDying_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLoc;                                                   // (Parm)
};

// Function Engine.Pawn.SetAnimAction
struct APawn_SetAnimAction_Params
{
	struct FName                                       NewAction;                                                // (Parm)
};

// Function Engine.Pawn.ChunkUp
struct APawn_ChunkUp_Params
{
	struct FRotator                                    HitRotation;                                              // (Parm)
	class UClass*                                      D;                                                        // (Parm)
};

// Function Engine.Pawn.PlayHit
struct APawn_PlayHit_Params
{
	float                                              Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function Engine.Pawn.PlayDyingSound
struct APawn_PlayDyingSound_Params
{
};

// Function Engine.Pawn.PlayMoverHitSound
struct APawn_PlayMoverHitSound_Params
{
};

// Function Engine.Pawn.DoJump
struct APawn_DoJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.Dodge
struct APawn_Dodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.UpdateRocketAcceleration
struct APawn_UpdateRocketAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm)
	float                                              YawChange;                                                // (Parm)
	float                                              PitchChange;                                              // (Parm)
};

// Function Engine.Pawn.CanDoubleJump
struct APawn_CanDoubleJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.DoDoubleJump
struct APawn_DoDoubleJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
};

// Function Engine.Pawn.CheckWaterJump
struct APawn_CheckWaterJump_Params
{
	struct FVector                                     WallNormal;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.TakeDrowningDamage
struct APawn_TakeDrowningDamage_Params
{
};

// Function Engine.Pawn.BreathTimer
struct APawn_BreathTimer_Params
{
};

// Function Engine.Pawn.IsInPain
struct APawn_IsInPain_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.TouchingWaterVolume
struct APawn_TouchingWaterVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.HeadVolumeChange
struct APawn_HeadVolumeChange_Params
{
	class APhysicsVolume*                              newHeadVolume;                                            // (Parm)
};

// Function Engine.Pawn.Landed
struct APawn_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Engine.Pawn.HitWall
struct APawn_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
};

// Function Engine.Pawn.Falling
struct APawn_Falling_Params
{
};

// Function Engine.Pawn.Gibbed
struct APawn_Gibbed_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.Died
struct APawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Engine.Pawn.GetEffTargetLocation
struct APawn_GetEffTargetLocation_Params
{
	struct FVector                                     LocVector;                                                // (Parm, OutParm)
};

// Function Engine.Pawn.GetKillerController
struct APawn_GetKillerController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetTeam
struct APawn_GetTeam_Params
{
	class ATeamInfo*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.TakeDamage
struct APawn_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.Pawn.SetMovementPhysics
struct APawn_SetMovementPhysics_Params
{
};

// Function Engine.Pawn.Gasp
struct APawn_Gasp_Params
{
};

// Function Engine.Pawn.SetMesh
struct APawn_SetMesh_Params
{
};

// Function Engine.Pawn.PostNetBeginPlay
struct APawn_PostNetBeginPlay_Params
{
};

// Function Engine.Pawn.PostBeginPlay
struct APawn_PostBeginPlay_Params
{
};

// Function Engine.Pawn.PreBeginPlay
struct APawn_PreBeginPlay_Params
{
};

// Function Engine.Pawn.Destroyed
struct APawn_Destroyed_Params
{
};

// Function Engine.Pawn.EyePosition
struct APawn_EyePosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.UpdateEyeHeight
struct APawn_UpdateEyeHeight_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.Pawn.BaseChange
struct APawn_BaseChange_Params
{
};

// Function Engine.Pawn.JumpOffPawn
struct APawn_JumpOffPawn_Params
{
};

// Function Engine.Pawn.gibbedBy
struct APawn_gibbedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Pawn.EncroachedBy
struct APawn_EncroachedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Pawn.EncroachingOn
struct APawn_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.ServerChangedWeapon
struct APawn_ServerChangedWeapon_Params
{
	class AWeapon*                                     OldWeapon;                                                // (Parm)
	class AWeapon*                                     W;                                                        // (Parm)
};

// Function Engine.Pawn.GetWeaponBoneFor
struct APawn_GetWeaponBoneFor_Params
{
	class AInventory*                                  i;                                                        // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.ChangedWeapon
struct APawn_ChangedWeapon_Params
{
};

// Function Engine.Pawn.DeleteInventory
struct APawn_DeleteInventory_Params
{
	class AInventory*                                  item;                                                     // (Parm)
};

// Function Engine.Pawn.AddInventory
struct APawn_AddInventory_Params
{
	class AInventory*                                  NewItem;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.FindInventoryType
struct APawn_FindInventoryType_Params
{
	class UClass*                                      DesiredClass;                                             // (Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.NextItem
struct APawn_NextItem_Params
{
};

// Function Engine.Pawn.TossWeapon
struct APawn_TossWeapon_Params
{
	struct FVector                                     TossVel;                                                  // (Parm)
};

// Function Engine.Pawn.CanThrowWeapon
struct APawn_CanThrowWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.InCurrentCombo
struct APawn_InCurrentCombo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.ClientDying
struct APawn_ClientDying_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Engine.Pawn.FaceRotation
struct APawn_FaceRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.Pawn.ClientSetRotation
struct APawn_ClientSetRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function Engine.Pawn.ClientSetLocation
struct APawn_ClientSetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm)
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function Engine.Pawn.ClientReStart
struct APawn_ClientReStart_Params
{
};

// Function Engine.Pawn.TakeFallingDamage
struct APawn_TakeFallingDamage_Params
{
};

// Function Engine.Pawn.KilledBy
struct APawn_KilledBy_Params
{
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Pawn.AddVelocity
struct APawn_AddVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm)
};

// Function Engine.Pawn.RestartPlayer
struct APawn_RestartPlayer_Params
{
};

// Function Engine.Pawn.StartCrouch
struct APawn_StartCrouch_Params
{
	float                                              HeightAdjust;                                             // (Parm)
};

// Function Engine.Pawn.EndCrouch
struct APawn_EndCrouch_Params
{
	float                                              HeightAdjust;                                             // (Parm)
};

// Function Engine.Pawn.ShouldCrouch
struct APawn_ShouldCrouch_Params
{
	bool                                               Crouch;                                                   // (Parm)
};

// Function Engine.Pawn.FellOutOfWorld
struct APawn_FellOutOfWorld_Params
{
	TEnumAsByte<EeKillZType>                           KillType;                                                 // (Parm)
};

// Function Engine.Pawn.ModifyVelocity
struct APawn_ModifyVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     OldVelocity;                                              // (Parm)
};

// Function Engine.Pawn.JumpOutOfWater
struct APawn_JumpOutOfWater_Params
{
	struct FVector                                     jumpDir;                                                  // (Parm)
};

// Function Engine.Pawn.FinishedInterpolation
struct APawn_FinishedInterpolation_Params
{
};

// Function Engine.Pawn.SetDefaultDisplayProperties
struct APawn_SetDefaultDisplayProperties_Params
{
};

// Function Engine.Pawn.SetDisplayProperties
struct APawn_SetDisplayProperties_Params
{
	TEnumAsByte<ERenderStyle>                          NewStyle;                                                 // (Parm)
	class UMaterial*                                   NewTexture;                                               // (Parm)
	bool                                               bLighting;                                                // (Parm)
};

// Function Engine.Pawn.GiveWeapon
struct APawn_GiveWeapon_Params
{
	struct FString                                     aClassName;                                               // (Parm, NeedCtorLink)
};

// Function Engine.Pawn.CanTrigger
struct APawn_CanTrigger_Params
{
	class ATrigger*                                    t;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.Trigger
struct APawn_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Pawn.ClientMessage
struct APawn_ClientMessage_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.Pawn.ReceiveLocalizedMessage
struct APawn_ReceiveLocalizedMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.Pawn.HandlePickup
struct APawn_HandlePickup_Params
{
	class APickup*                                     pick;                                                     // (Parm)
};

// Function Engine.Pawn.AdjustedStrength
struct APawn_AdjustedStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.ShootSpecial
struct APawn_ShootSpecial_Params
{
	class AActor*                                      A;                                                        // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.AdjustAim
struct APawn_AdjustAim_Params
{
	class AAmmunition*                                 FiredAmmunition;                                          // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	int                                                aimerror;                                                 // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.LineOfSightTo
struct APawn_LineOfSightTo_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.SetMoveTarget
struct APawn_SetMoveTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
};

// Function Engine.Pawn.GetMoveTarget
struct APawn_GetMoveTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.PressingAltFire
struct APawn_PressingAltFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.PressingFire
struct APawn_PressingFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.NearMoveTarget
struct APawn_NearMoveTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.InGodMode
struct APawn_InGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.SetViewRotation
struct APawn_SetViewRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function Engine.Pawn.GetViewRotation
struct APawn_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.IsFirstPerson
struct APawn_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.IsLocallyControlled
struct APawn_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.IsHumanControlled
struct APawn_IsHumanControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.WasPlayerPawn
struct APawn_WasPlayerPawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.IsPlayerPawn
struct APawn_IsPlayerPawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.CheckBob
struct APawn_CheckBob_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
};

// Function Engine.Pawn.WeaponBob
struct APawn_WeaponBob_Params
{
	float                                              BobDamping;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.ModifiedPlayerViewOffset
struct APawn_ModifiedPlayerViewOffset_Params
{
	class AInventory*                                  Inv;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.CalcDrawOffset
struct APawn_CalcDrawOffset_Params
{
	class AInventory*                                  Inv;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.DisplayDebug
struct APawn_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.Pawn.ClimbLadder
struct APawn_ClimbLadder_Params
{
	class ALadderVolume*                               L;                                                        // (Parm)
};

// Function Engine.Pawn.EndClimbLadder
struct APawn_EndClimbLadder_Params
{
	class ALadderVolume*                               OldLadder;                                                // (Parm)
};

// Function Engine.Pawn.CanSplash
struct APawn_CanSplash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.SetWalking
struct APawn_SetWalking_Params
{
	bool                                               bNewIsWalking;                                            // (Parm)
};

// Function Engine.Pawn.CanGrabLadder
struct APawn_CanGrabLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.DropToGround
struct APawn_DropToGround_Params
{
};

// Function Engine.Pawn.BecomeViewTarget
struct APawn_BecomeViewTarget_Params
{
};

// Function Engine.Pawn.PointOfView
struct APawn_PointOfView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.UnPossessed
struct APawn_UnPossessed_Params
{
};

// Function Engine.Pawn.PossessedBy
struct APawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function Engine.Pawn.PlayTeleportEffect
struct APawn_PlayTeleportEffect_Params
{
	bool                                               bOut;                                                     // (Parm)
	bool                                               bSound;                                                   // (Parm)
};

// Function Engine.Pawn.GetHumanReadableName
struct APawn_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Pawn.SpecialCalcView
struct APawn_SpecialCalcView_Params
{
	class AActor*                                      ViewActor;                                                // (Parm, OutParm)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.DrawHUD
struct APawn_DrawHUD_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Pawn.Fire
struct APawn_Fire_Params
{
	float                                              f;                                                        // (OptionalParm, Parm)
};

// Function Engine.Pawn.Reset
struct APawn_Reset_Params
{
};

// Function Engine.Pawn.PlayAnimUM
struct APawn_PlayAnimUM_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	int                                                UpdateMovementAnim;                                       // (OptionalParm, Parm)
	float                                              Rate;                                                     // (OptionalParm, Parm)
	float                                              TweenTime;                                                // (OptionalParm, Parm)
	int                                                Channel;                                                  // (OptionalParm, Parm)
};

// Function Engine.Pawn.ForceCrouch
struct APawn_ForceCrouch_Params
{
};

// Function Engine.Pawn.ReachedDestination
struct APawn_ReachedDestination_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.AnimBegin
struct APawn_AnimBegin_Params
{
	struct FName                                       SequenceName;                                             // (Parm)
};

// Function Engine.Pawn.SetHeadScale
struct APawn_SetHeadScale_Params
{
	float                                              NewScale;                                                 // (Parm)
};

// Function Engine.Pawn.GetRiderDeathAnimName
struct APawn_GetRiderDeathAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetRiderDeathWaitAnimName
struct APawn_GetRiderDeathWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetRiderRunAnimName
struct APawn_GetRiderRunAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetRiderAtkAnimName
struct APawn_GetRiderAtkAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetRiderWaitAnimName
struct APawn_GetRiderWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetThrowAnimName
struct APawn_GetThrowAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetPicItemAnimName
struct APawn_GetPicItemAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetMagicFriendAnimName
struct APawn_GetMagicFriendAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetMagicNoTargetAnimName
struct APawn_GetMagicNoTargetAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetMagicShotAnimName
struct APawn_GetMagicShotAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetMagicThrowAnimName
struct APawn_GetMagicThrowAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetCastEndAnimName
struct APawn_GetCastEndAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetCastLongAnimName
struct APawn_GetCastLongAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetCastMidAnimName
struct APawn_GetCastMidAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetCastShortAnimName
struct APawn_GetCastShortAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDamageAnimName
struct APawn_GetDamageAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDeathWaitAnimName
struct APawn_GetDeathWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDeathAnimName
struct APawn_GetDeathAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDodgeAnimName
struct APawn_GetDodgeAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDefenceAnimName
struct APawn_GetDefenceAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetShieldAtkAnimName
struct APawn_GetShieldAtkAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk28AnimName
struct APawn_GetSpAtk28AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk27AnimName
struct APawn_GetSpAtk27AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk26AnimName
struct APawn_GetSpAtk26AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk25AnimName
struct APawn_GetSpAtk25AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk24AnimName
struct APawn_GetSpAtk24AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk23AnimName
struct APawn_GetSpAtk23AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk22AnimName
struct APawn_GetSpAtk22AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk21AnimName
struct APawn_GetSpAtk21AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk20AnimName
struct APawn_GetSpAtk20AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk19AnimName
struct APawn_GetSpAtk19AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk18AnimName
struct APawn_GetSpAtk18AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk17AnimName
struct APawn_GetSpAtk17AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk16AnimName
struct APawn_GetSpAtk16AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk15AnimName
struct APawn_GetSpAtk15AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk14AnimName
struct APawn_GetSpAtk14AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk13AnimName
struct APawn_GetSpAtk13AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk12AnimName
struct APawn_GetSpAtk12AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk11AnimName
struct APawn_GetSpAtk11AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk10AnimName
struct APawn_GetSpAtk10AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk09AnimName
struct APawn_GetSpAtk09AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk08AnimName
struct APawn_GetSpAtk08AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk07AnimName
struct APawn_GetSpAtk07AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk06AnimName
struct APawn_GetSpAtk06AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk05AnimName
struct APawn_GetSpAtk05AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk04AnimName
struct APawn_GetSpAtk04AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk03AnimName
struct APawn_GetSpAtk03AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk02AnimName
struct APawn_GetSpAtk02AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSpAtk01AnimName
struct APawn_GetSpAtk01AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetAtkDownAnimName
struct APawn_GetAtkDownAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetAtkUpAnimName
struct APawn_GetAtkUpAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetAtk03AnimName
struct APawn_GetAtk03AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetAtk02AnimName
struct APawn_GetAtk02AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetAtk01AnimName
struct APawn_GetAtk01AnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetStunAnimName
struct APawn_GetStunAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetChairStandAnimName
struct APawn_GetChairStandAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetChairWaitAnimName
struct APawn_GetChairWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetChairSitAnimName
struct APawn_GetChairSitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetDeathStandAnimName
struct APawn_GetDeathStandAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetStandAnimName
struct APawn_GetStandAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSitWaitAnimName
struct APawn_GetSitWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetSitAnimName
struct APawn_GetSitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetAtkWaitAnimName
struct APawn_GetAtkWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetWaitAnimName
struct APawn_GetWaitAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetBJumpAnimName
struct APawn_GetBJumpAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetJumpAnimName
struct APawn_GetJumpAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetRunAnimName
struct APawn_GetRunAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetWalkAnimName
struct APawn_GetWalkAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pawn.GetTurnAnimName
struct APawn_GetTurnAnimName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Emitter.SetDisabled
struct AEmitter_SetDisabled_Params
{
	bool                                               dis;                                                      // (Parm)
};

// Function Engine.Emitter.Trigger
struct AEmitter_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Emitter.UpdatePrecacheMaterials
struct AEmitter_UpdatePrecacheMaterials_Params
{
};

// Function Engine.Emitter.SetSizeScale
struct AEmitter_SetSizeScale_Params
{
	float                                              NewScale;                                                 // (Parm)
};

// Function Engine.Emitter.Kill
struct AEmitter_Kill_Params
{
};

// Function Engine.AirEmitter.PostBeginPlay
struct AAirEmitter_PostBeginPlay_Params
{
};

// Function Engine.AirEmitter.ApplyFadeAlpha
struct AAirEmitter_ApplyFadeAlpha_Params
{
};

// Function Engine.AirEmitter.Timer
struct AAirEmitter_Timer_Params
{
};

// Function Engine.AirEmitter.SetAirVolume
struct AAirEmitter_SetAirVolume_Params
{
	class AAirVolume*                                  NewVolume;                                                // (Parm)
};

// Function Engine.AirEmitter.UnTouchVolume
struct AAirEmitter_UnTouchVolume_Params
{
};

// Function Engine.AirEmitter.TouchVolume
struct AAirEmitter_TouchVolume_Params
{
};

// Function Engine.AirEmitter.ForceKill
struct AAirEmitter_ForceKill_Params
{
};

// Function Engine.AirEmitter.ClearL2Game
struct AAirEmitter_ClearL2Game_Params
{
};

// Function Engine.AirEmitter.Destroyed
struct AAirEmitter_Destroyed_Params
{
};

// Function Engine.AirEmitter.IsInAirVolume
struct AAirEmitter_IsInAirVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.WaterHitEmitter.GetSpawnRate
struct AWaterHitEmitter_GetSpawnRate_Params
{
	float                                              PawnVelocity;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mover.GetEffTargetLocation
struct AMover_GetEffTargetLocation_Params
{
	struct FVector                                     LocVector;                                                // (Parm, OutParm)
};

// Function Engine.Mover.TakeDamage
struct AMover_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.Mover.Bump
struct AMover_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Mover.EncroachingOn
struct AMover_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mover.MakeGroupReturn
struct AMover_MakeGroupReturn_Params
{
};

// Function Engine.Mover.MakeGroupStop
struct AMover_MakeGroupStop_Params
{
};

// Function Engine.Mover.PostBeginPlay
struct AMover_PostBeginPlay_Params
{
};

// Function Engine.Mover.BeginPlay
struct AMover_BeginPlay_Params
{
};

// Function Engine.Mover.DoClose
struct AMover_DoClose_Params
{
};

// Function Engine.Mover.DoOpen
struct AMover_DoOpen_Params
{
};

// Function Engine.Mover.FinishedOpening
struct AMover_FinishedOpening_Params
{
};

// Function Engine.Mover.FinishedClosing
struct AMover_FinishedClosing_Params
{
};

// Function Engine.Mover.FinishNotify
struct AMover_FinishNotify_Params
{
};

// Function Engine.Mover.KeyFrameReached
struct AMover_KeyFrameReached_Params
{
};

// Function Engine.Mover.SetKeyframe
struct AMover_SetKeyframe_Params
{
	unsigned char                                      NewKeyNum;                                                // (Parm)
	struct FVector                                     NewLocation;                                              // (Parm)
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function Engine.Mover.InterpolateTo
struct AMover_InterpolateTo_Params
{
	unsigned char                                      NewKeyNum;                                                // (Parm)
	float                                              Seconds;                                                  // (Parm)
};

// Function Engine.Mover.Timer
struct AMover_Timer_Params
{
};

// Function Engine.Mover.StartInterpolation
struct AMover_StartInterpolation_Params
{
};

// Function Engine.Modifier.Trigger
struct UModifier_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.Modifier.Reset
struct UModifier_Reset_Params
{
};

// Function Engine.BumpShader.Trigger
struct UBumpShader_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.BumpShader.Reset
struct UBumpShader_Reset_Params
{
};

// Function Engine.MaterialSequence.Trigger
struct UMaterialSequence_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.MaterialSequence.Reset
struct UMaterialSequence_Reset_Params
{
};

// Function Engine.MaterialSwitch.Trigger
struct UMaterialSwitch_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.MaterialSwitch.Reset
struct UMaterialSwitch_Reset_Params
{
};

// Function Engine.TexOscillatorTriggered.Reset
struct UTexOscillatorTriggered_Reset_Params
{
};

// Function Engine.TexOscillatorTriggered.Trigger
struct UTexOscillatorTriggered_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.TexPannerTriggered.Reset
struct UTexPannerTriggered_Reset_Params
{
};

// Function Engine.TexPannerTriggered.Trigger
struct UTexPannerTriggered_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.Shader.Trigger
struct UShader_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class AActor*                                      EventInstigator;                                          // (Parm)
};

// Function Engine.Shader.Reset
struct UShader_Reset_Params
{
};

// Function Engine.InteractionMaster.Process_Message
struct UInteractionMaster_Process_Message_Params
{
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	float                                              MsgLife;                                                  // (Parm)
	TArray<class UInteraction*>                        InteractionArray;                                         // (Parm, NeedCtorLink)
};

// Function Engine.InteractionMaster.Process_Tick
struct UInteractionMaster_Process_Tick_Params
{
	TArray<class UInteraction*>                        InteractionArray;                                         // (Parm, NeedCtorLink)
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.InteractionMaster.Process_PostRender
struct UInteractionMaster_Process_PostRender_Params
{
	TArray<class UInteraction*>                        InteractionArray;                                         // (Parm, NeedCtorLink)
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.InteractionMaster.Process_PreRender
struct UInteractionMaster_Process_PreRender_Params
{
	TArray<class UInteraction*>                        InteractionArray;                                         // (Parm, NeedCtorLink)
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.InteractionMaster.Process_KeyEvent
struct UInteractionMaster_Process_KeyEvent_Params
{
	TArray<class UInteraction*>                        InteractionArray;                                         // (Parm, NeedCtorLink)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm, OutParm)
	TEnumAsByte<EInputAction>                          Action;                                                   // (Parm, OutParm)
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.InteractionMaster.Process_KeyType
struct UInteractionMaster_Process_KeyType_Params
{
	TArray<class UInteraction*>                        InteractionArray;                                         // (Parm, NeedCtorLink)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm, OutParm)
	struct FString                                     Unicode;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.InteractionMaster.SetFocusTo
struct UInteractionMaster_SetFocusTo_Params
{
	class UInteraction*                                Inter;                                                    // (Parm)
	class UPlayer*                                     ViewportOwner;                                            // (OptionalParm, Parm)
};

// Function Engine.InteractionMaster.RemoveInteraction
struct UInteractionMaster_RemoveInteraction_Params
{
	class UInteraction*                                RemoveMe;                                                 // (Parm)
};

// Function Engine.InteractionMaster.AddInteraction
struct UInteractionMaster_AddInteraction_Params
{
	struct FString                                     InteractionName;                                          // (Parm, NeedCtorLink)
	class UPlayer*                                     AttachTo;                                                 // (OptionalParm, Parm)
	class UInteraction*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.InteractionMaster.Travel
struct UInteractionMaster_Travel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.Interaction.Tick
struct UInteraction_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.Interaction.SetFocus
struct UInteraction_SetFocus_Params
{
};

// Function Engine.Interaction.PostRender
struct UInteraction_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Interaction.PreRender
struct UInteraction_PreRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Interaction.KeyEvent
struct UInteraction_KeyEvent_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm, OutParm)
	TEnumAsByte<EInputAction>                          Action;                                                   // (Parm, OutParm)
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Interaction.KeyType
struct UInteraction_KeyType_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm, OutParm)
	struct FString                                     Unicode;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Interaction.Message
struct UInteraction_Message_Params
{
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	float                                              MsgLife;                                                  // (Parm)
};

// Function Engine.Interaction.Initialized
struct UInteraction_Initialized_Params
{
};

// Function Engine.Interaction.ScreenToWorld
struct UInteraction_ScreenToWorld_Params
{
	struct FVector                                     Location;                                                 // (Parm)
	struct FVector                                     CameraLocation;                                           // (OptionalParm, Parm)
	struct FRotator                                    CameraRotation;                                           // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Interaction.WorldToScreen
struct UInteraction_WorldToScreen_Params
{
	struct FVector                                     Location;                                                 // (Parm)
	struct FVector                                     CameraLocation;                                           // (OptionalParm, Parm)
	struct FRotator                                    CameraRotation;                                           // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Interaction.ConsoleCommand
struct UInteraction_ConsoleCommand_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Interaction.Initialize
struct UInteraction_Initialize_Params
{
};

// Function Engine.BaseGUIController.SetRequiredGameResolution
struct UBaseGUIController_SetRequiredGameResolution_Params
{
	struct FString                                     GameRes;                                                  // (Parm, NeedCtorLink)
};

// Function Engine.BaseGUIController.NeedsMenuResolution
struct UBaseGUIController_NeedsMenuResolution_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.BaseGUIController.InitializeController
struct UBaseGUIController_InitializeController_Params
{
};

// Function Engine.BaseGUIController.SetControllerStatus
struct UBaseGUIController_SetControllerStatus_Params
{
	bool                                               On;                                                       // (Parm)
};

// Function Engine.BaseGUIController.CloseAll
struct UBaseGUIController_CloseAll_Params
{
	bool                                               bCancel;                                                  // (Parm)
};

// Function Engine.BaseGUIController.CloseMenu
struct UBaseGUIController_CloseMenu_Params
{
	bool                                               bCanceled;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.BaseGUIController.ReplaceMenu
struct UBaseGUIController_ReplaceMenu_Params
{
	struct FString                                     NewMenuName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Param1;                                                   // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Param2;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.BaseGUIController.OpenMenu
struct UBaseGUIController_OpenMenu_Params
{
	struct FString                                     NewMenuName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Param1;                                                   // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Param2;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.BaseGUIController.OnAdminReply
struct UBaseGUIController_OnAdminReply_Params
{
	struct FString                                     Reply;                                                    // (Parm, NeedCtorLink)
};

// Function Engine.Console.KeyEvent
struct UConsole_KeyEvent_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
	TEnumAsByte<EInputAction>                          Action;                                                   // (Parm)
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Console.Message
struct UConsole_Message_Params
{
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	float                                              MsgLife;                                                  // (Parm)
};

// Function Engine.Console.TeamTalk
struct UConsole_TeamTalk_Params
{
};

// Function Engine.Console.Talk
struct UConsole_Talk_Params
{
};

// Function Engine.Console.type
struct UConsole_type_Params
{
};

// Function Engine.FluidSurfaceInfo.Touch
struct AFluidSurfaceInfo_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.FluidSurfaceInfo.TakeDamage
struct AFluidSurfaceInfo_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.FluidSurfaceInfo.Pling
struct AFluidSurfaceInfo_Pling_Params
{
	struct FVector                                     Position;                                                 // (Parm)
	float                                              Strength;                                                 // (Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
};

// Function Engine.PlayerInput.CheckForDoubleClickMove
struct UPlayerInput_CheckForDoubleClickMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
	TEnumAsByte<EDoubleClickDir>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerInput.ChangeSnapView
struct UPlayerInput_ChangeSnapView_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerInput.UpdateSmoothing
struct UPlayerInput_UpdateSmoothing_Params
{
	int                                                Mode;                                                     // (Parm)
};

// Function Engine.PlayerInput.UpdateAccel
struct UPlayerInput_UpdateAccel_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.PlayerInput.UpdateSensitivity
struct UPlayerInput_UpdateSensitivity_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.PlayerInput.SmoothMouse
struct UPlayerInput_SmoothMouse_Params
{
	float                                              aMouse;                                                   // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	unsigned char                                      SampleCount;                                              // (Parm, OutParm)
	int                                                Index;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerInput.AccelerateMouse
struct UPlayerInput_AccelerateMouse_Params
{
	float                                              aMouse;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerInput.SetSmoothingStrength
struct UPlayerInput_SetSmoothingStrength_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.PlayerInput.SetSmoothingMode
struct UPlayerInput_SetSmoothingMode_Params
{
	unsigned char                                      B;                                                        // (Parm)
};

// Function Engine.PlayerInput.PlayerInput
struct UPlayerInput_PlayerInput_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PlayerInput.InvertLook
struct UPlayerInput_InvertLook_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.CheatManager.AllWeapons
struct UCheatManager_AllWeapons_Params
{
};

// Function Engine.CheatManager.Loaded
struct UCheatManager_Loaded_Params
{
};

// Function Engine.CheatManager.ViewClass
struct UCheatManager_ViewClass_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
	bool                                               bCheat;                                                   // (OptionalParm, Parm)
};

// Function Engine.CheatManager.ViewBot
struct UCheatManager_ViewBot_Params
{
};

// Function Engine.CheatManager.ViewFlag
struct UCheatManager_ViewFlag_Params
{
};

// Function Engine.CheatManager.ViewActor
struct UCheatManager_ViewActor_Params
{
	struct FName                                       ActorName;                                                // (Parm)
};

// Function Engine.CheatManager.ViewPlayer
struct UCheatManager_ViewPlayer_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.CheatManager.ViewSelf
struct UCheatManager_ViewSelf_Params
{
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
};

// Function Engine.CheatManager.RememberSpot
struct UCheatManager_RememberSpot_Params
{
};

// Function Engine.CheatManager.CheatView
struct UCheatManager_CheatView_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
};

// Function Engine.CheatManager.PlayersOnly
struct UCheatManager_PlayersOnly_Params
{
};

// Function Engine.CheatManager.Summon
struct UCheatManager_Summon_Params
{
	struct FString                                     ClassName;                                                // (Parm, NeedCtorLink)
};

// Function Engine.CheatManager.Avatar
struct UCheatManager_Avatar_Params
{
	struct FString                                     ClassName;                                                // (Parm, NeedCtorLink)
};

// Function Engine.CheatManager.KillPawns
struct UCheatManager_KillPawns_Params
{
};

// Function Engine.CheatManager.KillAllPawns
struct UCheatManager_KillAllPawns_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function Engine.CheatManager.KillAll
struct UCheatManager_KillAll_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function Engine.CheatManager.SetSpeed
struct UCheatManager_SetSpeed_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.SetGravity
struct UCheatManager_SetGravity_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.SetJumpZ
struct UCheatManager_SetJumpZ_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.SloMo
struct UCheatManager_SloMo_Params
{
	float                                              t;                                                        // (Parm)
};

// Function Engine.CheatManager.God
struct UCheatManager_God_Params
{
};

// Function Engine.CheatManager.Invisible
struct UCheatManager_Invisible_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.CheatManager.AllAmmo
struct UCheatManager_AllAmmo_Params
{
};

// Function Engine.CheatManager.Ghost
struct UCheatManager_Ghost_Params
{
};

// Function Engine.CheatManager.Walk
struct UCheatManager_Walk_Params
{
};

// Function Engine.CheatManager.Fly
struct UCheatManager_Fly_Params
{
};

// Function Engine.CheatManager.Amphibious
struct UCheatManager_Amphibious_Params
{
};

// Function Engine.CheatManager.CauseEvent
struct UCheatManager_CauseEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function Engine.CheatManager.FreeCamera
struct UCheatManager_FreeCamera_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.CheatManager.EndPath
struct UCheatManager_EndPath_Params
{
};

// Function Engine.CheatManager.SetCameraDist
struct UCheatManager_SetCameraDist_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.LockCamera
struct UCheatManager_LockCamera_Params
{
};

// Function Engine.CheatManager.ChangeSize
struct UCheatManager_ChangeSize_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.Teleport
struct UCheatManager_Teleport_Params
{
};

// Function Engine.CheatManager.LogScriptedSequences
struct UCheatManager_LogScriptedSequences_Params
{
};

// Function Engine.CheatManager.KillViewedActor
struct UCheatManager_KillViewedActor_Params
{
};

// Function Engine.CheatManager.SetFogB
struct UCheatManager_SetFogB_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.SetFogG
struct UCheatManager_SetFogG_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.SetFogR
struct UCheatManager_SetFogR_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.SetFlash
struct UCheatManager_SetFlash_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.CheatManager.WriteToLog
struct UCheatManager_WriteToLog_Params
{
};

// Function Engine.CheatManager.FreezeFrame
struct UCheatManager_FreezeFrame_Params
{
	float                                              Delay;                                                    // (Parm)
};

// Function Engine.CheatManager.ListDynamicActors
struct UCheatManager_ListDynamicActors_Params
{
};

// Function Engine.CheatManager.ReviewJumpSpots
struct UCheatManager_ReviewJumpSpots_Params
{
	struct FName                                       TestLabel;                                                // (Parm)
};

// Function Engine.Canvas.DrawBox
struct UCanvas_DrawBox_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
};

// Function Engine.Canvas.DrawBracket
struct UCanvas_DrawBracket_Params
{
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              bracket_size;                                             // (Parm)
};

// Function Engine.Canvas.DrawLine
struct UCanvas_DrawLine_Params
{
	int                                                Direction;                                                // (Parm)
	float                                              Size;                                                     // (Parm)
};

// Function Engine.Canvas.DrawHorizontal
struct UCanvas_DrawHorizontal_Params
{
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
};

// Function Engine.Canvas.DrawVertical
struct UCanvas_DrawVertical_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Height;                                                   // (Parm)
};

// Function Engine.Canvas.MakeColor
struct UCanvas_MakeColor_Params
{
	unsigned char                                      R;                                                        // (Parm)
	unsigned char                                      G;                                                        // (Parm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      A;                                                        // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Canvas.SetDrawColor
struct UCanvas_SetDrawColor_Params
{
	unsigned char                                      R;                                                        // (Parm)
	unsigned char                                      G;                                                        // (Parm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      A;                                                        // (OptionalParm, Parm)
};

// Function Engine.Canvas.DrawRect
struct UCanvas_DrawRect_Params
{
	class UTexture*                                    Tex;                                                      // (Parm)
	float                                              RectX;                                                    // (Parm)
	float                                              RectY;                                                    // (Parm)
};

// Function Engine.Canvas.DrawIcon
struct UCanvas_DrawIcon_Params
{
	class UTexture*                                    Tex;                                                      // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function Engine.Canvas.DrawPattern
struct UCanvas_DrawPattern_Params
{
	class UMaterial*                                   Tex;                                                      // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function Engine.Canvas.SetClip
struct UCanvas_SetClip_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function Engine.Canvas.SetOrigin
struct UCanvas_SetOrigin_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function Engine.Canvas.SetPos
struct UCanvas_SetPos_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function Engine.Canvas.Reset
struct UCanvas_Reset_Params
{
};

// Function Engine.Canvas.DrawTextJustified
struct UCanvas_DrawTextJustified_Params
{
	struct FString                                     String;                                                   // (Parm, CoerceParm, NeedCtorLink)
	unsigned char                                      Justification;                                            // (Parm)
	float                                              x1;                                                       // (Parm)
	float                                              y1;                                                       // (Parm)
	float                                              x2;                                                       // (Parm)
	float                                              y2;                                                       // (Parm)
};

// Function Engine.Canvas.DrawTileScaled
struct UCanvas_DrawTileScaled_Params
{
	class UMaterial*                                   mat;                                                      // (Parm)
	float                                              XScale;                                                   // (Parm)
	float                                              YScale;                                                   // (Parm)
};

// Function Engine.Canvas.DrawTileJustified
struct UCanvas_DrawTileJustified_Params
{
	class UMaterial*                                   mat;                                                      // (Parm)
	unsigned char                                      Justification;                                            // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
};

// Function Engine.Canvas.DrawTileStretched
struct UCanvas_DrawTileStretched_Params
{
	class UMaterial*                                   mat;                                                      // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
};

// Function Engine.Canvas.WrapStringToArray
struct UCanvas_WrapStringToArray_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	TArray<struct FString>                             OutArray;                                                 // (Parm, OutParm, NeedCtorLink)
	float                                              dx;                                                       // (Parm)
	struct FString                                     EOL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.Canvas.DrawPortal
struct UCanvas_DrawPortal_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
	class AActor*                                      CamActor;                                                 // (Parm)
	struct FVector                                     CamLocation;                                              // (Parm)
	struct FRotator                                    CamRotation;                                              // (Parm)
	int                                                FOV;                                                      // (OptionalParm, Parm)
	bool                                               ClearZ;                                                   // (OptionalParm, Parm)
};

// Function Engine.Canvas.TextSize
struct UCanvas_TextSize_Params
{
	struct FString                                     String;                                                   // (Parm, CoerceParm, NeedCtorLink)
	float                                              XL;                                                       // (Parm, OutParm)
	float                                              YL;                                                       // (Parm, OutParm)
};

// Function Engine.Canvas.DrawTextClipped
struct UCanvas_DrawTextClipped_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bCheckHotKey;                                             // (OptionalParm, Parm)
};

// Function Engine.Canvas.DrawTileClipped
struct UCanvas_DrawTileClipped_Params
{
	class UMaterial*                                   mat;                                                      // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
};

// Function Engine.Canvas.DrawActor
struct UCanvas_DrawActor_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               Wireframe;                                                // (Parm)
	bool                                               ClearZ;                                                   // (OptionalParm, Parm)
	float                                              DisplayFOV;                                               // (OptionalParm, Parm)
};

// Function Engine.Canvas.DrawTile
struct UCanvas_DrawTile_Params
{
	class UMaterial*                                   mat;                                                      // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
};

// Function Engine.Canvas.DrawText
struct UCanvas_DrawText_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	bool                                               CR;                                                       // (OptionalParm, Parm)
};

// Function Engine.Canvas.StrLen
struct UCanvas_StrLen_Params
{
	struct FString                                     String;                                                   // (Parm, CoerceParm, NeedCtorLink)
	float                                              XL;                                                       // (Parm, OutParm)
	float                                              YL;                                                       // (Parm, OutParm)
};

// Function Engine.Vehicle.Destroyed
struct AVehicle_Destroyed_Params
{
};

// Function Engine.Vehicle.AddVehiclePart
struct AVehicle_AddVehiclePart_Params
{
	class UClass*                                      a_Class;                                                  // (Parm)
	struct FVector                                     a_Offset;                                                 // (OptionalParm, Parm)
};

// Function Engine.Vehicle.GetType
struct AVehicle_GetType_Params
{
	TEnumAsByte<EVehicleType>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Vehicle.PostSetPawnResource
struct AVehicle_PostSetPawnResource_Params
{
};

// Function Engine.Vehicle.OnDriverOut
struct AVehicle_OnDriverOut_Params
{
};

// Function Engine.Vehicle.OnDriverIn
struct AVehicle_OnDriverIn_Params
{
	int                                                a_DriverID;                                               // (Parm)
};

// Function Engine.Vehicle.OnTurning
struct AVehicle_OnTurning_Params
{
};

// Function Engine.Vehicle.OnMoveDown
struct AVehicle_OnMoveDown_Params
{
};

// Function Engine.Vehicle.OnMoveUp
struct AVehicle_OnMoveUp_Params
{
};

// Function Engine.Vehicle.OnBoost
struct AVehicle_OnBoost_Params
{
};

// Function Engine.Vehicle.OnStop
struct AVehicle_OnStop_Params
{
};

// Function Engine.Vehicle.OnStart
struct AVehicle_OnStart_Params
{
};

// Function Engine.Volume.DisplayDebug
struct AVolume_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.Volume.PostBeginPlay
struct AVolume_PostBeginPlay_Params
{
};

// Function Engine.Volume.Encompasses
struct AVolume_Encompasses_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AirVolume.PostBeginPlay
struct AAirVolume_PostBeginPlay_Params
{
};

// Function Engine.MusicVolume.PostBeginPlay
struct AMusicVolume_PostBeginPlay_Params
{
};

// Function Engine.NSun.PostBeginPlay
struct ANSun_PostBeginPlay_Params
{
};

// Function Engine.Inspector.Inspection
struct AInspector_Inspection_Params
{
	int                                                Param1;                                                   // (Parm)
	int                                                Param2;                                                   // (Parm)
	int                                                param3;                                                   // (Parm)
	int                                                param4;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inspector.InspectorFunc006
struct AInspector_InspectorFunc006_Params
{
	class UMesh*                                       InMesh;                                                   // (Parm)
	int                                                AnimSeqIndex;                                             // (Parm)
	int                                                frame;                                                    // (Parm)
};

// Function Engine.Inspector.InspectorFunc005
struct AInspector_InspectorFunc005_Params
{
	class UMesh*                                       InMesh;                                                   // (Parm)
	int                                                AnimSeqIndex;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inspector.InspectorFunc004
struct AInspector_InspectorFunc004_Params
{
	class UMesh*                                       InMesh;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inspector.InspectorFunc003
struct AInspector_InspectorFunc003_Params
{
	class UMesh*                                       InMesh;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inspector.InspectorFunc002
struct AInspector_InspectorFunc002_Params
{
	class UMesh*                                       InMesh;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inspector.InspectorFunc001
struct AInspector_InspectorFunc001_Params
{
	class UMesh*                                       InMesh;                                                   // (Parm)
	int                                                BoneIndex;                                                // (Parm)
	struct FCoords                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.L2Pickup.Timer
struct AL2Pickup_Timer_Params
{
};

// Function Engine.Controller.DontReuseTaunt
struct AController_DontReuseTaunt_Params
{
	int                                                t;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.AutoTaunt
struct AController_AutoTaunt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.StartMonitoring
struct AController_StartMonitoring_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              MaxDist;                                                  // (Parm)
};

// Function Engine.Controller.MonitoredPawnAlert
struct AController_MonitoredPawnAlert_Params
{
};

// Function Engine.Controller.ServerGivePawn
struct AController_ServerGivePawn_Params
{
};

// Function Engine.Controller.ServerReStartPlayer
struct AController_ServerReStartPlayer_Params
{
};

// Function Engine.Controller.ChangedWeapon
struct AController_ChangedWeapon_Params
{
};

// Function Engine.Controller.CheckFutureSight
struct AController_CheckFutureSight_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.SetPawnClass
struct AController_SetPawnClass_Params
{
	struct FString                                     InClass;                                                  // (Parm, NeedCtorLink)
	struct FString                                     InCharacter;                                              // (Parm, NeedCtorLink)
};

// Function Engine.Controller.ClientSetWeapon
struct AController_ClientSetWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm)
};

// Function Engine.Controller.ClientSwitchToBestWeapon
struct AController_ClientSwitchToBestWeapon_Params
{
};

// Function Engine.Controller.SwitchToBestWeapon
struct AController_SwitchToBestWeapon_Params
{
};

// Function Engine.Controller.ReceiveWarning
struct AController_ReceiveWarning_Params
{
	class APawn*                                       shooter;                                                  // (Parm)
	float                                              projSpeed;                                                // (Parm)
	struct FVector                                     FireDir;                                                  // (Parm)
};

// Function Engine.Controller.AdjustAim
struct AController_AdjustAim_Params
{
	class AAmmunition*                                 FiredAmmunition;                                          // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	int                                                aimerror;                                                 // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.WeaponPreference
struct AController_WeaponPreference_Params
{
	class AWeapon*                                     W;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.RateWeapon
struct AController_RateWeapon_Params
{
	class AWeapon*                                     W;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.StopFiring
struct AController_StopFiring_Params
{
};

// Function Engine.Controller.FireWeaponAt
struct AController_FireWeaponAt_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.AdjustDesireFor
struct AController_AdjustDesireFor_Params
{
	class APickup*                                     P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.damageAttitudeTo
struct AController_damageAttitudeTo_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              Damage;                                                   // (Parm)
};

// Function Engine.Controller.NotifyKilled
struct AController_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Controller.ShakeView
struct AController_ShakeView_Params
{
	float                                              ShakeTime;                                                // (Parm)
	float                                              RollMag;                                                  // (Parm)
	struct FVector                                     OffsetMag;                                                // (Parm)
	float                                              RollRate;                                                 // (Parm)
	struct FVector                                     OffsetRate;                                               // (Parm)
	float                                              OffsetTime;                                               // (Parm)
};

// Function Engine.Controller.EnemyNotVisible
struct AController_EnemyNotVisible_Params
{
};

// Function Engine.Controller.SeeMonster
struct AController_SeeMonster_Params
{
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function Engine.Controller.SeePlayer
struct AController_SeePlayer_Params
{
	class APawn*                                       Seen;                                                     // (Parm)
};

// Function Engine.Controller.HearNoise
struct AController_HearNoise_Params
{
	float                                              Loudness;                                                 // (Parm)
	class AActor*                                      NoiseMaker;                                               // (Parm)
};

// Function Engine.Controller.SetupSpecialPathAbilities
struct AController_SetupSpecialPathAbilities_Params
{
};

// Function Engine.Controller.Desireability
struct AController_Desireability_Params
{
	class APickup*                                     P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FearThisSpot
struct AController_FearThisSpot_Params
{
	class AAvoidMarker*                                aSpot;                                                    // (Parm)
};

// Function Engine.Controller.UnderLift
struct AController_UnderLift_Params
{
	class AMover*                                      M;                                                        // (Parm)
};

// Function Engine.Controller.MoverFinished
struct AController_MoverFinished_Params
{
};

// Function Engine.Controller.WaitForMover
struct AController_WaitForMover_Params
{
	class AMover*                                      M;                                                        // (Parm)
};

// Function Engine.Controller.PrepareForMove
struct AController_PrepareForMove_Params
{
	class ANavigationPoint*                            Goal;                                                     // (Parm)
	class UReachSpec*                                  Path;                                                     // (Parm)
};

// Function Engine.Controller.AdjustToss
struct AController_AdjustToss_Params
{
	float                                              TSpeed;                                                   // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	bool                                               bNormalize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.WouldReactToSeeing
struct AController_WouldReactToSeeing_Params
{
	class APawn*                                       Seen;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.WouldReactToNoise
struct AController_WouldReactToNoise_Params
{
	float                                              Loudness;                                                 // (Parm)
	class AActor*                                      NoiseMaker;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.BotVoiceMessage
struct AController_BotVoiceMessage_Params
{
	struct FName                                       messagetype;                                              // (Parm)
	unsigned char                                      MessageID;                                                // (Parm)
	class AController*                                 Sender;                                                   // (Parm)
};

// Function Engine.Controller.ClientVoiceMessage
struct AController_ClientVoiceMessage_Params
{
	class APlayerReplicationInfo*                      Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       messagetype;                                              // (Parm)
	unsigned char                                      MessageID;                                                // (Parm)
};

// Function Engine.Controller.SendVoiceMessage
struct AController_SendVoiceMessage_Params
{
	class APlayerReplicationInfo*                      Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       messagetype;                                              // (Parm)
	unsigned char                                      MessageID;                                                // (Parm)
	struct FName                                       BroadcastType;                                            // (Parm)
};

// Function Engine.Controller.AllowVoiceMessage
struct AController_AllowVoiceMessage_Params
{
	struct FName                                       messagetype;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.SendMessage
struct AController_SendMessage_Params
{
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       messagetype;                                              // (Parm)
	unsigned char                                      MessageID;                                                // (Parm)
	float                                              Wait;                                                     // (Parm)
	struct FName                                       BroadcastType;                                            // (Parm)
};

// Function Engine.Controller.GetMessageIndex
struct AController_GetMessageIndex_Params
{
	struct FName                                       PhraseName;                                               // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.GetFacingDirection
struct AController_GetFacingDirection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.RenderOverlays
struct AController_RenderOverlays_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Controller.ClientGameEnded
struct AController_ClientGameEnded_Params
{
};

// Function Engine.Controller.GameHasEnded
struct AController_GameHasEnded_Params
{
};

// Function Engine.Controller.WantsSmoothedView
struct AController_WantsSmoothedView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.AdjustView
struct AController_AdjustView_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.Controller.AllowDetourTo
struct AController_AllowDetourTo_Params
{
	class ANavigationPoint*                            N;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.Destroyed
struct AController_Destroyed_Params
{
};

// Function Engine.Controller.HandlePickup
struct AController_HandlePickup_Params
{
	class APickup*                                     pick;                                                     // (Parm)
};

// Function Engine.Controller.SameTeamAs
struct AController_SameTeamAs_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.InitPlayerReplicationInfo
struct AController_InitPlayerReplicationInfo_Params
{
};

// Function Engine.Controller.PostBeginPlay
struct AController_PostBeginPlay_Params
{
};

// Function Engine.Controller.PreBeginPlay
struct AController_PreBeginPlay_Params
{
};

// Function Engine.Controller.PawnIsInPain
struct AController_PawnIsInPain_Params
{
	class APhysicsVolume*                              PainVolume;                                               // (Parm)
};

// Function Engine.Controller.SetFall
struct AController_SetFall_Params
{
};

// Function Engine.Controller.NotifyTakeHit
struct AController_NotifyTakeHit_Params
{
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function Engine.Controller.NotifyAddInventory
struct AController_NotifyAddInventory_Params
{
	class AInventory*                                  NewItem;                                                  // (Parm)
};

// Function Engine.Controller.NotifyMissedJump
struct AController_NotifyMissedJump_Params
{
};

// Function Engine.Controller.NotifyJumpApex
struct AController_NotifyJumpApex_Params
{
};

// Function Engine.Controller.NotifyHitMover
struct AController_NotifyHitMover_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AMover*                                      Wall;                                                     // (Parm)
};

// Function Engine.Controller.NotifyBump
struct AController_NotifyBump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.NotifyHitWall
struct AController_NotifyHitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.NotifyLanded
struct AController_NotifyLanded_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.NotifyHeadVolumeChange
struct AController_NotifyHeadVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.NotifyPhysicsVolumeChange
struct AController_NotifyPhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.LongFall
struct AController_LongFall_Params
{
};

// Function Engine.Controller.Restart
struct AController_Restart_Params
{
};

// Function Engine.Controller.PawnDied
struct AController_PawnDied_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.Controller.GetLastWeapon
struct AController_GetLastWeapon_Params
{
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.WasKilledBy
struct AController_WasKilledBy_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function Engine.Controller.Possess
struct AController_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
};

// Function Engine.Controller.SoakStop
struct AController_SoakStop_Params
{
	struct FString                                     problem;                                                  // (Parm, NeedCtorLink)
};

// Function Engine.Controller.AIHearSound
struct AController_AIHearSound_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
	int                                                Id;                                                       // (Parm)
	class USound*                                      S;                                                        // (Parm)
	struct FVector                                     SoundLocation;                                            // (Parm)
	struct FVector                                     Parameters;                                               // (Parm)
	bool                                               Attenuate;                                                // (Parm)
};

// Function Engine.Controller.ClientDying
struct AController_ClientDying_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Engine.Controller.ClientSetRotation
struct AController_ClientSetRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function Engine.Controller.ClientSetLocation
struct AController_ClientSetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm)
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function Engine.Controller.AvoidCertainDeath
struct AController_AvoidCertainDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.Reset
struct AController_Reset_Params
{
};

// Function Engine.Controller.GetViewRotation
struct AController_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.GetHumanReadableName
struct AController_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Controller.DisplayDebug
struct AController_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.Controller.PendingStasis
struct AController_PendingStasis_Params
{
};

// Function Engine.Controller.MayFall
struct AController_MayFall_Params
{
};

// Function Engine.Controller.EndClimbLadder
struct AController_EndClimbLadder_Params
{
};

// Function Engine.Controller.StopWaiting
struct AController_StopWaiting_Params
{
};

// Function Engine.Controller.InLatentExecution
struct AController_InLatentExecution_Params
{
	int                                                LatentActionNumber;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.PickAnyTarget
struct AController_PickAnyTarget_Params
{
	float                                              bestAim;                                                  // (Parm, OutParm)
	float                                              bestDist;                                                 // (Parm, OutParm)
	struct FVector                                     FireDir;                                                  // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.PickTarget
struct AController_PickTarget_Params
{
	float                                              bestAim;                                                  // (Parm, OutParm)
	float                                              bestDist;                                                 // (Parm, OutParm)
	struct FVector                                     FireDir;                                                  // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	float                                              MaxRange;                                                 // (Parm)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.RemoveController
struct AController_RemoveController_Params
{
};

// Function Engine.Controller.AddController
struct AController_AddController_Params
{
};

// Function Engine.Controller.FindBestInventoryPath
struct AController_FindBestInventoryPath_Params
{
	float                                              MinWeight;                                                // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.WaitForLanding
struct AController_WaitForLanding_Params
{
};

// Function Engine.Controller.PickWallAdjust
struct AController_PickWallAdjust_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.actorReachable
struct AController_actorReachable_Params
{
	class AActor*                                      anActor;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.pointReachable
struct AController_pointReachable_Params
{
	struct FVector                                     aPoint;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.EAdjustJump
struct AController_EAdjustJump_Params
{
	float                                              BaseZ;                                                    // (Parm)
	float                                              XYSpeed;                                                  // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FindRandomDest
struct AController_FindRandomDest_Params
{
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FindPathTowardNearest
struct AController_FindPathTowardNearest_Params
{
	class UClass*                                      GoalClass;                                                // (Parm)
	bool                                               bWeightDetours;                                           // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FindPathToIntercept
struct AController_FindPathToIntercept_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class AActor*                                      RouteGoal;                                                // (Parm)
	bool                                               bWeightDetours;                                           // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FindPathToward
struct AController_FindPathToward_Params
{
	class AActor*                                      anActor;                                                  // (Parm)
	bool                                               bWeightDetours;                                           // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FindPathTo
struct AController_FindPathTo_Params
{
	struct FVector                                     aPoint;                                                   // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.CanSee
struct AController_CanSee_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.LineOfSightTo
struct AController_LineOfSightTo_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Controller.FinishRotation
struct AController_FinishRotation_Params
{
};

// Function Engine.Controller.MoveToward
struct AController_MoveToward_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
	class AActor*                                      ViewFocus;                                                // (OptionalParm, Parm)
	float                                              DestinationOffset;                                        // (OptionalParm, Parm)
	bool                                               bUseStrafing;                                             // (OptionalParm, Parm)
	bool                                               bShouldWalk;                                              // (OptionalParm, Parm)
};

// Function Engine.Controller.MoveTo
struct AController_MoveTo_Params
{
	struct FVector                                     NewDestination;                                           // (Parm)
	class AActor*                                      ViewFocus;                                                // (OptionalParm, Parm)
	bool                                               bShouldWalk;                                              // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ClearL2Game
struct APlayerController_ClearL2Game_Params
{
};

// Function Engine.PlayerController.LostChild
struct APlayerController_LostChild_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PlayerController.ChangeVoiceChatter
struct APlayerController_ChangeVoiceChatter_Params
{
	int                                                IpAddr;                                                   // (Parm)
	int                                                Handle;                                                   // (Parm)
	bool                                               Add;                                                      // (Parm)
};

// Function Engine.PlayerController.LeaveVoiceChat
struct APlayerController_LeaveVoiceChat_Params
{
};

// Function Engine.PlayerController.ClientLeaveVoiceChat
struct APlayerController_ClientLeaveVoiceChat_Params
{
};

// Function Engine.PlayerController.ClientChangeVoiceChatter
struct APlayerController_ClientChangeVoiceChatter_Params
{
	int                                                IpAddr;                                                   // (Parm)
	int                                                Handle;                                                   // (Parm)
	bool                                               Add;                                                      // (Parm)
};

// Function Engine.PlayerController.ServerGetVoiceChatters
struct APlayerController_ServerGetVoiceChatters_Params
{
	class APlayerController*                           Player;                                                   // (Parm)
};

// Function Engine.PlayerController.ServerChangeVoiceChatter
struct APlayerController_ServerChangeVoiceChatter_Params
{
	class APlayerController*                           Player;                                                   // (Parm)
	int                                                IpAddr;                                                   // (Parm)
	int                                                Handle;                                                   // (Parm)
	bool                                               Add;                                                      // (Parm)
};

// Function Engine.PlayerController.CanRestartPlayer
struct APlayerController_CanRestartPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.ClientCloseMenu
struct APlayerController_ClientCloseMenu_Params
{
	bool                                               bCloseAll;                                                // (OptionalParm, Parm)
	bool                                               bCancel;                                                  // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ClientOpenMenu
struct APlayerController_ClientOpenMenu_Params
{
	struct FString                                     Menu;                                                     // (Parm, NeedCtorLink)
	bool                                               bDisconnect;                                              // (OptionalParm, Parm)
	struct FString                                     Msg1;                                                     // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Msg2;                                                     // (OptionalParm, Parm, NeedCtorLink)
};

// Function Engine.PlayerController.ChangeAlwaysMouseLook
struct APlayerController_ChangeAlwaysMouseLook_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerController.ChangeStairLook
struct APlayerController_ChangeStairLook_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerController.LoadPlayers
struct APlayerController_LoadPlayers_Params
{
};

// Function Engine.PlayerController.ServerViewSelf
struct APlayerController_ServerViewSelf_Params
{
};

// Function Engine.PlayerController.ServerViewNextPlayer
struct APlayerController_ServerViewNextPlayer_Params
{
};

// Function Engine.PlayerController.IsSpectating
struct APlayerController_IsSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.ClearDoubleClick
struct APlayerController_ClearDoubleClick_Params
{
};

// Function Engine.PlayerController.UpdateRotation
struct APlayerController_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	float                                              maxPitch;                                                 // (Parm)
};

// Function Engine.PlayerController.TurnAround
struct APlayerController_TurnAround_Params
{
};

// Function Engine.PlayerController.TurnTowardNearestEnemy
struct APlayerController_TurnTowardNearestEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.ViewShake
struct APlayerController_ViewShake_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PlayerController.CheckShake
struct APlayerController_CheckShake_Params
{
	float                                              MaxOffset;                                                // (Parm, OutParm)
	float                                              offset;                                                   // (Parm, OutParm)
	float                                              Rate;                                                     // (Parm, OutParm)
	float                                              Time;                                                     // (Parm, OutParm)
};

// Function Engine.PlayerController.PlayerCalcView
struct APlayerController_PlayerCalcView_Params
{
	class AActor*                                      ViewActor;                                                // (Parm, OutParm)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
};

// Function Engine.PlayerController.GetViewRotation
struct APlayerController_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.CreateCameraEffect
struct APlayerController_CreateCameraEffect_Params
{
	class UClass*                                      EffectClass;                                              // (Parm)
};

// Function Engine.PlayerController.RemoveCameraEffect
struct APlayerController_RemoveCameraEffect_Params
{
	class UCameraEffect*                               ExEffect;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.AddCameraEffect
struct APlayerController_AddCameraEffect_Params
{
	class UCameraEffect*                               NewEffect;                                                // (Parm)
	bool                                               RemoveExisting;                                           // (OptionalParm, Parm)
};

// Function Engine.PlayerController.CalcFirstPersonView
struct APlayerController_CalcFirstPersonView_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
};

// Function Engine.PlayerController.CalcBehindView
struct APlayerController_CalcBehindView_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
	float                                              dist;                                                     // (Parm)
};

// Function Engine.PlayerController.AdjustView
struct APlayerController_AdjustView_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PlayerController.NotifyLanded
struct APlayerController_NotifyLanded_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.AdjustAim
struct APlayerController_AdjustAim_Params
{
	class AAmmunition*                                 FiredAmmunition;                                          // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	int                                                aimerror;                                                 // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.PlayerMove
struct APlayerController_PlayerMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PlayerController.PlayerTick
struct APlayerController_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PlayerController.TravelPostAccept
struct APlayerController_TravelPostAccept_Params
{
};

// Function Engine.PlayerController.ChangedWeapon
struct APlayerController_ChangedWeapon_Params
{
};

// Function Engine.PlayerController.BehindView
struct APlayerController_BehindView_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerController.ClientReStart
struct APlayerController_ClientReStart_Params
{
};

// Function Engine.PlayerController.EnterStartState
struct APlayerController_EnterStartState_Params
{
};

// Function Engine.PlayerController.Restart
struct APlayerController_Restart_Params
{
};

// Function Engine.PlayerController.SetProgressTime
struct APlayerController_SetProgressTime_Params
{
	float                                              t;                                                        // (Parm)
};

// Function Engine.PlayerController.SetProgressMessage
struct APlayerController_SetProgressMessage_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FColor                                      C;                                                        // (Parm)
};

// Function Engine.PlayerController.ClearProgressMessages
struct APlayerController_ClearProgressMessages_Params
{
};

// Function Engine.PlayerController.SwitchLevel
struct APlayerController_SwitchLevel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.ChangeTeam
struct APlayerController_ChangeTeam_Params
{
	int                                                N;                                                        // (Parm)
};

// Function Engine.PlayerController.SwitchTeam
struct APlayerController_SwitchTeam_Params
{
};

// Function Engine.PlayerController.ChangeName
struct APlayerController_ChangeName_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
};

// Function Engine.PlayerController.SetName
struct APlayerController_SetName_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
};

// Function Engine.PlayerController.Name
struct APlayerController_Name_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
};

// Function Engine.PlayerController.Suicide
struct APlayerController_Suicide_Params
{
};

// Function Engine.PlayerController.ServerUse
struct APlayerController_ServerUse_Params
{
};

// Function Engine.PlayerController.Use
struct APlayerController_Use_Params
{
};

// Function Engine.PlayerController.AltFire
struct APlayerController_AltFire_Params
{
	float                                              f;                                                        // (OptionalParm, Parm)
};

// Function Engine.PlayerController.Fire
struct APlayerController_Fire_Params
{
	float                                              f;                                                        // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ActivateItem
struct APlayerController_ActivateItem_Params
{
};

// Function Engine.PlayerController.PrevItem
struct APlayerController_PrevItem_Params
{
};

// Function Engine.PlayerController.GetWeapon
struct APlayerController_GetWeapon_Params
{
	class UClass*                                      NewWeaponClass;                                           // (Parm)
};

// Function Engine.PlayerController.SwitchWeapon
struct APlayerController_SwitchWeapon_Params
{
	unsigned char                                      f;                                                        // (Parm)
};

// Function Engine.PlayerController.NextWeapon
struct APlayerController_NextWeapon_Params
{
};

// Function Engine.PlayerController.PrevWeapon
struct APlayerController_PrevWeapon_Params
{
};

// Function Engine.PlayerController.ServerThrowWeapon
struct APlayerController_ServerThrowWeapon_Params
{
};

// Function Engine.PlayerController.ThrowWeapon
struct APlayerController_ThrowWeapon_Params
{
};

// Function Engine.PlayerController.ActivateInventoryItem
struct APlayerController_ActivateInventoryItem_Params
{
	class UClass*                                      InvItem;                                                  // (Parm)
};

// Function Engine.PlayerController.ShowMenu
struct APlayerController_ShowMenu_Params
{
};

// Function Engine.PlayerController.Pause
struct APlayerController_Pause_Params
{
};

// Function Engine.PlayerController.SetPause
struct APlayerController_SetPause_Params
{
	bool                                               bPause;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.QuickLoad
struct APlayerController_QuickLoad_Params
{
};

// Function Engine.PlayerController.QuickSave
struct APlayerController_QuickSave_Params
{
};

// Function Engine.PlayerController.LocalTravel
struct APlayerController_LocalTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.RestartLevel
struct APlayerController_RestartLevel_Params
{
};

// Function Engine.PlayerController.Speech
struct APlayerController_Speech_Params
{
	struct FName                                       type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	struct FString                                     Callsign;                                                 // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.Jump
struct APlayerController_Jump_Params
{
	float                                              f;                                                        // (OptionalParm, Parm)
};

// Function Engine.PlayerController.Typing
struct APlayerController_Typing_Params
{
	bool                                               bTyping;                                                  // (Parm)
};

// Function Engine.PlayerController.damageAttitudeTo
struct APlayerController_damageAttitudeTo_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              Damage;                                                   // (Parm)
};

// Function Engine.PlayerController.ShakeView
struct APlayerController_ShakeView_Params
{
	float                                              ShakeTime;                                                // (Parm)
	float                                              RollMag;                                                  // (Parm)
	struct FVector                                     OffsetMag;                                                // (Parm)
	float                                              RollRate;                                                 // (Parm)
	struct FVector                                     OffsetRate;                                               // (Parm)
	float                                              OffsetTime;                                               // (Parm)
};

// Function Engine.PlayerController.ClientShake
struct APlayerController_ClientShake_Params
{
	struct FVector                                     ShakeRoll;                                                // (Parm)
	struct FVector                                     OffsetMag;                                                // (Parm)
	struct FVector                                     ShakeRate;                                                // (Parm)
	float                                              OffsetTime;                                               // (Parm)
};

// Function Engine.PlayerController.ClientAdjustGlow
struct APlayerController_ClientAdjustGlow_Params
{
	float                                              Scale;                                                    // (Parm)
	struct FVector                                     fog;                                                      // (Parm)
};

// Function Engine.PlayerController.ClientFlash
struct APlayerController_ClientFlash_Params
{
	float                                              Scale;                                                    // (Parm)
	struct FVector                                     fog;                                                      // (Parm)
};

// Function Engine.PlayerController.SetFOVAngle
struct APlayerController_SetFOVAngle_Params
{
	float                                              NewFOV;                                                   // (Parm)
};

// Function Engine.PlayerController.ServerRestartGame
struct APlayerController_ServerRestartGame_Params
{
};

// Function Engine.PlayerController.HandleWalking
struct APlayerController_HandleWalking_Params
{
};

// Function Engine.PlayerController.ReplicateMove
struct APlayerController_ReplicateMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     NewAccel;                                                 // (Parm)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	struct FRotator                                    DeltaRot;                                                 // (Parm)
};

// Function Engine.PlayerController.CompressAccel
struct APlayerController_CompressAccel_Params
{
	int                                                C;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.GetFreeMove
struct APlayerController_GetFreeMove_Params
{
	class ASavedMove*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.ClientUpdatePosition
struct APlayerController_ClientUpdatePosition_Params
{
};

// Function Engine.PlayerController.ServerUpdatePing
struct APlayerController_ServerUpdatePing_Params
{
	int                                                NewPing;                                                  // (Parm)
};

// Function Engine.PlayerController.LongClientAdjustPosition
struct APlayerController_LongClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FName                                       NewState;                                                 // (Parm)
	TEnumAsByte<EPhysics>                              newPhysics;                                               // (Parm)
	float                                              NewLocX;                                                  // (Parm)
	float                                              NewLocY;                                                  // (Parm)
	float                                              NewLocZ;                                                  // (Parm)
	float                                              NewVelX;                                                  // (Parm)
	float                                              NewVelY;                                                  // (Parm)
	float                                              NewVelZ;                                                  // (Parm)
	class AActor*                                      NewBase;                                                  // (Parm)
	float                                              NewFloorX;                                                // (Parm)
	float                                              NewFloorY;                                                // (Parm)
	float                                              NewFloorZ;                                                // (Parm)
};

// Function Engine.PlayerController.ClientAdjustPosition
struct APlayerController_ClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FName                                       NewState;                                                 // (Parm)
	TEnumAsByte<EPhysics>                              newPhysics;                                               // (Parm)
	float                                              NewLocX;                                                  // (Parm)
	float                                              NewLocY;                                                  // (Parm)
	float                                              NewLocZ;                                                  // (Parm)
	float                                              NewVelX;                                                  // (Parm)
	float                                              NewVelY;                                                  // (Parm)
	float                                              NewVelZ;                                                  // (Parm)
	class AActor*                                      NewBase;                                                  // (Parm)
};

// Function Engine.PlayerController.ShortClientAdjustPosition
struct APlayerController_ShortClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FName                                       NewState;                                                 // (Parm)
	TEnumAsByte<EPhysics>                              newPhysics;                                               // (Parm)
	float                                              NewLocX;                                                  // (Parm)
	float                                              NewLocY;                                                  // (Parm)
	float                                              NewLocZ;                                                  // (Parm)
	class AActor*                                      NewBase;                                                  // (Parm)
};

// Function Engine.PlayerController.VeryShortClientAdjustPosition
struct APlayerController_VeryShortClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm)
	float                                              NewLocX;                                                  // (Parm)
	float                                              NewLocY;                                                  // (Parm)
	float                                              NewLocZ;                                                  // (Parm)
	class AActor*                                      NewBase;                                                  // (Parm)
};

// Function Engine.PlayerController.MoveAutonomous
struct APlayerController_MoveAutonomous_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               NewbRun;                                                  // (Parm)
	bool                                               NewbDuck;                                                 // (Parm)
	bool                                               NewbPressedJump;                                          // (Parm)
	bool                                               NewbDoubleJump;                                           // (Parm)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	struct FVector                                     NewAccel;                                                 // (Parm)
	struct FRotator                                    DeltaRot;                                                 // (Parm)
};

// Function Engine.PlayerController.ProcessMove
struct APlayerController_ProcessMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     NewAccel;                                                 // (Parm)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	struct FRotator                                    DeltaRot;                                                 // (Parm)
};

// Function Engine.PlayerController.ProcessDrive
struct APlayerController_ProcessDrive_Params
{
	float                                              InForward;                                                // (Parm)
	float                                              InStrafe;                                                 // (Parm)
	bool                                               InJump;                                                   // (Parm)
};

// Function Engine.PlayerController.ServerDrive
struct APlayerController_ServerDrive_Params
{
	float                                              InForward;                                                // (Parm)
	float                                              InStrafe;                                                 // (Parm)
	bool                                               InJump;                                                   // (Parm)
};

// Function Engine.PlayerController.ServerMove
struct APlayerController_ServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FVector                                     InAccel;                                                  // (Parm)
	struct FVector                                     ClientLoc;                                                // (Parm)
	bool                                               NewbRun;                                                  // (Parm)
	bool                                               NewbDuck;                                                 // (Parm)
	bool                                               NewbJumpStatus;                                           // (Parm)
	bool                                               NewbDoubleJump;                                           // (Parm)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	unsigned char                                      ClientRoll;                                               // (Parm)
	int                                                View;                                                     // (Parm)
	unsigned char                                      OldTimeDelta;                                             // (OptionalParm, Parm)
	int                                                OldAccel;                                                 // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ShortServerMove
struct APlayerController_ShortServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FVector                                     ClientLoc;                                                // (Parm)
	bool                                               NewbRun;                                                  // (Parm)
	bool                                               NewbDuck;                                                 // (Parm)
	bool                                               NewbJumpStatus;                                           // (Parm)
	unsigned char                                      ClientRoll;                                               // (Parm)
	int                                                View;                                                     // (Parm)
};

// Function Engine.PlayerController.RocketServerMove
struct APlayerController_RocketServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FVector                                     InAccel;                                                  // (Parm)
	struct FVector                                     ClientLoc;                                                // (Parm)
	unsigned char                                      ClientRoll;                                               // (Parm)
	int                                                View;                                                     // (Parm)
};

// Function Engine.PlayerController.ForceDeathUpdate
struct APlayerController_ForceDeathUpdate_Params
{
};

// Function Engine.PlayerController.ClientVoiceMessage
struct APlayerController_ClientVoiceMessage_Params
{
	class APlayerReplicationInfo*                      Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       messagetype;                                              // (Parm)
	unsigned char                                      MessageID;                                                // (Parm)
};

// Function Engine.PlayerController.ClientSetBehindView
struct APlayerController_ClientSetBehindView_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerController.ClientSetFixedCamera
struct APlayerController_ClientSetFixedCamera_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerController.PreClientTravel
struct APlayerController_PreClientTravel_Params
{
};

// Function Engine.PlayerController.ShowGun
struct APlayerController_ShowGun_Params
{
};

// Function Engine.PlayerController.IsDead
struct APlayerController_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.SetWeaponHand
struct APlayerController_SetWeaponHand_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.SetHand
struct APlayerController_SetHand_Params
{
	int                                                IntValue;                                                 // (Parm)
};

// Function Engine.PlayerController.ServerSetHandedness
struct APlayerController_ServerSetHandedness_Params
{
	float                                              hand;                                                     // (Parm)
};

// Function Engine.PlayerController.TeamSay
struct APlayerController_TeamSay_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.Say
struct APlayerController_Say_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.ForceReload
struct APlayerController_ForceReload_Params
{
};

// Function Engine.PlayerController.SetMouseAccel
struct APlayerController_SetMouseAccel_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.PlayerController.SetMouseSmoothing
struct APlayerController_SetMouseSmoothing_Params
{
	int                                                Mode;                                                     // (Parm)
};

// Function Engine.PlayerController.SetSensitivity
struct APlayerController_SetSensitivity_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.PlayerController.Mutate
struct APlayerController_Mutate_Params
{
	struct FString                                     MutateString;                                             // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.FOV
struct APlayerController_FOV_Params
{
	float                                              f;                                                        // (Parm)
};

// Function Engine.PlayerController.ResetFOV
struct APlayerController_ResetFOV_Params
{
};

// Function Engine.PlayerController.SetFOV
struct APlayerController_SetFOV_Params
{
	float                                              NewFOV;                                                   // (Parm)
};

// Function Engine.PlayerController.FixFOV
struct APlayerController_FixFOV_Params
{
};

// Function Engine.PlayerController.EndZoom
struct APlayerController_EndZoom_Params
{
};

// Function Engine.PlayerController.StopZoom
struct APlayerController_StopZoom_Params
{
};

// Function Engine.PlayerController.StartZoom
struct APlayerController_StartZoom_Params
{
};

// Function Engine.PlayerController.ToggleZoom
struct APlayerController_ToggleZoom_Params
{
};

// Function Engine.PlayerController.ClientSetMusic
struct APlayerController_ClientSetMusic_Params
{
	struct FString                                     NewSong;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<EMusicTransition>                      NewTransition;                                            // (Parm)
};

// Function Engine.PlayerController.Destroyed
struct APlayerController_Destroyed_Params
{
};

// Function Engine.PlayerController.ClientReliablePlaySound
struct APlayerController_ClientReliablePlaySound_Params
{
	class USound*                                      ASound;                                                   // (Parm)
	bool                                               bVolumeControl;                                           // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ClientPlaySound
struct APlayerController_ClientPlaySound_Params
{
	class USound*                                      ASound;                                                   // (Parm)
	bool                                               bVolumeControl;                                           // (OptionalParm, Parm)
	float                                              inAtten;                                                  // (OptionalParm, Parm)
	TEnumAsByte<ESoundSlot>                            Slot;                                                     // (OptionalParm, Parm)
};

// Function Engine.PlayerController.AllowVoiceMessage
struct APlayerController_AllowVoiceMessage_Params
{
	struct FName                                       messagetype;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.PlayAnnouncement
struct APlayerController_PlayAnnouncement_Params
{
	class USound*                                      ASound;                                                   // (Parm)
	unsigned char                                      AnnouncementLevel;                                        // (Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
};

// Function Engine.PlayerController.PlayBeepSound
struct APlayerController_PlayBeepSound_Params
{
};

// Function Engine.PlayerController.TeamMessage
struct APlayerController_TeamMessage_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (Parm)
};

// Function Engine.PlayerController.ClientMessage
struct APlayerController_ClientMessage_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ReceiveLocalizedMessage
struct APlayerController_ReceiveLocalizedMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.PlayerController.ViewFlash
struct APlayerController_ViewFlash_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PlayerController.UpdateFlashComponent
struct APlayerController_UpdateFlashComponent_Params
{
	float                                              Current;                                                  // (Parm)
	float                                              Step;                                                     // (Parm)
	float                                              Goal;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.HandlePickup
struct APlayerController_HandlePickup_Params
{
	class APickup*                                     pick;                                                     // (Parm)
};

// Function Engine.PlayerController.ClientSetHUD
struct APlayerController_ClientSetHUD_Params
{
	class UClass*                                      newHUDType;                                               // (Parm)
	class UClass*                                      newScoringType;                                           // (Parm)
};

// Function Engine.PlayerController.PawnDied
struct APlayerController_PawnDied_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.PlayerController.ViewNextBot
struct APlayerController_ViewNextBot_Params
{
};

// Function Engine.PlayerController.UnPossess
struct APlayerController_UnPossess_Params
{
};

// Function Engine.PlayerController.Possess
struct APlayerController_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
};

// Function Engine.PlayerController.GetFacingDirection
struct APlayerController_GetFacingDirection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.GivePawn
struct APlayerController_GivePawn_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm)
};

// Function Engine.PlayerController.AskForPawn
struct APlayerController_AskForPawn_Params
{
};

// Function Engine.PlayerController.ClientGotoState
struct APlayerController_ClientGotoState_Params
{
	struct FName                                       NewState;                                                 // (Parm)
	struct FName                                       NewLabel;                                                 // (Parm)
};

// Function Engine.PlayerController.InitInputSystem
struct APlayerController_InitInputSystem_Params
{
};

// Function Engine.PlayerController.CleanOutSavedMoves
struct APlayerController_CleanOutSavedMoves_Params
{
};

// Function Engine.PlayerController.Reset
struct APlayerController_Reset_Params
{
};

// Function Engine.PlayerController.SpawnDefaultHUD
struct APlayerController_SpawnDefaultHUD_Params
{
};

// Function Engine.PlayerController.ServerVerifyViewTarget
struct APlayerController_ServerVerifyViewTarget_Params
{
};

// Function Engine.PlayerController.ClientSetViewTarget
struct APlayerController_ClientSetViewTarget_Params
{
	class AActor*                                      A;                                                        // (Parm)
};

// Function Engine.PlayerController.AddCheatManager
struct APlayerController_AddCheatManager_Params
{
};

// Function Engine.PlayerController.AddCheats
struct APlayerController_AddCheats_Params
{
};

// Function Engine.PlayerController.PendingStasis
struct APlayerController_PendingStasis_Params
{
};

// Function Engine.PlayerController.ServerGivePawn
struct APlayerController_ServerGivePawn_Params
{
};

// Function Engine.PlayerController.PostBeginPlay
struct APlayerController_PostBeginPlay_Params
{
};

// Function Engine.PlayerController.ClientHearSound
struct APlayerController_ClientHearSound_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
	int                                                Id;                                                       // (Parm)
	class USound*                                      S;                                                        // (Parm)
	struct FVector                                     SoundLocation;                                            // (Parm)
	struct FVector                                     Parameters;                                               // (Parm)
	bool                                               Attenuate;                                                // (Parm)
};

// Function Engine.PlayerController.FindStairRotation
struct APlayerController_FindStairRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.ServerValidationResponse
struct APlayerController_ServerValidationResponse_Params
{
	struct FString                                     R;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.ClientValidate
struct APlayerController_ClientValidate_Params
{
	struct FString                                     C;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.PasteFromClipboard
struct APlayerController_PasteFromClipboard_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerController.CopyToClipboard
struct APlayerController_CopyToClipboard_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.PlayerController.GetDefaultURL
struct APlayerController_GetDefaultURL_Params
{
	struct FString                                     Option;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerController.UpdateURL
struct APlayerController_UpdateURL_Params
{
	struct FString                                     NewOption;                                                // (Parm, NeedCtorLink)
	struct FString                                     NewValue;                                                 // (Parm, NeedCtorLink)
	bool                                               bSaveDefault;                                             // (Parm)
};

// Function Engine.PlayerController.ClientTravel
struct APlayerController_ClientTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	TEnumAsByte<ETravelType>                           TravelType;                                               // (Parm)
	bool                                               bItems;                                                   // (Parm)
};

// Function Engine.PlayerController.SetViewTarget
struct APlayerController_SetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm)
};

// Function Engine.PlayerController.ResetKeyboard
struct APlayerController_ResetKeyboard_Params
{
};

// Function Engine.PlayerController.GetEntryLevel
struct APlayerController_GetEntryLevel_Params
{
	class ALevelInfo*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerController.ConsoleCommand
struct APlayerController_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerController.GetServerNetworkAddress
struct APlayerController_GetServerNetworkAddress_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerController.GetPlayerNetworkAddress
struct APlayerController_GetPlayerNetworkAddress_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.LineagePlayerController.ClearL2Game
struct ALineagePlayerController_ClearL2Game_Params
{
};

// Function Engine.LineagePlayerController.LostChild
struct ALineagePlayerController_LostChild_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.LineagePlayerController.ClientReStart
struct ALineagePlayerController_ClientReStart_Params
{
};

// Function Engine.LineagePlayerController.ViewPlayer
struct ALineagePlayerController_ViewPlayer_Params
{
};

// Function Engine.LineagePlayerController.PlayerCalcView
struct ALineagePlayerController_PlayerCalcView_Params
{
	class AActor*                                      ViewActor;                                                // (Parm, OutParm)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
};

// Function Engine.LineagePlayerController.CalcBehindView
struct ALineagePlayerController_CalcBehindView_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
	float                                              dist;                                                     // (Parm)
};

// Function Engine.LineagePlayerController.CalcVolumeCamera
struct ALineagePlayerController_CalcVolumeCamera_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
	float                                              ViewDist;                                                 // (Parm)
};

// Function Engine.LineagePlayerController.CalcCameraWalkingMode
struct ALineagePlayerController_CalcCameraWalkingMode_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.LineagePlayerController.PlayerTick
struct ALineagePlayerController_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.LineagePlayerController.CalcVolumeZoomingDistance
struct ALineagePlayerController_CalcVolumeZoomingDistance_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.LineagePlayerController.IsBlockRotation
struct ALineagePlayerController_IsBlockRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm)
	struct FVector                                     TargetLocation;                                           // (Parm)
	float                                              dist;                                                     // (Parm)
	int                                                VolumeRadius;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LineagePlayerController.CalcCameraMovingToDefaultDistance
struct ALineagePlayerController_CalcCameraMovingToDefaultDistance_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LineagePlayerController.CalcCameraMovingToDefaultPitch
struct ALineagePlayerController_CalcCameraMovingToDefaultPitch_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                TargetPitch;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LineagePlayerController.CalcCameraMovingToDefaultYaw
struct ALineagePlayerController_CalcCameraMovingToDefaultYaw_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                TargetYaw;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LineagePlayerController.UpdateRotation
struct ALineagePlayerController_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	float                                              maxPitch;                                                 // (Parm)
};

// Function Engine.LineagePlayerController.ViewFix
struct ALineagePlayerController_ViewFix_Params
{
};

// Function Engine.LineagePlayerController.SetHitCheckCameraMinDist
struct ALineagePlayerController_SetHitCheckCameraMinDist_Params
{
	int                                                Delta;                                                    // (Parm)
};

// Function Engine.LineagePlayerController.UseHitCheckCameraOff
struct ALineagePlayerController_UseHitCheckCameraOff_Params
{
};

// Function Engine.LineagePlayerController.UseHitCheckCameraOn
struct ALineagePlayerController_UseHitCheckCameraOn_Params
{
};

// Function Engine.LineagePlayerController.SetFlyYaw
struct ALineagePlayerController_SetFlyYaw_Params
{
	int                                                Value;                                                    // (Parm)
};

// Function Engine.LineagePlayerController.ShowPlayerPawn
struct ALineagePlayerController_ShowPlayerPawn_Params
{
};

// Function Engine.LineagePlayerController.HidePlayerPawn
struct ALineagePlayerController_HidePlayerPawn_Params
{
};

// Function Engine.LineagePlayerController.GetWaitSeqName
struct ALineagePlayerController_GetWaitSeqName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LineagePlayerController.GetMoveSeqName
struct ALineagePlayerController_GetMoveSeqName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LineagePlayerController.PostBeginPlay
struct ALineagePlayerController_PostBeginPlay_Params
{
};

// Function Engine.CarriedObject.Position
struct ACarriedObject_Position_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AvoidMarker.StartleBots
struct AAvoidMarker_StartleBots_Params
{
};

// Function Engine.AvoidMarker.Touch
struct AAvoidMarker_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.NavigationPoint.MoverClosed
struct ANavigationPoint_MoverClosed_Params
{
};

// Function Engine.NavigationPoint.MoverOpened
struct ANavigationPoint_MoverOpened_Params
{
};

// Function Engine.NavigationPoint.ProceedWithMove
struct ANavigationPoint_ProceedWithMove_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.NavigationPoint.SuggestMovePreparation
struct ANavigationPoint_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.NavigationPoint.DetourWeight
struct ANavigationPoint_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.NavigationPoint.Accept
struct ANavigationPoint_Accept_Params
{
	class AActor*                                      Incoming;                                                 // (Parm)
	class AActor*                                      Source;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.NavigationPoint.SpecialCost
struct ANavigationPoint_SpecialCost_Params
{
	class APawn*                                       Seeker;                                                   // (Parm)
	class UReachSpec*                                  Path;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.NavigationPoint.PostBeginPlay
struct ANavigationPoint_PostBeginPlay_Params
{
};

// Function Engine.JumpDest.SuggestMovePreparation
struct AJumpDest_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.JumpDest.DoJump
struct AJumpDest_DoJump_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.JumpDest.SpecialCost
struct AJumpDest_SpecialCost_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class UReachSpec*                                  Path;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.JumpDest.GetPathIndex
struct AJumpDest_GetPathIndex_Params
{
	class UReachSpec*                                  Path;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.JumpPad.PostTouch
struct AJumpPad_PostTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.JumpPad.Touch
struct AJumpPad_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.JumpPad.PostBeginPlay
struct AJumpPad_PostBeginPlay_Params
{
};

// Function Engine.Pickup.GetRespawnTime
struct APickup_GetRespawnTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pickup.Landed
struct APickup_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Engine.Pickup.ReadyToPickup
struct APickup_ReadyToPickup_Params
{
	float                                              MaxWait;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pickup.InitDroppedPickupFor
struct APickup_InitDroppedPickupFor_Params
{
	class AInventory*                                  Inv;                                                      // (Parm)
};

// Function Engine.Pickup.GetLocalString
struct APickup_GetLocalString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Pickup.SetRespawn
struct APickup_SetRespawn_Params
{
};

// Function Engine.Pickup.AnnouncePickup
struct APickup_AnnouncePickup_Params
{
	class APawn*                                       Receiver;                                                 // (Parm)
};

// Function Engine.Pickup.StartSleeping
struct APickup_StartSleeping_Params
{
};

// Function Engine.Pickup.SpawnCopy
struct APickup_SpawnCopy_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pickup.BotDesireability
struct APickup_BotDesireability_Params
{
	class APawn*                                       Bot;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pickup.DetourWeight
struct APickup_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pickup.Transmogrify
struct APickup_Transmogrify_Params
{
	class UClass*                                      NewClass;                                                 // (Parm)
	class APickup*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Pickup.RespawnEffect
struct APickup_RespawnEffect_Params
{
};

// Function Engine.Pickup.Reset
struct APickup_Reset_Params
{
};

// Function Engine.Pickup.Destroyed
struct APickup_Destroyed_Params
{
};

// Function Engine.Pickup.StaticPrecache
struct APickup_StaticPrecache_Params
{
	class ALevelInfo*                                  L;                                                        // (Parm)
};

// Function Engine.Pickup.RemoveFromNavigation
struct APickup_RemoveFromNavigation_Params
{
};

// Function Engine.Pickup.AddToNavigation
struct APickup_AddToNavigation_Params
{
};

// Function Engine.StationaryWeapons.TakeDamage
struct AStationaryWeapons_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.StationaryWeapons.ReduceDamage
struct AStationaryWeapons_ReduceDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.StationaryWeapons.Explode
struct AStationaryWeapons_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Engine.StationaryWeapons.DeActivate
struct AStationaryWeapons_DeActivate_Params
{
};

// Function Engine.StationaryWeapons.Activate
struct AStationaryWeapons_Activate_Params
{
};

// Function Engine.StationaryWeapons.Deactivated
struct AStationaryWeapons_Deactivated_Params
{
};

// Function Engine.StationaryWeapons.Activated
struct AStationaryWeapons_Activated_Params
{
};

// Function Engine.StationaryWeapons.SetTeam
struct AStationaryWeapons_SetTeam_Params
{
	int                                                NewTeamIndex;                                             // (Parm)
};

// Function Engine.StationaryWeapons.PostBeginPlay
struct AStationaryWeapons_PostBeginPlay_Params
{
};

// Function Engine.InventoryAttachment.InitFor
struct AInventoryAttachment_InitFor_Params
{
	class AInventory*                                  i;                                                        // (Parm)
};

// Function Engine.WeaponAttachment.ThirdPersonEffects
struct AWeaponAttachment_ThirdPersonEffects_Params
{
};

// Function Engine.TeamInfo.RemoveFromTeam
struct ATeamInfo_RemoveFromTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function Engine.TeamInfo.AddToTeam
struct ATeamInfo_AddToTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.TeamInfo.GetHumanReadableName
struct ATeamInfo_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.TeamInfo.UpdatePrecacheMaterials
struct ATeamInfo_UpdatePrecacheMaterials_Params
{
};

// Function Engine.TeamInfo.BelongsOnTeam
struct ATeamInfo_BelongsOnTeam_Params
{
	class UClass*                                      PawnClass;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Door.SuggestMovePreparation
struct ADoor_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Door.ProceedWithMove
struct ADoor_ProceedWithMove_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Door.SpecialHandling
struct ADoor_SpecialHandling_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Door.MoverClosed
struct ADoor_MoverClosed_Params
{
};

// Function Engine.Door.MoverOpened
struct ADoor_MoverOpened_Params
{
};

// Function Engine.Door.PostBeginPlay
struct ADoor_PostBeginPlay_Params
{
};

// Function Engine.Ladder.SuggestMovePreparation
struct ALadder_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PotentialClimbWatcher.Tick
struct APotentialClimbWatcher_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.PhysicsVolume.GetHitEffectName
struct APhysicsVolume_GetHitEffectName_Params
{
	struct FName                                       A;                                                        // (Parm, OutParm)
	struct FName                                       B;                                                        // (Parm, OutParm)
};

// Function Engine.PhysicsVolume.CausePainTo
struct APhysicsVolume_CausePainTo_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.PlayExitSplash
struct APhysicsVolume_PlayExitSplash_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.UnTouch
struct APhysicsVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.PlayEntrySplash
struct APhysicsVolume_PlayEntrySplash_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.Touch
struct APhysicsVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.Trigger
struct APhysicsVolume_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.PhysicsVolume.TimerPop
struct APhysicsVolume_TimerPop_Params
{
	class AVolumeTimer*                                t;                                                        // (Parm)
};

// Function Engine.PhysicsVolume.PawnLeavingVolume
struct APhysicsVolume_PawnLeavingVolume_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.PawnEnteredVolume
struct APhysicsVolume_PawnEnteredVolume_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.ActorLeavingVolume
struct APhysicsVolume_ActorLeavingVolume_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.ActorEnteredVolume
struct APhysicsVolume_ActorEnteredVolume_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.PhysicsChangedFor
struct APhysicsVolume_PhysicsChangedFor_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.PhysicsVolume.PostBeginPlay
struct APhysicsVolume_PostBeginPlay_Params
{
};

// Function Engine.LadderVolume.PhysicsChangedFor
struct ALadderVolume_PhysicsChangedFor_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.LadderVolume.PawnLeavingVolume
struct ALadderVolume_PawnLeavingVolume_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.LadderVolume.PawnEnteredVolume
struct ALadderVolume_PawnEnteredVolume_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.LadderVolume.InUse
struct ALadderVolume_InUse_Params
{
	class APawn*                                       Ignored;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LadderVolume.PostBeginPlay
struct ALadderVolume_PostBeginPlay_Params
{
};

// Function Engine.DefaultPhysicsVolume.Destroyed
struct ADefaultPhysicsVolume_Destroyed_Params
{
};

// Function Engine.LineOfSightTrigger.Trigger
struct ALineOfSightTrigger_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.LineOfSightTrigger.PlayerSeesMe
struct ALineOfSightTrigger_PlayerSeesMe_Params
{
	class APlayerController*                           P;                                                        // (Parm)
};

// Function Engine.LineOfSightTrigger.PostBeginPlay
struct ALineOfSightTrigger_PostBeginPlay_Params
{
};

// Function Engine.AIScript.TakeOver
struct AAIScript_TakeOver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.AIScript.GetMoveTarget
struct AAIScript_GetMoveTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIScript.SpawnControllerFor
struct AAIScript_SpawnControllerFor_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.DamageType.GetWeaponClass
struct ADamageType_GetWeaponClass_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.DamageType.IsOfType
struct ADamageType_IsOfType_Params
{
	int                                                Description;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.DamageType.GetPawnDamageSound
struct ADamageType_GetPawnDamageSound_Params
{
	class USound*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.DamageType.GetPawnDamageEmitter
struct ADamageType_GetPawnDamageEmitter_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class APawn*                                       Victim;                                                   // (Parm)
	bool                                               bLowDetail;                                               // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.DamageType.GetPawnDamageEffect
struct ADamageType_GetPawnDamageEffect_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class APawn*                                       Victim;                                                   // (Parm)
	bool                                               bLowDetail;                                               // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.DamageType.SuicideMessage
struct ADamageType_SuicideMessage_Params
{
	class APlayerReplicationInfo*                      Victim;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.DamageType.DeathMessage
struct ADamageType_DeathMessage_Params
{
	class APlayerReplicationInfo*                      Killer;                                                   // (Parm)
	class APlayerReplicationInfo*                      Victim;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.DamageType.IncrementKills
struct ADamageType_IncrementKills_Params
{
	class AController*                                 Killer;                                                   // (Parm)
};

// Function Engine.VehicleServerPart.PostBeginPlay
struct AVehicleServerPart_PostBeginPlay_Params
{
};

// Function Engine.VehicleServerPart.PostSetPawnResource
struct AVehicleServerPart_PostSetPawnResource_Params
{
};

// Function Engine.VehicleServerPart.OnTurning
struct AVehicleServerPart_OnTurning_Params
{
};

// Function Engine.VehicleServerPart.OnMoveDown
struct AVehicleServerPart_OnMoveDown_Params
{
};

// Function Engine.VehicleServerPart.OnMoveUp
struct AVehicleServerPart_OnMoveUp_Params
{
};

// Function Engine.VehicleServerPart.OnBoost
struct AVehicleServerPart_OnBoost_Params
{
};

// Function Engine.VehicleServerPart.OnStop
struct AVehicleServerPart_OnStop_Params
{
};

// Function Engine.VehicleServerPart.OnStart
struct AVehicleServerPart_OnStart_Params
{
};

// Function Engine.VehicleServerPart.OnDriverOut
struct AVehicleServerPart_OnDriverOut_Params
{
};

// Function Engine.VehicleServerPart.OnDriverIn
struct AVehicleServerPart_OnDriverIn_Params
{
	int                                                a_DriverID;                                               // (Parm)
};

// Function Engine.VehicleMeshPart.Destroyed
struct AVehicleMeshPart_Destroyed_Params
{
};

// Function Engine.VehicleMeshPart.PostBeginPlay
struct AVehicleMeshPart_PostBeginPlay_Params
{
};

// Function Engine.VehicleMeshPart.PostSetPawnResource
struct AVehicleMeshPart_PostSetPawnResource_Params
{
};

// Function Engine.VehicleMeshPart.OnTurning
struct AVehicleMeshPart_OnTurning_Params
{
};

// Function Engine.VehicleMeshPart.OnMoveDown
struct AVehicleMeshPart_OnMoveDown_Params
{
};

// Function Engine.VehicleMeshPart.OnMoveUp
struct AVehicleMeshPart_OnMoveUp_Params
{
};

// Function Engine.VehicleMeshPart.OnBoost
struct AVehicleMeshPart_OnBoost_Params
{
};

// Function Engine.VehicleMeshPart.OnStop
struct AVehicleMeshPart_OnStop_Params
{
};

// Function Engine.VehicleMeshPart.OnStart
struct AVehicleMeshPart_OnStart_Params
{
};

// Function Engine.VehicleMeshPart.OnDriverOut
struct AVehicleMeshPart_OnDriverOut_Params
{
};

// Function Engine.VehicleMeshPart.OnDriverIn
struct AVehicleMeshPart_OnDriverIn_Params
{
	int                                                a_DriverID;                                               // (Parm)
};

// Function Engine.VehiclePart.PostBeginPlay
struct AVehiclePart_PostBeginPlay_Params
{
};

// Function Engine.VehiclePart.PostSetPawnResource
struct AVehiclePart_PostSetPawnResource_Params
{
};

// Function Engine.VehiclePart.OnTurning
struct AVehiclePart_OnTurning_Params
{
};

// Function Engine.VehiclePart.OnMoveDown
struct AVehiclePart_OnMoveDown_Params
{
};

// Function Engine.VehiclePart.OnMoveUp
struct AVehiclePart_OnMoveUp_Params
{
};

// Function Engine.VehiclePart.OnBoost
struct AVehiclePart_OnBoost_Params
{
};

// Function Engine.VehiclePart.OnStop
struct AVehiclePart_OnStop_Params
{
};

// Function Engine.VehiclePart.OnStart
struct AVehiclePart_OnStart_Params
{
};

// Function Engine.VehiclePart.OnDriverOut
struct AVehiclePart_OnDriverOut_Params
{
};

// Function Engine.VehiclePart.OnDriverIn
struct AVehiclePart_OnDriverIn_Params
{
	int                                                a_DriverID;                                               // (Parm)
};

// Function Engine.Mutator.ParseChatPercVar
struct AMutator_ParseChatPercVar_Params
{
	class AController*                                 Who;                                                      // (Parm)
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Mutator.GetServerPlayers
struct AMutator_GetServerPlayers_Params
{
	struct FServerResponseLine                         ServerState;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.Mutator.GetServerDetails
struct AMutator_GetServerDetails_Params
{
	struct FServerResponseLine                         ServerState;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.Mutator.PlayerChangedClass
struct AMutator_PlayerChangedClass_Params
{
	class AController*                                 aPlayer;                                                  // (Parm)
};

// Function Engine.Mutator.CheckReplacement
struct AMutator_CheckReplacement_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned char                                      bSuperRelevant;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.CheckRelevance
struct AMutator_CheckRelevance_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.IsRelevant
struct AMutator_IsRelevant_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	unsigned char                                      bSuperRelevant;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.AlwaysKeep
struct AMutator_AlwaysKeep_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.ReplaceWith
struct AMutator_ReplaceWith_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FString                                     aClassName;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.AddMutator
struct AMutator_AddMutator_Params
{
	class AMutator*                                    M;                                                        // (Parm)
};

// Function Engine.Mutator.MyDefaultWeapon
struct AMutator_MyDefaultWeapon_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.GetInventoryClassOverride
struct AMutator_GetInventoryClassOverride_Params
{
	struct FString                                     InventoryClassName;                                       // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Mutator.GetInventoryClass
struct AMutator_GetInventoryClass_Params
{
	struct FString                                     InventoryClassName;                                       // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.GetDefaultWeapon
struct AMutator_GetDefaultWeapon_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.ModifyPlayer
struct AMutator_ModifyPlayer_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Mutator.ModifyLogin
struct AMutator_ModifyLogin_Params
{
	struct FString                                     Portal;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.Mutator.Mutate
struct AMutator_Mutate_Params
{
	struct FString                                     MutateString;                                             // (Parm, NeedCtorLink)
	class APlayerController*                           Sender;                                                   // (Parm)
};

// Function Engine.Mutator.Destroyed
struct AMutator_Destroyed_Params
{
};

// Function Engine.Mutator.MutatorIsAllowed
struct AMutator_MutatorIsAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Mutator.PreBeginPlay
struct AMutator_PreBeginPlay_Params
{
};

// Function Engine.AIController.Startle
struct AAIController_Startle_Params
{
	class AActor*                                      A;                                                        // (Parm)
};

// Function Engine.AIController.PriorityObjective
struct AAIController_PriorityObjective_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.UnderLift
struct AAIController_UnderLift_Params
{
	class AMover*                                      M;                                                        // (Parm)
};

// Function Engine.AIController.MoverFinished
struct AAIController_MoverFinished_Params
{
};

// Function Engine.AIController.WaitForMover
struct AAIController_WaitForMover_Params
{
	class AMover*                                      M;                                                        // (Parm)
};

// Function Engine.AIController.PrepareForMove
struct AAIController_PrepareForMove_Params
{
	class ANavigationPoint*                            Goal;                                                     // (Parm)
	class UReachSpec*                                  Path;                                                     // (Parm)
};

// Function Engine.AIController.GetOrders
struct AAIController_GetOrders_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.GetOrderObject
struct AAIController_GetOrderObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.SetOrders
struct AAIController_SetOrders_Params
{
	struct FName                                       NewOrders;                                                // (Parm)
	class AController*                                 OrderGiver;                                               // (Parm)
};

// Function Engine.AIController.AdjustView
struct AAIController_AdjustView_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Engine.AIController.GetFacingDirection
struct AAIController_GetFacingDirection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.AdjustDesireFor
struct AAIController_AdjustDesireFor_Params
{
	class APickup*                                     P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.DisplayDebug
struct AAIController_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.AIController.TriggerScript
struct AAIController_TriggerScript_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.WeaponFireAgain
struct AAIController_WeaponFireAgain_Params
{
	float                                              RefireRate;                                               // (Parm)
	bool                                               bFinishedFire;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AIController.Trigger
struct AAIController_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.AIController.Reset
struct AAIController_Reset_Params
{
};

// Function Engine.AIController.PreBeginPlay
struct AAIController_PreBeginPlay_Params
{
};

// Function Engine.AIController.GetSlaveDestination
struct AAIController_GetSlaveDestination_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.AIController.GetDestination
struct AAIController_GetDestination_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.AIController.OwnerPossess
struct AAIController_OwnerPossess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
};

// Function Engine.AIController.WaitToSeeEnemy
struct AAIController_WaitToSeeEnemy_Params
{
};

// Function Engine.Inventory.StaticItemName
struct AInventory_StaticItemName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Inventory.SetOwnerDisplay
struct AInventory_SetOwnerDisplay_Params
{
};

// Function Engine.Inventory.OwnerEvent
struct AInventory_OwnerEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function Engine.Inventory.NextWeapon
struct AInventory_NextWeapon_Params
{
	class AWeapon*                                     CurrentChoice;                                            // (Parm)
	class AWeapon*                                     CurrentWeapon;                                            // (Parm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inventory.PrevWeapon
struct AInventory_PrevWeapon_Params
{
	class AWeapon*                                     CurrentChoice;                                            // (Parm)
	class AWeapon*                                     CurrentWeapon;                                            // (Parm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inventory.WeaponChange
struct AInventory_WeaponChange_Params
{
	unsigned char                                      f;                                                        // (Parm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inventory.Use
struct AInventory_Use_Params
{
	float                                              Value;                                                    // (Parm)
};

// Function Engine.Inventory.DropFrom
struct AInventory_DropFrom_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
};

// Function Engine.Inventory.SelectNext
struct AInventory_SelectNext_Params
{
	class APowerups*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inventory.HandlePickupQuery
struct AInventory_HandlePickupQuery_Params
{
	class APickup*                                     item;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inventory.GiveTo
struct AInventory_GiveTo_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Inventory.Destroyed
struct AInventory_Destroyed_Params
{
};

// Function Engine.Inventory.TravelPostAccept
struct AInventory_TravelPostAccept_Params
{
};

// Function Engine.Inventory.TravelPreAccept
struct AInventory_TravelPreAccept_Params
{
};

// Function Engine.Inventory.RecommendWeapon
struct AInventory_RecommendWeapon_Params
{
	float                                              rating;                                                   // (Parm, OutParm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Inventory.PickupFunction
struct AInventory_PickupFunction_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Inventory.GetHumanReadableName
struct AInventory_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Inventory.RenderOverlays
struct AInventory_RenderOverlays_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Inventory.DetachFromPawn
struct AInventory_DetachFromPawn_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.Inventory.updaterelative
struct AInventory_updaterelative_Params
{
	int                                                Pitch;                                                    // (Parm)
	int                                                Yaw;                                                      // (Parm)
	int                                                Roll;                                                     // (Parm)
};

// Function Engine.Inventory.AttachToPawn
struct AInventory_AttachToPawn_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.Ammunition.GetDamageRadius
struct AAmmunition_GetDamageRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Ammunition.AddAmmo
struct AAmmunition_AddAmmo_Params
{
	int                                                AmmoToAdd;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Ammunition.HandlePickupQuery
struct AAmmunition_HandlePickupQuery_Params
{
	class APickup*                                     item;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Ammunition.DisplayDebug
struct AAmmunition_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.Ammunition.ProcessTraceHit
struct AAmmunition_ProcessTraceHit_Params
{
	class AWeapon*                                     W;                                                        // (Parm)
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	struct FVector                                     X;                                                        // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
	struct FVector                                     Z;                                                        // (Parm)
};

// Function Engine.Ammunition.SpawnProjectile
struct AAmmunition_SpawnProjectile_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FRotator                                    Dir;                                                      // (Parm)
};

// Function Engine.Ammunition.WarnTarget
struct AAmmunition_WarnTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	class APawn*                                       P;                                                        // (Parm)
	struct FVector                                     FireDir;                                                  // (Parm)
};

// Function Engine.Ammunition.RateSelf
struct AAmmunition_RateSelf_Params
{
	class APawn*                                       shooter;                                                  // (Parm)
	struct FName                                       RecommendedFiringMode;                                    // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Ammunition.HasAmmo
struct AAmmunition_HasAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Powerups.GetLocalString
struct APowerups_GetLocalString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.Powerups.UsedUp
struct APowerups_UsedUp_Params
{
};

// Function Engine.Powerups.FireEffect
struct APowerups_FireEffect_Params
{
};

// Function Engine.Powerups.UseCharge
struct APowerups_UseCharge_Params
{
	float                                              Amount;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Powerups.HandlePickupQuery
struct APowerups_HandlePickupQuery_Params
{
	class APickup*                                     item;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Powerups.Activate
struct APowerups_Activate_Params
{
};

// Function Engine.Powerups.SelectNext
struct APowerups_SelectNext_Params
{
	class APowerups*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Powerups.PickupFunction
struct APowerups_PickupFunction_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Powerups.TravelPreAccept
struct APowerups_TravelPreAccept_Params
{
};

// Function Engine.Ammo.SpawnCopy
struct AAmmo_SpawnCopy_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Ammo.BotDesireability
struct AAmmo_BotDesireability_Params
{
	class APawn*                                       Bot;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Ammo.DetourWeight
struct AAmmo_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameReplicationInfo.GetPRIArray
struct AGameReplicationInfo_GetPRIArray_Params
{
	TArray<class APlayerReplicationInfo*>              pris;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameReplicationInfo.RemovePRI
struct AGameReplicationInfo_RemovePRI_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
};

// Function Engine.GameReplicationInfo.AddPRI
struct AGameReplicationInfo_AddPRI_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
};

// Function Engine.GameReplicationInfo.Timer
struct AGameReplicationInfo_Timer_Params
{
};

// Function Engine.GameReplicationInfo.Reset
struct AGameReplicationInfo_Reset_Params
{
};

// Function Engine.GameReplicationInfo.PostBeginPlay
struct AGameReplicationInfo_PostBeginPlay_Params
{
};

// Function Engine.GameReplicationInfo.TeamSymbolNotify
struct AGameReplicationInfo_TeamSymbolNotify_Params
{
};

// Function Engine.GameReplicationInfo.PostNetBeginPlay
struct AGameReplicationInfo_PostNetBeginPlay_Params
{
};

// Function Engine.GameReplicationInfo.GetCarriedObjectState
struct AGameReplicationInfo_GetCarriedObjectState_Params
{
	int                                                Team;                                                     // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameReplicationInfo.SetCarriedObjectState
struct AGameReplicationInfo_SetCarriedObjectState_Params
{
	int                                                Team;                                                     // (Parm)
	struct FName                                       NewState;                                                 // (Parm)
};

// Function Engine.InternetInfo.GetBeaconText
struct AInternetInfo_GetBeaconText_Params
{
	int                                                i;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.InternetInfo.GetBeaconAddress
struct AInternetInfo_GetBeaconAddress_Params
{
	int                                                i;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerReplicationInfo.SetWaitingPlayer
struct APlayerReplicationInfo_SetWaitingPlayer_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function Engine.PlayerReplicationInfo.SetPlayerName
struct APlayerReplicationInfo_SetPlayerName_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.PlayerReplicationInfo.Timer
struct APlayerReplicationInfo_Timer_Params
{
};

// Function Engine.PlayerReplicationInfo.ClientNameChange
struct APlayerReplicationInfo_ClientNameChange_Params
{
};

// Function Engine.PlayerReplicationInfo.DisplayDebug
struct APlayerReplicationInfo_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.PlayerReplicationInfo.UpdatePlayerLocation
struct APlayerReplicationInfo_UpdatePlayerLocation_Params
{
};

// Function Engine.PlayerReplicationInfo.UpdateCharacter
struct APlayerReplicationInfo_UpdateCharacter_Params
{
};

// Function Engine.PlayerReplicationInfo.GetPortrait
struct APlayerReplicationInfo_GetPortrait_Params
{
	class UMaterial*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.PlayerReplicationInfo.GetLocationName
struct APlayerReplicationInfo_GetLocationName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerReplicationInfo.GetHumanReadableName
struct APlayerReplicationInfo_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.PlayerReplicationInfo.SetFlag
struct APlayerReplicationInfo_SetFlag_Params
{
	class ACarriedObject*                              NewFlag;                                                  // (Parm)
};

// Function Engine.PlayerReplicationInfo.Reset
struct APlayerReplicationInfo_Reset_Params
{
};

// Function Engine.PlayerReplicationInfo.SetCharacterName
struct APlayerReplicationInfo_SetCharacterName_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.PlayerReplicationInfo.Destroyed
struct APlayerReplicationInfo_Destroyed_Params
{
};

// Function Engine.PlayerReplicationInfo.PostNetBeginPlay
struct APlayerReplicationInfo_PostNetBeginPlay_Params
{
};

// Function Engine.PlayerReplicationInfo.PostBeginPlay
struct APlayerReplicationInfo_PostBeginPlay_Params
{
};

// Function Engine.LiftExit.SuggestMovePreparation
struct ALiftExit_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LiftCenter.ProceedWithMove
struct ALiftCenter_ProceedWithMove_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LiftCenter.SuggestMovePreparation
struct ALiftCenter_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LiftCenter.SpecialHandling
struct ALiftCenter_SpecialHandling_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LiftCenter.PostBeginPlay
struct ALiftCenter_PostBeginPlay_Params
{
};

// Function Engine.SavedMove.SetMoveFor
struct ASavedMove_SetMoveFor_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     NewAccel;                                                 // (Parm)
	TEnumAsByte<EDoubleClickDir>                       InDoubleClick;                                            // (Parm)
};

// Function Engine.SavedMove.PostUpdate
struct ASavedMove_PostUpdate_Params
{
	class APlayerController*                           P;                                                        // (Parm)
};

// Function Engine.SavedMove.Clear
struct ASavedMove_Clear_Params
{
};

// Function Engine.HUD.DrawTargeting
struct AHUD_DrawTargeting_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function Engine.HUD.LoadProgressFont
struct AHUD_LoadProgressFont_Params
{
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.LargerFontThan
struct AHUD_LargerFontThan_Params
{
	class UFont*                                       aFont;                                                    // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.GetMediumFontFor
struct AHUD_GetMediumFontFor_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.GetConsoleFont
struct AHUD_GetConsoleFont_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.LoadFont
struct AHUD_LoadFont_Params
{
	int                                                i;                                                        // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.LoadFontStatic
struct AHUD_LoadFontStatic_Params
{
	int                                                i;                                                        // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.UseHugeFont
struct AHUD_UseHugeFont_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.HUD.UseLargeFont
struct AHUD_UseLargeFont_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.HUD.UseMediumFont
struct AHUD_UseMediumFont_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.HUD.UseSmallFont
struct AHUD_UseSmallFont_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.HUD.AddTextMessage
struct AHUD_AddTextMessage_Params
{
	struct FString                                     M;                                                        // (Parm, NeedCtorLink)
	class UClass*                                      MessageClass;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
};

// Function Engine.HUD.DisplayMessages
struct AHUD_DisplayMessages_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function Engine.HUD.ProcessKeyEvent
struct AHUD_ProcessKeyEvent_Params
{
	int                                                Key;                                                      // (Parm)
	int                                                Action;                                                   // (Parm)
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.PlayReceivedMessage
struct AHUD_PlayReceivedMessage_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FString                                     PName;                                                    // (Parm, NeedCtorLink)
	class AZoneInfo*                                   PZone;                                                    // (Parm)
};

// Function Engine.HUD.LocalizedMessage
struct AHUD_LocalizedMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     CriticalString;                                           // (OptionalParm, Parm, NeedCtorLink)
};

// Function Engine.HUD.DisplayPortrait
struct AHUD_DisplayPortrait_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
};

// Function Engine.HUD.Message
struct AHUD_Message_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       MsgType;                                                  // (Parm)
};

// Function Engine.HUD.DisplayBadConnectionAlert
struct AHUD_DisplayBadConnectionAlert_Params
{
};

// Function Engine.HUD.DrawLevelAction
struct AHUD_DrawLevelAction_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.HUD.DisplayProgressMessage
struct AHUD_DisplayProgressMessage_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function Engine.HUD.PrintActionMessage
struct AHUD_PrintActionMessage_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	struct FString                                     BigMessage;                                               // (Parm, NeedCtorLink)
};

// Function Engine.HUD.DrawHUD
struct AHUD_DrawHUD_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.HUD.DrawRoute
struct AHUD_DrawRoute_Params
{
};

// Function Engine.HUD.DrawSpectatingHud
struct AHUD_DrawSpectatingHud_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function Engine.HUD.PostRender
struct AHUD_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.HUD.CopyMessage
struct AHUD_CopyMessage_Params
{
	struct FHUDLocalizedMessage                        M1;                                                       // (Parm, OutParm, NeedCtorLink)
	struct FHUDLocalizedMessage                        M2;                                                       // (Parm, NeedCtorLink)
};

// Function Engine.HUD.ClearMessage
struct AHUD_ClearMessage_Params
{
	struct FHUDLocalizedMessage                        M;                                                        // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.HUD.PlayStartupMessage
struct AHUD_PlayStartupMessage_Params
{
	unsigned char                                      Stage;                                                    // (Parm)
};

// Function Engine.HUD.ShowUpgradeMenu
struct AHUD_ShowUpgradeMenu_Params
{
};

// Function Engine.HUD.ConnectFailure
struct AHUD_ConnectFailure_Params
{
	struct FString                                     FailCode;                                                 // (Parm, NeedCtorLink)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.HUD.CheckCountdown
struct AHUD_CheckCountdown_Params
{
	class AGameReplicationInfo*                        GRI;                                                      // (Parm)
};

// Function Engine.HUD.WorldSpaceOverlays
struct AHUD_WorldSpaceOverlays_Params
{
};

// Function Engine.HUD.ShowDebug
struct AHUD_ShowDebug_Params
{
};

// Function Engine.HUD.ShowScores
struct AHUD_ShowScores_Params
{
};

// Function Engine.HUD.Destroyed
struct AHUD_Destroyed_Params
{
};

// Function Engine.HUD.SpawnScoreBoard
struct AHUD_SpawnScoreBoard_Params
{
	class UClass*                                      ScoringType;                                              // (Parm)
};

// Function Engine.HUD.PostBeginPlay
struct AHUD_PostBeginPlay_Params
{
};

// Function Engine.HUD.Draw3DLine
struct AHUD_Draw3DLine_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	struct FColor                                      LineColor;                                                // (Parm)
};

// Function Engine.WarpZoneMarker.SpecialHandling
struct AWarpZoneMarker_SpecialHandling_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.WarpZoneMarker.FindTriggerActor
struct AWarpZoneMarker_FindTriggerActor_Params
{
};

// Function Engine.WarpZoneMarker.PostBeginPlay
struct AWarpZoneMarker_PostBeginPlay_Params
{
};

// Function Engine.Trigger.UnTouch
struct ATrigger_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Trigger.TakeDamage
struct ATrigger_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.Trigger.Timer
struct ATrigger_Timer_Params
{
};

// Function Engine.Trigger.Touch
struct ATrigger_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Trigger.IsRelevant
struct ATrigger_IsRelevant_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Trigger.CheckTouchList
struct ATrigger_CheckTouchList_Params
{
};

// Function Engine.Trigger.SpecialHandling
struct ATrigger_SpecialHandling_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Trigger.FindTriggerActor
struct ATrigger_FindTriggerActor_Params
{
};

// Function Engine.Trigger.Reset
struct ATrigger_Reset_Params
{
};

// Function Engine.Trigger.PostBeginPlay
struct ATrigger_PostBeginPlay_Params
{
};

// Function Engine.Trigger.PreBeginPlay
struct ATrigger_PreBeginPlay_Params
{
};

// Function Engine.InventorySpot.DetourWeight
struct AInventorySpot_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.InventorySpot.GetMoveTargetFor
struct AInventorySpot_GetMoveTargetFor_Params
{
	class AAIController*                               B;                                                        // (Parm)
	float                                              MaxWait;                                                  // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Teleporter.SpecialHandling
struct ATeleporter_SpecialHandling_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Teleporter.PostTouch
struct ATeleporter_PostTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Teleporter.Touch
struct ATeleporter_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Teleporter.Trigger
struct ATeleporter_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Teleporter.Accept
struct ATeleporter_Accept_Params
{
	class AActor*                                      Incoming;                                                 // (Parm)
	class AActor*                                      Source;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Teleporter.FindTriggerActor
struct ATeleporter_FindTriggerActor_Params
{
};

// Function Engine.Teleporter.PostBeginPlay
struct ATeleporter_PostBeginPlay_Params
{
};

// Function Engine.ZoneInfo.ActorLeaving
struct AZoneInfo_ActorLeaving_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.ZoneInfo.ActorEntered
struct AZoneInfo_ActorEntered_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.ZoneInfo.PreBeginPlay
struct AZoneInfo_PreBeginPlay_Params
{
};

// Function Engine.ZoneInfo.LinkToSkybox
struct AZoneInfo_LinkToSkybox_Params
{
};

// Function Engine.ZoneInfo.ZoneActors
struct AZoneInfo_ZoneActors_Params
{
	class UClass*                                      BaseClass;                                                // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm)
};

// Function Engine.WarpZoneInfo.ActorLeaving
struct AWarpZoneInfo_ActorLeaving_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.WarpZoneInfo.ActorEntered
struct AWarpZoneInfo_ActorEntered_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.WarpZoneInfo.ForceGenerate
struct AWarpZoneInfo_ForceGenerate_Params
{
};

// Function Engine.WarpZoneInfo.Generate
struct AWarpZoneInfo_Generate_Params
{
};

// Function Engine.WarpZoneInfo.Trigger
struct AWarpZoneInfo_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.WarpZoneInfo.PreBeginPlay
struct AWarpZoneInfo_PreBeginPlay_Params
{
};

// Function Engine.WarpZoneInfo.UnWarp
struct AWarpZoneInfo_UnWarp_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm)
	struct FVector                                     Vel;                                                      // (Parm, OutParm)
	struct FRotator                                    R;                                                        // (Parm, OutParm)
};

// Function Engine.WarpZoneInfo.Warp
struct AWarpZoneInfo_Warp_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm)
	struct FVector                                     Vel;                                                      // (Parm, OutParm)
	struct FRotator                                    R;                                                        // (Parm, OutParm)
};

// Function Engine.Projectile.GetTossVelocity
struct AProjectile_GetTossVelocity_Params
{
	class APawn*                                       P;                                                        // (Parm)
	struct FRotator                                    R;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Projectile.RandSpin
struct AProjectile_RandSpin_Params
{
	float                                              spinRate;                                                 // (Parm)
};

// Function Engine.Projectile.Explode
struct AProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Engine.Projectile.BlowUp
struct AProjectile_BlowUp_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Engine.Projectile.HitWall
struct AProjectile_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
};

// Function Engine.Projectile.ProcessTouch
struct AProjectile_ProcessTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Engine.Projectile.Touch
struct AProjectile_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Projectile.EncroachingOn
struct AProjectile_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Decoration.Bump
struct ADecoration_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.Decoration.Timer
struct ADecoration_Timer_Params
{
};

// Function Engine.Decoration.Destroyed
struct ADecoration_Destroyed_Params
{
};

// Function Engine.Decoration.BaseChange
struct ADecoration_BaseChange_Params
{
};

// Function Engine.Decoration.Trigger
struct ADecoration_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Decoration.PhysicsVolumeChange
struct ADecoration_PhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function Engine.Decoration.TakeDamage
struct ADecoration_TakeDamage_Params
{
	int                                                NDamage;                                                  // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.Decoration.HitWall
struct ADecoration_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
};

// Function Engine.Decoration.Landed
struct ADecoration_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Engine.Decoration.Drop
struct ADecoration_Drop_Params
{
	struct FVector                                     newVel;                                                   // (Parm)
};

// Function Engine.Decoration.CanSplash
struct ADecoration_CanSplash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Scout.PreBeginPlay
struct AScout_PreBeginPlay_Params
{
};

// Function Engine.GameInfo.AdminSay
struct AGameInfo_AdminSay_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.GameInfo.KillBots
struct AGameInfo_KillBots_Params
{
	int                                                Num;                                                      // (Parm)
};

// Function Engine.GameInfo.OtherTeam
struct AGameInfo_OtherTeam_Params
{
	class ATeamInfo*                                   Requester;                                                // (Parm)
	class ATeamInfo*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.ReviewJumpSpots
struct AGameInfo_ReviewJumpSpots_Params
{
	struct FName                                       TestLabel;                                                // (Parm)
};

// Function Engine.GameInfo.ParseMessageString
struct AGameInfo_ParseMessageString_Params
{
	class AMutator*                                    BaseMutator;                                              // (Parm)
	class AController*                                 Who;                                                      // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.FindTeamDesignation
struct AGameInfo_FindTeamDesignation_Params
{
	class AGameReplicationInfo*                        GRI;                                                      // (Parm)
	class AActor*                                      A;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.TooManyBots
struct AGameInfo_TooManyBots_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.ScoreKill
struct AGameInfo_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
};

// Function Engine.GameInfo.CheckScore
struct AGameInfo_CheckScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
};

// Function Engine.GameInfo.ScoreObjective
struct AGameInfo_ScoreObjective_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	int                                                Score;                                                    // (Parm)
};

// Function Engine.GameInfo.RatePlayerStart
struct AGameInfo_RatePlayerStart_Params
{
	class ANavigationPoint*                            N;                                                        // (Parm)
	unsigned char                                      Team;                                                     // (Parm)
	class AController*                                 Player;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.FindPlayerStart
struct AGameInfo_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	struct FString                                     incomingName;                                             // (OptionalParm, Parm, NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.EndLogging
struct AGameInfo_EndLogging_Params
{
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.GameInfo.EndGame
struct AGameInfo_EndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.GameInfo.CheckEndGame
struct AGameInfo_CheckEndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.BroadcastLocalized
struct AGameInfo_BroadcastLocalized_Params
{
	class AActor*                                      Sender;                                                   // (Parm)
	class UClass*                                      Message;                                                  // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.GameInfo.BroadcastTeam
struct AGameInfo_BroadcastTeam_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.GameInfo.Broadcast
struct AGameInfo_Broadcast_Params
{
	class AActor*                                      Sender;                                                   // (Parm)
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.GameInfo.GetMapList
struct AGameInfo_GetMapList_Params
{
	struct FString                                     MapListType;                                              // (Parm, NeedCtorLink)
	class AMapList*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.RestartGame
struct AGameInfo_RestartGame_Params
{
};

// Function Engine.GameInfo.SendPlayer
struct AGameInfo_SendPlayer_Params
{
	class APlayerController*                           aPlayer;                                                  // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.GameInfo.PickTeam
struct AGameInfo_PickTeam_Params
{
	unsigned char                                      Current;                                                  // (Parm)
	class AController*                                 C;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.ChangeTeam
struct AGameInfo_ChangeTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
	int                                                N;                                                        // (Parm)
	bool                                               bNewTeam;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.ChangeName
struct AGameInfo_ChangeName_Params
{
	class AController*                                 Other;                                                    // (Parm)
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bNameChange;                                              // (Parm)
};

// Function Engine.GameInfo.DiscardInventory
struct AGameInfo_DiscardInventory_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.GameInfo.PickupQuery
struct AGameInfo_PickupQuery_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class APickup*                                     item;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.ShouldRespawn
struct AGameInfo_ShouldRespawn_Params
{
	class APickup*                                     Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.ReduceDamage
struct AGameInfo_ReduceDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       injured;                                                  // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.CanSpectate
struct AGameInfo_CanSpectate_Params
{
	class APlayerController*                           Viewer;                                                   // (Parm)
	bool                                               bOnlySpectator;                                           // (Parm)
	class AActor*                                      ViewTarget;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.IsOnTeam
struct AGameInfo_IsOnTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
	int                                                TeamNum;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.KickBan
struct AGameInfo_KickBan_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.GameInfo.Kick
struct AGameInfo_Kick_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.GameInfo.ParseKillMessage
struct AGameInfo_ParseKillMessage_Params
{
	struct FString                                     KillerName;                                               // (Parm, NeedCtorLink)
	struct FString                                     VictimName;                                               // (Parm, NeedCtorLink)
	struct FString                                     DeathMessage;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.BroadcastDeathMessage
struct AGameInfo_BroadcastDeathMessage_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.GameInfo.PreventDeath
struct AGameInfo_PreventDeath_Params
{
	class APawn*                                       Killed;                                                   // (Parm)
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.Killed
struct AGameInfo_Killed_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.GameInfo.NotifyKilled
struct AGameInfo_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
};

// Function Engine.GameInfo.SetPlayerDefaults
struct AGameInfo_SetPlayerDefaults_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm)
};

// Function Engine.GameInfo.AddDefaultInventory
struct AGameInfo_AddDefaultInventory_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm)
};

// Function Engine.GameInfo.AddGameSpecificInventory
struct AGameInfo_AddGameSpecificInventory_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.GameInfo.AcceptInventory
struct AGameInfo_AcceptInventory_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm)
};

// Function Engine.GameInfo.Logout
struct AGameInfo_Logout_Params
{
	class AController*                                 Exiting;                                                  // (Parm)
};

// Function Engine.GameInfo.L2NetPostLogin
struct AGameInfo_L2NetPostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm)
};

// Function Engine.GameInfo.PostLogin
struct AGameInfo_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm)
};

// Function Engine.GameInfo.GetDefaultPlayerClass
struct AGameInfo_GetDefaultPlayerClass_Params
{
	class AController*                                 C;                                                        // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.RestartPlayer
struct AGameInfo_RestartPlayer_Params
{
	class AController*                                 aPlayer;                                                  // (Parm)
};

// Function Engine.GameInfo.SpawnPlayerPawn
struct AGameInfo_SpawnPlayerPawn_Params
{
	class AController*                                 aPlayer;                                                  // (Parm)
	struct FString                                     PawnClassName;                                            // (Parm, NeedCtorLink)
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FRotator                                    StartRotation;                                            // (Parm)
};

// Function Engine.GameInfo.SpawnDefaultPlayerPawn
struct AGameInfo_SpawnDefaultPlayerPawn_Params
{
	class AController*                                 aPlayer;                                                  // (Parm)
};

// Function Engine.GameInfo.L2NetStartMatch
struct AGameInfo_L2NetStartMatch_Params
{
};

// Function Engine.GameInfo.StartMatch
struct AGameInfo_StartMatch_Params
{
};

// Function Engine.GameInfo.L2NetLogin
struct AGameInfo_L2NetLogin_Params
{
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Error;                                                    // (Parm, OutParm, NeedCtorLink)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.Login
struct AGameInfo_Login_Params
{
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Error;                                                    // (Parm, OutParm, NeedCtorLink)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.AtCapacity
struct AGameInfo_AtCapacity_Params
{
	bool                                               bSpectator;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.GetIntOption
struct AGameInfo_GetIntOption_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ParseString;                                              // (Parm, NeedCtorLink)
	int                                                CurrentValue;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.PreLogin
struct AGameInfo_PreLogin_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Address;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Error;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FailCode;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameInfo.ProcessServerTravel
struct AGameInfo_ProcessServerTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bItems;                                                   // (Parm)
};

// Function Engine.GameInfo.GetBeaconText
struct AGameInfo_GetBeaconText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.AddMutator
struct AGameInfo_AddMutator_Params
{
	struct FString                                     mutname;                                                  // (Parm, NeedCtorLink)
	bool                                               bUserAdded;                                               // (OptionalParm, Parm)
};

// Function Engine.GameInfo.InitGame
struct AGameInfo_InitGame_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Error;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameInfo.ParseOption
struct AGameInfo_ParseOption_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     InKey;                                                    // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.GetKeyValue
struct AGameInfo_GetKeyValue_Params
{
	struct FString                                     Pair;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameInfo.GrabOption
struct AGameInfo_GrabOption_Params
{
	struct FString                                     Options;                                                  // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Result;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.DetailChange
struct AGameInfo_DetailChange_Params
{
};

// Function Engine.GameInfo.SetGameSpeed
struct AGameInfo_SetGameSpeed_Params
{
	float                                              t;                                                        // (Parm)
};

// Function Engine.GameInfo.ChangeVoiceChatter
struct AGameInfo_ChangeVoiceChatter_Params
{
	class AController*                                 Client;                                                   // (Parm)
	int                                                IpAddr;                                                   // (Parm)
	int                                                Handle;                                                   // (Parm)
	bool                                               Add;                                                      // (Parm)
};

// Function Engine.GameInfo.SetPause
struct AGameInfo_SetPause_Params
{
	bool                                               bPause;                                                   // (Parm)
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.GetServerPort
struct AGameInfo_GetServerPort_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.GetServerPlayers
struct AGameInfo_GetServerPlayers_Params
{
	struct FServerResponseLine                         ServerState;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameInfo.GetServerDetails
struct AGameInfo_GetServerDetails_Params
{
	struct FServerResponseLine                         ServerState;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameInfo.GetNumPlayers
struct AGameInfo_GetNumPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.GetServerInfo
struct AGameInfo_GetServerInfo_Params
{
	struct FServerResponseLine                         ServerState;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.GameInfo.GetNetworkNumber
struct AGameInfo_GetNetworkNumber_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.InitGameReplicationInfo
struct AGameInfo_InitGameReplicationInfo_Params
{
};

// Function Engine.GameInfo.GameEnding
struct AGameInfo_GameEnding_Params
{
};

// Function Engine.GameInfo.Timer
struct AGameInfo_Timer_Params
{
};

// Function Engine.GameInfo.InitLogging
struct AGameInfo_InitLogging_Params
{
};

// Function Engine.GameInfo.Reset
struct AGameInfo_Reset_Params
{
};

// Function Engine.GameInfo.PostBeginPlay
struct AGameInfo_PostBeginPlay_Params
{
};

// Function Engine.GameInfo.UseLowGore
struct AGameInfo_UseLowGore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameInfo.FindPlayerByID
struct AGameInfo_FindPlayerByID_Params
{
	int                                                PlayerID;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameInfo.PrecacheGameStaticMeshes
struct AGameInfo_PrecacheGameStaticMeshes_Params
{
	class ALevelInfo*                                  myLevel;                                                  // (Parm)
};

// Function Engine.GameInfo.PrecacheGameTextures
struct AGameInfo_PrecacheGameTextures_Params
{
	class ALevelInfo*                                  myLevel;                                                  // (Parm)
};

// Function Engine.GameInfo.UpdatePrecacheStaticMeshes
struct AGameInfo_UpdatePrecacheStaticMeshes_Params
{
};

// Function Engine.GameInfo.UpdatePrecacheMaterials
struct AGameInfo_UpdatePrecacheMaterials_Params
{
};

// Function Engine.GameInfo.PreBeginPlay
struct AGameInfo_PreBeginPlay_Params
{
};

// Function Engine.LevelInfo.GetLocalPlayerController
struct ALevelInfo_GetLocalPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LevelInfo.PreBeginPlay
struct ALevelInfo_PreBeginPlay_Params
{
};

// Function Engine.LevelInfo.Reset
struct ALevelInfo_Reset_Params
{
};

// Function Engine.LevelInfo.ThisIsNeverExecuted
struct ALevelInfo_ThisIsNeverExecuted_Params
{
};

// Function Engine.LevelInfo.ServerTravel
struct ALevelInfo_ServerTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bItems;                                                   // (Parm)
};

// Function Engine.LevelInfo.GetAddressURL
struct ALevelInfo_GetAddressURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.LevelInfo.IsDemoBuild
struct ALevelInfo_IsDemoBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LevelInfo.GetLocalURL
struct ALevelInfo_GetLocalURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.LevelInfo.AddPrecacheStaticMesh
struct ALevelInfo_AddPrecacheStaticMesh_Params
{
	class UStaticMesh*                                 stat;                                                     // (Parm)
};

// Function Engine.LevelInfo.AddPrecacheMaterial
struct ALevelInfo_AddPrecacheMaterial_Params
{
	class UMaterial*                                   mat;                                                      // (Parm)
};

// Function Engine.LevelInfo.FillPrecacheStaticMeshesArray
struct ALevelInfo_FillPrecacheStaticMeshesArray_Params
{
};

// Function Engine.LevelInfo.FillPrecacheMaterialsArray
struct ALevelInfo_FillPrecacheMaterialsArray_Params
{
};

// Function Engine.LevelInfo.GetGameClass
struct ALevelInfo_GetGameClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LevelInfo.PostBeginPlay
struct ALevelInfo_PostBeginPlay_Params
{
};

// Function Engine.LevelInfo.IsEntry
struct ALevelInfo_IsEntry_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LevelInfo.DetailChange
struct ALevelInfo_DetailChange_Params
{
	TEnumAsByte<EDetailMode>                           NewDetailMode;                                            // (Parm)
};

// Function Engine.Weapon.zoom
struct AWeapon_zoom_Params
{
};

// Function Engine.Weapon.PlayIdleAnim
struct AWeapon_PlayIdleAnim_Params
{
};

// Function Engine.Weapon.PlayPostSelect
struct AWeapon_PlayPostSelect_Params
{
};

// Function Engine.Weapon.PlaySelect
struct AWeapon_PlaySelect_Params
{
};

// Function Engine.Weapon.PlayReloading
struct AWeapon_PlayReloading_Params
{
};

// Function Engine.Weapon.TweenDown
struct AWeapon_TweenDown_Params
{
};

// Function Engine.Weapon.PutDown
struct AWeapon_PutDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.BringUp
struct AWeapon_BringUp_Params
{
};

// Function Engine.Weapon.CheckAnimating
struct AWeapon_CheckAnimating_Params
{
};

// Function Engine.Weapon.ClientFinish
struct AWeapon_ClientFinish_Params
{
};

// Function Engine.Weapon.CauseAltFire
struct AWeapon_CauseAltFire_Params
{
};

// Function Engine.Weapon.SwitchToWeaponWithAmmo
struct AWeapon_SwitchToWeaponWithAmmo_Params
{
};

// Function Engine.Weapon.Finish
struct AWeapon_Finish_Params
{
};

// Function Engine.Weapon.IsIdle
struct AWeapon_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.BotFire
struct AWeapon_BotFire_Params
{
	bool                                               bFinished;                                                // (Parm)
	struct FName                                       FiringMode;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.NeedsToReload
struct AWeapon_NeedsToReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.TraceFire
struct AWeapon_TraceFire_Params
{
	float                                              Accuracy;                                                 // (Parm)
	float                                              YOffset;                                                  // (Parm)
	float                                              ZOffset;                                                  // (Parm)
};

// Function Engine.Weapon.ProjectileFire
struct AWeapon_ProjectileFire_Params
{
};

// Function Engine.Weapon.GetFireStart
struct AWeapon_GetFireStart_Params
{
	struct FVector                                     X;                                                        // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
	struct FVector                                     Z;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.PlayFiring
struct AWeapon_PlayFiring_Params
{
};

// Function Engine.Weapon.AltFire
struct AWeapon_AltFire_Params
{
	float                                              Value;                                                    // (Parm)
};

// Function Engine.Weapon.ServerAltFire
struct AWeapon_ServerAltFire_Params
{
};

// Function Engine.Weapon.LocalFire
struct AWeapon_LocalFire_Params
{
};

// Function Engine.Weapon.Fire
struct AWeapon_Fire_Params
{
	float                                              Value;                                                    // (Parm)
};

// Function Engine.Weapon.ServerFire
struct AWeapon_ServerFire_Params
{
};

// Function Engine.Weapon.ServerRapidFire
struct AWeapon_ServerRapidFire_Params
{
};

// Function Engine.Weapon.ServerStopFiring
struct AWeapon_ServerStopFiring_Params
{
};

// Function Engine.Weapon.RepeatFire
struct AWeapon_RepeatFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.DropFrom
struct AWeapon_DropFrom_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
};

// Function Engine.Weapon.RecommendWeapon
struct AWeapon_RecommendWeapon_Params
{
	float                                              rating;                                                   // (Parm, OutParm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.ClientWeaponSet
struct AWeapon_ClientWeaponSet_Params
{
	bool                                               bOptionalSet;                                             // (Parm)
};

// Function Engine.Weapon.SwitchPriority
struct AWeapon_SwitchPriority_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.GiveAmmo
struct AWeapon_GiveAmmo_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Weapon.AnimEnd
struct AWeapon_AnimEnd_Params
{
	int                                                Channel;                                                  // (Parm)
};

// Function Engine.Weapon.NextWeapon
struct AWeapon_NextWeapon_Params
{
	class AWeapon*                                     CurrentChoice;                                            // (Parm)
	class AWeapon*                                     CurrentWeapon;                                            // (Parm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.PrevWeapon
struct AWeapon_PrevWeapon_Params
{
	class AWeapon*                                     CurrentChoice;                                            // (Parm)
	class AWeapon*                                     CurrentWeapon;                                            // (Parm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.WeaponChange
struct AWeapon_WeaponChange_Params
{
	unsigned char                                      f;                                                        // (Parm)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.SetHand
struct AWeapon_SetHand_Params
{
	float                                              hand;                                                     // (Parm)
};

// Function Engine.Weapon.HandlePickupQuery
struct AWeapon_HandlePickupQuery_Params
{
	class APickup*                                     item;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.ClientWeaponEvent
struct AWeapon_ClientWeaponEvent_Params
{
	struct FName                                       EventType;                                                // (Parm)
};

// Function Engine.Weapon.SuggestDefenseStyle
struct AWeapon_SuggestDefenseStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.SuggestAttackStyle
struct AWeapon_SuggestAttackStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.GetAIRating
struct AWeapon_GetAIRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.RateSelf
struct AWeapon_RateSelf_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.GetRating
struct AWeapon_GetRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.SplashJump
struct AWeapon_SplashJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.HasAmmo
struct AWeapon_HasAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.AmmoStatus
struct AWeapon_AmmoStatus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.CanAttack
struct AWeapon_CanAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.DrawMuzzleFlash
struct AWeapon_DrawMuzzleFlash_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Weapon.DrawCrossHair
struct AWeapon_DrawCrossHair_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Weapon.RenderOverlays
struct AWeapon_RenderOverlays_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.Weapon.GiveTo
struct AWeapon_GiveTo_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.Weapon.Destroyed
struct AWeapon_Destroyed_Params
{
};

// Function Engine.Weapon.SetAITarget
struct AWeapon_SetAITarget_Params
{
	class AActor*                                      t;                                                        // (Parm)
};

// Function Engine.Weapon.TravelPostAccept
struct AWeapon_TravelPostAccept_Params
{
};

// Function Engine.Weapon.DisplayDebug
struct AWeapon_DisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function Engine.Weapon.ClientForceReload
struct AWeapon_ClientForceReload_Params
{
};

// Function Engine.Weapon.ServerForceReload
struct AWeapon_ServerForceReload_Params
{
};

// Function Engine.Weapon.ForceReload
struct AWeapon_ForceReload_Params
{
};

// Function Engine.Weapon.PostNetBeginPlay
struct AWeapon_PostNetBeginPlay_Params
{
};

// Function Engine.Weapon.IncrementFlashCount
struct AWeapon_IncrementFlashCount_Params
{
};

// Function Engine.Weapon.IsFiring
struct AWeapon_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.FireHack
struct AWeapon_FireHack_Params
{
	unsigned char                                      Mode;                                                     // (Parm)
};

// Function Engine.Weapon.RecommendSplashDamage
struct AWeapon_RecommendSplashDamage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.RefireRate
struct AWeapon_RefireRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.FocusOnLeader
struct AWeapon_FocusOnLeader_Params
{
	bool                                               bLeaderFiring;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.GetDamageRadius
struct AWeapon_GetDamageRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.SplashDamage
struct AWeapon_SplashDamage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.RecommendRangedAttack
struct AWeapon_RecommendRangedAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Weapon.RangedAttackTime
struct AWeapon_RangedAttackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.NProjectile.PreshotNotify
struct ANProjectile_PreshotNotify_Params
{
	class APawn*                                       Attacker;                                                 // (Parm)
};

// Function Engine.NProjectile.ShotNotify
struct ANProjectile_ShotNotify_Params
{
};

// Function Engine.KVehicle.Tick
struct AKVehicle_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Engine.KVehicle.Destroyed
struct AKVehicle_Destroyed_Params
{
};

// Function Engine.KVehicle.SpecialCalcView
struct AKVehicle_SpecialCalcView_Params
{
	class AActor*                                      ViewActor;                                                // (Parm, OutParm)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KVehicle.KDriverLeave
struct AKVehicle_KDriverLeave_Params
{
	bool                                               bForceLeave;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KVehicle.ClientKDriverLeave
struct AKVehicle_ClientKDriverLeave_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function Engine.KVehicle.KDriverEnter
struct AKVehicle_KDriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.KVehicle.ClientKDriverEnter
struct AKVehicle_ClientKDriverEnter_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function Engine.KVehicle.TryToDrive
struct AKVehicle_TryToDrive_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Engine.KVehicle.VehicleCeaseFire
struct AKVehicle_VehicleCeaseFire_Params
{
	bool                                               bWasAltFire;                                              // (Parm)
};

// Function Engine.KVehicle.VehicleFire
struct AKVehicle_VehicleFire_Params
{
	bool                                               bWasAltFire;                                              // (Parm)
};

// Function Engine.KVehicle.KVehicleUpdateParams
struct AKVehicle_KVehicleUpdateParams_Params
{
};

// Function Engine.KVehicle.VehicleStateReceived
struct AKVehicle_VehicleStateReceived_Params
{
};

// Function Engine.KVehicle.EncroachedBy
struct AKVehicle_EncroachedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.KVehicle.TakeDamage
struct AKVehicle_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.KVehicle.GraphData
struct AKVehicle_GraphData_Params
{
	struct FString                                     DataName;                                                 // (Parm, NeedCtorLink)
	float                                              DataValue;                                                // (Parm)
};

// Function Engine.KActor.KImpact
struct AKActor_KImpact_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     pos;                                                      // (Parm)
	struct FVector                                     impactVel;                                                // (Parm)
	struct FVector                                     impactNorm;                                               // (Parm)
};

// Function Engine.KActor.Trigger
struct AKActor_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.KActor.TakeDamage
struct AKActor_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.KTire.TakeDamage
struct AKTire_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.KTire.KUpdateState
struct AKTire_KUpdateState_Params
{
	struct FKRigidBodyState                            NewState;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KConstraint.KForceExceed
struct AKConstraint_KForceExceed_Params
{
	float                                              forceMag;                                                 // (Parm)
};

// Function Engine.KConstraint.KGetConstraintTorque
struct AKConstraint_KGetConstraintTorque_Params
{
	struct FVector                                     Torque;                                                   // (Parm, OutParm)
};

// Function Engine.KConstraint.KGetConstraintForce
struct AKConstraint_KGetConstraintForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, OutParm)
};

// Function Engine.KConstraint.KUpdateConstraintParams
struct AKConstraint_KUpdateConstraintParams_Params
{
};

// Function Engine.StatLog.LogGameEnd
struct AStatLog_LogGameEnd_Params
{
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.StatLog.LogGameStart
struct AStatLog_LogGameStart_Params
{
};

// Function Engine.StatLog.LogPings
struct AStatLog_LogPings_Params
{
};

// Function Engine.StatLog.LogSpecialEvent
struct AStatLog_LogSpecialEvent_Params
{
	struct FString                                     EventType;                                                // (Parm, NeedCtorLink)
	struct FString                                     Arg1;                                                     // (OptionalParm, Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Arg2;                                                     // (OptionalParm, Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Arg3;                                                     // (OptionalParm, Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Arg4;                                                     // (OptionalParm, Parm, CoerceParm, NeedCtorLink)
};

// Function Engine.StatLog.LogItemDeactivate
struct AStatLog_LogItemDeactivate_Params
{
	class AInventory*                                  item;                                                     // (Parm)
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.StatLog.LogItemActivate
struct AStatLog_LogItemActivate_Params
{
	class AInventory*                                  item;                                                     // (Parm)
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.StatLog.LogPickup
struct AStatLog_LogPickup_Params
{
	class APickup*                                     item;                                                     // (Parm)
	class APawn*                                       Other;                                                    // (Parm)
};

// Function Engine.StatLog.LogTypingEvent
struct AStatLog_LogTypingEvent_Params
{
	bool                                               bTyping;                                                  // (Parm)
	class AController*                                 Other;                                                    // (Parm)
};

// Function Engine.StatLog.LogTeamChange
struct AStatLog_LogTeamChange_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function Engine.StatLog.LogNameChange
struct AStatLog_LogNameChange_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function Engine.StatLog.LogKill
struct AStatLog_LogKill_Params
{
	class APlayerReplicationInfo*                      KillerPRI;                                                // (Parm)
	class APlayerReplicationInfo*                      VictimPRI;                                                // (Parm)
	struct FString                                     KillerWeaponName;                                         // (Parm, NeedCtorLink)
	struct FString                                     VictimWeaponName;                                         // (Parm, NeedCtorLink)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function Engine.StatLog.LogPlayerDisconnect
struct AStatLog_LogPlayerDisconnect_Params
{
	class AController*                                 Player;                                                   // (Parm)
};

// Function Engine.StatLog.LogPlayerInfo
struct AStatLog_LogPlayerInfo_Params
{
	class AController*                                 Player;                                                   // (Parm)
};

// Function Engine.StatLog.LogPlayerConnect
struct AStatLog_LogPlayerConnect_Params
{
	class AController*                                 Player;                                                   // (Parm)
	struct FString                                     Checksum;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function Engine.StatLog.LogMapParameters
struct AStatLog_LogMapParameters_Params
{
};

// Function Engine.StatLog.GetMapFileName
struct AStatLog_GetMapFileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLog.LogGameSpecial2
struct AStatLog_LogGameSpecial2_Params
{
	struct FString                                     SpecialID;                                                // (Parm, NeedCtorLink)
	struct FString                                     SpecialParam;                                             // (Parm, NeedCtorLink)
	struct FString                                     SpecialParam2;                                            // (Parm, NeedCtorLink)
};

// Function Engine.StatLog.LogGameSpecial
struct AStatLog_LogGameSpecial_Params
{
	struct FString                                     SpecialID;                                                // (Parm, NeedCtorLink)
	struct FString                                     SpecialParam;                                             // (Parm, NeedCtorLink)
};

// Function Engine.StatLog.LogServerInfo
struct AStatLog_LogServerInfo_Params
{
};

// Function Engine.StatLog.LogStandardInfo
struct AStatLog_LogStandardInfo_Params
{
};

// Function Engine.StatLog.Tick
struct AStatLog_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function Engine.StatLog.GetLocalLogFileName
struct AStatLog_GetLocalLogFileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLog.GetTimeStamp
struct AStatLog_GetTimeStamp_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLog.GetShortAbsoluteTime
struct AStatLog_GetShortAbsoluteTime_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLog.GetAbsoluteTime
struct AStatLog_GetAbsoluteTime_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLog.GetGMTRef
struct AStatLog_GetGMTRef_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLog.GetPlayerChecksum
struct AStatLog_GetPlayerChecksum_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	struct FString                                     Checksum;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.StatLog.LogMutator
struct AStatLog_LogMutator_Params
{
	class AMutator*                                    M;                                                        // (Parm)
};

// Function Engine.StatLog.InitialCheck
struct AStatLog_InitialCheck_Params
{
	class AGameInfo*                                   Game;                                                     // (Parm)
};

// Function Engine.StatLog.BrowseRelativeLocalURL
struct AStatLog_BrowseRelativeLocalURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.StatLog.ExecuteWorldLogBatcher
struct AStatLog_ExecuteWorldLogBatcher_Params
{
};

// Function Engine.StatLog.BatchLocal
struct AStatLog_BatchLocal_Params
{
};

// Function Engine.StatLog.ExecuteSilentLogBatcher
struct AStatLog_ExecuteSilentLogBatcher_Params
{
};

// Function Engine.StatLog.ExecuteLocalLogBatcher
struct AStatLog_ExecuteLocalLogBatcher_Params
{
};

// Function Engine.StatLog.LogWorldEventString
struct AStatLog_LogWorldEventString_Params
{
	struct FString                                     EventString;                                              // (Parm, NeedCtorLink)
};

// Function Engine.StatLog.LogEventString
struct AStatLog_LogEventString_Params
{
	struct FString                                     EventString;                                              // (Parm, NeedCtorLink)
};

// Function Engine.StatLog.FlushLog
struct AStatLog_FlushLog_Params
{
};

// Function Engine.StatLog.StopLog
struct AStatLog_StopLog_Params
{
};

// Function Engine.StatLog.StartLog
struct AStatLog_StartLog_Params
{
};

// Function Engine.StatLog.GenerateLogs
struct AStatLog_GenerateLogs_Params
{
	bool                                               bLogLocal;                                                // (Parm)
	bool                                               bLogWorld;                                                // (Parm)
};

// Function Engine.StatLog.Timer
struct AStatLog_Timer_Params
{
};

// Function Engine.StatLog.Destroyed
struct AStatLog_Destroyed_Params
{
};

// Function Engine.StatLog.BeginPlay
struct AStatLog_BeginPlay_Params
{
};

// Function Engine.StatLogFile.LogGameEnd
struct AStatLogFile_LogGameEnd_Params
{
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.StatLogFile.LogPlayerConnect
struct AStatLogFile_LogPlayerConnect_Params
{
	class AController*                                 Player;                                                   // (Parm)
	struct FString                                     Checksum;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function Engine.StatLogFile.GetLocalLogFileName
struct AStatLogFile_GetLocalLogFileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.StatLogFile.LogWorldEventString
struct AStatLogFile_LogWorldEventString_Params
{
	struct FString                                     EventString;                                              // (Parm, NeedCtorLink)
};

// Function Engine.StatLogFile.LogEventString
struct AStatLogFile_LogEventString_Params
{
	struct FString                                     EventString;                                              // (Parm, NeedCtorLink)
};

// Function Engine.StatLogFile.FlushLog
struct AStatLogFile_FlushLog_Params
{
};

// Function Engine.StatLogFile.StopLog
struct AStatLogFile_StopLog_Params
{
};

// Function Engine.StatLogFile.StartLog
struct AStatLogFile_StartLog_Params
{
};

// Function Engine.StatLogFile.FileLog
struct AStatLogFile_FileLog_Params
{
	struct FString                                     EventString;                                              // (Parm, NeedCtorLink)
};

// Function Engine.StatLogFile.FileFlush
struct AStatLogFile_FileFlush_Params
{
};

// Function Engine.StatLogFile.GetChecksum
struct AStatLogFile_GetChecksum_Params
{
	struct FString                                     Checksum;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function Engine.StatLogFile.Watermark
struct AStatLogFile_Watermark_Params
{
	struct FString                                     EventString;                                              // (Parm, NeedCtorLink)
};

// Function Engine.StatLogFile.CloseLog
struct AStatLogFile_CloseLog_Params
{
};

// Function Engine.StatLogFile.OpenLog
struct AStatLogFile_OpenLog_Params
{
};

// Function Engine.GameStats.GameEvent
struct AGameStats_GameEvent_Params
{
	struct FString                                     GEvent;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
	class APlayerReplicationInfo*                      Who;                                                      // (Parm)
};

// Function Engine.GameStats.SpecialEvent
struct AGameStats_SpecialEvent_Params
{
	class APlayerReplicationInfo*                      Who;                                                      // (Parm)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.GameStats.KillEvent
struct AGameStats_KillEvent_Params
{
	struct FString                                     KillType;                                                 // (Parm, NeedCtorLink)
	class APlayerReplicationInfo*                      Killer;                                                   // (Parm)
	class APlayerReplicationInfo*                      Victim;                                                   // (Parm)
	class UClass*                                      Damage;                                                   // (Parm)
};

// Function Engine.GameStats.TeamScoreEvent
struct AGameStats_TeamScoreEvent_Params
{
	int                                                Team;                                                     // (Parm)
	float                                              Points;                                                   // (Parm)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.GameStats.ScoreEvent
struct AGameStats_ScoreEvent_Params
{
	class APlayerReplicationInfo*                      Who;                                                      // (Parm)
	float                                              Points;                                                   // (Parm)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
};

// Function Engine.GameStats.DisconnectEvent
struct AGameStats_DisconnectEvent_Params
{
	class APlayerReplicationInfo*                      Who;                                                      // (Parm)
};

// Function Engine.GameStats.ConnectEvent
struct AGameStats_ConnectEvent_Params
{
	class APlayerReplicationInfo*                      Who;                                                      // (Parm)
};

// Function Engine.GameStats.EndGame
struct AGameStats_EndGame_Params
{
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function Engine.GameStats.StartGame
struct AGameStats_StartGame_Params
{
};

// Function Engine.GameStats.ServerInfo
struct AGameStats_ServerInfo_Params
{
};

// Function Engine.GameStats.NewGame
struct AGameStats_NewGame_Params
{
};

// Function Engine.GameStats.MapName
struct AGameStats_MapName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameStats.TimeZone
struct AGameStats_TimeZone_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameStats.FullTimeDate
struct AGameStats_FullTimeDate_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameStats.Header
struct AGameStats_Header_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameStats.TimeStamp
struct AGameStats_TimeStamp_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameStats.Destroyed
struct AGameStats_Destroyed_Params
{
};

// Function Engine.GameStats.PostBeginPlay
struct AGameStats_PostBeginPlay_Params
{
};

// Function Engine.GameStats.Logf
struct AGameStats_Logf_Params
{
	struct FString                                     LogString;                                                // (Parm, NeedCtorLink)
};

// Function Engine.GameStats.Shutdown
struct AGameStats_Shutdown_Params
{
};

// Function Engine.GameStats.Init
struct AGameStats_Init_Params
{
};

// Function Engine.GameStats.GetMapFileName
struct AGameStats_GetMapFileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameStats.GetStatsIdentifier
struct AGameStats_GetStatsIdentifier_Params
{
	class AController*                                 C;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.FileLog.Destroyed
struct AFileLog_Destroyed_Params
{
};

// Function Engine.FileLog.Logf
struct AFileLog_Logf_Params
{
	struct FString                                     LogString;                                                // (Parm, NeedCtorLink)
};

// Function Engine.FileLog.CloseLog
struct AFileLog_CloseLog_Params
{
};

// Function Engine.FileLog.OpenLog
struct AFileLog_OpenLog_Params
{
	struct FString                                     FName;                                                    // (Parm, NeedCtorLink)
};

// Function Engine.LocalMessage.GetLifeTime
struct ALocalMessage_GetLifeTime_Params
{
	int                                                Switch;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LocalMessage.GetFontSize
struct ALocalMessage_GetFontSize_Params
{
	int                                                Switch;                                                   // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI1;                                              // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI2;                                              // (Parm)
	class APlayerReplicationInfo*                      LocalPlayer;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LocalMessage.GetOffset
struct ALocalMessage_GetOffset_Params
{
	int                                                Switch;                                                   // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              ClipY;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LocalMessage.GetColor
struct ALocalMessage_GetColor_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LocalMessage.GetConsoleColor
struct ALocalMessage_GetConsoleColor_Params
{
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.LocalMessage.ClientReceive
struct ALocalMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.LocalMessage.AssembleString
struct ALocalMessage_AssembleString_Params
{
	class AHUD*                                        myHUD;                                                    // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	struct FString                                     MessageString;                                            // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.LocalMessage.GetString
struct ALocalMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.LocalMessage.GetRelatedString
struct ALocalMessage_GetRelatedString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.LocalMessage.RenderComplexMessage
struct ALocalMessage_RenderComplexMessage_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              XL;                                                       // (Parm, OutParm)
	float                                              YL;                                                       // (Parm, OutParm)
	struct FString                                     MessageString;                                            // (OptionalParm, Parm, NeedCtorLink)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.ObjectPool.Shrink
struct UObjectPool_Shrink_Params
{
};

// Function Engine.ObjectPool.FreeObject
struct UObjectPool_FreeObject_Params
{
	class UObject*                                     Obj;                                                      // (Parm)
};

// Function Engine.ObjectPool.AllocateObject
struct UObjectPool_AllocateObject_Params
{
	class UClass*                                      ObjectClass;                                              // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.VoicePack.PickRandomTauntFor
struct AVoicePack_PickRandomTauntFor_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bNoMature;                                                // (Parm)
	bool                                               bNoHumanOnly;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.VoicePack.GetMessageIndex
struct AVoicePack_GetMessageIndex_Params
{
	struct FName                                       PhraseName;                                               // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.VoicePack.PlayerSpeech
struct AVoicePack_PlayerSpeech_Params
{
	struct FName                                       type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	struct FString                                     Callsign;                                                 // (Parm, NeedCtorLink)
	class AActor*                                      PackOwner;                                                // (Parm)
};

// Function Engine.VoicePack.ClientInitialize
struct AVoicePack_ClientInitialize_Params
{
	class APlayerReplicationInfo*                      Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       messagetype;                                              // (Parm)
	unsigned char                                      messageIndex;                                             // (Parm)
};

// Function Engine.ScoreBoard.SortPRIArray
struct AScoreBoard_SortPRIArray_Params
{
};

// Function Engine.ScoreBoard.InOrder
struct AScoreBoard_InOrder_Params
{
	class APlayerReplicationInfo*                      P1;                                                       // (Parm)
	class APlayerReplicationInfo*                      P2;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ScoreBoard.UpdateScoreBoard
struct AScoreBoard_UpdateScoreBoard_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function Engine.ScoreBoard.FormatTime
struct AScoreBoard_FormatTime_Params
{
	int                                                Seconds;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.ScoreBoard.UpdateGRI
struct AScoreBoard_UpdateGRI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ScoreBoard.DrawScoreboard
struct AScoreBoard_DrawScoreboard_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function Engine.ScoreBoard.Init
struct AScoreBoard_Init_Params
{
};

// Function Engine.ScoreBoard.InitTitle
struct AScoreBoard_InitTitle_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.ScoreBoard.InitGRI
struct AScoreBoard_InitGRI_Params
{
};

// Function Engine.ScoreBoard.GetSmallFontFor
struct AScoreBoard_GetSmallFontFor_Params
{
	int                                                ScreenWidth;                                              // (Parm)
	int                                                offset;                                                   // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ScoreBoard.HaveHalfFont
struct AScoreBoard_HaveHalfFont_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	int                                                offset;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ScoreBoard.GetSmallerFontFor
struct AScoreBoard_GetSmallerFontFor_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	int                                                offset;                                                   // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.ScoreBoard.PostBeginPlay
struct AScoreBoard_PostBeginPlay_Params
{
};

// Function Engine.VolumeTimer.Timer
struct AVolumeTimer_Timer_Params
{
};

// Function Engine.VolumeTimer.PostBeginPlay
struct AVolumeTimer_PostBeginPlay_Params
{
};

// Function Engine.GameMessage.GetString
struct AGameMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.MapList.GetNextMap
struct AMapList_GetNextMap_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.AccessControl.CheckIPPolicy
struct AAccessControl_CheckIPPolicy_Params
{
	struct FString                                     Address;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AccessControl.PreLogin
struct AAccessControl_PreLogin_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Address;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Error;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FailCode;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               bSpectator;                                               // (Parm)
};

// Function Engine.AccessControl.AdminLogin
struct AAccessControl_AdminLogin_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AccessControl.KickBan
struct AAccessControl_KickBan_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.AccessControl.Kick
struct AAccessControl_Kick_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.AccessControl.RequiresPassword
struct AAccessControl_RequiresPassword_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AccessControl.SetGamePassword
struct AAccessControl_SetGamePassword_Params
{
	struct FString                                     P;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.AccessControl.SetAdminPassword
struct AAccessControl_SetAdminPassword_Params
{
	struct FString                                     P;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.BroadcastHandler.AllowBroadcastLocalized
struct ABroadcastHandler_AllowBroadcastLocalized_Params
{
	class AActor*                                      Sender;                                                   // (Parm)
	class UClass*                                      Message;                                                  // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.BroadcastHandler.BroadcastTeam
struct ABroadcastHandler_BroadcastTeam_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.BroadcastHandler.Broadcast
struct ABroadcastHandler_Broadcast_Params
{
	class AActor*                                      Sender;                                                   // (Parm)
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.BroadcastHandler.BroadcastLocalized
struct ABroadcastHandler_BroadcastLocalized_Params
{
	class AActor*                                      Sender;                                                   // (Parm)
	class APlayerController*                           Receiver;                                                 // (Parm)
	class UClass*                                      Message;                                                  // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function Engine.BroadcastHandler.BroadcastText
struct ABroadcastHandler_BroadcastText_Params
{
	class APlayerReplicationInfo*                      SenderPRI;                                                // (Parm)
	class APlayerController*                           Receiver;                                                 // (Parm)
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       type;                                                     // (OptionalParm, Parm)
};

// Function Engine.BroadcastHandler.AllowsBroadcast
struct ABroadcastHandler_AllowsBroadcast_Params
{
	class AActor*                                      broadcaster;                                              // (Parm)
	int                                                Len;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.BroadcastHandler.UpdateSentText
struct ABroadcastHandler_UpdateSentText_Params
{
};

// Function Engine.GameRules.NetDamage
struct AGameRules_NetDamage_Params
{
	int                                                OriginalDamage;                                           // (Parm)
	int                                                Damage;                                                   // (Parm)
	class APawn*                                       injured;                                                  // (Parm)
	class APawn*                                       instigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.CriticalPlayer
struct AGameRules_CriticalPlayer_Params
{
	class AController*                                 Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.ScoreKill
struct AGameRules_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
};

// Function Engine.GameRules.ScoreObjective
struct AGameRules_ScoreObjective_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	int                                                Score;                                                    // (Parm)
};

// Function Engine.GameRules.PreventDeath
struct AGameRules_PreventDeath_Params
{
	class APawn*                                       Killed;                                                   // (Parm)
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.OverridePickupQuery
struct AGameRules_OverridePickupQuery_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class APickup*                                     item;                                                     // (Parm)
	unsigned char                                      bAllowPickup;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.CheckScore
struct AGameRules_CheckScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.CheckEndGame
struct AGameRules_CheckEndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.HandleRestartGame
struct AGameRules_HandleRestartGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.GetRules
struct AGameRules_GetRules_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.GameRules.FindPlayerStart
struct AGameRules_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	struct FString                                     incomingName;                                             // (OptionalParm, Parm, NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.GameRules.AddGameRules
struct AGameRules_AddGameRules_Params
{
	class AGameRules*                                  GR;                                                       // (Parm)
};

// Function Engine.MessagingSpectator.PostBeginPlay
struct AMessagingSpectator_PostBeginPlay_Params
{
};

// Function Engine.WeaponPickup.GetRespawnTime
struct AWeaponPickup_GetRespawnTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.WeaponPickup.BotDesireability
struct AWeaponPickup_BotDesireability_Params
{
	class APawn*                                       Bot;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.WeaponPickup.DetourWeight
struct AWeaponPickup_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.WeaponPickup.AllowRepeatPickup
struct AWeaponPickup_AllowRepeatPickup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.WeaponPickup.StartSleeping
struct AWeaponPickup_StartSleeping_Params
{
};

// Function Engine.WeaponPickup.SetWeaponStay
struct AWeaponPickup_SetWeaponStay_Params
{
};

// Function Engine.WeaponPickup.PostBeginPlay
struct AWeaponPickup_PostBeginPlay_Params
{
};

// Function Engine.FailedConnect.GetString
struct AFailedConnect_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_1;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Engine.FailedConnect.GetFailSwitch
struct AFailedConnect_GetFailSwitch_Params
{
	struct FString                                     FailString;                                               // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KVehicleFactory.Trigger
struct AKVehicleFactory_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function Engine.Fragment.RandSpin
struct AFragment_RandSpin_Params
{
	float                                              spinRate;                                                 // (Parm)
};

// Function Engine.Fragment.HitWall
struct AFragment_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitWall;                                                  // (Parm)
};

// Function Engine.Fragment.CalcVelocity
struct AFragment_CalcVelocity_Params
{
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function Engine.Fragment.CanSplash
struct AFragment_CanSplash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.Admin.Switch
struct AAdmin_Switch_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.Admin.RestartMap
struct AAdmin_RestartMap_Params
{
};

// Function Engine.Admin.PlayerList
struct AAdmin_PlayerList_Params
{
};

// Function Engine.Admin.Kick
struct AAdmin_Kick_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.Admin.Say
struct AAdmin_Say_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function Engine.Admin.KickBan
struct AAdmin_KickBan_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Engine.Admin.Admin
struct AAdmin_Admin_Params
{
	struct FString                                     CommandLine;                                              // (Parm, NeedCtorLink)
};

// Function Engine.Admin.PostBeginPlay
struct AAdmin_PostBeginPlay_Params
{
};

// Function Engine.ZoneTrigger.UnTouch
struct AZoneTrigger_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Engine.ZoneTrigger.Touch
struct AZoneTrigger_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

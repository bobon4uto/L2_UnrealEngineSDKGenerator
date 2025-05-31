// Lineage 2 (Gracia Final) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace L2_SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.Actor.GetEffTargetLocation
// (PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FVector                 LocVector                      (Parm, OutParm)

void AActor::GetEffTargetLocation(struct FVector* LocVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetEffTargetLocation");

	AActor_GetEffTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocVector != nullptr)
		*LocVector = params.LocVector;
}


// Function Engine.Actor.SetOverlayColor
// (Final, Singular, Net, NetReliable, Exec, Event)
// Parameters:
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)
// unsigned char                  A                              (Parm)

void AActor::SetOverlayColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOverlayColor");

	AActor_SetOverlayColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EffectIsRelevant
// (Final, Exec, Native)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm)
// bool                           bForceDedicated                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::EffectIsRelevant(const struct FVector& SpawnLocation, bool bForceDedicated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EffectIsRelevant");

	AActor_EffectIsRelevant_Params params;
	params.SpawnLocation = SpawnLocation;
	params.bForceDedicated = bForceDedicated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetCollisionExtent
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Event)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AActor::GetCollisionExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetCollisionExtent");

	AActor_GetCollisionExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.CanSplash
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::CanSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.CanSplash");

	AActor_CanSplash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.PlayTeleportEffect
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Native)
// Parameters:
// bool                           bOut                           (Parm)
// bool                           bSound                         (Parm)

void AActor::PlayTeleportEffect(bool bOut, bool bSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlayTeleportEffect");

	AActor_PlayTeleportEffect_Params params;
	params.bOut = bOut;
	params.bSound = bSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.IsInPain
// (Final, Defined, Iterator, PreOperator, Singular, Net, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::IsInPain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsInPain");

	AActor_IsInPain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsInVolume
// (Final, Iterator, PreOperator, Net, NetReliable, Exec, Event)
// Parameters:
// class AVolume*                 aVolume                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::IsInVolume(class AVolume* aVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsInVolume");

	AActor_IsInVolume_Params params;
	params.aVolume = aVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UntriggerEvent
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FName                   EventName                      (Parm)
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AActor::UntriggerEvent(const struct FName& EventName, class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UntriggerEvent");

	AActor_UntriggerEvent_Params params;
	params.EventName = EventName;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TriggerEvent
// (Final, PreOperator, Singular, Simulated, Native)
// Parameters:
// struct FName                   EventName                      (Parm)
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AActor::TriggerEvent(const struct FName& EventName, class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TriggerEvent");

	AActor_TriggerEvent_Params params;
	params.EventName = EventName;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Reset
// (Defined, Singular, Simulated, Native)

void AActor::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Reset");

	AActor_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.StartInterpolation
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void AActor::StartInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.StartInterpolation");

	AActor_StartInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TouchingActor
// (PreOperator, Net, NetReliable, Exec, Event)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::TouchingActor(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TouchingActor");

	AActor_TouchingActor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.NearSpot
// (Defined, Iterator, Latent, Net, NetReliable, Exec, Event)
// Parameters:
// struct FVector                 Spot                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::NearSpot(const struct FVector& Spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.NearSpot");

	AActor_NearSpot_Params params;
	params.Spot = Spot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void AActor::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisplayDebug");

	AActor_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.Actor.GetDebugName
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDebugName");

	AActor_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetGRI
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Event)
// Parameters:
// class AGameReplicationInfo*    GRI                            (Parm)

void AActor::SetGRI(class AGameReplicationInfo* GRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetGRI");

	AActor_SetGRI_Params params;
	params.GRI = GRI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MatchStarting
// (Final, Iterator, Latent, Singular, NetReliable, Exec, Native)

void AActor::MatchStarting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MatchStarting");

	AActor_MatchStarting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GetLocalString
// (Final, Defined, Iterator, Latent, Net, Exec, Native)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalString");

	AActor_GetLocalString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetDefaultDisplayProperties
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void AActor::SetDefaultDisplayProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetDefaultDisplayProperties");

	AActor_SetDefaultDisplayProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetDisplayProperties
// (Final, Defined, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// TEnumAsByte<ERenderStyle>      NewStyle                       (Parm)
// class UMaterial*               NewTexture                     (Parm)
// bool                           bLighting                      (Parm)

void AActor::SetDisplayProperties(TEnumAsByte<ERenderStyle> NewStyle, class UMaterial* NewTexture, bool bLighting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetDisplayProperties");

	AActor_SetDisplayProperties_Params params;
	params.NewStyle = NewStyle;
	params.NewTexture = NewTexture;
	params.bLighting = bLighting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReplaceText
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, Event)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, NeedCtorLink)
// struct FString                 Replace                        (Parm, NeedCtorLink)
// struct FString                 With                           (Parm, NeedCtorLink)

void AActor::ReplaceText(const struct FString& Replace, const struct FString& With, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReplaceText");

	AActor_ReplaceText_Params params;
	params.Replace = Replace;
	params.With = With;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Engine.Actor.GetHumanReadableName
// (Defined, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetHumanReadableName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHumanReadableName");

	AActor_GetHumanReadableName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetItemName
// (Final, Defined, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// struct FString                 FullName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetItemName(const struct FString& FullName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetItemName");

	AActor_GetItemName_Params params;
	params.FullName = FullName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.BecomeViewTarget
// (Final, Defined, Singular, NetReliable, Simulated, Native)

void AActor::BecomeViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BecomeViewTarget");

	AActor_BecomeViewTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TravelPostAccept
// (Defined, Iterator, Singular, Net, Exec, Native)

void AActor::TravelPostAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TravelPostAccept");

	AActor_TravelPostAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TravelPreAccept
// (Latent, Net, NetReliable, Exec, Native)

void AActor::TravelPreAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TravelPreAccept");

	AActor_TravelPreAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.HurtRadius
// (Final, PreOperator, Singular, NetReliable, Exec, Event)
// Parameters:
// float                          DamageAmount                   (Parm)
// float                          DamageRadius                   (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          Momentum                       (Parm)
// struct FVector                 HitLocation                    (Parm)

void AActor::HurtRadius(float DamageAmount, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HurtRadius");

	AActor_HurtRadius_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageRadius = DamageRadius;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.UpdatePrecacheStaticMeshes
// (Defined, Iterator, Singular, NetReliable, Exec, Native)

void AActor::UpdatePrecacheStaticMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UpdatePrecacheStaticMeshes");

	AActor_UpdatePrecacheStaticMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.UpdatePrecacheMaterials
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native)

void AActor::UpdatePrecacheMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UpdatePrecacheMaterials");

	AActor_UpdatePrecacheMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PostSetPawnResource
// (Latent, Singular, Net, NetReliable, Simulated, Native)

void AActor::PostSetPawnResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PostSetPawnResource");

	AActor_PostSetPawnResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PostNetBeginPlay
// (Iterator, Singular, Net, NetReliable, Simulated, Native)

void AActor::PostNetBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PostNetBeginPlay");

	AActor_PostNetBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetInitialState
// (Final, Iterator, Latent, Simulated, Exec, Native, Event)

void AActor::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetInitialState");

	AActor_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AActor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PostBeginPlay");

	AActor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.BroadcastLocalizedMessage
// (Iterator, PreOperator, Net, Exec, Native)
// Parameters:
// class UClass*                  MessageClass                   (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void AActor::BroadcastLocalizedMessage(class UClass* MessageClass, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BroadcastLocalizedMessage");

	AActor_BroadcastLocalizedMessage_Params params;
	params.MessageClass = MessageClass;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AActor::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PreBeginPlay");

	AActor_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RenderTexture
// (Defined, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// class UScriptedTexture*        Tex                            (Parm)

void AActor::RenderTexture(class UScriptedTexture* Tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RenderTexture");

	AActor_RenderTexture_Params params;
	params.Tex = Tex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RenderOverlays
// (Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AActor::RenderOverlays(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RenderOverlays");

	AActor_RenderOverlays_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Multiply_ColorFloat
// (Iterator, PreOperator, Singular, Event)
// Parameters:
// struct FColor                  A                              (Parm)
// float                          B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor AActor::Multiply_ColorFloat(const struct FColor& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Multiply_ColorFloat");

	AActor_Multiply_ColorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Add_ColorColor
// (Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor AActor::Add_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Add_ColorColor");

	AActor_Add_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Multiply_FloatColor
// (Iterator, PreOperator, Singular, Event)
// Parameters:
// float                          A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor AActor::Multiply_FloatColor(float A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Multiply_FloatColor");

	AActor_Multiply_FloatColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Subtract_ColorColor
// (Final, Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor AActor::Subtract_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Subtract_ColorColor");

	AActor_Subtract_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.CollidingActors
// (Final, Iterator, Singular, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// float                          Radius                         (Parm)
// struct FVector                 Loc                            (OptionalParm, Parm)

void AActor::CollidingActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.CollidingActors");

	AActor_CollidingActors_Params params;
	params.BaseClass = BaseClass;
	params.Radius = Radius;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.VisibleCollidingActors
// (Final, Defined, Singular, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// float                          Radius                         (Parm)
// struct FVector                 Loc                            (OptionalParm, Parm)
// bool                           bIgnoreHidden                  (OptionalParm, Parm)

void AActor::VisibleCollidingActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, bool bIgnoreHidden, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.VisibleCollidingActors");

	AActor_VisibleCollidingActors_Params params;
	params.BaseClass = BaseClass;
	params.Radius = Radius;
	params.Loc = Loc;
	params.bIgnoreHidden = bIgnoreHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.VisibleActors
// (Defined, Singular, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// float                          Radius                         (OptionalParm, Parm)
// struct FVector                 Loc                            (OptionalParm, Parm)

void AActor::VisibleActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.VisibleActors");

	AActor_VisibleActors_Params params;
	params.BaseClass = BaseClass;
	params.Radius = Radius;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.RadiusActors
// (Singular, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// float                          Radius                         (Parm)
// struct FVector                 Loc                            (OptionalParm, Parm)

void AActor::RadiusActors(class UClass* BaseClass, float Radius, const struct FVector& Loc, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RadiusActors");

	AActor_RadiusActors_Params params;
	params.BaseClass = BaseClass;
	params.Radius = Radius;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.TraceActors
// (Iterator, Latent, PreOperator, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// struct FVector                 HitLoc                         (Parm, OutParm)
// struct FVector                 HitNorm                        (Parm, OutParm)
// struct FVector                 End                            (Parm)
// struct FVector                 Start                          (OptionalParm, Parm)
// struct FVector                 Extent                         (OptionalParm, Parm)

void AActor::TraceActors(class UClass* BaseClass, const struct FVector& End, const struct FVector& Start, const struct FVector& Extent, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TraceActors");

	AActor_TraceActors_Params params;
	params.BaseClass = BaseClass;
	params.End = End;
	params.Start = Start;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (HitLoc != nullptr)
		*HitLoc = params.HitLoc;
	if (HitNorm != nullptr)
		*HitNorm = params.HitNorm;
}


// Function Engine.Actor.TouchingActors
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)

void AActor::TouchingActors(class UClass* BaseClass, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TouchingActors");

	AActor_TouchingActors_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.BasedActors
// (Defined, Latent, PreOperator, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)

void AActor::BasedActors(class UClass* BaseClass, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BasedActors");

	AActor_BasedActors_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.ChildActors
// (Final, Latent, PreOperator, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)

void AActor::ChildActors(class UClass* BaseClass, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ChildActors");

	AActor_ChildActors_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.DynamicActors
// (Latent, PreOperator, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// struct FName                   MatchTag                       (OptionalParm, Parm)

void AActor::DynamicActors(class UClass* BaseClass, const struct FName& MatchTag, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DynamicActors");

	AActor_DynamicActors_Params params;
	params.BaseClass = BaseClass;
	params.MatchTag = MatchTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.AllActors
// (Final, Iterator, PreOperator, NetReliable, Exec, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)
// struct FName                   MatchTag                       (OptionalParm, Parm)

void AActor::AllActors(class UClass* BaseClass, const struct FName& MatchTag, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AllActors");

	AActor_AllActors_Params params;
	params.BaseClass = BaseClass;
	params.MatchTag = MatchTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.Actor.MoveCacheEntry
// (Final, Defined, PreOperator, NetReliable, Exec, Event)
// Parameters:
// struct FString                 Guid                           (Parm, NeedCtorLink)
// struct FString                 NewFilename                    (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::MoveCacheEntry(const struct FString& Guid, const struct FString& NewFilename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MoveCacheEntry");

	AActor_MoveCacheEntry_Params params;
	params.Guid = Guid;
	params.NewFilename = NewFilename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetCacheEntry
// (Final, PreOperator, NetReliable, Exec, Event)
// Parameters:
// int                            Num                            (Parm)
// struct FString                 Guid                           (Parm, OutParm, NeedCtorLink)
// struct FString                 Filename                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::GetCacheEntry(int Num, struct FString* Guid, struct FString* Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetCacheEntry");

	AActor_GetCacheEntry_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Guid != nullptr)
		*Guid = params.Guid;
	if (Filename != nullptr)
		*Filename = params.Filename;

	return params.ReturnValue;
}


// Function Engine.Actor.GetNextIntDesc
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Event)
// Parameters:
// struct FString                 ClassName                      (Parm, NeedCtorLink)
// int                            Num                            (Parm)
// struct FString                 Entry                          (Parm, OutParm, NeedCtorLink)
// struct FString                 Description                    (Parm, OutParm, NeedCtorLink)

void AActor::GetNextIntDesc(const struct FString& ClassName, int Num, struct FString* Entry, struct FString* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetNextIntDesc");

	AActor_GetNextIntDesc_Params params;
	params.ClassName = ClassName;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entry != nullptr)
		*Entry = params.Entry;
	if (Description != nullptr)
		*Description = params.Description;
}


// Function Engine.Actor.GetNextInt
// (Defined, Iterator, Latent, NetReliable, Exec, Event)
// Parameters:
// struct FString                 ClassName                      (Parm, NeedCtorLink)
// int                            Num                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetNextInt(const struct FString& ClassName, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetNextInt");

	AActor_GetNextInt_Params params;
	params.ClassName = ClassName;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetURLMap
// (Final, Iterator, Latent, NetReliable, Exec, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetURLMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetURLMap");

	AActor_GetURLMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetNextSkin
// (Latent, NetReliable, Exec, Event)
// Parameters:
// struct FString                 Prefix                         (Parm, NeedCtorLink)
// struct FString                 CurrentSkin                    (Parm, NeedCtorLink)
// int                            Dir                            (Parm)
// struct FString                 SkinName                       (Parm, OutParm, NeedCtorLink)
// struct FString                 SkinDesc                       (Parm, OutParm, NeedCtorLink)

void AActor::GetNextSkin(const struct FString& Prefix, const struct FString& CurrentSkin, int Dir, struct FString* SkinName, struct FString* SkinDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetNextSkin");

	AActor_GetNextSkin_Params params;
	params.Prefix = Prefix;
	params.CurrentSkin = CurrentSkin;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinName != nullptr)
		*SkinName = params.SkinName;
	if (SkinDesc != nullptr)
		*SkinDesc = params.SkinDesc;
}


// Function Engine.Actor.GetMapName
// (Iterator, NetReliable, Exec, Event)
// Parameters:
// struct FString                 NameEnding                     (Parm, NeedCtorLink)
// struct FString                 MapName                        (Parm, NeedCtorLink)
// int                            Dir                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetMapName(const struct FString& NameEnding, const struct FString& MapName, int Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetMapName");

	AActor_GetMapName_Params params;
	params.NameEnding = NameEnding;
	params.MapName = MapName;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.BeginPlay
// (Iterator, Singular, Net, Simulated)

void AActor::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BeginPlay");

	AActor_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PostTeleport
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// class ATeleporter*             OutTeleporter                  (Parm)

void AActor::PostTeleport(class ATeleporter* OutTeleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PostTeleport");

	AActor_PostTeleport_Params params;
	params.OutTeleporter = OutTeleporter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PreTeleport
// (Latent, PreOperator, NetReliable, Event)
// Parameters:
// class ATeleporter*             InTeleporter                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::PreTeleport(class ATeleporter* InTeleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PreTeleport");

	AActor_PreTeleport_Params params;
	params.InTeleporter = InTeleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SuggestFallVelocity
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// float                          MaxZ                           (Parm)
// float                          MaxXYSpeed                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AActor::SuggestFallVelocity(const struct FVector& Destination, const struct FVector& Start, float MaxZ, float MaxXYSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SuggestFallVelocity");

	AActor_SuggestFallVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.MaxZ = MaxZ;
	params.MaxXYSpeed = MaxXYSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.PlayerCanSeeMe
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::PlayerCanSeeMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlayerCanSeeMe");

	AActor_PlayerCanSeeMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.MakeNoise
// (Defined, Latent, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// float                          Loudness                       (Parm)

void AActor::MakeNoise(float Loudness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	AActor_MakeNoise_Params params;
	params.Loudness = Loudness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GetSoundDuration
// (Final, Latent, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// class USound*                  Sound                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::GetSoundDuration(class USound* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSoundDuration");

	AActor_GetSoundDuration_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.StopSound
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// class USound*                  a_Sound                        (Parm)
// float                          a_StopByFadeOutTime            (OptionalParm, Parm)

void AActor::StopSound(class USound* a_Sound, float a_StopByFadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.StopSound");

	AActor_StopSound_Params params;
	params.a_Sound = a_Sound;
	params.a_StopByFadeOutTime = a_StopByFadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PlayLoopSound
// (Iterator, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// class USound*                  Sound                          (Parm)
// TEnumAsByte<ESoundSlot>        Slot                           (OptionalParm, Parm)
// float                          Volume                         (OptionalParm, Parm)
// bool                           bNoOverride                    (OptionalParm, Parm)
// float                          Radius                         (OptionalParm, Parm)
// float                          Pitch                          (OptionalParm, Parm)
// bool                           Attenuate                      (OptionalParm, Parm)
// float                          FadeInDuration                 (OptionalParm, Parm)

void AActor::PlayLoopSound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate, float FadeInDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlayLoopSound");

	AActor_PlayLoopSound_Params params;
	params.Sound = Sound;
	params.Slot = Slot;
	params.Volume = Volume;
	params.bNoOverride = bNoOverride;
	params.Radius = Radius;
	params.Pitch = Pitch;
	params.Attenuate = Attenuate;
	params.FadeInDuration = FadeInDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PlaySoundOnVehicle
// (Final, Defined, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// class USound*                  Sound                          (Parm)
// TEnumAsByte<ESoundSlot>        Slot                           (OptionalParm, Parm)
// float                          Volume                         (OptionalParm, Parm)
// bool                           bNoOverride                    (OptionalParm, Parm)
// float                          Radius                         (OptionalParm, Parm)
// float                          Pitch                          (OptionalParm, Parm)
// bool                           Attenuate                      (OptionalParm, Parm)

void AActor::PlaySoundOnVehicle(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlaySoundOnVehicle");

	AActor_PlaySoundOnVehicle_Params params;
	params.Sound = Sound;
	params.Slot = Slot;
	params.Volume = Volume;
	params.bNoOverride = bNoOverride;
	params.Radius = Radius;
	params.Pitch = Pitch;
	params.Attenuate = Attenuate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DemoPlaySound
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class USound*                  Sound                          (Parm)
// TEnumAsByte<ESoundSlot>        Slot                           (OptionalParm, Parm)
// float                          Volume                         (OptionalParm, Parm)
// bool                           bNoOverride                    (OptionalParm, Parm)
// float                          Radius                         (OptionalParm, Parm)
// float                          Pitch                          (OptionalParm, Parm)
// bool                           Attenuate                      (OptionalParm, Parm)

void AActor::DemoPlaySound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DemoPlaySound");

	AActor_DemoPlaySound_Params params;
	params.Sound = Sound;
	params.Slot = Slot;
	params.Volume = Volume;
	params.bNoOverride = bNoOverride;
	params.Radius = Radius;
	params.Pitch = Pitch;
	params.Attenuate = Attenuate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PlayOwnedSound
// (Defined, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// class USound*                  Sound                          (Parm)
// TEnumAsByte<ESoundSlot>        Slot                           (OptionalParm, Parm)
// float                          Volume                         (OptionalParm, Parm)
// bool                           bNoOverride                    (OptionalParm, Parm)
// float                          Radius                         (OptionalParm, Parm)
// float                          Pitch                          (OptionalParm, Parm)
// bool                           Attenuate                      (OptionalParm, Parm)

void AActor::PlayOwnedSound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlayOwnedSound");

	AActor_PlayOwnedSound_Params params;
	params.Sound = Sound;
	params.Slot = Slot;
	params.Volume = Volume;
	params.bNoOverride = bNoOverride;
	params.Radius = Radius;
	params.Pitch = Pitch;
	params.Attenuate = Attenuate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PlaySound
// (Defined, Iterator, Latent, Singular, Net, Exec, Event)
// Parameters:
// class USound*                  Sound                          (Parm)
// TEnumAsByte<ESoundSlot>        Slot                           (OptionalParm, Parm)
// float                          Volume                         (OptionalParm, Parm)
// bool                           bNoOverride                    (OptionalParm, Parm)
// float                          Radius                         (OptionalParm, Parm)
// float                          Pitch                          (OptionalParm, Parm)
// bool                           Attenuate                      (OptionalParm, Parm)

void AActor::PlaySound(class USound* Sound, TEnumAsByte<ESoundSlot> Slot, float Volume, bool bNoOverride, float Radius, float Pitch, bool Attenuate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlaySound");

	AActor_PlaySound_Params params;
	params.Sound = Sound;
	params.Slot = Slot;
	params.Volume = Volume;
	params.bNoOverride = bNoOverride;
	params.Radius = Radius;
	params.Pitch = Pitch;
	params.Attenuate = Attenuate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTimer
// (Final, Defined, Latent, Singular, Net, Exec, Event)
// Parameters:
// float                          NewTimerRate                   (Parm)
// bool                           bLoop                          (Parm)

void AActor::SetTimer(float NewTimerRate, bool bLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTimer");

	AActor_SetTimer_Params params;
	params.NewTimerRate = NewTimerRate;
	params.bLoop = bLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TornOff
// (PreOperator, Singular, Net, NetReliable, Exec, Native, Event)

void AActor::TornOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TornOff");

	AActor_TornOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Destroy
// (PreOperator, NetReliable, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Destroy");

	AActor_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Spawn
// (Defined, Latent, PreOperator, Net, NetReliable, Exec)
// Parameters:
// class UClass*                  SpawnClass                     (Parm)
// class AActor*                  SpawnOwner                     (OptionalParm, Parm)
// struct FName                   SpawnTag                       (OptionalParm, Parm)
// struct FVector                 SpawnLocation                  (OptionalParm, Parm)
// struct FRotator                SpawnRotation                  (OptionalParm, Parm)
// bool                           bNoCollisionCheck              (OptionalParm, Parm)
// bool                           bNeedMeshContainer             (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AActor::Spawn(class UClass* SpawnClass, class AActor* SpawnOwner, const struct FName& SpawnTag, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, bool bNoCollisionCheck, bool bNeedMeshContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Spawn");

	AActor_Spawn_Params params;
	params.SpawnClass = SpawnClass;
	params.SpawnOwner = SpawnOwner;
	params.SpawnTag = SpawnTag;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.bNoCollisionCheck = bNoCollisionCheck;
	params.bNeedMeshContainer = bNeedMeshContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.FastTrace
// (Defined, Singular, Net, Exec, Event)
// Parameters:
// struct FVector                 TraceEnd                       (Parm)
// struct FVector                 TraceStart                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::FastTrace(const struct FVector& TraceEnd, const struct FVector& TraceStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FastTrace");

	AActor_FastTrace_Params params;
	params.TraceEnd = TraceEnd;
	params.TraceStart = TraceStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Trace
// (Final, Iterator, Latent, PreOperator, Net, Exec, Event)
// Parameters:
// struct FVector                 HitLocation                    (Parm, OutParm)
// struct FVector                 HitNormal                      (Parm, OutParm)
// struct FVector                 TraceEnd                       (Parm)
// struct FVector                 TraceStart                     (OptionalParm, Parm)
// bool                           bTraceActors                   (OptionalParm, Parm)
// struct FVector                 Extent                         (OptionalParm, Parm)
// class UMaterial*               Material                       (OptionalParm, Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AActor::Trace(const struct FVector& TraceEnd, const struct FVector& TraceStart, bool bTraceActors, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, class UMaterial** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Trace");

	AActor_Trace_Params params;
	params.TraceEnd = TraceEnd;
	params.TraceStart = TraceStart;
	params.bTraceActors = bTraceActors;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (Material != nullptr)
		*Material = params.Material;

	return params.ReturnValue;
}


// Function Engine.Actor.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AActor::TakeDamage(int Damage, class APawn* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TakeDamage");

	AActor_TakeDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KilledBy
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   EventInstigator                (Parm)

void AActor::KilledBy(class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KilledBy");

	AActor_KilledBy_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FellOutOfWorld
// (Defined, PreOperator, Net, NetReliable, Exec, Native)
// Parameters:
// TEnumAsByte<EeKillZType>       KillType                       (Parm)

void AActor::FellOutOfWorld(TEnumAsByte<EeKillZType> KillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FellOutOfWorld");

	AActor_FellOutOfWorld_Params params;
	params.KillType = KillType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.UsedBy
// (Final, Defined, Latent, Net, NetReliable, Exec, Native)
// Parameters:
// class APawn*                   User                           (Parm)

void AActor::UsedBy(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UsedBy");

	AActor_UsedBy_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EndedRotation
// (Final, Iterator, Net, Simulated)

void AActor::EndedRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EndedRotation");

	AActor_EndedRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FinishedInterpolation
// (Final, Defined, Iterator, Net, NetReliable, Exec, Native)

void AActor::FinishedInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FinishedInterpolation");

	AActor_FinishedInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EncroachedBy
// (Latent, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EncroachedBy");

	AActor_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EncroachingOn
// (Final, Defined, Iterator, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EncroachingOn");

	AActor_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SpecialHandling
// (Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AActor::SpecialHandling(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SpecialHandling");

	AActor_SpecialHandling_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Detach
// (Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::Detach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Detach");

	AActor_Detach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Attach
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::Attach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Attach");

	AActor_Attach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.BaseChange
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated)

void AActor::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BaseChange");

	AActor_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Bump
// (Final, Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::Bump(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Bump");

	AActor_Bump_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.UnTouch
// (Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UnTouch");

	AActor_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PostTouch
// (Final, Defined, Latent, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::PostTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PostTouch");

	AActor_PostTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Touch");

	AActor_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PhysicsVolumeChange
// (Latent, PreOperator, Singular, Simulated)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void AActor::PhysicsVolumeChange(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PhysicsVolumeChange");

	AActor_PhysicsVolumeChange_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ZoneChange
// (Final, Defined, Net, Simulated)
// Parameters:
// class AZoneInfo*               NewZone                        (Parm)

void AActor::ZoneChange(class AZoneInfo* NewZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ZoneChange");

	AActor_ZoneChange_Params params;
	params.NewZone = NewZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Landed
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)

void AActor::Landed(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Landed");

	AActor_Landed_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Falling
// (Defined, Iterator, PreOperator, Singular, Simulated)

void AActor::Falling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Falling");

	AActor_Falling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.HitWall
// (Final, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  HitWall                        (Parm)

void AActor::HitWall(const struct FVector& HitNormal, class AActor* HitWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HitWall");

	AActor_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.HitWall = HitWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AActor::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Timer");

	AActor_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EndEvent
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void AActor::EndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EndEvent");

	AActor_EndEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.BeginEvent
// (Defined, Latent, Net, NetReliable, Simulated, Native)

void AActor::BeginEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BeginEvent");

	AActor_BeginEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.UnTrigger
// (Final, Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AActor::UnTrigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UnTrigger");

	AActor_UnTrigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AActor::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Trigger");

	AActor_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PostNetReceive
// (Defined, Singular, Net, Simulated)

void AActor::PostNetReceive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PostNetReceive");

	AActor_PostNetReceive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void AActor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Tick");

	AActor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.LostChild
// (Final, Defined, Iterator, Latent, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::LostChild(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.LostChild");

	AActor_LostChild_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GainedChild
// (Defined, Iterator, Latent, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::GainedChild(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GainedChild");

	AActor_GainedChild_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Destroyed");

	AActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetAlphaTexModifier
// (Defined, PreOperator, Net, Exec, Event)
// Parameters:
// int                            a_Alpha                        (Parm)

void AActor::SetAlphaTexModifier(int a_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetAlphaTexModifier");

	AActor_SetAlphaTexModifier_Params params;
	params.a_Alpha = a_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorViewType
// (PreOperator, Net, Exec, Event)
// Parameters:
// TEnumAsByte<EActorViewType>    a_ActorViewType                (Parm)

void AActor::SetActorViewType(TEnumAsByte<EActorViewType> a_ActorViewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorViewType");

	AActor_SetActorViewType_Params params;
	params.a_ActorViewType = a_ActorViewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.NDestroy
// (Final, Defined, Iterator, Latent, Net, Exec, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::NDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.NDestroy");

	AActor_NDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.StopAllMusic
// (Defined, Iterator, Latent, Net, Exec, Event)
// Parameters:
// float                          FadeOutTime                    (Parm)

void AActor::StopAllMusic(float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.StopAllMusic");

	AActor_StopAllMusic_Params params;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.StopMusic
// (Final, Defined, Latent, Net, Exec, Event)
// Parameters:
// int                            SongHandle                     (Parm)
// float                          FadeOutTime                    (Parm)

void AActor::StopMusic(int SongHandle, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.StopMusic");

	AActor_StopMusic_Params params;
	params.SongHandle = SongHandle;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PlayMusic
// (Final, Latent, Net, Exec, Event)
// Parameters:
// struct FString                 Song                           (Parm, NeedCtorLink)
// float                          FadeInTime                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AActor::PlayMusic(const struct FString& Song, float FadeInTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlayMusic");

	AActor_PlayMusic_Params params;
	params.Song = Song;
	params.FadeInTime = FadeInTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UnClock
// (Latent, Net, Exec, Event)
// Parameters:
// float                          Time                           (Parm, OutParm)

void AActor::UnClock(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UnClock");

	AActor_UnClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Engine.Actor.Clock
// (Final, Defined, Iterator, Net, Exec, Event)
// Parameters:
// float                          Time                           (Parm, OutParm)

void AActor::Clock(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Clock");

	AActor_Clock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Engine.Actor.KUpdateState
// (Final, Defined, Iterator, Singular, NetReliable, Event)
// Parameters:
// struct FKRigidBodyState        NewState                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::KUpdateState(struct FKRigidBodyState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KUpdateState");

	AActor_KUpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewState != nullptr)
		*NewState = params.NewState;

	return params.ReturnValue;
}


// Function Engine.Actor.KApplyForce
// (Final, Defined, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FVector                 Force                          (Parm, OutParm)
// struct FVector                 Torque                         (Parm, OutParm)

void AActor::KApplyForce(struct FVector* Force, struct FVector* Torque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KApplyForce");

	AActor_KApplyForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Force != nullptr)
		*Force = params.Force;
	if (Torque != nullptr)
		*Torque = params.Torque;
}


// Function Engine.Actor.KSkelConvulse
// (Singular, Net, Simulated, Exec, Native, Event)

void AActor::KSkelConvulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSkelConvulse");

	AActor_KSkelConvulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KVelDropBelow
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event)

void AActor::KVelDropBelow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KVelDropBelow");

	AActor_KVelDropBelow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KImpact
// (Singular, NetReliable, Event)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 pos                            (Parm)
// struct FVector                 impactVel                      (Parm)
// struct FVector                 impactNorm                     (Parm)

void AActor::KImpact(class AActor* Other, const struct FVector& pos, const struct FVector& impactVel, const struct FVector& impactNorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KImpact");

	AActor_KImpact_Params params;
	params.Other = Other;
	params.pos = pos;
	params.impactVel = impactVel;
	params.impactNorm = impactNorm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KIsRagdollAvailable
// (Final, Defined, Net, Exec, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::KIsRagdollAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KIsRagdollAvailable");

	AActor_KIsRagdollAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KMakeRagdollAvailable
// (Defined, Net, Exec, Event)

void AActor::KMakeRagdollAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KMakeRagdollAvailable");

	AActor_KMakeRagdollAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KRemoveAllBoneLifters
// (Final, Net, Exec, Event)

void AActor::KRemoveAllBoneLifters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KRemoveAllBoneLifters");

	AActor_KRemoveAllBoneLifters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KRemoveLifterFromBone
// (Net, Exec, Event)
// Parameters:
// struct FName                   bonename                       (Parm)

void AActor::KRemoveLifterFromBone(const struct FName& bonename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KRemoveLifterFromBone");

	AActor_KRemoveLifterFromBone_Params params;
	params.bonename = bonename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KAddBoneLifter
// (Iterator, Latent, PreOperator, Singular, Exec, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// struct FInterpCurve            LiftVel                        (Parm, NeedCtorLink)
// float                          LateralFriction                (Parm)
// struct FInterpCurve            Softness                       (Parm, NeedCtorLink)

void AActor::KAddBoneLifter(const struct FName& bonename, const struct FInterpCurve& LiftVel, float LateralFriction, const struct FInterpCurve& Softness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KAddBoneLifter");

	AActor_KAddBoneLifter_Params params;
	params.bonename = bonename;
	params.LiftVel = LiftVel;
	params.LateralFriction = LateralFriction;
	params.Softness = Softness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KFreezeRagdoll
// (Final, Defined, Latent, PreOperator, Singular, Exec, Event)

void AActor::KFreezeRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KFreezeRagdoll");

	AActor_KFreezeRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetSkelMass
// (Defined, Latent, PreOperator, Singular, Exec, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::KGetSkelMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetSkelMass");

	AActor_KGetSkelMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KSetSkelVel
// (Final, Defined, Iterator, PreOperator, Singular, Exec, Event)
// Parameters:
// struct FVector                 Velocity                       (Parm)
// struct FVector                 AngVelocity                    (OptionalParm, Parm)
// bool                           AddToCurrent                   (OptionalParm, Parm)

void AActor::KSetSkelVel(const struct FVector& Velocity, const struct FVector& AngVelocity, bool AddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetSkelVel");

	AActor_KSetSkelVel_Params params;
	params.Velocity = Velocity;
	params.AngVelocity = AngVelocity;
	params.AddToCurrent = AddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KEnableCollision
// (Defined, Iterator, PreOperator, Singular, Exec, Event)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::KEnableCollision(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KEnableCollision");

	AActor_KEnableCollision_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KDisableCollision
// (Iterator, PreOperator, Singular, Exec, Event)
// Parameters:
// class AActor*                  Other                          (Parm)

void AActor::KDisableCollision(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KDisableCollision");

	AActor_KDisableCollision_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetActorGravScale
// (Final, Defined, PreOperator, Singular, Exec, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::KGetActorGravScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetActorGravScale");

	AActor_KGetActorGravScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KSetActorGravScale
// (Final, PreOperator, Singular, Exec, Event)
// Parameters:
// float                          ActorGravScale                 (Parm)

void AActor::KSetActorGravScale(float ActorGravScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetActorGravScale");

	AActor_KSetActorGravScale_Params params;
	params.ActorGravScale = ActorGravScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KSetBlockKarma
// (Final, Defined, Iterator, Latent, Singular, Exec, Event)
// Parameters:
// bool                           newBlock                       (Parm)

void AActor::KSetBlockKarma(bool newBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetBlockKarma");

	AActor_KSetBlockKarma_Params params;
	params.newBlock = newBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KSetStayUpright
// (Iterator, Latent, Singular, Exec, Event)
// Parameters:
// bool                           stayUpright                    (Parm)
// bool                           allowRotate                    (Parm)

void AActor::KSetStayUpright(bool stayUpright, bool allowRotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetStayUpright");

	AActor_KSetStayUpright_Params params;
	params.stayUpright = stayUpright;
	params.allowRotate = allowRotate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KAddImpulse
// (Defined, Latent, Singular, Exec, Event)
// Parameters:
// struct FVector                 Impulse                        (Parm)
// struct FVector                 Position                       (Parm)
// struct FName                   bonename                       (OptionalParm, Parm)

void AActor::KAddImpulse(const struct FVector& Impulse, const struct FVector& Position, const struct FName& bonename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KAddImpulse");

	AActor_KAddImpulse_Params params;
	params.Impulse = Impulse;
	params.Position = Position;
	params.bonename = bonename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KIsAwake
// (Final, Latent, Singular, Exec, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::KIsAwake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KIsAwake");

	AActor_KIsAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KWake
// (Latent, Singular, Exec, Event)

void AActor::KWake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KWake");

	AActor_KWake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetImpactThreshold
// (Final, Defined, Iterator, Singular, Exec, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::KGetImpactThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetImpactThreshold");

	AActor_KGetImpactThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KSetImpactThreshold
// (Final, Iterator, Singular, Exec, Event)
// Parameters:
// float                          thresh                         (Parm)

void AActor::KSetImpactThreshold(float thresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetImpactThreshold");

	AActor_KSetImpactThreshold_Params params;
	params.thresh = thresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetCOMPosition
// (Final, Defined, Singular, Exec, Event)
// Parameters:
// struct FVector                 pos                            (Parm, OutParm)

void AActor::KGetCOMPosition(struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetCOMPosition");

	AActor_KGetCOMPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
}


// Function Engine.Actor.KGetCOMOffset
// (Defined, Singular, Exec, Event)
// Parameters:
// struct FVector                 offset                         (Parm, OutParm)

void AActor::KGetCOMOffset(struct FVector* offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetCOMOffset");

	AActor_KGetCOMOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (offset != nullptr)
		*offset = params.offset;
}


// Function Engine.Actor.KSetCOMOffset
// (Singular, Exec, Event)
// Parameters:
// struct FVector                 offset                         (Parm)

void AActor::KSetCOMOffset(const struct FVector& offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetCOMOffset");

	AActor_KSetCOMOffset_Params params;
	params.offset = offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetRestitution
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::KGetRestitution()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetRestitution");

	AActor_KGetRestitution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KSetRestitution
// (Final, Iterator, Latent, PreOperator, Exec, Event)
// Parameters:
// float                          rest                           (Parm)

void AActor::KSetRestitution(float rest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetRestitution");

	AActor_KSetRestitution_Params params;
	params.rest = rest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetFriction
// (Iterator, Latent, PreOperator, Exec, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::KGetFriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetFriction");

	AActor_KGetFriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KSetFriction
// (Defined, Latent, PreOperator, Exec, Event)
// Parameters:
// float                          friction                       (Parm)

void AActor::KSetFriction(float friction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetFriction");

	AActor_KSetFriction_Params params;
	params.friction = friction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetDampingProps
// (Final, Latent, PreOperator, Exec, Event)
// Parameters:
// float                          lindamp                        (Parm, OutParm)
// float                          angdamp                        (Parm, OutParm)

void AActor::KGetDampingProps(float* lindamp, float* angdamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetDampingProps");

	AActor_KGetDampingProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lindamp != nullptr)
		*lindamp = params.lindamp;
	if (angdamp != nullptr)
		*angdamp = params.angdamp;
}


// Function Engine.Actor.KSetDampingProps
// (Defined, Iterator, PreOperator, Exec, Event)
// Parameters:
// float                          lindamp                        (Parm)
// float                          angdamp                        (Parm)

void AActor::KSetDampingProps(float lindamp, float angdamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetDampingProps");

	AActor_KSetDampingProps_Params params;
	params.lindamp = lindamp;
	params.angdamp = angdamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetInertiaTensor
// (Final, Iterator, PreOperator, Exec, Event)
// Parameters:
// struct FVector                 it1                            (Parm, OutParm)
// struct FVector                 it2                            (Parm, OutParm)

void AActor::KGetInertiaTensor(struct FVector* it1, struct FVector* it2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetInertiaTensor");

	AActor_KGetInertiaTensor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (it1 != nullptr)
		*it1 = params.it1;
	if (it2 != nullptr)
		*it2 = params.it2;
}


// Function Engine.Actor.KSetInertiaTensor
// (Defined, PreOperator, Exec, Event)
// Parameters:
// struct FVector                 it1                            (Parm)
// struct FVector                 it2                            (Parm)

void AActor::KSetInertiaTensor(const struct FVector& it1, const struct FVector& it2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetInertiaTensor");

	AActor_KSetInertiaTensor_Params params;
	params.it1 = it1;
	params.it2 = it2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetMass
// (Final, PreOperator, Exec, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AActor::KGetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetMass");

	AActor_KGetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KSetMass
// (PreOperator, Exec, Event)
// Parameters:
// float                          Mass                           (Parm)

void AActor::KSetMass(float Mass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KSetMass");

	AActor_KSetMass_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KRBVecFromVector
// (Final, Defined, Iterator, Latent, Exec, Event)
// Parameters:
// struct FVector                 V                              (Parm)
// struct FKRBVec                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKRBVec AActor::KRBVecFromVector(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KRBVecFromVector");

	AActor_KRBVecFromVector_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KRBVecToVector
// (Final, Iterator, Latent, Exec, Event)
// Parameters:
// struct FKRBVec                 RBvec                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AActor::KRBVecToVector(const struct FKRBVec& RBvec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KRBVecToVector");

	AActor_KRBVecToVector_Params params;
	params.RBvec = RBvec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.KDrawRigidBodyState
// (Final, Defined, Latent, Exec, Event)
// Parameters:
// struct FKRigidBodyState        RBstate                        (Parm)
// bool                           AltColour                      (Parm)

void AActor::KDrawRigidBodyState(const struct FKRigidBodyState& RBstate, bool AltColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KDrawRigidBodyState");

	AActor_KDrawRigidBodyState_Params params;
	params.RBstate = RBstate;
	params.AltColour = AltColour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.KGetRigidBodyState
// (Final, Latent, Exec, Event)
// Parameters:
// struct FKRigidBodyState        RBstate                        (Parm, OutParm)

void AActor::KGetRigidBodyState(struct FKRigidBodyState* RBstate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetRigidBodyState");

	AActor_KGetRigidBodyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RBstate != nullptr)
		*RBstate = params.RBstate;
}


// Function Engine.Actor.KGetRBQuaternion
// (Latent, Exec, Event)
// Parameters:
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat AActor::KGetRBQuaternion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.KGetRBQuaternion");

	AActor_KGetRBQuaternion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.OnlyAffectPawns
// (Final, Defined, Iterator, Exec, Event)
// Parameters:
// bool                           B                              (Parm)

void AActor::OnlyAffectPawns(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnlyAffectPawns");

	AActor_OnlyAffectPawns_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetPhysics
// (Final, Iterator, Exec, Event)
// Parameters:
// TEnumAsByte<EPhysics>          newPhysics                     (Parm)

void AActor::SetPhysics(TEnumAsByte<EPhysics> newPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetPhysics");

	AActor_SetPhysics_Params params;
	params.newPhysics = newPhysics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FinishInterpolation
// (Iterator, Exec, Event)

void AActor::FinishInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FinishInterpolation");

	AActor_FinishInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DebugUnclock
// (Final, Defined, Exec, Event)

void AActor::DebugUnclock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DebugUnclock");

	AActor_DebugUnclock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DebugClock
// (Defined, Exec, Event)

void AActor::DebugClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DebugClock");

	AActor_DebugClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DrawDebugLine
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 LineStart                      (Parm)
// struct FVector                 LineEnd                        (Parm)
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)

void AActor::DrawDebugLine(const struct FVector& LineStart, const struct FVector& LineEnd, unsigned char R, unsigned char G, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DrawDebugLine");

	AActor_DrawDebugLine_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.R = R;
	params.G = G;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GetRenderBoundingSphere
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FPlane                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlane AActor::GetRenderBoundingSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRenderBoundingSphere");

	AActor_GetRenderBoundingSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.AnimIsInGroup
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Channel                        (Parm)
// struct FName                   GroupName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::AnimIsInGroup(int Channel, const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AnimIsInGroup");

	AActor_AnimIsInGroup_Params params;
	params.Channel = Channel;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAnimParams
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Channel                        (Parm)
// struct FName                   OutSeqName                     (Parm, OutParm)
// float                          OutAnimFrame                   (Parm, OutParm)
// float                          OutAnimRate                    (Parm, OutParm)

void AActor::GetAnimParams(int Channel, struct FName* OutSeqName, float* OutAnimFrame, float* OutAnimRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAnimParams");

	AActor_GetAnimParams_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSeqName != nullptr)
		*OutSeqName = params.OutSeqName;
	if (OutAnimFrame != nullptr)
		*OutAnimFrame = params.OutAnimFrame;
	if (OutAnimRate != nullptr)
		*OutAnimRate = params.OutAnimRate;
}


// Function Engine.Actor.SetBoneRotation
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// struct FRotator                BoneTurn                       (OptionalParm, Parm)
// int                            Space                          (OptionalParm, Parm)
// float                          Alpha                          (OptionalParm, Parm)

void AActor::SetBoneRotation(const struct FName& bonename, const struct FRotator& BoneTurn, int Space, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetBoneRotation");

	AActor_SetBoneRotation_Params params;
	params.bonename = bonename;
	params.BoneTurn = BoneTurn;
	params.Space = Space;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetBoneLocation
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// struct FVector                 BoneTrans                      (OptionalParm, Parm)
// float                          Alpha                          (OptionalParm, Parm)

void AActor::SetBoneLocation(const struct FName& bonename, const struct FVector& BoneTrans, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetBoneLocation");

	AActor_SetBoneLocation_Params params;
	params.bonename = bonename;
	params.BoneTrans = BoneTrans;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetBoneDirection
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// struct FRotator                BoneTurn                       (Parm)
// struct FVector                 BoneTrans                      (OptionalParm, Parm)
// float                          Alpha                          (OptionalParm, Parm)
// int                            Space                          (OptionalParm, Parm)

void AActor::SetBoneDirection(const struct FName& bonename, const struct FRotator& BoneTurn, const struct FVector& BoneTrans, float Alpha, int Space)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetBoneDirection");

	AActor_SetBoneDirection_Params params;
	params.bonename = bonename;
	params.BoneTurn = BoneTurn;
	params.BoneTrans = BoneTrans;
	params.Alpha = Alpha;
	params.Space = Space;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetBoneScale
// (PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Slot                           (Parm)
// float                          BoneScale                      (OptionalParm, Parm)
// struct FName                   bonename                       (OptionalParm, Parm)

void AActor::SetBoneScale(int Slot, float BoneScale, const struct FName& bonename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetBoneScale");

	AActor_SetBoneScale_Params params;
	params.Slot = Slot;
	params.BoneScale = BoneScale;
	params.bonename = bonename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.LockRootMotion
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Lock                           (Parm)

void AActor::LockRootMotion(int Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.LockRootMotion");

	AActor_LockRootMotion_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AttachToBoneWithIndex
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// class AActor*                  Attachment                     (Parm)
// int                            BoneIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::AttachToBoneWithIndex(class AActor* Attachment, int BoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AttachToBoneWithIndex");

	AActor_AttachToBoneWithIndex_Params params;
	params.Attachment = Attachment;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.DetachFromBone
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// class AActor*                  Attachment                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::DetachFromBone(class AActor* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachFromBone");

	AActor_DetachFromBone_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.AttachToBone
// (Final, Latent, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// class AActor*                  Attachment                     (Parm)
// struct FName                   bonename                       (Parm)
// int                            type                           (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::AttachToBone(class AActor* Attachment, const struct FName& bonename, int type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AttachToBone");

	AActor_AttachToBone_Params params;
	params.Attachment = Attachment;
	params.bonename = bonename;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRootRotationDelta
// (Latent, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AActor::GetRootRotationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRootRotationDelta");

	AActor_GetRootRotationDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRootLocationDelta
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AActor::GetRootLocationDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRootLocationDelta");

	AActor_GetRootLocationDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRootRotation
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AActor::GetRootRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRootRotation");

	AActor_GetRootRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRootLocation
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AActor::GetRootLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRootLocation");

	AActor_GetRootLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetBoneCoordsWithBoneIndex
// (Final, Defined, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            BoneIndex                      (Parm)
// struct FCoords                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCoords AActor::GetBoneCoordsWithBoneIndex(int BoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetBoneCoordsWithBoneIndex");

	AActor_GetBoneCoordsWithBoneIndex_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetBoneRotation
// (Final, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// int                            Space                          (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AActor::GetBoneRotation(const struct FName& bonename, int Space)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetBoneRotation");

	AActor_GetBoneRotation_Params params;
	params.bonename = bonename;
	params.Space = Space;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetBoneCoords
// (Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// struct FCoords                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCoords AActor::GetBoneCoords(const struct FName& bonename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetBoneCoords");

	AActor_GetBoneCoords_Params params;
	params.bonename = bonename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.AnimBlendToAlpha
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Stage                          (Parm)
// float                          TargetAlpha                    (Parm)
// float                          TimeInterval                   (Parm)

void AActor::AnimBlendToAlpha(int Stage, float TargetAlpha, float TimeInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AnimBlendToAlpha");

	AActor_AnimBlendToAlpha_Params params;
	params.Stage = Stage;
	params.TargetAlpha = TargetAlpha;
	params.TimeInterval = TimeInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AnimBlendParams
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Stage                          (Parm)
// float                          BlendAlpha                     (OptionalParm, Parm)
// float                          InTime                         (OptionalParm, Parm)
// float                          OutTime                        (OptionalParm, Parm)
// struct FName                   bonename                       (OptionalParm, Parm)
// bool                           bGlobalPose                    (OptionalParm, Parm)

void AActor::AnimBlendParams(int Stage, float BlendAlpha, float InTime, float OutTime, const struct FName& bonename, bool bGlobalPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AnimBlendParams");

	AActor_AnimBlendParams_Params params;
	params.Stage = Stage;
	params.BlendAlpha = BlendAlpha;
	params.InTime = InTime;
	params.OutTime = OutTime;
	params.bonename = bonename;
	params.bGlobalPose = bGlobalPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.BoneRefresh
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Event)

void AActor::BoneRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.BoneRefresh");

	AActor_BoneRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.LinkMesh
// (Iterator, PreOperator, Net, NetReliable, Simulated, Event)
// Parameters:
// class UMesh*                   NewMesh                        (Parm)
// bool                           bKeepAnim                      (OptionalParm, Parm)

void AActor::LinkMesh(class UMesh* NewMesh, bool bKeepAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.LinkMesh");

	AActor_LinkMesh_Params params;
	params.NewMesh = NewMesh;
	params.bKeepAnim = bKeepAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.LinkSkelAnim
// (Final, PreOperator, Net, NetReliable, Simulated, Event)
// Parameters:
// class UMeshAnimation*          Anim                           (Parm)
// class UMesh*                   NewMesh                        (OptionalParm, Parm)

void AActor::LinkSkelAnim(class UMeshAnimation* Anim, class UMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.LinkSkelAnim");

	AActor_LinkSkelAnim_Params params;
	params.Anim = Anim;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GetNotifyChannel
// (PreOperator, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AActor::GetNotifyChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetNotifyChannel");

	AActor_GetNotifyChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.EnableChannelNotify
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Channel                        (Parm)
// int                            Switch                         (Parm)

void AActor::EnableChannelNotify(int Channel, int Switch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableChannelNotify");

	AActor_EnableChannelNotify_Params params;
	params.Channel = Channel;
	params.Switch = Switch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AnimEnd
// (Iterator, Net, Simulated)
// Parameters:
// int                            Channel                        (Parm)

void AActor::AnimEnd(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AnimEnd");

	AActor_AnimEnd_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ClearL2Game
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void AActor::ClearL2Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ClearL2Game");

	AActor_ClearL2Game_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.L2GameActionNotify
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// TEnumAsByte<EL2GameAction>     GameAction                     (Parm)

void AActor::L2GameActionNotify(TEnumAsByte<EL2GameAction> GameAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.L2GameActionNotify");

	AActor_L2GameActionNotify_Params params;
	params.GameAction = GameAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.IsTweening
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Channel                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::IsTweening(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsTweening");

	AActor_IsTweening_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetAnimFrame
// (Final, Defined, Latent, Net, NetReliable, Simulated, Event)
// Parameters:
// float                          Time                           (Parm)
// int                            Channel                        (OptionalParm, Parm)
// int                            UnitFlag                       (OptionalParm, Parm)

void AActor::SetAnimFrame(float Time, int Channel, int UnitFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetAnimFrame");

	AActor_SetAnimFrame_Params params;
	params.Time = Time;
	params.Channel = Channel;
	params.UnitFlag = UnitFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FreezeAnimAt
// (Defined, Latent, Net, NetReliable, Simulated, Event)
// Parameters:
// float                          Time                           (Parm)
// int                            Channel                        (OptionalParm, Parm)

void AActor::FreezeAnimAt(float Time, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FreezeAnimAt");

	AActor_FreezeAnimAt_Params params;
	params.Time = Time;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.HasBoneName
// (Latent, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   bonename                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::HasBoneName(const struct FName& bonename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasBoneName");

	AActor_HasBoneName_Params params;
	params.bonename = bonename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.StopAnimating
// (Defined, Iterator, Net, NetReliable, Simulated, Event)
// Parameters:
// bool                           ClearAllButBase                (OptionalParm, Parm)

void AActor::StopAnimating(bool ClearAllButBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.StopAnimating");

	AActor_StopAnimating_Params params;
	params.ClearAllButBase = ClearAllButBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.HasAnim
// (Final, Iterator, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   Sequence                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::HasAnim(const struct FName& Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAnim");

	AActor_HasAnim_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.FinishAnim
// (Iterator, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Channel                        (OptionalParm, Parm)

void AActor::FinishAnim(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FinishAnim");

	AActor_FinishAnim_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.IsAnimating
// (Final, Defined, Net, NetReliable, Simulated, Event)
// Parameters:
// int                            Channel                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::IsAnimating(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsAnimating");

	AActor_IsAnimating_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.TweenAnim
// (Defined, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          Time                           (Parm)
// int                            Channel                        (OptionalParm, Parm)

void AActor::TweenAnim(const struct FName& Sequence, float Time, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TweenAnim");

	AActor_TweenAnim_Params params;
	params.Sequence = Sequence;
	params.Time = Time;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.LoopAnim
// (Final, Net, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          Rate                           (OptionalParm, Parm)
// float                          TweenTime                      (OptionalParm, Parm)
// int                            Channel                        (OptionalParm, Parm)

void AActor::LoopAnim(const struct FName& Sequence, float Rate, float TweenTime, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.LoopAnim");

	AActor_LoopAnim_Params params;
	params.Sequence = Sequence;
	params.Rate = Rate;
	params.TweenTime = TweenTime;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PlayAnim
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          Rate                           (OptionalParm, Parm)
// float                          TweenTime                      (OptionalParm, Parm)
// int                            Channel                        (OptionalParm, Parm)

void AActor::PlayAnim(const struct FName& Sequence, float Rate, float TweenTime, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PlayAnim");

	AActor_PlayAnim_Params params;
	params.Sequence = Sequence;
	params.Rate = Rate;
	params.TweenTime = TweenTime;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GetMeshName
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::GetMeshName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetMeshName");

	AActor_GetMeshName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetOwner
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// class AActor*                  NewOwner                       (Parm)

void AActor::SetOwner(class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	AActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetBase
// (Latent, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// class AActor*                  NewBase                        (Parm)
// struct FVector                 NewFloor                       (OptionalParm, Parm)

void AActor::SetBase(class AActor* NewBase, const struct FVector& NewFloor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetBase");

	AActor_SetBase_Params params;
	params.NewBase = NewBase;
	params.NewFloor = NewFloor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AutonomousPhysics
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AActor::AutonomousPhysics(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AutonomousPhysics");

	AActor_AutonomousPhysics_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MoveSmooth
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::MoveSmooth(const struct FVector& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MoveSmooth");

	AActor_MoveSmooth_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetRelativeLocation
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 NewLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::SetRelativeLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetRelativeLocation");

	AActor_SetRelativeLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetRelativeRotation
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FRotator                NewRotation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::SetRelativeRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetRelativeRotation");

	AActor_SetRelativeRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetRotation
// (Defined, PreOperator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FRotator                NewRotation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::SetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetRotation");

	AActor_SetRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetLocation
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 NewLocation                    (Parm)
// bool                           bNoCheck                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::SetLocation(const struct FVector& NewLocation, bool bNoCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLocation");

	AActor_SetLocation_Params params;
	params.NewLocation = NewLocation;
	params.bNoCheck = bNoCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.Move
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::Move(const struct FVector& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Move");

	AActor_Move_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetDrawType
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Event)
// Parameters:
// TEnumAsByte<EDrawType>         NewDrawType                    (Parm)

void AActor::SetDrawType(TEnumAsByte<EDrawType> NewDrawType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetDrawType");

	AActor_SetDrawType_Params params;
	params.NewDrawType = NewDrawType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetStaticMesh
// (Final, Latent, Singular, NetReliable, Simulated, Event)
// Parameters:
// class UStaticMesh*             NewStaticMesh                  (Parm)

void AActor::SetStaticMesh(class UStaticMesh* NewStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetStaticMesh");

	AActor_SetStaticMesh_Params params;
	params.NewStaticMesh = NewStaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetDrawScale3D
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FVector                 NewScale3D                     (Parm)

void AActor::SetDrawScale3D(const struct FVector& NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetDrawScale3D");

	AActor_SetDrawScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetDrawScale
// (Final, Iterator, Singular, NetReliable, Simulated, Event)
// Parameters:
// float                          NewScale                       (Parm)

void AActor::SetDrawScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetDrawScale");

	AActor_SetDrawScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetCollisionSize
// (Defined, Singular, NetReliable, Simulated, Event)
// Parameters:
// float                          NewRadius                      (Parm)
// float                          NewHeight                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AActor::SetCollisionSize(float NewRadius, float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetCollisionSize");

	AActor_SetCollisionSize_Params params;
	params.NewRadius = NewRadius;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.SetCollision
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Event)
// Parameters:
// bool                           NewColActors                   (OptionalParm, Parm)
// bool                           NewBlockActors                 (OptionalParm, Parm)
// bool                           NewBlockPlayers                (OptionalParm, Parm)

void AActor::SetCollision(bool NewColActors, bool NewBlockActors, bool NewBlockPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetCollision");

	AActor_SetCollision_Params params;
	params.NewColActors = NewColActors;
	params.NewBlockActors = NewBlockActors;
	params.NewBlockPlayers = NewBlockPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Sleep
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Event)
// Parameters:
// float                          Seconds                        (Parm)

void AActor::Sleep(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Sleep");

	AActor_Sleep_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.Error
// (Final, Iterator, PreOperator, Simulated, Exec)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void AActor::Error(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.Error");

	AActor_Error_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.GetViewport
// (Iterator, PreOperator, NetReliable, Event)
// Parameters:
// class UViewport*               ReturnValue                    (Parm, OutParm, ReturnParm)

class UViewport* AActor::GetViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetViewport");

	AActor_GetViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ConsoleCommand
// (Defined, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AActor::ConsoleCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ConsoleCommand");

	AActor_ConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ParticleEmitter.Trigger
// (Defined, PreOperator, Singular, Simulated)

void UParticleEmitter::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ParticleEmitter.Trigger");

	UParticleEmitter_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ParticleEmitter.SpawnParticle
// (Defined, Iterator, Native, Event)
// Parameters:
// int                            Amount                         (Parm)

void UParticleEmitter::SpawnParticle(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ParticleEmitter.SpawnParticle");

	UParticleEmitter_SpawnParticle_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TrailEmitter.ResetTrail
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event)

void UTrailEmitter::ResetTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TrailEmitter.ResetTrail");

	UTrailEmitter_ResetTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Material.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UMaterial::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Material.Trigger");

	UMaterial_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Material.Reset
// (Defined, Singular, Simulated, Native)

void UMaterial::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Material.Reset");

	UMaterial_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimNotify_Scripted.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class AActor*                  Owner                          (Parm)

void UAnimNotify_Scripted::Notify(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimNotify_Scripted.Notify");

	UAnimNotify_Scripted_Notify_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ShadowBitmapMaterial.Destroy
// (PreOperator, NetReliable, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UShadowBitmapMaterial::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowBitmapMaterial.Destroy");

	UShadowBitmapMaterial_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Projector.UnTouch
// (Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AProjector::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.UnTouch");

	AProjector_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AProjector::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.Touch");

	AProjector_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AProjector::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.PostBeginPlay");

	AProjector_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.DetachActor
// (Defined, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// class AActor*                  A                              (Parm)

void AProjector::DetachActor(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.DetachActor");

	AProjector_DetachActor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.AttachActor
// (Defined, Net, Simulated, Exec, Native)
// Parameters:
// class AActor*                  A                              (Parm)

void AProjector::AttachActor(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.AttachActor");

	AProjector_AttachActor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.AbandonProjector
// (Defined, Iterator, Latent, Net, Simulated, Exec, Native)
// Parameters:
// float                          LifeTime                       (OptionalParm, Parm)

void AProjector::AbandonProjector(float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.AbandonProjector");

	AProjector_AbandonProjector_Params params;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.DetachProjector
// (Final, Iterator, Singular, Exec, Native)
// Parameters:
// bool                           Force                          (OptionalParm, Parm)

void AProjector::DetachProjector(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.DetachProjector");

	AProjector_DetachProjector_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projector.AttachProjector
// (Final, Latent, Singular, Exec, Native)

void AProjector::AttachProjector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projector.AttachProjector");

	AProjector_AttachProjector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AMarkProjector::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.Touch");

	AMarkProjector_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void AMarkProjector::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.Tick");

	AMarkProjector_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.UpdateMarkProjector
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Exec, Native)

void AMarkProjector::UpdateMarkProjector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.UpdateMarkProjector");

	AMarkProjector_UpdateMarkProjector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AMarkProjector::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.Timer");

	AMarkProjector_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AMarkProjector::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.Destroyed");

	AMarkProjector_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AMarkProjector::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.PostBeginPlay");

	AMarkProjector_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MarkProjector.UpdateDesireLocation
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMarkProjector::UpdateDesireLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MarkProjector.UpdateDesireLocation");

	AMarkProjector_UpdateDesireLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ShadowProjector.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void AShadowProjector::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.Tick");

	AShadowProjector_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ShadowProjector.UpdateShadow
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native)

void AShadowProjector::UpdateShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.UpdateShadow");

	AShadowProjector_UpdateShadow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ShadowProjector.InitShadow
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)

void AShadowProjector::InitShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.InitShadow");

	AShadowProjector_InitShadow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ShadowProjector.IsUnderWaterCamera
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AShadowProjector::IsUnderWaterCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.IsUnderWaterCamera");

	AShadowProjector_IsUnderWaterCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ShadowProjector.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AShadowProjector::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.Destroyed");

	AShadowProjector_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ShadowProjector.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AShadowProjector::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.PostBeginPlay");

	AShadowProjector_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ShadowProjector.CheckVisible
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AShadowProjector::CheckVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.CheckVisible");

	AShadowProjector_CheckVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ShadowProjector.UpdateLightInfo
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AShadowProjector::UpdateLightInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ShadowProjector.UpdateLightInfo");

	AShadowProjector_UpdateLightInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Security.ClientMessage
// (Final, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void ASecurity::ClientMessage(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Security.ClientMessage");

	ASecurity_ClientMessage_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Security.BadClient
// (Final, Defined, Iterator, PreOperator, Singular, Event)
// Parameters:
// int                            Code                           (Parm)
// struct FString                 Data                           (Parm, NeedCtorLink)

void ASecurity::BadClient(int Code, const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Security.BadClient");

	ASecurity_BadClient_Params params;
	params.Code = Code;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Security.Perform
// (Final, Latent, Singular, NetReliable, Simulated, Exec, Event)
// Parameters:
// int                            SecType                        (Parm)
// struct FString                 Param1                         (Parm, NeedCtorLink)
// struct FString                 Param2                         (Parm, NeedCtorLink)
// float                          TimeOut                        (Parm)

void ASecurity::Perform(int SecType, const struct FString& Param1, const struct FString& Param2, float TimeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Security.Perform");

	ASecurity_Perform_Params params;
	params.SecType = SecType;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Security.ServerCallback
// (Singular, Simulated, Exec, Native, Event)
// Parameters:
// int                            SecType                        (Parm)
// struct FString                 Data                           (Parm, NeedCtorLink)

void ASecurity::ServerCallback(int SecType, const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Security.ServerCallback");

	ASecurity_ServerCallback_Params params;
	params.SecType = SecType;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Security.ClientPerform
// (Defined, Iterator, Latent, PreOperator, Singular, Event)
// Parameters:
// int                            SecType                        (Parm)
// struct FString                 Param1                         (Parm, NeedCtorLink)
// struct FString                 Param2                         (Parm, NeedCtorLink)

void ASecurity::ClientPerform(int SecType, const struct FString& Param1, const struct FString& Param2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Security.ClientPerform");

	ASecurity_ClientPerform_Params params;
	params.SecType = SecType;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Security.NativePerform
// (Defined, Net, Event)
// Parameters:
// int                            SecType                        (Parm)
// struct FString                 Param1                         (Parm, NeedCtorLink)
// struct FString                 Param2                         (Parm, NeedCtorLink)

void ASecurity::NativePerform(int SecType, const struct FString& Param1, const struct FString& Param2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Security.NativePerform");

	ASecurity_NativePerform_Params params;
	params.SecType = SecType;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScriptedTexture.DrawPortal
// (Final, Defined, Latent, PreOperator, Net, Event)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            Width                          (Parm)
// int                            Height                         (Parm)
// class AActor*                  CamActor                       (Parm)
// struct FVector                 CamLocation                    (Parm)
// struct FRotator                CamRotation                    (Parm)
// int                            FOV                            (OptionalParm, Parm)
// bool                           ClearZ                         (OptionalParm, Parm)

void UScriptedTexture::DrawPortal(int X, int Y, int Width, int Height, class AActor* CamActor, const struct FVector& CamLocation, const struct FRotator& CamRotation, int FOV, bool ClearZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScriptedTexture.DrawPortal");

	UScriptedTexture_DrawPortal_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.CamActor = CamActor;
	params.CamLocation = CamLocation;
	params.CamRotation = CamRotation;
	params.FOV = FOV;
	params.ClearZ = ClearZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScriptedTexture.DrawTile
// (Defined, Latent, PreOperator, Net, Event)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          XL                             (Parm)
// float                          YL                             (Parm)
// float                          U                              (Parm)
// float                          V                              (Parm)
// float                          UL                             (Parm)
// float                          VL                             (Parm)
// class UMaterial*               Material                       (Parm)
// struct FColor                  Color                          (Parm)

void UScriptedTexture::DrawTile(float X, float Y, float XL, float YL, float U, float V, float UL, float VL, class UMaterial* Material, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScriptedTexture.DrawTile");

	UScriptedTexture_DrawTile_Params params;
	params.X = X;
	params.Y = Y;
	params.XL = XL;
	params.YL = YL;
	params.U = U;
	params.V = V;
	params.UL = UL;
	params.VL = VL;
	params.Material = Material;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScriptedTexture.TextSize
// (Final, Latent, PreOperator, Net, Event)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// class UFont*                   Font                           (Parm)
// int                            Width                          (Parm, OutParm)
// int                            Height                         (Parm, OutParm)

void UScriptedTexture::TextSize(const struct FString& Text, class UFont* Font, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScriptedTexture.TextSize");

	UScriptedTexture_TextSize_Params params;
	params.Text = Text;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function Engine.ScriptedTexture.DrawText
// (Latent, PreOperator, Net, Event)
// Parameters:
// int                            StartX                         (Parm)
// int                            StartY                         (Parm)
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// class UFont*                   Font                           (Parm)
// struct FColor                  Color                          (Parm)

void UScriptedTexture::DrawText(int StartX, int StartY, const struct FString& Text, class UFont* Font, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScriptedTexture.DrawText");

	UScriptedTexture_DrawText_Params params;
	params.StartX = StartX;
	params.StartY = StartY;
	params.Text = Text;
	params.Font = Font;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScriptedTexture.SetSize
// (Iterator, Singular, Net, Simulated, Exec, Event)
// Parameters:
// int                            Width                          (Parm)
// int                            Height                         (Parm)

void UScriptedTexture::SetSize(int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScriptedTexture.SetSize");

	UScriptedTexture_SetSize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneManager.SceneEnded
// (Final, Iterator, Latent, Singular, Net, Simulated)

void ASceneManager::SceneEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneManager.SceneEnded");

	ASceneManager_SceneEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneManager.SceneStarted
// (Iterator, Latent, Singular, Net, Simulated)
// Parameters:
// class ALevelInfo*              Info                           (Parm)

void ASceneManager::SceneStarted(class ALevelInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneManager.SceneStarted");

	ASceneManager_SceneStarted_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneManager.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void ASceneManager::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneManager.Trigger");

	ASceneManager_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneManager.BeginPlay
// (Iterator, Singular, Net, Simulated)

void ASceneManager::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneManager.BeginPlay");

	ASceneManager_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneManager.GetTotalSceneTime
// (Latent, Singular, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ASceneManager::GetTotalSceneTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneManager.GetTotalSceneTime");

	ASceneManager_GetTotalSceneTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.SetSimulationCollision
// (Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// TArray<class USimulationCollision*> SimulationCollisions           (Parm, NeedCtorLink)

void APawn::SetSimulationCollision(TArray<class USimulationCollision*> SimulationCollisions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetSimulationCollision");

	APawn_SetSimulationCollision_Params params;
	params.SimulationCollisions = SimulationCollisions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetSimulationCollision
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// TArray<class USimulationCollision*> SimulationCollisions           (Parm, OutParm, NeedCtorLink)

void APawn::GetSimulationCollision(TArray<class USimulationCollision*>* SimulationCollisions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSimulationCollision");

	APawn_GetSimulationCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SimulationCollisions != nullptr)
		*SimulationCollisions = params.SimulationCollisions;
}


// Function Engine.Pawn.NotifyDie
// (Final, Iterator, Latent, Net, Simulated, Exec, Native, Event)

void APawn::NotifyDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.NotifyDie");

	APawn_NotifyDie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetRefSkeletonNum
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APawn::GetRefSkeletonNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRefSkeletonNum");

	APawn_GetRefSkeletonNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetShieldItemSound
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// class USound*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class USound* APawn::GetShieldItemSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetShieldItemSound");

	APawn_GetShieldItemSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDefenseItemSound
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// class USound*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class USound* APawn::GetDefenseItemSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDefenseItemSound");

	APawn_GetDefenseItemSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.SetRelativeCoords
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// class AActor*                  Goal                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::SetRelativeCoords(class AActor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetRelativeCoords");

	APawn_SetRelativeCoords_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.NotifyAttack
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator)
// Parameters:
// class AActor*                  Attacker                       (Parm)

void APawn::NotifyAttack(class AActor* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.NotifyAttack");

	APawn_NotifyAttack_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.AssociateAttackedNotify
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   Attacker                       (Parm)
// class AActor*                  AttackActor                    (Parm)
// int                            type                           (Parm)
// int                            Damage                         (Parm)
// bool                           bMiss                          (Parm)
// bool                           bShieldDefense                 (Parm)
// bool                           bCritical                      (Parm)
// bool                           bSpirit                        (Parm)
// bool                           keepframerate                  (Parm)
// bool                           showeffect                     (Parm)

void APawn::AssociateAttackedNotify(class APawn* Attacker, class AActor* AttackActor, int type, int Damage, bool bMiss, bool bShieldDefense, bool bCritical, bool bSpirit, bool keepframerate, bool showeffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AssociateAttackedNotify");

	APawn_AssociateAttackedNotify_Params params;
	params.Attacker = Attacker;
	params.AttackActor = AttackActor;
	params.type = type;
	params.Damage = Damage;
	params.bMiss = bMiss;
	params.bShieldDefense = bShieldDefense;
	params.bCritical = bCritical;
	params.bSpirit = bSpirit;
	params.keepframerate = keepframerate;
	params.showeffect = showeffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.AttackedNotify
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   Attacker                       (Parm)
// class AActor*                  AttackActor                    (Parm)
// int                            type                           (Parm)
// bool                           keepframerate                  (Parm)
// bool                           showeffect                     (Parm)

void APawn::AttackedNotify(class APawn* Attacker, class AActor* AttackActor, int type, bool keepframerate, bool showeffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AttackedNotify");

	APawn_AttackedNotify_Params params;
	params.Attacker = Attacker;
	params.AttackActor = AttackActor;
	params.type = type;
	params.keepframerate = keepframerate;
	params.showeffect = showeffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.HoldCarriedObject
// (Simulated, Operator)
// Parameters:
// class ACarriedObject*          O                              (Parm)
// struct FName                   AttachmentBone                 (Parm)

void APawn::HoldCarriedObject(class ACarriedObject* O, const struct FName& AttachmentBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.HoldCarriedObject");

	APawn_HoldCarriedObject_Params params;
	params.O = O;
	params.AttachmentBone = AttachmentBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayVictoryAnimation
// (Final, Simulated, Operator)

void APawn::PlayVictoryAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayVictoryAnimation");

	APawn_PlayVictoryAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayLandingAnimation
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Event)
// Parameters:
// float                          impactVel                      (Parm)

void APawn::PlayLandingAnimation(float impactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayLandingAnimation");

	APawn_PlayLandingAnimation_Params params;
	params.impactVel = impactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayLanded
// (Latent, Net, Event)
// Parameters:
// float                          impactVel                      (Parm)

void APawn::PlayLanded(float impactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayLanded");

	APawn_PlayLanded_Params params;
	params.impactVel = impactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayWaiting
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Native)

void APawn::PlayWaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayWaiting");

	APawn_PlayWaiting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayMoving
// (Defined, Latent, Net, Event)

void APawn::PlayMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayMoving");

	APawn_PlayMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayFalling
// (Defined, Net, Simulated, Exec, Native, Event)

void APawn::PlayFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayFalling");

	APawn_PlayFalling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayJump
// (Final, Net, Simulated, Exec, Native, Event)

void APawn::PlayJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayJump");

	APawn_PlayJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CannotJumpNow
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CannotJumpNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CannotJumpNow");

	APawn_CannotJumpNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.AnimEnd
// (Iterator, Net, Simulated)
// Parameters:
// int                            Channel                        (Parm)

void APawn::AnimEnd(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AnimEnd");

	APawn_AnimEnd_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ChangeAnimation
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void APawn::ChangeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ChangeAnimation");

	APawn_ChangeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayTakeHit
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FVector                 HitLoc                         (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)

void APawn::PlayTakeHit(const struct FVector& HitLoc, int Damage, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayTakeHit");

	APawn_PlayTakeHit_Params params;
	params.HitLoc = HitLoc;
	params.Damage = Damage;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.StopPlayFiring
// (Defined, Iterator, Net, Event)

void APawn::StopPlayFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.StopPlayFiring");

	APawn_StopPlayFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayWeaponSwitch
// (Iterator, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// class AWeapon*                 newWeapon                      (Parm)

void APawn::PlayWeaponSwitch(class AWeapon* newWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayWeaponSwitch");

	APawn_PlayWeaponSwitch_Params params;
	params.newWeapon = newWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayFiring
// (Final, Defined, Iterator, Exec, Native)
// Parameters:
// float                          Rate                           (Parm)
// struct FName                   FiringMode                     (Parm)

void APawn::PlayFiring(float Rate, const struct FName& FiringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayFiring");

	APawn_PlayFiring_Params params;
	params.Rate = Rate;
	params.FiringMode = FiringMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayDying
// (Latent, PreOperator, NetReliable, Exec, Native)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLoc                         (Parm)

void APawn::PlayDying(class UClass* DamageType, const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayDying");

	APawn_PlayDying_Params params;
	params.DamageType = DamageType;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.SetAnimAction
// (Latent, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// struct FName                   NewAction                      (Parm)

void APawn::SetAnimAction(const struct FName& NewAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetAnimAction");

	APawn_SetAnimAction_Params params;
	params.NewAction = NewAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ChunkUp
// (Defined, Iterator, Exec, Native)
// Parameters:
// struct FRotator                HitRotation                    (Parm)
// class UClass*                  D                              (Parm)

void APawn::ChunkUp(const struct FRotator& HitRotation, class UClass* D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ChunkUp");

	APawn_ChunkUp_Params params;
	params.HitRotation = HitRotation;
	params.D = D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayHit
// (Defined, Iterator, PreOperator, Net, Event)
// Parameters:
// float                          Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)

void APawn::PlayHit(float Damage, class APawn* instigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayHit");

	APawn_PlayHit_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayDyingSound
// (Final, Defined, Iterator, PreOperator, Net, Event)

void APawn::PlayDyingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayDyingSound");

	APawn_PlayDyingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayMoverHitSound
// (Final, Iterator, PreOperator, Simulated, Operator)

void APawn::PlayMoverHitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayMoverHitSound");

	APawn_PlayMoverHitSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.DoJump
// (Final, Defined, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           bUpdating                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::DoJump(bool bUpdating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DoJump");

	APawn_DoJump_Params params;
	params.bUpdating = bUpdating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.Dodge
// (Final, Defined, Iterator, PreOperator, Simulated, Operator)
// Parameters:
// TEnumAsByte<EDoubleClickDir>   DoubleClickMove                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::Dodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Dodge");

	APawn_Dodge_Params params;
	params.DoubleClickMove = DoubleClickMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.UpdateRocketAcceleration
// (Final, Iterator, Latent, PreOperator, Net, Event)
// Parameters:
// float                          DeltaTime                      (Parm)
// float                          YawChange                      (Parm)
// float                          PitchChange                    (Parm)

void APawn::UpdateRocketAcceleration(float DeltaTime, float YawChange, float PitchChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.UpdateRocketAcceleration");

	APawn_UpdateRocketAcceleration_Params params;
	params.DeltaTime = DeltaTime;
	params.YawChange = YawChange;
	params.PitchChange = PitchChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CanDoubleJump
// (Final, Defined, Iterator, Latent, PreOperator, Net, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CanDoubleJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CanDoubleJump");

	APawn_CanDoubleJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.DoDoubleJump
// (Singular, Net, Event)
// Parameters:
// bool                           bUpdating                      (Parm)

void APawn::DoDoubleJump(bool bUpdating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DoDoubleJump");

	APawn_DoDoubleJump_Params params;
	params.bUpdating = bUpdating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CheckWaterJump
// (Final, Defined, Latent, Singular, Net, Event)
// Parameters:
// struct FVector                 WallNormal                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CheckWaterJump(struct FVector* WallNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CheckWaterJump");

	APawn_CheckWaterJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WallNormal != nullptr)
		*WallNormal = params.WallNormal;

	return params.ReturnValue;
}


// Function Engine.Pawn.TakeDrowningDamage
// (Final, Defined, PreOperator, Singular, Net, Event)

void APawn::TakeDrowningDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.TakeDrowningDamage");

	APawn_TakeDrowningDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.BreathTimer
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Native)

void APawn::BreathTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.BreathTimer");

	APawn_BreathTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.IsInPain
// (Final, Defined, Iterator, PreOperator, Singular, Net, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::IsInPain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsInPain");

	APawn_IsInPain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.TouchingWaterVolume
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::TouchingWaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.TouchingWaterVolume");

	APawn_TouchingWaterVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.HeadVolumeChange
// (Defined, Latent, Net, Simulated)
// Parameters:
// class APhysicsVolume*          newHeadVolume                  (Parm)

void APawn::HeadVolumeChange(class APhysicsVolume* newHeadVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.HeadVolumeChange");

	APawn_HeadVolumeChange_Params params;
	params.newHeadVolume = newHeadVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Landed
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)

void APawn::Landed(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Landed");

	APawn_Landed_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.HitWall
// (Final, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)

void APawn::HitWall(const struct FVector& HitNormal, class AActor* Wall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.HitWall");

	APawn_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Falling
// (Defined, Iterator, PreOperator, Singular, Simulated)

void APawn::Falling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Falling");

	APawn_Falling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Gibbed
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::Gibbed(class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Gibbed");

	APawn_Gibbed_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.Died
// (Final, Singular, Net, Simulated, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void APawn::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Died");

	APawn_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetEffTargetLocation
// (PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FVector                 LocVector                      (Parm, OutParm)

void APawn::GetEffTargetLocation(struct FVector* LocVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetEffTargetLocation");

	APawn_GetEffTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocVector != nullptr)
		*LocVector = params.LocVector;
}


// Function Engine.Pawn.GetKillerController
// (Defined, Iterator, PreOperator, Singular, Net, Event)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AController* APawn::GetKillerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetKillerController");

	APawn_GetKillerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetTeam
// (Final, Iterator, Singular, Simulated, Operator)
// Parameters:
// class ATeamInfo*               ReturnValue                    (Parm, OutParm, ReturnParm)

class ATeamInfo* APawn::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetTeam");

	APawn_GetTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void APawn::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.TakeDamage");

	APawn_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.SetMovementPhysics
// (Latent, PreOperator, Singular, Net, Event)

void APawn::SetMovementPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetMovementPhysics");

	APawn_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Gasp
// (Final, Defined, Latent, PreOperator, Singular, Net, Event)

void APawn::Gasp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Gasp");

	APawn_Gasp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.SetMesh
// (Final, Iterator, Latent, Net, Exec, Native)

void APawn::SetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetMesh");

	APawn_SetMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PostNetBeginPlay
// (Iterator, Singular, Net, NetReliable, Simulated, Native)

void APawn::PostNetBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PostNetBeginPlay");

	APawn_PostNetBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void APawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PostBeginPlay");

	APawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void APawn::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PreBeginPlay");

	APawn_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void APawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Destroyed");

	APawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.EyePosition
// (Defined, Iterator, Latent, Net, Exec, Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector APawn::EyePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.EyePosition");

	APawn_EyePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.UpdateEyeHeight
// (Final, Defined, Iterator, PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void APawn::UpdateEyeHeight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.UpdateEyeHeight");

	APawn_UpdateEyeHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.BaseChange
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated)

void APawn::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.BaseChange");

	APawn_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.JumpOffPawn
// (Iterator, Latent, PreOperator, Singular, Net, Event)

void APawn::JumpOffPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.JumpOffPawn");

	APawn_JumpOffPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.gibbedBy
// (Final, Iterator, Latent, PreOperator, Singular, Net, Event)
// Parameters:
// class AActor*                  Other                          (Parm)

void APawn::gibbedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.gibbedBy");

	APawn_gibbedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.EncroachedBy
// (Latent, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APawn::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.EncroachedBy");

	APawn_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.EncroachingOn
// (Final, Defined, Iterator, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.EncroachingOn");

	APawn_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.ServerChangedWeapon
// (Iterator, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// class AWeapon*                 OldWeapon                      (Parm)
// class AWeapon*                 W                              (Parm)

void APawn::ServerChangedWeapon(class AWeapon* OldWeapon, class AWeapon* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ServerChangedWeapon");

	APawn_ServerChangedWeapon_Params params;
	params.OldWeapon = OldWeapon;
	params.W = W;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetWeaponBoneFor
// (Defined, NetReliable, Event)
// Parameters:
// class AInventory*              i                              (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetWeaponBoneFor(class AInventory* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetWeaponBoneFor");

	APawn_GetWeaponBoneFor_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.ChangedWeapon
// (Final, Iterator, PreOperator, Net, Simulated, Native)

void APawn::ChangedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ChangedWeapon");

	APawn_ChangedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.DeleteInventory
// (Final, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// class AInventory*              item                           (Parm)

void APawn::DeleteInventory(class AInventory* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DeleteInventory");

	APawn_DeleteInventory_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.AddInventory
// (Defined, PreOperator, Net, Exec, Native)
// Parameters:
// class AInventory*              NewItem                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::AddInventory(class AInventory* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AddInventory");

	APawn_AddInventory_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.FindInventoryType
// (Defined, Iterator, Latent, Net, Simulated, Native)
// Parameters:
// class UClass*                  DesiredClass                   (Parm)
// class AInventory*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AInventory* APawn::FindInventoryType(class UClass* DesiredClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.FindInventoryType");

	APawn_FindInventoryType_Params params;
	params.DesiredClass = DesiredClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.NextItem
// (Final, Defined, Iterator, Singular, NetReliable, Exec, Native)

void APawn::NextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.NextItem");

	APawn_NextItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.TossWeapon
// (Final, Iterator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FVector                 TossVel                        (Parm)

void APawn::TossWeapon(const struct FVector& TossVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.TossWeapon");

	APawn_TossWeapon_Params params;
	params.TossVel = TossVel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CanThrowWeapon
// (Final, Defined, Latent, NetReliable, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CanThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CanThrowWeapon");

	APawn_CanThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.InCurrentCombo
// (Defined, PreOperator, Singular, Simulated, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::InCurrentCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.InCurrentCombo");

	APawn_InCurrentCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.ClientDying
// (Final, Defined, Iterator, PreOperator, Net, Exec, Native)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void APawn::ClientDying(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ClientDying");

	APawn_ClientDying_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.FaceRotation
// (Iterator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FRotator                NewRotation                    (Parm)
// float                          DeltaTime                      (Parm)

void APawn::FaceRotation(const struct FRotator& NewRotation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.FaceRotation");

	APawn_FaceRotation_Params params;
	params.NewRotation = NewRotation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ClientSetRotation
// (Final, NetReliable, Simulated, Native)
// Parameters:
// struct FRotator                NewRotation                    (Parm)

void APawn::ClientSetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ClientSetRotation");

	APawn_ClientSetRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ClientSetLocation
// (Final, Defined, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// struct FVector                 NewLocation                    (Parm)
// struct FRotator                NewRotation                    (Parm)

void APawn::ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ClientSetLocation");

	APawn_ClientSetLocation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ClientReStart
// (Iterator, Singular, Net, Simulated, Native)

void APawn::ClientReStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ClientReStart");

	APawn_ClientReStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.TakeFallingDamage
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Operator)

void APawn::TakeFallingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.TakeFallingDamage");

	APawn_TakeFallingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.KilledBy
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   EventInstigator                (Parm)

void APawn::KilledBy(class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.KilledBy");

	APawn_KilledBy_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.AddVelocity
// (Final, PreOperator, NetReliable, Event)
// Parameters:
// struct FVector                 NewVelocity                    (Parm)

void APawn::AddVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AddVelocity");

	APawn_AddVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.RestartPlayer
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)

void APawn::RestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.RestartPlayer");

	APawn_RestartPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.StartCrouch
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// float                          HeightAdjust                   (Parm)

void APawn::StartCrouch(float HeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.StartCrouch");

	APawn_StartCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.EndCrouch
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// float                          HeightAdjust                   (Parm)

void APawn::EndCrouch(float HeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.EndCrouch");

	APawn_EndCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ShouldCrouch
// (Defined, NetReliable, Simulated, Native)
// Parameters:
// bool                           Crouch                         (Parm)

void APawn::ShouldCrouch(bool Crouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ShouldCrouch");

	APawn_ShouldCrouch_Params params;
	params.Crouch = Crouch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.FellOutOfWorld
// (Defined, PreOperator, Net, NetReliable, Exec, Native)
// Parameters:
// TEnumAsByte<EeKillZType>       KillType                       (Parm)

void APawn::FellOutOfWorld(TEnumAsByte<EeKillZType> KillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.FellOutOfWorld");

	APawn_FellOutOfWorld_Params params;
	params.KillType = KillType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ModifyVelocity
// (Defined, PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FVector                 OldVelocity                    (Parm)

void APawn::ModifyVelocity(float DeltaTime, const struct FVector& OldVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ModifyVelocity");

	APawn_ModifyVelocity_Params params;
	params.DeltaTime = DeltaTime;
	params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.JumpOutOfWater
// (Latent, PreOperator, Singular, Simulated, Operator)
// Parameters:
// struct FVector                 jumpDir                        (Parm)

void APawn::JumpOutOfWater(const struct FVector& jumpDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.JumpOutOfWater");

	APawn_JumpOutOfWater_Params params;
	params.jumpDir = jumpDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.FinishedInterpolation
// (Final, Defined, Iterator, Net, NetReliable, Exec, Native)

void APawn::FinishedInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.FinishedInterpolation");

	APawn_FinishedInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.SetDefaultDisplayProperties
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void APawn::SetDefaultDisplayProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetDefaultDisplayProperties");

	APawn_SetDefaultDisplayProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.SetDisplayProperties
// (Final, Defined, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// TEnumAsByte<ERenderStyle>      NewStyle                       (Parm)
// class UMaterial*               NewTexture                     (Parm)
// bool                           bLighting                      (Parm)

void APawn::SetDisplayProperties(TEnumAsByte<ERenderStyle> NewStyle, class UMaterial* NewTexture, bool bLighting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetDisplayProperties");

	APawn_SetDisplayProperties_Params params;
	params.NewStyle = NewStyle;
	params.NewTexture = NewTexture;
	params.bLighting = bLighting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GiveWeapon
// (Singular, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 aClassName                     (Parm, NeedCtorLink)

void APawn::GiveWeapon(const struct FString& aClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GiveWeapon");

	APawn_GiveWeapon_Params params;
	params.aClassName = aClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CanTrigger
// (Final, Iterator, PreOperator, NetReliable, Event)
// Parameters:
// class ATrigger*                t                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CanTrigger(class ATrigger* t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CanTrigger");

	APawn_CanTrigger_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void APawn::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Trigger");

	APawn_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ClientMessage
// (Final, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void APawn::ClientMessage(const struct FString& S, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ClientMessage");

	APawn_ClientMessage_Params params;
	params.S = S;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ReceiveLocalizedMessage
// (Final, Iterator, Latent, Singular, Net, Simulated, Native)
// Parameters:
// class UClass*                  Message                        (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void APawn::ReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ReceiveLocalizedMessage");

	APawn_ReceiveLocalizedMessage_Params params;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.HandlePickup
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APickup*                 pick                           (Parm)

void APawn::HandlePickup(class APickup* pick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.HandlePickup");

	APawn_HandlePickup_Params params;
	params.pick = pick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.AdjustedStrength
// (Defined, Latent, PreOperator, Singular, Simulated, Operator)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APawn::AdjustedStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AdjustedStrength");

	APawn_AdjustedStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.ShootSpecial
// (Final, Iterator, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// class AActor*                  A                              (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* APawn::ShootSpecial(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ShootSpecial");

	APawn_ShootSpecial_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.AdjustAim
// (Defined, Iterator, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// class AAmmunition*             FiredAmmunition                (Parm)
// struct FVector                 projStart                      (Parm)
// int                            aimerror                       (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator APawn::AdjustAim(class AAmmunition* FiredAmmunition, const struct FVector& projStart, int aimerror)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AdjustAim");

	APawn_AdjustAim_Params params;
	params.FiredAmmunition = FiredAmmunition;
	params.projStart = projStart;
	params.aimerror = aimerror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.LineOfSightTo
// (Defined, Singular, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::LineOfSightTo(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.LineOfSightTo");

	APawn_LineOfSightTo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.SetMoveTarget
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  NewTarget                      (Parm)

void APawn::SetMoveTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetMoveTarget");

	APawn_SetMoveTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetMoveTarget
// (Defined, Iterator, Singular, Net, Event)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* APawn::GetMoveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMoveTarget");

	APawn_GetMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.PressingAltFire
// (Defined, Net, Simulated, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::PressingAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PressingAltFire");

	APawn_PressingAltFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.PressingFire
// (Final, Defined, Net, Simulated, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::PressingFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PressingFire");

	APawn_PressingFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.NearMoveTarget
// (Iterator, Net, Simulated, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::NearMoveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.NearMoveTarget");

	APawn_NearMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.InGodMode
// (Final, Iterator, Net, Simulated, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::InGodMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.InGodMode");

	APawn_InGodMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.SetViewRotation
// (Final, Defined, Iterator, Singular, Net, Exec, Native)
// Parameters:
// struct FRotator                NewRotation                    (Parm)

void APawn::SetViewRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetViewRotation");

	APawn_SetViewRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetViewRotation
// (Final, Latent, Net, Simulated, Native)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator APawn::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetViewRotation");

	APawn_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.IsFirstPerson
// (Final, Defined, Iterator, Net, Simulated, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsFirstPerson");

	APawn_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.IsLocallyControlled
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::IsLocallyControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsLocallyControlled");

	APawn_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.IsHumanControlled
// (Final, Latent, PreOperator, Singular, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::IsHumanControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsHumanControlled");

	APawn_IsHumanControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.WasPlayerPawn
// (Final, Defined, Singular, NetReliable, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::WasPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.WasPlayerPawn");

	APawn_WasPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.IsPlayerPawn
// (Defined, Latent, Net, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::IsPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsPlayerPawn");

	APawn_IsPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.CheckBob
// (Final, Latent, Singular, Net, Exec, Native)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FVector                 Y                              (Parm)

void APawn::CheckBob(float DeltaTime, const struct FVector& Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CheckBob");

	APawn_CheckBob_Params params;
	params.DeltaTime = DeltaTime;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.WeaponBob
// (Iterator, Singular, NetReliable, Event)
// Parameters:
// float                          BobDamping                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector APawn::WeaponBob(float BobDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.WeaponBob");

	APawn_WeaponBob_Params params;
	params.BobDamping = BobDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.ModifiedPlayerViewOffset
// (Defined, Iterator, Singular, NetReliable, Event)
// Parameters:
// class AInventory*              Inv                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector APawn::ModifiedPlayerViewOffset(class AInventory* Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ModifiedPlayerViewOffset");

	APawn_ModifiedPlayerViewOffset_Params params;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.CalcDrawOffset
// (Final, Latent, PreOperator, NetReliable, Exec, Native)
// Parameters:
// class AInventory*              Inv                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector APawn::CalcDrawOffset(class AInventory* Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CalcDrawOffset");

	APawn_CalcDrawOffset_Params params;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void APawn::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DisplayDebug");

	APawn_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.Pawn.ClimbLadder
// (Defined, Iterator, PreOperator, NetReliable, Exec, Native)
// Parameters:
// class ALadderVolume*           L                              (Parm)

void APawn::ClimbLadder(class ALadderVolume* L)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ClimbLadder");

	APawn_ClimbLadder_Params params;
	params.L = L;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.EndClimbLadder
// (PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class ALadderVolume*           OldLadder                      (Parm)

void APawn::EndClimbLadder(class ALadderVolume* OldLadder)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.EndClimbLadder");

	APawn_EndClimbLadder_Params params;
	params.OldLadder = OldLadder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CanSplash
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CanSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CanSplash");

	APawn_CanSplash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.SetWalking
// (Final, PreOperator, Net, Event)
// Parameters:
// bool                           bNewIsWalking                  (Parm)

void APawn::SetWalking(bool bNewIsWalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetWalking");

	APawn_SetWalking_Params params;
	params.bNewIsWalking = bNewIsWalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.CanGrabLadder
// (Final, Defined, PreOperator, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::CanGrabLadder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.CanGrabLadder");

	APawn_CanGrabLadder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.DropToGround
// (Defined, Latent, Singular, NetReliable, Event)

void APawn::DropToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DropToGround");

	APawn_DropToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.BecomeViewTarget
// (Final, Defined, Singular, NetReliable, Simulated, Native)

void APawn::BecomeViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.BecomeViewTarget");

	APawn_BecomeViewTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PointOfView
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::PointOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PointOfView");

	APawn_PointOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.UnPossessed
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native)

void APawn::UnPossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.UnPossessed");

	APawn_UnPossessed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PossessedBy
// (Final, Iterator, Latent, NetReliable, Exec, Native)
// Parameters:
// class AController*             C                              (Parm)

void APawn::PossessedBy(class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PossessedBy");

	APawn_PossessedBy_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayTeleportEffect
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Native)
// Parameters:
// bool                           bOut                           (Parm)
// bool                           bSound                         (Parm)

void APawn::PlayTeleportEffect(bool bOut, bool bSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayTeleportEffect");

	APawn_PlayTeleportEffect_Params params;
	params.bOut = bOut;
	params.bSound = bSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetHumanReadableName
// (Defined, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APawn::GetHumanReadableName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetHumanReadableName");

	APawn_GetHumanReadableName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.SpecialCalcView
// (Final, Defined, Latent, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  ViewActor                      (Parm, OutParm)
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::SpecialCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SpecialCalcView");

	APawn_SpecialCalcView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewActor != nullptr)
		*ViewActor = params.ViewActor;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;

	return params.ReturnValue;
}


// Function Engine.Pawn.DrawHUD
// (Defined, Latent, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void APawn::DrawHUD(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DrawHUD");

	APawn_DrawHUD_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Fire
// (PreOperator, Singular, Simulated, Native)
// Parameters:
// float                          f                              (OptionalParm, Parm)

void APawn::Fire(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Fire");

	APawn_Fire_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.Reset
// (Defined, Singular, Simulated, Native)

void APawn::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.Reset");

	APawn_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.PlayAnimUM
// (Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   Sequence                       (Parm)
// int                            UpdateMovementAnim             (OptionalParm, Parm)
// float                          Rate                           (OptionalParm, Parm)
// float                          TweenTime                      (OptionalParm, Parm)
// int                            Channel                        (OptionalParm, Parm)

void APawn::PlayAnimUM(const struct FName& Sequence, int UpdateMovementAnim, float Rate, float TweenTime, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PlayAnimUM");

	APawn_PlayAnimUM_Params params;
	params.Sequence = Sequence;
	params.UpdateMovementAnim = UpdateMovementAnim;
	params.Rate = Rate;
	params.TweenTime = TweenTime;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ForceCrouch
// (Final, Iterator, PreOperator, Singular, NetReliable, Event)

void APawn::ForceCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ForceCrouch");

	APawn_ForceCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.ReachedDestination
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class AActor*                  Goal                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APawn::ReachedDestination(class AActor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ReachedDestination");

	APawn_ReachedDestination_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.AnimBegin
// (Defined, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FName                   SequenceName                   (Parm)

void APawn::AnimBegin(const struct FName& SequenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AnimBegin");

	APawn_AnimBegin_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.SetHeadScale
// (Final, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// float                          NewScale                       (Parm)

void APawn::SetHeadScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetHeadScale");

	APawn_SetHeadScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pawn.GetRiderDeathAnimName
// (Iterator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetRiderDeathAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRiderDeathAnimName");

	APawn_GetRiderDeathAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetRiderDeathWaitAnimName
// (Final, Iterator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetRiderDeathWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRiderDeathWaitAnimName");

	APawn_GetRiderDeathWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetRiderRunAnimName
// (Defined, Iterator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetRiderRunAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRiderRunAnimName");

	APawn_GetRiderRunAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetRiderAtkAnimName
// (Final, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetRiderAtkAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRiderAtkAnimName");

	APawn_GetRiderAtkAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetRiderWaitAnimName
// (Defined, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetRiderWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRiderWaitAnimName");

	APawn_GetRiderWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetThrowAnimName
// (Final, Defined, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetThrowAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetThrowAnimName");

	APawn_GetThrowAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetPicItemAnimName
// (Iterator, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetPicItemAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetPicItemAnimName");

	APawn_GetPicItemAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetMagicFriendAnimName
// (Final, Iterator, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetMagicFriendAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMagicFriendAnimName");

	APawn_GetMagicFriendAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetMagicNoTargetAnimName
// (Defined, Iterator, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetMagicNoTargetAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMagicNoTargetAnimName");

	APawn_GetMagicNoTargetAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetMagicShotAnimName
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetMagicShotAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMagicShotAnimName");

	APawn_GetMagicShotAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetMagicThrowAnimName
// (PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetMagicThrowAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMagicThrowAnimName");

	APawn_GetMagicThrowAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetCastEndAnimName
// (Final, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetCastEndAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetCastEndAnimName");

	APawn_GetCastEndAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetCastLongAnimName
// (Defined, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetCastLongAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetCastLongAnimName");

	APawn_GetCastLongAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetCastMidAnimName
// (Final, Defined, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetCastMidAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetCastMidAnimName");

	APawn_GetCastMidAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetCastShortAnimName
// (Iterator, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetCastShortAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetCastShortAnimName");

	APawn_GetCastShortAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDamageAnimName
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetDamageAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDamageAnimName");

	APawn_GetDamageAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDeathWaitAnimName
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetDeathWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDeathWaitAnimName");

	APawn_GetDeathWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDeathAnimName
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetDeathAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDeathAnimName");

	APawn_GetDeathAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDodgeAnimName
// (Latent, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetDodgeAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDodgeAnimName");

	APawn_GetDodgeAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDefenceAnimName
// (Final, Latent, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetDefenceAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDefenceAnimName");

	APawn_GetDefenceAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetShieldAtkAnimName
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetShieldAtkAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetShieldAtkAnimName");

	APawn_GetShieldAtkAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk28AnimName
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk28AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk28AnimName");

	APawn_GetSpAtk28AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk27AnimName
// (Final, Defined, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk27AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk27AnimName");

	APawn_GetSpAtk27AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk26AnimName
// (Iterator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk26AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk26AnimName");

	APawn_GetSpAtk26AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk25AnimName
// (Final, Iterator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk25AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk25AnimName");

	APawn_GetSpAtk25AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk24AnimName
// (Defined, Iterator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk24AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk24AnimName");

	APawn_GetSpAtk24AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk23AnimName
// (Final, Defined, Iterator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk23AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk23AnimName");

	APawn_GetSpAtk23AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk22AnimName
// (Latent, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk22AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk22AnimName");

	APawn_GetSpAtk22AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk21AnimName
// (Final, Latent, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk21AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk21AnimName");

	APawn_GetSpAtk21AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk20AnimName
// (Defined, Latent, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk20AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk20AnimName");

	APawn_GetSpAtk20AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk19AnimName
// (Final, Defined, Latent, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk19AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk19AnimName");

	APawn_GetSpAtk19AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk18AnimName
// (Defined, Iterator, Latent, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk18AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk18AnimName");

	APawn_GetSpAtk18AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk17AnimName
// (PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk17AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk17AnimName");

	APawn_GetSpAtk17AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk16AnimName
// (Final, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk16AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk16AnimName");

	APawn_GetSpAtk16AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk15AnimName
// (Defined, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk15AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk15AnimName");

	APawn_GetSpAtk15AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk14AnimName
// (Final, Defined, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk14AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk14AnimName");

	APawn_GetSpAtk14AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk13AnimName
// (Iterator, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk13AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk13AnimName");

	APawn_GetSpAtk13AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk12AnimName
// (Final, Iterator, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk12AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk12AnimName");

	APawn_GetSpAtk12AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk11AnimName
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk11AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk11AnimName");

	APawn_GetSpAtk11AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk10AnimName
// (Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk10AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk10AnimName");

	APawn_GetSpAtk10AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk09AnimName
// (Final, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk09AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk09AnimName");

	APawn_GetSpAtk09AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk08AnimName
// (Defined, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk08AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk08AnimName");

	APawn_GetSpAtk08AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk07AnimName
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk07AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk07AnimName");

	APawn_GetSpAtk07AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk06AnimName
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk06AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk06AnimName");

	APawn_GetSpAtk06AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk05AnimName
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk05AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk05AnimName");

	APawn_GetSpAtk05AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk04AnimName
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk04AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk04AnimName");

	APawn_GetSpAtk04AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk03AnimName
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk03AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk03AnimName");

	APawn_GetSpAtk03AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk02AnimName
// (Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk02AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk02AnimName");

	APawn_GetSpAtk02AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSpAtk01AnimName
// (Defined, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSpAtk01AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSpAtk01AnimName");

	APawn_GetSpAtk01AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetAtkDownAnimName
// (Final, Defined, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetAtkDownAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetAtkDownAnimName");

	APawn_GetAtkDownAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetAtkUpAnimName
// (Iterator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetAtkUpAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetAtkUpAnimName");

	APawn_GetAtkUpAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetAtk03AnimName
// (Final, Iterator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetAtk03AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetAtk03AnimName");

	APawn_GetAtk03AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetAtk02AnimName
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetAtk02AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetAtk02AnimName");

	APawn_GetAtk02AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetAtk01AnimName
// (Latent, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetAtk01AnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetAtk01AnimName");

	APawn_GetAtk01AnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetStunAnimName
// (Final, Latent, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetStunAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetStunAnimName");

	APawn_GetStunAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetChairStandAnimName
// (Defined, Latent, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetChairStandAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetChairStandAnimName");

	APawn_GetChairStandAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetChairWaitAnimName
// (Iterator, Latent, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetChairWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetChairWaitAnimName");

	APawn_GetChairWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetChairSitAnimName
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetChairSitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetChairSitAnimName");

	APawn_GetChairSitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetDeathStandAnimName
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetDeathStandAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetDeathStandAnimName");

	APawn_GetDeathStandAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetStandAnimName
// (PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetStandAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetStandAnimName");

	APawn_GetStandAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSitWaitAnimName
// (Final, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSitWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSitWaitAnimName");

	APawn_GetSitWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetSitAnimName
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetSitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetSitAnimName");

	APawn_GetSitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetAtkWaitAnimName
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetAtkWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetAtkWaitAnimName");

	APawn_GetAtkWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetWaitAnimName
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetWaitAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetWaitAnimName");

	APawn_GetWaitAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetBJumpAnimName
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetBJumpAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetBJumpAnimName");

	APawn_GetBJumpAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetJumpAnimName
// (Latent, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetJumpAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetJumpAnimName");

	APawn_GetJumpAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetRunAnimName
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetRunAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetRunAnimName");

	APawn_GetRunAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetWalkAnimName
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetWalkAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetWalkAnimName");

	APawn_GetWalkAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pawn.GetTurnAnimName
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName APawn::GetTurnAnimName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetTurnAnimName");

	APawn_GetTurnAnimName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Emitter.SetDisabled
// (Final, Defined, PreOperator, Net, NetReliable, Operator)
// Parameters:
// bool                           dis                            (Parm)

void AEmitter::SetDisabled(bool dis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Emitter.SetDisabled");

	AEmitter_SetDisabled_Params params;
	params.dis = dis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Emitter.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AEmitter::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Emitter.Trigger");

	AEmitter_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Emitter.UpdatePrecacheMaterials
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native)

void AEmitter::UpdatePrecacheMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Emitter.UpdatePrecacheMaterials");

	AEmitter_UpdatePrecacheMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Emitter.SetSizeScale
// (Iterator, PreOperator, Net, NetReliable, Operator)
// Parameters:
// float                          NewScale                       (Parm)

void AEmitter::SetSizeScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Emitter.SetSizeScale");

	AEmitter_SetSizeScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Emitter.Kill
// (Latent, PreOperator, Singular, Event)

void AEmitter::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Emitter.Kill");

	AEmitter_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AAirEmitter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.PostBeginPlay");

	AAirEmitter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.ApplyFadeAlpha
// (Final, Singular, Exec, Native)

void AAirEmitter::ApplyFadeAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.ApplyFadeAlpha");

	AAirEmitter_ApplyFadeAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AAirEmitter::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.Timer");

	AAirEmitter_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.SetAirVolume
// (Iterator, Singular, Net, Event)
// Parameters:
// class AAirVolume*              NewVolume                      (Parm)

void AAirEmitter::SetAirVolume(class AAirVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.SetAirVolume");

	AAirEmitter_SetAirVolume_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.UnTouchVolume
// (Iterator, Latent, PreOperator, Exec, Native)

void AAirEmitter::UnTouchVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.UnTouchVolume");

	AAirEmitter_UnTouchVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.TouchVolume
// (Defined, Latent, PreOperator, Exec, Native)

void AAirEmitter::TouchVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.TouchVolume");

	AAirEmitter_TouchVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.ForceKill
// (PreOperator, Singular, Net, Simulated, Exec, Native, Event)

void AAirEmitter::ForceKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.ForceKill");

	AAirEmitter_ForceKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.ClearL2Game
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void AAirEmitter::ClearL2Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.ClearL2Game");

	AAirEmitter_ClearL2Game_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AAirEmitter::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.Destroyed");

	AAirEmitter_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AirEmitter.IsInAirVolume
// (Final, Defined, Iterator, PreOperator, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAirEmitter::IsInAirVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirEmitter.IsInAirVolume");

	AAirEmitter_IsInAirVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.WaterHitEmitter.GetSpawnRate
// (Defined, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// float                          PawnVelocity                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWaterHitEmitter::GetSpawnRate(float PawnVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WaterHitEmitter.GetSpawnRate");

	AWaterHitEmitter_GetSpawnRate_Params params;
	params.PawnVelocity = PawnVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mover.GetEffTargetLocation
// (PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FVector                 LocVector                      (Parm, OutParm)

void AMover::GetEffTargetLocation(struct FVector* LocVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.GetEffTargetLocation");

	AMover_GetEffTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocVector != nullptr)
		*LocVector = params.LocVector;
}


// Function Engine.Mover.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AMover::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.TakeDamage");

	AMover_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.Bump
// (Final, Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AMover::Bump(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.Bump");

	AMover_Bump_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.EncroachingOn
// (Final, Defined, Iterator, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMover::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.EncroachingOn");

	AMover_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mover.MakeGroupReturn
// (Final, Defined, Singular, Event)

void AMover::MakeGroupReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.MakeGroupReturn");

	AMover_MakeGroupReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.MakeGroupStop
// (Final, Latent, Singular, Event)

void AMover::MakeGroupStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.MakeGroupStop");

	AMover_MakeGroupStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AMover::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.PostBeginPlay");

	AMover_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.BeginPlay
// (Iterator, Singular, Net, Simulated)

void AMover::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.BeginPlay");

	AMover_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.DoClose
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Native)

void AMover::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.DoClose");

	AMover_DoClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.DoOpen
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Native)

void AMover::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.DoOpen");

	AMover_DoOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.FinishedOpening
// (Defined, Iterator, Latent, PreOperator, Exec, Native)

void AMover::FinishedOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.FinishedOpening");

	AMover_FinishedOpening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.FinishedClosing
// (Iterator, Singular, Exec, Native)

void AMover::FinishedClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.FinishedClosing");

	AMover_FinishedClosing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.FinishNotify
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Native)

void AMover::FinishNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.FinishNotify");

	AMover_FinishNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.KeyFrameReached
// (Defined, Singular, Net, Simulated, Exec, Native, Event)

void AMover::KeyFrameReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.KeyFrameReached");

	AMover_KeyFrameReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.SetKeyframe
// (Defined, Singular, NetReliable, Operator)
// Parameters:
// unsigned char                  NewKeyNum                      (Parm)
// struct FVector                 NewLocation                    (Parm)
// struct FRotator                NewRotation                    (Parm)

void AMover::SetKeyframe(unsigned char NewKeyNum, const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.SetKeyframe");

	AMover_SetKeyframe_Params params;
	params.NewKeyNum = NewKeyNum;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.InterpolateTo
// (Final, Defined, Singular, NetReliable, Operator)
// Parameters:
// unsigned char                  NewKeyNum                      (Parm)
// float                          Seconds                        (Parm)

void AMover::InterpolateTo(unsigned char NewKeyNum, float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.InterpolateTo");

	AMover_InterpolateTo_Params params;
	params.NewKeyNum = NewKeyNum;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AMover::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.Timer");

	AMover_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mover.StartInterpolation
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void AMover::StartInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mover.StartInterpolation");

	AMover_StartInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Modifier.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UModifier::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Modifier.Trigger");

	UModifier_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Modifier.Reset
// (Defined, Singular, Simulated, Native)

void UModifier::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Modifier.Reset");

	UModifier_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BumpShader.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UBumpShader::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BumpShader.Trigger");

	UBumpShader_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BumpShader.Reset
// (Defined, Singular, Simulated, Native)

void UBumpShader::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BumpShader.Reset");

	UBumpShader_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MaterialSequence.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UMaterialSequence::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialSequence.Trigger");

	UMaterialSequence_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MaterialSequence.Reset
// (Defined, Singular, Simulated, Native)

void UMaterialSequence::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialSequence.Reset");

	UMaterialSequence_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MaterialSwitch.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UMaterialSwitch::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialSwitch.Trigger");

	UMaterialSwitch_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MaterialSwitch.Reset
// (Defined, Singular, Simulated, Native)

void UMaterialSwitch::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MaterialSwitch.Reset");

	UMaterialSwitch_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TexOscillatorTriggered.Reset
// (Defined, Singular, Simulated, Native)

void UTexOscillatorTriggered::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TexOscillatorTriggered.Reset");

	UTexOscillatorTriggered_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TexOscillatorTriggered.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UTexOscillatorTriggered::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TexOscillatorTriggered.Trigger");

	UTexOscillatorTriggered_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TexPannerTriggered.Reset
// (Defined, Singular, Simulated, Native)

void UTexPannerTriggered::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TexPannerTriggered.Reset");

	UTexPannerTriggered_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TexPannerTriggered.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UTexPannerTriggered::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TexPannerTriggered.Trigger");

	UTexPannerTriggered_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Shader.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class AActor*                  EventInstigator                (Parm)

void UShader::Trigger(class AActor* Other, class AActor* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Shader.Trigger");

	UShader_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Shader.Reset
// (Defined, Singular, Simulated, Native)

void UShader::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Shader.Reset");

	UShader_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.Process_Message
// (Defined, Iterator, Latent, NetReliable, Event)
// Parameters:
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// float                          MsgLife                        (Parm)
// TArray<class UInteraction*>    InteractionArray               (Parm, NeedCtorLink)

void UInteractionMaster::Process_Message(const struct FString& Msg, float MsgLife, TArray<class UInteraction*> InteractionArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Process_Message");

	UInteractionMaster_Process_Message_Params params;
	params.Msg = Msg;
	params.MsgLife = MsgLife;
	params.InteractionArray = InteractionArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.Process_Tick
// (Final, Iterator, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// TArray<class UInteraction*>    InteractionArray               (Parm, NeedCtorLink)
// float                          DeltaTime                      (Parm)

void UInteractionMaster::Process_Tick(TArray<class UInteraction*> InteractionArray, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Process_Tick");

	UInteractionMaster_Process_Tick_Params params;
	params.InteractionArray = InteractionArray;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.Process_PostRender
// (Final, Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// TArray<class UInteraction*>    InteractionArray               (Parm, NeedCtorLink)
// class UCanvas*                 Canvas                         (Parm)

void UInteractionMaster::Process_PostRender(TArray<class UInteraction*> InteractionArray, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Process_PostRender");

	UInteractionMaster_Process_PostRender_Params params;
	params.InteractionArray = InteractionArray;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.Process_PreRender
// (Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// TArray<class UInteraction*>    InteractionArray               (Parm, NeedCtorLink)
// class UCanvas*                 Canvas                         (Parm)

void UInteractionMaster::Process_PreRender(TArray<class UInteraction*> InteractionArray, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Process_PreRender");

	UInteractionMaster_Process_PreRender_Params params;
	params.InteractionArray = InteractionArray;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.Process_KeyEvent
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// TArray<class UInteraction*>    InteractionArray               (Parm, NeedCtorLink)
// TEnumAsByte<EInputKey>         Key                            (Parm, OutParm)
// TEnumAsByte<EInputAction>      Action                         (Parm, OutParm)
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInteractionMaster::Process_KeyEvent(TArray<class UInteraction*> InteractionArray, float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Process_KeyEvent");

	UInteractionMaster_Process_KeyEvent_Params params;
	params.InteractionArray = InteractionArray;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Action != nullptr)
		*Action = params.Action;

	return params.ReturnValue;
}


// Function Engine.InteractionMaster.Process_KeyType
// (Defined, Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// TArray<class UInteraction*>    InteractionArray               (Parm, NeedCtorLink)
// TEnumAsByte<EInputKey>         Key                            (Parm, OutParm)
// struct FString                 Unicode                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInteractionMaster::Process_KeyType(TArray<class UInteraction*> InteractionArray, const struct FString& Unicode, TEnumAsByte<EInputKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Process_KeyType");

	UInteractionMaster_Process_KeyType_Params params;
	params.InteractionArray = InteractionArray;
	params.Unicode = Unicode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function Engine.InteractionMaster.SetFocusTo
// (Final, Defined, Singular, Net, Event)
// Parameters:
// class UInteraction*            Inter                          (Parm)
// class UPlayer*                 ViewportOwner                  (OptionalParm, Parm)

void UInteractionMaster::SetFocusTo(class UInteraction* Inter, class UPlayer* ViewportOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.SetFocusTo");

	UInteractionMaster_SetFocusTo_Params params;
	params.Inter = Inter;
	params.ViewportOwner = ViewportOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.RemoveInteraction
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// class UInteraction*            RemoveMe                       (Parm)

void UInteractionMaster::RemoveInteraction(class UInteraction* RemoveMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.RemoveInteraction");

	UInteractionMaster_RemoveInteraction_Params params;
	params.RemoveMe = RemoveMe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InteractionMaster.AddInteraction
// (Iterator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 InteractionName                (Parm, NeedCtorLink)
// class UPlayer*                 AttachTo                       (OptionalParm, Parm)
// class UInteraction*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UInteraction* UInteractionMaster::AddInteraction(const struct FString& InteractionName, class UPlayer* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.AddInteraction");

	UInteractionMaster_AddInteraction_Params params;
	params.InteractionName = InteractionName;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.InteractionMaster.Travel
// (Iterator, Latent, NetReliable, Exec)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UInteractionMaster::Travel(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InteractionMaster.Travel");

	UInteractionMaster_Travel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void UInteraction::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.Tick");

	UInteraction_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.SetFocus
// (Latent, NetReliable, Native, Event)

void UInteraction::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.SetFocus");

	UInteraction_SetFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.PostRender
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UInteraction::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.PostRender");

	UInteraction_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.PreRender
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UInteraction::PreRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.PreRender");

	UInteraction_PreRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.KeyEvent
// (Final, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm, OutParm)
// TEnumAsByte<EInputAction>      Action                         (Parm, OutParm)
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInteraction::KeyEvent(float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.KeyEvent");

	UInteraction_KeyEvent_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Action != nullptr)
		*Action = params.Action;

	return params.ReturnValue;
}


// Function Engine.Interaction.KeyType
// (Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm, OutParm)
// struct FString                 Unicode                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInteraction::KeyType(const struct FString& Unicode, TEnumAsByte<EInputKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.KeyType");

	UInteraction_KeyType_Params params;
	params.Unicode = Unicode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function Engine.Interaction.Message
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// float                          MsgLife                        (Parm)

void UInteraction::Message(const struct FString& Msg, float MsgLife)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.Message");

	UInteraction_Message_Params params;
	params.Msg = Msg;
	params.MsgLife = MsgLife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.Initialized
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event)

void UInteraction::Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.Initialized");

	UInteraction_Initialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Interaction.ScreenToWorld
// (Final, Singular, Net, Native, Event)
// Parameters:
// struct FVector                 Location                       (Parm)
// struct FVector                 CameraLocation                 (OptionalParm, Parm)
// struct FRotator                CameraRotation                 (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UInteraction::ScreenToWorld(const struct FVector& Location, const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.ScreenToWorld");

	UInteraction_ScreenToWorld_Params params;
	params.Location = Location;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Interaction.WorldToScreen
// (Final, Defined, Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FVector                 Location                       (Parm)
// struct FVector                 CameraLocation                 (OptionalParm, Parm)
// struct FRotator                CameraRotation                 (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UInteraction::WorldToScreen(const struct FVector& Location, const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.WorldToScreen");

	UInteraction_WorldToScreen_Params params;
	params.Location = Location;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Interaction.ConsoleCommand
// (Defined, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInteraction::ConsoleCommand(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.ConsoleCommand");

	UInteraction_ConsoleCommand_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Interaction.Initialize
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)

void UInteraction::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Interaction.Initialize");

	UInteraction_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BaseGUIController.SetRequiredGameResolution
// (Iterator, Latent, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 GameRes                        (Parm, NeedCtorLink)

void UBaseGUIController::SetRequiredGameResolution(const struct FString& GameRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.SetRequiredGameResolution");

	UBaseGUIController_SetRequiredGameResolution_Params params;
	params.GameRes = GameRes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BaseGUIController.NeedsMenuResolution
// (Final, Defined, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseGUIController::NeedsMenuResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.NeedsMenuResolution");

	UBaseGUIController_NeedsMenuResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.BaseGUIController.InitializeController
// (Latent, Singular, Net, Simulated, Exec, Native, Event)

void UBaseGUIController::InitializeController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.InitializeController");

	UBaseGUIController_InitializeController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BaseGUIController.SetControllerStatus
// (Singular, NetReliable, Native, Event)
// Parameters:
// bool                           On                             (Parm)

void UBaseGUIController::SetControllerStatus(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.SetControllerStatus");

	UBaseGUIController_SetControllerStatus_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BaseGUIController.CloseAll
// (Defined, Iterator, PreOperator, Event)
// Parameters:
// bool                           bCancel                        (Parm)

void UBaseGUIController::CloseAll(bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.CloseAll");

	UBaseGUIController_CloseAll_Params params;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BaseGUIController.CloseMenu
// (Final, Defined, Iterator, PreOperator, Event)
// Parameters:
// bool                           bCanceled                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseGUIController::CloseMenu(bool bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.CloseMenu");

	UBaseGUIController_CloseMenu_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.BaseGUIController.ReplaceMenu
// (Final, Defined, Singular, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 NewMenuName                    (Parm, NeedCtorLink)
// struct FString                 Param1                         (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Param2                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseGUIController::ReplaceMenu(const struct FString& NewMenuName, const struct FString& Param1, const struct FString& Param2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.ReplaceMenu");

	UBaseGUIController_ReplaceMenu_Params params;
	params.NewMenuName = NewMenuName;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.BaseGUIController.OpenMenu
// (Latent, Singular, NetReliable, Event)
// Parameters:
// struct FString                 NewMenuName                    (Parm, NeedCtorLink)
// struct FString                 Param1                         (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Param2                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseGUIController::OpenMenu(const struct FString& NewMenuName, const struct FString& Param1, const struct FString& Param2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.OpenMenu");

	UBaseGUIController_OpenMenu_Params params;
	params.NewMenuName = NewMenuName;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.BaseGUIController.OnAdminReply
// (Final, Latent, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Reply                          (Parm, NeedCtorLink)

void UBaseGUIController::OnAdminReply(const struct FString& Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BaseGUIController.OnAdminReply");

	UBaseGUIController_OnAdminReply_Params params;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Console.KeyEvent
// (Final, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm)
// TEnumAsByte<EInputAction>      Action                         (Parm)
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UConsole::KeyEvent(TEnumAsByte<EInputKey> Key, TEnumAsByte<EInputAction> Action, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Console.KeyEvent");

	UConsole_KeyEvent_Params params;
	params.Key = Key;
	params.Action = Action;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Console.Message
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// float                          MsgLife                        (Parm)

void UConsole::Message(const struct FString& Msg, float MsgLife)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Console.Message");

	UConsole_Message_Params params;
	params.Msg = Msg;
	params.MsgLife = MsgLife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Console.TeamTalk
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Native, Event)

void UConsole::TeamTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Console.TeamTalk");

	UConsole_TeamTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Console.Talk
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Native, Event)

void UConsole::Talk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Console.Talk");

	UConsole_Talk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Console.type
// (Final, Defined, PreOperator, NetReliable, Event)

void UConsole::type()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Console.type");

	UConsole_type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FluidSurfaceInfo.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AFluidSurfaceInfo::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FluidSurfaceInfo.Touch");

	AFluidSurfaceInfo_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FluidSurfaceInfo.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AFluidSurfaceInfo::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FluidSurfaceInfo.TakeDamage");

	AFluidSurfaceInfo_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FluidSurfaceInfo.Pling
// (Defined, Iterator, Singular, Native, Event)
// Parameters:
// struct FVector                 Position                       (Parm)
// float                          Strength                       (Parm)
// float                          Radius                         (OptionalParm, Parm)

void AFluidSurfaceInfo::Pling(const struct FVector& Position, float Strength, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FluidSurfaceInfo.Pling");

	AFluidSurfaceInfo_Pling_Params params;
	params.Position = Position;
	params.Strength = Strength;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.CheckForDoubleClickMove
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// float                          DeltaTime                      (Parm)
// TEnumAsByte<EDoubleClickDir>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EDoubleClickDir> UPlayerInput::CheckForDoubleClickMove(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.CheckForDoubleClickMove");

	UPlayerInput_CheckForDoubleClickMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerInput.ChangeSnapView
// (Final, Iterator, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void UPlayerInput::ChangeSnapView(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.ChangeSnapView");

	UPlayerInput_ChangeSnapView_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.UpdateSmoothing
// (Final, Latent, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// int                            Mode                           (Parm)

void UPlayerInput::UpdateSmoothing(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.UpdateSmoothing");

	UPlayerInput_UpdateSmoothing_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.UpdateAccel
// (Defined, Latent, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// float                          f                              (Parm)

void UPlayerInput::UpdateAccel(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.UpdateAccel");

	UPlayerInput_UpdateAccel_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.UpdateSensitivity
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// float                          f                              (Parm)

void UPlayerInput::UpdateSensitivity(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.UpdateSensitivity");

	UPlayerInput_UpdateSensitivity_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.SmoothMouse
// (Final, PreOperator, Simulated, Exec, Native)
// Parameters:
// float                          aMouse                         (Parm)
// float                          DeltaTime                      (Parm)
// unsigned char                  SampleCount                    (Parm, OutParm)
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPlayerInput::SmoothMouse(float aMouse, float DeltaTime, int Index, unsigned char* SampleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.SmoothMouse");

	UPlayerInput_SmoothMouse_Params params;
	params.aMouse = aMouse;
	params.DeltaTime = DeltaTime;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SampleCount != nullptr)
		*SampleCount = params.SampleCount;

	return params.ReturnValue;
}


// Function Engine.PlayerInput.AccelerateMouse
// (Final, Iterator, Latent, Simulated, Exec, Native)
// Parameters:
// float                          aMouse                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPlayerInput::AccelerateMouse(float aMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.AccelerateMouse");

	UPlayerInput_AccelerateMouse_Params params;
	params.aMouse = aMouse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerInput.SetSmoothingStrength
// (Iterator, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UPlayerInput::SetSmoothingStrength(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.SetSmoothingStrength");

	UPlayerInput_SetSmoothingStrength_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.SetSmoothingMode
// (Final, Defined, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// unsigned char                  B                              (Parm)

void UPlayerInput::SetSmoothingMode(unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.SetSmoothingMode");

	UPlayerInput_SetSmoothingMode_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.PlayerInput
// (Final, Defined, Singular, NetReliable)
// Parameters:
// float                          DeltaTime                      (Parm)

void UPlayerInput::PlayerInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.PlayerInput");

	UPlayerInput_PlayerInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerInput.InvertLook
// (Defined, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPlayerInput::InvertLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerInput.InvertLook");

	UPlayerInput_InvertLook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.CheatManager.AllWeapons
// (NetReliable, Simulated, Native, Event)

void UCheatManager::AllWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.AllWeapons");

	UCheatManager_AllWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Loaded
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event)

void UCheatManager::Loaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Loaded");

	UCheatManager_Loaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ViewClass
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class UClass*                  aClass                         (Parm)
// bool                           bQuiet                         (OptionalParm, Parm)
// bool                           bCheat                         (OptionalParm, Parm)

void UCheatManager::ViewClass(class UClass* aClass, bool bQuiet, bool bCheat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewClass");

	UCheatManager_ViewClass_Params params;
	params.aClass = aClass;
	params.bQuiet = bQuiet;
	params.bCheat = bCheat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ViewBot
// (Iterator, Singular, Simulated, Exec, Native)

void UCheatManager::ViewBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewBot");

	UCheatManager_ViewBot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ViewFlag
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event)

void UCheatManager::ViewFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewFlag");

	UCheatManager_ViewFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ViewActor
// (Iterator, Latent, PreOperator, Net, Simulated, Operator)
// Parameters:
// struct FName                   ActorName                      (Parm)

void UCheatManager::ViewActor(const struct FName& ActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewActor");

	UCheatManager_ViewActor_Params params;
	params.ActorName = ActorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ViewPlayer
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void UCheatManager::ViewPlayer(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewPlayer");

	UCheatManager_ViewPlayer_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ViewSelf
// (Final, Defined, Singular, Simulated, Exec, Native)
// Parameters:
// bool                           bQuiet                         (OptionalParm, Parm)

void UCheatManager::ViewSelf(bool bQuiet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewSelf");

	UCheatManager_ViewSelf_Params params;
	params.bQuiet = bQuiet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.RememberSpot
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event)

void UCheatManager::RememberSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.RememberSpot");

	UCheatManager_RememberSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.CheatView
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// class UClass*                  aClass                         (Parm)
// bool                           bQuiet                         (OptionalParm, Parm)

void UCheatManager::CheatView(class UClass* aClass, bool bQuiet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.CheatView");

	UCheatManager_CheatView_Params params;
	params.aClass = aClass;
	params.bQuiet = bQuiet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.PlayersOnly
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Native, Event)

void UCheatManager::PlayersOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.PlayersOnly");

	UCheatManager_PlayersOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Summon
// (Final, Latent, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// struct FString                 ClassName                      (Parm, NeedCtorLink)

void UCheatManager::Summon(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Summon");

	UCheatManager_Summon_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Avatar
// (Latent, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// struct FString                 ClassName                      (Parm, NeedCtorLink)

void UCheatManager::Avatar(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Avatar");

	UCheatManager_Avatar_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.KillPawns
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Native, Event)

void UCheatManager::KillPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.KillPawns");

	UCheatManager_KillPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.KillAllPawns
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native)
// Parameters:
// class UClass*                  aClass                         (Parm)

void UCheatManager::KillAllPawns(class UClass* aClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.KillAllPawns");

	UCheatManager_KillAllPawns_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.KillAll
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// class UClass*                  aClass                         (Parm)

void UCheatManager::KillAll(class UClass* aClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.KillAll");

	UCheatManager_KillAll_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetSpeed
// (Final, Defined, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetSpeed(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetSpeed");

	UCheatManager_SetSpeed_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetGravity
// (Defined, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetGravity(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetGravity");

	UCheatManager_SetGravity_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetJumpZ
// (Final, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetJumpZ(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetJumpZ");

	UCheatManager_SetJumpZ_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SloMo
// (PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// float                          t                              (Parm)

void UCheatManager::SloMo(float t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SloMo");

	UCheatManager_SloMo_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.God
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Native, Event)

void UCheatManager::God()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.God");

	UCheatManager_God_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Invisible
// (Defined, Iterator, Latent, Singular, Net, Simulated, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void UCheatManager::Invisible(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Invisible");

	UCheatManager_Invisible_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.AllAmmo
// (Final, Iterator, Latent, Singular, Net, Simulated, Native, Event)

void UCheatManager::AllAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.AllAmmo");

	UCheatManager_AllAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Ghost
// (Iterator, Latent, Singular, Net, Simulated, Native, Event)

void UCheatManager::Ghost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Ghost");

	UCheatManager_Ghost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Walk
// (Final, Defined, Latent, Singular, Net, Simulated, Native, Event)

void UCheatManager::Walk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Walk");

	UCheatManager_Walk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Fly
// (Defined, Latent, Singular, Net, Simulated, Native, Event)

void UCheatManager::Fly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Fly");

	UCheatManager_Fly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Amphibious
// (Final, Latent, Singular, Net, Simulated, Native, Event)

void UCheatManager::Amphibious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Amphibious");

	UCheatManager_Amphibious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.CauseEvent
// (Latent, Singular, Net, Simulated, Native, Event)
// Parameters:
// struct FName                   EventName                      (Parm)

void UCheatManager::CauseEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.CauseEvent");

	UCheatManager_CauseEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.FreeCamera
// (Final, Defined, Iterator, Singular, Net, Simulated, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void UCheatManager::FreeCamera(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.FreeCamera");

	UCheatManager_FreeCamera_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.EndPath
// (Defined, Iterator, Singular, Net, Simulated, Native, Event)

void UCheatManager::EndPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.EndPath");

	UCheatManager_EndPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetCameraDist
// (Iterator, Singular, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetCameraDist(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetCameraDist");

	UCheatManager_SetCameraDist_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.LockCamera
// (Final, Defined, Singular, Net, Simulated, Native, Event)

void UCheatManager::LockCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.LockCamera");

	UCheatManager_LockCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ChangeSize
// (Defined, Singular, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::ChangeSize(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ChangeSize");

	UCheatManager_ChangeSize_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.Teleport
// (Final, Singular, Net, Simulated, Native, Event)

void UCheatManager::Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Teleport");

	UCheatManager_Teleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.LogScriptedSequences
// (Singular, Net, Simulated, Native, Event)

void UCheatManager::LogScriptedSequences()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.LogScriptedSequences");

	UCheatManager_LogScriptedSequences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.KillViewedActor
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Native, Event)

void UCheatManager::KillViewedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.KillViewedActor");

	UCheatManager_KillViewedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetFogB
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetFogB(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetFogB");

	UCheatManager_SetFogB_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetFogG
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetFogG(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetFogG");

	UCheatManager_SetFogG_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetFogR
// (Iterator, Latent, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetFogR(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetFogR");

	UCheatManager_SetFogR_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.SetFlash
// (Final, Latent, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// float                          f                              (Parm)

void UCheatManager::SetFlash(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetFlash");

	UCheatManager_SetFlash_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.WriteToLog
// (Latent, PreOperator, Net, Simulated, Native, Event)

void UCheatManager::WriteToLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.WriteToLog");

	UCheatManager_WriteToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.FreezeFrame
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// float                          Delay                          (Parm)

void UCheatManager::FreezeFrame(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.FreezeFrame");

	UCheatManager_FreezeFrame_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ListDynamicActors
// (Defined, Iterator, PreOperator, Net, Simulated, Native, Event)

void UCheatManager::ListDynamicActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ListDynamicActors");

	UCheatManager_ListDynamicActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CheatManager.ReviewJumpSpots
// (Final, Singular, Simulated, Exec, Native)
// Parameters:
// struct FName                   TestLabel                      (Parm)

void UCheatManager::ReviewJumpSpots(const struct FName& TestLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ReviewJumpSpots");

	UCheatManager_ReviewJumpSpots_Params params;
	params.TestLabel = TestLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawBox
// (Final, Defined, PreOperator, Exec, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)

void UCanvas::DrawBox(class UCanvas* Canvas, float Width, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawBox");

	UCanvas_DrawBox_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawBracket
// (Latent, Exec, Native, Event)
// Parameters:
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          bracket_size                   (Parm)

void UCanvas::DrawBracket(float Width, float Height, float bracket_size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawBracket");

	UCanvas_DrawBracket_Params params;
	params.Width = Width;
	params.Height = Height;
	params.bracket_size = bracket_size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawLine
// (Final, Defined, Iterator, Exec, Native, Event)
// Parameters:
// int                            Direction                      (Parm)
// float                          Size                           (Parm)

void UCanvas::DrawLine(int Direction, float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawLine");

	UCanvas_DrawLine_Params params;
	params.Direction = Direction;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawHorizontal
// (Defined, Iterator, Exec, Native, Event)
// Parameters:
// float                          Y                              (Parm)
// float                          Width                          (Parm)

void UCanvas::DrawHorizontal(float Y, float Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawHorizontal");

	UCanvas_DrawHorizontal_Params params;
	params.Y = Y;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawVertical
// (Defined, Exec, Native, Event)
// Parameters:
// float                          X                              (Parm)
// float                          Height                         (Parm)

void UCanvas::DrawVertical(float X, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawVertical");

	UCanvas_DrawVertical_Params params;
	params.X = X;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.MakeColor
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)
// unsigned char                  A                              (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UCanvas::MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.MakeColor");

	UCanvas_MakeColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Canvas.SetDrawColor
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)
// unsigned char                  A                              (OptionalParm, Parm)

void UCanvas::SetDrawColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.SetDrawColor");

	UCanvas_SetDrawColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawRect
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// class UTexture*                Tex                            (Parm)
// float                          RectX                          (Parm)
// float                          RectY                          (Parm)

void UCanvas::DrawRect(class UTexture* Tex, float RectX, float RectY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawRect");

	UCanvas_DrawRect_Params params;
	params.Tex = Tex;
	params.RectX = RectX;
	params.RectY = RectY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawIcon
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// class UTexture*                Tex                            (Parm)
// float                          Scale                          (Parm)

void UCanvas::DrawIcon(class UTexture* Tex, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawIcon");

	UCanvas_DrawIcon_Params params;
	params.Tex = Tex;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawPattern
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// class UMaterial*               Tex                            (Parm)
// float                          XL                             (Parm)
// float                          YL                             (Parm)
// float                          Scale                          (Parm)

void UCanvas::DrawPattern(class UMaterial* Tex, float XL, float YL, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawPattern");

	UCanvas_DrawPattern_Params params;
	params.Tex = Tex;
	params.XL = XL;
	params.YL = YL;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.SetClip
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UCanvas::SetClip(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.SetClip");

	UCanvas_SetClip_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.SetOrigin
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UCanvas::SetOrigin(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.SetOrigin");

	UCanvas_SetOrigin_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.SetPos
// (Final, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UCanvas::SetPos(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.SetPos");

	UCanvas_SetPos_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.Reset
// (Defined, Singular, Simulated, Native)

void UCanvas::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.Reset");

	UCanvas_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawTextJustified
// (PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 String                         (Parm, CoerceParm, NeedCtorLink)
// unsigned char                  Justification                  (Parm)
// float                          x1                             (Parm)
// float                          y1                             (Parm)
// float                          x2                             (Parm)
// float                          y2                             (Parm)

void UCanvas::DrawTextJustified(const struct FString& String, unsigned char Justification, float x1, float y1, float x2, float y2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTextJustified");

	UCanvas_DrawTextJustified_Params params;
	params.String = String;
	params.Justification = Justification;
	params.x1 = x1;
	params.y1 = y1;
	params.x2 = x2;
	params.y2 = y2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawTileScaled
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// class UMaterial*               mat                            (Parm)
// float                          XScale                         (Parm)
// float                          YScale                         (Parm)

void UCanvas::DrawTileScaled(class UMaterial* mat, float XScale, float YScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTileScaled");

	UCanvas_DrawTileScaled_Params params;
	params.mat = mat;
	params.XScale = XScale;
	params.YScale = YScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawTileJustified
// (Defined, Iterator, Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// class UMaterial*               mat                            (Parm)
// unsigned char                  Justification                  (Parm)
// float                          XL                             (Parm)
// float                          YL                             (Parm)

void UCanvas::DrawTileJustified(class UMaterial* mat, unsigned char Justification, float XL, float YL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTileJustified");

	UCanvas_DrawTileJustified_Params params;
	params.mat = mat;
	params.Justification = Justification;
	params.XL = XL;
	params.YL = YL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawTileStretched
// (Final, Iterator, Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// class UMaterial*               mat                            (Parm)
// float                          XL                             (Parm)
// float                          YL                             (Parm)

void UCanvas::DrawTileStretched(class UMaterial* mat, float XL, float YL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTileStretched");

	UCanvas_DrawTileStretched_Params params;
	params.mat = mat;
	params.XL = XL;
	params.YL = YL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.WrapStringToArray
// (Defined, Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// TArray<struct FString>         OutArray                       (Parm, OutParm, NeedCtorLink)
// float                          dx                             (Parm)
// struct FString                 EOL                            (Parm, NeedCtorLink)

void UCanvas::WrapStringToArray(const struct FString& Text, float dx, const struct FString& EOL, TArray<struct FString>* OutArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.WrapStringToArray");

	UCanvas_WrapStringToArray_Params params;
	params.Text = Text;
	params.dx = dx;
	params.EOL = EOL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutArray != nullptr)
		*OutArray = params.OutArray;
}


// Function Engine.Canvas.DrawPortal
// (Final, Defined, Latent, PreOperator, Net, Event)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            Width                          (Parm)
// int                            Height                         (Parm)
// class AActor*                  CamActor                       (Parm)
// struct FVector                 CamLocation                    (Parm)
// struct FRotator                CamRotation                    (Parm)
// int                            FOV                            (OptionalParm, Parm)
// bool                           ClearZ                         (OptionalParm, Parm)

void UCanvas::DrawPortal(int X, int Y, int Width, int Height, class AActor* CamActor, const struct FVector& CamLocation, const struct FRotator& CamRotation, int FOV, bool ClearZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawPortal");

	UCanvas_DrawPortal_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.CamActor = CamActor;
	params.CamLocation = CamLocation;
	params.CamRotation = CamRotation;
	params.FOV = FOV;
	params.ClearZ = ClearZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.TextSize
// (Final, Latent, PreOperator, Net, Event)
// Parameters:
// struct FString                 String                         (Parm, CoerceParm, NeedCtorLink)
// float                          XL                             (Parm, OutParm)
// float                          YL                             (Parm, OutParm)

void UCanvas::TextSize(const struct FString& String, float* XL, float* YL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.TextSize");

	UCanvas_TextSize_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XL != nullptr)
		*XL = params.XL;
	if (YL != nullptr)
		*YL = params.YL;
}


// Function Engine.Canvas.DrawTextClipped
// (Final, Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// bool                           bCheckHotKey                   (OptionalParm, Parm)

void UCanvas::DrawTextClipped(const struct FString& Text, bool bCheckHotKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTextClipped");

	UCanvas_DrawTextClipped_Params params;
	params.Text = Text;
	params.bCheckHotKey = bCheckHotKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawTileClipped
// (Final, Defined, Iterator, NetReliable, Simulated, Native, Event)
// Parameters:
// class UMaterial*               mat                            (Parm)
// float                          XL                             (Parm)
// float                          YL                             (Parm)
// float                          U                              (Parm)
// float                          V                              (Parm)
// float                          UL                             (Parm)
// float                          VL                             (Parm)

void UCanvas::DrawTileClipped(class UMaterial* mat, float XL, float YL, float U, float V, float UL, float VL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTileClipped");

	UCanvas_DrawTileClipped_Params params;
	params.mat = mat;
	params.XL = XL;
	params.YL = YL;
	params.U = U;
	params.V = V;
	params.UL = UL;
	params.VL = VL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawActor
// (Defined, Iterator, NetReliable, Simulated, Native, Event)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           Wireframe                      (Parm)
// bool                           ClearZ                         (OptionalParm, Parm)
// float                          DisplayFOV                     (OptionalParm, Parm)

void UCanvas::DrawActor(class AActor* A, bool Wireframe, bool ClearZ, float DisplayFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawActor");

	UCanvas_DrawActor_Params params;
	params.A = A;
	params.Wireframe = Wireframe;
	params.ClearZ = ClearZ;
	params.DisplayFOV = DisplayFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawTile
// (Defined, Latent, PreOperator, Net, Event)
// Parameters:
// class UMaterial*               mat                            (Parm)
// float                          XL                             (Parm)
// float                          YL                             (Parm)
// float                          U                              (Parm)
// float                          V                              (Parm)
// float                          UL                             (Parm)
// float                          VL                             (Parm)

void UCanvas::DrawTile(class UMaterial* mat, float XL, float YL, float U, float V, float UL, float VL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawTile");

	UCanvas_DrawTile_Params params;
	params.mat = mat;
	params.XL = XL;
	params.YL = YL;
	params.U = U;
	params.V = V;
	params.UL = UL;
	params.VL = VL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.DrawText
// (Latent, PreOperator, Net, Event)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// bool                           CR                             (OptionalParm, Parm)

void UCanvas::DrawText(const struct FString& Text, bool CR)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.DrawText");

	UCanvas_DrawText_Params params;
	params.Text = Text;
	params.CR = CR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Canvas.StrLen
// (Final, Iterator, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 String                         (Parm, CoerceParm, NeedCtorLink)
// float                          XL                             (Parm, OutParm)
// float                          YL                             (Parm, OutParm)

void UCanvas::StrLen(const struct FString& String, float* XL, float* YL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Canvas.StrLen");

	UCanvas_StrLen_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XL != nullptr)
		*XL = params.XL;
	if (YL != nullptr)
		*YL = params.YL;
}


// Function Engine.Vehicle.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AVehicle::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.Destroyed");

	AVehicle_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.AddVehiclePart
// (Final, Defined, Latent, Singular, Net, NetReliable, Operator)
// Parameters:
// class UClass*                  a_Class                        (Parm)
// struct FVector                 a_Offset                       (OptionalParm, Parm)

void AVehicle::AddVehiclePart(class UClass* a_Class, const struct FVector& a_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.AddVehiclePart");

	AVehicle_AddVehiclePart_Params params;
	params.a_Class = a_Class;
	params.a_Offset = a_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.GetType
// (Iterator, Latent, Singular, Net, NetReliable, Operator)
// Parameters:
// TEnumAsByte<EVehicleType>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EVehicleType> AVehicle::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.GetType");

	AVehicle_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Vehicle.PostSetPawnResource
// (Latent, Singular, Net, NetReliable, Simulated, Native)

void AVehicle::PostSetPawnResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.PostSetPawnResource");

	AVehicle_PostSetPawnResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnDriverOut
// (Iterator, NetReliable, Exec, Native)

void AVehicle::OnDriverOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnDriverOut");

	AVehicle_OnDriverOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnDriverIn
// (Final, Iterator, NetReliable, Exec, Native)
// Parameters:
// int                            a_DriverID                     (Parm)

void AVehicle::OnDriverIn(int a_DriverID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnDriverIn");

	AVehicle_OnDriverIn_Params params;
	params.a_DriverID = a_DriverID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnTurning
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehicle::OnTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnTurning");

	AVehicle_OnTurning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnMoveDown
// (Final, Defined, NetReliable, Exec, Native)

void AVehicle::OnMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnMoveDown");

	AVehicle_OnMoveDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnMoveUp
// (Final, NetReliable, Exec, Native)

void AVehicle::OnMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnMoveUp");

	AVehicle_OnMoveUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnBoost
// (Defined, Iterator, NetReliable, Exec, Native)

void AVehicle::OnBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnBoost");

	AVehicle_OnBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnStop
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehicle::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnStop");

	AVehicle_OnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Vehicle.OnStart
// (NetReliable, Exec, Native)

void AVehicle::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Vehicle.OnStart");

	AVehicle_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Volume.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void AVolume::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Volume.DisplayDebug");

	AVolume_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.Volume.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Volume.PostBeginPlay");

	AVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Volume.Encompasses
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AVolume::Encompasses(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Volume.Encompasses");

	AVolume_Encompasses_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AirVolume.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AAirVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AirVolume.PostBeginPlay");

	AAirVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MusicVolume.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AMusicVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MusicVolume.PostBeginPlay");

	AMusicVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.NSun.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ANSun::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NSun.PostBeginPlay");

	ANSun_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inspector.Inspection
// (Iterator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// int                            Param1                         (Parm)
// int                            Param2                         (Parm)
// int                            param3                         (Parm)
// int                            param4                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInspector::Inspection(int Param1, int Param2, int param3, int param4)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.Inspection");

	AInspector_Inspection_Params params;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.param3 = param3;
	params.param4 = param4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inspector.InspectorFunc006
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Operator)
// Parameters:
// class UMesh*                   InMesh                         (Parm)
// int                            AnimSeqIndex                   (Parm)
// int                            frame                          (Parm)

void AInspector::InspectorFunc006(class UMesh* InMesh, int AnimSeqIndex, int frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.InspectorFunc006");

	AInspector_InspectorFunc006_Params params;
	params.InMesh = InMesh;
	params.AnimSeqIndex = AnimSeqIndex;
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inspector.InspectorFunc005
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Operator)
// Parameters:
// class UMesh*                   InMesh                         (Parm)
// int                            AnimSeqIndex                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInspector::InspectorFunc005(class UMesh* InMesh, int AnimSeqIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.InspectorFunc005");

	AInspector_InspectorFunc005_Params params;
	params.InMesh = InMesh;
	params.AnimSeqIndex = AnimSeqIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inspector.InspectorFunc004
// (NetReliable, Operator)
// Parameters:
// class UMesh*                   InMesh                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInspector::InspectorFunc004(class UMesh* InMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.InspectorFunc004");

	AInspector_InspectorFunc004_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inspector.InspectorFunc003
// (Final, NetReliable, Operator)
// Parameters:
// class UMesh*                   InMesh                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInspector::InspectorFunc003(class UMesh* InMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.InspectorFunc003");

	AInspector_InspectorFunc003_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inspector.InspectorFunc002
// (Defined, NetReliable, Operator)
// Parameters:
// class UMesh*                   InMesh                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInspector::InspectorFunc002(class UMesh* InMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.InspectorFunc002");

	AInspector_InspectorFunc002_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inspector.InspectorFunc001
// (Final, Defined, NetReliable, Operator)
// Parameters:
// class UMesh*                   InMesh                         (Parm)
// int                            BoneIndex                      (Parm)
// struct FCoords                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCoords AInspector::InspectorFunc001(class UMesh* InMesh, int BoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inspector.InspectorFunc001");

	AInspector_InspectorFunc001_Params params;
	params.InMesh = InMesh;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.L2Pickup.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AL2Pickup::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.L2Pickup.Timer");

	AL2Pickup_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.DontReuseTaunt
// (Iterator, Latent, Operator)
// Parameters:
// int                            t                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::DontReuseTaunt(int t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.DontReuseTaunt");

	AController_DontReuseTaunt_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.AutoTaunt
// (Final, Iterator, Latent, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::AutoTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AutoTaunt");

	AController_AutoTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.StartMonitoring
// (Defined, Iterator, Latent, Operator)
// Parameters:
// class APawn*                   P                              (Parm)
// float                          MaxDist                        (Parm)

void AController::StartMonitoring(class APawn* P, float MaxDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.StartMonitoring");

	AController_StartMonitoring_Params params;
	params.P = P;
	params.MaxDist = MaxDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.MonitoredPawnAlert
// (Iterator, PreOperator, Net, Simulated, Exec, Native, Event)

void AController::MonitoredPawnAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.MonitoredPawnAlert");

	AController_MonitoredPawnAlert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ServerGivePawn
// (Iterator, Latent, PreOperator, Simulated, Exec, Native)

void AController::ServerGivePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ServerGivePawn");

	AController_ServerGivePawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ServerReStartPlayer
// (Final, PreOperator, NetReliable, Simulated, Native)

void AController::ServerReStartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ServerReStartPlayer");

	AController_ServerReStartPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ChangedWeapon
// (Final, Iterator, PreOperator, Net, Simulated, Native)

void AController::ChangedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ChangedWeapon");

	AController_ChangedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.CheckFutureSight
// (Final, Defined, Iterator, Latent, Operator)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::CheckFutureSight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.CheckFutureSight");

	AController_CheckFutureSight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.SetPawnClass
// (Defined, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 InClass                        (Parm, NeedCtorLink)
// struct FString                 InCharacter                    (Parm, NeedCtorLink)

void AController::SetPawnClass(const struct FString& InClass, const struct FString& InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetPawnClass");

	AController_SetPawnClass_Params params;
	params.InClass = InClass;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientSetWeapon
// (PreOperator, Operator)
// Parameters:
// class UClass*                  WeaponClass                    (Parm)

void AController::ClientSetWeapon(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientSetWeapon");

	AController_ClientSetWeapon_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientSwitchToBestWeapon
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native)

void AController::ClientSwitchToBestWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientSwitchToBestWeapon");

	AController_ClientSwitchToBestWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SwitchToBestWeapon
// (Defined, Iterator, Latent, Singular, Net, Simulated, Native)

void AController::SwitchToBestWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SwitchToBestWeapon");

	AController_SwitchToBestWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ReceiveWarning
// (Defined, Latent, PreOperator, Simulated, Exec, Native)
// Parameters:
// class APawn*                   shooter                        (Parm)
// float                          projSpeed                      (Parm)
// struct FVector                 FireDir                        (Parm)

void AController::ReceiveWarning(class APawn* shooter, float projSpeed, const struct FVector& FireDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ReceiveWarning");

	AController_ReceiveWarning_Params params;
	params.shooter = shooter;
	params.projSpeed = projSpeed;
	params.FireDir = FireDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AdjustAim
// (Defined, Iterator, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// class AAmmunition*             FiredAmmunition                (Parm)
// struct FVector                 projStart                      (Parm)
// int                            aimerror                       (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AController::AdjustAim(class AAmmunition* FiredAmmunition, const struct FVector& projStart, int aimerror)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AdjustAim");

	AController_AdjustAim_Params params;
	params.FiredAmmunition = FiredAmmunition;
	params.projStart = projStart;
	params.aimerror = aimerror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.WeaponPreference
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AWeapon*                 W                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AController::WeaponPreference(class AWeapon* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WeaponPreference");

	AController_WeaponPreference_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.RateWeapon
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AWeapon*                 W                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AController::RateWeapon(class AWeapon* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.RateWeapon");

	AController_RateWeapon_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.StopFiring
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native)

void AController::StopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.StopFiring");

	AController_StopFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.FireWeaponAt
// (Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::FireWeaponAt(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FireWeaponAt");

	AController_FireWeaponAt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.AdjustDesireFor
// (Latent, NetReliable, Exec, Native)
// Parameters:
// class APickup*                 P                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AController::AdjustDesireFor(class APickup* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AdjustDesireFor");

	AController_AdjustDesireFor_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.damageAttitudeTo
// (Defined, Iterator, PreOperator, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          Damage                         (Parm)

void AController::damageAttitudeTo(class APawn* Other, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.damageAttitudeTo");

	AController_damageAttitudeTo_Params params;
	params.Other = Other;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyKilled
// (Final, Defined, Iterator, Simulated, Exec, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Killed                         (Parm)
// class APawn*                   Other                          (Parm)

void AController::NotifyKilled(class AController* Killer, class AController* Killed, class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyKilled");

	AController_NotifyKilled_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ShakeView
// (Final, PreOperator, Singular, Exec, Native)
// Parameters:
// float                          ShakeTime                      (Parm)
// float                          RollMag                        (Parm)
// struct FVector                 OffsetMag                      (Parm)
// float                          RollRate                       (Parm)
// struct FVector                 OffsetRate                     (Parm)
// float                          OffsetTime                     (Parm)

void AController::ShakeView(float ShakeTime, float RollMag, const struct FVector& OffsetMag, float RollRate, const struct FVector& OffsetRate, float OffsetTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ShakeView");

	AController_ShakeView_Params params;
	params.ShakeTime = ShakeTime;
	params.RollMag = RollMag;
	params.OffsetMag = OffsetMag;
	params.RollRate = RollRate;
	params.OffsetRate = OffsetRate;
	params.OffsetTime = OffsetTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.EnemyNotVisible
// (Final, Iterator, PreOperator, Net, Simulated)

void AController::EnemyNotVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.EnemyNotVisible");

	AController_EnemyNotVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SeeMonster
// (Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Seen                           (Parm)

void AController::SeeMonster(class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SeeMonster");

	AController_SeeMonster_Params params;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SeePlayer
// (Iterator, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Seen                           (Parm)

void AController::SeePlayer(class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SeePlayer");

	AController_SeePlayer_Params params;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.HearNoise
// (Defined, Iterator, PreOperator, Net, Simulated)
// Parameters:
// float                          Loudness                       (Parm)
// class AActor*                  NoiseMaker                     (Parm)

void AController::HearNoise(float Loudness, class AActor* NoiseMaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.HearNoise");

	AController_HearNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseMaker = NoiseMaker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SetupSpecialPathAbilities
// (Final, Defined, Latent, Simulated, Exec, Native, Event)

void AController::SetupSpecialPathAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetupSpecialPathAbilities");

	AController_SetupSpecialPathAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.Desireability
// (Defined, Singular, Event)
// Parameters:
// class APickup*                 P                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AController::Desireability(class APickup* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.Desireability");

	AController_Desireability_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FearThisSpot
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AAvoidMarker*            aSpot                          (Parm)

void AController::FearThisSpot(class AAvoidMarker* aSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FearThisSpot");

	AController_FearThisSpot_Params params;
	params.aSpot = aSpot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.UnderLift
// (Final, Defined, Latent, Simulated, Exec, Native)
// Parameters:
// class AMover*                  M                              (Parm)

void AController::UnderLift(class AMover* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.UnderLift");

	AController_UnderLift_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.MoverFinished
// (Defined, Latent, Simulated, Exec, Native)

void AController::MoverFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.MoverFinished");

	AController_MoverFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.WaitForMover
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// class AMover*                  M                              (Parm)

void AController::WaitForMover(class AMover* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WaitForMover");

	AController_WaitForMover_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.PrepareForMove
// (Defined, Latent, Singular, Net, Simulated)
// Parameters:
// class ANavigationPoint*        Goal                           (Parm)
// class UReachSpec*              Path                           (Parm)

void AController::PrepareForMove(class ANavigationPoint* Goal, class UReachSpec* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PrepareForMove");

	AController_PrepareForMove_Params params;
	params.Goal = Goal;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AdjustToss
// (Final, Iterator, Singular, Operator)
// Parameters:
// float                          TSpeed                         (Parm)
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// bool                           bNormalize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AController::AdjustToss(float TSpeed, const struct FVector& Start, const struct FVector& End, bool bNormalize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AdjustToss");

	AController_AdjustToss_Params params;
	params.TSpeed = TSpeed;
	params.Start = Start;
	params.End = End;
	params.bNormalize = bNormalize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.WouldReactToSeeing
// (Defined, Iterator, Singular, Operator)
// Parameters:
// class APawn*                   Seen                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::WouldReactToSeeing(class APawn* Seen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WouldReactToSeeing");

	AController_WouldReactToSeeing_Params params;
	params.Seen = Seen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.WouldReactToNoise
// (Final, Defined, Iterator, Singular, Operator)
// Parameters:
// float                          Loudness                       (Parm)
// class AActor*                  NoiseMaker                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::WouldReactToNoise(float Loudness, class AActor* NoiseMaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WouldReactToNoise");

	AController_WouldReactToNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseMaker = NoiseMaker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.BotVoiceMessage
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FName                   messagetype                    (Parm)
// unsigned char                  MessageID                      (Parm)
// class AController*             Sender                         (Parm)

void AController::BotVoiceMessage(const struct FName& messagetype, unsigned char MessageID, class AController* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.BotVoiceMessage");

	AController_BotVoiceMessage_Params params;
	params.messagetype = messagetype;
	params.MessageID = MessageID;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientVoiceMessage
// (Final, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APlayerReplicationInfo*  Sender                         (Parm)
// class APlayerReplicationInfo*  Recipient                      (Parm)
// struct FName                   messagetype                    (Parm)
// unsigned char                  MessageID                      (Parm)

void AController::ClientVoiceMessage(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientVoiceMessage");

	AController_ClientVoiceMessage_Params params;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.messagetype = messagetype;
	params.MessageID = MessageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SendVoiceMessage
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Sender                         (Parm)
// class APlayerReplicationInfo*  Recipient                      (Parm)
// struct FName                   messagetype                    (Parm)
// unsigned char                  MessageID                      (Parm)
// struct FName                   BroadcastType                  (Parm)

void AController::SendVoiceMessage(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID, const struct FName& BroadcastType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SendVoiceMessage");

	AController_SendVoiceMessage_Params params;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.messagetype = messagetype;
	params.MessageID = MessageID;
	params.BroadcastType = BroadcastType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AllowVoiceMessage
// (Final, Iterator, Simulated, Exec, Native)
// Parameters:
// struct FName                   messagetype                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::AllowVoiceMessage(const struct FName& messagetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AllowVoiceMessage");

	AController_AllowVoiceMessage_Params params;
	params.messagetype = messagetype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.SendMessage
// (Final, Iterator, Latent, Singular, Operator)
// Parameters:
// class APlayerReplicationInfo*  Recipient                      (Parm)
// struct FName                   messagetype                    (Parm)
// unsigned char                  MessageID                      (Parm)
// float                          Wait                           (Parm)
// struct FName                   BroadcastType                  (Parm)

void AController::SendMessage(class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID, float Wait, const struct FName& BroadcastType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SendMessage");

	AController_SendMessage_Params params;
	params.Recipient = Recipient;
	params.messagetype = messagetype;
	params.MessageID = MessageID;
	params.Wait = Wait;
	params.BroadcastType = BroadcastType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.GetMessageIndex
// (Iterator, Latent, Singular, NetReliable, Event)
// Parameters:
// struct FName                   PhraseName                     (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AController::GetMessageIndex(const struct FName& PhraseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetMessageIndex");

	AController_GetMessageIndex_Params params;
	params.PhraseName = PhraseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.GetFacingDirection
// (Final, Defined, Simulated, Exec, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AController::GetFacingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetFacingDirection");

	AController_GetFacingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.RenderOverlays
// (Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AController::RenderOverlays(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.RenderOverlays");

	AController_RenderOverlays_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientGameEnded
// (Latent, Net, NetReliable, Simulated, Exec, Native)

void AController::ClientGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientGameEnded");

	AController_ClientGameEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.GameHasEnded
// (Final, Latent, Net, NetReliable, Simulated, Exec, Native)

void AController::GameHasEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GameHasEnded");

	AController_GameHasEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.WantsSmoothedView
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::WantsSmoothedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WantsSmoothedView");

	AController_WantsSmoothedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.AdjustView
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Native)
// Parameters:
// float                          DeltaTime                      (Parm)

void AController::AdjustView(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AdjustView");

	AController_AdjustView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AllowDetourTo
// (Final, Defined, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class ANavigationPoint*        N                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::AllowDetourTo(class ANavigationPoint* N)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AllowDetourTo");

	AController_AllowDetourTo_Params params;
	params.N = N;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.Destroyed");

	AController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.HandlePickup
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APickup*                 pick                           (Parm)

void AController::HandlePickup(class APickup* pick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.HandlePickup");

	AController_HandlePickup_Params params;
	params.pick = pick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SameTeamAs
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class AController*             C                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::SameTeamAs(class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SameTeamAs");

	AController_SameTeamAs_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.InitPlayerReplicationInfo
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Native)

void AController::InitPlayerReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.InitPlayerReplicationInfo");

	AController_InitPlayerReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PostBeginPlay");

	AController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AController::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PreBeginPlay");

	AController_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.PawnIsInPain
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APhysicsVolume*          PainVolume                     (Parm)

void AController::PawnIsInPain(class APhysicsVolume* PainVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PawnIsInPain");

	AController_PawnIsInPain_Params params;
	params.PainVolume = PainVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SetFall
// (Latent, Singular, Net, Exec, Native)

void AController::SetFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetFall");

	AController_SetFall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyTakeHit
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)

void AController::NotifyTakeHit(class APawn* instigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyTakeHit");

	AController_NotifyTakeHit_Params params;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyAddInventory
// (Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AInventory*              NewItem                        (Parm)

void AController::NotifyAddInventory(class AInventory* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyAddInventory");

	AController_NotifyAddInventory_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyMissedJump
// (Defined, Latent, Net, Simulated, Exec, Native, Event)

void AController::NotifyMissedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyMissedJump");

	AController_NotifyMissedJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyJumpApex
// (Final, Defined, Latent, Net, Simulated, Exec, Native, Event)

void AController::NotifyJumpApex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyJumpApex");

	AController_NotifyJumpApex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyHitMover
// (Iterator, Latent, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AMover*                  Wall                           (Parm)

void AController::NotifyHitMover(const struct FVector& HitNormal, class AMover* Wall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyHitMover");

	AController_NotifyHitMover_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.NotifyBump
// (Iterator, Latent, PreOperator, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::NotifyBump(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyBump");

	AController_NotifyBump_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.NotifyHitWall
// (Final, Singular, Net, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::NotifyHitWall(const struct FVector& HitNormal, class AActor* Wall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyHitWall");

	AController_NotifyHitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.NotifyLanded
// (Singular, Net, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::NotifyLanded(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyLanded");

	AController_NotifyLanded_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.NotifyHeadVolumeChange
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::NotifyHeadVolumeChange(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyHeadVolumeChange");

	AController_NotifyHeadVolumeChange_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.NotifyPhysicsVolumeChange
// (Final, Iterator, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::NotifyPhysicsVolumeChange(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.NotifyPhysicsVolumeChange");

	AController_NotifyPhysicsVolumeChange_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.LongFall
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Native, Event)

void AController::LongFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.LongFall");

	AController_LongFall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.Restart
// (Defined, Iterator, PreOperator, Net, Exec, Native)

void AController::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.Restart");

	AController_Restart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.PawnDied
// (Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   P                              (Parm)

void AController::PawnDied(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PawnDied");

	AController_PawnDied_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.GetLastWeapon
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AController::GetLastWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetLastWeapon");

	AController_GetLastWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.WasKilledBy
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Other                          (Parm)

void AController::WasKilledBy(class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WasKilledBy");

	AController_WasKilledBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.Possess
// (Final, Defined, PreOperator, Net, Simulated, Native)
// Parameters:
// class APawn*                   aPawn                          (Parm)

void AController::Possess(class APawn* aPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.Possess");

	AController_Possess_Params params;
	params.aPawn = aPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.SoakStop
// (Defined, Iterator, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 problem                        (Parm, NeedCtorLink)

void AController::SoakStop(const struct FString& problem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SoakStop");

	AController_SoakStop_Params params;
	params.problem = problem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AIHearSound
// (Defined, Iterator, Latent, PreOperator, Net, Simulated)
// Parameters:
// class AActor*                  Actor                          (Parm)
// int                            Id                             (Parm)
// class USound*                  S                              (Parm)
// struct FVector                 SoundLocation                  (Parm)
// struct FVector                 Parameters                     (Parm)
// bool                           Attenuate                      (Parm)

void AController::AIHearSound(class AActor* Actor, int Id, class USound* S, const struct FVector& SoundLocation, const struct FVector& Parameters, bool Attenuate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AIHearSound");

	AController_AIHearSound_Params params;
	params.Actor = Actor;
	params.Id = Id;
	params.S = S;
	params.SoundLocation = SoundLocation;
	params.Parameters = Parameters;
	params.Attenuate = Attenuate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientDying
// (Final, Defined, Iterator, PreOperator, Net, Exec, Native)
// Parameters:
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)

void AController::ClientDying(class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientDying");

	AController_ClientDying_Params params;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientSetRotation
// (Final, NetReliable, Simulated, Native)
// Parameters:
// struct FRotator                NewRotation                    (Parm)

void AController::ClientSetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientSetRotation");

	AController_ClientSetRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.ClientSetLocation
// (Final, Defined, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// struct FVector                 NewLocation                    (Parm)
// struct FRotator                NewRotation                    (Parm)

void AController::ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientSetLocation");

	AController_ClientSetLocation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AvoidCertainDeath
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::AvoidCertainDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AvoidCertainDeath");

	AController_AvoidCertainDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.Reset
// (Defined, Singular, Simulated, Native)

void AController::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.Reset");

	AController_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.GetViewRotation
// (Final, Latent, Net, Simulated, Native)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AController::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetViewRotation");

	AController_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.GetHumanReadableName
// (Defined, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AController::GetHumanReadableName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetHumanReadableName");

	AController_GetHumanReadableName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void AController::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.DisplayDebug");

	AController_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.Controller.PendingStasis
// (Defined, Event)

void AController::PendingStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PendingStasis");

	AController_PendingStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.MayFall
// (Final, Iterator, Latent, Net, Simulated)

void AController::MayFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.MayFall");

	AController_MayFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.EndClimbLadder
// (PreOperator, Singular, Net, Exec, Native)

void AController::EndClimbLadder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.EndClimbLadder");

	AController_EndClimbLadder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.StopWaiting
// (Defined, Iterator, PreOperator, Singular, Operator)

void AController::StopWaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.StopWaiting");

	AController_StopWaiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.InLatentExecution
// (Final, Iterator, Latent, PreOperator, Singular, Operator)
// Parameters:
// int                            LatentActionNumber             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::InLatentExecution(int LatentActionNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.InLatentExecution");

	AController_InLatentExecution_Params params;
	params.LatentActionNumber = LatentActionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.PickAnyTarget
// (Defined, Iterator, Latent, PreOperator, Singular, Operator)
// Parameters:
// float                          bestAim                        (Parm, OutParm)
// float                          bestDist                       (Parm, OutParm)
// struct FVector                 FireDir                        (Parm)
// struct FVector                 projStart                      (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AController::PickAnyTarget(const struct FVector& FireDir, const struct FVector& projStart, float* bestAim, float* bestDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PickAnyTarget");

	AController_PickAnyTarget_Params params;
	params.FireDir = FireDir;
	params.projStart = projStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bestAim != nullptr)
		*bestAim = params.bestAim;
	if (bestDist != nullptr)
		*bestDist = params.bestDist;

	return params.ReturnValue;
}


// Function Engine.Controller.PickTarget
// (Final, Defined, Net, Operator)
// Parameters:
// float                          bestAim                        (Parm, OutParm)
// float                          bestDist                       (Parm, OutParm)
// struct FVector                 FireDir                        (Parm)
// struct FVector                 projStart                      (Parm)
// float                          MaxRange                       (Parm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* AController::PickTarget(const struct FVector& FireDir, const struct FVector& projStart, float MaxRange, float* bestAim, float* bestDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PickTarget");

	AController_PickTarget_Params params;
	params.FireDir = FireDir;
	params.projStart = projStart;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bestAim != nullptr)
		*bestAim = params.bestAim;
	if (bestDist != nullptr)
		*bestDist = params.bestDist;

	return params.ReturnValue;
}


// Function Engine.Controller.RemoveController
// (Iterator, Net, Operator)

void AController::RemoveController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.RemoveController");

	AController_RemoveController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.AddController
// (PreOperator, Net, Operator)

void AController::AddController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.AddController");

	AController_AddController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.FindBestInventoryPath
// (Latent, PreOperator, Net, Operator)
// Parameters:
// float                          MinWeight                      (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AController::FindBestInventoryPath(float* MinWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FindBestInventoryPath");

	AController_FindBestInventoryPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinWeight != nullptr)
		*MinWeight = params.MinWeight;

	return params.ReturnValue;
}


// Function Engine.Controller.WaitForLanding
// (Final, Latent, PreOperator, Net, Operator)

void AController::WaitForLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.WaitForLanding");

	AController_WaitForLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.PickWallAdjust
// (Defined, Latent, PreOperator, Net, Operator)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::PickWallAdjust(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.PickWallAdjust");

	AController_PickWallAdjust_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.actorReachable
// (Final, Defined, Latent, PreOperator, Net, Operator)
// Parameters:
// class AActor*                  anActor                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::actorReachable(class AActor* anActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.actorReachable");

	AController_actorReachable_Params params;
	params.anActor = anActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.pointReachable
// (Iterator, Latent, PreOperator, Net, Operator)
// Parameters:
// struct FVector                 aPoint                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::pointReachable(const struct FVector& aPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.pointReachable");

	AController_pointReachable_Params params;
	params.aPoint = aPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.EAdjustJump
// (Final, Iterator, Latent, PreOperator, Net, Operator)
// Parameters:
// float                          BaseZ                          (Parm)
// float                          XYSpeed                        (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AController::EAdjustJump(float BaseZ, float XYSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.EAdjustJump");

	AController_EAdjustJump_Params params;
	params.BaseZ = BaseZ;
	params.XYSpeed = XYSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FindRandomDest
// (Defined, Iterator, Latent, PreOperator, Net, Operator)
// Parameters:
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AController::FindRandomDest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FindRandomDest");

	AController_FindRandomDest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FindPathTowardNearest
// (Final, Defined, Singular, Net, Operator)
// Parameters:
// class UClass*                  GoalClass                      (Parm)
// bool                           bWeightDetours                 (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AController::FindPathTowardNearest(class UClass* GoalClass, bool bWeightDetours)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FindPathTowardNearest");

	AController_FindPathTowardNearest_Params params;
	params.GoalClass = GoalClass;
	params.bWeightDetours = bWeightDetours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FindPathToIntercept
// (Iterator, Singular, Net, Operator)
// Parameters:
// class APawn*                   P                              (Parm)
// class AActor*                  RouteGoal                      (Parm)
// bool                           bWeightDetours                 (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AController::FindPathToIntercept(class APawn* P, class AActor* RouteGoal, bool bWeightDetours)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FindPathToIntercept");

	AController_FindPathToIntercept_Params params;
	params.P = P;
	params.RouteGoal = RouteGoal;
	params.bWeightDetours = bWeightDetours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FindPathToward
// (Final, Iterator, Singular, Net, Operator)
// Parameters:
// class AActor*                  anActor                        (Parm)
// bool                           bWeightDetours                 (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AController::FindPathToward(class AActor* anActor, bool bWeightDetours)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FindPathToward");

	AController_FindPathToward_Params params;
	params.anActor = anActor;
	params.bWeightDetours = bWeightDetours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FindPathTo
// (Final, Latent, Singular, Net, Operator)
// Parameters:
// struct FVector                 aPoint                         (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AController::FindPathTo(const struct FVector& aPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FindPathTo");

	AController_FindPathTo_Params params;
	params.aPoint = aPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.CanSee
// (Defined, Latent, Singular, Net, Operator)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::CanSee(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.CanSee");

	AController_CanSee_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.LineOfSightTo
// (Defined, Singular, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AController::LineOfSightTo(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.LineOfSightTo");

	AController_LineOfSightTo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Controller.FinishRotation
// (Final, Defined, Latent, Singular, Net, Operator)

void AController::FinishRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.FinishRotation");

	AController_FinishRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.MoveToward
// (Iterator, Latent, Singular, Net, Operator)
// Parameters:
// class AActor*                  NewTarget                      (Parm)
// class AActor*                  ViewFocus                      (OptionalParm, Parm)
// float                          DestinationOffset              (OptionalParm, Parm)
// bool                           bUseStrafing                   (OptionalParm, Parm)
// bool                           bShouldWalk                    (OptionalParm, Parm)

void AController::MoveToward(class AActor* NewTarget, class AActor* ViewFocus, float DestinationOffset, bool bUseStrafing, bool bShouldWalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.MoveToward");

	AController_MoveToward_Params params;
	params.NewTarget = NewTarget;
	params.ViewFocus = ViewFocus;
	params.DestinationOffset = DestinationOffset;
	params.bUseStrafing = bUseStrafing;
	params.bShouldWalk = bShouldWalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Controller.MoveTo
// (Final, Iterator, Latent, Singular, Net, Operator)
// Parameters:
// struct FVector                 NewDestination                 (Parm)
// class AActor*                  ViewFocus                      (OptionalParm, Parm)
// bool                           bShouldWalk                    (OptionalParm, Parm)

void AController::MoveTo(const struct FVector& NewDestination, class AActor* ViewFocus, bool bShouldWalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.MoveTo");

	AController_MoveTo_Params params;
	params.NewDestination = NewDestination;
	params.ViewFocus = ViewFocus;
	params.bShouldWalk = bShouldWalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClearL2Game
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void APlayerController::ClearL2Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearL2Game");

	APlayerController_ClearL2Game_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LostChild
// (Final, Defined, Iterator, Latent, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APlayerController::LostChild(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LostChild");

	APlayerController_LostChild_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ChangeVoiceChatter
// (Iterator, Singular, Net, Exec, Native)
// Parameters:
// int                            IpAddr                         (Parm)
// int                            Handle                         (Parm)
// bool                           Add                            (Parm)

void APlayerController::ChangeVoiceChatter(int IpAddr, int Handle, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ChangeVoiceChatter");

	APlayerController_ChangeVoiceChatter_Params params;
	params.IpAddr = IpAddr;
	params.Handle = Handle;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LeaveVoiceChat
// (Final, PreOperator, Singular, Simulated, Exec, Native, Event)

void APlayerController::LeaveVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LeaveVoiceChat");

	APlayerController_LeaveVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientLeaveVoiceChat
// (Final, Defined, NetReliable, Event)

void APlayerController::ClientLeaveVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientLeaveVoiceChat");

	APlayerController_ClientLeaveVoiceChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientChangeVoiceChatter
// (Defined, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// int                            IpAddr                         (Parm)
// int                            Handle                         (Parm)
// bool                           Add                            (Parm)

void APlayerController::ClientChangeVoiceChatter(int IpAddr, int Handle, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientChangeVoiceChatter");

	APlayerController_ClientChangeVoiceChatter_Params params;
	params.IpAddr = IpAddr;
	params.Handle = Handle;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerGetVoiceChatters
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// class APlayerController*       Player                         (Parm)

void APlayerController::ServerGetVoiceChatters(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerGetVoiceChatters");

	APlayerController_ServerGetVoiceChatters_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerChangeVoiceChatter
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// class APlayerController*       Player                         (Parm)
// int                            IpAddr                         (Parm)
// int                            Handle                         (Parm)
// bool                           Add                            (Parm)

void APlayerController::ServerChangeVoiceChatter(class APlayerController* Player, int IpAddr, int Handle, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerChangeVoiceChatter");

	APlayerController_ServerChangeVoiceChatter_Params params;
	params.Player = Player;
	params.IpAddr = IpAddr;
	params.Handle = Handle;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CanRestartPlayer
// (Defined, Iterator, NetReliable, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::CanRestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CanRestartPlayer");

	APlayerController_CanRestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ClientCloseMenu
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// bool                           bCloseAll                      (OptionalParm, Parm)
// bool                           bCancel                        (OptionalParm, Parm)

void APlayerController::ClientCloseMenu(bool bCloseAll, bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCloseMenu");

	APlayerController_ClientCloseMenu_Params params;
	params.bCloseAll = bCloseAll;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientOpenMenu
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Menu                           (Parm, NeedCtorLink)
// bool                           bDisconnect                    (OptionalParm, Parm)
// struct FString                 Msg1                           (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Msg2                           (OptionalParm, Parm, NeedCtorLink)

void APlayerController::ClientOpenMenu(const struct FString& Menu, bool bDisconnect, const struct FString& Msg1, const struct FString& Msg2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientOpenMenu");

	APlayerController_ClientOpenMenu_Params params;
	params.Menu = Menu;
	params.bDisconnect = bDisconnect;
	params.Msg1 = Msg1;
	params.Msg2 = Msg2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ChangeAlwaysMouseLook
// (Defined, Iterator, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void APlayerController::ChangeAlwaysMouseLook(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ChangeAlwaysMouseLook");

	APlayerController_ChangeAlwaysMouseLook_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ChangeStairLook
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void APlayerController::ChangeStairLook(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ChangeStairLook");

	APlayerController_ChangeStairLook_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LoadPlayers
// (Defined, Latent, NetReliable, Exec, Native)

void APlayerController::LoadPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LoadPlayers");

	APlayerController_LoadPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewSelf
// (PreOperator, Singular, NetReliable, Event)

void APlayerController::ServerViewSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewSelf");

	APlayerController_ServerViewSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewNextPlayer
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Event)

void APlayerController::ServerViewNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewNextPlayer");

	APlayerController_ServerViewNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.IsSpectating
// (Defined, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::IsSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.IsSpectating");

	APlayerController_IsSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ClearDoubleClick
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, Event)

void APlayerController::ClearDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearDoubleClick");

	APlayerController_ClearDoubleClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.UpdateRotation
// (Final, Iterator, Singular, Net, Simulated, Native)
// Parameters:
// float                          DeltaTime                      (Parm)
// float                          maxPitch                       (Parm)

void APlayerController::UpdateRotation(float DeltaTime, float maxPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.UpdateRotation");

	APlayerController_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.maxPitch = maxPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.TurnAround
// (Iterator, Latent, PreOperator, NetReliable, Event)

void APlayerController::TurnAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TurnAround");

	APlayerController_TurnAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.TurnTowardNearestEnemy
// (Final, Defined, Iterator, PreOperator, NetReliable, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::TurnTowardNearestEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TurnTowardNearestEnemy");

	APlayerController_TurnTowardNearestEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ViewShake
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Native)
// Parameters:
// float                          DeltaTime                      (Parm)

void APlayerController::ViewShake(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ViewShake");

	APlayerController_ViewShake_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CheckShake
// (Final, Latent, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// float                          MaxOffset                      (Parm, OutParm)
// float                          offset                         (Parm, OutParm)
// float                          Rate                           (Parm, OutParm)
// float                          Time                           (Parm, OutParm)

void APlayerController::CheckShake(float* MaxOffset, float* offset, float* Rate, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CheckShake");

	APlayerController_CheckShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxOffset != nullptr)
		*MaxOffset = params.MaxOffset;
	if (offset != nullptr)
		*offset = params.offset;
	if (Rate != nullptr)
		*Rate = params.Rate;
	if (Time != nullptr)
		*Time = params.Time;
}


// Function Engine.PlayerController.PlayerCalcView
// (Defined, Latent, Singular, Exec, Native)
// Parameters:
// class AActor*                  ViewActor                      (Parm, OutParm)
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)

void APlayerController::PlayerCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayerCalcView");

	APlayerController_PlayerCalcView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewActor != nullptr)
		*ViewActor = params.ViewActor;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Engine.PlayerController.GetViewRotation
// (Final, Latent, Net, Simulated, Native)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator APlayerController::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetViewRotation");

	APlayerController_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.CreateCameraEffect
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class UClass*                  EffectClass                    (Parm)

void APlayerController::CreateCameraEffect(class UClass* EffectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CreateCameraEffect");

	APlayerController_CreateCameraEffect_Params params;
	params.EffectClass = EffectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.RemoveCameraEffect
// (Iterator, NetReliable, Event)
// Parameters:
// class UCameraEffect*           ExEffect                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::RemoveCameraEffect(class UCameraEffect* ExEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.RemoveCameraEffect");

	APlayerController_RemoveCameraEffect_Params params;
	params.ExEffect = ExEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.AddCameraEffect
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UCameraEffect*           NewEffect                      (Parm)
// bool                           RemoveExisting                 (OptionalParm, Parm)

void APlayerController::AddCameraEffect(class UCameraEffect* NewEffect, bool RemoveExisting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddCameraEffect");

	APlayerController_AddCameraEffect_Params params;
	params.NewEffect = NewEffect;
	params.RemoveExisting = RemoveExisting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CalcFirstPersonView
// (Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)

void APlayerController::CalcFirstPersonView(struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CalcFirstPersonView");

	APlayerController_CalcFirstPersonView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Engine.PlayerController.CalcBehindView
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)
// float                          dist                           (Parm)

void APlayerController::CalcBehindView(float dist, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CalcBehindView");

	APlayerController_CalcBehindView_Params params;
	params.dist = dist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Engine.PlayerController.AdjustView
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Native)
// Parameters:
// float                          DeltaTime                      (Parm)

void APlayerController::AdjustView(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AdjustView");

	APlayerController_AdjustView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.NotifyLanded
// (Singular, Net, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::NotifyLanded(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.NotifyLanded");

	APlayerController_NotifyLanded_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.AdjustAim
// (Defined, Iterator, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// class AAmmunition*             FiredAmmunition                (Parm)
// struct FVector                 projStart                      (Parm)
// int                            aimerror                       (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator APlayerController::AdjustAim(class AAmmunition* FiredAmmunition, const struct FVector& projStart, int aimerror)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AdjustAim");

	APlayerController_AdjustAim_Params params;
	params.FiredAmmunition = FiredAmmunition;
	params.projStart = projStart;
	params.aimerror = aimerror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.PlayerMove
// (Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// float                          DeltaTime                      (Parm)

void APlayerController::PlayerMove(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayerMove");

	APlayerController_PlayerMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PlayerTick
// (Final, PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void APlayerController::PlayerTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayerTick");

	APlayerController_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.TravelPostAccept
// (Defined, Iterator, Singular, Net, Exec, Native)

void APlayerController::TravelPostAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TravelPostAccept");

	APlayerController_TravelPostAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ChangedWeapon
// (Final, Iterator, PreOperator, Net, Simulated, Native)

void APlayerController::ChangedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ChangedWeapon");

	APlayerController_ChangedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.BehindView
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void APlayerController::BehindView(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.BehindView");

	APlayerController_BehindView_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReStart
// (Iterator, Singular, Net, Simulated, Native)

void APlayerController::ClientReStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReStart");

	APlayerController_ClientReStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.EnterStartState
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, Native)

void APlayerController::EnterStartState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.EnterStartState");

	APlayerController_EnterStartState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Restart
// (Defined, Iterator, PreOperator, Net, Exec, Native)

void APlayerController::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Restart");

	APlayerController_Restart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetProgressTime
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// float                          t                              (Parm)

void APlayerController::SetProgressTime(float t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetProgressTime");

	APlayerController_SetProgressTime_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetProgressMessage
// (Final, Latent, PreOperator, Simulated, Exec, Native)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 S                              (Parm, NeedCtorLink)
// struct FColor                  C                              (Parm)

void APlayerController::SetProgressMessage(int Index, const struct FString& S, const struct FColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetProgressMessage");

	APlayerController_SetProgressMessage_Params params;
	params.Index = Index;
	params.S = S;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClearProgressMessages
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native)

void APlayerController::ClearProgressMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearProgressMessages");

	APlayerController_ClearProgressMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SwitchLevel
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void APlayerController::SwitchLevel(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SwitchLevel");

	APlayerController_SwitchLevel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ChangeTeam
// (Final, Iterator, Latent, NetReliable, Simulated, Native)
// Parameters:
// int                            N                              (Parm)

void APlayerController::ChangeTeam(int N)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ChangeTeam");

	APlayerController_ChangeTeam_Params params;
	params.N = N;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SwitchTeam
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event)

void APlayerController::SwitchTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SwitchTeam");

	APlayerController_SwitchTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ChangeName
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void APlayerController::ChangeName(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ChangeName");

	APlayerController_ChangeName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetName
// (Final, Iterator, Event)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void APlayerController::SetName(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetName");

	APlayerController_SetName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Name
// (Iterator, PreOperator, Net)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void APlayerController::Name(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Name");

	APlayerController_Name_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Suicide
// (Defined, Latent, PreOperator, Net, Exec, Native)

void APlayerController::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Suicide");

	APlayerController_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUse
// (Final, Event)

void APlayerController::ServerUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUse");

	APlayerController_ServerUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Use
// (Event)

void APlayerController::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Use");

	APlayerController_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AltFire
// (Defined, Iterator, PreOperator, Singular, Simulated, Native)
// Parameters:
// float                          f                              (OptionalParm, Parm)

void APlayerController::AltFire(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AltFire");

	APlayerController_AltFire_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Fire
// (PreOperator, Singular, Simulated, Native)
// Parameters:
// float                          f                              (OptionalParm, Parm)

void APlayerController::Fire(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Fire");

	APlayerController_Fire_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ActivateItem
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)

void APlayerController::ActivateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ActivateItem");

	APlayerController_ActivateItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PrevItem
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)

void APlayerController::PrevItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PrevItem");

	APlayerController_PrevItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.GetWeapon
// (Final, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class UClass*                  NewWeaponClass                 (Parm)

void APlayerController::GetWeapon(class UClass* NewWeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetWeapon");

	APlayerController_GetWeapon_Params params;
	params.NewWeaponClass = NewWeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SwitchWeapon
// (PreOperator, Net, Exec, Native)
// Parameters:
// unsigned char                  f                              (Parm)

void APlayerController::SwitchWeapon(unsigned char f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SwitchWeapon");

	APlayerController_SwitchWeapon_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.NextWeapon
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Native)

void APlayerController::NextWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.NextWeapon");

	APlayerController_NextWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PrevWeapon
// (Final, Latent, PreOperator, Singular, Net, Simulated, Native)

void APlayerController::PrevWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PrevWeapon");

	APlayerController_PrevWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerThrowWeapon
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native)

void APlayerController::ServerThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerThrowWeapon");

	APlayerController_ServerThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ThrowWeapon
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native)

void APlayerController::ThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ThrowWeapon");

	APlayerController_ThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ActivateInventoryItem
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class UClass*                  InvItem                        (Parm)

void APlayerController::ActivateInventoryItem(class UClass* InvItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ActivateInventoryItem");

	APlayerController_ActivateInventoryItem_Params params;
	params.InvItem = InvItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ShowMenu
// (Latent, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ShowMenu");

	APlayerController_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Pause
// (Final, Latent, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Pause");

	APlayerController_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetPause
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// bool                           bPause                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::SetPause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetPause");

	APlayerController_SetPause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.QuickLoad
// (Defined, Latent, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::QuickLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.QuickLoad");

	APlayerController_QuickLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.QuickSave
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::QuickSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.QuickSave");

	APlayerController_QuickSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LocalTravel
// (Iterator, Latent, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void APlayerController::LocalTravel(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LocalTravel");

	APlayerController_LocalTravel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.RestartLevel
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native)

void APlayerController::RestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.RestartLevel");

	APlayerController_RestartLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Speech
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FName                   type                           (Parm)
// int                            Index                          (Parm)
// struct FString                 Callsign                       (Parm, NeedCtorLink)

void APlayerController::Speech(const struct FName& type, int Index, const struct FString& Callsign)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Speech");

	APlayerController_Speech_Params params;
	params.type = type;
	params.Index = Index;
	params.Callsign = Callsign;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Jump
// (Defined, Simulated, Exec, Native)
// Parameters:
// float                          f                              (OptionalParm, Parm)

void APlayerController::Jump(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Jump");

	APlayerController_Jump_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Typing
// (Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           bTyping                        (Parm)

void APlayerController::Typing(bool bTyping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Typing");

	APlayerController_Typing_Params params;
	params.bTyping = bTyping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.damageAttitudeTo
// (Defined, Iterator, PreOperator, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          Damage                         (Parm)

void APlayerController::damageAttitudeTo(class APawn* Other, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.damageAttitudeTo");

	APlayerController_damageAttitudeTo_Params params;
	params.Other = Other;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ShakeView
// (Final, PreOperator, Singular, Exec, Native)
// Parameters:
// float                          ShakeTime                      (Parm)
// float                          RollMag                        (Parm)
// struct FVector                 OffsetMag                      (Parm)
// float                          RollRate                       (Parm)
// struct FVector                 OffsetRate                     (Parm)
// float                          OffsetTime                     (Parm)

void APlayerController::ShakeView(float ShakeTime, float RollMag, const struct FVector& OffsetMag, float RollRate, const struct FVector& OffsetRate, float OffsetTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ShakeView");

	APlayerController_ShakeView_Params params;
	params.ShakeTime = ShakeTime;
	params.RollMag = RollMag;
	params.OffsetMag = OffsetMag;
	params.RollRate = RollRate;
	params.OffsetRate = OffsetRate;
	params.OffsetTime = OffsetTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientShake
// (Final, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FVector                 ShakeRoll                      (Parm)
// struct FVector                 OffsetMag                      (Parm)
// struct FVector                 ShakeRate                      (Parm)
// float                          OffsetTime                     (Parm)

void APlayerController::ClientShake(const struct FVector& ShakeRoll, const struct FVector& OffsetMag, const struct FVector& ShakeRate, float OffsetTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientShake");

	APlayerController_ClientShake_Params params;
	params.ShakeRoll = ShakeRoll;
	params.OffsetMag = OffsetMag;
	params.ShakeRate = ShakeRate;
	params.OffsetTime = OffsetTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientAdjustGlow
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          Scale                          (Parm)
// struct FVector                 fog                            (Parm)

void APlayerController::ClientAdjustGlow(float Scale, const struct FVector& fog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientAdjustGlow");

	APlayerController_ClientAdjustGlow_Params params;
	params.Scale = Scale;
	params.fog = fog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientFlash
// (PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          Scale                          (Parm)
// struct FVector                 fog                            (Parm)

void APlayerController::ClientFlash(float Scale, const struct FVector& fog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientFlash");

	APlayerController_ClientFlash_Params params;
	params.Scale = Scale;
	params.fog = fog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetFOVAngle
// (Final, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          NewFOV                         (Parm)

void APlayerController::SetFOVAngle(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetFOVAngle");

	APlayerController_SetFOVAngle_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerRestartGame
// (Latent, Simulated, Exec, Native)

void APlayerController::ServerRestartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerRestartGame");

	APlayerController_ServerRestartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.HandleWalking
// (Final, Defined, Iterator, Latent, Simulated, Exec, Native)

void APlayerController::HandleWalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.HandleWalking");

	APlayerController_HandleWalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ReplicateMove
// (Iterator, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FVector                 NewAccel                       (Parm)
// TEnumAsByte<EDoubleClickDir>   DoubleClickMove                (Parm)
// struct FRotator                DeltaRot                       (Parm)

void APlayerController::ReplicateMove(float DeltaTime, const struct FVector& NewAccel, TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FRotator& DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ReplicateMove");

	APlayerController_ReplicateMove_Params params;
	params.DeltaTime = DeltaTime;
	params.NewAccel = NewAccel;
	params.DoubleClickMove = DoubleClickMove;
	params.DeltaRot = DeltaRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CompressAccel
// (Defined, Latent, PreOperator, Singular, Exec, Native)
// Parameters:
// int                            C                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APlayerController::CompressAccel(int C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CompressAccel");

	APlayerController_CompressAccel_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetFreeMove
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class ASavedMove*              ReturnValue                    (Parm, OutParm, ReturnParm)

class ASavedMove* APlayerController::GetFreeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetFreeMove");

	APlayerController_GetFreeMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ClientUpdatePosition
// (Final, Singular, NetReliable, Simulated, Exec, Native)

void APlayerController::ClientUpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUpdatePosition");

	APlayerController_ClientUpdatePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdatePing
// (Latent, NetReliable, Simulated, Exec, Native)
// Parameters:
// int                            NewPing                        (Parm)

void APlayerController::ServerUpdatePing(int NewPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdatePing");

	APlayerController_ServerUpdatePing_Params params;
	params.NewPing = NewPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LongClientAdjustPosition
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Native)
// Parameters:
// float                          TimeStamp                      (Parm)
// struct FName                   NewState                       (Parm)
// TEnumAsByte<EPhysics>          newPhysics                     (Parm)
// float                          NewLocX                        (Parm)
// float                          NewLocY                        (Parm)
// float                          NewLocZ                        (Parm)
// float                          NewVelX                        (Parm)
// float                          NewVelY                        (Parm)
// float                          NewVelZ                        (Parm)
// class AActor*                  NewBase                        (Parm)
// float                          NewFloorX                      (Parm)
// float                          NewFloorY                      (Parm)
// float                          NewFloorZ                      (Parm)

void APlayerController::LongClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase, float NewFloorX, float NewFloorY, float NewFloorZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LongClientAdjustPosition");

	APlayerController_LongClientAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewState = NewState;
	params.newPhysics = newPhysics;
	params.NewLocX = NewLocX;
	params.NewLocY = NewLocY;
	params.NewLocZ = NewLocZ;
	params.NewVelX = NewVelX;
	params.NewVelY = NewVelY;
	params.NewVelZ = NewVelZ;
	params.NewBase = NewBase;
	params.NewFloorX = NewFloorX;
	params.NewFloorY = NewFloorY;
	params.NewFloorZ = NewFloorZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientAdjustPosition
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// float                          TimeStamp                      (Parm)
// struct FName                   NewState                       (Parm)
// TEnumAsByte<EPhysics>          newPhysics                     (Parm)
// float                          NewLocX                        (Parm)
// float                          NewLocY                        (Parm)
// float                          NewLocZ                        (Parm)
// float                          NewVelX                        (Parm)
// float                          NewVelY                        (Parm)
// float                          NewVelZ                        (Parm)
// class AActor*                  NewBase                        (Parm)

void APlayerController::ClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientAdjustPosition");

	APlayerController_ClientAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewState = NewState;
	params.newPhysics = newPhysics;
	params.NewLocX = NewLocX;
	params.NewLocY = NewLocY;
	params.NewLocZ = NewLocZ;
	params.NewVelX = NewVelX;
	params.NewVelY = NewVelY;
	params.NewVelZ = NewVelZ;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ShortClientAdjustPosition
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// float                          TimeStamp                      (Parm)
// struct FName                   NewState                       (Parm)
// TEnumAsByte<EPhysics>          newPhysics                     (Parm)
// float                          NewLocX                        (Parm)
// float                          NewLocY                        (Parm)
// float                          NewLocZ                        (Parm)
// class AActor*                  NewBase                        (Parm)

void APlayerController::ShortClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ShortClientAdjustPosition");

	APlayerController_ShortClientAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewState = NewState;
	params.newPhysics = newPhysics;
	params.NewLocX = NewLocX;
	params.NewLocY = NewLocY;
	params.NewLocZ = NewLocZ;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.VeryShortClientAdjustPosition
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          TimeStamp                      (Parm)
// float                          NewLocX                        (Parm)
// float                          NewLocY                        (Parm)
// float                          NewLocZ                        (Parm)
// class AActor*                  NewBase                        (Parm)

void APlayerController::VeryShortClientAdjustPosition(float TimeStamp, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.VeryShortClientAdjustPosition");

	APlayerController_VeryShortClientAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLocX = NewLocX;
	params.NewLocY = NewLocY;
	params.NewLocZ = NewLocZ;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.MoveAutonomous
// (Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           NewbRun                        (Parm)
// bool                           NewbDuck                       (Parm)
// bool                           NewbPressedJump                (Parm)
// bool                           NewbDoubleJump                 (Parm)
// TEnumAsByte<EDoubleClickDir>   DoubleClickMove                (Parm)
// struct FVector                 NewAccel                       (Parm)
// struct FRotator                DeltaRot                       (Parm)

void APlayerController::MoveAutonomous(float DeltaTime, bool NewbRun, bool NewbDuck, bool NewbPressedJump, bool NewbDoubleJump, TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FVector& NewAccel, const struct FRotator& DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.MoveAutonomous");

	APlayerController_MoveAutonomous_Params params;
	params.DeltaTime = DeltaTime;
	params.NewbRun = NewbRun;
	params.NewbDuck = NewbDuck;
	params.NewbPressedJump = NewbPressedJump;
	params.NewbDoubleJump = NewbDoubleJump;
	params.DoubleClickMove = DoubleClickMove;
	params.NewAccel = NewAccel;
	params.DeltaRot = DeltaRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ProcessMove
// (Latent, PreOperator, Singular, Simulated, Native)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FVector                 NewAccel                       (Parm)
// TEnumAsByte<EDoubleClickDir>   DoubleClickMove                (Parm)
// struct FRotator                DeltaRot                       (Parm)

void APlayerController::ProcessMove(float DeltaTime, const struct FVector& NewAccel, TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FRotator& DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ProcessMove");

	APlayerController_ProcessMove_Params params;
	params.DeltaTime = DeltaTime;
	params.NewAccel = NewAccel;
	params.DoubleClickMove = DoubleClickMove;
	params.DeltaRot = DeltaRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ProcessDrive
// (Final, Defined, Iterator, Latent, Singular, Exec, Native)
// Parameters:
// float                          InForward                      (Parm)
// float                          InStrafe                       (Parm)
// bool                           InJump                         (Parm)

void APlayerController::ProcessDrive(float InForward, float InStrafe, bool InJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ProcessDrive");

	APlayerController_ProcessDrive_Params params;
	params.InForward = InForward;
	params.InStrafe = InStrafe;
	params.InJump = InJump;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerDrive
// (Final, Defined, Iterator, Net, Simulated, Exec, Native)
// Parameters:
// float                          InForward                      (Parm)
// float                          InStrafe                       (Parm)
// bool                           InJump                         (Parm)

void APlayerController::ServerDrive(float InForward, float InStrafe, bool InJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerDrive");

	APlayerController_ServerDrive_Params params;
	params.InForward = InForward;
	params.InStrafe = InStrafe;
	params.InJump = InJump;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerMove
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// float                          TimeStamp                      (Parm)
// struct FVector                 InAccel                        (Parm)
// struct FVector                 ClientLoc                      (Parm)
// bool                           NewbRun                        (Parm)
// bool                           NewbDuck                       (Parm)
// bool                           NewbJumpStatus                 (Parm)
// bool                           NewbDoubleJump                 (Parm)
// TEnumAsByte<EDoubleClickDir>   DoubleClickMove                (Parm)
// unsigned char                  ClientRoll                     (Parm)
// int                            View                           (Parm)
// unsigned char                  OldTimeDelta                   (OptionalParm, Parm)
// int                            OldAccel                       (OptionalParm, Parm)

void APlayerController::ServerMove(float TimeStamp, const struct FVector& InAccel, const struct FVector& ClientLoc, bool NewbRun, bool NewbDuck, bool NewbJumpStatus, bool NewbDoubleJump, TEnumAsByte<EDoubleClickDir> DoubleClickMove, unsigned char ClientRoll, int View, unsigned char OldTimeDelta, int OldAccel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerMove");

	APlayerController_ServerMove_Params params;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewbRun = NewbRun;
	params.NewbDuck = NewbDuck;
	params.NewbJumpStatus = NewbJumpStatus;
	params.NewbDoubleJump = NewbDoubleJump;
	params.DoubleClickMove = DoubleClickMove;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.OldTimeDelta = OldTimeDelta;
	params.OldAccel = OldAccel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ShortServerMove
// (Defined, Iterator, Net, Simulated, Exec, Native)
// Parameters:
// float                          TimeStamp                      (Parm)
// struct FVector                 ClientLoc                      (Parm)
// bool                           NewbRun                        (Parm)
// bool                           NewbDuck                       (Parm)
// bool                           NewbJumpStatus                 (Parm)
// unsigned char                  ClientRoll                     (Parm)
// int                            View                           (Parm)

void APlayerController::ShortServerMove(float TimeStamp, const struct FVector& ClientLoc, bool NewbRun, bool NewbDuck, bool NewbJumpStatus, unsigned char ClientRoll, int View)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ShortServerMove");

	APlayerController_ShortServerMove_Params params;
	params.TimeStamp = TimeStamp;
	params.ClientLoc = ClientLoc;
	params.NewbRun = NewbRun;
	params.NewbDuck = NewbDuck;
	params.NewbJumpStatus = NewbJumpStatus;
	params.ClientRoll = ClientRoll;
	params.View = View;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.RocketServerMove
// (Final, Iterator, Net, Simulated, Exec, Native)
// Parameters:
// float                          TimeStamp                      (Parm)
// struct FVector                 InAccel                        (Parm)
// struct FVector                 ClientLoc                      (Parm)
// unsigned char                  ClientRoll                     (Parm)
// int                            View                           (Parm)

void APlayerController::RocketServerMove(float TimeStamp, const struct FVector& InAccel, const struct FVector& ClientLoc, unsigned char ClientRoll, int View)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.RocketServerMove");

	APlayerController_RocketServerMove_Params params;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.ClientRoll = ClientRoll;
	params.View = View;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ForceDeathUpdate
// (Final, Defined, PreOperator, Net, Simulated, Exec, Native)

void APlayerController::ForceDeathUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ForceDeathUpdate");

	APlayerController_ForceDeathUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientVoiceMessage
// (Final, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APlayerReplicationInfo*  Sender                         (Parm)
// class APlayerReplicationInfo*  Recipient                      (Parm)
// struct FName                   messagetype                    (Parm)
// unsigned char                  MessageID                      (Parm)

void APlayerController::ClientVoiceMessage(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char MessageID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientVoiceMessage");

	APlayerController_ClientVoiceMessage_Params params;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.messagetype = messagetype;
	params.MessageID = MessageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetBehindView
// (Iterator, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// bool                           B                              (Parm)

void APlayerController::ClientSetBehindView(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetBehindView");

	APlayerController_ClientSetBehindView_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetFixedCamera
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// bool                           B                              (Parm)

void APlayerController::ClientSetFixedCamera(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetFixedCamera");

	APlayerController_ClientSetFixedCamera_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PreClientTravel
// (Defined, Latent, PreOperator, NetReliable, Event)

void APlayerController::PreClientTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PreClientTravel");

	APlayerController_PreClientTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ShowGun
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::ShowGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ShowGun");

	APlayerController_ShowGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.IsDead
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.IsDead");

	APlayerController_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.SetWeaponHand
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void APlayerController::SetWeaponHand(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetWeaponHand");

	APlayerController_SetWeaponHand_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetHand
// (PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// int                            IntValue                       (Parm)

void APlayerController::SetHand(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetHand");

	APlayerController_SetHand_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerSetHandedness
// (Final, Net, Simulated, Exec, Native)
// Parameters:
// float                          hand                           (Parm)

void APlayerController::ServerSetHandedness(float hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerSetHandedness");

	APlayerController_ServerSetHandedness_Params params;
	params.hand = hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.TeamSay
// (Final, Defined, Latent, PreOperator, Singular, Exec, Native)
// Parameters:
// struct FString                 Msg                            (Parm, NeedCtorLink)

void APlayerController::TeamSay(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TeamSay");

	APlayerController_TeamSay_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Say
// (Final, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 Msg                            (Parm, NeedCtorLink)

void APlayerController::Say(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Say");

	APlayerController_Say_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ForceReload
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, Native)

void APlayerController::ForceReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ForceReload");

	APlayerController_ForceReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetMouseAccel
// (Final, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          f                              (Parm)

void APlayerController::SetMouseAccel(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetMouseAccel");

	APlayerController_SetMouseAccel_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetMouseSmoothing
// (Defined, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// int                            Mode                           (Parm)

void APlayerController::SetMouseSmoothing(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetMouseSmoothing");

	APlayerController_SetMouseSmoothing_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetSensitivity
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          f                              (Parm)

void APlayerController::SetSensitivity(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetSensitivity");

	APlayerController_SetSensitivity_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Mutate
// (Final, Defined, PreOperator, Net, Exec, Native)
// Parameters:
// struct FString                 MutateString                   (Parm, NeedCtorLink)

void APlayerController::Mutate(const struct FString& MutateString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Mutate");

	APlayerController_Mutate_Params params;
	params.MutateString = MutateString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.FOV
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// float                          f                              (Parm)

void APlayerController::FOV(float f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.FOV");

	APlayerController_FOV_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ResetFOV
// (PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::ResetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ResetFOV");

	APlayerController_ResetFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetFOV
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          NewFOV                         (Parm)

void APlayerController::SetFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetFOV");

	APlayerController_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.FixFOV
// (Final, Defined, Latent, Exec, Native)

void APlayerController::FixFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.FixFOV");

	APlayerController_FixFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.EndZoom
// (Latent, Net, NetReliable, Simulated, Native)

void APlayerController::EndZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.EndZoom");

	APlayerController_EndZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.StopZoom
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::StopZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.StopZoom");

	APlayerController_StopZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.StartZoom
// (Final, Latent, Singular, Net, Simulated, Exec, Native)

void APlayerController::StartZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.StartZoom");

	APlayerController_StartZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ToggleZoom
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::ToggleZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ToggleZoom");

	APlayerController_ToggleZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetMusic
// (Final, Latent, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// struct FString                 NewSong                        (Parm, NeedCtorLink)
// TEnumAsByte<EMusicTransition>  NewTransition                  (Parm)

void APlayerController::ClientSetMusic(const struct FString& NewSong, TEnumAsByte<EMusicTransition> NewTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetMusic");

	APlayerController_ClientSetMusic_Params params;
	params.NewSong = NewSong;
	params.NewTransition = NewTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void APlayerController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Destroyed");

	APlayerController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReliablePlaySound
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class USound*                  ASound                         (Parm)
// bool                           bVolumeControl                 (OptionalParm, Parm)

void APlayerController::ClientReliablePlaySound(class USound* ASound, bool bVolumeControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReliablePlaySound");

	APlayerController_ClientReliablePlaySound_Params params;
	params.ASound = ASound;
	params.bVolumeControl = bVolumeControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlaySound
// (Iterator, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// class USound*                  ASound                         (Parm)
// bool                           bVolumeControl                 (OptionalParm, Parm)
// float                          inAtten                        (OptionalParm, Parm)
// TEnumAsByte<ESoundSlot>        Slot                           (OptionalParm, Parm)

void APlayerController::ClientPlaySound(class USound* ASound, bool bVolumeControl, float inAtten, TEnumAsByte<ESoundSlot> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlaySound");

	APlayerController_ClientPlaySound_Params params;
	params.ASound = ASound;
	params.bVolumeControl = bVolumeControl;
	params.inAtten = inAtten;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AllowVoiceMessage
// (Final, Iterator, Simulated, Exec, Native)
// Parameters:
// struct FName                   messagetype                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APlayerController::AllowVoiceMessage(const struct FName& messagetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AllowVoiceMessage");

	APlayerController_AllowVoiceMessage_Params params;
	params.messagetype = messagetype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.PlayAnnouncement
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class USound*                  ASound                         (Parm)
// unsigned char                  AnnouncementLevel              (Parm)
// bool                           bForce                         (OptionalParm, Parm)

void APlayerController::PlayAnnouncement(class USound* ASound, unsigned char AnnouncementLevel, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayAnnouncement");

	APlayerController_PlayAnnouncement_Params params;
	params.ASound = ASound;
	params.AnnouncementLevel = AnnouncementLevel;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PlayBeepSound
// (Final, Defined, Iterator, Net, Exec, Native)

void APlayerController::PlayBeepSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayBeepSound");

	APlayerController_PlayBeepSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.TeamMessage
// (Iterator, Net, NetReliable, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  PRI                            (Parm)
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (Parm)

void APlayerController::TeamMessage(class APlayerReplicationInfo* PRI, const struct FString& S, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TeamMessage");

	APlayerController_TeamMessage_Params params;
	params.PRI = PRI;
	params.S = S;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientMessage
// (Final, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void APlayerController::ClientMessage(const struct FString& S, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientMessage");

	APlayerController_ClientMessage_Params params;
	params.S = S;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ReceiveLocalizedMessage
// (Final, Iterator, Latent, Singular, Net, Simulated, Native)
// Parameters:
// class UClass*                  Message                        (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void APlayerController::ReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ReceiveLocalizedMessage");

	APlayerController_ReceiveLocalizedMessage_Params params;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ViewFlash
// (Defined, Latent, Exec, Native)
// Parameters:
// float                          DeltaTime                      (Parm)

void APlayerController::ViewFlash(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ViewFlash");

	APlayerController_ViewFlash_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.UpdateFlashComponent
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          Current                        (Parm)
// float                          Step                           (Parm)
// float                          Goal                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APlayerController::UpdateFlashComponent(float Current, float Step, float Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.UpdateFlashComponent");

	APlayerController_UpdateFlashComponent_Params params;
	params.Current = Current;
	params.Step = Step;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.HandlePickup
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APickup*                 pick                           (Parm)

void APlayerController::HandlePickup(class APickup* pick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.HandlePickup");

	APlayerController_HandlePickup_Params params;
	params.pick = pick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetHUD
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class UClass*                  newHUDType                     (Parm)
// class UClass*                  newScoringType                 (Parm)

void APlayerController::ClientSetHUD(class UClass* newHUDType, class UClass* newScoringType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetHUD");

	APlayerController_ClientSetHUD_Params params;
	params.newHUDType = newHUDType;
	params.newScoringType = newScoringType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PawnDied
// (Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   P                              (Parm)

void APlayerController::PawnDied(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PawnDied");

	APlayerController_PawnDied_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ViewNextBot
// (Singular, Net, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::ViewNextBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ViewNextBot");

	APlayerController_ViewNextBot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.UnPossess
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Native)

void APlayerController::UnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.UnPossess");

	APlayerController_UnPossess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Possess
// (Final, Defined, PreOperator, Net, Simulated, Native)
// Parameters:
// class APawn*                   aPawn                          (Parm)

void APlayerController::Possess(class APawn* aPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Possess");

	APlayerController_Possess_Params params;
	params.aPawn = aPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.GetFacingDirection
// (Final, Defined, Simulated, Exec, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APlayerController::GetFacingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetFacingDirection");

	APlayerController_GetFacingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GivePawn
// (Final, Iterator, Singular, Simulated, Exec, Native)
// Parameters:
// class APawn*                   NewPawn                        (Parm)

void APlayerController::GivePawn(class APawn* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GivePawn");

	APlayerController_GivePawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AskForPawn
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void APlayerController::AskForPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AskForPawn");

	APlayerController_AskForPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientGotoState
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// struct FName                   NewState                       (Parm)
// struct FName                   NewLabel                       (Parm)

void APlayerController::ClientGotoState(const struct FName& NewState, const struct FName& NewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientGotoState");

	APlayerController_ClientGotoState_Params params;
	params.NewState = NewState;
	params.NewLabel = NewLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.InitInputSystem
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event)

void APlayerController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.InitInputSystem");

	APlayerController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CleanOutSavedMoves
// (Final, Latent, PreOperator, NetReliable, Simulated, Native)

void APlayerController::CleanOutSavedMoves()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CleanOutSavedMoves");

	APlayerController_CleanOutSavedMoves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Reset
// (Defined, Singular, Simulated, Native)

void APlayerController::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Reset");

	APlayerController_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SpawnDefaultHUD
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::SpawnDefaultHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SpawnDefaultHUD");

	APlayerController_SpawnDefaultHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerVerifyViewTarget
// (Iterator, NetReliable, Simulated, Exec, Native)

void APlayerController::ServerVerifyViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerVerifyViewTarget");

	APlayerController_ServerVerifyViewTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetViewTarget
// (Final, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class AActor*                  A                              (Parm)

void APlayerController::ClientSetViewTarget(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetViewTarget");

	APlayerController_ClientSetViewTarget_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddCheatManager
// (Final, Iterator, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::AddCheatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddCheatManager");

	APlayerController_AddCheatManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddCheats
// (Defined, Latent, NetReliable, Simulated, Exec, Native)

void APlayerController::AddCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddCheats");

	APlayerController_AddCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PendingStasis
// (Defined, Event)

void APlayerController::PendingStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PendingStasis");

	APlayerController_PendingStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerGivePawn
// (Iterator, Latent, PreOperator, Simulated, Exec, Native)

void APlayerController::ServerGivePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerGivePawn");

	APlayerController_ServerGivePawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void APlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PostBeginPlay");

	APlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientHearSound
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class AActor*                  Actor                          (Parm)
// int                            Id                             (Parm)
// class USound*                  S                              (Parm)
// struct FVector                 SoundLocation                  (Parm)
// struct FVector                 Parameters                     (Parm)
// bool                           Attenuate                      (Parm)

void APlayerController::ClientHearSound(class AActor* Actor, int Id, class USound* S, const struct FVector& SoundLocation, const struct FVector& Parameters, bool Attenuate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientHearSound");

	APlayerController_ClientHearSound_Params params;
	params.Actor = Actor;
	params.Id = Id;
	params.S = S;
	params.SoundLocation = SoundLocation;
	params.Parameters = Parameters;
	params.Attenuate = Attenuate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.FindStairRotation
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// float                          DeltaTime                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APlayerController::FindStairRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.FindStairRotation");

	APlayerController_FindStairRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ServerValidationResponse
// (Defined, Latent, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 R                              (Parm, NeedCtorLink)

void APlayerController::ServerValidationResponse(const struct FString& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerValidationResponse");

	APlayerController_ServerValidationResponse_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientValidate
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 C                              (Parm, NeedCtorLink)

void APlayerController::ClientValidate(const struct FString& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientValidate");

	APlayerController_ClientValidate_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PasteFromClipboard
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerController::PasteFromClipboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PasteFromClipboard");

	APlayerController_PasteFromClipboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.CopyToClipboard
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void APlayerController::CopyToClipboard(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CopyToClipboard");

	APlayerController_CopyToClipboard_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.GetDefaultURL
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Option                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerController::GetDefaultURL(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetDefaultURL");

	APlayerController_GetDefaultURL_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.UpdateURL
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 NewOption                      (Parm, NeedCtorLink)
// struct FString                 NewValue                       (Parm, NeedCtorLink)
// bool                           bSaveDefault                   (Parm)

void APlayerController::UpdateURL(const struct FString& NewOption, const struct FString& NewValue, bool bSaveDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.UpdateURL");

	APlayerController_UpdateURL_Params params;
	params.NewOption = NewOption;
	params.NewValue = NewValue;
	params.bSaveDefault = bSaveDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTravel
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// TEnumAsByte<ETravelType>       TravelType                     (Parm)
// bool                           bItems                         (Parm)

void APlayerController::ClientTravel(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTravel");

	APlayerController_ClientTravel_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bItems = bItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetViewTarget
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class AActor*                  NewViewTarget                  (Parm)

void APlayerController::SetViewTarget(class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetViewTarget");

	APlayerController_SetViewTarget_Params params;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ResetKeyboard
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)

void APlayerController::ResetKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ResetKeyboard");

	APlayerController_ResetKeyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.GetEntryLevel
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class ALevelInfo*              ReturnValue                    (Parm, OutParm, ReturnParm)

class ALevelInfo* APlayerController::GetEntryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetEntryLevel");

	APlayerController_GetEntryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ConsoleCommand
// (Defined, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerController::ConsoleCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ConsoleCommand");

	APlayerController_ConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetServerNetworkAddress
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerController::GetServerNetworkAddress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetServerNetworkAddress");

	APlayerController_GetServerNetworkAddress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetPlayerNetworkAddress
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerController::GetPlayerNetworkAddress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetPlayerNetworkAddress");

	APlayerController_GetPlayerNetworkAddress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.ClearL2Game
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)

void ALineagePlayerController::ClearL2Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.ClearL2Game");

	ALineagePlayerController_ClearL2Game_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.LostChild
// (Final, Defined, Iterator, Latent, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ALineagePlayerController::LostChild(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.LostChild");

	ALineagePlayerController_LostChild_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.ClientReStart
// (Iterator, Singular, Net, Simulated, Native)

void ALineagePlayerController::ClientReStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.ClientReStart");

	ALineagePlayerController_ClientReStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.ViewPlayer
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native)

void ALineagePlayerController::ViewPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.ViewPlayer");

	ALineagePlayerController_ViewPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.PlayerCalcView
// (Defined, Latent, Singular, Exec, Native)
// Parameters:
// class AActor*                  ViewActor                      (Parm, OutParm)
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)

void ALineagePlayerController::PlayerCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.PlayerCalcView");

	ALineagePlayerController_PlayerCalcView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewActor != nullptr)
		*ViewActor = params.ViewActor;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Engine.LineagePlayerController.CalcBehindView
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)
// float                          dist                           (Parm)

void ALineagePlayerController::CalcBehindView(float dist, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcBehindView");

	ALineagePlayerController_CalcBehindView_Params params;
	params.dist = dist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Engine.LineagePlayerController.CalcVolumeCamera
// (Final, Defined, Iterator, Singular, Event)
// Parameters:
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)
// float                          ViewDist                       (Parm)

void ALineagePlayerController::CalcVolumeCamera(float ViewDist, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcVolumeCamera");

	ALineagePlayerController_CalcVolumeCamera_Params params;
	params.ViewDist = ViewDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Engine.LineagePlayerController.CalcCameraWalkingMode
// (Defined, Iterator, Latent, Singular, Event)
// Parameters:
// float                          DeltaTime                      (Parm)

void ALineagePlayerController::CalcCameraWalkingMode(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcCameraWalkingMode");

	ALineagePlayerController_CalcCameraWalkingMode_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.PlayerTick
// (Final, PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void ALineagePlayerController::PlayerTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.PlayerTick");

	ALineagePlayerController_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.CalcVolumeZoomingDistance
// (PreOperator, Singular, Event)
// Parameters:
// float                          DeltaTime                      (Parm)

void ALineagePlayerController::CalcVolumeZoomingDistance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcVolumeZoomingDistance");

	ALineagePlayerController_CalcVolumeZoomingDistance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.IsBlockRotation
// (Final, Latent, PreOperator, Singular, Event)
// Parameters:
// struct FRotator                Rotation                       (Parm)
// struct FVector                 TargetLocation                 (Parm)
// float                          dist                           (Parm)
// int                            VolumeRadius                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALineagePlayerController::IsBlockRotation(const struct FRotator& Rotation, const struct FVector& TargetLocation, float dist, int VolumeRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.IsBlockRotation");

	ALineagePlayerController_IsBlockRotation_Params params;
	params.Rotation = Rotation;
	params.TargetLocation = TargetLocation;
	params.dist = dist;
	params.VolumeRadius = VolumeRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.CalcCameraMovingToDefaultDistance
// (Final, Iterator, Latent, PreOperator, Singular, Event)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALineagePlayerController::CalcCameraMovingToDefaultDistance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcCameraMovingToDefaultDistance");

	ALineagePlayerController_CalcCameraMovingToDefaultDistance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.CalcCameraMovingToDefaultPitch
// (Net, Event)
// Parameters:
// float                          DeltaTime                      (Parm)
// int                            TargetPitch                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALineagePlayerController::CalcCameraMovingToDefaultPitch(float DeltaTime, int TargetPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcCameraMovingToDefaultPitch");

	ALineagePlayerController_CalcCameraMovingToDefaultPitch_Params params;
	params.DeltaTime = DeltaTime;
	params.TargetPitch = TargetPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.CalcCameraMovingToDefaultYaw
// (Iterator, Latent, Net, Event)
// Parameters:
// float                          DeltaTime                      (Parm)
// int                            TargetYaw                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALineagePlayerController::CalcCameraMovingToDefaultYaw(float DeltaTime, int TargetYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.CalcCameraMovingToDefaultYaw");

	ALineagePlayerController_CalcCameraMovingToDefaultYaw_Params params;
	params.DeltaTime = DeltaTime;
	params.TargetYaw = TargetYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.UpdateRotation
// (Final, Iterator, Singular, Net, Simulated, Native)
// Parameters:
// float                          DeltaTime                      (Parm)
// float                          maxPitch                       (Parm)

void ALineagePlayerController::UpdateRotation(float DeltaTime, float maxPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.UpdateRotation");

	ALineagePlayerController_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.maxPitch = maxPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.ViewFix
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event)

void ALineagePlayerController::ViewFix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.ViewFix");

	ALineagePlayerController_ViewFix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.SetHitCheckCameraMinDist
// (Final, Iterator, Simulated, Exec, Native, Event)
// Parameters:
// int                            Delta                          (Parm)

void ALineagePlayerController::SetHitCheckCameraMinDist(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.SetHitCheckCameraMinDist");

	ALineagePlayerController_SetHitCheckCameraMinDist_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.UseHitCheckCameraOff
// (Final, Defined, Iterator, Simulated, Exec, Native, Event)

void ALineagePlayerController::UseHitCheckCameraOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.UseHitCheckCameraOff");

	ALineagePlayerController_UseHitCheckCameraOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.UseHitCheckCameraOn
// (Final, Latent, Simulated, Exec, Native, Event)

void ALineagePlayerController::UseHitCheckCameraOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.UseHitCheckCameraOn");

	ALineagePlayerController_UseHitCheckCameraOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.SetFlyYaw
// (Defined, Iterator, Latent, Simulated, Exec, Native, Event)
// Parameters:
// int                            Value                          (Parm)

void ALineagePlayerController::SetFlyYaw(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.SetFlyYaw");

	ALineagePlayerController_SetFlyYaw_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.ShowPlayerPawn
// (PreOperator, Simulated, Exec, Native, Event)

void ALineagePlayerController::ShowPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.ShowPlayerPawn");

	ALineagePlayerController_ShowPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.HidePlayerPawn
// (Defined, PreOperator, Simulated, Exec, Native, Event)

void ALineagePlayerController::HidePlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.HidePlayerPawn");

	ALineagePlayerController_HidePlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineagePlayerController.GetWaitSeqName
// (Final, Defined, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ALineagePlayerController::GetWaitSeqName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.GetWaitSeqName");

	ALineagePlayerController_GetWaitSeqName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.GetMoveSeqName
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ALineagePlayerController::GetMoveSeqName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.GetMoveSeqName");

	ALineagePlayerController_GetMoveSeqName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LineagePlayerController.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ALineagePlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineagePlayerController.PostBeginPlay");

	ALineagePlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CarriedObject.Position
// (Final, Iterator, PreOperator, Simulated, Event)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ACarriedObject::Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CarriedObject.Position");

	ACarriedObject_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AvoidMarker.StartleBots
// (Defined, Net, NetReliable, Exec, Native, Event)

void AAvoidMarker::StartleBots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AvoidMarker.StartleBots");

	AAvoidMarker_StartleBots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AvoidMarker.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AAvoidMarker::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AvoidMarker.Touch");

	AAvoidMarker_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.NavigationPoint.MoverClosed
// (Final, Defined, PreOperator, Simulated, Exec, Native)

void ANavigationPoint::MoverClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.MoverClosed");

	ANavigationPoint_MoverClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.NavigationPoint.MoverOpened
// (PreOperator, Simulated, Exec, Native)

void ANavigationPoint::MoverOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.MoverOpened");

	ANavigationPoint_MoverOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.NavigationPoint.ProceedWithMove
// (Final, Iterator, Latent, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ANavigationPoint::ProceedWithMove(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.ProceedWithMove");

	ANavigationPoint_ProceedWithMove_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.NavigationPoint.SuggestMovePreparation
// (Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ANavigationPoint::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.SuggestMovePreparation");

	ANavigationPoint_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.NavigationPoint.DetourWeight
// (Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          PathWeight                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ANavigationPoint::DetourWeight(class APawn* Other, float PathWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.DetourWeight");

	ANavigationPoint_DetourWeight_Params params;
	params.Other = Other;
	params.PathWeight = PathWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.NavigationPoint.Accept
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  Incoming                       (Parm)
// class AActor*                  Source                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ANavigationPoint::Accept(class AActor* Incoming, class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.Accept");

	ANavigationPoint_Accept_Params params;
	params.Incoming = Incoming;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.NavigationPoint.SpecialCost
// (Final, Latent, Net, Event)
// Parameters:
// class APawn*                   Seeker                         (Parm)
// class UReachSpec*              Path                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ANavigationPoint::SpecialCost(class APawn* Seeker, class UReachSpec* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.SpecialCost");

	ANavigationPoint_SpecialCost_Params params;
	params.Seeker = Seeker;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.NavigationPoint.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ANavigationPoint::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NavigationPoint.PostBeginPlay");

	ANavigationPoint_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.JumpDest.SuggestMovePreparation
// (Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AJumpDest::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpDest.SuggestMovePreparation");

	AJumpDest_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.JumpDest.DoJump
// (Final, Defined, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AJumpDest::DoJump(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpDest.DoJump");

	AJumpDest_DoJump_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.JumpDest.SpecialCost
// (Final, Latent, Net, Event)
// Parameters:
// class APawn*                   Other                          (Parm)
// class UReachSpec*              Path                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AJumpDest::SpecialCost(class APawn* Other, class UReachSpec* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpDest.SpecialCost");

	AJumpDest_SpecialCost_Params params;
	params.Other = Other;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.JumpDest.GetPathIndex
// (Final, Iterator, PreOperator, Simulated, Exec, Native)
// Parameters:
// class UReachSpec*              Path                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AJumpDest::GetPathIndex(class UReachSpec* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpDest.GetPathIndex");

	AJumpDest_GetPathIndex_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.JumpPad.PostTouch
// (Final, Defined, Latent, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AJumpPad::PostTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpPad.PostTouch");

	AJumpPad_PostTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.JumpPad.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AJumpPad::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpPad.Touch");

	AJumpPad_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.JumpPad.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AJumpPad::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.JumpPad.PostBeginPlay");

	AJumpPad_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.GetRespawnTime
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APickup::GetRespawnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.GetRespawnTime");

	APickup_GetRespawnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.Landed
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)

void APickup::Landed(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.Landed");

	APickup_Landed_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.ReadyToPickup
// (Singular, Exec, Native)
// Parameters:
// float                          MaxWait                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APickup::ReadyToPickup(float MaxWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.ReadyToPickup");

	APickup_ReadyToPickup_Params params;
	params.MaxWait = MaxWait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.InitDroppedPickupFor
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class AInventory*              Inv                            (Parm)

void APickup::InitDroppedPickupFor(class AInventory* Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.InitDroppedPickupFor");

	APickup_InitDroppedPickupFor_Params params;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.GetLocalString
// (Final, Defined, Iterator, Latent, Net, Exec, Native)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APickup::GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.GetLocalString");

	APickup_GetLocalString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.SetRespawn
// (Final, PreOperator, Singular, Simulated, Exec, Native)

void APickup::SetRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.SetRespawn");

	APickup_SetRespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.AnnouncePickup
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Native)
// Parameters:
// class APawn*                   Receiver                       (Parm)

void APickup::AnnouncePickup(class APawn* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.AnnouncePickup");

	APickup_AnnouncePickup_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.StartSleeping
// (Iterator, PreOperator, Singular, Exec, Native)

void APickup::StartSleeping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.StartSleeping");

	APickup_StartSleeping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.SpawnCopy
// (Defined, Iterator, Latent, Singular, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AInventory*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AInventory* APickup::SpawnCopy(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.SpawnCopy");

	APickup_SpawnCopy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.BotDesireability
// (Final, Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Bot                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APickup::BotDesireability(class APawn* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.BotDesireability");

	APickup_BotDesireability_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.DetourWeight
// (Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          PathWeight                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APickup::DetourWeight(class APawn* Other, float PathWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.DetourWeight");

	APickup_DetourWeight_Params params;
	params.Other = Other;
	params.PathWeight = PathWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.Transmogrify
// (Final, Defined, Net, Exec, Native, Event)
// Parameters:
// class UClass*                  NewClass                       (Parm)
// class APickup*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class APickup* APickup::Transmogrify(class UClass* NewClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.Transmogrify");

	APickup_Transmogrify_Params params;
	params.NewClass = NewClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Pickup.RespawnEffect
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native)

void APickup::RespawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.RespawnEffect");

	APickup_RespawnEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.Reset
// (Defined, Singular, Simulated, Native)

void APickup::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.Reset");

	APickup_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void APickup::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.Destroyed");

	APickup_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.StaticPrecache
// (Final, Iterator, Net, Exec, Native, Event)
// Parameters:
// class ALevelInfo*              L                              (Parm)

void APickup::StaticPrecache(class ALevelInfo* L)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.StaticPrecache");

	APickup_StaticPrecache_Params params;
	params.L = L;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.RemoveFromNavigation
// (Defined, Iterator, Latent, Net, Exec, Native, Event)

void APickup::RemoveFromNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.RemoveFromNavigation");

	APickup_RemoveFromNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Pickup.AddToNavigation
// (Final, Iterator, PreOperator, Net, Exec, Native, Event)

void APickup::AddToNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Pickup.AddToNavigation");

	APickup_AddToNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AStationaryWeapons::TakeDamage(int Damage, class APawn* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.TakeDamage");

	AStationaryWeapons_TakeDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.ReduceDamage
// (Iterator, Latent, Simulated, Exec, Native)
// Parameters:
// int                            Damage                         (Parm)
// class UClass*                  DamageType                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AStationaryWeapons::ReduceDamage(int Damage, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.ReduceDamage");

	AStationaryWeapons_ReduceDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StationaryWeapons.Explode
// (Final, Defined, Singular, Exec, Native)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AStationaryWeapons::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.Explode");

	AStationaryWeapons_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.DeActivate
// (Final, Defined, Iterator, Singular, Exec, Native, Event)

void AStationaryWeapons::DeActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.DeActivate");

	AStationaryWeapons_DeActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.Activate
// (Final, Defined, Latent, NetReliable, Simulated, Native)

void AStationaryWeapons::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.Activate");

	AStationaryWeapons_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.Deactivated
// (Final, Singular, Event)

void AStationaryWeapons::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.Deactivated");

	AStationaryWeapons_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.Activated
// (Final, Defined, Latent, Net, Exec, Native)

void AStationaryWeapons::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.Activated");

	AStationaryWeapons_Activated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.SetTeam
// (Final, Singular, Net, Simulated, Exec, Native)
// Parameters:
// int                            NewTeamIndex                   (Parm)

void AStationaryWeapons::SetTeam(int NewTeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.SetTeam");

	AStationaryWeapons_SetTeam_Params params;
	params.NewTeamIndex = NewTeamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StationaryWeapons.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AStationaryWeapons::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StationaryWeapons.PostBeginPlay");

	AStationaryWeapons_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InventoryAttachment.InitFor
// (PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// class AInventory*              i                              (Parm)

void AInventoryAttachment::InitFor(class AInventory* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InventoryAttachment.InitFor");

	AInventoryAttachment_InitFor_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WeaponAttachment.ThirdPersonEffects
// (Final, Net, Event)

void AWeaponAttachment::ThirdPersonEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponAttachment.ThirdPersonEffects");

	AWeaponAttachment_ThirdPersonEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TeamInfo.RemoveFromTeam
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Other                          (Parm)

void ATeamInfo::RemoveFromTeam(class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TeamInfo.RemoveFromTeam");

	ATeamInfo_RemoveFromTeam_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TeamInfo.AddToTeam
// (Final, Defined, Iterator, Latent, PreOperator, Net, Native, Event)
// Parameters:
// class AController*             Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATeamInfo::AddToTeam(class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TeamInfo.AddToTeam");

	ATeamInfo_AddToTeam_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.TeamInfo.GetHumanReadableName
// (Defined, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ATeamInfo::GetHumanReadableName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TeamInfo.GetHumanReadableName");

	ATeamInfo_GetHumanReadableName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.TeamInfo.UpdatePrecacheMaterials
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native)

void ATeamInfo::UpdatePrecacheMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TeamInfo.UpdatePrecacheMaterials");

	ATeamInfo_UpdatePrecacheMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.TeamInfo.BelongsOnTeam
// (Final, Iterator, Latent, PreOperator, Net, Native, Event)
// Parameters:
// class UClass*                  PawnClass                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATeamInfo::BelongsOnTeam(class UClass* PawnClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.TeamInfo.BelongsOnTeam");

	ATeamInfo_BelongsOnTeam_Params params;
	params.PawnClass = PawnClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Door.SuggestMovePreparation
// (Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADoor::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Door.SuggestMovePreparation");

	ADoor_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Door.ProceedWithMove
// (Final, Iterator, Latent, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADoor::ProceedWithMove(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Door.ProceedWithMove");

	ADoor_ProceedWithMove_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Door.SpecialHandling
// (Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ADoor::SpecialHandling(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Door.SpecialHandling");

	ADoor_SpecialHandling_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Door.MoverClosed
// (Final, Defined, PreOperator, Simulated, Exec, Native)

void ADoor::MoverClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Door.MoverClosed");

	ADoor_MoverClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Door.MoverOpened
// (PreOperator, Simulated, Exec, Native)

void ADoor::MoverOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Door.MoverOpened");

	ADoor_MoverOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Door.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ADoor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Door.PostBeginPlay");

	ADoor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Ladder.SuggestMovePreparation
// (Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALadder::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ladder.SuggestMovePreparation");

	ALadder_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PotentialClimbWatcher.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void APotentialClimbWatcher::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PotentialClimbWatcher.Tick");

	APotentialClimbWatcher_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.GetHitEffectName
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FName                   A                              (Parm, OutParm)
// struct FName                   B                              (Parm, OutParm)

void APhysicsVolume::GetHitEffectName(struct FName* A, struct FName* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.GetHitEffectName");

	APhysicsVolume_GetHitEffectName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
}


// Function Engine.PhysicsVolume.CausePainTo
// (Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::CausePainTo(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.CausePainTo");

	APhysicsVolume_CausePainTo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.PlayExitSplash
// (PreOperator, Event)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::PlayExitSplash(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.PlayExitSplash");

	APhysicsVolume_PlayExitSplash_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.UnTouch
// (Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.UnTouch");

	APhysicsVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.PlayEntrySplash
// (Final, PreOperator, Event)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::PlayEntrySplash(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.PlayEntrySplash");

	APhysicsVolume_PlayEntrySplash_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.Touch");

	APhysicsVolume_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void APhysicsVolume::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.Trigger");

	APhysicsVolume_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.TimerPop
// (Iterator, PreOperator, Event)
// Parameters:
// class AVolumeTimer*            t                              (Parm)

void APhysicsVolume::TimerPop(class AVolumeTimer* t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.TimerPop");

	APhysicsVolume_TimerPop_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.PawnLeavingVolume
// (Final, Defined, Iterator, Latent, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)

void APhysicsVolume::PawnLeavingVolume(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.PawnLeavingVolume");

	APhysicsVolume_PawnLeavingVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.PawnEnteredVolume
// (Iterator, Latent, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)

void APhysicsVolume::PawnEnteredVolume(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.PawnEnteredVolume");

	APhysicsVolume_PawnEnteredVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.ActorLeavingVolume
// (Final, Latent, Singular, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::ActorLeavingVolume(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.ActorLeavingVolume");

	APhysicsVolume_ActorLeavingVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.ActorEnteredVolume
// (Latent, Singular, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::ActorEnteredVolume(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.ActorEnteredVolume");

	APhysicsVolume_ActorEnteredVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.PhysicsChangedFor
// (Final, Defined, Iterator, Singular, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void APhysicsVolume::PhysicsChangedFor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.PhysicsChangedFor");

	APhysicsVolume_PhysicsChangedFor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PhysicsVolume.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void APhysicsVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PhysicsVolume.PostBeginPlay");

	APhysicsVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LadderVolume.PhysicsChangedFor
// (Final, Defined, Iterator, Singular, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ALadderVolume::PhysicsChangedFor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LadderVolume.PhysicsChangedFor");

	ALadderVolume_PhysicsChangedFor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LadderVolume.PawnLeavingVolume
// (Final, Defined, Iterator, Latent, Net, Simulated)
// Parameters:
// class APawn*                   P                              (Parm)

void ALadderVolume::PawnLeavingVolume(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LadderVolume.PawnLeavingVolume");

	ALadderVolume_PawnLeavingVolume_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LadderVolume.PawnEnteredVolume
// (Iterator, Latent, Net, Simulated)
// Parameters:
// class APawn*                   P                              (Parm)

void ALadderVolume::PawnEnteredVolume(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LadderVolume.PawnEnteredVolume");

	ALadderVolume_PawnEnteredVolume_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LadderVolume.InUse
// (Final, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class APawn*                   Ignored                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALadderVolume::InUse(class APawn* Ignored)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LadderVolume.InUse");

	ALadderVolume_InUse_Params params;
	params.Ignored = Ignored;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LadderVolume.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ALadderVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LadderVolume.PostBeginPlay");

	ALadderVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DefaultPhysicsVolume.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void ADefaultPhysicsVolume::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DefaultPhysicsVolume.Destroyed");

	ADefaultPhysicsVolume_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineOfSightTrigger.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void ALineOfSightTrigger::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineOfSightTrigger.Trigger");

	ALineOfSightTrigger_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineOfSightTrigger.PlayerSeesMe
// (Final, Defined, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APlayerController*       P                              (Parm)

void ALineOfSightTrigger::PlayerSeesMe(class APlayerController* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineOfSightTrigger.PlayerSeesMe");

	ALineOfSightTrigger_PlayerSeesMe_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LineOfSightTrigger.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ALineOfSightTrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LineOfSightTrigger.PostBeginPlay");

	ALineOfSightTrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIScript.TakeOver
// (Final, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// class APawn*                   P                              (Parm)

void AAIScript::TakeOver(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIScript.TakeOver");

	AAIScript_TakeOver_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIScript.GetMoveTarget
// (Defined, Iterator, Singular, Net, Event)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AAIScript::GetMoveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIScript.GetMoveTarget");

	AAIScript_GetMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIScript.SpawnControllerFor
// (Final, Defined, Iterator, Singular, Net, Event)
// Parameters:
// class APawn*                   P                              (Parm)

void AAIScript::SpawnControllerFor(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIScript.SpawnControllerFor");

	AAIScript_SpawnControllerFor_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DamageType.GetWeaponClass
// (Iterator, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADamageType::GetWeaponClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.GetWeaponClass");

	ADamageType_GetWeaponClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.IsOfType
// (Final, Iterator, Exec, Native, Event)
// Parameters:
// int                            Description                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADamageType::IsOfType(int Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.IsOfType");

	ADamageType_IsOfType_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.GetPawnDamageSound
// (Final, Defined, Latent, Net, Simulated, Exec, Native)
// Parameters:
// class USound*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class USound* ADamageType::GetPawnDamageSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.GetPawnDamageSound");

	ADamageType_GetPawnDamageSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.GetPawnDamageEmitter
// (Defined, Latent, Net, Simulated, Exec, Native)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// float                          Damage                         (Parm)
// struct FVector                 Momentum                       (Parm)
// class APawn*                   Victim                         (Parm)
// bool                           bLowDetail                     (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADamageType::GetPawnDamageEmitter(const struct FVector& HitLocation, float Damage, const struct FVector& Momentum, class APawn* Victim, bool bLowDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.GetPawnDamageEmitter");

	ADamageType_GetPawnDamageEmitter_Params params;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.Momentum = Momentum;
	params.Victim = Victim;
	params.bLowDetail = bLowDetail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.GetPawnDamageEffect
// (Final, Latent, Net, Simulated, Exec, Native)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// float                          Damage                         (Parm)
// struct FVector                 Momentum                       (Parm)
// class APawn*                   Victim                         (Parm)
// bool                           bLowDetail                     (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ADamageType::GetPawnDamageEffect(const struct FVector& HitLocation, float Damage, const struct FVector& Momentum, class APawn* Victim, bool bLowDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.GetPawnDamageEffect");

	ADamageType_GetPawnDamageEffect_Params params;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.Momentum = Momentum;
	params.Victim = Victim;
	params.bLowDetail = bLowDetail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.SuicideMessage
// (Final, Latent, Exec, Native, Event)
// Parameters:
// class APlayerReplicationInfo*  Victim                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADamageType::SuicideMessage(class APlayerReplicationInfo* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.SuicideMessage");

	ADamageType_SuicideMessage_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.DeathMessage
// (Defined, Latent, Net, Simulated, Native, Event)
// Parameters:
// class APlayerReplicationInfo*  Killer                         (Parm)
// class APlayerReplicationInfo*  Victim                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADamageType::DeathMessage(class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.DeathMessage");

	ADamageType_DeathMessage_Params params;
	params.Killer = Killer;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DamageType.IncrementKills
// (Final, Defined, Latent, Exec, Native, Event)
// Parameters:
// class AController*             Killer                         (Parm)

void ADamageType::IncrementKills(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DamageType.IncrementKills");

	ADamageType_IncrementKills_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AVehicleServerPart::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.PostBeginPlay");

	AVehicleServerPart_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.PostSetPawnResource
// (Latent, Singular, Net, NetReliable, Simulated, Native)

void AVehicleServerPart::PostSetPawnResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.PostSetPawnResource");

	AVehicleServerPart_PostSetPawnResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnTurning
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehicleServerPart::OnTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnTurning");

	AVehicleServerPart_OnTurning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnMoveDown
// (Final, Defined, NetReliable, Exec, Native)

void AVehicleServerPart::OnMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnMoveDown");

	AVehicleServerPart_OnMoveDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnMoveUp
// (Final, NetReliable, Exec, Native)

void AVehicleServerPart::OnMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnMoveUp");

	AVehicleServerPart_OnMoveUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnBoost
// (Defined, Iterator, NetReliable, Exec, Native)

void AVehicleServerPart::OnBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnBoost");

	AVehicleServerPart_OnBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnStop
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehicleServerPart::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnStop");

	AVehicleServerPart_OnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnStart
// (NetReliable, Exec, Native)

void AVehicleServerPart::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnStart");

	AVehicleServerPart_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnDriverOut
// (Iterator, NetReliable, Exec, Native)

void AVehicleServerPart::OnDriverOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnDriverOut");

	AVehicleServerPart_OnDriverOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleServerPart.OnDriverIn
// (Final, Iterator, NetReliable, Exec, Native)
// Parameters:
// int                            a_DriverID                     (Parm)

void AVehicleServerPart::OnDriverIn(int a_DriverID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleServerPart.OnDriverIn");

	AVehicleServerPart_OnDriverIn_Params params;
	params.a_DriverID = a_DriverID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AVehicleMeshPart::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.Destroyed");

	AVehicleMeshPart_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AVehicleMeshPart::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.PostBeginPlay");

	AVehicleMeshPart_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.PostSetPawnResource
// (Latent, Singular, Net, NetReliable, Simulated, Native)

void AVehicleMeshPart::PostSetPawnResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.PostSetPawnResource");

	AVehicleMeshPart_PostSetPawnResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnTurning
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehicleMeshPart::OnTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnTurning");

	AVehicleMeshPart_OnTurning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnMoveDown
// (Final, Defined, NetReliable, Exec, Native)

void AVehicleMeshPart::OnMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnMoveDown");

	AVehicleMeshPart_OnMoveDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnMoveUp
// (Final, NetReliable, Exec, Native)

void AVehicleMeshPart::OnMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnMoveUp");

	AVehicleMeshPart_OnMoveUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnBoost
// (Defined, Iterator, NetReliable, Exec, Native)

void AVehicleMeshPart::OnBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnBoost");

	AVehicleMeshPart_OnBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnStop
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehicleMeshPart::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnStop");

	AVehicleMeshPart_OnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnStart
// (NetReliable, Exec, Native)

void AVehicleMeshPart::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnStart");

	AVehicleMeshPart_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnDriverOut
// (Iterator, NetReliable, Exec, Native)

void AVehicleMeshPart::OnDriverOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnDriverOut");

	AVehicleMeshPart_OnDriverOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehicleMeshPart.OnDriverIn
// (Final, Iterator, NetReliable, Exec, Native)
// Parameters:
// int                            a_DriverID                     (Parm)

void AVehicleMeshPart::OnDriverIn(int a_DriverID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehicleMeshPart.OnDriverIn");

	AVehicleMeshPart_OnDriverIn_Params params;
	params.a_DriverID = a_DriverID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AVehiclePart::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.PostBeginPlay");

	AVehiclePart_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.PostSetPawnResource
// (Latent, Singular, Net, NetReliable, Simulated, Native)

void AVehiclePart::PostSetPawnResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.PostSetPawnResource");

	AVehiclePart_PostSetPawnResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnTurning
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehiclePart::OnTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnTurning");

	AVehiclePart_OnTurning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnMoveDown
// (Final, Defined, NetReliable, Exec, Native)

void AVehiclePart::OnMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnMoveDown");

	AVehiclePart_OnMoveDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnMoveUp
// (Final, NetReliable, Exec, Native)

void AVehiclePart::OnMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnMoveUp");

	AVehiclePart_OnMoveUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnBoost
// (Defined, Iterator, NetReliable, Exec, Native)

void AVehiclePart::OnBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnBoost");

	AVehiclePart_OnBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnStop
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native)

void AVehiclePart::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnStop");

	AVehiclePart_OnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnStart
// (NetReliable, Exec, Native)

void AVehiclePart::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnStart");

	AVehiclePart_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnDriverOut
// (Iterator, NetReliable, Exec, Native)

void AVehiclePart::OnDriverOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnDriverOut");

	AVehiclePart_OnDriverOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VehiclePart.OnDriverIn
// (Final, Iterator, NetReliable, Exec, Native)
// Parameters:
// int                            a_DriverID                     (Parm)

void AVehiclePart::OnDriverIn(int a_DriverID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VehiclePart.OnDriverIn");

	AVehiclePart_OnDriverIn_Params params;
	params.a_DriverID = a_DriverID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mutator.ParseChatPercVar
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class AController*             Who                            (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AMutator::ParseChatPercVar(class AController* Who, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.ParseChatPercVar");

	AMutator_ParseChatPercVar_Params params;
	params.Who = Who;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.GetServerPlayers
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// struct FServerResponseLine     ServerState                    (Parm, OutParm, NeedCtorLink)

void AMutator::GetServerPlayers(struct FServerResponseLine* ServerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.GetServerPlayers");

	AMutator_GetServerPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerState != nullptr)
		*ServerState = params.ServerState;
}


// Function Engine.Mutator.GetServerDetails
// (Defined, Singular, Net, Exec, Native)
// Parameters:
// struct FServerResponseLine     ServerState                    (Parm, OutParm, NeedCtorLink)

void AMutator::GetServerDetails(struct FServerResponseLine* ServerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.GetServerDetails");

	AMutator_GetServerDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerState != nullptr)
		*ServerState = params.ServerState;
}


// Function Engine.Mutator.PlayerChangedClass
// (Final, Iterator, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// class AController*             aPlayer                        (Parm)

void AMutator::PlayerChangedClass(class AController* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.PlayerChangedClass");

	AMutator_PlayerChangedClass_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mutator.CheckReplacement
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// unsigned char                  bSuperRelevant                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMutator::CheckReplacement(class AActor* Other, unsigned char* bSuperRelevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.CheckReplacement");

	AMutator_CheckReplacement_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuperRelevant != nullptr)
		*bSuperRelevant = params.bSuperRelevant;

	return params.ReturnValue;
}


// Function Engine.Mutator.CheckRelevance
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMutator::CheckRelevance(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.CheckRelevance");

	AMutator_CheckRelevance_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.IsRelevant
// (Final, Defined, Singular, Net, Simulated, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// unsigned char                  bSuperRelevant                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMutator::IsRelevant(class AActor* Other, unsigned char* bSuperRelevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.IsRelevant");

	AMutator_IsRelevant_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuperRelevant != nullptr)
		*bSuperRelevant = params.bSuperRelevant;

	return params.ReturnValue;
}


// Function Engine.Mutator.AlwaysKeep
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMutator::AlwaysKeep(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.AlwaysKeep");

	AMutator_AlwaysKeep_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.ReplaceWith
// (Iterator, Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FString                 aClassName                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMutator::ReplaceWith(class AActor* Other, const struct FString& aClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.ReplaceWith");

	AMutator_ReplaceWith_Params params;
	params.Other = Other;
	params.aClassName = aClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.AddMutator
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class AMutator*                M                              (Parm)

void AMutator::AddMutator(class AMutator* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.AddMutator");

	AMutator_AddMutator_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mutator.MyDefaultWeapon
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, Native)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AMutator::MyDefaultWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.MyDefaultWeapon");

	AMutator_MyDefaultWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.GetInventoryClassOverride
// (Final, Iterator, Latent, Singular, Simulated, Exec, Native)
// Parameters:
// struct FString                 InventoryClassName             (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AMutator::GetInventoryClassOverride(const struct FString& InventoryClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.GetInventoryClassOverride");

	AMutator_GetInventoryClassOverride_Params params;
	params.InventoryClassName = InventoryClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.GetInventoryClass
// (Latent, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 InventoryClassName             (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AMutator::GetInventoryClass(const struct FString& InventoryClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.GetInventoryClass");

	AMutator_GetInventoryClass_Params params;
	params.InventoryClassName = InventoryClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.GetDefaultWeapon
// (Latent, Net, Exec, Native)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AMutator::GetDefaultWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.GetDefaultWeapon");

	AMutator_GetDefaultWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.ModifyPlayer
// (Final, Latent, Singular, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AMutator::ModifyPlayer(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.ModifyPlayer");

	AMutator_ModifyPlayer_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mutator.ModifyLogin
// (Defined, Latent, Net, Exec, Native)
// Parameters:
// struct FString                 Portal                         (Parm, OutParm, NeedCtorLink)
// struct FString                 Options                        (Parm, OutParm, NeedCtorLink)

void AMutator::ModifyLogin(struct FString* Portal, struct FString* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.ModifyLogin");

	AMutator_ModifyLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Portal != nullptr)
		*Portal = params.Portal;
	if (Options != nullptr)
		*Options = params.Options;
}


// Function Engine.Mutator.Mutate
// (Final, Defined, PreOperator, Net, Exec, Native)
// Parameters:
// struct FString                 MutateString                   (Parm, NeedCtorLink)
// class APlayerController*       Sender                         (Parm)

void AMutator::Mutate(const struct FString& MutateString, class APlayerController* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.Mutate");

	AMutator_Mutate_Params params;
	params.MutateString = MutateString;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mutator.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AMutator::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.Destroyed");

	AMutator_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Mutator.MutatorIsAllowed
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMutator::MutatorIsAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.MutatorIsAllowed");

	AMutator_MutatorIsAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Mutator.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AMutator::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Mutator.PreBeginPlay");

	AMutator_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.Startle
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AActor*                  A                              (Parm)

void AAIController::Startle(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.Startle");

	AAIController_Startle_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.PriorityObjective
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAIController::PriorityObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.PriorityObjective");

	AAIController_PriorityObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.UnderLift
// (Final, Defined, Latent, Simulated, Exec, Native)
// Parameters:
// class AMover*                  M                              (Parm)

void AAIController::UnderLift(class AMover* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.UnderLift");

	AAIController_UnderLift_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.MoverFinished
// (Defined, Latent, Simulated, Exec, Native)

void AAIController::MoverFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.MoverFinished");

	AAIController_MoverFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.WaitForMover
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// class AMover*                  M                              (Parm)

void AAIController::WaitForMover(class AMover* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.WaitForMover");

	AAIController_WaitForMover_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.PrepareForMove
// (Defined, Latent, Singular, Net, Simulated)
// Parameters:
// class ANavigationPoint*        Goal                           (Parm)
// class UReachSpec*              Path                           (Parm)

void AAIController::PrepareForMove(class ANavigationPoint* Goal, class UReachSpec* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.PrepareForMove");

	AAIController_PrepareForMove_Params params;
	params.Goal = Goal;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.GetOrders
// (Defined, Latent, Net, NetReliable, Exec, Native, Event)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AAIController::GetOrders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.GetOrders");

	AAIController_GetOrders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.GetOrderObject
// (Final, Defined, Latent, Net, NetReliable, Exec, Native, Event)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AAIController::GetOrderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.GetOrderObject");

	AAIController_GetOrderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.SetOrders
// (Iterator, Latent, Net, NetReliable, Exec, Native, Event)
// Parameters:
// struct FName                   NewOrders                      (Parm)
// class AController*             OrderGiver                     (Parm)

void AAIController::SetOrders(const struct FName& NewOrders, class AController* OrderGiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.SetOrders");

	AAIController_SetOrders_Params params;
	params.NewOrders = NewOrders;
	params.OrderGiver = OrderGiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.AdjustView
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Native)
// Parameters:
// float                          DeltaTime                      (Parm)

void AAIController::AdjustView(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.AdjustView");

	AAIController_AdjustView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.GetFacingDirection
// (Final, Defined, Simulated, Exec, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AAIController::GetFacingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.GetFacingDirection");

	AAIController_GetFacingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.AdjustDesireFor
// (Latent, NetReliable, Exec, Native)
// Parameters:
// class APickup*                 P                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AAIController::AdjustDesireFor(class APickup* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.AdjustDesireFor");

	AAIController_AdjustDesireFor_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void AAIController::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.DisplayDebug");

	AAIController_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.AIController.TriggerScript
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAIController::TriggerScript(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.TriggerScript");

	AAIController_TriggerScript_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.WeaponFireAgain
// (Final, Defined, Latent, Event)
// Parameters:
// float                          RefireRate                     (Parm)
// bool                           bFinishedFire                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAIController::WeaponFireAgain(float RefireRate, bool bFinishedFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.WeaponFireAgain");

	AAIController_WeaponFireAgain_Params params;
	params.RefireRate = RefireRate;
	params.bFinishedFire = bFinishedFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AIController.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AAIController::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.Trigger");

	AAIController_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.Reset
// (Defined, Singular, Simulated, Native)

void AAIController::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.Reset");

	AAIController_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AAIController::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.PreBeginPlay");

	AAIController_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.GetSlaveDestination
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   P                              (Parm)

void AAIController::GetSlaveDestination(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.GetSlaveDestination");

	AAIController_GetSlaveDestination_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.GetDestination
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   P                              (Parm)

void AAIController::GetDestination(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.GetDestination");

	AAIController_GetDestination_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.OwnerPossess
// (Latent, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   aPawn                          (Parm)

void AAIController::OwnerPossess(class APawn* aPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.OwnerPossess");

	AAIController_OwnerPossess_Params params;
	params.aPawn = aPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AIController.WaitToSeeEnemy
// (Defined, PreOperator, Net, NetReliable, Exec, Native, Event)

void AAIController::WaitToSeeEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AIController.WaitToSeeEnemy");

	AAIController_WaitToSeeEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.StaticItemName
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AInventory::StaticItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.StaticItemName");

	AInventory_StaticItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.SetOwnerDisplay
// (Defined, Iterator, PreOperator, Singular, Exec, Native)

void AInventory::SetOwnerDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.SetOwnerDisplay");

	AInventory_SetOwnerDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.OwnerEvent
// (Final, Latent, PreOperator, Exec, Native)
// Parameters:
// struct FName                   EventName                      (Parm)

void AInventory::OwnerEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.OwnerEvent");

	AInventory_OwnerEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.NextWeapon
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class AWeapon*                 CurrentChoice                  (Parm)
// class AWeapon*                 CurrentWeapon                  (Parm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AInventory::NextWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.NextWeapon");

	AInventory_NextWeapon_Params params;
	params.CurrentChoice = CurrentChoice;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.PrevWeapon
// (Final, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class AWeapon*                 CurrentChoice                  (Parm)
// class AWeapon*                 CurrentWeapon                  (Parm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AInventory::PrevWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.PrevWeapon");

	AInventory_PrevWeapon_Params params;
	params.CurrentChoice = CurrentChoice;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.WeaponChange
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// unsigned char                  f                              (Parm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AInventory::WeaponChange(unsigned char f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.WeaponChange");

	AInventory_WeaponChange_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.Use
// (Event)
// Parameters:
// float                          Value                          (Parm)

void AInventory::Use(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.Use");

	AInventory_Use_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.DropFrom
// (Final, Iterator, PreOperator, Singular, Exec, Native)
// Parameters:
// struct FVector                 StartLocation                  (Parm)

void AInventory::DropFrom(const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.DropFrom");

	AInventory_DropFrom_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.SelectNext
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class APowerups*               ReturnValue                    (Parm, OutParm, ReturnParm)

class APowerups* AInventory::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.SelectNext");

	AInventory_SelectNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.HandlePickupQuery
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class APickup*                 item                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInventory::HandlePickupQuery(class APickup* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.HandlePickupQuery");

	AInventory_HandlePickupQuery_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.GiveTo
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AInventory::GiveTo(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.GiveTo");

	AInventory_GiveTo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AInventory::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.Destroyed");

	AInventory_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.TravelPostAccept
// (Defined, Iterator, Singular, Net, Exec, Native)

void AInventory::TravelPostAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.TravelPostAccept");

	AInventory_TravelPostAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.TravelPreAccept
// (Latent, Net, NetReliable, Exec, Native)

void AInventory::TravelPreAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.TravelPreAccept");

	AInventory_TravelPreAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.RecommendWeapon
// (Defined, Singular, Exec, Native)
// Parameters:
// float                          rating                         (Parm, OutParm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AInventory::RecommendWeapon(float* rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.RecommendWeapon");

	AInventory_RecommendWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rating != nullptr)
		*rating = params.rating;

	return params.ReturnValue;
}


// Function Engine.Inventory.PickupFunction
// (PreOperator, Singular, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AInventory::PickupFunction(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.PickupFunction");

	AInventory_PickupFunction_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.GetHumanReadableName
// (Defined, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AInventory::GetHumanReadableName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.GetHumanReadableName");

	AInventory_GetHumanReadableName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Inventory.RenderOverlays
// (Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AInventory::RenderOverlays(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.RenderOverlays");

	AInventory_RenderOverlays_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.DetachFromPawn
// (Final, Defined, Net, Simulated, Exec, Native)
// Parameters:
// class APawn*                   P                              (Parm)

void AInventory::DetachFromPawn(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.DetachFromPawn");

	AInventory_DetachFromPawn_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.updaterelative
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// int                            Pitch                          (Parm)
// int                            Yaw                            (Parm)
// int                            Roll                           (Parm)

void AInventory::updaterelative(int Pitch, int Yaw, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.updaterelative");

	AInventory_updaterelative_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Inventory.AttachToPawn
// (Final, Defined, Iterator, Latent, Net, Simulated, Exec, Native)
// Parameters:
// class APawn*                   P                              (Parm)

void AInventory::AttachToPawn(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Inventory.AttachToPawn");

	AInventory_AttachToPawn_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Ammunition.GetDamageRadius
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AAmmunition::GetDamageRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.GetDamageRadius");

	AAmmunition_GetDamageRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Ammunition.AddAmmo
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Native)
// Parameters:
// int                            AmmoToAdd                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAmmunition::AddAmmo(int AmmoToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.AddAmmo");

	AAmmunition_AddAmmo_Params params;
	params.AmmoToAdd = AmmoToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Ammunition.HandlePickupQuery
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class APickup*                 item                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAmmunition::HandlePickupQuery(class APickup* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.HandlePickupQuery");

	AAmmunition_HandlePickupQuery_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Ammunition.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void AAmmunition::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.DisplayDebug");

	AAmmunition_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.Ammunition.ProcessTraceHit
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// class AWeapon*                 W                              (Parm)
// class AActor*                  Other                          (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 Z                              (Parm)

void AAmmunition::ProcessTraceHit(class AWeapon* W, class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.ProcessTraceHit");

	AAmmunition_ProcessTraceHit_Params params;
	params.W = W;
	params.Other = Other;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Ammunition.SpawnProjectile
// (Final, Defined, Latent, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FRotator                Dir                            (Parm)

void AAmmunition::SpawnProjectile(const struct FVector& Start, const struct FRotator& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.SpawnProjectile");

	AAmmunition_SpawnProjectile_Params params;
	params.Start = Start;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Ammunition.WarnTarget
// (Net, Simulated, Exec, Native)
// Parameters:
// class AActor*                  Target                         (Parm)
// class APawn*                   P                              (Parm)
// struct FVector                 FireDir                        (Parm)

void AAmmunition::WarnTarget(class AActor* Target, class APawn* P, const struct FVector& FireDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.WarnTarget");

	AAmmunition_WarnTarget_Params params;
	params.Target = Target;
	params.P = P;
	params.FireDir = FireDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Ammunition.RateSelf
// (Final, Defined, PreOperator, Exec, Native)
// Parameters:
// class APawn*                   shooter                        (Parm)
// struct FName                   RecommendedFiringMode          (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AAmmunition::RateSelf(class APawn* shooter, struct FName* RecommendedFiringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.RateSelf");

	AAmmunition_RateSelf_Params params;
	params.shooter = shooter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecommendedFiringMode != nullptr)
		*RecommendedFiringMode = params.RecommendedFiringMode;

	return params.ReturnValue;
}


// Function Engine.Ammunition.HasAmmo
// (Final, Defined, PreOperator, Singular, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAmmunition::HasAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammunition.HasAmmo");

	AAmmunition_HasAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Powerups.GetLocalString
// (Final, Defined, Iterator, Latent, Net, Exec, Native)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APowerups::GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.GetLocalString");

	APowerups_GetLocalString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Powerups.UsedUp
// (Defined, PreOperator, Net, NetReliable, Simulated, Native, Event)

void APowerups::UsedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.UsedUp");

	APowerups_UsedUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Powerups.FireEffect
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native)

void APowerups::FireEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.FireEffect");

	APowerups_FireEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Powerups.UseCharge
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          Amount                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APowerups::UseCharge(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.UseCharge");

	APowerups_UseCharge_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Powerups.HandlePickupQuery
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class APickup*                 item                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APowerups::HandlePickupQuery(class APickup* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.HandlePickupQuery");

	APowerups_HandlePickupQuery_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Powerups.Activate
// (Final, Defined, Latent, NetReliable, Simulated, Native)

void APowerups::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.Activate");

	APowerups_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Powerups.SelectNext
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class APowerups*               ReturnValue                    (Parm, OutParm, ReturnParm)

class APowerups* APowerups::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.SelectNext");

	APowerups_SelectNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Powerups.PickupFunction
// (PreOperator, Singular, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void APowerups::PickupFunction(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.PickupFunction");

	APowerups_PickupFunction_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Powerups.TravelPreAccept
// (Latent, Net, NetReliable, Exec, Native)

void APowerups::TravelPreAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Powerups.TravelPreAccept");

	APowerups_TravelPreAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Ammo.SpawnCopy
// (Defined, Iterator, Latent, Singular, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AInventory*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AInventory* AAmmo::SpawnCopy(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammo.SpawnCopy");

	AAmmo_SpawnCopy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Ammo.BotDesireability
// (Final, Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Bot                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AAmmo::BotDesireability(class APawn* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammo.BotDesireability");

	AAmmo_BotDesireability_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Ammo.DetourWeight
// (Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          PathWeight                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AAmmo::DetourWeight(class APawn* Other, float PathWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Ammo.DetourWeight");

	AAmmo_DetourWeight_Params params;
	params.Other = Other;
	params.PathWeight = PathWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameReplicationInfo.GetPRIArray
// (Final, Latent, NetReliable, Native, Event)
// Parameters:
// TArray<class APlayerReplicationInfo*> pris                           (Parm, OutParm, NeedCtorLink)

void AGameReplicationInfo::GetPRIArray(TArray<class APlayerReplicationInfo*>* pris)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.GetPRIArray");

	AGameReplicationInfo_GetPRIArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pris != nullptr)
		*pris = params.pris;
}


// Function Engine.GameReplicationInfo.RemovePRI
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  PRI                            (Parm)

void AGameReplicationInfo::RemovePRI(class APlayerReplicationInfo* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.RemovePRI");

	AGameReplicationInfo_RemovePRI_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.AddPRI
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  PRI                            (Parm)

void AGameReplicationInfo::AddPRI(class APlayerReplicationInfo* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.AddPRI");

	AGameReplicationInfo_AddPRI_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AGameReplicationInfo::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.Timer");

	AGameReplicationInfo_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.Reset
// (Defined, Singular, Simulated, Native)

void AGameReplicationInfo::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.Reset");

	AGameReplicationInfo_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AGameReplicationInfo::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.PostBeginPlay");

	AGameReplicationInfo_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.TeamSymbolNotify
// (Defined, Latent, Singular, Net, NetReliable, Exec, Native)

void AGameReplicationInfo::TeamSymbolNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.TeamSymbolNotify");

	AGameReplicationInfo_TeamSymbolNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.PostNetBeginPlay
// (Iterator, Singular, Net, NetReliable, Simulated, Native)

void AGameReplicationInfo::PostNetBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.PostNetBeginPlay");

	AGameReplicationInfo_PostNetBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameReplicationInfo.GetCarriedObjectState
// (Iterator, NetReliable, Native, Event)
// Parameters:
// int                            Team                           (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AGameReplicationInfo::GetCarriedObjectState(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.GetCarriedObjectState");

	AGameReplicationInfo_GetCarriedObjectState_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameReplicationInfo.SetCarriedObjectState
// (Defined, NetReliable, Native, Event)
// Parameters:
// int                            Team                           (Parm)
// struct FName                   NewState                       (Parm)

void AGameReplicationInfo::SetCarriedObjectState(int Team, const struct FName& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameReplicationInfo.SetCarriedObjectState");

	AGameReplicationInfo_SetCarriedObjectState_Params params;
	params.Team = Team;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InternetInfo.GetBeaconText
// (Final, Defined, PreOperator, Net, Event)
// Parameters:
// int                            i                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AInternetInfo::GetBeaconText(int i)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InternetInfo.GetBeaconText");

	AInternetInfo_GetBeaconText_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.InternetInfo.GetBeaconAddress
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// int                            i                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AInternetInfo::GetBeaconAddress(int i)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InternetInfo.GetBeaconAddress");

	AInternetInfo_GetBeaconAddress_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerReplicationInfo.SetWaitingPlayer
// (Final, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// bool                           B                              (Parm)

void APlayerReplicationInfo::SetWaitingPlayer(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.SetWaitingPlayer");

	APlayerReplicationInfo_SetWaitingPlayer_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.SetPlayerName
// (PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void APlayerReplicationInfo::SetPlayerName(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.SetPlayerName");

	APlayerReplicationInfo_SetPlayerName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.Timer
// (Iterator, PreOperator, Singular, Simulated)

void APlayerReplicationInfo::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.Timer");

	APlayerReplicationInfo_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.ClientNameChange
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event)

void APlayerReplicationInfo::ClientNameChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.ClientNameChange");

	APlayerReplicationInfo_ClientNameChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void APlayerReplicationInfo::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.DisplayDebug");

	APlayerReplicationInfo_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.PlayerReplicationInfo.UpdatePlayerLocation
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)

void APlayerReplicationInfo::UpdatePlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.UpdatePlayerLocation");

	APlayerReplicationInfo_UpdatePlayerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.UpdateCharacter
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event)

void APlayerReplicationInfo::UpdateCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.UpdateCharacter");

	APlayerReplicationInfo_UpdateCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.GetPortrait
// (Defined, Latent, Singular, NetReliable, Native, Event)
// Parameters:
// class UMaterial*               ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterial* APlayerReplicationInfo::GetPortrait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.GetPortrait");

	APlayerReplicationInfo_GetPortrait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerReplicationInfo.GetLocationName
// (Final, Latent, Singular, NetReliable, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerReplicationInfo::GetLocationName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.GetLocationName");

	APlayerReplicationInfo_GetLocationName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerReplicationInfo.GetHumanReadableName
// (Defined, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APlayerReplicationInfo::GetHumanReadableName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.GetHumanReadableName");

	APlayerReplicationInfo_GetHumanReadableName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerReplicationInfo.SetFlag
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class ACarriedObject*          NewFlag                        (Parm)

void APlayerReplicationInfo::SetFlag(class ACarriedObject* NewFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.SetFlag");

	APlayerReplicationInfo_SetFlag_Params params;
	params.NewFlag = NewFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.Reset
// (Defined, Singular, Simulated, Native)

void APlayerReplicationInfo::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.Reset");

	APlayerReplicationInfo_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.SetCharacterName
// (Defined, Iterator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void APlayerReplicationInfo::SetCharacterName(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.SetCharacterName");

	APlayerReplicationInfo_SetCharacterName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void APlayerReplicationInfo::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.Destroyed");

	APlayerReplicationInfo_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.PostNetBeginPlay
// (Iterator, Singular, Net, NetReliable, Simulated, Native)

void APlayerReplicationInfo::PostNetBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.PostNetBeginPlay");

	APlayerReplicationInfo_PostNetBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerReplicationInfo.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void APlayerReplicationInfo::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerReplicationInfo.PostBeginPlay");

	APlayerReplicationInfo_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LiftExit.SuggestMovePreparation
// (Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALiftExit::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LiftExit.SuggestMovePreparation");

	ALiftExit_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LiftCenter.ProceedWithMove
// (Final, Iterator, Latent, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALiftCenter::ProceedWithMove(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LiftCenter.ProceedWithMove");

	ALiftCenter_ProceedWithMove_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LiftCenter.SuggestMovePreparation
// (Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALiftCenter::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LiftCenter.SuggestMovePreparation");

	ALiftCenter_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LiftCenter.SpecialHandling
// (Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ALiftCenter::SpecialHandling(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LiftCenter.SpecialHandling");

	ALiftCenter_SpecialHandling_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LiftCenter.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ALiftCenter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LiftCenter.PostBeginPlay");

	ALiftCenter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SavedMove.SetMoveFor
// (Final, Defined, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// class APlayerController*       P                              (Parm)
// float                          DeltaTime                      (Parm)
// struct FVector                 NewAccel                       (Parm)
// TEnumAsByte<EDoubleClickDir>   InDoubleClick                  (Parm)

void ASavedMove::SetMoveFor(class APlayerController* P, float DeltaTime, const struct FVector& NewAccel, TEnumAsByte<EDoubleClickDir> InDoubleClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SavedMove.SetMoveFor");

	ASavedMove_SetMoveFor_Params params;
	params.P = P;
	params.DeltaTime = DeltaTime;
	params.NewAccel = NewAccel;
	params.InDoubleClick = InDoubleClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SavedMove.PostUpdate
// (Defined, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// class APlayerController*       P                              (Parm)

void ASavedMove::PostUpdate(class APlayerController* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SavedMove.PostUpdate");

	ASavedMove_PostUpdate_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SavedMove.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void ASavedMove::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SavedMove.Clear");

	ASavedMove_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DrawTargeting
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native, Event)
// Parameters:
// class UCanvas*                 C                              (Parm)

void AHUD::DrawTargeting(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DrawTargeting");

	AHUD_DrawTargeting_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.LoadProgressFont
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AHUD::LoadProgressFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.LoadProgressFont");

	AHUD_LoadProgressFont_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.LargerFontThan
// (Final, Defined, Simulated, Native, Event)
// Parameters:
// class UFont*                   aFont                          (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AHUD::LargerFontThan(class UFont* aFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.LargerFontThan");

	AHUD_LargerFontThan_Params params;
	params.aFont = aFont;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.GetMediumFontFor
// (Iterator, Simulated, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AHUD::GetMediumFontFor(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.GetMediumFontFor");

	AHUD_GetMediumFontFor_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.GetConsoleFont
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AHUD::GetConsoleFont(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.GetConsoleFont");

	AHUD_GetConsoleFont_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.LoadFont
// (Latent, Simulated, Native, Event)
// Parameters:
// int                            i                              (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AHUD::LoadFont(int i)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.LoadFont");

	AHUD_LoadFont_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.LoadFontStatic
// (Final, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// int                            i                              (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AHUD::LoadFontStatic(int i)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.LoadFontStatic");

	AHUD_LoadFontStatic_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.UseHugeFont
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AHUD::UseHugeFont(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.UseHugeFont");

	AHUD_UseHugeFont_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.UseLargeFont
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AHUD::UseLargeFont(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.UseLargeFont");

	AHUD_UseLargeFont_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.UseMediumFont
// (Defined, Iterator, Latent, Simulated, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AHUD::UseMediumFont(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.UseMediumFont");

	AHUD_UseMediumFont_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.UseSmallFont
// (Final, Defined, Iterator, Latent, Simulated, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AHUD::UseSmallFont(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.UseSmallFont");

	AHUD_UseSmallFont_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.AddTextMessage
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 M                              (Parm, NeedCtorLink)
// class UClass*                  MessageClass                   (Parm)
// class APlayerReplicationInfo*  PRI                            (Parm)

void AHUD::AddTextMessage(const struct FString& M, class UClass* MessageClass, class APlayerReplicationInfo* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.AddTextMessage");

	AHUD_AddTextMessage_Params params;
	params.M = M;
	params.MessageClass = MessageClass;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DisplayMessages
// (Final, Iterator, Latent, Singular, Net, Exec, Native)
// Parameters:
// class UCanvas*                 C                              (Parm)

void AHUD::DisplayMessages(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DisplayMessages");

	AHUD_DisplayMessages_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.ProcessKeyEvent
// (Final, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// int                            Key                            (Parm)
// int                            Action                         (Parm)
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHUD::ProcessKeyEvent(int Key, int Action, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.ProcessKeyEvent");

	AHUD_ProcessKeyEvent_Params params;
	params.Key = Key;
	params.Action = Action;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.PlayReceivedMessage
// (Iterator, PreOperator, Simulated, Native, Event)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// struct FString                 PName                          (Parm, NeedCtorLink)
// class AZoneInfo*               PZone                          (Parm)

void AHUD::PlayReceivedMessage(const struct FString& S, const struct FString& PName, class AZoneInfo* PZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.PlayReceivedMessage");

	AHUD_PlayReceivedMessage_Params params;
	params.S = S;
	params.PName = PName;
	params.PZone = PZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.LocalizedMessage
// (PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UClass*                  Message                        (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 CriticalString                 (OptionalParm, Parm, NeedCtorLink)

void AHUD::LocalizedMessage(class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject, const struct FString& CriticalString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.LocalizedMessage");

	AHUD_LocalizedMessage_Params params;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;
	params.CriticalString = CriticalString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DisplayPortrait
// (Defined, Iterator, PreOperator, Simulated, Native, Event)
// Parameters:
// class APlayerReplicationInfo*  PRI                            (Parm)

void AHUD::DisplayPortrait(class APlayerReplicationInfo* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DisplayPortrait");

	AHUD_DisplayPortrait_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.Message
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// class APlayerReplicationInfo*  PRI                            (Parm)
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// struct FName                   MsgType                        (Parm)

void AHUD::Message(class APlayerReplicationInfo* PRI, const struct FString& Msg, const struct FName& MsgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.Message");

	AHUD_Message_Params params;
	params.PRI = PRI;
	params.Msg = Msg;
	params.MsgType = MsgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DisplayBadConnectionAlert
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native)

void AHUD::DisplayBadConnectionAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DisplayBadConnectionAlert");

	AHUD_DisplayBadConnectionAlert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DrawLevelAction
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class UCanvas*                 C                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHUD::DrawLevelAction(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DrawLevelAction");

	AHUD_DrawLevelAction_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.HUD.DisplayProgressMessage
// (Final, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 C                              (Parm)

void AHUD::DisplayProgressMessage(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DisplayProgressMessage");

	AHUD_DisplayProgressMessage_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.PrintActionMessage
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 C                              (Parm)
// struct FString                 BigMessage                     (Parm, NeedCtorLink)

void AHUD::PrintActionMessage(class UCanvas* C, const struct FString& BigMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.PrintActionMessage");

	AHUD_PrintActionMessage_Params params;
	params.C = C;
	params.BigMessage = BigMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DrawHUD
// (Defined, Latent, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AHUD::DrawHUD(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DrawHUD");

	AHUD_DrawHUD_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DrawRoute
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native)

void AHUD::DrawRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DrawRoute");

	AHUD_DrawRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.DrawSpectatingHud
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 C                              (Parm)

void AHUD::DrawSpectatingHud(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.DrawSpectatingHud");

	AHUD_DrawSpectatingHud_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.PostRender
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AHUD::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.PostRender");

	AHUD_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.CopyMessage
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Native, Event)
// Parameters:
// struct FHUDLocalizedMessage    M1                             (Parm, OutParm, NeedCtorLink)
// struct FHUDLocalizedMessage    M2                             (Parm, NeedCtorLink)

void AHUD::CopyMessage(const struct FHUDLocalizedMessage& M2, struct FHUDLocalizedMessage* M1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.CopyMessage");

	AHUD_CopyMessage_Params params;
	params.M2 = M2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (M1 != nullptr)
		*M1 = params.M1;
}


// Function Engine.HUD.ClearMessage
// (Final, Singular, Simulated, Native, Event)
// Parameters:
// struct FHUDLocalizedMessage    M                              (Parm, OutParm, NeedCtorLink)

void AHUD::ClearMessage(struct FHUDLocalizedMessage* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.ClearMessage");

	AHUD_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (M != nullptr)
		*M = params.M;
}


// Function Engine.HUD.PlayStartupMessage
// (Defined, Singular, Simulated, Native, Event)
// Parameters:
// unsigned char                  Stage                          (Parm)

void AHUD::PlayStartupMessage(unsigned char Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.PlayStartupMessage");

	AHUD_PlayStartupMessage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.ShowUpgradeMenu
// (Latent, Simulated, Exec, Native, Event)

void AHUD::ShowUpgradeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.ShowUpgradeMenu");

	AHUD_ShowUpgradeMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.ConnectFailure
// (Final, Iterator, Net, Simulated, Exec)
// Parameters:
// struct FString                 FailCode                       (Parm, NeedCtorLink)
// struct FString                 URL                            (Parm, NeedCtorLink)

void AHUD::ConnectFailure(const struct FString& FailCode, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.ConnectFailure");

	AHUD_ConnectFailure_Params params;
	params.FailCode = FailCode;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.CheckCountdown
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AGameReplicationInfo*    GRI                            (Parm)

void AHUD::CheckCountdown(class AGameReplicationInfo* GRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.CheckCountdown");

	AHUD_CheckCountdown_Params params;
	params.GRI = GRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.WorldSpaceOverlays
// (Defined, Latent, Singular, Net, NetReliable, Exec, Native, Event)

void AHUD::WorldSpaceOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.WorldSpaceOverlays");

	AHUD_WorldSpaceOverlays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.ShowDebug
// (Iterator, Singular, Simulated, Native, Event)

void AHUD::ShowDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.ShowDebug");

	AHUD_ShowDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.ShowScores
// (Final, Iterator, Singular, Simulated, Native, Event)

void AHUD::ShowScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.ShowScores");

	AHUD_ShowScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AHUD::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.Destroyed");

	AHUD_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.SpawnScoreBoard
// (Iterator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class UClass*                  ScoringType                    (Parm)

void AHUD::SpawnScoreBoard(class UClass* ScoringType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.SpawnScoreBoard");

	AHUD_SpawnScoreBoard_Params params;
	params.ScoringType = ScoringType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.PostBeginPlay");

	AHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.HUD.Draw3DLine
// (Final, Defined, Iterator, Singular, Simulated, Native, Event)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// struct FColor                  LineColor                      (Parm)

void AHUD::Draw3DLine(const struct FVector& Start, const struct FVector& End, const struct FColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HUD.Draw3DLine");

	AHUD_Draw3DLine_Params params;
	params.Start = Start;
	params.End = End;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneMarker.SpecialHandling
// (Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AWarpZoneMarker::SpecialHandling(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneMarker.SpecialHandling");

	AWarpZoneMarker_SpecialHandling_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.WarpZoneMarker.FindTriggerActor
// (Defined, PreOperator, NetReliable, Simulated, Native)

void AWarpZoneMarker::FindTriggerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneMarker.FindTriggerActor");

	AWarpZoneMarker_FindTriggerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneMarker.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AWarpZoneMarker::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneMarker.PostBeginPlay");

	AWarpZoneMarker_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.UnTouch
// (Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ATrigger::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.UnTouch");

	ATrigger_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void ATrigger::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.TakeDamage");

	ATrigger_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.Timer
// (Iterator, PreOperator, Singular, Simulated)

void ATrigger::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.Timer");

	ATrigger_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ATrigger::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.Touch");

	ATrigger_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.IsRelevant
// (Final, Defined, Singular, Net, Simulated, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATrigger::IsRelevant(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.IsRelevant");

	ATrigger_IsRelevant_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Trigger.CheckTouchList
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)

void ATrigger::CheckTouchList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.CheckTouchList");

	ATrigger_CheckTouchList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.SpecialHandling
// (Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ATrigger::SpecialHandling(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.SpecialHandling");

	ATrigger_SpecialHandling_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Trigger.FindTriggerActor
// (Defined, PreOperator, NetReliable, Simulated, Native)

void ATrigger::FindTriggerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.FindTriggerActor");

	ATrigger_FindTriggerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.Reset
// (Defined, Singular, Simulated, Native)

void ATrigger::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.Reset");

	ATrigger_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ATrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.PostBeginPlay");

	ATrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Trigger.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void ATrigger::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Trigger.PreBeginPlay");

	ATrigger_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.InventorySpot.DetourWeight
// (Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          PathWeight                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AInventorySpot::DetourWeight(class APawn* Other, float PathWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InventorySpot.DetourWeight");

	AInventorySpot_DetourWeight_Params params;
	params.Other = Other;
	params.PathWeight = PathWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.InventorySpot.GetMoveTargetFor
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event)
// Parameters:
// class AAIController*           B                              (Parm)
// float                          MaxWait                        (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AInventorySpot::GetMoveTargetFor(class AAIController* B, float MaxWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InventorySpot.GetMoveTargetFor");

	AInventorySpot_GetMoveTargetFor_Params params;
	params.B = B;
	params.MaxWait = MaxWait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Teleporter.SpecialHandling
// (Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Other                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ATeleporter::SpecialHandling(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.SpecialHandling");

	ATeleporter_SpecialHandling_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Teleporter.PostTouch
// (Final, Defined, Latent, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ATeleporter::PostTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.PostTouch");

	ATeleporter_PostTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Teleporter.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ATeleporter::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.Touch");

	ATeleporter_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Teleporter.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void ATeleporter::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.Trigger");

	ATeleporter_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Teleporter.Accept
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  Incoming                       (Parm)
// class AActor*                  Source                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATeleporter::Accept(class AActor* Incoming, class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.Accept");

	ATeleporter_Accept_Params params;
	params.Incoming = Incoming;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Teleporter.FindTriggerActor
// (Defined, PreOperator, NetReliable, Simulated, Native)

void ATeleporter::FindTriggerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.FindTriggerActor");

	ATeleporter_FindTriggerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Teleporter.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ATeleporter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Teleporter.PostBeginPlay");

	ATeleporter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneInfo.ActorLeaving
// (Defined, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AZoneInfo::ActorLeaving(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneInfo.ActorLeaving");

	AZoneInfo_ActorLeaving_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneInfo.ActorEntered
// (Final, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AZoneInfo::ActorEntered(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneInfo.ActorEntered");

	AZoneInfo_ActorEntered_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneInfo.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AZoneInfo::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneInfo.PreBeginPlay");

	AZoneInfo_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneInfo.LinkToSkybox
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native)

void AZoneInfo::LinkToSkybox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneInfo.LinkToSkybox");

	AZoneInfo_LinkToSkybox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneInfo.ZoneActors
// (Final, Iterator, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class AActor*                  Actor                          (Parm, OutParm)

void AZoneInfo::ZoneActors(class UClass* BaseClass, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneInfo.ZoneActors");

	AZoneInfo_ZoneActors_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Engine.WarpZoneInfo.ActorLeaving
// (Defined, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AWarpZoneInfo::ActorLeaving(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.ActorLeaving");

	AWarpZoneInfo_ActorLeaving_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneInfo.ActorEntered
// (Final, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AWarpZoneInfo::ActorEntered(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.ActorEntered");

	AWarpZoneInfo_ActorEntered_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneInfo.ForceGenerate
// (Final, Defined, Net, NetReliable, Exec, Native)

void AWarpZoneInfo::ForceGenerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.ForceGenerate");

	AWarpZoneInfo_ForceGenerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneInfo.Generate
// (Net, NetReliable, Exec, Native)

void AWarpZoneInfo::Generate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.Generate");

	AWarpZoneInfo_Generate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneInfo.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AWarpZoneInfo::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.Trigger");

	AWarpZoneInfo_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneInfo.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AWarpZoneInfo::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.PreBeginPlay");

	AWarpZoneInfo_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WarpZoneInfo.UnWarp
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm)
// struct FVector                 Vel                            (Parm, OutParm)
// struct FRotator                R                              (Parm, OutParm)

void AWarpZoneInfo::UnWarp(struct FVector* Loc, struct FVector* Vel, struct FRotator* R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.UnWarp");

	AWarpZoneInfo_UnWarp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Vel != nullptr)
		*Vel = params.Vel;
	if (R != nullptr)
		*R = params.R;
}


// Function Engine.WarpZoneInfo.Warp
// (Final, PreOperator, Net, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm)
// struct FVector                 Vel                            (Parm, OutParm)
// struct FRotator                R                              (Parm, OutParm)

void AWarpZoneInfo::Warp(struct FVector* Loc, struct FVector* Vel, struct FRotator* R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WarpZoneInfo.Warp");

	AWarpZoneInfo_Warp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Vel != nullptr)
		*Vel = params.Vel;
	if (R != nullptr)
		*R = params.R;
}


// Function Engine.Projectile.GetTossVelocity
// (Iterator, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// class APawn*                   P                              (Parm)
// struct FRotator                R                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AProjectile::GetTossVelocity(class APawn* P, const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.GetTossVelocity");

	AProjectile_GetTossVelocity_Params params;
	params.P = P;
	params.R = R;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Projectile.RandSpin
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// float                          spinRate                       (Parm)

void AProjectile::RandSpin(float spinRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.RandSpin");

	AProjectile_RandSpin_Params params;
	params.spinRate = spinRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projectile.Explode
// (Final, Defined, Singular, Exec, Native)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AProjectile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.Explode");

	AProjectile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projectile.BlowUp
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 HitLocation                    (Parm)

void AProjectile::BlowUp(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.BlowUp");

	AProjectile_BlowUp_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projectile.HitWall
// (Final, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)

void AProjectile::HitWall(const struct FVector& HitNormal, class AActor* Wall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.HitWall");

	AProjectile_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projectile.ProcessTouch
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitLocation                    (Parm)

void AProjectile::ProcessTouch(class AActor* Other, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.ProcessTouch");

	AProjectile_ProcessTouch_Params params;
	params.Other = Other;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projectile.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AProjectile::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.Touch");

	AProjectile_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Projectile.EncroachingOn
// (Final, Defined, Iterator, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AProjectile::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Projectile.EncroachingOn");

	AProjectile_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Decoration.Bump
// (Final, Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void ADecoration::Bump(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.Bump");

	ADecoration_Bump_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.Timer
// (Iterator, PreOperator, Singular, Simulated)

void ADecoration::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.Timer");

	ADecoration_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void ADecoration::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.Destroyed");

	ADecoration_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.BaseChange
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated)

void ADecoration::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.BaseChange");

	ADecoration_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void ADecoration::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.Trigger");

	ADecoration_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.PhysicsVolumeChange
// (Latent, PreOperator, Singular, Simulated)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void ADecoration::PhysicsVolumeChange(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.PhysicsVolumeChange");

	ADecoration_PhysicsVolumeChange_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            NDamage                        (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void ADecoration::TakeDamage(int NDamage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.TakeDamage");

	ADecoration_TakeDamage_Params params;
	params.NDamage = NDamage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.HitWall
// (Final, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)

void ADecoration::HitWall(const struct FVector& HitNormal, class AActor* Wall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.HitWall");

	ADecoration_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.Landed
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)

void ADecoration::Landed(const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.Landed");

	ADecoration_Landed_Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.Drop
// (Final, Defined, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 newVel                         (Parm)

void ADecoration::Drop(const struct FVector& newVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.Drop");

	ADecoration_Drop_Params params;
	params.newVel = newVel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Decoration.CanSplash
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADecoration::CanSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Decoration.CanSplash");

	ADecoration_CanSplash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Scout.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AScout::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Scout.PreBeginPlay");

	AScout_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.AdminSay
// (Defined, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 Msg                            (Parm, NeedCtorLink)

void AGameInfo::AdminSay(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.AdminSay");

	AGameInfo_AdminSay_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.KillBots
// (Defined, Singular, Simulated, Exec, Native)
// Parameters:
// int                            Num                            (Parm)

void AGameInfo::KillBots(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.KillBots");

	AGameInfo_KillBots_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.OtherTeam
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// class ATeamInfo*               Requester                      (Parm)
// class ATeamInfo*               ReturnValue                    (Parm, OutParm, ReturnParm)

class ATeamInfo* AGameInfo::OtherTeam(class ATeamInfo* Requester)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.OtherTeam");

	AGameInfo_OtherTeam_Params params;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.ReviewJumpSpots
// (Final, Singular, Simulated, Exec, Native)
// Parameters:
// struct FName                   TestLabel                      (Parm)

void AGameInfo::ReviewJumpSpots(const struct FName& TestLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ReviewJumpSpots");

	AGameInfo_ReviewJumpSpots_Params params;
	params.TestLabel = TestLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.ParseMessageString
// (Final, Latent, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AMutator*                BaseMutator                    (Parm)
// class AController*             Who                            (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::ParseMessageString(class AMutator* BaseMutator, class AController* Who, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ParseMessageString");

	AGameInfo_ParseMessageString_Params params;
	params.BaseMutator = BaseMutator;
	params.Who = Who;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.FindTeamDesignation
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// class AGameReplicationInfo*    GRI                            (Parm)
// class AActor*                  A                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::FindTeamDesignation(class AGameReplicationInfo* GRI, class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.FindTeamDesignation");

	AGameInfo_FindTeamDesignation_Params params;
	params.GRI = GRI;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.TooManyBots
// (Iterator, PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::TooManyBots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.TooManyBots");

	AGameInfo_TooManyBots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.ScoreKill
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Other                          (Parm)

void AGameInfo::ScoreKill(class AController* Killer, class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ScoreKill");

	AGameInfo_ScoreKill_Params params;
	params.Killer = Killer;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.CheckScore
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)

void AGameInfo::CheckScore(class APlayerReplicationInfo* Scorer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.CheckScore");

	AGameInfo_CheckScore_Params params;
	params.Scorer = Scorer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.ScoreObjective
// (Singular, Net, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// int                            Score                          (Parm)

void AGameInfo::ScoreObjective(class APlayerReplicationInfo* Scorer, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ScoreObjective");

	AGameInfo_ScoreObjective_Params params;
	params.Scorer = Scorer;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.RatePlayerStart
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Native)
// Parameters:
// class ANavigationPoint*        N                              (Parm)
// unsigned char                  Team                           (Parm)
// class AController*             Player                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameInfo::RatePlayerStart(class ANavigationPoint* N, unsigned char Team, class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.RatePlayerStart");

	AGameInfo_RatePlayerStart_Params params;
	params.N = N;
	params.Team = Team;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.FindPlayerStart
// (PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class AController*             Player                         (Parm)
// unsigned char                  InTeam                         (OptionalParm, Parm)
// struct FString                 incomingName                   (OptionalParm, Parm, NeedCtorLink)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AGameInfo::FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& incomingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.FindPlayerStart");

	AGameInfo_FindPlayerStart_Params params;
	params.Player = Player;
	params.InTeam = InTeam;
	params.incomingName = incomingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.EndLogging
// (Iterator, Latent, Singular, Net, Exec, Native)
// Parameters:
// struct FString                 Reason                         (Parm, NeedCtorLink)

void AGameInfo::EndLogging(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.EndLogging");

	AGameInfo_EndLogging_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.EndGame
// (Final, Defined, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Winner                         (Parm)
// struct FString                 Reason                         (Parm, NeedCtorLink)

void AGameInfo::EndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.EndGame");

	AGameInfo_EndGame_Params params;
	params.Winner = Winner;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.CheckEndGame
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APlayerReplicationInfo*  Winner                         (Parm)
// struct FString                 Reason                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.CheckEndGame");

	AGameInfo_CheckEndGame_Params params;
	params.Winner = Winner;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.BroadcastLocalized
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class AActor*                  Sender                         (Parm)
// class UClass*                  Message                        (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void AGameInfo::BroadcastLocalized(class AActor* Sender, class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.BroadcastLocalized");

	AGameInfo_BroadcastLocalized_Params params;
	params.Sender = Sender;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.BroadcastTeam
// (Latent, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class AController*             Sender                         (Parm)
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void AGameInfo::BroadcastTeam(class AController* Sender, const struct FString& Msg, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.BroadcastTeam");

	AGameInfo_BroadcastTeam_Params params;
	params.Sender = Sender;
	params.Msg = Msg;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.Broadcast
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class AActor*                  Sender                         (Parm)
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void AGameInfo::Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Broadcast");

	AGameInfo_Broadcast_Params params;
	params.Sender = Sender;
	params.Msg = Msg;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.GetMapList
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 MapListType                    (Parm, NeedCtorLink)
// class AMapList*                ReturnValue                    (Parm, OutParm, ReturnParm)

class AMapList* AGameInfo::GetMapList(const struct FString& MapListType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetMapList");

	AGameInfo_GetMapList_Params params;
	params.MapListType = MapListType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.RestartGame
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native)

void AGameInfo::RestartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.RestartGame");

	AGameInfo_RestartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.SendPlayer
// (Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerController*       aPlayer                        (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)

void AGameInfo::SendPlayer(class APlayerController* aPlayer, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.SendPlayer");

	AGameInfo_SendPlayer_Params params;
	params.aPlayer = aPlayer;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PickTeam
// (Defined, PreOperator, Simulated, Exec, Native)
// Parameters:
// unsigned char                  Current                        (Parm)
// class AController*             C                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AGameInfo::PickTeam(unsigned char Current, class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PickTeam");

	AGameInfo_PickTeam_Params params;
	params.Current = Current;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.ChangeTeam
// (Final, Iterator, Latent, NetReliable, Simulated, Native)
// Parameters:
// class AController*             Other                          (Parm)
// int                            N                              (Parm)
// bool                           bNewTeam                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::ChangeTeam(class AController* Other, int N, bool bNewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ChangeTeam");

	AGameInfo_ChangeTeam_Params params;
	params.Other = Other;
	params.N = N;
	params.bNewTeam = bNewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.ChangeName
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class AController*             Other                          (Parm)
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// bool                           bNameChange                    (Parm)

void AGameInfo::ChangeName(class AController* Other, const struct FString& S, bool bNameChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ChangeName");

	AGameInfo_ChangeName_Params params;
	params.Other = Other;
	params.S = S;
	params.bNameChange = bNameChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.DiscardInventory
// (Latent, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AGameInfo::DiscardInventory(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.DiscardInventory");

	AGameInfo_DiscardInventory_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PickupQuery
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// class APickup*                 item                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::PickupQuery(class APawn* Other, class APickup* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PickupQuery");

	AGameInfo_PickupQuery_Params params;
	params.Other = Other;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.ShouldRespawn
// (PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APickup*                 Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::ShouldRespawn(class APickup* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ShouldRespawn");

	AGameInfo_ShouldRespawn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.ReduceDamage
// (Iterator, Latent, Simulated, Exec, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   injured                        (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGameInfo::ReduceDamage(int Damage, class APawn* injured, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ReduceDamage");

	AGameInfo_ReduceDamage_Params params;
	params.Damage = Damage;
	params.injured = injured;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.CanSpectate
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerController*       Viewer                         (Parm)
// bool                           bOnlySpectator                 (Parm)
// class AActor*                  ViewTarget                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::CanSpectate(class APlayerController* Viewer, bool bOnlySpectator, class AActor* ViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.CanSpectate");

	AGameInfo_CanSpectate_Params params;
	params.Viewer = Viewer;
	params.bOnlySpectator = bOnlySpectator;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.IsOnTeam
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Other                          (Parm)
// int                            TeamNum                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::IsOnTeam(class AController* Other, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.IsOnTeam");

	AGameInfo_IsOnTeam_Params params;
	params.Other = Other;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.KickBan
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AGameInfo::KickBan(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.KickBan");

	AGameInfo_KickBan_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.Kick
// (Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AGameInfo::Kick(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Kick");

	AGameInfo_Kick_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.ParseKillMessage
// (Final, Defined, Iterator, Net, Simulated, Native, Event)
// Parameters:
// struct FString                 KillerName                     (Parm, NeedCtorLink)
// struct FString                 VictimName                     (Parm, NeedCtorLink)
// struct FString                 DeathMessage                   (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::ParseKillMessage(const struct FString& KillerName, const struct FString& VictimName, const struct FString& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ParseKillMessage");

	AGameInfo_ParseKillMessage_Params params;
	params.KillerName = KillerName;
	params.VictimName = VictimName;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.BroadcastDeathMessage
// (Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Other                          (Parm)
// class UClass*                  DamageType                     (Parm)

void AGameInfo::BroadcastDeathMessage(class AController* Killer, class AController* Other, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.BroadcastDeathMessage");

	AGameInfo_BroadcastDeathMessage_Params params;
	params.Killer = Killer;
	params.Other = Other;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PreventDeath
// (Defined, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Killed                         (Parm)
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::PreventDeath(class APawn* Killed, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PreventDeath");

	AGameInfo_PreventDeath_Params params;
	params.Killed = Killed;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.Killed
// (Final, Latent, Simulated, Exec, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Killed                         (Parm)
// class APawn*                   KilledPawn                     (Parm)
// class UClass*                  DamageType                     (Parm)

void AGameInfo::Killed(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Killed");

	AGameInfo_Killed_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.KilledPawn = KilledPawn;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.NotifyKilled
// (Final, Defined, Iterator, Simulated, Exec, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Killed                         (Parm)
// class APawn*                   KilledPawn                     (Parm)

void AGameInfo::NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.NotifyKilled");

	AGameInfo_NotifyKilled_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.KilledPawn = KilledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.SetPlayerDefaults
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm)

void AGameInfo::SetPlayerDefaults(class APawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.SetPlayerDefaults");

	AGameInfo_SetPlayerDefaults_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.AddDefaultInventory
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm)

void AGameInfo::AddDefaultInventory(class APawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.AddDefaultInventory");

	AGameInfo_AddDefaultInventory_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.AddGameSpecificInventory
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Native, Event)
// Parameters:
// class APawn*                   P                              (Parm)

void AGameInfo::AddGameSpecificInventory(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.AddGameSpecificInventory");

	AGameInfo_AddGameSpecificInventory_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.AcceptInventory
// (Defined, Iterator, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm)

void AGameInfo::AcceptInventory(class APawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.AcceptInventory");

	AGameInfo_AcceptInventory_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.Logout
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Exiting                        (Parm)

void AGameInfo::Logout(class AController* Exiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Logout");

	AGameInfo_Logout_Params params;
	params.Exiting = Exiting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.L2NetPostLogin
// (Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AGameInfo::L2NetPostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.L2NetPostLogin");

	AGameInfo_L2NetPostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PostLogin
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AGameInfo::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PostLogin");

	AGameInfo_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.GetDefaultPlayerClass
// (Defined, Iterator, Simulated, Exec, Native)
// Parameters:
// class AController*             C                              (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AGameInfo::GetDefaultPlayerClass(class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetDefaultPlayerClass");

	AGameInfo_GetDefaultPlayerClass_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.RestartPlayer
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class AController*             aPlayer                        (Parm)

void AGameInfo::RestartPlayer(class AController* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.RestartPlayer");

	AGameInfo_RestartPlayer_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.SpawnPlayerPawn
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// class AController*             aPlayer                        (Parm)
// struct FString                 PawnClassName                  (Parm, NeedCtorLink)
// struct FVector                 StartLocation                  (Parm)
// struct FRotator                StartRotation                  (Parm)

void AGameInfo::SpawnPlayerPawn(class AController* aPlayer, const struct FString& PawnClassName, const struct FVector& StartLocation, const struct FRotator& StartRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.SpawnPlayerPawn");

	AGameInfo_SpawnPlayerPawn_Params params;
	params.aPlayer = aPlayer;
	params.PawnClassName = PawnClassName;
	params.StartLocation = StartLocation;
	params.StartRotation = StartRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.SpawnDefaultPlayerPawn
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// class AController*             aPlayer                        (Parm)

void AGameInfo::SpawnDefaultPlayerPawn(class AController* aPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.SpawnDefaultPlayerPawn");

	AGameInfo_SpawnDefaultPlayerPawn_Params params;
	params.aPlayer = aPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.L2NetStartMatch
// (Iterator, Simulated, Exec, Native)

void AGameInfo::L2NetStartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.L2NetStartMatch");

	AGameInfo_L2NetStartMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.StartMatch
// (Defined, Net, NetReliable, Simulated, Exec, Native)

void AGameInfo::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.StartMatch");

	AGameInfo_StartMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.L2NetLogin
// (Final, Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Portal                         (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, OutParm, NeedCtorLink)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* AGameInfo::L2NetLogin(const struct FString& Portal, const struct FString& Options, struct FString* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.L2NetLogin");

	AGameInfo_L2NetLogin_Params params;
	params.Portal = Portal;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error != nullptr)
		*Error = params.Error;

	return params.ReturnValue;
}


// Function Engine.GameInfo.Login
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Portal                         (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, OutParm, NeedCtorLink)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* AGameInfo::Login(const struct FString& Portal, const struct FString& Options, struct FString* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Login");

	AGameInfo_Login_Params params;
	params.Portal = Portal;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error != nullptr)
		*Error = params.Error;

	return params.ReturnValue;
}


// Function Engine.GameInfo.AtCapacity
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           bSpectator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::AtCapacity(bool bSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.AtCapacity");

	AGameInfo_AtCapacity_Params params;
	params.bSpectator = bSpectator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.GetIntOption
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 ParseString                    (Parm, NeedCtorLink)
// int                            CurrentValue                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGameInfo::GetIntOption(const struct FString& Options, const struct FString& ParseString, int CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetIntOption");

	AGameInfo_GetIntOption_Params params;
	params.Options = Options;
	params.ParseString = ParseString;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.PreLogin
// (Singular, NetReliable, Exec, Native)
// Parameters:
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Address                        (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, OutParm, NeedCtorLink)
// struct FString                 FailCode                       (Parm, OutParm, NeedCtorLink)

void AGameInfo::PreLogin(const struct FString& Options, const struct FString& Address, struct FString* Error, struct FString* FailCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PreLogin");

	AGameInfo_PreLogin_Params params;
	params.Options = Options;
	params.Address = Address;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error != nullptr)
		*Error = params.Error;
	if (FailCode != nullptr)
		*FailCode = params.FailCode;
}


// Function Engine.GameInfo.ProcessServerTravel
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bItems                         (Parm)

void AGameInfo::ProcessServerTravel(const struct FString& URL, bool bItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ProcessServerTravel");

	AGameInfo_ProcessServerTravel_Params params;
	params.URL = URL;
	params.bItems = bItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.GetBeaconText
// (Final, Defined, PreOperator, Net, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::GetBeaconText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetBeaconText");

	AGameInfo_GetBeaconText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.AddMutator
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 mutname                        (Parm, NeedCtorLink)
// bool                           bUserAdded                     (OptionalParm, Parm)

void AGameInfo::AddMutator(const struct FString& mutname, bool bUserAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.AddMutator");

	AGameInfo_AddMutator_Params params;
	params.mutname = mutname;
	params.bUserAdded = bUserAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.InitGame
// (Final, Latent, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, OutParm, NeedCtorLink)

void AGameInfo::InitGame(const struct FString& Options, struct FString* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.InitGame");

	AGameInfo_InitGame_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error != nullptr)
		*Error = params.Error;
}


// Function Engine.GameInfo.ParseOption
// (Defined, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::ParseOption(const struct FString& Options, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ParseOption");

	AGameInfo_ParseOption_Params params;
	params.Options = Options;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.GetKeyValue
// (Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 Pair                           (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, OutParm, NeedCtorLink)
// struct FString                 Value                          (Parm, OutParm, NeedCtorLink)

void AGameInfo::GetKeyValue(const struct FString& Pair, struct FString* Key, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetKeyValue");

	AGameInfo_GetKeyValue_Params params;
	params.Pair = Pair;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function Engine.GameInfo.GrabOption
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 Options                        (Parm, OutParm, NeedCtorLink)
// struct FString                 Result                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::GrabOption(struct FString* Options, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GrabOption");

	AGameInfo_GrabOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function Engine.GameInfo.DetailChange
// (Defined, Latent, Singular, Event)

void AGameInfo::DetailChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.DetailChange");

	AGameInfo_DetailChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.SetGameSpeed
// (Final, Iterator, Singular, Net, Exec, Native)
// Parameters:
// float                          t                              (Parm)

void AGameInfo::SetGameSpeed(float t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.SetGameSpeed");

	AGameInfo_SetGameSpeed_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.ChangeVoiceChatter
// (Iterator, Singular, Net, Exec, Native)
// Parameters:
// class AController*             Client                         (Parm)
// int                            IpAddr                         (Parm)
// int                            Handle                         (Parm)
// bool                           Add                            (Parm)

void AGameInfo::ChangeVoiceChatter(class AController* Client, int IpAddr, int Handle, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.ChangeVoiceChatter");

	AGameInfo_ChangeVoiceChatter_Params params;
	params.Client = Client;
	params.IpAddr = IpAddr;
	params.Handle = Handle;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.SetPause
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// bool                           bPause                         (Parm)
// class APlayerController*       P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::SetPause(bool bPause, class APlayerController* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.SetPause");

	AGameInfo_SetPause_Params params;
	params.bPause = bPause;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.GetServerPort
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGameInfo::GetServerPort()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetServerPort");

	AGameInfo_GetServerPort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.GetServerPlayers
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// struct FServerResponseLine     ServerState                    (Parm, OutParm, NeedCtorLink)

void AGameInfo::GetServerPlayers(struct FServerResponseLine* ServerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetServerPlayers");

	AGameInfo_GetServerPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerState != nullptr)
		*ServerState = params.ServerState;
}


// Function Engine.GameInfo.GetServerDetails
// (Defined, Singular, Net, Exec, Native)
// Parameters:
// struct FServerResponseLine     ServerState                    (Parm, OutParm, NeedCtorLink)

void AGameInfo::GetServerDetails(struct FServerResponseLine* ServerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetServerDetails");

	AGameInfo_GetServerDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerState != nullptr)
		*ServerState = params.ServerState;
}


// Function Engine.GameInfo.GetNumPlayers
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGameInfo::GetNumPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetNumPlayers");

	AGameInfo_GetNumPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.GetServerInfo
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FServerResponseLine     ServerState                    (Parm, OutParm, NeedCtorLink)

void AGameInfo::GetServerInfo(struct FServerResponseLine* ServerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetServerInfo");

	AGameInfo_GetServerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerState != nullptr)
		*ServerState = params.ServerState;
}


// Function Engine.GameInfo.GetNetworkNumber
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::GetNetworkNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GetNetworkNumber");

	AGameInfo_GetNetworkNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.InitGameReplicationInfo
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native)

void AGameInfo::InitGameReplicationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.InitGameReplicationInfo");

	AGameInfo_InitGameReplicationInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.GameEnding
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event)

void AGameInfo::GameEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.GameEnding");

	AGameInfo_GameEnding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AGameInfo::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Timer");

	AGameInfo_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.InitLogging
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Native)

void AGameInfo::InitLogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.InitLogging");

	AGameInfo_InitLogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.Reset
// (Defined, Singular, Simulated, Native)

void AGameInfo::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.Reset");

	AGameInfo_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AGameInfo::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PostBeginPlay");

	AGameInfo_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.UseLowGore
// (Final, Defined, Iterator, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameInfo::UseLowGore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.UseLowGore");

	AGameInfo_UseLowGore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.FindPlayerByID
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Native, Event)
// Parameters:
// int                            PlayerID                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameInfo::FindPlayerByID(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.FindPlayerByID");

	AGameInfo_FindPlayerByID_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameInfo.PrecacheGameStaticMeshes
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class ALevelInfo*              myLevel                        (Parm)

void AGameInfo::PrecacheGameStaticMeshes(class ALevelInfo* myLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PrecacheGameStaticMeshes");

	AGameInfo_PrecacheGameStaticMeshes_Params params;
	params.myLevel = myLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PrecacheGameTextures
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class ALevelInfo*              myLevel                        (Parm)

void AGameInfo::PrecacheGameTextures(class ALevelInfo* myLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PrecacheGameTextures");

	AGameInfo_PrecacheGameTextures_Params params;
	params.myLevel = myLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.UpdatePrecacheStaticMeshes
// (Defined, Iterator, Singular, NetReliable, Exec, Native)

void AGameInfo::UpdatePrecacheStaticMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.UpdatePrecacheStaticMeshes");

	AGameInfo_UpdatePrecacheStaticMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.UpdatePrecacheMaterials
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native)

void AGameInfo::UpdatePrecacheMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.UpdatePrecacheMaterials");

	AGameInfo_UpdatePrecacheMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameInfo.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void AGameInfo::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameInfo.PreBeginPlay");

	AGameInfo_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.GetLocalPlayerController
// (Final, Iterator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* ALevelInfo::GetLocalPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.GetLocalPlayerController");

	ALevelInfo_GetLocalPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LevelInfo.PreBeginPlay
// (Final, Defined, Singular, Net, Simulated)

void ALevelInfo::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.PreBeginPlay");

	ALevelInfo_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.Reset
// (Defined, Singular, Simulated, Native)

void ALevelInfo::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.Reset");

	ALevelInfo_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.ThisIsNeverExecuted
// (Defined, PreOperator, Singular, Exec, Native, Event)

void ALevelInfo::ThisIsNeverExecuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.ThisIsNeverExecuted");

	ALevelInfo_ThisIsNeverExecuted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.ServerTravel
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bItems                         (Parm)

void ALevelInfo::ServerTravel(const struct FString& URL, bool bItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.ServerTravel");

	ALevelInfo_ServerTravel_Params params;
	params.URL = URL;
	params.bItems = bItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.GetAddressURL
// (Final, Defined, Singular, Net, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ALevelInfo::GetAddressURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.GetAddressURL");

	ALevelInfo_GetAddressURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LevelInfo.IsDemoBuild
// (PreOperator, Singular, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALevelInfo::IsDemoBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.IsDemoBuild");

	ALevelInfo_IsDemoBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LevelInfo.GetLocalURL
// (Final, Defined, Iterator, Latent, Singular, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ALevelInfo::GetLocalURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.GetLocalURL");

	ALevelInfo_GetLocalURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LevelInfo.AddPrecacheStaticMesh
// (Singular, Net, Simulated, Exec, Native)
// Parameters:
// class UStaticMesh*             stat                           (Parm)

void ALevelInfo::AddPrecacheStaticMesh(class UStaticMesh* stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.AddPrecacheStaticMesh");

	ALevelInfo_AddPrecacheStaticMesh_Params params;
	params.stat = stat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.AddPrecacheMaterial
// (Defined, PreOperator, Singular, Exec, Native)
// Parameters:
// class UMaterial*               mat                            (Parm)

void ALevelInfo::AddPrecacheMaterial(class UMaterial* mat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.AddPrecacheMaterial");

	ALevelInfo_AddPrecacheMaterial_Params params;
	params.mat = mat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.FillPrecacheStaticMeshesArray
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Event)

void ALevelInfo::FillPrecacheStaticMeshesArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.FillPrecacheStaticMeshesArray");

	ALevelInfo_FillPrecacheStaticMeshesArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.FillPrecacheMaterialsArray
// (Final, Defined, Latent, Singular, Event)

void ALevelInfo::FillPrecacheMaterialsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.FillPrecacheMaterialsArray");

	ALevelInfo_FillPrecacheMaterialsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.GetGameClass
// (Defined, Latent, Singular, Exec, Native, Event)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ALevelInfo::GetGameClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.GetGameClass");

	ALevelInfo_GetGameClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LevelInfo.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void ALevelInfo::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.PostBeginPlay");

	ALevelInfo_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LevelInfo.IsEntry
// (Final, Latent, Singular, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ALevelInfo::IsEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.IsEntry");

	ALevelInfo_IsEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LevelInfo.DetailChange
// (Defined, Latent, Singular, Event)
// Parameters:
// TEnumAsByte<EDetailMode>       NewDetailMode                  (Parm)

void ALevelInfo::DetailChange(TEnumAsByte<EDetailMode> NewDetailMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LevelInfo.DetailChange");

	ALevelInfo_DetailChange_Params params;
	params.NewDetailMode = NewDetailMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.zoom
// (Final, Latent, Net, Simulated, Native, Event)

void AWeapon::zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.zoom");

	AWeapon_zoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.PlayIdleAnim
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native)

void AWeapon::PlayIdleAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PlayIdleAnim");

	AWeapon_PlayIdleAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.PlayPostSelect
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Native)

void AWeapon::PlayPostSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PlayPostSelect");

	AWeapon_PlayPostSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.PlaySelect
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native)

void AWeapon::PlaySelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PlaySelect");

	AWeapon_PlaySelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.PlayReloading
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Native)

void AWeapon::PlayReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PlayReloading");

	AWeapon_PlayReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.TweenDown
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Native)

void AWeapon::TweenDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.TweenDown");

	AWeapon_TweenDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.PutDown
// (Final, Iterator, Latent, Net, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::PutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PutDown");

	AWeapon_PutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.BringUp
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native)

void AWeapon::BringUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.BringUp");

	AWeapon_BringUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.CheckAnimating
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Native)

void AWeapon::CheckAnimating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.CheckAnimating");

	AWeapon_CheckAnimating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ClientFinish
// (Final, Defined, Singular, Net, Exec, Native)

void AWeapon::ClientFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ClientFinish");

	AWeapon_ClientFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.CauseAltFire
// (PreOperator, NetReliable, Simulated, Exec, Native)

void AWeapon::CauseAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.CauseAltFire");

	AWeapon_CauseAltFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.SwitchToWeaponWithAmmo
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native)

void AWeapon::SwitchToWeaponWithAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SwitchToWeaponWithAmmo");

	AWeapon_SwitchToWeaponWithAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.Finish
// (Iterator, Latent, PreOperator, Net, Exec, Native)

void AWeapon::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.Finish");

	AWeapon_Finish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.IsIdle
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.IsIdle");

	AWeapon_IsIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.BotFire
// (Final, Iterator, NetReliable, Simulated, Exec, Native)
// Parameters:
// bool                           bFinished                      (Parm)
// struct FName                   FiringMode                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::BotFire(bool bFinished, const struct FName& FiringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.BotFire");

	AWeapon_BotFire_Params params;
	params.bFinished = bFinished;
	params.FiringMode = FiringMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.NeedsToReload
// (Final, Latent, PreOperator, Net, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::NeedsToReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.NeedsToReload");

	AWeapon_NeedsToReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.TraceFire
// (NetReliable, Simulated, Exec, Native)
// Parameters:
// float                          Accuracy                       (Parm)
// float                          YOffset                        (Parm)
// float                          ZOffset                        (Parm)

void AWeapon::TraceFire(float Accuracy, float YOffset, float ZOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.TraceFire");

	AWeapon_TraceFire_Params params;
	params.Accuracy = Accuracy;
	params.YOffset = YOffset;
	params.ZOffset = ZOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ProjectileFire
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native)

void AWeapon::ProjectileFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ProjectileFire");

	AWeapon_ProjectileFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.GetFireStart
// (Final, Iterator, PreOperator, Net, Exec, Native)
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 Z                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AWeapon::GetFireStart(const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.GetFireStart");

	AWeapon_GetFireStart_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.PlayFiring
// (Final, Defined, Iterator, Exec, Native)

void AWeapon::PlayFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PlayFiring");

	AWeapon_PlayFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.AltFire
// (Defined, Iterator, PreOperator, Singular, Simulated, Native)
// Parameters:
// float                          Value                          (Parm)

void AWeapon::AltFire(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.AltFire");

	AWeapon_AltFire_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ServerAltFire
// (Defined, PreOperator, Singular, NetReliable, Simulated, Native)

void AWeapon::ServerAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ServerAltFire");

	AWeapon_ServerAltFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.LocalFire
// (Defined, Latent, Singular, Simulated, Exec, Native)

void AWeapon::LocalFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.LocalFire");

	AWeapon_LocalFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.Fire
// (PreOperator, Singular, Simulated, Native)
// Parameters:
// float                          Value                          (Parm)

void AWeapon::Fire(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.Fire");

	AWeapon_Fire_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ServerFire
// (Final, Iterator, NetReliable, Simulated, Native)

void AWeapon::ServerFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ServerFire");

	AWeapon_ServerFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ServerRapidFire
// (Defined, PreOperator, Singular, Simulated, Exec, Native)

void AWeapon::ServerRapidFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ServerRapidFire");

	AWeapon_ServerRapidFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ServerStopFiring
// (PreOperator, Singular, Net, Simulated, Exec, Native)

void AWeapon::ServerStopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ServerStopFiring");

	AWeapon_ServerStopFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.RepeatFire
// (Iterator, Net, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::RepeatFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RepeatFire");

	AWeapon_RepeatFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.DropFrom
// (Final, Iterator, PreOperator, Singular, Exec, Native)
// Parameters:
// struct FVector                 StartLocation                  (Parm)

void AWeapon::DropFrom(const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.DropFrom");

	AWeapon_DropFrom_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.RecommendWeapon
// (Defined, Singular, Exec, Native)
// Parameters:
// float                          rating                         (Parm, OutParm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AWeapon::RecommendWeapon(float* rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RecommendWeapon");

	AWeapon_RecommendWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rating != nullptr)
		*rating = params.rating;

	return params.ReturnValue;
}


// Function Engine.Weapon.ClientWeaponSet
// (Final, Defined, Net, Exec, Native)
// Parameters:
// bool                           bOptionalSet                   (Parm)

void AWeapon::ClientWeaponSet(bool bOptionalSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ClientWeaponSet");

	AWeapon_ClientWeaponSet_Params params;
	params.bOptionalSet = bOptionalSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.SwitchPriority
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::SwitchPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SwitchPriority");

	AWeapon_SwitchPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.GiveAmmo
// (Defined, Latent, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AWeapon::GiveAmmo(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.GiveAmmo");

	AWeapon_GiveAmmo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.AnimEnd
// (Iterator, Net, Simulated)
// Parameters:
// int                            Channel                        (Parm)

void AWeapon::AnimEnd(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.AnimEnd");

	AWeapon_AnimEnd_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.NextWeapon
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class AWeapon*                 CurrentChoice                  (Parm)
// class AWeapon*                 CurrentWeapon                  (Parm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AWeapon::NextWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.NextWeapon");

	AWeapon_NextWeapon_Params params;
	params.CurrentChoice = CurrentChoice;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.PrevWeapon
// (Final, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class AWeapon*                 CurrentChoice                  (Parm)
// class AWeapon*                 CurrentWeapon                  (Parm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AWeapon::PrevWeapon(class AWeapon* CurrentChoice, class AWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PrevWeapon");

	AWeapon_PrevWeapon_Params params;
	params.CurrentChoice = CurrentChoice;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.WeaponChange
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// unsigned char                  f                              (Parm)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AWeapon* AWeapon::WeaponChange(unsigned char f)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.WeaponChange");

	AWeapon_WeaponChange_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.SetHand
// (PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// float                          hand                           (Parm)

void AWeapon::SetHand(float hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SetHand");

	AWeapon_SetHand_Params params;
	params.hand = hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.HandlePickupQuery
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// class APickup*                 item                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::HandlePickupQuery(class APickup* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.HandlePickupQuery");

	AWeapon_HandlePickupQuery_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.ClientWeaponEvent
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FName                   EventType                      (Parm)

void AWeapon::ClientWeaponEvent(const struct FName& EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ClientWeaponEvent");

	AWeapon_ClientWeaponEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.SuggestDefenseStyle
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::SuggestDefenseStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SuggestDefenseStyle");

	AWeapon_SuggestDefenseStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.SuggestAttackStyle
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::SuggestAttackStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SuggestAttackStyle");

	AWeapon_SuggestAttackStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.GetAIRating
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::GetAIRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.GetAIRating");

	AWeapon_GetAIRating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.RateSelf
// (Final, Defined, PreOperator, Exec, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::RateSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RateSelf");

	AWeapon_RateSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.GetRating
// (Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::GetRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.GetRating");

	AWeapon_GetRating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.SplashJump
// (Iterator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::SplashJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SplashJump");

	AWeapon_SplashJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.HasAmmo
// (Final, Defined, PreOperator, Singular, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::HasAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.HasAmmo");

	AWeapon_HasAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.AmmoStatus
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::AmmoStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.AmmoStatus");

	AWeapon_AmmoStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.CanAttack
// (Defined, Iterator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::CanAttack(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.CanAttack");

	AWeapon_CanAttack_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.DrawMuzzleFlash
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AWeapon::DrawMuzzleFlash(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.DrawMuzzleFlash");

	AWeapon_DrawMuzzleFlash_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.DrawCrossHair
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AWeapon::DrawCrossHair(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.DrawCrossHair");

	AWeapon_DrawCrossHair_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.RenderOverlays
// (Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AWeapon::RenderOverlays(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RenderOverlays");

	AWeapon_RenderOverlays_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.GiveTo
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)

void AWeapon::GiveTo(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.GiveTo");

	AWeapon_GiveTo_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AWeapon::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.Destroyed");

	AWeapon_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.SetAITarget
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// class AActor*                  t                              (Parm)

void AWeapon::SetAITarget(class AActor* t)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SetAITarget");

	AWeapon_SetAITarget_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.TravelPostAccept
// (Defined, Iterator, Singular, Net, Exec, Native)

void AWeapon::TravelPostAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.TravelPostAccept");

	AWeapon_TravelPostAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.DisplayDebug
// (Iterator, Net, Simulated, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          YL                             (Parm, OutParm)
// float                          YPos                           (Parm, OutParm)

void AWeapon::DisplayDebug(class UCanvas* Canvas, float* YL, float* YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.DisplayDebug");

	AWeapon_DisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YL != nullptr)
		*YL = params.YL;
	if (YPos != nullptr)
		*YPos = params.YPos;
}


// Function Engine.Weapon.ClientForceReload
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Exec, Native)

void AWeapon::ClientForceReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ClientForceReload");

	AWeapon_ClientForceReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ServerForceReload
// (Final, Latent, Exec, Native)

void AWeapon::ServerForceReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ServerForceReload");

	AWeapon_ServerForceReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.ForceReload
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, Native)

void AWeapon::ForceReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.ForceReload");

	AWeapon_ForceReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.PostNetBeginPlay
// (Iterator, Singular, Net, NetReliable, Simulated, Native)

void AWeapon::PostNetBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.PostNetBeginPlay");

	AWeapon_PostNetBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.IncrementFlashCount
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event)

void AWeapon::IncrementFlashCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.IncrementFlashCount");

	AWeapon_IncrementFlashCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.IsFiring
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.IsFiring");

	AWeapon_IsFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.FireHack
// (PreOperator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// unsigned char                  Mode                           (Parm)

void AWeapon::FireHack(unsigned char Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.FireHack");

	AWeapon_FireHack_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Weapon.RecommendSplashDamage
// (Final, PreOperator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::RecommendSplashDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RecommendSplashDamage");

	AWeapon_RecommendSplashDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.RefireRate
// (Final, Defined, Iterator, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::RefireRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RefireRate");

	AWeapon_RefireRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.FocusOnLeader
// (Defined, PreOperator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// bool                           bLeaderFiring                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::FocusOnLeader(bool bLeaderFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.FocusOnLeader");

	AWeapon_FocusOnLeader_Params params;
	params.bLeaderFiring = bLeaderFiring;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.GetDamageRadius
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::GetDamageRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.GetDamageRadius");

	AWeapon_GetDamageRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.SplashDamage
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::SplashDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.SplashDamage");

	AWeapon_SplashDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.RecommendRangedAttack
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeapon::RecommendRangedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RecommendRangedAttack");

	AWeapon_RecommendRangedAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Weapon.RangedAttackTime
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeapon::RangedAttackTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Weapon.RangedAttackTime");

	AWeapon_RangedAttackTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.NProjectile.PreshotNotify
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Event)
// Parameters:
// class APawn*                   Attacker                       (Parm)

void ANProjectile::PreshotNotify(class APawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NProjectile.PreshotNotify");

	ANProjectile_PreshotNotify_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.NProjectile.ShotNotify
// (Defined, Latent, Simulated, Exec, Native, Event)

void ANProjectile::ShotNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.NProjectile.ShotNotify");

	ANProjectile_ShotNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AKVehicle::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.Tick");

	AKVehicle_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AKVehicle::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.Destroyed");

	AKVehicle_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.SpecialCalcView
// (Final, Defined, Latent, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  ViewActor                      (Parm, OutParm)
// struct FVector                 CameraLocation                 (Parm, OutParm)
// struct FRotator                CameraRotation                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AKVehicle::SpecialCalcView(class AActor** ViewActor, struct FVector* CameraLocation, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.SpecialCalcView");

	AKVehicle_SpecialCalcView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewActor != nullptr)
		*ViewActor = params.ViewActor;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;

	return params.ReturnValue;
}


// Function Engine.KVehicle.KDriverLeave
// (Defined, Latent, Net, NetReliable, Exec, Native)
// Parameters:
// bool                           bForceLeave                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AKVehicle::KDriverLeave(bool bForceLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.KDriverLeave");

	AKVehicle_KDriverLeave_Params params;
	params.bForceLeave = bForceLeave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.KVehicle.ClientKDriverLeave
// (Final, Iterator, Net, NetReliable, Exec, Native)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AKVehicle::ClientKDriverLeave(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.ClientKDriverLeave");

	AKVehicle_ClientKDriverLeave_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.KDriverEnter
// (Final, Defined, Net, Event)
// Parameters:
// class APawn*                   P                              (Parm)

void AKVehicle::KDriverEnter(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.KDriverEnter");

	AKVehicle_KDriverEnter_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.ClientKDriverEnter
// (Iterator, Net, Event)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AKVehicle::ClientKDriverEnter(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.ClientKDriverEnter");

	AKVehicle_ClientKDriverEnter_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.TryToDrive
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Operator)
// Parameters:
// class APawn*                   P                              (Parm)

void AKVehicle::TryToDrive(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.TryToDrive");

	AKVehicle_TryToDrive_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.VehicleCeaseFire
// (Defined, Net, NetReliable, Exec, Native)
// Parameters:
// bool                           bWasAltFire                    (Parm)

void AKVehicle::VehicleCeaseFire(bool bWasAltFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.VehicleCeaseFire");

	AKVehicle_VehicleCeaseFire_Params params;
	params.bWasAltFire = bWasAltFire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.VehicleFire
// (Final, Net, NetReliable, Exec, Native)
// Parameters:
// bool                           bWasAltFire                    (Parm)

void AKVehicle::VehicleFire(bool bWasAltFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.VehicleFire");

	AKVehicle_VehicleFire_Params params;
	params.bWasAltFire = bWasAltFire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.KVehicleUpdateParams
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event)

void AKVehicle::KVehicleUpdateParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.KVehicleUpdateParams");

	AKVehicle_KVehicleUpdateParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.VehicleStateReceived
// (Final, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event)

void AKVehicle::VehicleStateReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.VehicleStateReceived");

	AKVehicle_VehicleStateReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.EncroachedBy
// (Latent, Net, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AKVehicle::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.EncroachedBy");

	AKVehicle_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AKVehicle::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.TakeDamage");

	AKVehicle_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KVehicle.GraphData
// (Singular, Net, NetReliable, Operator)
// Parameters:
// struct FString                 DataName                       (Parm, NeedCtorLink)
// float                          DataValue                      (Parm)

void AKVehicle::GraphData(const struct FString& DataName, float DataValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicle.GraphData");

	AKVehicle_GraphData_Params params;
	params.DataName = DataName;
	params.DataValue = DataValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KActor.KImpact
// (Singular, NetReliable, Event)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 pos                            (Parm)
// struct FVector                 impactVel                      (Parm)
// struct FVector                 impactNorm                     (Parm)

void AKActor::KImpact(class AActor* Other, const struct FVector& pos, const struct FVector& impactVel, const struct FVector& impactNorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KActor.KImpact");

	AKActor_KImpact_Params params;
	params.Other = Other;
	params.pos = pos;
	params.impactVel = impactVel;
	params.impactNorm = impactNorm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KActor.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AKActor::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KActor.Trigger");

	AKActor_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KActor.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AKActor::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KActor.TakeDamage");

	AKActor_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KTire.TakeDamage
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// int                            Damage                         (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)

void AKTire::TakeDamage(int Damage, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KTire.TakeDamage");

	AKTire_TakeDamage_Params params;
	params.Damage = Damage;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KTire.KUpdateState
// (Final, Defined, Iterator, Singular, NetReliable, Event)
// Parameters:
// struct FKRigidBodyState        NewState                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AKTire::KUpdateState(struct FKRigidBodyState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KTire.KUpdateState");

	AKTire_KUpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewState != nullptr)
		*NewState = params.NewState;

	return params.ReturnValue;
}


// Function Engine.KConstraint.KForceExceed
// (Final, Singular, Net, Simulated, Exec, Native, Event)
// Parameters:
// float                          forceMag                       (Parm)

void AKConstraint::KForceExceed(float forceMag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KConstraint.KForceExceed");

	AKConstraint_KForceExceed_Params params;
	params.forceMag = forceMag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.KConstraint.KGetConstraintTorque
// (Final, Latent, Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 Torque                         (Parm, OutParm)

void AKConstraint::KGetConstraintTorque(struct FVector* Torque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KConstraint.KGetConstraintTorque");

	AKConstraint_KGetConstraintTorque_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Torque != nullptr)
		*Torque = params.Torque;
}


// Function Engine.KConstraint.KGetConstraintForce
// (Defined, Latent, Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 Force                          (Parm, OutParm)

void AKConstraint::KGetConstraintForce(struct FVector* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KConstraint.KGetConstraintForce");

	AKConstraint_KGetConstraintForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Force != nullptr)
		*Force = params.Force;
}


// Function Engine.KConstraint.KUpdateConstraintParams
// (NetReliable, Simulated, Native)

void AKConstraint::KUpdateConstraintParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KConstraint.KUpdateConstraintParams");

	AKConstraint_KUpdateConstraintParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogGameEnd
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 Reason                         (Parm, NeedCtorLink)

void AStatLog::LogGameEnd(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogGameEnd");

	AStatLog_LogGameEnd_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogGameStart
// (Defined, Iterator, Latent, NetReliable, Exec, Native, Event)

void AStatLog::LogGameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogGameStart");

	AStatLog_LogGameStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogPings
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native)

void AStatLog::LogPings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogPings");

	AStatLog_LogPings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogSpecialEvent
// (Final, Defined, Iterator, NetReliable, Exec, Native, Event)
// Parameters:
// struct FString                 EventType                      (Parm, NeedCtorLink)
// struct FString                 Arg1                           (OptionalParm, Parm, CoerceParm, NeedCtorLink)
// struct FString                 Arg2                           (OptionalParm, Parm, CoerceParm, NeedCtorLink)
// struct FString                 Arg3                           (OptionalParm, Parm, CoerceParm, NeedCtorLink)
// struct FString                 Arg4                           (OptionalParm, Parm, CoerceParm, NeedCtorLink)

void AStatLog::LogSpecialEvent(const struct FString& EventType, const struct FString& Arg1, const struct FString& Arg2, const struct FString& Arg3, const struct FString& Arg4)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogSpecialEvent");

	AStatLog_LogSpecialEvent_Params params;
	params.EventType = EventType;
	params.Arg1 = Arg1;
	params.Arg2 = Arg2;
	params.Arg3 = Arg3;
	params.Arg4 = Arg4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogItemDeactivate
// (Defined, Iterator, NetReliable, Exec, Native, Event)
// Parameters:
// class AInventory*              item                           (Parm)
// class APawn*                   Other                          (Parm)

void AStatLog::LogItemDeactivate(class AInventory* item, class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogItemDeactivate");

	AStatLog_LogItemDeactivate_Params params;
	params.item = item;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogItemActivate
// (Final, Iterator, NetReliable, Exec, Native, Event)
// Parameters:
// class AInventory*              item                           (Parm)
// class APawn*                   Other                          (Parm)

void AStatLog::LogItemActivate(class AInventory* item, class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogItemActivate");

	AStatLog_LogItemActivate_Params params;
	params.item = item;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogPickup
// (Iterator, NetReliable, Exec, Native, Event)
// Parameters:
// class APickup*                 item                           (Parm)
// class APawn*                   Other                          (Parm)

void AStatLog::LogPickup(class APickup* item, class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogPickup");

	AStatLog_LogPickup_Params params;
	params.item = item;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogTypingEvent
// (Defined, NetReliable, Exec, Native, Event)
// Parameters:
// bool                           bTyping                        (Parm)
// class AController*             Other                          (Parm)

void AStatLog::LogTypingEvent(bool bTyping, class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogTypingEvent");

	AStatLog_LogTypingEvent_Params params;
	params.bTyping = bTyping;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogTeamChange
// (Final, NetReliable, Exec, Native, Event)
// Parameters:
// class AController*             Other                          (Parm)

void AStatLog::LogTeamChange(class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogTeamChange");

	AStatLog_LogTeamChange_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogNameChange
// (NetReliable, Exec, Native, Event)
// Parameters:
// class AController*             Other                          (Parm)

void AStatLog::LogNameChange(class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogNameChange");

	AStatLog_LogNameChange_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogKill
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, Native, Event)
// Parameters:
// class APlayerReplicationInfo*  KillerPRI                      (Parm)
// class APlayerReplicationInfo*  VictimPRI                      (Parm)
// struct FString                 KillerWeaponName               (Parm, NeedCtorLink)
// struct FString                 VictimWeaponName               (Parm, NeedCtorLink)
// class UClass*                  DamageType                     (Parm)

void AStatLog::LogKill(class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* VictimPRI, const struct FString& KillerWeaponName, const struct FString& VictimWeaponName, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogKill");

	AStatLog_LogKill_Params params;
	params.KillerPRI = KillerPRI;
	params.VictimPRI = VictimPRI;
	params.KillerWeaponName = KillerWeaponName;
	params.VictimWeaponName = VictimWeaponName;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogPlayerDisconnect
// (Defined, Latent, PreOperator, Singular, Net, Exec, Native, Event)
// Parameters:
// class AController*             Player                         (Parm)

void AStatLog::LogPlayerDisconnect(class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogPlayerDisconnect");

	AStatLog_LogPlayerDisconnect_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogPlayerInfo
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Native)
// Parameters:
// class AController*             Player                         (Parm)

void AStatLog::LogPlayerInfo(class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogPlayerInfo");

	AStatLog_LogPlayerInfo_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogPlayerConnect
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Player                         (Parm)
// struct FString                 Checksum                       (OptionalParm, Parm, NeedCtorLink)

void AStatLog::LogPlayerConnect(class AController* Player, const struct FString& Checksum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogPlayerConnect");

	AStatLog_LogPlayerConnect_Params params;
	params.Player = Player;
	params.Checksum = Checksum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogMapParameters
// (Final, Latent, PreOperator, NetReliable, Simulated, Exec, Native)

void AStatLog::LogMapParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogMapParameters");

	AStatLog_LogMapParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.GetMapFileName
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLog::GetMapFileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetMapFileName");

	AStatLog_GetMapFileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLog.LogGameSpecial2
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 SpecialID                      (Parm, NeedCtorLink)
// struct FString                 SpecialParam                   (Parm, NeedCtorLink)
// struct FString                 SpecialParam2                  (Parm, NeedCtorLink)

void AStatLog::LogGameSpecial2(const struct FString& SpecialID, const struct FString& SpecialParam, const struct FString& SpecialParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogGameSpecial2");

	AStatLog_LogGameSpecial2_Params params;
	params.SpecialID = SpecialID;
	params.SpecialParam = SpecialParam;
	params.SpecialParam2 = SpecialParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogGameSpecial
// (Final, Latent, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 SpecialID                      (Parm, NeedCtorLink)
// struct FString                 SpecialParam                   (Parm, NeedCtorLink)

void AStatLog::LogGameSpecial(const struct FString& SpecialID, const struct FString& SpecialParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogGameSpecial");

	AStatLog_LogGameSpecial_Params params;
	params.SpecialID = SpecialID;
	params.SpecialParam = SpecialParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogServerInfo
// (Final, PreOperator, NetReliable, Simulated, Exec, Native)

void AStatLog::LogServerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogServerInfo");

	AStatLog_LogServerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogStandardInfo
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native)

void AStatLog::LogStandardInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogStandardInfo");

	AStatLog_LogStandardInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void AStatLog::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.Tick");

	AStatLog_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.GetLocalLogFileName
// (Latent, NetReliable, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLog::GetLocalLogFileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetLocalLogFileName");

	AStatLog_GetLocalLogFileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLog.GetTimeStamp
// (Defined, Iterator, Latent, PreOperator, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLog::GetTimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetTimeStamp");

	AStatLog_GetTimeStamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLog.GetShortAbsoluteTime
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLog::GetShortAbsoluteTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetShortAbsoluteTime");

	AStatLog_GetShortAbsoluteTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLog.GetAbsoluteTime
// (Final, Defined, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLog::GetAbsoluteTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetAbsoluteTime");

	AStatLog_GetAbsoluteTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLog.GetGMTRef
// (Defined, Latent, Singular, Net, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLog::GetGMTRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetGMTRef");

	AStatLog_GetGMTRef_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLog.GetPlayerChecksum
// (Latent, Singular, Net, Exec, Native, Event)
// Parameters:
// class APlayerController*       P                              (Parm)
// struct FString                 Checksum                       (Parm, OutParm, NeedCtorLink)

void AStatLog::GetPlayerChecksum(class APlayerController* P, struct FString* Checksum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GetPlayerChecksum");

	AStatLog_GetPlayerChecksum_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Checksum != nullptr)
		*Checksum = params.Checksum;
}


// Function Engine.StatLog.LogMutator
// (Final, Defined, Iterator, Singular, Net, Exec, Native, Event)
// Parameters:
// class AMutator*                M                              (Parm)

void AStatLog::LogMutator(class AMutator* M)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogMutator");

	AStatLog_LogMutator_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.InitialCheck
// (Defined, Iterator, Singular, Net, Exec, Native, Event)
// Parameters:
// class AGameInfo*               Game                           (Parm)

void AStatLog::InitialCheck(class AGameInfo* Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.InitialCheck");

	AStatLog_InitialCheck_Params params;
	params.Game = Game;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.BrowseRelativeLocalURL
// (Final, Iterator, Singular, Net, Exec, Native, Event)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void AStatLog::BrowseRelativeLocalURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.BrowseRelativeLocalURL");

	AStatLog_BrowseRelativeLocalURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.ExecuteWorldLogBatcher
// (Iterator, Singular, Net, Exec, Native, Event)

void AStatLog::ExecuteWorldLogBatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.ExecuteWorldLogBatcher");

	AStatLog_ExecuteWorldLogBatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.BatchLocal
// (Final, Defined, Singular, Net, Exec, Native, Event)

void AStatLog::BatchLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.BatchLocal");

	AStatLog_BatchLocal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.ExecuteSilentLogBatcher
// (Defined, Singular, Net, Exec, Native, Event)

void AStatLog::ExecuteSilentLogBatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.ExecuteSilentLogBatcher");

	AStatLog_ExecuteSilentLogBatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.ExecuteLocalLogBatcher
// (Final, Singular, Net, Exec, Native, Event)

void AStatLog::ExecuteLocalLogBatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.ExecuteLocalLogBatcher");

	AStatLog_ExecuteLocalLogBatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogWorldEventString
// (Latent, PreOperator, Exec, Native)
// Parameters:
// struct FString                 EventString                    (Parm, NeedCtorLink)

void AStatLog::LogWorldEventString(const struct FString& EventString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogWorldEventString");

	AStatLog_LogWorldEventString_Params params;
	params.EventString = EventString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.LogEventString
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Native)
// Parameters:
// struct FString                 EventString                    (Parm, NeedCtorLink)

void AStatLog::LogEventString(const struct FString& EventString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.LogEventString");

	AStatLog_LogEventString_Params params;
	params.EventString = EventString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.FlushLog
// (Defined, Iterator, Singular, Simulated, Exec, Native)

void AStatLog::FlushLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.FlushLog");

	AStatLog_FlushLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.StopLog
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native)

void AStatLog::StopLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.StopLog");

	AStatLog_StopLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.StartLog
// (Latent, Singular, Simulated, Exec, Native)

void AStatLog::StartLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.StartLog");

	AStatLog_StartLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.GenerateLogs
// (Latent, PreOperator, Net, Exec, Native, Event)
// Parameters:
// bool                           bLogLocal                      (Parm)
// bool                           bLogWorld                      (Parm)

void AStatLog::GenerateLogs(bool bLogLocal, bool bLogWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.GenerateLogs");

	AStatLog_GenerateLogs_Params params;
	params.bLogLocal = bLogLocal;
	params.bLogWorld = bLogWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AStatLog::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.Timer");

	AStatLog_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AStatLog::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.Destroyed");

	AStatLog_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLog.BeginPlay
// (Iterator, Singular, Net, Simulated)

void AStatLog::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLog.BeginPlay");

	AStatLog_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.LogGameEnd
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 Reason                         (Parm, NeedCtorLink)

void AStatLogFile::LogGameEnd(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.LogGameEnd");

	AStatLogFile_LogGameEnd_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.LogPlayerConnect
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// class AController*             Player                         (Parm)
// struct FString                 Checksum                       (OptionalParm, Parm, NeedCtorLink)

void AStatLogFile::LogPlayerConnect(class AController* Player, const struct FString& Checksum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.LogPlayerConnect");

	AStatLogFile_LogPlayerConnect_Params params;
	params.Player = Player;
	params.Checksum = Checksum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.GetLocalLogFileName
// (Latent, NetReliable, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AStatLogFile::GetLocalLogFileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.GetLocalLogFileName");

	AStatLogFile_GetLocalLogFileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StatLogFile.LogWorldEventString
// (Latent, PreOperator, Exec, Native)
// Parameters:
// struct FString                 EventString                    (Parm, NeedCtorLink)

void AStatLogFile::LogWorldEventString(const struct FString& EventString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.LogWorldEventString");

	AStatLogFile_LogWorldEventString_Params params;
	params.EventString = EventString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.LogEventString
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Native)
// Parameters:
// struct FString                 EventString                    (Parm, NeedCtorLink)

void AStatLogFile::LogEventString(const struct FString& EventString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.LogEventString");

	AStatLogFile_LogEventString_Params params;
	params.EventString = EventString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.FlushLog
// (Defined, Iterator, Singular, Simulated, Exec, Native)

void AStatLogFile::FlushLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.FlushLog");

	AStatLogFile_FlushLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.StopLog
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native)

void AStatLogFile::StopLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.StopLog");

	AStatLogFile_StopLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.StartLog
// (Latent, Singular, Simulated, Exec, Native)

void AStatLogFile::StartLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.StartLog");

	AStatLogFile_StartLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.FileLog
// (Latent, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FString                 EventString                    (Parm, NeedCtorLink)

void AStatLogFile::FileLog(const struct FString& EventString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.FileLog");

	AStatLogFile_FileLog_Params params;
	params.EventString = EventString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.FileFlush
// (Final, Defined, Iterator, PreOperator, NetReliable, Exec, Native, Event)

void AStatLogFile::FileFlush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.FileFlush");

	AStatLogFile_FileFlush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.GetChecksum
// (Defined, Iterator, PreOperator, NetReliable, Exec, Native, Event)
// Parameters:
// struct FString                 Checksum                       (Parm, OutParm, NeedCtorLink)

void AStatLogFile::GetChecksum(struct FString* Checksum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.GetChecksum");

	AStatLogFile_GetChecksum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Checksum != nullptr)
		*Checksum = params.Checksum;
}


// Function Engine.StatLogFile.Watermark
// (Final, Iterator, PreOperator, NetReliable, Exec, Native, Event)
// Parameters:
// struct FString                 EventString                    (Parm, NeedCtorLink)

void AStatLogFile::Watermark(const struct FString& EventString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.Watermark");

	AStatLogFile_Watermark_Params params;
	params.EventString = EventString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.CloseLog
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native)

void AStatLogFile::CloseLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.CloseLog");

	AStatLogFile_CloseLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StatLogFile.OpenLog
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native)

void AStatLogFile::OpenLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StatLogFile.OpenLog");

	AStatLogFile_OpenLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.GameEvent
// (PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 GEvent                         (Parm, NeedCtorLink)
// struct FString                 Desc                           (Parm, NeedCtorLink)
// class APlayerReplicationInfo*  Who                            (Parm)

void AGameStats::GameEvent(const struct FString& GEvent, const struct FString& Desc, class APlayerReplicationInfo* Who)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.GameEvent");

	AGameStats_GameEvent_Params params;
	params.GEvent = GEvent;
	params.Desc = Desc;
	params.Who = Who;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.SpecialEvent
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Who                            (Parm)
// struct FString                 Desc                           (Parm, NeedCtorLink)

void AGameStats::SpecialEvent(class APlayerReplicationInfo* Who, const struct FString& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.SpecialEvent");

	AGameStats_SpecialEvent_Params params;
	params.Who = Who;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.KillEvent
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 KillType                       (Parm, NeedCtorLink)
// class APlayerReplicationInfo*  Killer                         (Parm)
// class APlayerReplicationInfo*  Victim                         (Parm)
// class UClass*                  Damage                         (Parm)

void AGameStats::KillEvent(const struct FString& KillType, class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim, class UClass* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.KillEvent");

	AGameStats_KillEvent_Params params;
	params.KillType = KillType;
	params.Killer = Killer;
	params.Victim = Victim;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.TeamScoreEvent
// (Defined, PreOperator, Singular, NetReliable, Exec, Native, Event)
// Parameters:
// int                            Team                           (Parm)
// float                          Points                         (Parm)
// struct FString                 Desc                           (Parm, NeedCtorLink)

void AGameStats::TeamScoreEvent(int Team, float Points, const struct FString& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.TeamScoreEvent");

	AGameStats_TeamScoreEvent_Params params;
	params.Team = Team;
	params.Points = Points;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.ScoreEvent
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Who                            (Parm)
// float                          Points                         (Parm)
// struct FString                 Desc                           (Parm, NeedCtorLink)

void AGameStats::ScoreEvent(class APlayerReplicationInfo* Who, float Points, const struct FString& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.ScoreEvent");

	AGameStats_ScoreEvent_Params params;
	params.Who = Who;
	params.Points = Points;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.DisconnectEvent
// (Final, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Who                            (Parm)

void AGameStats::DisconnectEvent(class APlayerReplicationInfo* Who)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.DisconnectEvent");

	AGameStats_DisconnectEvent_Params params;
	params.Who = Who;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.ConnectEvent
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Who                            (Parm)

void AGameStats::ConnectEvent(class APlayerReplicationInfo* Who)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.ConnectEvent");

	AGameStats_ConnectEvent_Params params;
	params.Who = Who;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.EndGame
// (Final, Defined, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// struct FString                 Reason                         (Parm, NeedCtorLink)

void AGameStats::EndGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.EndGame");

	AGameStats_EndGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.StartGame
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)

void AGameStats::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.StartGame");

	AGameStats_StartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.ServerInfo
// (Final, Singular, Net, Event)

void AGameStats::ServerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.ServerInfo");

	AGameStats_ServerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.NewGame
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native)

void AGameStats::NewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.NewGame");

	AGameStats_NewGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.MapName
// (Final, Iterator, Latent, NetReliable, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::MapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.MapName");

	AGameStats_MapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameStats.TimeZone
// (Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::TimeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.TimeZone");

	AGameStats_TimeZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameStats.FullTimeDate
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::FullTimeDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.FullTimeDate");

	AGameStats_FullTimeDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameStats.Header
// (Iterator, Latent, Net, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::Header()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.Header");

	AGameStats_Header_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameStats.TimeStamp
// (Defined, Latent, Singular, Net, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::TimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.TimeStamp");

	AGameStats_TimeStamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameStats.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AGameStats::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.Destroyed");

	AGameStats_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AGameStats::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.PostBeginPlay");

	AGameStats_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.Logf
// (Latent, Net, Simulated, Native)
// Parameters:
// struct FString                 LogString                      (Parm, NeedCtorLink)

void AGameStats::Logf(const struct FString& LogString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.Logf");

	AGameStats_Logf_Params params;
	params.LogString = LogString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.Shutdown
// (Net, NetReliable, Simulated, Exec, Native)

void AGameStats::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.Shutdown");

	AGameStats_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void AGameStats::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.Init");

	AGameStats_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameStats.GetMapFileName
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::GetMapFileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.GetMapFileName");

	AGameStats_GetMapFileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameStats.GetStatsIdentifier
// (Defined, Latent, PreOperator, NetReliable, Exec, Native, Event)
// Parameters:
// class AController*             C                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameStats::GetStatsIdentifier(class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStats.GetStatsIdentifier");

	AGameStats_GetStatsIdentifier_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.FileLog.Destroyed
// (Final, Iterator, Latent, Singular, Simulated)

void AFileLog::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FileLog.Destroyed");

	AFileLog_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FileLog.Logf
// (Latent, Net, Simulated, Native)
// Parameters:
// struct FString                 LogString                      (Parm, NeedCtorLink)

void AFileLog::Logf(const struct FString& LogString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FileLog.Logf");

	AFileLog_Logf_Params params;
	params.LogString = LogString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FileLog.CloseLog
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native)

void AFileLog::CloseLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FileLog.CloseLog");

	AFileLog_CloseLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FileLog.OpenLog
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 FName                          (Parm, NeedCtorLink)

void AFileLog::OpenLog(const struct FString& FName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FileLog.OpenLog");

	AFileLog_OpenLog_Params params;
	params.FName = FName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LocalMessage.GetLifeTime
// (Final, PreOperator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// int                            Switch                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ALocalMessage::GetLifeTime(int Switch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetLifeTime");

	ALocalMessage_GetLifeTime_Params params;
	params.Switch = Switch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.GetFontSize
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// int                            Switch                         (Parm)
// class APlayerReplicationInfo*  RelatedPRI1                    (Parm)
// class APlayerReplicationInfo*  RelatedPRI2                    (Parm)
// class APlayerReplicationInfo*  LocalPlayer                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ALocalMessage::GetFontSize(int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetFontSize");

	ALocalMessage_GetFontSize_Params params;
	params.Switch = Switch;
	params.RelatedPRI1 = RelatedPRI1;
	params.RelatedPRI2 = RelatedPRI2;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.GetOffset
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// int                            Switch                         (Parm)
// float                          YL                             (Parm)
// float                          ClipY                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ALocalMessage::GetOffset(int Switch, float YL, float ClipY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetOffset");

	ALocalMessage_GetOffset_Params params;
	params.Switch = Switch;
	params.YL = YL;
	params.ClipY = ClipY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.GetColor
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ALocalMessage::GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetColor");

	ALocalMessage_GetColor_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.GetConsoleColor
// (Defined, Iterator, PreOperator, Singular, Event)
// Parameters:
// class APlayerReplicationInfo*  RelatedPRI_1                   (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor ALocalMessage::GetConsoleColor(class APlayerReplicationInfo* RelatedPRI_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetConsoleColor");

	ALocalMessage_GetConsoleColor_Params params;
	params.RelatedPRI_1 = RelatedPRI_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.ClientReceive
// (Final, Defined, PreOperator, Singular, Event)
// Parameters:
// class APlayerController*       P                              (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void ALocalMessage::ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.ClientReceive");

	ALocalMessage_ClientReceive_Params params;
	params.P = P;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.LocalMessage.AssembleString
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// class AHUD*                    myHUD                          (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// struct FString                 MessageString                  (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ALocalMessage::AssembleString(class AHUD* myHUD, int Switch, class APlayerReplicationInfo* RelatedPRI_1, const struct FString& MessageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.AssembleString");

	ALocalMessage_AssembleString_Params params;
	params.myHUD = myHUD;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.MessageString = MessageString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ALocalMessage::GetString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetString");

	ALocalMessage_GetString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.GetRelatedString
// (Defined, Iterator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ALocalMessage::GetRelatedString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.GetRelatedString");

	ALocalMessage_GetRelatedString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.LocalMessage.RenderComplexMessage
// (Iterator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          XL                             (Parm, OutParm)
// float                          YL                             (Parm, OutParm)
// struct FString                 MessageString                  (OptionalParm, Parm, NeedCtorLink)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void ALocalMessage::RenderComplexMessage(class UCanvas* Canvas, const struct FString& MessageString, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject, float* XL, float* YL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.LocalMessage.RenderComplexMessage");

	ALocalMessage_RenderComplexMessage_Params params;
	params.Canvas = Canvas;
	params.MessageString = MessageString;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XL != nullptr)
		*XL = params.XL;
	if (YL != nullptr)
		*YL = params.YL;
}


// Function Engine.ObjectPool.Shrink
// (Defined, Iterator, Simulated, Operator)

void UObjectPool::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ObjectPool.Shrink");

	UObjectPool_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ObjectPool.FreeObject
// (Defined, Iterator, Latent, Net, Event)
// Parameters:
// class UObject*                 Obj                            (Parm)

void UObjectPool::FreeObject(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ObjectPool.FreeObject");

	UObjectPool_FreeObject_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ObjectPool.AllocateObject
// (Final, Iterator, Latent, Net, Event)
// Parameters:
// class UClass*                  ObjectClass                    (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObjectPool::AllocateObject(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ObjectPool.AllocateObject");

	UObjectPool_AllocateObject_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.VoicePack.PickRandomTauntFor
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bNoMature                      (Parm)
// bool                           bNoHumanOnly                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AVoicePack::PickRandomTauntFor(class AController* C, bool bNoMature, bool bNoHumanOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VoicePack.PickRandomTauntFor");

	AVoicePack_PickRandomTauntFor_Params params;
	params.C = C;
	params.bNoMature = bNoMature;
	params.bNoHumanOnly = bNoHumanOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.VoicePack.GetMessageIndex
// (Iterator, Latent, Singular, NetReliable, Event)
// Parameters:
// struct FName                   PhraseName                     (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AVoicePack::GetMessageIndex(const struct FName& PhraseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VoicePack.GetMessageIndex");

	AVoicePack_GetMessageIndex_Params params;
	params.PhraseName = PhraseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.VoicePack.PlayerSpeech
// (Final, Iterator, Latent, Singular, NetReliable, Event)
// Parameters:
// struct FName                   type                           (Parm)
// int                            Index                          (Parm)
// struct FString                 Callsign                       (Parm, NeedCtorLink)
// class AActor*                  PackOwner                      (Parm)

void AVoicePack::PlayerSpeech(const struct FName& type, int Index, const struct FString& Callsign, class AActor* PackOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VoicePack.PlayerSpeech");

	AVoicePack_PlayerSpeech_Params params;
	params.type = type;
	params.Index = Index;
	params.Callsign = Callsign;
	params.PackOwner = PackOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VoicePack.ClientInitialize
// (Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class APlayerReplicationInfo*  Sender                         (Parm)
// class APlayerReplicationInfo*  Recipient                      (Parm)
// struct FName                   messagetype                    (Parm)
// unsigned char                  messageIndex                   (Parm)

void AVoicePack::ClientInitialize(class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, const struct FName& messagetype, unsigned char messageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VoicePack.ClientInitialize");

	AVoicePack_ClientInitialize_Params params;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.messagetype = messagetype;
	params.messageIndex = messageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScoreBoard.SortPRIArray
// (Final, NetReliable, Event)

void AScoreBoard::SortPRIArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.SortPRIArray");

	AScoreBoard_SortPRIArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScoreBoard.InOrder
// (NetReliable, Event)
// Parameters:
// class APlayerReplicationInfo*  P1                             (Parm)
// class APlayerReplicationInfo*  P2                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AScoreBoard::InOrder(class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.InOrder");

	AScoreBoard_InOrder_Params params;
	params.P1 = P1;
	params.P2 = P2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.UpdateScoreBoard
// (Defined, Latent, PreOperator, Singular, Net, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void AScoreBoard::UpdateScoreBoard(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.UpdateScoreBoard");

	AScoreBoard_UpdateScoreBoard_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScoreBoard.FormatTime
// (Iterator, Latent, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// int                            Seconds                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AScoreBoard::FormatTime(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.FormatTime");

	AScoreBoard_FormatTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.UpdateGRI
// (Iterator, PreOperator, Singular, Net, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AScoreBoard::UpdateGRI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.UpdateGRI");

	AScoreBoard_UpdateGRI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.DrawScoreboard
// (Final, Iterator, Singular, Net, Event)
// Parameters:
// class UCanvas*                 C                              (Parm)

void AScoreBoard::DrawScoreboard(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.DrawScoreboard");

	AScoreBoard_DrawScoreboard_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScoreBoard.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void AScoreBoard::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.Init");

	AScoreBoard_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScoreBoard.InitTitle
// (Final, Latent, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AScoreBoard::InitTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.InitTitle");

	AScoreBoard_InitTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.InitGRI
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, Native)

void AScoreBoard::InitGRI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.InitGRI");

	AScoreBoard_InitGRI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ScoreBoard.GetSmallFontFor
// (Defined, Iterator, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// int                            ScreenWidth                    (Parm)
// int                            offset                         (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AScoreBoard::GetSmallFontFor(int ScreenWidth, int offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.GetSmallFontFor");

	AScoreBoard_GetSmallFontFor_Params params;
	params.ScreenWidth = ScreenWidth;
	params.offset = offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.HaveHalfFont
// (Final, Iterator, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// int                            offset                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AScoreBoard::HaveHalfFont(class UCanvas* Canvas, int offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.HaveHalfFont");

	AScoreBoard_HaveHalfFont_Params params;
	params.Canvas = Canvas;
	params.offset = offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.GetSmallerFontFor
// (Iterator, PreOperator, Simulated, Exec, Native, Event)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// int                            offset                         (Parm)
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* AScoreBoard::GetSmallerFontFor(class UCanvas* Canvas, int offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.GetSmallerFontFor");

	AScoreBoard_GetSmallerFontFor_Params params;
	params.Canvas = Canvas;
	params.offset = offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ScoreBoard.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AScoreBoard::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ScoreBoard.PostBeginPlay");

	AScoreBoard_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VolumeTimer.Timer
// (Iterator, PreOperator, Singular, Simulated)

void AVolumeTimer::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VolumeTimer.Timer");

	AVolumeTimer_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.VolumeTimer.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AVolumeTimer::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.VolumeTimer.PostBeginPlay");

	AVolumeTimer_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameMessage.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameMessage::GetString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMessage.GetString");

	AGameMessage_GetString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MapList.GetNextMap
// (Defined, Singular, Net, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AMapList::GetNextMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MapList.GetNextMap");

	AMapList_GetNextMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AccessControl.CheckIPPolicy
// (Latent, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// struct FString                 Address                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAccessControl::CheckIPPolicy(const struct FString& Address)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.CheckIPPolicy");

	AAccessControl_CheckIPPolicy_Params params;
	params.Address = Address;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AccessControl.PreLogin
// (Singular, NetReliable, Exec, Native)
// Parameters:
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Address                        (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, OutParm, NeedCtorLink)
// struct FString                 FailCode                       (Parm, OutParm, NeedCtorLink)
// bool                           bSpectator                     (Parm)

void AAccessControl::PreLogin(const struct FString& Options, const struct FString& Address, bool bSpectator, struct FString* Error, struct FString* FailCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.PreLogin");

	AAccessControl_PreLogin_Params params;
	params.Options = Options;
	params.Address = Address;
	params.bSpectator = bSpectator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error != nullptr)
		*Error = params.Error;
	if (FailCode != nullptr)
		*FailCode = params.FailCode;
}


// Function Engine.AccessControl.AdminLogin
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// class APlayerController*       P                              (Parm)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAccessControl::AdminLogin(class APlayerController* P, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.AdminLogin");

	AAccessControl_AdminLogin_Params params;
	params.P = P;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AccessControl.KickBan
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AAccessControl::KickBan(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.KickBan");

	AAccessControl_KickBan_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AccessControl.Kick
// (Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AAccessControl::Kick(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.Kick");

	AAccessControl_Kick_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AccessControl.RequiresPassword
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AAccessControl::RequiresPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.RequiresPassword");

	AAccessControl_RequiresPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AccessControl.SetGamePassword
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FString                 P                              (Parm, NeedCtorLink)

void AAccessControl::SetGamePassword(const struct FString& P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.SetGamePassword");

	AAccessControl_SetGamePassword_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AccessControl.SetAdminPassword
// (Final, Defined, Net, NetReliable, Exec, Native, Event)
// Parameters:
// struct FString                 P                              (Parm, NeedCtorLink)

void AAccessControl::SetAdminPassword(const struct FString& P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AccessControl.SetAdminPassword");

	AAccessControl_SetAdminPassword_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BroadcastHandler.AllowBroadcastLocalized
// (Final, Defined, Iterator, Latent, Event)
// Parameters:
// class AActor*                  Sender                         (Parm)
// class UClass*                  Message                        (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void ABroadcastHandler::AllowBroadcastLocalized(class AActor* Sender, class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.AllowBroadcastLocalized");

	ABroadcastHandler_AllowBroadcastLocalized_Params params;
	params.Sender = Sender;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BroadcastHandler.BroadcastTeam
// (Latent, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class AController*             Sender                         (Parm)
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void ABroadcastHandler::BroadcastTeam(class AController* Sender, const struct FString& Msg, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.BroadcastTeam");

	ABroadcastHandler_BroadcastTeam_Params params;
	params.Sender = Sender;
	params.Msg = Msg;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BroadcastHandler.Broadcast
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class AActor*                  Sender                         (Parm)
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void ABroadcastHandler::Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.Broadcast");

	ABroadcastHandler_Broadcast_Params params;
	params.Sender = Sender;
	params.Msg = Msg;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BroadcastHandler.BroadcastLocalized
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// class AActor*                  Sender                         (Parm)
// class APlayerController*       Receiver                       (Parm)
// class UClass*                  Message                        (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void ABroadcastHandler::BroadcastLocalized(class AActor* Sender, class APlayerController* Receiver, class UClass* Message, int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.BroadcastLocalized");

	ABroadcastHandler_BroadcastLocalized_Params params;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BroadcastHandler.BroadcastText
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  SenderPRI                      (Parm)
// class APlayerController*       Receiver                       (Parm)
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// struct FName                   type                           (OptionalParm, Parm)

void ABroadcastHandler::BroadcastText(class APlayerReplicationInfo* SenderPRI, class APlayerController* Receiver, const struct FString& Msg, const struct FName& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.BroadcastText");

	ABroadcastHandler_BroadcastText_Params params;
	params.SenderPRI = SenderPRI;
	params.Receiver = Receiver;
	params.Msg = Msg;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.BroadcastHandler.AllowsBroadcast
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native)
// Parameters:
// class AActor*                  broadcaster                    (Parm)
// int                            Len                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABroadcastHandler::AllowsBroadcast(class AActor* broadcaster, int Len)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.AllowsBroadcast");

	ABroadcastHandler_AllowsBroadcast_Params params;
	params.broadcaster = broadcaster;
	params.Len = Len;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.BroadcastHandler.UpdateSentText
// (Iterator, Latent, Event)

void ABroadcastHandler::UpdateSentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BroadcastHandler.UpdateSentText");

	ABroadcastHandler_UpdateSentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameRules.NetDamage
// (Iterator, PreOperator, Net, Event)
// Parameters:
// int                            OriginalDamage                 (Parm)
// int                            Damage                         (Parm)
// class APawn*                   injured                        (Parm)
// class APawn*                   instigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGameRules::NetDamage(int OriginalDamage, int Damage, class APawn* injured, class APawn* instigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.NetDamage");

	AGameRules_NetDamage_Params params;
	params.OriginalDamage = OriginalDamage;
	params.Damage = Damage;
	params.injured = injured;
	params.instigatedBy = instigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.CriticalPlayer
// (Defined, PreOperator, Net, Event)
// Parameters:
// class AController*             Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameRules::CriticalPlayer(class AController* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.CriticalPlayer");

	AGameRules_CriticalPlayer_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.ScoreKill
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Killed                         (Parm)

void AGameRules::ScoreKill(class AController* Killer, class AController* Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.ScoreKill");

	AGameRules_ScoreKill_Params params;
	params.Killer = Killer;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameRules.ScoreObjective
// (Singular, Net, Exec, Native)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// int                            Score                          (Parm)

void AGameRules::ScoreObjective(class APlayerReplicationInfo* Scorer, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.ScoreObjective");

	AGameRules_ScoreObjective_Params params;
	params.Scorer = Scorer;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.GameRules.PreventDeath
// (Defined, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Killed                         (Parm)
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameRules::PreventDeath(class APawn* Killed, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.PreventDeath");

	AGameRules_PreventDeath_Params params;
	params.Killed = Killed;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.OverridePickupQuery
// (Latent, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// class APickup*                 item                           (Parm)
// unsigned char                  bAllowPickup                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameRules::OverridePickupQuery(class APawn* Other, class APickup* item, unsigned char* bAllowPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.OverridePickupQuery");

	AGameRules_OverridePickupQuery_Params params;
	params.Other = Other;
	params.item = item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowPickup != nullptr)
		*bAllowPickup = params.bAllowPickup;

	return params.ReturnValue;
}


// Function Engine.GameRules.CheckScore
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native)
// Parameters:
// class APlayerReplicationInfo*  Scorer                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameRules::CheckScore(class APlayerReplicationInfo* Scorer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.CheckScore");

	AGameRules_CheckScore_Params params;
	params.Scorer = Scorer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.CheckEndGame
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// class APlayerReplicationInfo*  Winner                         (Parm)
// struct FString                 Reason                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameRules::CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.CheckEndGame");

	AGameRules_CheckEndGame_Params params;
	params.Winner = Winner;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.HandleRestartGame
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameRules::HandleRestartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.HandleRestartGame");

	AGameRules_HandleRestartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.GetRules
// (PreOperator, Net, Event)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameRules::GetRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.GetRules");

	AGameRules_GetRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.FindPlayerStart
// (PreOperator, NetReliable, Simulated, Native)
// Parameters:
// class AController*             Player                         (Parm)
// unsigned char                  InTeam                         (OptionalParm, Parm)
// struct FString                 incomingName                   (OptionalParm, Parm, NeedCtorLink)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AGameRules::FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& incomingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.FindPlayerStart");

	AGameRules_FindPlayerStart_Params params;
	params.Player = Player;
	params.InTeam = InTeam;
	params.incomingName = incomingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.GameRules.AddGameRules
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// class AGameRules*              GR                             (Parm)

void AGameRules::AddGameRules(class AGameRules* GR)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameRules.AddGameRules");

	AGameRules_AddGameRules_Params params;
	params.GR = GR;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MessagingSpectator.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AMessagingSpectator::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MessagingSpectator.PostBeginPlay");

	AMessagingSpectator_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WeaponPickup.GetRespawnTime
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeaponPickup::GetRespawnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.GetRespawnTime");

	AWeaponPickup_GetRespawnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.WeaponPickup.BotDesireability
// (Final, Defined, Latent, PreOperator, Net, Simulated)
// Parameters:
// class APawn*                   Bot                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeaponPickup::BotDesireability(class APawn* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.BotDesireability");

	AWeaponPickup_BotDesireability_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.WeaponPickup.DetourWeight
// (Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// class APawn*                   Other                          (Parm)
// float                          PathWeight                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWeaponPickup::DetourWeight(class APawn* Other, float PathWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.DetourWeight");

	AWeaponPickup_DetourWeight_Params params;
	params.Other = Other;
	params.PathWeight = PathWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.WeaponPickup.AllowRepeatPickup
// (Final, PreOperator, Net, Simulated, Exec, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWeaponPickup::AllowRepeatPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.AllowRepeatPickup");

	AWeaponPickup_AllowRepeatPickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.WeaponPickup.StartSleeping
// (Iterator, PreOperator, Singular, Exec, Native)

void AWeaponPickup::StartSleeping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.StartSleeping");

	AWeaponPickup_StartSleeping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WeaponPickup.SetWeaponStay
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Native)

void AWeaponPickup::SetWeaponStay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.SetWeaponStay");

	AWeaponPickup_SetWeaponStay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.WeaponPickup.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AWeaponPickup::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.WeaponPickup.PostBeginPlay");

	AWeaponPickup_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.FailedConnect.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_1                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AFailedConnect::GetString(int Switch, class APlayerReplicationInfo* RelatedPRI_1, class APlayerReplicationInfo* RelatedPRI_2, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FailedConnect.GetString");

	AFailedConnect_GetString_Params params;
	params.Switch = Switch;
	params.RelatedPRI_1 = RelatedPRI_1;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.FailedConnect.GetFailSwitch
// (Final, Defined, Latent, Net, Event)
// Parameters:
// struct FString                 FailString                     (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AFailedConnect::GetFailSwitch(const struct FString& FailString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.FailedConnect.GetFailSwitch");

	AFailedConnect_GetFailSwitch_Params params;
	params.FailString = FailString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.KVehicleFactory.Trigger
// (Defined, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)
// class APawn*                   EventInstigator                (Parm)

void AKVehicleFactory::Trigger(class AActor* Other, class APawn* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KVehicleFactory.Trigger");

	AKVehicleFactory_Trigger_Params params;
	params.Other = Other;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Fragment.RandSpin
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// float                          spinRate                       (Parm)

void AFragment::RandSpin(float spinRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Fragment.RandSpin");

	AFragment_RandSpin_Params params;
	params.spinRate = spinRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Fragment.HitWall
// (Final, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  HitWall                        (Parm)

void AFragment::HitWall(const struct FVector& HitNormal, class AActor* HitWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Fragment.HitWall");

	AFragment_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.HitWall = HitWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Fragment.CalcVelocity
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native)
// Parameters:
// struct FVector                 Momentum                       (Parm)

void AFragment::CalcVelocity(const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Fragment.CalcVelocity");

	AFragment_CalcVelocity_Params params;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Fragment.CanSplash
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AFragment::CanSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Fragment.CanSplash");

	AFragment_CanSplash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Admin.Switch
// (Latent, PreOperator, Singular, Net, Exec)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void AAdmin::Switch(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.Switch");

	AAdmin_Switch_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.RestartMap
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Event)

void AAdmin::RestartMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.RestartMap");

	AAdmin_RestartMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.PlayerList
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Event)

void AAdmin::PlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.PlayerList");

	AAdmin_PlayerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.Kick
// (Singular, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AAdmin::Kick(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.Kick");

	AAdmin_Kick_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.Say
// (Final, Latent, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 Msg                            (Parm, NeedCtorLink)

void AAdmin::Say(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.Say");

	AAdmin_Say_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.KickBan
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AAdmin::KickBan(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.KickBan");

	AAdmin_KickBan_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.Admin
// (Iterator, Exec, Native)
// Parameters:
// struct FString                 CommandLine                    (Parm, NeedCtorLink)

void AAdmin::Admin(const struct FString& CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.Admin");

	AAdmin_Admin_Params params;
	params.CommandLine = CommandLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Admin.PostBeginPlay
// (Final, Iterator, Singular, Net, Simulated)

void AAdmin::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Admin.PostBeginPlay");

	AAdmin_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneTrigger.UnTouch
// (Defined, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AZoneTrigger::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneTrigger.UnTouch");

	AZoneTrigger_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ZoneTrigger.Touch
// (Final, Latent, PreOperator, Singular, Simulated)
// Parameters:
// class AActor*                  Other                          (Parm)

void AZoneTrigger::Touch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ZoneTrigger.Touch");

	AZoneTrigger_Touch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Core.Object.EndState
struct UObject_EndState_Params
{
};

// Function Core.Object.BeginState
struct UObject_BeginState_Params
{
};

// Function Core.Object.GetParamString
struct UObject_GetParamString_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	struct FString                                     a_Result;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetParamFloat
struct UObject_GetParamFloat_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	float                                              a_Result;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetParamINT64
struct UObject_GetParamINT64_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	struct FINT64                                      a_Result;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetParamInt
struct UObject_GetParamInt_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	int                                                a_Result;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddParamString
struct UObject_AddParamString_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	struct FString                                     a_Value;                                                  // (Parm, NeedCtorLink)
};

// Function Core.Object.AddParamFloat
struct UObject_AddParamFloat_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	float                                              a_Value;                                                  // (Parm)
};

// Function Core.Object.AddParamINT64
struct UObject_AddParamINT64_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	struct FINT64                                      a_Value;                                                  // (Parm)
};

// Function Core.Object.AddParamInt
struct UObject_AddParamInt_Params
{
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
	struct FString                                     a_Key;                                                    // (Parm, NeedCtorLink)
	int                                                a_Value;                                                  // (Parm)
};

// Function Core.Object.RandRange
struct UObject_RandRange_Params
{
	float                                              Min;                                                      // (Parm)
	float                                              Max;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ResetConfig
struct UObject_ResetConfig_Params
{
};

// Function Core.Object.StaticSaveConfig
struct UObject_StaticSaveConfig_Params
{
};

// Function Core.Object.SaveConfig
struct UObject_SaveConfig_Params
{
};

// Function Core.Object.FindObject
struct UObject_FindObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DynamicLoadObject
struct UObject_DynamicLoadObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (Parm)
	bool                                               MayFail;                                                  // (OptionalParm, Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetEnum
struct UObject_GetEnum_Params
{
	class UObject*                                     E;                                                        // (Parm)
	int                                                i;                                                        // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SetPropertyText
struct UObject_SetPropertyText_Params
{
	struct FString                                     PropName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     PropValue;                                                // (Parm, NeedCtorLink)
};

// Function Core.Object.GetPropertyText
struct UObject_GetPropertyText_Params
{
	struct FString                                     PropName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Disable
struct UObject_Disable_Params
{
	struct FName                                       ProbeFunc;                                                // (Parm)
};

// Function Core.Object.Enable
struct UObject_Enable_Params
{
	struct FName                                       ProbeFunc;                                                // (Parm)
};

// Function Core.Object.IsA
struct UObject_IsA_Params
{
	struct FName                                       ClassName;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClassIsChildOf
struct UObject_ClassIsChildOf_Params
{
	class UClass*                                      TestClass;                                                // (Parm)
	class UClass*                                      ParentClass;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetStateName
struct UObject_GetStateName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsInState
struct UObject_IsInState_Params
{
	struct FName                                       TestState;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GotoState
struct UObject_GotoState_Params
{
	struct FName                                       NewState;                                                 // (OptionalParm, Parm)
	struct FName                                       Label;                                                    // (OptionalParm, Parm)
};

// Function Core.Object.Localize
struct UObject_Localize_Params
{
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     PackageName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Warn
struct UObject_Warn_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.Object.Log
struct UObject_Log_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       Tag;                                                      // (OptionalParm, Parm)
};

// Function Core.Object.Min64
struct UObject_Min64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsPlus
struct UObject_IsPlus_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	bool                                               bZero;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_INT64INT64
struct UObject_NotEqual_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_INT64INT64
struct UObject_EqualEqual_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_INT64INT64
struct UObject_GreaterEqual_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_INT64INT64
struct UObject_LessEqual_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_INT64INT64
struct UObject_Greater_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_INT64INT64
struct UObject_Less_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_INT64INT64
struct UObject_SubtractEqual_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm, OutParm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_INT64INT64
struct UObject_AddEqual_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm, OutParm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_INT64INT64
struct UObject_Subtract_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_INT64INT64
struct UObject_Add_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_INT64INT64
struct UObject_Divide_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_INT64Float
struct UObject_Multiply_INT64Float_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_INT64INT64
struct UObject_Multiply_INT64INT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      B;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreINT64
struct UObject_Subtract_PreINT64_Params
{
	struct FINT64                                      A;                                                        // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFromAxisAndAngle
struct UObject_QuatFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                                     // (Parm)
	float                                              Angle;                                                    // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFindBetween
struct UObject_QuatFindBetween_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatRotateVector
struct UObject_QuatRotateVector_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatInvert
struct UObject_QuatInvert_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatProduct
struct UObject_QuatProduct_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       B;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InterpCurveGetInputDomain
struct UObject_InterpCurveGetInputDomain_Params
{
	struct FInterpCurve                                curve;                                                    // (Parm, NeedCtorLink)
	float                                              Min;                                                      // (Parm, OutParm)
	float                                              Max;                                                      // (Parm, OutParm)
};

// Function Core.Object.InterpCurveGetOutputRange
struct UObject_InterpCurveGetOutputRange_Params
{
	struct FInterpCurve                                curve;                                                    // (Parm, NeedCtorLink)
	float                                              Min;                                                      // (Parm, OutParm)
	float                                              Max;                                                      // (Parm, OutParm)
};

// Function Core.Object.InterpCurveEval
struct UObject_InterpCurveEval_Params
{
	struct FInterpCurve                                curve;                                                    // (Parm, NeedCtorLink)
	float                                              Input;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_NameName
struct UObject_NotEqual_NameName_Params
{
	struct FName                                       A;                                                        // (Parm)
	struct FName                                       B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_NameName
struct UObject_EqualEqual_NameName_Params
{
	struct FName                                       A;                                                        // (Parm)
	struct FName                                       B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_ObjectObject
struct UObject_NotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (Parm)
	class UObject*                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_ObjectObject
struct UObject_EqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (Parm)
	class UObject*                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Asc
struct UObject_Asc_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Chr
struct UObject_Chr_Params
{
	int                                                i;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Caps
struct UObject_Caps_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Right
struct UObject_Right_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                i;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Left
struct UObject_Left_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                i;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Mid
struct UObject_Mid_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                i;                                                        // (Parm)
	int                                                j;                                                        // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.InStr
struct UObject_InStr_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     t;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Len
struct UObject_Len_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ComplementEqual_StrStr
struct UObject_ComplementEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_StrStr
struct UObject_NotEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_StrStr
struct UObject_EqualEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_StrStr
struct UObject_GreaterEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_StrStr
struct UObject_LessEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_StrStr
struct UObject_Greater_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_StrStr
struct UObject_Less_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.At_StrStr
struct UObject_At_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Concat_StrStr
struct UObject_Concat_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Rotator2Vector
struct UObject_Rotator2Vector_Params
{
	struct FRotator                                    R;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Vector2Rotator
struct UObject_Vector2Rotator_Params
{
	struct FVector                                     V;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClockwiseFrom_IntInt
struct UObject_ClockwiseFrom_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Normalize
struct UObject_Normalize_Params
{
	struct FRotator                                    Rot;                                                      // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.OrthoRotation
struct UObject_OrthoRotation_Params
{
	struct FVector                                     X;                                                        // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
	struct FVector                                     Z;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RotRand
struct UObject_RotRand_Params
{
	bool                                               bRoll;                                                    // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetUnAxes
struct UObject_GetUnAxes_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FVector                                     X;                                                        // (Parm, OutParm)
	struct FVector                                     Y;                                                        // (Parm, OutParm)
	struct FVector                                     Z;                                                        // (Parm, OutParm)
};

// Function Core.Object.GetAxes
struct UObject_GetAxes_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FVector                                     X;                                                        // (Parm, OutParm)
	struct FVector                                     Y;                                                        // (Parm, OutParm)
	struct FVector                                     Z;                                                        // (Parm, OutParm)
};

// Function Core.Object.SubtractEqual_RotatorRotator
struct UObject_SubtractEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_RotatorRotator
struct UObject_AddEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_RotatorRotator
struct UObject_Subtract_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_RotatorRotator
struct UObject_Add_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_RotatorFloat
struct UObject_DivideEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_RotatorFloat
struct UObject_MultiplyEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_RotatorFloat
struct UObject_Divide_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatRotator
struct UObject_Multiply_FloatRotator_Params
{
	float                                              A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_RotatorFloat
struct UObject_Multiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_RotatorRotator
struct UObject_NotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_RotatorRotator
struct UObject_EqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MirrorVectorByNormal
struct UObject_MirrorVectorByNormal_Params
{
	struct FVector                                     Vect;                                                     // (Parm)
	struct FVector                                     Normal;                                                   // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VRand
struct UObject_VRand_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Invert
struct UObject_Invert_Params
{
	struct FVector                                     X;                                                        // (Parm, OutParm)
	struct FVector                                     Y;                                                        // (Parm, OutParm)
	struct FVector                                     Z;                                                        // (Parm, OutParm)
};

// Function Core.Object.Normal
struct UObject_Normal_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSize
struct UObject_VSize_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_VectorVector
struct UObject_SubtractEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_VectorVector
struct UObject_AddEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_VectorFloat
struct UObject_DivideEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorVector
struct UObject_MultiplyEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorFloat
struct UObject_MultiplyEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Cross_VectorVector
struct UObject_Cross_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Dot_VectorVector
struct UObject_Dot_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_VectorVector
struct UObject_NotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_VectorVector
struct UObject_EqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreater_VectorRotator
struct UObject_GreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessLess_VectorRotator
struct UObject_LessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_VectorVector
struct UObject_Subtract_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_VectorVector
struct UObject_Add_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_VectorFloat
struct UObject_Divide_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_VectorVector
struct UObject_Multiply_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatVector
struct UObject_Multiply_FloatVector_Params
{
	float                                              A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_VectorFloat
struct UObject_Multiply_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreVector
struct UObject_Subtract_PreVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Smerp
struct UObject_Smerp_Params
{
	float                                              Alpha;                                                    // (Parm)
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Lerp
struct UObject_Lerp_Params
{
	float                                              Alpha;                                                    // (Parm)
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FClamp
struct UObject_FClamp_Params
{
	float                                              V;                                                        // (Parm)
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FMax
struct UObject_FMax_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FMin
struct UObject_FMin_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FRand
struct UObject_FRand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Square
struct UObject_Square_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sqrt
struct UObject_Sqrt_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Loge
struct UObject_Loge_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Exp
struct UObject_Exp_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Atan
struct UObject_Atan_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Tan
struct UObject_Tan_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Acos
struct UObject_Acos_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Cos
struct UObject_Cos_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Asin
struct UObject_Asin_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sin
struct UObject_Sin_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Abs
struct UObject_Abs_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_FloatFloat
struct UObject_SubtractEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_FloatFloat
struct UObject_AddEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_FloatFloat
struct UObject_DivideEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_FloatFloat
struct UObject_MultiplyEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_FloatFloat
struct UObject_NotEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ComplementEqual_FloatFloat
struct UObject_ComplementEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_FloatFloat
struct UObject_EqualEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_FloatFloat
struct UObject_GreaterEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_FloatFloat
struct UObject_LessEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_FloatFloat
struct UObject_Greater_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_FloatFloat
struct UObject_Less_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_FloatFloat
struct UObject_Subtract_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_FloatFloat
struct UObject_Add_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Percent_FloatFloat
struct UObject_Percent_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_FloatFloat
struct UObject_Divide_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatFloat
struct UObject_Multiply_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyMultiply_FloatFloat
struct UObject_MultiplyMultiply_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreFloat
struct UObject_Subtract_PreFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Clamp
struct UObject_Clamp_Params
{
	int                                                V;                                                        // (Parm)
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Max
struct UObject_Max_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Min
struct UObject_Min_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Rand
struct UObject_Rand_Params
{
	int                                                Max;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_Int
struct UObject_SubtractSubtract_Int_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_Int
struct UObject_AddAdd_Int_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreInt
struct UObject_SubtractSubtract_PreInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_PreInt
struct UObject_AddAdd_PreInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_IntInt
struct UObject_SubtractEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_IntInt
struct UObject_AddEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_IntFloat
struct UObject_DivideEqual_IntFloat_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_IntFloat
struct UObject_MultiplyEqual_IntFloat_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Or_IntInt
struct UObject_Or_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Xor_IntInt
struct UObject_Xor_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.And_IntInt
struct UObject_And_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_IntInt
struct UObject_NotEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_IntInt
struct UObject_EqualEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_IntInt
struct UObject_GreaterEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_IntInt
struct UObject_LessEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_IntInt
struct UObject_Greater_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_IntInt
struct UObject_Less_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreaterGreater_IntInt
struct UObject_GreaterGreaterGreater_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreater_IntInt
struct UObject_GreaterGreater_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessLess_IntInt
struct UObject_LessLess_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_IntInt
struct UObject_Subtract_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_IntInt
struct UObject_Add_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_IntInt
struct UObject_Divide_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_IntFloat
struct UObject_Multiply_IntFloat_Params
{
	int                                                A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_IntInt
struct UObject_Multiply_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreInt
struct UObject_Subtract_PreInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Complement_PreInt
struct UObject_Complement_PreInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_Byte
struct UObject_SubtractSubtract_Byte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_Byte
struct UObject_AddAdd_Byte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreByte
struct UObject_SubtractSubtract_PreByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_PreByte
struct UObject_AddAdd_PreByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_ByteByte
struct UObject_SubtractEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_ByteByte
struct UObject_AddEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_ByteByte
struct UObject_DivideEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteByte
struct UObject_MultiplyEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.OrOr_BoolBool
struct UObject_OrOr_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm, SkipParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.XorXor_BoolBool
struct UObject_XorXor_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AndAnd_BoolBool
struct UObject_AndAnd_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm, SkipParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_BoolBool
struct UObject_NotEqual_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_BoolBool
struct UObject_EqualEqual_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Not_PreBool
struct UObject_Not_PreBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Commandlet.Main
struct UCommandlet_Main_Params
{
	struct FString                                     Parms;                                                    // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.ParamStack.PushString
struct UParamStack_PushString_Params
{
	struct FString                                     item;                                                     // (Parm, NeedCtorLink)
};

// Function Core.ParamStack.PushInt
struct UParamStack_PushInt_Params
{
	int                                                item;                                                     // (Parm)
};

// Function Core.ParamStack.GetFloat
struct UParamStack_GetFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.ParamStack.GetInt
struct UParamStack_GetInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.ParamStack.GetString
struct UParamStack_GetString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

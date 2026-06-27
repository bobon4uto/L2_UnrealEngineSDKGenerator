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

// Function NWindow.UIEventManager.GetUIState
// (Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIEventManager::STATIC_GetUIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.GetUIState");

	UUIEventManager_GetUIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIEventManager.SMessageBox
// (Defined, Iterator, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            SystemMsgNum                   (Parm)

void UUIEventManager::STATIC_SMessageBox(int SystemMsgNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.SMessageBox");

	UUIEventManager_SMessageBox_Params params;
	params.SystemMsgNum = SystemMsgNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIEventManager.MessageBox
// (Final, Iterator, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 Msg                            (Parm, NeedCtorLink)

void UUIEventManager::STATIC_MessageBox(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.MessageBox");

	UUIEventManager_MessageBox_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIEventManager.SetUIState
// (Iterator, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 State                          (Parm, NeedCtorLink)

void UUIEventManager::STATIC_SetUIState(const struct FString& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.SetUIState");

	UUIEventManager_SetUIState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIEventManager.RegisterState
// (Defined, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 WindowName                     (Parm, NeedCtorLink)
// struct FString                 State                          (Parm, NeedCtorLink)

void UUIEventManager::STATIC_RegisterState(const struct FString& WindowName, const struct FString& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.RegisterState");

	UUIEventManager_RegisterState_Params params;
	params.WindowName = WindowName;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIEventManager.RegisterEvent
// (PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            ev                             (Parm)

void UUIEventManager::STATIC_RegisterEvent(int ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.RegisterEvent");

	UUIEventManager_RegisterEvent_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIEventManager.ParseFloat
// (Final, Defined, Iterator, Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_strCmd                       (Parm, NeedCtorLink)
// struct FString                 a_strMatch                     (Parm, NeedCtorLink)
// float                          a_Result                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIEventManager::STATIC_ParseFloat(const struct FString& a_strCmd, const struct FString& a_strMatch, float* a_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ParseFloat");

	UUIEventManager_ParseFloat_Params params;
	params.a_strCmd = a_strCmd;
	params.a_strMatch = a_strMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Result != nullptr)
		*a_Result = params.a_Result;

	return params.ReturnValue;
}


// Function NWindow.UIEventManager.ParseINT64
// (Defined, Iterator, Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_strCmd                       (Parm, NeedCtorLink)
// struct FString                 a_strMatch                     (Parm, NeedCtorLink)
// struct FINT64                  a_Result                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIEventManager::STATIC_ParseINT64(const struct FString& a_strCmd, const struct FString& a_strMatch, struct FINT64* a_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ParseINT64");

	UUIEventManager_ParseINT64_Params params;
	params.a_strCmd = a_strCmd;
	params.a_strMatch = a_strMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Result != nullptr)
		*a_Result = params.a_Result;

	return params.ReturnValue;
}


// Function NWindow.UIEventManager.ParseInt
// (Final, Iterator, Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_strCmd                       (Parm, NeedCtorLink)
// struct FString                 a_strMatch                     (Parm, NeedCtorLink)
// int                            a_Result                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIEventManager::STATIC_ParseInt(const struct FString& a_strCmd, const struct FString& a_strMatch, int* a_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ParseInt");

	UUIEventManager_ParseInt_Params params;
	params.a_strCmd = a_strCmd;
	params.a_strMatch = a_strMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Result != nullptr)
		*a_Result = params.a_Result;

	return params.ReturnValue;
}


// Function NWindow.UIEventManager.ParseString
// (Iterator, Singular, Net, Simulated, Event, Operator)
// Parameters:
// struct FString                 a_strCmd                       (Parm, NeedCtorLink)
// struct FString                 a_strMatch                     (Parm, NeedCtorLink)
// struct FString                 a_strResult                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIEventManager::ParseString(const struct FString& a_strCmd, const struct FString& a_strMatch, struct FString* a_strResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ParseString");

	UUIEventManager_ParseString_Params params;
	params.a_strCmd = a_strCmd;
	params.a_strMatch = a_strMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_strResult != nullptr)
		*a_strResult = params.a_strResult;

	return params.ReturnValue;
}


// Function NWindow.UIEventManager.ParamAddINT64
// (Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 strParam                       (Parm, OutParm, NeedCtorLink)
// struct FString                 strName                        (Parm, NeedCtorLink)
// struct FINT64                  sValue                         (Parm)

void UUIEventManager::STATIC_ParamAddINT64(const struct FString& strName, const struct FINT64& sValue, struct FString* strParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ParamAddINT64");

	UUIEventManager_ParamAddINT64_Params params;
	params.strName = strName;
	params.sValue = sValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strParam != nullptr)
		*strParam = params.strParam;
}


// Function NWindow.UIEventManager.ParamAdd
// (Final, Iterator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 strParam                       (Parm, OutParm, NeedCtorLink)
// struct FString                 strName                        (Parm, NeedCtorLink)
// struct FString                 strValue                       (Parm, NeedCtorLink)

void UUIEventManager::STATIC_ParamAdd(const struct FString& strName, const struct FString& strValue, struct FString* strParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ParamAdd");

	UUIEventManager_ParamAdd_Params params;
	params.strName = strName;
	params.strValue = strValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (strParam != nullptr)
		*strParam = params.strParam;
}


// Function NWindow.UIEventManager.ExecuteEvent
// (Defined, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            a_EventID                      (Parm)
// struct FString                 a_Param                        (OptionalParm, Parm, NeedCtorLink)

void UUIEventManager::STATIC_ExecuteEvent(int a_EventID, const struct FString& a_Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIEventManager.ExecuteEvent");

	UUIEventManager_ExecuteEvent_Params params;
	params.a_EventID = a_EventID;
	params.a_Param = a_Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsCurrentState
// (Final, Iterator, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsCurrentState");

	UWindowHandle_IsCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.ExitState
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_ExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ExitState");

	UWindowHandle_ExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.EnterState
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_EnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.EnterState");

	UWindowHandle_EnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.ChangeControlOrder
// (Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EControlOrderWay>  WayType                        (Parm)

void UWindowHandle::STATIC_ChangeControlOrder(TEnumAsByte<EControlOrderWay> WayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ChangeControlOrder");

	UWindowHandle_ChangeControlOrder_Params params;
	params.WayType = WayType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.MakeBaseUC
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 UCName                         (Parm, NeedCtorLink)
// struct FString                 FilePathName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_MakeBaseUC(const struct FString& UCName, const struct FString& FilePathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.MakeBaseUC");

	UWindowHandle_MakeBaseUC_Params params;
	params.UCName = UCName;
	params.FilePathName = FilePathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.ConvertToEditable
// (Defined, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_ConvertToEditable()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ConvertToEditable");

	UWindowHandle_ConvertToEditable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetXMLDocumentInfo
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 Comment                        (Parm, NeedCtorLink)
// struct FString                 NameSpace                      (Parm, NeedCtorLink)
// struct FString                 XSI                            (Parm, NeedCtorLink)
// struct FString                 SchemaLocation                 (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetXMLDocumentInfo(const struct FString& Comment, const struct FString& NameSpace, const struct FString& XSI, const struct FString& SchemaLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetXMLDocumentInfo");

	UWindowHandle_SetXMLDocumentInfo_Params params;
	params.Comment = Comment;
	params.NameSpace = NameSpace;
	params.XSI = XSI;
	params.SchemaLocation = SchemaLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetXMLDocumentInfo
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 Comment                        (Parm, OutParm, NeedCtorLink)
// struct FString                 NameSpace                      (Parm, OutParm, NeedCtorLink)
// struct FString                 XSI                            (Parm, OutParm, NeedCtorLink)
// struct FString                 SchemaLocation                 (Parm, OutParm, NeedCtorLink)

void UWindowHandle::STATIC_GetXMLDocumentInfo(struct FString* Comment, struct FString* NameSpace, struct FString* XSI, struct FString* SchemaLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetXMLDocumentInfo");

	UWindowHandle_GetXMLDocumentInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Comment != nullptr)
		*Comment = params.Comment;
	if (NameSpace != nullptr)
		*NameSpace = params.NameSpace;
	if (XSI != nullptr)
		*XSI = params.XSI;
	if (SchemaLocation != nullptr)
		*SchemaLocation = params.SchemaLocation;
}


// Function NWindow.WindowHandle.SaveXMLWindow
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 FilePathName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_SaveXMLWindow(const struct FString& FilePathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SaveXMLWindow");

	UWindowHandle_SaveXMLWindow_Params params;
	params.FilePathName = FilePathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.LoadXMLWindow
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 FilePathName                   (Parm, NeedCtorLink)
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UWindowHandle::STATIC_LoadXMLWindow(const struct FString& FilePathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.LoadXMLWindow");

	UWindowHandle_LoadXMLWindow_Params params;
	params.FilePathName = FilePathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetControlType
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EXMLControlType>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EXMLControlType> UWindowHandle::STATIC_GetControlType()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetControlType");

	UWindowHandle_GetControlType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsControlContainer
// (Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsControlContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsControlContainer");

	UWindowHandle_IsControlContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetScript
// (Final, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ScriptName                     (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetScript(const struct FString& ScriptName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetScript");

	UWindowHandle_SetScript_Params params;
	params.ScriptName = ScriptName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetBackTexture
// (Defined, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 TextureName                    (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetBackTexture(const struct FString& TextureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetBackTexture");

	UWindowHandle_SetBackTexture_Params params;
	params.TextureName = TextureName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.DeleteChildWnd
// (Final, Defined, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ChildName                      (Parm, NeedCtorLink)

void UWindowHandle::STATIC_DeleteChildWnd(const struct FString& ChildName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.DeleteChildWnd");

	UWindowHandle_DeleteChildWnd_Params params;
	params.ChildName = ChildName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetClassName
// (Final, Iterator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWindowHandle::STATIC_GetClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetClassName");

	UWindowHandle_GetClassName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.AddChildWnd
// (Defined, Iterator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EXMLControlType>   ChildType                      (Parm)
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UWindowHandle::STATIC_AddChildWnd(TEnumAsByte<EXMLControlType> ChildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.AddChildWnd");

	UWindowHandle_AddChildWnd_Params params;
	params.ChildType = ChildType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetEditable
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bEnable                        (Parm)

void UWindowHandle::STATIC_SetEditable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetEditable");

	UWindowHandle_SetEditable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.InitRotation
// (Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_InitRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.InitRotation");

	UWindowHandle_InitRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsFront
// (Final, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_IsFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsFront");

	UWindowHandle_IsFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.ClearRotation
// (Defined, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_ClearRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ClearRotation");

	UWindowHandle_ClearRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.Rotate
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bWithCapture                   (OptionalParm, Parm)
// int                            RotationTime                   (OptionalParm, Parm)
// struct FVector                 Direction                      (OptionalParm, Parm)
// int                            BeginAlpha                     (OptionalParm, Parm)
// int                            EndAlpha                       (OptionalParm, Parm)
// bool                           bCW                            (OptionalParm, Parm)
// float                          RotationConstant               (OptionalParm, Parm)

void UWindowHandle::STATIC_Rotate(bool bWithCapture, int RotationTime, const struct FVector& Direction, int BeginAlpha, int EndAlpha, bool bCW, float RotationConstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.Rotate");

	UWindowHandle_Rotate_Params params;
	params.bWithCapture = bWithCapture;
	params.RotationTime = RotationTime;
	params.Direction = Direction;
	params.BeginAlpha = BeginAlpha;
	params.EndAlpha = EndAlpha;
	params.bCW = bCW;
	params.RotationConstant = RotationConstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetSettledWnd
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bFlag                          (Parm)

void UWindowHandle::STATIC_SetSettledWnd(bool bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetSettledWnd");

	UWindowHandle_SetSettledWnd_Params params;
	params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetScrollHeight
// (Final, Iterator, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Height                         (Parm)

void UWindowHandle::STATIC_SetScrollHeight(int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetScrollHeight");

	UWindowHandle_SetScrollHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetScrollPosition
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            pos                            (Parm)

void UWindowHandle::STATIC_SetScrollPosition(int pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetScrollPosition");

	UWindowHandle_SetScrollPosition_Params params;
	params.pos = pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetScrollBarPosition
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            HeightOffset                   (Parm)

void UWindowHandle::STATIC_SetScrollBarPosition(int X, int Y, int HeightOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetScrollBarPosition");

	UWindowHandle_SetScrollBarPosition_Params params;
	params.X = X;
	params.Y = Y;
	params.HeightOffset = HeightOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetResizeFrameSize
// (Final, Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            nWidth                         (Parm)
// int                            nHeight                        (Parm)

void UWindowHandle::STATIC_SetResizeFrameSize(int nWidth, int nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetResizeFrameSize");

	UWindowHandle_SetResizeFrameSize_Params params;
	params.nWidth = nWidth;
	params.nHeight = nHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetFrameSize
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            nWidth                         (Parm)
// int                            nHeight                        (Parm)

void UWindowHandle::STATIC_SetFrameSize(int nWidth, int nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetFrameSize");

	UWindowHandle_SetFrameSize_Params params;
	params.nWidth = nWidth;
	params.nHeight = nHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetTooltipCustomType
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FCustomTooltip          Info                           (Parm, OutParm, NeedCtorLink)

void UWindowHandle::STATIC_GetTooltipCustomType(struct FCustomTooltip* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetTooltipCustomType");

	UWindowHandle_GetTooltipCustomType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function NWindow.WindowHandle.SetTooltipCustomType
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FCustomTooltip          Info                           (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetTooltipCustomType(const struct FCustomTooltip& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetTooltipCustomType");

	UWindowHandle_SetTooltipCustomType_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetTooltipType
// (Final, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 TooltipType                    (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetTooltipType(const struct FString& TooltipType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetTooltipType");

	UWindowHandle_SetTooltipType_Params params;
	params.TooltipType = TooltipType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetTooltipText
// (Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWindowHandle::STATIC_GetTooltipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetTooltipText");

	UWindowHandle_GetTooltipText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetTooltipText
// (Final, Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetTooltipText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetTooltipText");

	UWindowHandle_SetTooltipText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.NotifyAlarm
// (Iterator, Latent, Net, Exec, Native, Event, Static, Const)

void UWindowHandle::STATIC_NotifyAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.NotifyAlarm");

	UWindowHandle_NotifyAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.KillTimer
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_TimerID                      (Parm)

void UWindowHandle::STATIC_KillTimer(int a_TimerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.KillTimer");

	UWindowHandle_KillTimer_Params params;
	params.a_TimerID = a_TimerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetTimer
// (Final, Defined, Latent, Singular, Net, Exec, Event)
// Parameters:
// int                            a_TimerID                      (Parm)
// int                            a_DelayMiliseconds             (Parm)

void UWindowHandle::SetTimer(int a_TimerID, int a_DelayMiliseconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetTimer");

	UWindowHandle_SetTimer_Params params;
	params.a_TimerID = a_TimerID;
	params.a_DelayMiliseconds = a_DelayMiliseconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.ReleaseFocus
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_ReleaseFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ReleaseFocus");

	UWindowHandle_ReleaseFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsFocused
// (Defined, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsFocused");

	UWindowHandle_IsFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetFocus
// (Latent, NetReliable, Native, Event)

void UWindowHandle::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetFocus");

	UWindowHandle_SetFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsEnableWindow
// (Final, Defined, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsEnableWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsEnableWindow");

	UWindowHandle_IsEnableWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.DisableWindow
// (Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)

void UWindowHandle::STATIC_DisableWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.DisableWindow");

	UWindowHandle_DisableWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.EnableWindow
// (Final, Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)

void UWindowHandle::STATIC_EnableWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.EnableWindow");

	UWindowHandle_EnableWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetDragOverTexture
// (Final, Defined, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_TextureName                  (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetDragOverTexture(const struct FString& a_TextureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetDragOverTexture");

	UWindowHandle_SetDragOverTexture_Params params;
	params.a_TextureName = a_TextureName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetVirtualDrag
// (Iterator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           a_bFlag                        (Parm)

void UWindowHandle::STATIC_SetVirtualDrag(bool a_bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetVirtualDrag");

	UWindowHandle_SetVirtualDrag_Params params;
	params.a_bFlag = a_bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsVirtualDrag
// (Defined, Iterator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsVirtualDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsVirtualDrag");

	UWindowHandle_IsVirtualDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetStuckable
// (Final, Defined, Iterator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           a_Stuckable                    (Parm)

void UWindowHandle::STATIC_SetStuckable(bool a_Stuckable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetStuckable");

	UWindowHandle_SetStuckable_Params params;
	params.a_Stuckable = a_Stuckable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetDraggable
// (Final, Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           a_Draggable                    (Parm)

void UWindowHandle::STATIC_SetDraggable(bool a_Draggable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetDraggable");

	UWindowHandle_SetDraggable_Params params;
	params.a_Draggable = a_Draggable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsDraggable
// (Defined, Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsDraggable()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsDraggable");

	UWindowHandle_IsDraggable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsAnchored
// (Final, Defined, Latent, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsAnchored()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsAnchored");

	UWindowHandle_IsAnchored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.ClearAnchor
// (Final, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)

void UWindowHandle::STATIC_ClearAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ClearAnchor");

	UWindowHandle_ClearAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetAnchor
// (Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 AnchorWindowName               (Parm, NeedCtorLink)
// struct FString                 RelativePoint                  (Parm, NeedCtorLink)
// struct FString                 AnchorPoint                    (Parm, NeedCtorLink)
// int                            OffsetX                        (Parm)
// int                            OffsetY                        (Parm)

void UWindowHandle::STATIC_SetAnchor(const struct FString& AnchorWindowName, const struct FString& RelativePoint, const struct FString& AnchorPoint, int OffsetX, int OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetAnchor");

	UWindowHandle_SetAnchor_Params params;
	params.AnchorWindowName = AnchorWindowName;
	params.RelativePoint = RelativePoint;
	params.AnchorPoint = AnchorPoint;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.EnableTick
// (Final, Defined, PreOperator, Simulated, Exec, Operator, Static, Const)

void UWindowHandle::STATIC_EnableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.EnableTick");

	UWindowHandle_EnableTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.MoveShake
// (Final, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_nRange                       (Parm)
// int                            a_nSet                         (Parm)
// float                          a_Seconds                      (OptionalParm, Parm)

void UWindowHandle::STATIC_MoveShake(int a_nRange, int a_nSet, float a_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.MoveShake");

	UWindowHandle_MoveShake_Params params;
	params.a_nRange = a_nRange;
	params.a_nSet = a_nSet;
	params.a_Seconds = a_Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.MoveEx
// (Defined, Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_nX                           (Parm)
// int                            a_nY                           (Parm)

void UWindowHandle::STATIC_MoveEx(int a_nX, int a_nY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.MoveEx");

	UWindowHandle_MoveEx_Params params;
	params.a_nX = a_nX;
	params.a_nY = a_nY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.MoveTo
// (Final, Iterator, Latent, Singular, Net, Operator)
// Parameters:
// int                            a_nX                           (Parm)
// int                            a_nY                           (Parm)

void UWindowHandle::MoveTo(int a_nX, int a_nY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.MoveTo");

	UWindowHandle_MoveTo_Params params;
	params.a_nX = a_nX;
	params.a_nY = a_nY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.Move
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Event)
// Parameters:
// int                            a_nDeltaX                      (Parm)
// int                            a_nDeltaY                      (Parm)
// float                          a_Seconds                      (OptionalParm, Parm)

void UWindowHandle::Move(int a_nDeltaX, int a_nDeltaY, float a_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.Move");

	UWindowHandle_Move_Params params;
	params.a_nDeltaX = a_nDeltaX;
	params.a_nDeltaY = a_nDeltaY;
	params.a_Seconds = a_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsRelativeSize
// (Defined, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsRelativeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsRelativeSize");

	UWindowHandle_IsRelativeSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetWindowSizeRel43
// (Final, Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// float                          fWidthRate                     (Parm)
// float                          fHeightRate                    (Parm)
// int                            nOffsetWidth                   (Parm)
// int                            nOffsetHeight                  (Parm)

void UWindowHandle::STATIC_SetWindowSizeRel43(float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetWindowSizeRel43");

	UWindowHandle_SetWindowSizeRel43_Params params;
	params.fWidthRate = fWidthRate;
	params.fHeightRate = fHeightRate;
	params.nOffsetWidth = nOffsetWidth;
	params.nOffsetHeight = nOffsetHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetWindowSizeRel
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// float                          fWidthRate                     (Parm, OutParm)
// float                          fHeightRate                    (Parm, OutParm)
// int                            nOffsetWidth                   (Parm, OutParm)
// int                            nOffsetHeight                  (Parm, OutParm)

void UWindowHandle::STATIC_GetWindowSizeRel(float* fWidthRate, float* fHeightRate, int* nOffsetWidth, int* nOffsetHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetWindowSizeRel");

	UWindowHandle_GetWindowSizeRel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fWidthRate != nullptr)
		*fWidthRate = params.fWidthRate;
	if (fHeightRate != nullptr)
		*fHeightRate = params.fHeightRate;
	if (nOffsetWidth != nullptr)
		*nOffsetWidth = params.nOffsetWidth;
	if (nOffsetHeight != nullptr)
		*nOffsetHeight = params.nOffsetHeight;
}


// Function NWindow.WindowHandle.SetWindowSizeRel
// (Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// float                          fWidthRate                     (Parm)
// float                          fHeightRate                    (Parm)
// int                            nOffsetWidth                   (Parm)
// int                            nOffsetHeight                  (Parm)

void UWindowHandle::STATIC_SetWindowSizeRel(float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetWindowSizeRel");

	UWindowHandle_SetWindowSizeRel_Params params;
	params.fWidthRate = fWidthRate;
	params.fHeightRate = fHeightRate;
	params.nOffsetWidth = nOffsetWidth;
	params.nOffsetHeight = nOffsetHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetWindowSize
// (Final, Defined, Iterator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Width                        (Parm, OutParm)
// int                            a_Height                       (Parm, OutParm)

void UWindowHandle::STATIC_GetWindowSize(int* a_Width, int* a_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetWindowSize");

	UWindowHandle_GetWindowSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Width != nullptr)
		*a_Width = params.a_Width;
	if (a_Height != nullptr)
		*a_Height = params.a_Height;
}


// Function NWindow.WindowHandle.SetWindowSize
// (Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Width                        (Parm)
// int                            a_Height                       (Parm)

void UWindowHandle::STATIC_SetWindowSize(int a_Width, int a_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetWindowSize");

	UWindowHandle_SetWindowSize_Params params;
	params.a_Width = a_Width;
	params.a_Height = a_Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.AddWindowSize
// (Iterator, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            a_DeltaWidth                   (Parm)
// int                            a_DeltaHeight                  (Parm)

void UWindowHandle::STATIC_AddWindowSize(int a_DeltaWidth, int a_DeltaHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.AddWindowSize");

	UWindowHandle_AddWindowSize_Params params;
	params.a_DeltaWidth = a_DeltaWidth;
	params.a_DeltaHeight = a_DeltaHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetRect
// (Final, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FRect                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRect UWindowHandle::STATIC_GetRect()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetRect");

	UWindowHandle_GetRect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetAlwaysFullAlpha
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           a_AlwaysFullAlpha              (Parm)

void UWindowHandle::STATIC_SetAlwaysFullAlpha(bool a_AlwaysFullAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetAlwaysFullAlpha");

	UWindowHandle_SetAlwaysFullAlpha_Params params;
	params.a_AlwaysFullAlpha = a_AlwaysFullAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetFontColor
// (Defined, Iterator, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FColor                  a_FontColor                    (Parm)

void UWindowHandle::STATIC_SetFontColor(const struct FColor& a_FontColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetFontColor");

	UWindowHandle_SetFontColor_Params params;
	params.a_FontColor = a_FontColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.IsAlwaysOnBack
// (Final, Iterator, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsAlwaysOnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsAlwaysOnBack");

	UWindowHandle_IsAlwaysOnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsAlwaysOnTop
// (Iterator, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsAlwaysOnTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsAlwaysOnTop");

	UWindowHandle_IsAlwaysOnTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsVirtual
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsVirtual()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsVirtual");

	UWindowHandle_IsVirtual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetScriptName
// (Defined, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWindowHandle::STATIC_GetScriptName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetScriptName");

	UWindowHandle_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetScript
// (Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// class UUIScript*               ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIScript* UWindowHandle::STATIC_GetScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetScript");

	UWindowHandle_GetScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.SetAlpha
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Alpha                        (Parm)
// float                          a_Seconds                      (OptionalParm, Parm)

void UWindowHandle::STATIC_SetAlpha(int a_Alpha, float a_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetAlpha");

	UWindowHandle_SetAlpha_Params params;
	params.a_Alpha = a_Alpha;
	params.a_Seconds = a_Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetAlpha
// (Defined, Iterator, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UWindowHandle::STATIC_GetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetAlpha");

	UWindowHandle_GetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetTopFrameWnd
// (Final, Iterator, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UWindowHandle::STATIC_GetTopFrameWnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetTopFrameWnd");

	UWindowHandle_GetTopFrameWnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsChildOf
// (Final, Defined, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_hParentWnd                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsChildOf(class UWindowHandle* a_hParentWnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsChildOf");

	UWindowHandle_IsChildOf_Params params;
	params.a_hParentWnd = a_hParentWnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetChildWindowList
// (Final, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// TArray<class UWindowHandle*>   a_ChildList                    (Parm, NeedCtorLink)

void UWindowHandle::STATIC_GetChildWindowList(TArray<class UWindowHandle*> a_ChildList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetChildWindowList");

	UWindowHandle_GetChildWindowList_Params params;
	params.a_ChildList = a_ChildList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.GetParentWindowHandle
// (Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UWindowHandle::STATIC_GetParentWindowHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetParentWindowHandle");

	UWindowHandle_GetParentWindowHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.ChangeParentWindow
// (Defined, Iterator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_hNewParentWnd                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_ChangeParentWindow(class UWindowHandle* a_hNewParentWnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ChangeParentWindow");

	UWindowHandle_ChangeParentWindow_Params params;
	params.a_hNewParentWnd = a_hNewParentWnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetParentWindowName
// (Final, Iterator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWindowHandle::STATIC_GetParentWindowName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetParentWindowName");

	UWindowHandle_GetParentWindowName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.GetWindowName
// (Iterator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWindowHandle::STATIC_GetWindowName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.GetWindowName");

	UWindowHandle_GetWindowName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsMinimizedWindow
// (Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsMinimizedWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsMinimizedWindow");

	UWindowHandle_IsMinimizedWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.IsShowWindow
// (Final, Defined, Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWindowHandle::STATIC_IsShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.IsShowWindow");

	UWindowHandle_IsShowWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.WindowHandle.HideWindow
// (Final, Latent, NetReliable, Exec, Native, Event, Static, Const)

void UWindowHandle::STATIC_HideWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.HideWindow");

	UWindowHandle_HideWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.ShowWindow
// (Final, Latent, Net, Exec, Native, Event, Static, Const)

void UWindowHandle::STATIC_ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.ShowWindow");

	UWindowHandle_ShowWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetTitlePosOffset
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            OffsetX                        (Parm)
// int                            OffsetY                        (Parm)

void UWindowHandle::STATIC_SetTitlePosOffset(int OffsetX, int OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetTitlePosOffset");

	UWindowHandle_SetTitlePosOffset_Params params;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.WindowHandle.SetWindowTitle
// (Final, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_Title                        (Parm, NeedCtorLink)

void UWindowHandle::STATIC_SetWindowTitle(const struct FString& a_Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.WindowHandle.SetWindowTitle");

	UWindowHandle_SetWindowTitle_Params params;
	params.a_Title = a_Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VideoPlayerCtrlHandle.FullScreen
// (Final, Singular, Exec, Operator, Static, Const)

void UVideoPlayerCtrlHandle::STATIC_FullScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VideoPlayerCtrlHandle.FullScreen");

	UVideoPlayerCtrlHandle_FullScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VideoPlayerCtrlHandle.Resize
// (Defined, Singular, Exec, Operator, Static, Const)

void UVideoPlayerCtrlHandle::STATIC_Resize()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VideoPlayerCtrlHandle.Resize");

	UVideoPlayerCtrlHandle_Resize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VideoPlayerCtrlHandle.EndMovie
// (Final, Defined, Singular, Exec, Operator, Static, Const)

void UVideoPlayerCtrlHandle::STATIC_EndMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VideoPlayerCtrlHandle.EndMovie");

	UVideoPlayerCtrlHandle_EndMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VideoPlayerCtrlHandle.PlayMovie
// (Iterator, Singular, Exec, Operator, Static, Const)

void UVideoPlayerCtrlHandle::STATIC_PlayMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VideoPlayerCtrlHandle.PlayMovie");

	UVideoPlayerCtrlHandle_PlayMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TreeHandle.SetNodeItemText
// (Defined, Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// int                            nTextID                        (Parm)
// struct FString                 strText                        (Parm, NeedCtorLink)

void UTreeHandle::STATIC_SetNodeItemText(const struct FString& NodeName, int nTextID, const struct FString& strText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.SetNodeItemText");

	UTreeHandle_SetNodeItemText_Params params;
	params.NodeName = NodeName;
	params.nTextID = nTextID;
	params.strText = strText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TreeHandle.ShowScrollBar
// (Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bShow                          (Parm)

void UTreeHandle::STATIC_ShowScrollBar(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.ShowScrollBar");

	UTreeHandle_ShowScrollBar_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TreeHandle.GetParentNode
// (Final, Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTreeHandle::STATIC_GetParentNode(const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.GetParentNode");

	UTreeHandle_GetParentNode_Params params;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TreeHandle.GetChildNode
// (Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTreeHandle::STATIC_GetChildNode(const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.GetChildNode");

	UTreeHandle_GetChildNode_Params params;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TreeHandle.IsExpandedNode
// (Final, Defined, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTreeHandle::STATIC_IsExpandedNode(const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.IsExpandedNode");

	UTreeHandle_IsExpandedNode_Params params;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TreeHandle.IsNodeNameExist
// (Defined, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTreeHandle::STATIC_IsNodeNameExist(const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.IsNodeNameExist");

	UTreeHandle_IsNodeNameExist_Params params;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TreeHandle.DeleteNode
// (Final, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTreeHandle::STATIC_DeleteNode(const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.DeleteNode");

	UTreeHandle_DeleteNode_Params params;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TreeHandle.GetExpandedNode
// (NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTreeHandle::STATIC_GetExpandedNode(const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.GetExpandedNode");

	UTreeHandle_GetExpandedNode_Params params;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TreeHandle.SetExpandedNode
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           bExpanded                      (Parm)

void UTreeHandle::STATIC_SetExpandedNode(const struct FString& NodeName, bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.SetExpandedNode");

	UTreeHandle_SetExpandedNode_Params params;
	params.NodeName = NodeName;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TreeHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UTreeHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.Clear");

	UTreeHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TreeHandle.InsertNodeItem
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FXMLTreeNodeItemInfo    infNodeItem                    (Parm, NeedCtorLink)

void UTreeHandle::STATIC_InsertNodeItem(const struct FString& NodeName, const struct FXMLTreeNodeItemInfo& infNodeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.InsertNodeItem");

	UTreeHandle_InsertNodeItem_Params params;
	params.NodeName = NodeName;
	params.infNodeItem = infNodeItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TreeHandle.InsertNode
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 strParentName                  (Parm, NeedCtorLink)
// struct FXMLTreeNodeInfo        infNode                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTreeHandle::STATIC_InsertNode(const struct FString& strParentName, const struct FXMLTreeNodeInfo& infNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TreeHandle.InsertNode");

	UTreeHandle_InsertNode_Params params;
	params.strParentName = strParentName;
	params.infNode = infNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TextureHandle.SetRotatingDirection
// (Final, Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Dir                            (Parm)

void UTextureHandle::STATIC_SetRotatingDirection(int Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetRotatingDirection");

	UTextureHandle_SetRotatingDirection_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.SetAutoRotateType
// (Final, Defined, Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<ETextureAutoRotateType> type                           (Parm)

void UTextureHandle::STATIC_SetAutoRotateType(TEnumAsByte<ETextureAutoRotateType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetAutoRotateType");

	UTextureHandle_SetAutoRotateType_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.GetTextureName
// (Final, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTextureHandle::STATIC_GetTextureName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.GetTextureName");

	UTextureHandle_GetTextureName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TextureHandle.SetTextureWithObject
// (Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// class UTexture*                objTexture                     (Parm)

void UTextureHandle::STATIC_SetTextureWithObject(class UTexture* objTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetTextureWithObject");

	UTextureHandle_SetTextureWithObject_Params params;
	params.objTexture = objTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.SetTextureWithClanCrest
// (Final, Defined, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            clanID                         (Parm)

void UTextureHandle::STATIC_SetTextureWithClanCrest(int clanID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetTextureWithClanCrest");

	UTextureHandle_SetTextureWithClanCrest_Params params;
	params.clanID = clanID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.SetTextureCtrlType
// (Defined, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// TEnumAsByte<ETextureCtrlType>  type                           (Parm)

void UTextureHandle::STATIC_SetTextureCtrlType(TEnumAsByte<ETextureCtrlType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetTextureCtrlType");

	UTextureHandle_SetTextureCtrlType_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.SetTextureSize
// (Final, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_UL                           (Parm)
// int                            a_VL                           (Parm)

void UTextureHandle::STATIC_SetTextureSize(int a_UL, int a_VL)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetTextureSize");

	UTextureHandle_SetTextureSize_Params params;
	params.a_UL = a_UL;
	params.a_VL = a_VL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.SetUV
// (Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_U                            (Parm)
// int                            a_V                            (Parm)

void UTextureHandle::STATIC_SetUV(int a_U, int a_V)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetUV");

	UTextureHandle_SetUV_Params params;
	params.a_U = a_U;
	params.a_V = a_V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextureHandle.SetTexture
// (Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_TextureName                  (Parm, NeedCtorLink)

void UTextureHandle::STATIC_SetTexture(const struct FString& a_TextureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextureHandle.SetTexture");

	UTextureHandle_SetTexture_Params params;
	params.a_TextureName = a_TextureName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextListBoxHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UTextListBoxHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextListBoxHandle.Clear");

	UTextListBoxHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextListBoxHandle.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FColor                  TextColor                      (Parm)

void UTextListBoxHandle::STATIC_AddString(const struct FString& Text, const struct FColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextListBoxHandle.AddString");

	UTextListBoxHandle_AddString_Params params;
	params.Text = Text;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextBoxHandle.SetTooltipString
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void UTextBoxHandle::STATIC_SetTooltipString(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.SetTooltipString");

	UTextBoxHandle_SetTooltipString_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextBoxHandle.SetInt
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Number                         (Parm)

void UTextBoxHandle::STATIC_SetInt(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.SetInt");

	UTextBoxHandle_SetInt_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextBoxHandle.SetAlign
// (Defined, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// TEnumAsByte<ETextAlign>        Align                          (Parm)

void UTextBoxHandle::STATIC_SetAlign(TEnumAsByte<ETextAlign> Align)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.SetAlign");

	UTextBoxHandle_SetAlign_Params params;
	params.Align = Align;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextBoxHandle.GetTextColor
// (Defined, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UTextBoxHandle::STATIC_GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.GetTextColor");

	UTextBoxHandle_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TextBoxHandle.SetTextColor
// (Final, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FColor                  a_Color                        (Parm)

void UTextBoxHandle::STATIC_SetTextColor(const struct FColor& a_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.SetTextColor");

	UTextBoxHandle_SetTextColor_Params params;
	params.a_Color = a_Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextBoxHandle.SetText
// (Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_Text                         (Parm, NeedCtorLink)

void UTextBoxHandle::STATIC_SetText(const struct FString& a_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.SetText");

	UTextBoxHandle_SetText_Params params;
	params.a_Text = a_Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TextBoxHandle.GetText
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTextBoxHandle::STATIC_GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TextBoxHandle.GetText");

	UTextBoxHandle_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TabHandle.SetButtonName
// (Final, Defined, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 NewName                        (Parm, NeedCtorLink)

void UTabHandle::STATIC_SetButtonName(int Index, const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TabHandle.SetButtonName");

	UTabHandle_SetButtonName_Params params;
	params.Index = Index;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TabHandle.MergeTab
// (Defined, Iterator, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UTabHandle::STATIC_MergeTab(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TabHandle.MergeTab");

	UTabHandle_MergeTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TabHandle.SetDisable
// (Final, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// bool                           bDisable                       (Parm)

void UTabHandle::STATIC_SetDisable(int Index, bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TabHandle.SetDisable");

	UTabHandle_SetDisable_Params params;
	params.Index = Index;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TabHandle.GetTopIndex
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTabHandle::STATIC_GetTopIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TabHandle.GetTopIndex");

	UTabHandle_GetTopIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TabHandle.SetTopOrder
// (Final, Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// bool                           bSendMessage                   (Parm)

void UTabHandle::STATIC_SetTopOrder(int Index, bool bSendMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TabHandle.SetTopOrder");

	UTabHandle_SetTopOrder_Params params;
	params.Index = Index;
	params.bSendMessage = bSendMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TabHandle.InitTabCtrl
// (Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)

void UTabHandle::STATIC_InitTabCtrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TabHandle.InitTabCtrl");

	UTabHandle_InitTabCtrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UStatusIconHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.Clear");

	UStatusIconHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.SetIconSize
// (Defined, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Size                         (Parm)

void UStatusIconHandle::STATIC_SetIconSize(int a_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.SetIconSize");

	UStatusIconHandle_SetIconSize_Params params;
	params.a_Size = a_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.DelItem
// (Final, Defined, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)
// int                            a_Col                          (Parm)

void UStatusIconHandle::STATIC_DelItem(int a_Row, int a_Col)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.DelItem");

	UStatusIconHandle_DelItem_Params params;
	params.a_Row = a_Row;
	params.a_Col = a_Col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.SetItem
// (Final, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)
// int                            a_Col                          (Parm)
// struct FStatusIconInfo         a_Info                         (Parm, NeedCtorLink)

void UStatusIconHandle::STATIC_SetItem(int a_Row, int a_Col, const struct FStatusIconInfo& a_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.SetItem");

	UStatusIconHandle_SetItem_Params params;
	params.a_Row = a_Row;
	params.a_Col = a_Col;
	params.a_Info = a_Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.GetItem
// (Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)
// int                            a_Col                          (Parm)
// struct FStatusIconInfo         a_Info                         (Parm, OutParm, NeedCtorLink)

void UStatusIconHandle::STATIC_GetItem(int a_Row, int a_Col, struct FStatusIconInfo* a_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.GetItem");

	UStatusIconHandle_GetItem_Params params;
	params.a_Row = a_Row;
	params.a_Col = a_Col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Info != nullptr)
		*a_Info = params.a_Info;
}


// Function NWindow.StatusIconHandle.GetColCount
// (Defined, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UStatusIconHandle::STATIC_GetColCount(int a_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.GetColCount");

	UStatusIconHandle_GetColCount_Params params;
	params.a_Row = a_Row;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.StatusIconHandle.GetRowCount
// (Final, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UStatusIconHandle::STATIC_GetRowCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.GetRowCount");

	UStatusIconHandle_GetRowCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.StatusIconHandle.InsertCol
// (PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)
// int                            a_Col                          (Parm)
// struct FStatusIconInfo         a_Info                         (Parm, NeedCtorLink)

void UStatusIconHandle::STATIC_InsertCol(int a_Row, int a_Col, const struct FStatusIconInfo& a_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.InsertCol");

	UStatusIconHandle_InsertCol_Params params;
	params.a_Row = a_Row;
	params.a_Col = a_Col;
	params.a_Info = a_Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.InsertRow
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)

void UStatusIconHandle::STATIC_InsertRow(int a_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.InsertRow");

	UStatusIconHandle_InsertRow_Params params;
	params.a_Row = a_Row;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.AddCol
// (Defined, Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)
// struct FStatusIconInfo         a_Info                         (Parm, NeedCtorLink)

void UStatusIconHandle::STATIC_AddCol(int a_Row, const struct FStatusIconInfo& a_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.AddCol");

	UStatusIconHandle_AddCol_Params params;
	params.a_Row = a_Row;
	params.a_Info = a_Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusIconHandle.AddRow
// (Final, Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)

void UStatusIconHandle::STATIC_AddRow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusIconHandle.AddRow");

	UStatusIconHandle_AddRow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusBarHandle.SetRegenInfo
// (Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Duration                       (Parm)
// int                            ticks                          (Parm)
// float                          Amount                         (Parm)

void UStatusBarHandle::STATIC_SetRegenInfo(int Duration, int ticks, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusBarHandle.SetRegenInfo");

	UStatusBarHandle_SetRegenInfo_Params params;
	params.Duration = Duration;
	params.ticks = ticks;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusBarHandle.SetPointExp
// (Final, Defined, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FINT64                  CurrentValue                   (Parm)
// int                            Level                          (Parm)

void UStatusBarHandle::STATIC_SetPointExp(const struct FINT64& CurrentValue, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusBarHandle.SetPointExp");

	UStatusBarHandle_SetPointExp_Params params;
	params.CurrentValue = CurrentValue;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusBarHandle.SetPointPercent
// (Defined, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FINT64                  CurrentValue                   (Parm)
// struct FINT64                  MinValue                       (Parm)
// struct FINT64                  MaxValue                       (Parm)

void UStatusBarHandle::STATIC_SetPointPercent(const struct FINT64& CurrentValue, const struct FINT64& MinValue, const struct FINT64& MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusBarHandle.SetPointPercent");

	UStatusBarHandle_SetPointPercent_Params params;
	params.CurrentValue = CurrentValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.StatusBarHandle.SetPoint
// (Final, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            CurrentValue                   (Parm)
// int                            MaxValue                       (Parm)

void UStatusBarHandle::STATIC_SetPoint(int CurrentValue, int MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.StatusBarHandle.SetPoint");

	UStatusBarHandle_SetPoint_Params params;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SliderCtrlHandle.IsMouseScrolling
// (Defined, Iterator, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USliderCtrlHandle::STATIC_IsMouseScrolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SliderCtrlHandle.IsMouseScrolling");

	USliderCtrlHandle_IsMouseScrolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.SliderCtrlHandle.SetTotalTickCount
// (Final, Defined, Iterator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            a_TotalTickCount               (Parm)

void USliderCtrlHandle::STATIC_SetTotalTickCount(int a_TotalTickCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SliderCtrlHandle.SetTotalTickCount");

	USliderCtrlHandle_SetTotalTickCount_Params params;
	params.a_TotalTickCount = a_TotalTickCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SliderCtrlHandle.GetTotalTickCount
// (Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USliderCtrlHandle::STATIC_GetTotalTickCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SliderCtrlHandle.GetTotalTickCount");

	USliderCtrlHandle_GetTotalTickCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.SliderCtrlHandle.SetCurrentTick
// (Final, Defined, Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iCurrTick                      (Parm)

void USliderCtrlHandle::STATIC_SetCurrentTick(int iCurrTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SliderCtrlHandle.SetCurrentTick");

	USliderCtrlHandle_SetCurrentTick_Params params;
	params.iCurrTick = iCurrTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SliderCtrlHandle.GetCurrentTick
// (Defined, Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USliderCtrlHandle::STATIC_GetCurrentTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SliderCtrlHandle.GetCurrentTick");

	USliderCtrlHandle_GetCurrentTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ScenePlayerCtrlHandle.LoadUCFile
// (Final, Defined, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UScenePlayerCtrlHandle::STATIC_LoadUCFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ScenePlayerCtrlHandle.LoadUCFile");

	UScenePlayerCtrlHandle_LoadUCFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ScenePlayerCtrlHandle.SaveUCFile
// (Iterator, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 CurPath                        (Parm, NeedCtorLink)

void UScenePlayerCtrlHandle::STATIC_SaveUCFile(const struct FString& Filename, const struct FString& CurPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ScenePlayerCtrlHandle.SaveUCFile");

	UScenePlayerCtrlHandle_SaveUCFile_Params params;
	params.Filename = Filename;
	params.CurPath = CurPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ScenePlayerCtrlHandle.Play
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// int                            EndSceneNo                     (Parm)
// bool                           bShowInfo                      (Parm)

void UScenePlayerCtrlHandle::Play(int EndSceneNo, bool bShowInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ScenePlayerCtrlHandle.Play");

	UScenePlayerCtrlHandle_Play_Params params;
	params.EndSceneNo = EndSceneNo;
	params.bShowInfo = bShowInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.SetMapInvisible
// (Final, Iterator, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           bInvisible                     (Parm)

void URadarMapCtrlHandle::STATIC_SetMapInvisible(bool bInvisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.SetMapInvisible");

	URadarMapCtrlHandle_SetMapInvisible_Params params;
	params.bInvisible = bInvisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.SetEnableRotation
// (Defined, Iterator, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           bEnable                        (Parm)

void URadarMapCtrlHandle::STATIC_SetEnableRotation(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.SetEnableRotation");

	URadarMapCtrlHandle_SetEnableRotation_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.SetMagnification
// (Final, Defined, Iterator, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// float                          newMag                         (Parm)

void URadarMapCtrlHandle::STATIC_SetMagnification(float newMag)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.SetMagnification");

	URadarMapCtrlHandle_SetMagnification_Params params;
	params.newMag = newMag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.RequestObjectAround
// (PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ObjectType                     (Parm)
// int                            DistanceLimitXY                (Parm)
// int                            DistanceLimitZ                 (Parm)

void URadarMapCtrlHandle::STATIC_RequestObjectAround(int ObjectType, int DistanceLimitXY, int DistanceLimitZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.RequestObjectAround");

	URadarMapCtrlHandle_RequestObjectAround_Params params;
	params.ObjectType = ObjectType;
	params.DistanceLimitXY = DistanceLimitXY;
	params.DistanceLimitZ = DistanceLimitZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.UpdateObject
// (Final, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            WorldX                         (Parm)
// int                            WorldY                         (Parm)
// int                            WorldZ                         (Parm)

void URadarMapCtrlHandle::STATIC_UpdateObject(int Id, int WorldX, int WorldY, int WorldZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.UpdateObject");

	URadarMapCtrlHandle_UpdateObject_Params params;
	params.Id = Id;
	params.WorldX = WorldX;
	params.WorldY = WorldY;
	params.WorldZ = WorldZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.DeleteObject
// (Defined, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ObjectID                       (Parm)

void URadarMapCtrlHandle::STATIC_DeleteObject(int ObjectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.DeleteObject");

	URadarMapCtrlHandle_DeleteObject_Params params;
	params.ObjectID = ObjectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RadarMapCtrlHandle.AddObject
// (Final, Defined, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 type                           (Parm, NeedCtorLink)
// struct FString                 Name                           (Parm, NeedCtorLink)
// int                            locX                           (Parm)
// int                            locY                           (Parm)
// int                            locZ                           (Parm)

void URadarMapCtrlHandle::STATIC_AddObject(int Id, const struct FString& type, const struct FString& Name, int locX, int locY, int locZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RadarMapCtrlHandle.AddObject");

	URadarMapCtrlHandle_AddObject_Params params;
	params.Id = Id;
	params.type = type;
	params.Name = Name;
	params.locX = locX;
	params.locY = locY;
	params.locZ = locZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.GetItemStringValue
// (Iterator, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPropertyControllerHandle::STATIC_GetItemStringValue(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetItemStringValue");

	UPropertyControllerHandle_GetItemStringValue_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.GetItemIntegerValue
// (Final, Iterator, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPropertyControllerHandle::STATIC_GetItemIntegerValue(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetItemIntegerValue");

	UPropertyControllerHandle_GetItemIntegerValue_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.GetItemBooleanValue
// (Defined, Iterator, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPropertyControllerHandle::STATIC_GetItemBooleanValue(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetItemBooleanValue");

	UPropertyControllerHandle_GetItemBooleanValue_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.SetItemStringValue
// (Final, Defined, Iterator, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UPropertyControllerHandle::STATIC_SetItemStringValue(const struct FString& ItemName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetItemStringValue");

	UPropertyControllerHandle_SetItemStringValue_Params params;
	params.ItemName = ItemName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.SetItemIntegerValue
// (Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// int                            Value                          (Parm)

void UPropertyControllerHandle::STATIC_SetItemIntegerValue(const struct FString& ItemName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetItemIntegerValue");

	UPropertyControllerHandle_SetItemIntegerValue_Params params;
	params.ItemName = ItemName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.SetItemBooleanValue
// (Final, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// bool                           Value                          (Parm)

void UPropertyControllerHandle::STATIC_SetItemBooleanValue(const struct FString& ItemName, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetItemBooleanValue");

	UPropertyControllerHandle_SetItemBooleanValue_Params params;
	params.ItemName = ItemName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.GetItemType
// (Defined, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)
// TEnumAsByte<EControlPropertyItemType> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EControlPropertyItemType> UPropertyControllerHandle::STATIC_GetItemType(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetItemType");

	UPropertyControllerHandle_GetItemType_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.SetGroupVisible
// (Final, Defined, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// bool                           bShow                          (Parm)

void UPropertyControllerHandle::STATIC_SetGroupVisible(const struct FString& GroupName, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetGroupVisible");

	UPropertyControllerHandle_SetGroupVisible_Params params;
	params.GroupName = GroupName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.SetGroupExpandState
// (Iterator, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// bool                           bExpand                        (Parm)

void UPropertyControllerHandle::STATIC_SetGroupExpandState(const struct FString& GroupName, bool bExpand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetGroupExpandState");

	UPropertyControllerHandle_SetGroupExpandState_Params params;
	params.GroupName = GroupName;
	params.bExpand = bExpand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.AddGroup
// (Final, Iterator, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPropertyControllerHandle::STATIC_AddGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.AddGroup");

	UPropertyControllerHandle_AddGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.DeleteGroup
// (Defined, Iterator, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UPropertyControllerHandle::STATIC_DeleteGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.DeleteGroup");

	UPropertyControllerHandle_DeleteGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.GetGroupCheck
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPropertyControllerHandle::STATIC_GetGroupCheck(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetGroupCheck");

	UPropertyControllerHandle_GetGroupCheck_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.SetGroupCheck
// (Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// bool                           Value                          (Parm)

void UPropertyControllerHandle::STATIC_SetGroupCheck(const struct FString& GroupName, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetGroupCheck");

	UPropertyControllerHandle_SetGroupCheck_Params params;
	params.GroupName = GroupName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.GetGroupType
// (Final, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// TEnumAsByte<EControlPropertyGroupType> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EControlPropertyGroupType> UPropertyControllerHandle::STATIC_GetGroupType(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetGroupType");

	UPropertyControllerHandle_GetGroupType_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.UpdatePropertyGroup
// (Defined, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UPropertyControllerHandle::STATIC_UpdatePropertyGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.UpdatePropertyGroup");

	UPropertyControllerHandle_UpdatePropertyGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.GetPropertyHeight
// (Final, Defined, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPropertyControllerHandle::STATIC_GetPropertyHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.GetPropertyHeight");

	UPropertyControllerHandle_GetPropertyHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.PropertyControllerHandle.ClearValue
// (Iterator, Singular, Net, Exec, Operator, Static, Const)

void UPropertyControllerHandle::STATIC_ClearValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.ClearValue");

	UPropertyControllerHandle_ClearValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UPropertyControllerHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.Clear");

	UPropertyControllerHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PropertyControllerHandle.SetProperty
// (Defined, Iterator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EXMLControlType>   a_Type                         (Parm)
// class UWindowHandle*           a_WindowHandle                 (Parm)

void UPropertyControllerHandle::STATIC_SetProperty(TEnumAsByte<EXMLControlType> a_Type, class UWindowHandle* a_WindowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PropertyControllerHandle.SetProperty");

	UPropertyControllerHandle_SetProperty_Params params;
	params.a_Type = a_Type;
	params.a_WindowHandle = a_WindowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ProgressCtrlHandle.Start
// (Latent, PreOperator, Singular, Simulated, Native, Event, Operator)

void UProgressCtrlHandle::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ProgressCtrlHandle.Start");

	UProgressCtrlHandle_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ProgressCtrlHandle.Resume
// (Final, Iterator, Singular, Net, Exec, Native, Event, Static, Const)

void UProgressCtrlHandle::STATIC_Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ProgressCtrlHandle.Resume");

	UProgressCtrlHandle_Resume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ProgressCtrlHandle.Stop
// (Final, Defined, Iterator, Latent, Singular, Net, Exec)

void UProgressCtrlHandle::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ProgressCtrlHandle.Stop");

	UProgressCtrlHandle_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ProgressCtrlHandle.Reset
// (Defined, Singular, Simulated, Native)

void UProgressCtrlHandle::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ProgressCtrlHandle.Reset");

	UProgressCtrlHandle_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ProgressCtrlHandle.SetPos
// (Final, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// int                            Millitime                      (Parm)

void UProgressCtrlHandle::SetPos(int Millitime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ProgressCtrlHandle.SetPos");

	UProgressCtrlHandle_SetPos_Params params;
	params.Millitime = Millitime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ProgressCtrlHandle.SetProgressTime
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// int                            Millitime                      (Parm)

void UProgressCtrlHandle::SetProgressTime(int Millitime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ProgressCtrlHandle.SetProgressTime");

	UProgressCtrlHandle_SetProgressTime_Params params;
	params.Millitime = Millitime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.NameCtrlHandle.GetName
// (Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UNameCtrlHandle::STATIC_GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.NameCtrlHandle.GetName");

	UNameCtrlHandle_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.NameCtrlHandle.SetNameWithColor
// (Final, Defined, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)
// TEnumAsByte<ENameCtrlType>     type                           (Parm)
// TEnumAsByte<ETextAlign>        Align                          (Parm)
// struct FColor                  NameColor                      (Parm)

void UNameCtrlHandle::STATIC_SetNameWithColor(const struct FString& Name, TEnumAsByte<ENameCtrlType> type, TEnumAsByte<ETextAlign> Align, const struct FColor& NameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.NameCtrlHandle.SetNameWithColor");

	UNameCtrlHandle_SetNameWithColor_Params params;
	params.Name = Name;
	params.type = type;
	params.Align = Align;
	params.NameColor = NameColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.NameCtrlHandle.SetName
// (Final, Iterator, Event)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)
// TEnumAsByte<ENameCtrlType>     type                           (Parm)
// TEnumAsByte<ETextAlign>        Align                          (Parm)

void UNameCtrlHandle::SetName(const struct FString& Name, TEnumAsByte<ENameCtrlType> type, TEnumAsByte<ETextAlign> Align)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.NameCtrlHandle.SetName");

	UNameCtrlHandle_SetName_Params params;
	params.Name = Name;
	params.type = type;
	params.Align = Align;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.SetContinent
// (Defined, Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Continent                      (Parm)

void UMinimapCtrlHandle::STATIC_SetContinent(int Continent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.SetContinent");

	UMinimapCtrlHandle_SetContinent_Params params;
	params.Continent = Continent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.EraseRegionInfo
// (Final, Defined, Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UMinimapCtrlHandle::STATIC_EraseRegionInfo(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.EraseRegionInfo");

	UMinimapCtrlHandle_EraseRegionInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.EraseAllRegionInfo
// (Iterator, Latent, Singular, Net, Exec, Operator, Static, Const)

void UMinimapCtrlHandle::STATIC_EraseAllRegionInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.EraseAllRegionInfo");

	UMinimapCtrlHandle_EraseAllRegionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.UpdateRegionInfo
// (Final, Iterator, Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            idx                            (Parm)
// struct FString                 RegionInfo                     (Parm, NeedCtorLink)

void UMinimapCtrlHandle::STATIC_UpdateRegionInfo(int idx, const struct FString& RegionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.UpdateRegionInfo");

	UMinimapCtrlHandle_UpdateRegionInfo_Params params;
	params.idx = idx;
	params.RegionInfo = RegionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.AddRegionInfo
// (Defined, Iterator, Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 RegionInfo                     (Parm, NeedCtorLink)

void UMinimapCtrlHandle::STATIC_AddRegionInfo(const struct FString& RegionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.AddRegionInfo");

	UMinimapCtrlHandle_AddRegionInfo_Params params;
	params.RegionInfo = RegionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.DeleteAllCursedWeaponIcon
// (Defined, Singular, Net, Exec, Native, Event, Static, Const)

void UMinimapCtrlHandle::STATIC_DeleteAllCursedWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.DeleteAllCursedWeaponIcon");

	UMinimapCtrlHandle_DeleteAllCursedWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.IsOverlapped
// (Final, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            FirstX                         (Parm)
// int                            FirstY                         (Parm)
// int                            SecondX                        (Parm)
// int                            SecondY                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMinimapCtrlHandle::STATIC_IsOverlapped(int FirstX, int FirstY, int SecondX, int SecondY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.IsOverlapped");

	UMinimapCtrlHandle_IsOverlapped_Params params;
	params.FirstX = FirstX;
	params.FirstY = FirstY;
	params.SecondX = SecondX;
	params.SecondY = SecondY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.MinimapCtrlHandle.RequestReduceBtn
// (Singular, Net, Exec, Native, Event, Static, Const)

void UMinimapCtrlHandle::STATIC_RequestReduceBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.RequestReduceBtn");

	UMinimapCtrlHandle_RequestReduceBtn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.DrawGridIcon
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_IconName                     (Parm, NeedCtorLink)
// struct FString                 a_DupIconName                  (Parm, NeedCtorLink)
// struct FVector                 a_Loc                          (Parm)
// bool                           a_Refresh                      (Parm)
// int                            a_XOffset                      (OptionalParm, Parm)
// int                            a_YOffset                      (OptionalParm, Parm)
// struct FString                 TooltipString                  (OptionalParm, Parm, NeedCtorLink)

void UMinimapCtrlHandle::STATIC_DrawGridIcon(const struct FString& a_IconName, const struct FString& a_DupIconName, const struct FVector& a_Loc, bool a_Refresh, int a_XOffset, int a_YOffset, const struct FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.DrawGridIcon");

	UMinimapCtrlHandle_DrawGridIcon_Params params;
	params.a_IconName = a_IconName;
	params.a_DupIconName = a_DupIconName;
	params.a_Loc = a_Loc;
	params.a_Refresh = a_Refresh;
	params.a_XOffset = a_XOffset;
	params.a_YOffset = a_YOffset;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.SetSSQStatus
// (Defined, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_SSQStatus                    (Parm)

void UMinimapCtrlHandle::STATIC_SetSSQStatus(int a_SSQStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.SetSSQStatus");

	UMinimapCtrlHandle_SetSSQStatus_Params params;
	params.a_SSQStatus = a_SSQStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.SetShowQuest
// (Final, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           a_ShowQuest                    (Parm)

void UMinimapCtrlHandle::STATIC_SetShowQuest(bool a_ShowQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.SetShowQuest");

	UMinimapCtrlHandle_SetShowQuest_Params params;
	params.a_ShowQuest = a_ShowQuest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.DeleteAllTarget
// (Final, Iterator, PreOperator, Exec, Native, Event, Static, Const)

void UMinimapCtrlHandle::STATIC_DeleteAllTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.DeleteAllTarget");

	UMinimapCtrlHandle_DeleteAllTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.DeleteTarget
// (Defined, Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FVector                 a_Loc                          (Parm)

void UMinimapCtrlHandle::STATIC_DeleteTarget(const struct FVector& a_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.DeleteTarget");

	UMinimapCtrlHandle_DeleteTarget_Params params;
	params.a_Loc = a_Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.AddTarget
// (Final, Defined, Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FVector                 a_Loc                          (Parm)

void UMinimapCtrlHandle::STATIC_AddTarget(const struct FVector& a_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.AddTarget");

	UMinimapCtrlHandle_AddTarget_Params params;
	params.a_Loc = a_Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MinimapCtrlHandle.AdjustMapView
// (Final, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FVector                 Loc                            (Parm)
// bool                           a_ZoomToTownMap                (OptionalParm, Parm)
// bool                           a_UseGridLocation              (OptionalParm, Parm)

void UMinimapCtrlHandle::STATIC_AdjustMapView(const struct FVector& Loc, bool a_ZoomToTownMap, bool a_UseGridLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MinimapCtrlHandle.AdjustMapView");

	UMinimapCtrlHandle_AdjustMapView_Params params;
	params.Loc = Loc;
	params.a_ZoomToTownMap = a_ZoomToTownMap;
	params.a_UseGridLocation = a_UseGridLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListCtrlHandle.GetRec
// (Final, Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FLVDataRecord           Record                         (Parm, OutParm, NeedCtorLink)

void UListCtrlHandle::STATIC_GetRec(int Index, struct FLVDataRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.GetRec");

	UListCtrlHandle_GetRec_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function NWindow.ListCtrlHandle.GetSelectedRec
// (Defined, Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FLVDataRecord           Record                         (Parm, OutParm, NeedCtorLink)

void UListCtrlHandle::STATIC_GetSelectedRec(struct FLVDataRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.GetSelectedRec");

	UListCtrlHandle_GetSelectedRec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function NWindow.ListCtrlHandle.ModifyRecord
// (Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FLVDataRecord           Record                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UListCtrlHandle::STATIC_ModifyRecord(int Index, const struct FLVDataRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.ModifyRecord");

	UListCtrlHandle_ModifyRecord_Params params;
	params.Index = Index;
	params.Record = Record;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ListCtrlHandle.ShowScrollBar
// (Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bShow                          (Parm)

void UListCtrlHandle::STATIC_ShowScrollBar(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.ShowScrollBar");

	UListCtrlHandle_ShowScrollBar_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListCtrlHandle.SetSelectedIndex
// (Final, Defined, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// bool                           bMoveToRow                     (Parm)

void UListCtrlHandle::STATIC_SetSelectedIndex(int Index, bool bMoveToRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.SetSelectedIndex");

	UListCtrlHandle_SetSelectedIndex_Params params;
	params.Index = Index;
	params.bMoveToRow = bMoveToRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListCtrlHandle.GetSelectedIndex
// (Defined, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UListCtrlHandle::STATIC_GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.GetSelectedIndex");

	UListCtrlHandle_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ListCtrlHandle.GetRecordCount
// (Final, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UListCtrlHandle::STATIC_GetRecordCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.GetRecordCount");

	UListCtrlHandle_GetRecordCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ListCtrlHandle.DeleteRecord
// (Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UListCtrlHandle::STATIC_DeleteRecord(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.DeleteRecord");

	UListCtrlHandle_DeleteRecord_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListCtrlHandle.DeleteAllItem
// (Final, Defined, PreOperator, Net, Exec, Native, Event, Static, Const)

void UListCtrlHandle::STATIC_DeleteAllItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.DeleteAllItem");

	UListCtrlHandle_DeleteAllItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListCtrlHandle.InsertRecord
// (Defined, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FLVDataRecord           Record                         (Parm, NeedCtorLink)

void UListCtrlHandle::STATIC_InsertRecord(const struct FLVDataRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListCtrlHandle.InsertRecord");

	UListCtrlHandle_InsertRecord_Params params;
	params.Record = Record;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListBoxHandle.GetSelectedString
// (Final, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UListBoxHandle::STATIC_GetSelectedString()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListBoxHandle.GetSelectedString");

	UListBoxHandle_GetSelectedString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ListBoxHandle.AddStringWithData
// (PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// int                            Color                          (Parm)
// int                            Data                           (Parm)

void UListBoxHandle::STATIC_AddStringWithData(const struct FString& Text, int Color, int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListBoxHandle.AddStringWithData");

	UListBoxHandle_AddStringWithData_Params params;
	params.Text = Text;
	params.Color = Color;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListBoxHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UListBoxHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListBoxHandle.Clear");

	UListBoxHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ListBoxHandle.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void UListBoxHandle::STATIC_AddString(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ListBoxHandle.AddString");

	UListBoxHandle_AddString_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.SetExpandItemNum
// (Defined, Iterator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// int                            Num                            (Parm)

void UItemWindowHandle::STATIC_SetExpandItemNum(int Index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SetExpandItemNum");

	UItemWindowHandle_SetExpandItemNum_Params params;
	params.Index = Index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.SetCol
// (Final, Defined, Iterator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Col                          (Parm)

void UItemWindowHandle::STATIC_SetCol(int a_Col)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SetCol");

	UItemWindowHandle_SetCol_Params params;
	params.a_Col = a_Col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.SetRow
// (Latent, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Row                          (Parm)

void UItemWindowHandle::STATIC_SetRow(int a_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SetRow");

	UItemWindowHandle_SetRow_Params params;
	params.a_Row = a_Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.SetDisableTex
// (Defined, Latent, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_DisableTex                   (Parm, NeedCtorLink)

void UItemWindowHandle::STATIC_SetDisableTex(const struct FString& a_DisableTex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SetDisableTex");

	UItemWindowHandle_SetDisableTex_Params params;
	params.a_DisableTex = a_DisableTex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.GetIndexAt
// (Final, Defined, Latent, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            OffsetX                        (Parm)
// int                            OffsetY                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UItemWindowHandle::STATIC_GetIndexAt(int X, int Y, int OffsetX, int OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.GetIndexAt");

	UItemWindowHandle_GetIndexAt_Params params;
	params.X = X;
	params.Y = Y;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.SwapItems
// (Iterator, Latent, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            index1                         (Parm)
// int                            index2                         (Parm)

void UItemWindowHandle::STATIC_SwapItems(int index1, int index2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SwapItems");

	UItemWindowHandle_SwapItems_Params params;
	params.index1 = index1;
	params.index2 = index2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.ShowScrollBar
// (Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bShow                          (Parm)

void UItemWindowHandle::STATIC_ShowScrollBar(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.ShowScrollBar");

	UItemWindowHandle_ShowScrollBar_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.SetFaded
// (Defined, Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bOn                            (Parm)

void UItemWindowHandle::STATIC_SetFaded(bool bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SetFaded");

	UItemWindowHandle_SetFaded_Params params;
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.FindItemWithReserved
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Reserved                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UItemWindowHandle::STATIC_FindItemWithReserved(int Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.FindItemWithReserved");

	UItemWindowHandle_FindItemWithReserved_Params params;
	params.Reserved = Reserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.FindItemWithAllProperty
// (PreOperator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FItemInfo               Info                           (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UItemWindowHandle::STATIC_FindItemWithAllProperty(const struct FItemInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.FindItemWithAllProperty");

	UItemWindowHandle_FindItemWithAllProperty_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.FindItem
// (Final, Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 scID                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UItemWindowHandle::STATIC_FindItem(const struct FItemID& scID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.FindItem");

	UItemWindowHandle_FindItem_Params params;
	params.scID = scID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UItemWindowHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.Clear");

	UItemWindowHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.GetItem
// (Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FItemInfo               Info                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UItemWindowHandle::STATIC_GetItem(int Index, struct FItemInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.GetItem");

	UItemWindowHandle_GetItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.GetSelectedItem
// (Final, Defined, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemInfo               Info                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UItemWindowHandle::STATIC_GetSelectedItem(struct FItemInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.GetSelectedItem");

	UItemWindowHandle_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.DeleteItem
// (Defined, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UItemWindowHandle::STATIC_DeleteItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.DeleteItem");

	UItemWindowHandle_DeleteItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.SetItem
// (Final, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FItemInfo               Info                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UItemWindowHandle::STATIC_SetItem(int Index, const struct FItemInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.SetItem");

	UItemWindowHandle_SetItem_Params params;
	params.Index = Index;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.AddItem
// (Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemInfo               Info                           (Parm, NeedCtorLink)

void UItemWindowHandle::STATIC_AddItem(const struct FItemInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.AddItem");

	UItemWindowHandle_AddItem_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.ClearSelect
// (Final, Iterator, Net, Exec, Native, Event, Static, Const)

void UItemWindowHandle::STATIC_ClearSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.ClearSelect");

	UItemWindowHandle_ClearSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ItemWindowHandle.GetItemNum
// (Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UItemWindowHandle::STATIC_GetItemNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.GetItemNum");

	UItemWindowHandle_GetItemNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ItemWindowHandle.GetSelectedNum
// (PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UItemWindowHandle::STATIC_GetSelectedNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ItemWindowHandle.GetSelectedNum");

	UItemWindowHandle_GetSelectedNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.HtmlHandle.IsPageLock
// (Final, Defined, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHtmlHandle::STATIC_IsPageLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.IsPageLock");

	UHtmlHandle_IsPageLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.HtmlHandle.SetPageLock
// (Defined, Net, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bLock                          (Parm)

void UHtmlHandle::STATIC_SetPageLock(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.SetPageLock");

	UHtmlHandle_SetPageLock_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.HtmlHandle.SetHtmlBuffData
// (Final, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 strData                        (Parm, NeedCtorLink)

void UHtmlHandle::STATIC_SetHtmlBuffData(const struct FString& strData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.SetHtmlBuffData");

	UHtmlHandle_SetHtmlBuffData_Params params;
	params.strData = strData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.HtmlHandle.ControllerExecution
// (Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 strBypass                      (Parm, NeedCtorLink)
// TEnumAsByte<EControlReturnType> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EControlReturnType> UHtmlHandle::STATIC_ControllerExecution(const struct FString& strBypass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.ControllerExecution");

	UHtmlHandle_ControllerExecution_Params params;
	params.strBypass = strBypass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.HtmlHandle.GetFrameMaxHeight
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHtmlHandle::STATIC_GetFrameMaxHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.GetFrameMaxHeight");

	UHtmlHandle_GetFrameMaxHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.HtmlHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UHtmlHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.Clear");

	UHtmlHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.HtmlHandle.LoadHtmlFromString
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 HtmlString                     (Parm, NeedCtorLink)

void UHtmlHandle::STATIC_LoadHtmlFromString(const struct FString& HtmlString)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.LoadHtmlFromString");

	UHtmlHandle_LoadHtmlFromString_Params params;
	params.HtmlString = HtmlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.HtmlHandle.LoadHtml
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UHtmlHandle::STATIC_LoadHtml(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HtmlHandle.LoadHtml");

	UHtmlHandle_LoadHtml_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.FlashCtrlHandle.Invoke
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_Command                      (Parm, NeedCtorLink)
// struct FParamMap               a_Param                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFlashCtrlHandle::STATIC_Invoke(const struct FString& a_Command, const struct FParamMap& a_Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.Invoke");

	UFlashCtrlHandle_Invoke_Params params;
	params.a_Command = a_Command;
	params.a_Param = a_Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.FlashCtrlHandle.SetFlashFile
// (Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_FlashFile                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFlashCtrlHandle::STATIC_SetFlashFile(const struct FString& a_FlashFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.SetFlashFile");

	UFlashCtrlHandle_SetFlashFile_Params params;
	params.a_FlashFile = a_FlashFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.FlashCtrlHandle.GotoFrame
// (Final, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_FrameNumber                  (Parm)

void UFlashCtrlHandle::STATIC_GotoFrame(int a_FrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.GotoFrame");

	UFlashCtrlHandle_GotoFrame_Params params;
	params.a_FrameNumber = a_FrameNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.FlashCtrlHandle.GetCurrentFrame
// (Defined, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UFlashCtrlHandle::STATIC_GetCurrentFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.GetCurrentFrame");

	UFlashCtrlHandle_GetCurrentFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.FlashCtrlHandle.GetTotalFrameCnt
// (Iterator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UFlashCtrlHandle::STATIC_GetTotalFrameCnt()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.GetTotalFrameCnt");

	UFlashCtrlHandle_GetTotalFrameCnt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.FlashCtrlHandle.Stop
// (Final, Defined, Iterator, Latent, Singular, Net, Exec)

void UFlashCtrlHandle::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.Stop");

	UFlashCtrlHandle_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.FlashCtrlHandle.Pause
// (Final, Latent, NetReliable, Simulated, Exec, Native, Event)

void UFlashCtrlHandle::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.Pause");

	UFlashCtrlHandle_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.FlashCtrlHandle.Play
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UFlashCtrlHandle::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.FlashCtrlHandle.Play");

	UFlashCtrlHandle_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.SetEnableTextLink
// (Final, Iterator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bEnable                        (Parm)

void UEditBoxHandle::STATIC_SetEnableTextLink(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.SetEnableTextLink");

	UEditBoxHandle_SetEnableTextLink_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.GetMaxLength
// (Defined, Iterator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEditBoxHandle::STATIC_GetMaxLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.GetMaxLength");

	UEditBoxHandle_GetMaxLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.EditBoxHandle.SetMaxLength
// (Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            maxLength                      (Parm)

void UEditBoxHandle::STATIC_SetMaxLength(int maxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.SetMaxLength");

	UEditBoxHandle_SetMaxLength_Params params;
	params.maxLength = maxLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.SetHighLight
// (Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bHighlight                     (Parm)

void UEditBoxHandle::STATIC_SetHighLight(bool bHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.SetHighLight");

	UEditBoxHandle_SetHighLight_Params params;
	params.bHighlight = bHighlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.SetEditType
// (Final, Defined, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 type                           (Parm, NeedCtorLink)

void UEditBoxHandle::STATIC_SetEditType(const struct FString& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.SetEditType");

	UEditBoxHandle_SetEditType_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UEditBoxHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.Clear");

	UEditBoxHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.SimulateBackspace
// (Defined, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)

void UEditBoxHandle::STATIC_SimulateBackspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.SimulateBackspace");

	UEditBoxHandle_SimulateBackspace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UEditBoxHandle::STATIC_AddString(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.AddString");

	UEditBoxHandle_AddString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.SetString
// (Defined, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UEditBoxHandle::STATIC_SetString(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.SetString");

	UEditBoxHandle_SetString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EditBoxHandle.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEditBoxHandle::GetString()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EditBoxHandle.GetString");

	UEditBoxHandle_GetString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.DrawPanelHandle.PreCheckPanelSize
// (Final, Iterator, Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Width                          (Parm, OutParm)
// int                            Height                         (Parm, OutParm)

void UDrawPanelHandle::STATIC_PreCheckPanelSize(int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.DrawPanelHandle.PreCheckPanelSize");

	UDrawPanelHandle_PreCheckPanelSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function NWindow.DrawPanelHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UDrawPanelHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.DrawPanelHandle.Clear");

	UDrawPanelHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.DrawPanelHandle.InsertDrawItem
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FDrawItemInfo           infNodeItem                    (Parm, NeedCtorLink)

void UDrawPanelHandle::STATIC_InsertDrawItem(const struct FDrawItemInfo& infNodeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.DrawPanelHandle.InsertDrawItem");

	UDrawPanelHandle_InsertDrawItem_Params params;
	params.infNodeItem = infNodeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ComboBoxHandle.AddStringWithColor
// (Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FColor                  Col                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UComboBoxHandle::STATIC_AddStringWithColor(const struct FString& Str, const struct FColor& Col)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.AddStringWithColor");

	UComboBoxHandle_AddStringWithColor_Params params;
	params.Str = Str;
	params.Col = Col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ComboBoxHandle.GetNumOfItems
// (Final, Defined, Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UComboBoxHandle::STATIC_GetNumOfItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.GetNumOfItems");

	UComboBoxHandle_GetNumOfItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ComboBoxHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UComboBoxHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.Clear");

	UComboBoxHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ComboBoxHandle.SetSelectedNum
// (Defined, Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Num                            (Parm)

void UComboBoxHandle::STATIC_SetSelectedNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.SetSelectedNum");

	UComboBoxHandle_SetSelectedNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ComboBoxHandle.GetSelectedNum
// (PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UComboBoxHandle::STATIC_GetSelectedNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.GetSelectedNum");

	UComboBoxHandle_GetSelectedNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ComboBoxHandle.GetReserved
// (Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Num                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UComboBoxHandle::STATIC_GetReserved(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.GetReserved");

	UComboBoxHandle_GetReserved_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ComboBoxHandle.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// int                            Num                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UComboBoxHandle::GetString(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.GetString");

	UComboBoxHandle_GetString_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ComboBoxHandle.SYS_AddStringWithReserved
// (Final, Defined, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// int                            Reserved                       (Parm)

void UComboBoxHandle::STATIC_SYS_AddStringWithReserved(int Index, int Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.SYS_AddStringWithReserved");

	UComboBoxHandle_SYS_AddStringWithReserved_Params params;
	params.Index = Index;
	params.Reserved = Reserved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ComboBoxHandle.AddStringWithReserved
// (Defined, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// int                            Reserved                       (Parm)

void UComboBoxHandle::STATIC_AddStringWithReserved(const struct FString& Str, int Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.AddStringWithReserved");

	UComboBoxHandle_AddStringWithReserved_Params params;
	params.Str = Str;
	params.Reserved = Reserved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ComboBoxHandle.SYS_AddString
// (PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UComboBoxHandle::STATIC_SYS_AddString(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.SYS_AddString");

	UComboBoxHandle_SYS_AddString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ComboBoxHandle.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UComboBoxHandle::STATIC_AddString(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ComboBoxHandle.AddString");

	UComboBoxHandle_AddString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CheckBoxHandle.ToggleDisable
// (Final, Defined, Iterator, Latent, Singular, Exec, Native, Event, Static, Const)

void UCheckBoxHandle::STATIC_ToggleDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CheckBoxHandle.ToggleDisable");

	UCheckBoxHandle_ToggleDisable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CheckBoxHandle.SetDisable
// (Final, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bDisable                       (Parm)

void UCheckBoxHandle::STATIC_SetDisable(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CheckBoxHandle.SetDisable");

	UCheckBoxHandle_SetDisable_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CheckBoxHandle.IsDisable
// (Final, Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UCheckBoxHandle::STATIC_IsDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CheckBoxHandle.IsDisable");

	UCheckBoxHandle_IsDisable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.CheckBoxHandle.IsChecked
// (Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UCheckBoxHandle::STATIC_IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CheckBoxHandle.IsChecked");

	UCheckBoxHandle_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.CheckBoxHandle.SetCheck
// (Final, Defined, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bCheck                         (Parm)

void UCheckBoxHandle::STATIC_SetCheck(bool bCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CheckBoxHandle.SetCheck");

	UCheckBoxHandle_SetCheck_Params params;
	params.bCheck = bCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CheckBoxHandle.SetTitle
// (Defined, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)

void UCheckBoxHandle::STATIC_SetTitle(const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CheckBoxHandle.SetTitle");

	UCheckBoxHandle_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ChatWindowHandle.EnableTexture
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bValue                         (Parm)

void UChatWindowHandle::STATIC_EnableTexture(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ChatWindowHandle.EnableTexture");

	UChatWindowHandle_EnableTexture_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.SetCharacterOffsetY
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            nOffSetY                       (Parm)

void UCharacterViewportWindowHandle::STATIC_SetCharacterOffsetY(int nOffSetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.SetCharacterOffsetY");

	UCharacterViewportWindowHandle_SetCharacterOffsetY_Params params;
	params.nOffSetY = nOffSetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.SetCharacterOffsetX
// (Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            nOffSetX                       (Parm)

void UCharacterViewportWindowHandle::STATIC_SetCharacterOffsetX(int nOffSetX)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.SetCharacterOffsetX");

	UCharacterViewportWindowHandle_SetCharacterOffsetX_Params params;
	params.nOffSetX = nOffSetX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.SetCharacterScale
// (Final, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// float                          fCharacterScale                (Parm)

void UCharacterViewportWindowHandle::STATIC_SetCharacterScale(float fCharacterScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.SetCharacterScale");

	UCharacterViewportWindowHandle_SetCharacterScale_Params params;
	params.fCharacterScale = fCharacterScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.EndZoom
// (Latent, Net, NetReliable, Simulated, Native)

void UCharacterViewportWindowHandle::EndZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.EndZoom");

	UCharacterViewportWindowHandle_EndZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.StartZoom
// (Final, Latent, Singular, Net, Simulated, Exec, Native)
// Parameters:
// bool                           bOut                           (Parm)

void UCharacterViewportWindowHandle::StartZoom(bool bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.StartZoom");

	UCharacterViewportWindowHandle_StartZoom_Params params;
	params.bOut = bOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.EndRotation
// (Defined, Net, NetReliable, Exec, Operator, Static, Const)

void UCharacterViewportWindowHandle::STATIC_EndRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.EndRotation");

	UCharacterViewportWindowHandle_EndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CharacterViewportWindowHandle.StartRotation
// (Defined, Net, Simulated, Event, Operator)
// Parameters:
// bool                           bRight                         (Parm)

void UCharacterViewportWindowHandle::StartRotation(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CharacterViewportWindowHandle.StartRotation");

	UCharacterViewportWindowHandle_StartRotation_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ButtonHandle.SetTexture
// (Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 sForeTexture                   (Parm, NeedCtorLink)
// struct FString                 sBackTexture                   (Parm, NeedCtorLink)
// struct FString                 sHighlightTexture              (Parm, NeedCtorLink)

void UButtonHandle::STATIC_SetTexture(const struct FString& sForeTexture, const struct FString& sBackTexture, const struct FString& sHighlightTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ButtonHandle.SetTexture");

	UButtonHandle_SetTexture_Params params;
	params.sForeTexture = sForeTexture;
	params.sBackTexture = sBackTexture;
	params.sHighlightTexture = sHighlightTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ButtonHandle.SetNameText
// (Final, Defined, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 NameText                       (Parm, NeedCtorLink)

void UButtonHandle::STATIC_SetNameText(const struct FString& NameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ButtonHandle.SetNameText");

	UButtonHandle_SetNameText_Params params;
	params.NameText = NameText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ButtonHandle.SetButtonName
// (Final, Defined, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_NameID                       (Parm)

void UButtonHandle::STATIC_SetButtonName(int a_NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ButtonHandle.SetButtonName");

	UButtonHandle_SetButtonName_Params params;
	params.a_NameID = a_NameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ButtonHandle.GetButtonName
// (Final, Iterator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UButtonHandle::STATIC_GetButtonName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ButtonHandle.GetButtonName");

	UButtonHandle_GetButtonName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BarHandle.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UBarHandle::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BarHandle.Clear");

	UBarHandle_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.BarHandle.GetValue
// (Final, Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_MaxValue                     (Parm, OutParm)
// int                            a_CurValue                     (Parm, OutParm)

void UBarHandle::STATIC_GetValue(int* a_MaxValue, int* a_CurValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BarHandle.GetValue");

	UBarHandle_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_MaxValue != nullptr)
		*a_MaxValue = params.a_MaxValue;
	if (a_CurValue != nullptr)
		*a_CurValue = params.a_CurValue;
}


// Function NWindow.BarHandle.SetValue
// (Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_MaxValue                     (Parm)
// int                            a_CurValue                     (Parm)

void UBarHandle::STATIC_SetValue(int a_MaxValue, int a_CurValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BarHandle.SetValue");

	UBarHandle_SetValue_Params params;
	params.a_MaxValue = a_MaxValue;
	params.a_CurValue = a_CurValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AnimTextureHandle.Stop
// (Final, Defined, Iterator, Latent, Singular, Net, Exec)

void UAnimTextureHandle::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AnimTextureHandle.Stop");

	UAnimTextureHandle_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AnimTextureHandle.Pause
// (Final, Latent, NetReliable, Simulated, Exec, Native, Event)

void UAnimTextureHandle::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AnimTextureHandle.Pause");

	UAnimTextureHandle_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AnimTextureHandle.Play
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UAnimTextureHandle::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AnimTextureHandle.Play");

	UAnimTextureHandle_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AnimTextureHandle.SetLoopCount
// (Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_LoopCount                    (Parm)

void UAnimTextureHandle::STATIC_SetLoopCount(int a_LoopCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AnimTextureHandle.SetLoopCount");

	UAnimTextureHandle_SetLoopCount_Params params;
	params.a_LoopCount = a_LoopCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIDATA_USER.GetClanType
// (Defined, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            type                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_USER::STATIC_GetClanType(int Id, int* type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_USER.GetClanType");

	UUIDATA_USER_GetClanType_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (type != nullptr)
		*type = params.type;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_USER.GetUserName
// (NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            ServerID                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_USER::STATIC_GetUserName(int ServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_USER.GetUserName");

	UUIDATA_USER_GetUserName_Params params;
	params.ServerID = ServerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TUTORIALLIST.CheckTutorial
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            TutorialIndex                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TUTORIALLIST::STATIC_CheckTutorial(int TutorialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TUTORIALLIST.CheckTutorial");

	UUIDATA_TUTORIALLIST_CheckTutorial_Params params;
	params.TutorialIndex = TutorialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetActor
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UUIDATA_TARGET::STATIC_GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetActor");

	UUIDATA_TARGET_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.IsVehicle
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TARGET::STATIC_IsVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.IsVehicle");

	UUIDATA_TARGET_IsVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.IsHPShowableNPC
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TARGET::STATIC_IsHPShowableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.IsHPShowableNPC");

	UUIDATA_TARGET_IsHPShowableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.IsCanBeAttacked
// (Latent, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TARGET::STATIC_IsCanBeAttacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.IsCanBeAttacked");

	UUIDATA_TARGET_IsCanBeAttacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.IsPet
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TARGET::STATIC_IsPet()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.IsPet");

	UUIDATA_TARGET_IsPet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.IsNpc
// (Final, Iterator, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TARGET::STATIC_IsNpc()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.IsNpc");

	UUIDATA_TARGET_IsNpc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.IsServerObject
// (Iterator, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_TARGET::STATIC_IsServerObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.IsServerObject");

	UUIDATA_TARGET_IsServerObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetClassID
// (Defined, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetClassID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetClassID");

	UUIDATA_TARGET_GetTargetClassID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetPledgeID
// (Final, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetPledgeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetPledgeID");

	UUIDATA_TARGET_GetTargetPledgeID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetNameColor
// (PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Level                          (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UUIDATA_TARGET::STATIC_GetTargetNameColor(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetNameColor");

	UUIDATA_TARGET_GetTargetNameColor_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetName
// (Final, Defined, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_TARGET::STATIC_GetTargetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetName");

	UUIDATA_TARGET_GetTargetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetMP
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetMP");

	UUIDATA_TARGET_GetTargetMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetMaxMP
// (Final, Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetMaxMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetMaxMP");

	UUIDATA_TARGET_GetTargetMaxMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetHP
// (Latent, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetHP");

	UUIDATA_TARGET_GetTargetHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetMaxHP
// (Final, Defined, Iterator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetMaxHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetMaxHP");

	UUIDATA_TARGET_GetTargetMaxHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetUserRank
// (Defined, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetUserRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetUserRank");

	UUIDATA_TARGET_GetTargetUserRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_TARGET.GetTargetID
// (Final, Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_TARGET::STATIC_GetTargetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_TARGET.GetTargetID");

	UUIDATA_TARGET_GetTargetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_STATICOBJECT.GetStaticObjectShowHP
// (Latent, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            a_ID                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_STATICOBJECT::STATIC_GetStaticObjectShowHP(int a_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_STATICOBJECT.GetStaticObjectShowHP");

	UUIDATA_STATICOBJECT_GetStaticObjectShowHP_Params params;
	params.a_ID = a_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_STATICOBJECT.GetStaticObjectName
// (Final, Iterator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            NameID                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_STATICOBJECT::STATIC_GetStaticObjectName(int NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_STATICOBJECT.GetStaticObjectName");

	UUIDATA_STATICOBJECT_GetStaticObjectName_Params params;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectHP
// (Iterator, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_STATICOBJECT::STATIC_GetServerObjectHP(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_STATICOBJECT.GetServerObjectHP");

	UUIDATA_STATICOBJECT_GetServerObjectHP_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectMaxHP
// (Final, Defined, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_STATICOBJECT::STATIC_GetServerObjectMaxHP(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_STATICOBJECT.GetServerObjectMaxHP");

	UUIDATA_STATICOBJECT_GetServerObjectMaxHP_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectType
// (Defined, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// TEnumAsByte<EL2ObjectType>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EL2ObjectType> UUIDATA_STATICOBJECT::STATIC_GetServerObjectType(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_STATICOBJECT.GetServerObjectType");

	UUIDATA_STATICOBJECT_GetServerObjectType_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectNameID
// (Final, Net, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_STATICOBJECT::STATIC_GetServerObjectNameID(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_STATICOBJECT.GetServerObjectNameID");

	UUIDATA_STATICOBJECT_GetServerObjectNameID_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetCastRange
// (Net, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_SKILL::STATIC_GetCastRange(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetCastRange");

	UUIDATA_SKILL_GetCastRange_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetMpConsume
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_SKILL::STATIC_GetMpConsume(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetMpConsume");

	UUIDATA_SKILL_GetMpConsume_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetHpConsume
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_SKILL::STATIC_GetHpConsume(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetHpConsume");

	UUIDATA_SKILL_GetHpConsume_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetOperateType
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_SKILL::STATIC_GetOperateType(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetOperateType");

	UUIDATA_SKILL_GetOperateType_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetEnchantSkillLevel
// (Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_SKILL::STATIC_GetEnchantSkillLevel(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetEnchantSkillLevel");

	UUIDATA_SKILL_GetEnchantSkillLevel_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetEnchantName
// (Final, Defined, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_SKILL::STATIC_GetEnchantName(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetEnchantName");

	UUIDATA_SKILL_GetEnchantName_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetDescription
// (Defined, Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_SKILL::STATIC_GetDescription(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetDescription");

	UUIDATA_SKILL_GetDescription_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetName
// (Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_SKILL::STATIC_GetName(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetName");

	UUIDATA_SKILL_GetName_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetIconName
// (Final, Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_SKILL::STATIC_GetIconName(const struct FItemID& Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetIconName");

	UUIDATA_SKILL_GetIconName_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetDataCount
// (Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_SKILL::STATIC_GetDataCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetDataCount");

	UUIDATA_SKILL_GetDataCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetNextID
// (Final, Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemID UUIDATA_SKILL::STATIC_GetNextID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetNextID");

	UUIDATA_SKILL_GetNextID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_SKILL.GetFirstID
// (Final, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemID UUIDATA_SKILL::STATIC_GetFirstID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_SKILL.GetFirstID");

	UUIDATA_SKILL_GetFirstID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_REFINERYOPTION.GetOptionDescription
// (Latent, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            a_ID                           (Parm)
// struct FString                 a_Desc1                        (Parm, OutParm, NeedCtorLink)
// struct FString                 a_Desc2                        (Parm, OutParm, NeedCtorLink)
// struct FString                 a_Desc3                        (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_REFINERYOPTION::STATIC_GetOptionDescription(int a_ID, struct FString* a_Desc1, struct FString* a_Desc2, struct FString* a_Desc3)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_REFINERYOPTION.GetOptionDescription");

	UUIDATA_REFINERYOPTION_GetOptionDescription_Params params;
	params.a_ID = a_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Desc1 != nullptr)
		*a_Desc1 = params.a_Desc1;
	if (a_Desc2 != nullptr)
		*a_Desc2 = params.a_Desc2;
	if (a_Desc3 != nullptr)
		*a_Desc3 = params.a_Desc3;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_REFINERYOPTION.GetQuality
// (PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            a_ID                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_REFINERYOPTION::STATIC_GetQuality(int a_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_REFINERYOPTION.GetQuality");

	UUIDATA_REFINERYOPTION_GetQuality_Params params;
	params.a_ID = a_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeIsMultipleProduct
// (Latent, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeIsMultipleProduct(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeIsMultipleProduct");

	UUIDATA_RECIPE_GetRecipeIsMultipleProduct_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeMaterialItemBy2Condition
// (Final, Defined, Iterator, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            nSuccessRate                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeMaterialItemBy2Condition(int Id, int nSuccessRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeMaterialItemBy2Condition");

	UUIDATA_RECIPE_GetRecipeMaterialItemBy2Condition_Params params;
	params.Id = Id;
	params.nSuccessRate = nSuccessRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeDescriptionBy2Condition
// (Final, Iterator, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            nSuccessRate                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeDescriptionBy2Condition(int Id, int nSuccessRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeDescriptionBy2Condition");

	UUIDATA_RECIPE_GetRecipeDescriptionBy2Condition_Params params;
	params.Id = Id;
	params.nSuccessRate = nSuccessRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeIconNameBy2Condition
// (Iterator, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            nSuccessRate                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeIconNameBy2Condition(int Id, int nSuccessRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeIconNameBy2Condition");

	UUIDATA_RECIPE_GetRecipeIconNameBy2Condition_Params params;
	params.Id = Id;
	params.nSuccessRate = nSuccessRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeNameBy2Condition
// (Final, Defined, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            nSuccessRate                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeNameBy2Condition(int Id, int nSuccessRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeNameBy2Condition");

	UUIDATA_RECIPE_GetRecipeNameBy2Condition_Params params;
	params.Id = Id;
	params.nSuccessRate = nSuccessRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeMaterialItem
// (Final, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeMaterialItem(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeMaterialItem");

	UUIDATA_RECIPE_GetRecipeMaterialItem_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeSuccessRate
// (PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeSuccessRate(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeSuccessRate");

	UUIDATA_RECIPE_GetRecipeSuccessRate_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeDescription
// (Final, Defined, Iterator, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeDescription(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeDescription");

	UUIDATA_RECIPE_GetRecipeDescription_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeLevel
// (Defined, Iterator, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeLevel(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeLevel");

	UUIDATA_RECIPE_GetRecipeLevel_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeMpConsume
// (Final, Iterator, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeMpConsume(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeMpConsume");

	UUIDATA_RECIPE_GetRecipeMpConsume_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeCrystalType
// (Iterator, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeCrystalType(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeCrystalType");

	UUIDATA_RECIPE_GetRecipeCrystalType_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeProductNum
// (Final, Defined, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeProductNum(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeProductNum");

	UUIDATA_RECIPE_GetRecipeProductNum_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeProductID
// (Defined, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RECIPE::STATIC_GetRecipeProductID(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeProductID");

	UUIDATA_RECIPE_GetRecipeProductID_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeIconName
// (Final, Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RECIPE::STATIC_GetRecipeIconName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeIconName");

	UUIDATA_RECIPE_GetRecipeIconName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RECIPE.GetRecipeItemID
// (Latent, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FItemID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemID UUIDATA_RECIPE::STATIC_GetRecipeItemID(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RECIPE.GetRecipeItemID");

	UUIDATA_RECIPE_GetRecipeItemID_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RAID.GetRaidLoc
// (Final, Defined, Iterator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUIDATA_RAID::STATIC_GetRaidLoc(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RAID.GetRaidLoc");

	UUIDATA_RAID_GetRaidLoc_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RAID.GetRaidDescription
// (Defined, Iterator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            RaidID                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_RAID::STATIC_GetRaidDescription(int RaidID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RAID.GetRaidDescription");

	UUIDATA_RAID_GetRaidDescription_Params params;
	params.RaidID = RaidID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RAID.GetRaidMonsterZone
// (Final, Iterator, Singular, Exec, Operator, Static, Const)
// Parameters:
// int                            RaidID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RAID::STATIC_GetRaidMonsterZone(int RaidID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RAID.GetRaidMonsterZone");

	UUIDATA_RAID_GetRaidMonsterZone_Params params;
	params.RaidID = RaidID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RAID.GetRaidMonsterLevel
// (Final, Defined, Latent, Exec, Operator, Static, Const)
// Parameters:
// int                            RaidID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RAID::STATIC_GetRaidMonsterLevel(int RaidID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RAID.GetRaidMonsterLevel");

	UUIDATA_RAID_GetRaidMonsterLevel_Params params;
	params.RaidID = RaidID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RAID.GetRaidMonsterID
// (Iterator, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            RaidID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_RAID::STATIC_GetRaidMonsterID(int RaidID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RAID.GetRaidMonsterID");

	UUIDATA_RAID_GetRaidMonsterID_Params params;
	params.RaidID = RaidID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_RAID.IsValidData
// (Final, Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_RAID::STATIC_IsValidData(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_RAID.IsValidData");

	UUIDATA_RAID_IsValidData_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestReward
// (Final, Iterator, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// TArray<int>                    rewardIDList                   (Parm, OutParm, NeedCtorLink)
// TArray<int>                    rewardNumList                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_QUEST::STATIC_GetQuestReward(int Id, int Level, TArray<int>* rewardIDList, TArray<int>* rewardNumList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestReward");

	UUIDATA_QUEST_GetQuestReward_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rewardIDList != nullptr)
		*rewardIDList = params.rewardIDList;
	if (rewardNumList != nullptr)
		*rewardNumList = params.rewardNumList;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestIscategory
// (Defined, Iterator, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetQuestIscategory(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestIscategory");

	UUIDATA_QUEST_GetQuestIscategory_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.IsShowableItemNumQuest
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_QUEST::STATIC_IsShowableItemNumQuest(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.IsShowableItemNumQuest");

	UUIDATA_QUEST_IsShowableItemNumQuest_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.IsShowableJournalQuest
// (Final, Latent, Singular, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_QUEST::STATIC_IsShowableJournalQuest(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.IsShowableJournalQuest");

	UUIDATA_QUEST_IsShowableJournalQuest_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestZone
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetQuestZone(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestZone");

	UUIDATA_QUEST_GetQuestZone_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetClearedQuest
// (Defined, Singular, Net, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetClearedQuest(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetClearedQuest");

	UUIDATA_QUEST_GetClearedQuest_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestType
// (Latent, Singular, Net, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetQuestType(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestType");

	UUIDATA_QUEST_GetQuestType_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetMaxLevel
// (Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetMaxLevel(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetMaxLevel");

	UUIDATA_QUEST_GetMaxLevel_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetMinLevel
// (PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetMinLevel(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetMinLevel");

	UUIDATA_QUEST_GetMinLevel_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetIntro
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetIntro(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetIntro");

	UUIDATA_QUEST_GetIntro_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetRequirement
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetRequirement(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetRequirement");

	UUIDATA_QUEST_GetRequirement_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetStartNPCID
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetStartNPCID(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetStartNPCID");

	UUIDATA_QUEST_GetStartNPCID_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetStartNPCLoc
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUIDATA_QUEST::STATIC_GetStartNPCLoc(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetStartNPCLoc");

	UUIDATA_QUEST_GetStartNPCLoc_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetTargetName
// (Final, Defined, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetTargetName(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetTargetName");

	UUIDATA_QUEST_GetTargetName_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetTargetLoc
// (Final, Latent, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUIDATA_QUEST::STATIC_GetTargetLoc(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetTargetLoc");

	UUIDATA_QUEST_GetTargetLoc_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestItem
// (Final, Iterator, Latent, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetQuestItem(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestItem");

	UUIDATA_QUEST_GetQuestItem_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestDescription
// (Defined, Iterator, Latent, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetQuestDescription(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestDescription");

	UUIDATA_QUEST_GetQuestDescription_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestJournalName
// (Final, Defined, Iterator, Latent, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetQuestJournalName(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestJournalName");

	UUIDATA_QUEST_GetQuestJournalName_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetQuestName
// (PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_QUEST::STATIC_GetQuestName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetQuestName");

	UUIDATA_QUEST_GetQuestName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.IsMinimapOnly
// (Final, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            Level                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_QUEST::STATIC_IsMinimapOnly(int Id, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.IsMinimapOnly");

	UUIDATA_QUEST_IsMinimapOnly_Params params;
	params.Id = Id;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.IsValidData
// (Final, Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_QUEST::STATIC_IsValidData(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.IsValidData");

	UUIDATA_QUEST_IsValidData_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetNextID
// (Final, Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetNextID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetNextID");

	UUIDATA_QUEST_GetNextID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_QUEST.GetFirstID
// (Final, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_QUEST::STATIC_GetFirstID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_QUEST.GetFirstID");

	UUIDATA_QUEST_GetFirstID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetInventoryCount
// (Defined, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PLAYER::STATIC_GetInventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetInventoryCount");

	UUIDATA_PLAYER_GetInventoryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetInventoryLimit
// (Final, Defined, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PLAYER::STATIC_GetInventoryLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetInventoryLimit");

	UUIDATA_PLAYER_GetInventoryLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.HasCrystallizeAbility
// (Iterator, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_PLAYER::STATIC_HasCrystallizeAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.HasCrystallizeAbility");

	UUIDATA_PLAYER_HasCrystallizeAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetPlayerEnvironment
// (Final, Iterator, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TEnumAsByte<EEnvType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EEnvType> UUIDATA_PLAYER::STATIC_GetPlayerEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetPlayerEnvironment");

	UUIDATA_PLAYER_GetPlayerEnvironment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetPlayerMoveType
// (Defined, Iterator, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TEnumAsByte<EMoveType>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EMoveType> UUIDATA_PLAYER::STATIC_GetPlayerMoveType()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetPlayerMoveType");

	UUIDATA_PLAYER_GetPlayerMoveType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetPlayerEXPRate
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIDATA_PLAYER::STATIC_GetPlayerEXPRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetPlayerEXPRate");

	UUIDATA_PLAYER_GetPlayerEXPRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetRecipeShopMsg
// (Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_PLAYER::STATIC_GetRecipeShopMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetRecipeShopMsg");

	UUIDATA_PLAYER_GetRecipeShopMsg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.GetPlayerID
// (Final, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PLAYER::STATIC_GetPlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.GetPlayerID");

	UUIDATA_PLAYER_GetPlayerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PLAYER.IsHero
// (Defined, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_PLAYER::STATIC_IsHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PLAYER.IsHero");

	UUIDATA_PLAYER_IsHero_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetEXPRate
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIDATA_PET::STATIC_GetPetEXPRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetEXPRate");

	UUIDATA_PET_GetPetEXPRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetIsPetOrSummoned
// (Iterator, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetIsPetOrSummoned()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetIsPetOrSummoned");

	UUIDATA_PET_GetIsPetOrSummoned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetCarringWeight
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetCarringWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetCarringWeight");

	UUIDATA_PET_GetPetCarringWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetCarryWeight
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetCarryWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetCarryWeight");

	UUIDATA_PET_GetPetCarryWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetMaxEXP
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FINT64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FINT64 UUIDATA_PET::STATIC_GetPetMaxEXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetMaxEXP");

	UUIDATA_PET_GetPetMaxEXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetMinEXP
// (Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FINT64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FINT64 UUIDATA_PET::STATIC_GetPetMinEXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetMinEXP");

	UUIDATA_PET_GetPetMinEXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetMaxFatigue
// (Final, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetMaxFatigue()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetMaxFatigue");

	UUIDATA_PET_GetPetMaxFatigue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetMaxMP
// (Defined, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetMaxMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetMaxMP");

	UUIDATA_PET_GetPetMaxMP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetMaxHP
// (Final, Defined, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetMaxHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetMaxHP");

	UUIDATA_PET_GetPetMaxHP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetEXP
// (Iterator, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FINT64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FINT64 UUIDATA_PET::STATIC_GetPetEXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetEXP");

	UUIDATA_PET_GetPetEXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetFatigue
// (Final, Iterator, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetFatigue()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetFatigue");

	UUIDATA_PET_GetPetFatigue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetLevel
// (Defined, Iterator, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetLevel");

	UUIDATA_PET_GetPetLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetSP
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetSP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetSP");

	UUIDATA_PET_GetPetSP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetMP
// (Latent, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetMP");

	UUIDATA_PET_GetPetMP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetHP
// (Final, Latent, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetHP");

	UUIDATA_PET_GetPetHP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetID
// (Defined, Latent, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_PET::STATIC_GetPetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetID");

	UUIDATA_PET_GetPetID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PET.GetPetName
// (Final, Defined, Latent, Singular, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_PET::STATIC_GetPetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PET.GetPetName");

	UUIDATA_PET_GetPetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PARTY.GetMemberVirtualName
// (Final, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_PARTY::STATIC_GetMemberVirtualName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PARTY.GetMemberVirtualName");

	UUIDATA_PARTY_GetMemberVirtualName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PARTY.MovePartyMember
// (Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            SrcPos                         (Parm)
// int                            TarPos                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_PARTY::STATIC_MovePartyMember(int SrcPos, int TarPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PARTY.MovePartyMember");

	UUIDATA_PARTY_MovePartyMember_Params params;
	params.SrcPos = SrcPos;
	params.TarPos = TarPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_PARTY.GetMemberName
// (Final, Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_PARTY::STATIC_GetMemberName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_PARTY.GetMemberName");

	UUIDATA_PARTY_GetMemberName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_NPC.GetNpcProperty
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// TArray<int>                    arrProperty                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_NPC::STATIC_GetNpcProperty(int Id, TArray<int>* arrProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_NPC.GetNpcProperty");

	UUIDATA_NPC_GetNpcProperty_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (arrProperty != nullptr)
		*arrProperty = params.arrProperty;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_NPC.GetNPCName
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_NPC::STATIC_GetNPCName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_NPC.GetNPCName");

	UUIDATA_NPC_GetNPCName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_NPC.IsValidData
// (Final, Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_NPC::STATIC_IsValidData(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_NPC.IsValidData");

	UUIDATA_NPC_IsValidData_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_NPC.GetNextID
// (Final, Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_NPC::STATIC_GetNextID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_NPC.GetNextID");

	UUIDATA_NPC_GetNextID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_NPC.GetFirstID
// (Final, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_NPC::STATIC_GetFirstID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_NPC.GetFirstID");

	UUIDATA_NPC_GetFirstID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_MACRO.GetMacroCount
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_MACRO::STATIC_GetMacroCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_MACRO.GetMacroCount");

	UUIDATA_MACRO_GetMacroCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_MACRO.GetMacroInfo
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// struct FMacroInfo              Info                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_MACRO::STATIC_GetMacroInfo(const struct FItemID& cID, struct FMacroInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_MACRO.GetMacroInfo");

	UUIDATA_MACRO_GetMacroInfo_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemNameClass
// (Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetItemNameClass(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemNameClass");

	UUIDATA_ITEM_GetItemNameClass_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetEtcItemTextureName
// (Final, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetEtcItemTextureName(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetEtcItemTextureName");

	UUIDATA_ITEM_GetEtcItemTextureName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetSetItemEnchantEffectDescription
// (Defined, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetSetItemEnchantEffectDescription(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetSetItemEnchantEffectDescription");

	UUIDATA_ITEM_GetSetItemEnchantEffectDescription_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetSetItemEffectDescription
// (Final, Defined, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            EffectID                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetSetItemEffectDescription(const struct FItemID& Id, int EffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetSetItemEffectDescription");

	UUIDATA_ITEM_GetSetItemEffectDescription_Params params;
	params.Id = Id;
	params.EffectID = EffectID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetSetItemEnchantValue
// (Iterator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetSetItemEnchantValue(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetSetItemEnchantValue");

	UUIDATA_ITEM_GetSetItemEnchantValue_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetSetItemID
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            setId                          (Parm)
// int                            Index                          (Parm)
// TArray<struct FItemID>         arrID                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_ITEM::STATIC_GetSetItemID(const struct FItemID& Id, int setId, int Index, TArray<struct FItemID>* arrID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetSetItemID");

	UUIDATA_ITEM_GetSetItemID_Params params;
	params.Id = Id;
	params.setId = setId;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (arrID != nullptr)
		*arrID = params.arrID;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetSetItemFirstID
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            setId                          (Parm)
// int                            Index                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetSetItemFirstID(const struct FItemID& Id, int setId, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetSetItemFirstID");

	UUIDATA_ITEM_GetSetItemFirstID_Params params;
	params.Id = Id;
	params.setId = setId;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.IsExistSetItem
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            setId                          (Parm)
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_ITEM::STATIC_IsExistSetItem(const struct FItemID& Id, int setId, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.IsExistSetItem");

	UUIDATA_ITEM_IsExistSetItem_Params params;
	params.Id = Id;
	params.setId = setId;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetSetItemNum
// (Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            setIdId                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetSetItemNum(const struct FItemID& Id, int setIdId)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetSetItemNum");

	UUIDATA_ITEM_GetSetItemNum_Params params;
	params.Id = Id;
	params.setIdId = setIdId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetRefineryItemName
// (Final, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 strItemName                    (Parm, NeedCtorLink)
// int                            RefineryOp1                    (Parm)
// int                            RefineryOp2                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetRefineryItemName(const struct FString& strItemName, int RefineryOp1, int RefineryOp2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetRefineryItemName");

	UUIDATA_ITEM_GetRefineryItemName_Params params;
	params.strItemName = strItemName;
	params.RefineryOp1 = RefineryOp1;
	params.RefineryOp2 = RefineryOp2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.IsCrystallizable
// (Defined, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_ITEM::STATIC_IsCrystallizable(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.IsCrystallizable");

	UUIDATA_ITEM_IsCrystallizable_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemInfo
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FItemInfo               Info                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_ITEM::STATIC_GetItemInfo(const struct FItemID& Id, struct FItemInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemInfo");

	UUIDATA_ITEM_GetItemInfo_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemCrystalType
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetItemCrystalType(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemCrystalType");

	UUIDATA_ITEM_GetItemCrystalType_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemDataType
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetItemDataType(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemDataType");

	UUIDATA_ITEM_GetItemDataType_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemWeight
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetItemWeight(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemWeight");

	UUIDATA_ITEM_GetItemWeight_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemDescription
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetItemDescription(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemDescription");

	UUIDATA_ITEM_GetItemDescription_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemTextureName
// (Defined, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetItemTextureName(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemTextureName");

	UUIDATA_ITEM_GetItemTextureName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemAdditionalName
// (PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::STATIC_GetItemAdditionalName(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemAdditionalName");

	UUIDATA_ITEM_GetItemAdditionalName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetItemName
// (Final, Defined, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// struct FItemID                 Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_ITEM::GetItemName(const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetItemName");

	UUIDATA_ITEM_GetItemName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetDataCount
// (Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_ITEM::STATIC_GetDataCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetDataCount");

	UUIDATA_ITEM_GetDataCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetNextID
// (Final, Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemID UUIDATA_ITEM::STATIC_GetNextID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetNextID");

	UUIDATA_ITEM_GetNextID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_ITEM.GetFirstID
// (Final, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemID UUIDATA_ITEM::STATIC_GetFirstID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_ITEM.GetFirstID");

	UUIDATA_ITEM_GetFirstID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingDescription
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_HUNTINGZONE::STATIC_GetHuntingDescription(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetHuntingDescription");

	UUIDATA_HUNTINGZONE_GetHuntingDescription_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZone
// (Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_HUNTINGZONE::STATIC_GetHuntingZone(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZone");

	UUIDATA_HUNTINGZONE_GetHuntingZone_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneLoc
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUIDATA_HUNTINGZONE::STATIC_GetHuntingZoneLoc(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneLoc");

	UUIDATA_HUNTINGZONE_GetHuntingZoneLoc_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetMaxLevel
// (Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_HUNTINGZONE::STATIC_GetMaxLevel(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetMaxLevel");

	UUIDATA_HUNTINGZONE_GetMaxLevel_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetMinLevel
// (PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_HUNTINGZONE::STATIC_GetMinLevel(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetMinLevel");

	UUIDATA_HUNTINGZONE_GetMinLevel_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneType
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_HUNTINGZONE::STATIC_GetHuntingZoneType(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneType");

	UUIDATA_HUNTINGZONE_GetHuntingZoneType_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneName
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_HUNTINGZONE::STATIC_GetHuntingZoneName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneName");

	UUIDATA_HUNTINGZONE_GetHuntingZoneName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HUNTINGZONE.IsValidData
// (Final, Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_HUNTINGZONE::STATIC_IsValidData(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HUNTINGZONE.IsValidData");

	UUIDATA_HUNTINGZONE_IsValidData_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HENNA.GetIconTex
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_ID                           (Parm)
// struct FString                 a_IconTex                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_HENNA::STATIC_GetIconTex(int a_ID, struct FString* a_IconTex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HENNA.GetIconTex");

	UUIDATA_HENNA_GetIconTex_Params params;
	params.a_ID = a_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_IconTex != nullptr)
		*a_IconTex = params.a_IconTex;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HENNA.GetDescription
// (Defined, Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_ID                           (Parm)
// struct FString                 a_Description                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_HENNA::STATIC_GetDescription(int a_ID, struct FString* a_Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HENNA.GetDescription");

	UUIDATA_HENNA_GetDescription_Params params;
	params.a_ID = a_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Description != nullptr)
		*a_Description = params.a_Description;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_HENNA.GetItemName
// (Final, Defined, Iterator, Latent, Singular, Simulated, Native)
// Parameters:
// int                            a_ID                           (Parm)
// struct FString                 a_ItemName                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_HENNA::GetItemName(int a_ID, struct FString* a_ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_HENNA.GetItemName");

	UUIDATA_HENNA_GetItemName_Params params;
	params.a_ID = a_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_ItemName != nullptr)
		*a_ItemName = params.a_ItemName;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_GAMETIP.GetDataByIndex
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_nIndex                       (Parm)
// struct FGameTipData            a_GameTipData                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_GAMETIP::STATIC_GetDataByIndex(int a_nIndex, struct FGameTipData* a_GameTipData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_GAMETIP.GetDataByIndex");

	UUIDATA_GAMETIP_GetDataByIndex_Params params;
	params.a_nIndex = a_nIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_GameTipData != nullptr)
		*a_GameTipData = params.a_GameTipData;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_GAMETIP.GetDataCount
// (Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_GAMETIP::STATIC_GetDataCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_GAMETIP.GetDataCount");

	UUIDATA_GAMETIP_GetDataCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetSubClanSkillLevel
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            SkillID                        (Parm)
// int                            subClanIndex                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_CLAN::STATIC_GetSubClanSkillLevel(int SkillID, int subClanIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetSubClanSkillLevel");

	UUIDATA_CLAN_GetSubClanSkillLevel_Params params;
	params.SkillID = SkillID;
	params.subClanIndex = subClanIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetSkillLevel
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            SkillID                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDATA_CLAN::STATIC_GetSkillLevel(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetSkillLevel");

	UUIDATA_CLAN_GetSkillLevel_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.RequestSubClanSkillList
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            subClanIndex                   (Parm)

void UUIDATA_CLAN::STATIC_RequestSubClanSkillList(int subClanIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.RequestSubClanSkillList");

	UUIDATA_CLAN_RequestSubClanSkillList_Params params;
	params.subClanIndex = subClanIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIDATA_CLAN.RequestClanSkillList
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)

void UUIDATA_CLAN::STATIC_RequestClanSkillList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.RequestClanSkillList");

	UUIDATA_CLAN_RequestClanSkillList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIDATA_CLAN.RequestClanInfo
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)

void UUIDATA_CLAN::STATIC_RequestClanInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.RequestClanInfo");

	UUIDATA_CLAN_RequestClanInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIDATA_CLAN.GetNameValue
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            namevalue                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_CLAN::STATIC_GetNameValue(int Id, int* namevalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetNameValue");

	UUIDATA_CLAN_GetNameValue_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (namevalue != nullptr)
		*namevalue = params.namevalue;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetAllianceCrestTexture
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// class UTexture*                texCrest                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_CLAN::STATIC_GetAllianceCrestTexture(int Id, class UTexture** texCrest)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetAllianceCrestTexture");

	UUIDATA_CLAN_GetAllianceCrestTexture_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (texCrest != nullptr)
		*texCrest = params.texCrest;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetEmblemTexture
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// class UTexture*                emblemTexture                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_CLAN::STATIC_GetEmblemTexture(int Id, class UTexture** emblemTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetEmblemTexture");

	UUIDATA_CLAN_GetEmblemTexture_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (emblemTexture != nullptr)
		*emblemTexture = params.emblemTexture;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetCrestTexture
// (NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// class UTexture*                texCrest                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDATA_CLAN::STATIC_GetCrestTexture(int Id, class UTexture** texCrest)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetCrestTexture");

	UUIDATA_CLAN_GetCrestTexture_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (texCrest != nullptr)
		*texCrest = params.texCrest;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetAllianceName
// (Final, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_CLAN::STATIC_GetAllianceName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetAllianceName");

	UUIDATA_CLAN_GetAllianceName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIDATA_CLAN.GetName
// (Defined, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIDATA_CLAN::STATIC_GetName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIDATA_CLAN.GetName");

	UUIDATA_CLAN_GetName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.VehicleAPI.AirShipMoveDown
// (Final, PreOperator, NetReliable, Exec, Operator, Static, Const)

void UVehicleAPI::STATIC_AirShipMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VehicleAPI.AirShipMoveDown");

	UVehicleAPI_AirShipMoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VehicleAPI.AirShipMoveUp
// (Final, Iterator, Latent, NetReliable, Exec, Operator, Static, Const)

void UVehicleAPI::STATIC_AirShipMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VehicleAPI.AirShipMoveUp");

	UVehicleAPI_AirShipMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VehicleAPI.RequestExAirShipTeleport
// (Final, Iterator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_SpotID                       (Parm)

void UVehicleAPI::STATIC_RequestExAirShipTeleport(int a_SpotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VehicleAPI.RequestExAirShipTeleport");

	UVehicleAPI_RequestExAirShipTeleport_Params params;
	params.a_SpotID = a_SpotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.VehicleAPI.GetVehicle
// (Final, Defined, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_VehicleID                    (Parm)
// class AVehicle*                ReturnValue                    (Parm, OutParm, ReturnParm)

class AVehicle* UVehicleAPI::STATIC_GetVehicle(int a_VehicleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.VehicleAPI.GetVehicle");

	UVehicleAPI_GetVehicle_Params params;
	params.a_VehicleID = a_VehicleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.TutorialAPI.RequestExSetTutorial
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            TutorialIndex                  (Parm)

void UTutorialAPI::STATIC_RequestExSetTutorial(int TutorialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TutorialAPI.RequestExSetTutorial");

	UTutorialAPI_RequestExSetTutorial_Params params;
	params.TutorialIndex = TutorialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TeamMatchAPI.RequestExBlockGameVote
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            a_Stage                        (Parm)
// int                            a_Start                        (Parm)

void UTeamMatchAPI::STATIC_RequestExBlockGameVote(int a_Stage, int a_Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TeamMatchAPI.RequestExBlockGameVote");

	UTeamMatchAPI_RequestExBlockGameVote_Params params;
	params.a_Stage = a_Stage;
	params.a_Start = a_Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TeamMatchAPI.RequestExBlockGameEnter
// (Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            a_Stage                        (Parm)
// int                            a_TeamID                       (Parm)

void UTeamMatchAPI::STATIC_RequestExBlockGameEnter(int a_Stage, int a_TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TeamMatchAPI.RequestExBlockGameEnter");

	UTeamMatchAPI_RequestExBlockGameEnter_Params params;
	params.a_Stage = a_Stage;
	params.a_TeamID = a_TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TeamMatchAPI.RequestBlockGameAllData
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UTeamMatchAPI::STATIC_RequestBlockGameAllData()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TeamMatchAPI.RequestBlockGameAllData");

	UTeamMatchAPI_RequestBlockGameAllData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TeamMatchAPI.RequestExCleftEnter
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            a_TeamID                       (Parm)

void UTeamMatchAPI::STATIC_RequestExCleftEnter(int a_TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TeamMatchAPI.RequestExCleftEnter");

	UTeamMatchAPI_RequestExCleftEnter_Params params;
	params.a_TeamID = a_TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.TeamMatchAPI.RequestCleftAllData
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UTeamMatchAPI::STATIC_RequestCleftAllData()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.TeamMatchAPI.RequestCleftAllData");

	UTeamMatchAPI_RequestCleftAllData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SSQAPI.RequestSSQStatus
// (Defined, Latent, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            nStatusID                      (Parm)

void USSQAPI::STATIC_RequestSSQStatus(int nStatusID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SSQAPI.RequestSSQStatus");

	USSQAPI_RequestSSQStatus_Params params;
	params.nStatusID = nStatusID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SiegeAPI.RequestSetCastleSiegeTime
// (Final, Defined, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            castleID                       (Parm)
// int                            TimeID                         (Parm)

void USiegeAPI::STATIC_RequestSetCastleSiegeTime(int castleID, int TimeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SiegeAPI.RequestSetCastleSiegeTime");

	USiegeAPI_RequestSetCastleSiegeTime_Params params;
	params.castleID = castleID;
	params.TimeID = TimeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SiegeAPI.RequestConfirmCastleSiegeWaitingList
// (Defined, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            castleID                       (Parm)
// int                            clanID                         (Parm)
// int                            IsRegister                     (Parm)

void USiegeAPI::STATIC_RequestConfirmCastleSiegeWaitingList(int castleID, int clanID, int IsRegister)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SiegeAPI.RequestConfirmCastleSiegeWaitingList");

	USiegeAPI_RequestConfirmCastleSiegeWaitingList_Params params;
	params.castleID = castleID;
	params.clanID = clanID;
	params.IsRegister = IsRegister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SiegeAPI.RequestJoinCastleSiege
// (Final, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            castleID                       (Parm)
// int                            IsAttacker                     (Parm)
// int                            IsRegister                     (Parm)

void USiegeAPI::STATIC_RequestJoinCastleSiege(int castleID, int IsAttacker, int IsRegister)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SiegeAPI.RequestJoinCastleSiege");

	USiegeAPI_RequestJoinCastleSiege_Params params;
	params.castleID = castleID;
	params.IsAttacker = IsAttacker;
	params.IsRegister = IsRegister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SiegeAPI.RequestCastleSiegeDefenderList
// (Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            castleID                       (Parm)

void USiegeAPI::STATIC_RequestCastleSiegeDefenderList(int castleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SiegeAPI.RequestCastleSiegeDefenderList");

	USiegeAPI_RequestCastleSiegeDefenderList_Params params;
	params.castleID = castleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.SiegeAPI.RequestCastleSiegeAttackerList
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            castleID                       (Parm)

void USiegeAPI::STATIC_RequestCastleSiegeAttackerList(int castleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.SiegeAPI.RequestCastleSiegeAttackerList");

	USiegeAPI_RequestCastleSiegeAttackerList_Params params;
	params.castleID = castleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UShortcutAPI::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.Clear");

	UShortcutAPI_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.RestoreDefault
// (Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UShortcutAPI::STATIC_RestoreDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.RestoreDefault");

	UShortcutAPI_RestoreDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.DeactivateAll
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UShortcutAPI::STATIC_DeactivateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.DeactivateAll");

	UShortcutAPI_DeactivateAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.DeactivateGroup
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UShortcutAPI::STATIC_DeactivateGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.DeactivateGroup");

	UShortcutAPI_DeactivateGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.ActivateGroup
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UShortcutAPI::STATIC_ActivateGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.ActivateGroup");

	UShortcutAPI_ActivateGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.ExecuteShortcutBySlot
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            Slot                           (Parm)

void UShortcutAPI::STATIC_ExecuteShortcutBySlot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.ExecuteShortcutBySlot");

	UShortcutAPI_ExecuteShortcutBySlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.RequestShortcutScriptData
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FShortcutScriptData     Data                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UShortcutAPI::STATIC_RequestShortcutScriptData(int Id, struct FShortcutScriptData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.RequestShortcutScriptData");

	UShortcutAPI_RequestShortcutScriptData_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function NWindow.ShortcutAPI.RequestList
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UShortcutAPI::STATIC_RequestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.RequestList");

	UShortcutAPI_RequestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.Save
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UShortcutAPI::STATIC_Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.Save");

	UShortcutAPI_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.UnlockShortcut
// (Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UShortcutAPI::STATIC_UnlockShortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.UnlockShortcut");

	UShortcutAPI_UnlockShortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.LockShortcut
// (Final, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UShortcutAPI::STATIC_LockShortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.LockShortcut");

	UShortcutAPI_LockShortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ShortcutAPI.GetActiveGroupList
// (Defined, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// TArray<struct FString>         groups                         (Parm, OutParm, NeedCtorLink)

void UShortcutAPI::STATIC_GetActiveGroupList(TArray<struct FString>* groups)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.GetActiveGroupList");

	UShortcutAPI_GetActiveGroupList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (groups != nullptr)
		*groups = params.groups;
}


// Function NWindow.ShortcutAPI.GetGroupList
// (Final, Defined, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// TArray<struct FString>         groups                         (Parm, OutParm, NeedCtorLink)

void UShortcutAPI::STATIC_GetGroupList(TArray<struct FString>* groups)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.GetGroupList");

	UShortcutAPI_GetGroupList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (groups != nullptr)
		*groups = params.groups;
}


// Function NWindow.ShortcutAPI.GetGroupCommandList
// (Iterator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// TArray<struct FShortcutCommandItem> commands                       (Parm, OutParm, NeedCtorLink)

void UShortcutAPI::STATIC_GetGroupCommandList(const struct FString& GroupName, TArray<struct FShortcutCommandItem>* commands)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.GetGroupCommandList");

	UShortcutAPI_GetGroupCommandList_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (commands != nullptr)
		*commands = params.commands;
}


// Function NWindow.ShortcutAPI.AssignCommand
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)
// struct FShortcutCommandItem    Command                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UShortcutAPI::STATIC_AssignCommand(const struct FString& GroupName, const struct FShortcutCommandItem& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.AssignCommand");

	UShortcutAPI_AssignCommand_Params params;
	params.GroupName = GroupName;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ShortcutAPI.AssignSpecialKey
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FShortcutCommandItem    Command                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UShortcutAPI::STATIC_AssignSpecialKey(const struct FShortcutCommandItem& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.AssignSpecialKey");

	UShortcutAPI_AssignSpecialKey_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.ShortcutAPI.SetShortcutPage
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            a_ShortcutPage                 (Parm)

void UShortcutAPI::STATIC_SetShortcutPage(int a_ShortcutPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ShortcutAPI.SetShortcutPage");

	UShortcutAPI_SetShortcutPage_Params params;
	params.a_ShortcutPage = a_ShortcutPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RefineryAPI.RequestRefineCancel
// (Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_CancelItemID                 (Parm)

void URefineryAPI::STATIC_RequestRefineCancel(const struct FItemID& a_CancelItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RefineryAPI.RequestRefineCancel");

	URefineryAPI_RequestRefineCancel_Params params;
	params.a_CancelItemID = a_CancelItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RefineryAPI.ConfirmCancelItem
// (Final, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_CancelItemID                 (Parm)

void URefineryAPI::STATIC_ConfirmCancelItem(const struct FItemID& a_CancelItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RefineryAPI.ConfirmCancelItem");

	URefineryAPI_ConfirmCancelItem_Params params;
	params.a_CancelItemID = a_CancelItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RefineryAPI.RequestRefine
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_TargetItemID                 (Parm)
// struct FItemID                 a_RefinerItemID                (Parm)
// struct FItemID                 a_GemStoneID                   (Parm)
// struct FINT64                  a_GemStoneCount                (Parm)

void URefineryAPI::STATIC_RequestRefine(const struct FItemID& a_TargetItemID, const struct FItemID& a_RefinerItemID, const struct FItemID& a_GemStoneID, const struct FINT64& a_GemStoneCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RefineryAPI.RequestRefine");

	URefineryAPI_RequestRefine_Params params;
	params.a_TargetItemID = a_TargetItemID;
	params.a_RefinerItemID = a_RefinerItemID;
	params.a_GemStoneID = a_GemStoneID;
	params.a_GemStoneCount = a_GemStoneCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RefineryAPI.ConfirmGemStone
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_TargetItemID                 (Parm)
// struct FItemID                 a_RefinerItemID                (Parm)
// struct FItemID                 a_GemStoneID                   (Parm)
// struct FINT64                  a_GemStoneCount                (Parm)

void URefineryAPI::STATIC_ConfirmGemStone(const struct FItemID& a_TargetItemID, const struct FItemID& a_RefinerItemID, const struct FItemID& a_GemStoneID, const struct FINT64& a_GemStoneCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RefineryAPI.ConfirmGemStone");

	URefineryAPI_ConfirmGemStone_Params params;
	params.a_TargetItemID = a_TargetItemID;
	params.a_RefinerItemID = a_RefinerItemID;
	params.a_GemStoneID = a_GemStoneID;
	params.a_GemStoneCount = a_GemStoneCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RefineryAPI.ConfirmRefinerItem
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_TargetItemID                 (Parm)
// struct FItemID                 a_RefinerItemID                (Parm)

void URefineryAPI::STATIC_ConfirmRefinerItem(const struct FItemID& a_TargetItemID, const struct FItemID& a_RefinerItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RefineryAPI.ConfirmRefinerItem");

	URefineryAPI_ConfirmRefinerItem_Params params;
	params.a_TargetItemID = a_TargetItemID;
	params.a_RefinerItemID = a_RefinerItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RefineryAPI.ConfirmTargetItem
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void URefineryAPI::STATIC_ConfirmTargetItem(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RefineryAPI.ConfirmTargetItem");

	URefineryAPI_ConfirmTargetItem_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeShopListSet
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void URecipeAPI::STATIC_RequestRecipeShopListSet(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeShopListSet");

	URecipeAPI_RequestRecipeShopListSet_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeShopMessageSet
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 strMsg                         (Parm, NeedCtorLink)

void URecipeAPI::STATIC_RequestRecipeShopMessageSet(const struct FString& strMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeShopMessageSet");

	URecipeAPI_RequestRecipeShopMessageSet_Params params;
	params.strMsg = strMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeShopManageQuit
// (PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void URecipeAPI::STATIC_RequestRecipeShopManageQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeShopManageQuit");

	URecipeAPI_RequestRecipeShopManageQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeItemDelete
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void URecipeAPI::STATIC_RequestRecipeItemDelete(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeItemDelete");

	URecipeAPI_RequestRecipeItemDelete_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeBookOpen
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            type                           (Parm)

void URecipeAPI::STATIC_RequestRecipeBookOpen(int type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeBookOpen");

	URecipeAPI_RequestRecipeBookOpen_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeItemMakeInfo
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void URecipeAPI::STATIC_RequestRecipeItemMakeInfo(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeItemMakeInfo");

	URecipeAPI_RequestRecipeItemMakeInfo_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeItemMakeSelf
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            RecipeID                       (Parm)

void URecipeAPI::STATIC_RequestRecipeItemMakeSelf(int RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeItemMakeSelf");

	URecipeAPI_RequestRecipeItemMakeSelf_Params params;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeShopMakeDo
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            MerchantID                     (Parm)
// int                            RecipeID                       (Parm)
// struct FINT64                  Adena                          (Parm)

void URecipeAPI::STATIC_RequestRecipeShopMakeDo(int MerchantID, int RecipeID, const struct FINT64& Adena)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeShopMakeDo");

	URecipeAPI_RequestRecipeShopMakeDo_Params params;
	params.MerchantID = MerchantID;
	params.RecipeID = RecipeID;
	params.Adena = Adena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeShopSellList
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            nServerID                      (Parm)

void URecipeAPI::STATIC_RequestRecipeShopSellList(int nServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeShopSellList");

	URecipeAPI_RequestRecipeShopSellList_Params params;
	params.nServerID = nServerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.RecipeAPI.RequestRecipeShopMakeInfo
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            nServerID                      (Parm)
// int                            nRecipeID                      (Parm)

void URecipeAPI::STATIC_RequestRecipeShopMakeInfo(int nServerID, int nRecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.RecipeAPI.RequestRecipeShopMakeInfo");

	URecipeAPI_RequestRecipeShopMakeInfo_Params params;
	params.nServerID = nServerID;
	params.nRecipeID = nRecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.QuestAPI.SetQuestTargetInfo
// (Iterator, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// bool                           QuestOn                        (Parm)
// bool                           ShowTargetInRadar              (Parm)
// bool                           ShowArrow                      (Parm)
// struct FString                 TargetName                     (Parm, NeedCtorLink)
// struct FVector                 TargetPos                      (Parm)
// int                            QuestID                        (Parm)

void UQuestAPI::STATIC_SetQuestTargetInfo(bool QuestOn, bool ShowTargetInRadar, bool ShowArrow, const struct FString& TargetName, const struct FVector& TargetPos, int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.QuestAPI.SetQuestTargetInfo");

	UQuestAPI_SetQuestTargetInfo_Params params;
	params.QuestOn = QuestOn;
	params.ShowTargetInRadar = ShowTargetInRadar;
	params.ShowArrow = ShowArrow;
	params.TargetName = TargetName;
	params.TargetPos = TargetPos;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.QuestAPI.RequestDestroyQuest
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            QuestID                        (Parm)

void UQuestAPI::STATIC_RequestDestroyQuest(int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.QuestAPI.RequestDestroyQuest");

	UQuestAPI_RequestDestroyQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.QuestAPI.RequestQuestList
// (Final, Latent, PreOperator, Simulated, Exec, Operator, Static, Const)

void UQuestAPI::STATIC_RequestQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.QuestAPI.RequestQuestList");

	UQuestAPI_RequestQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetitionAPI.RequestPetitionFeedBack
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Rate                         (Parm)
// struct FString                 a_Message                      (Parm, NeedCtorLink)

void UPetitionAPI::STATIC_RequestPetitionFeedBack(int a_Rate, const struct FString& a_Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetitionAPI.RequestPetitionFeedBack");

	UPetitionAPI_RequestPetitionFeedBack_Params params;
	params.a_Rate = a_Rate;
	params.a_Message = a_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetitionAPI.RequestPetition
// (Final, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_Message                      (Parm, NeedCtorLink)
// int                            a_PetitionType                 (Parm)

void UPetitionAPI::STATIC_RequestPetition(const struct FString& a_Message, int a_PetitionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetitionAPI.RequestPetition");

	UPetitionAPI_RequestPetition_Params params;
	params.a_Message = a_Message;
	params.a_PetitionType = a_PetitionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetitionAPI.RequestPetitionCancel
// (Iterator, Latent, Simulated, Exec, Operator, Static, Const)

void UPetitionAPI::STATIC_RequestPetitionCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetitionAPI.RequestPetitionCancel");

	UPetitionAPI_RequestPetitionCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetAPI.RequestGetItemFromPet
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// struct FINT64                  Num                            (Parm)
// bool                           IsEquipItem                    (Parm)

void UPetAPI::STATIC_RequestGetItemFromPet(const struct FItemID& sID, const struct FINT64& Num, bool IsEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetAPI.RequestGetItemFromPet");

	UPetAPI_RequestGetItemFromPet_Params params;
	params.sID = sID;
	params.Num = Num;
	params.IsEquipItem = IsEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetAPI.RequestGiveItemToPet
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// struct FINT64                  Num                            (Parm)

void UPetAPI::STATIC_RequestGiveItemToPet(const struct FItemID& sID, const struct FINT64& Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetAPI.RequestGiveItemToPet");

	UPetAPI_RequestGiveItemToPet_Params params;
	params.sID = sID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetAPI.RequestPetUseItem
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void UPetAPI::STATIC_RequestPetUseItem(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetAPI.RequestPetUseItem");

	UPetAPI_RequestPetUseItem_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PetAPI.RequestPetInventoryItemList
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UPetAPI::STATIC_RequestPetInventoryItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PetAPI.RequestPetInventoryItemList");

	UPetAPI_RequestPetInventoryItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestMpccPartymasterList
// (Simulated, Exec, Operator, Static, Const)

void UPartyMatchAPI::STATIC_RequestMpccPartymasterList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestMpccPartymasterList");

	UPartyMatchAPI_RequestMpccPartymasterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestWithdrawMpccRoom
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UPartyMatchAPI::STATIC_RequestWithdrawMpccRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestWithdrawMpccRoom");

	UPartyMatchAPI_RequestWithdrawMpccRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestDismissMpccRoom
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UPartyMatchAPI::STATIC_RequestDismissMpccRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestDismissMpccRoom");

	UPartyMatchAPI_RequestDismissMpccRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestOustFromMpccRoom
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)

void UPartyMatchAPI::STATIC_RequestOustFromMpccRoom(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestOustFromMpccRoom");

	UPartyMatchAPI_RequestOustFromMpccRoom_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestJoinMpccRoom
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            RoomNum                        (Parm)
// int                            Location                       (Parm)

void UPartyMatchAPI::STATIC_RequestJoinMpccRoom(int RoomNum, int Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestJoinMpccRoom");

	UPartyMatchAPI_RequestJoinMpccRoom_Params params;
	params.RoomNum = RoomNum;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestManageMpccRoom
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            RoomNum                        (Parm)
// int                            MaxMemberCount                 (Parm)
// int                            MinLevelLimit                  (Parm)
// int                            MaxLevelLimit                  (Parm)
// int                            PartyRoutingType               (Parm)
// struct FString                 Title                          (Parm, NeedCtorLink)

void UPartyMatchAPI::STATIC_RequestManageMpccRoom(int RoomNum, int MaxMemberCount, int MinLevelLimit, int MaxLevelLimit, int PartyRoutingType, const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestManageMpccRoom");

	UPartyMatchAPI_RequestManageMpccRoom_Params params;
	params.RoomNum = RoomNum;
	params.MaxMemberCount = MaxMemberCount;
	params.MinLevelLimit = MinLevelLimit;
	params.MaxLevelLimit = MaxLevelLimit;
	params.PartyRoutingType = PartyRoutingType;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestListMpccWaiting
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            page                           (Parm)
// int                            Location                       (Parm)
// int                            LevelFilter                    (Parm)

void UPartyMatchAPI::STATIC_RequestListMpccWaiting(int page, int Location, int LevelFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestListMpccWaiting");

	UPartyMatchAPI_RequestListMpccWaiting_Params params;
	params.page = page;
	params.Location = Location;
	params.LevelFilter = LevelFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestAskJoinPartyRoom
// (Final, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_Name                         (Parm, NeedCtorLink)

void UPartyMatchAPI::STATIC_RequestAskJoinPartyRoom(const struct FString& a_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestAskJoinPartyRoom");

	UPartyMatchAPI_RequestAskJoinPartyRoom_Params params;
	params.a_Name = a_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestExitPartyMatchingWaitingRoom
// (PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, Const)

void UPartyMatchAPI::STATIC_RequestExitPartyMatchingWaitingRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestExitPartyMatchingWaitingRoom");

	UPartyMatchAPI_RequestExitPartyMatchingWaitingRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestPartyMatchWaitList
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Page                         (Parm)
// int                            a_MinLevel                     (Parm)
// int                            a_MaxLevel                     (Parm)
// int                            RoomType                       (Parm)

void UPartyMatchAPI::STATIC_RequestPartyMatchWaitList(int a_Page, int a_MinLevel, int a_MaxLevel, int RoomType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestPartyMatchWaitList");

	UPartyMatchAPI_RequestPartyMatchWaitList_Params params;
	params.a_Page = a_Page;
	params.a_MinLevel = a_MinLevel;
	params.a_MaxLevel = a_MaxLevel;
	params.RoomType = RoomType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestBanFromPartyRoom
// (Defined, PreOperator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_MemberID                     (Parm)

void UPartyMatchAPI::STATIC_RequestBanFromPartyRoom(int a_MemberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestBanFromPartyRoom");

	UPartyMatchAPI_RequestBanFromPartyRoom_Params params;
	params.a_MemberID = a_MemberID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestWithdrawPartyRoom
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_RoomNumber                   (Parm)

void UPartyMatchAPI::STATIC_RequestWithdrawPartyRoom(int a_RoomNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestWithdrawPartyRoom");

	UPartyMatchAPI_RequestWithdrawPartyRoom_Params params;
	params.a_RoomNumber = a_RoomNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestDismissPartyRoom
// (Defined, Iterator, Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_RoomNumber                   (Parm)

void UPartyMatchAPI::STATIC_RequestDismissPartyRoom(int a_RoomNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestDismissPartyRoom");

	UPartyMatchAPI_RequestDismissPartyRoom_Params params;
	params.a_RoomNumber = a_RoomNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestManagePartyRoom
// (Final, Iterator, Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_RoomNumber                   (Parm)
// int                            a_MaxPartyMemberCount          (Parm)
// int                            a_MinLevel                     (Parm)
// int                            a_MaxLevel                     (Parm)
// struct FString                 a_RoomTitle                    (Parm, NeedCtorLink)

void UPartyMatchAPI::STATIC_RequestManagePartyRoom(int a_RoomNumber, int a_MaxPartyMemberCount, int a_MinLevel, int a_MaxLevel, const struct FString& a_RoomTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestManagePartyRoom");

	UPartyMatchAPI_RequestManagePartyRoom_Params params;
	params.a_RoomNumber = a_RoomNumber;
	params.a_MaxPartyMemberCount = a_MaxPartyMemberCount;
	params.a_MinLevel = a_MinLevel;
	params.a_MaxLevel = a_MaxLevel;
	params.a_RoomTitle = a_RoomTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestJoinPartyRoomAuto
// (Iterator, Latent, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Page                         (Parm)
// int                            a_LocationFilter               (Parm)
// int                            a_LevelFilter                  (Parm)

void UPartyMatchAPI::STATIC_RequestJoinPartyRoomAuto(int a_Page, int a_LocationFilter, int a_LevelFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestJoinPartyRoomAuto");

	UPartyMatchAPI_RequestJoinPartyRoomAuto_Params params;
	params.a_Page = a_Page;
	params.a_LocationFilter = a_LocationFilter;
	params.a_LevelFilter = a_LevelFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestJoinPartyRoom
// (Final, Defined, Iterator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_RoomNumber                   (Parm)

void UPartyMatchAPI::STATIC_RequestJoinPartyRoom(int a_RoomNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestJoinPartyRoom");

	UPartyMatchAPI_RequestJoinPartyRoom_Params params;
	params.a_RoomNumber = a_RoomNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestPartyRoomList
// (Defined, Iterator, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Page                         (Parm)
// int                            a_LocationFilter               (Parm)
// int                            a_LevelFilter                  (Parm)

void UPartyMatchAPI::STATIC_RequestPartyRoomList(int a_Page, int a_LocationFilter, int a_LevelFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestPartyRoomList");

	UPartyMatchAPI_RequestPartyRoomList_Params params;
	params.a_Page = a_Page;
	params.a_LocationFilter = a_LocationFilter;
	params.a_LevelFilter = a_LevelFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.PartyMatchAPI.RequestOpenPartyMatch
// (Iterator, Net, NetReliable, Exec, Operator, Static, Const)

void UPartyMatchAPI::STATIC_RequestOpenPartyMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.PartyMatchAPI.RequestOpenPartyMatch");

	UPartyMatchAPI_RequestOpenPartyMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.OlympiadAPI.RequestOlympiadMatchList
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UOlympiadAPI::STATIC_RequestOlympiadMatchList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.OlympiadAPI.RequestOlympiadMatchList");

	UOlympiadAPI_RequestOlympiadMatchList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.OlympiadAPI.RequestOlympiadObserverEnd
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UOlympiadAPI::STATIC_RequestOlympiadObserverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.OlympiadAPI.RequestOlympiadObserverEnd");

	UOlympiadAPI_RequestOlympiadObserverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MiniMapAPI.RequestSeedPhase
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UMiniMapAPI::STATIC_RequestSeedPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MiniMapAPI.RequestSeedPhase");

	UMiniMapAPI_RequestSeedPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MiniMapAPI.RequestCursedWeaponLocation
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UMiniMapAPI::STATIC_RequestCursedWeaponLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MiniMapAPI.RequestCursedWeaponLocation");

	UMiniMapAPI_RequestCursedWeaponLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MiniMapAPI.RequestCursedWeaponList
// (Final, Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UMiniMapAPI::STATIC_RequestCursedWeaponList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MiniMapAPI.RequestCursedWeaponList");

	UMiniMapAPI_RequestCursedWeaponList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MacroAPI.RequestMakeMacro
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// struct FString                 Name                           (Parm, NeedCtorLink)
// struct FString                 IconName                       (Parm, NeedCtorLink)
// int                            IconNum                        (Parm)
// struct FString                 Description                    (Parm, NeedCtorLink)
// TArray<struct FString>         CommandList                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMacroAPI::STATIC_RequestMakeMacro(const struct FItemID& cID, const struct FString& Name, const struct FString& IconName, int IconNum, const struct FString& Description, TArray<struct FString> CommandList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MacroAPI.RequestMakeMacro");

	UMacroAPI_RequestMakeMacro_Params params;
	params.cID = cID;
	params.Name = Name;
	params.IconName = IconName;
	params.IconNum = IconNum;
	params.Description = Description;
	params.CommandList = CommandList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.MacroAPI.RequestDeleteMacro
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)

void UMacroAPI::STATIC_RequestDeleteMacro(const struct FItemID& cID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MacroAPI.RequestDeleteMacro");

	UMacroAPI_RequestDeleteMacro_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MacroAPI.RequestUseMacro
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)

void UMacroAPI::STATIC_RequestUseMacro(const struct FItemID& cID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MacroAPI.RequestUseMacro");

	UMacroAPI_RequestUseMacro_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.MacroAPI.RequestMacroList
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UMacroAPI::STATIC_RequestMacroList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.MacroAPI.RequestMacroList");

	UMacroAPI_RequestMacroList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.InputAPI.GetInputKey
// (Exec, Operator, Static, Const)
// Parameters:
// struct FString                 keyString                      (Parm, NeedCtorLink)
// TEnumAsByte<EInputKey>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EInputKey> UInputAPI::STATIC_GetInputKey(const struct FString& keyString)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.InputAPI.GetInputKey");

	UInputAPI_GetInputKey_Params params;
	params.keyString = keyString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.InputAPI.GetKeyString
// (Final, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UInputAPI::STATIC_GetKeyString(TEnumAsByte<EInputKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.InputAPI.GetKeyString");

	UInputAPI_GetKeyString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.InputAPI.IsAltPressed
// (Defined, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInputAPI::STATIC_IsAltPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.InputAPI.IsAltPressed");

	UInputAPI_IsAltPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.InputAPI.IsCtrlPressed
// (Final, Defined, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInputAPI::STATIC_IsCtrlPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.InputAPI.IsCtrlPressed");

	UInputAPI_IsCtrlPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.InputAPI.IsShiftPressed
// (Iterator, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UInputAPI::STATIC_IsShiftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.InputAPI.IsShiftPressed");

	UInputAPI_IsShiftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.HeroTowerAPI.RequestHeroMatchRecord
// (Latent, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            ClassID                        (Parm)

void UHeroTowerAPI::STATIC_RequestHeroMatchRecord(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HeroTowerAPI.RequestHeroMatchRecord");

	UHeroTowerAPI_RequestHeroMatchRecord_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.HeroTowerAPI.RequestWriteHeroWords
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 strWord                        (Parm, NeedCtorLink)

void UHeroTowerAPI::STATIC_RequestWriteHeroWords(const struct FString& strWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HeroTowerAPI.RequestWriteHeroWords");

	UHeroTowerAPI_RequestWriteHeroWords_Params params;
	params.strWord = strWord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.HennaAPI.GetHennaInfo
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            a_Index                        (Parm)
// int                            a_HennaID                      (Parm, OutParm)
// int                            a_IsActive                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHennaAPI::STATIC_GetHennaInfo(int a_Index, int* a_HennaID, int* a_IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HennaAPI.GetHennaInfo");

	UHennaAPI_GetHennaInfo_Params params;
	params.a_Index = a_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_HennaID != nullptr)
		*a_HennaID = params.a_HennaID;
	if (a_IsActive != nullptr)
		*a_IsActive = params.a_IsActive;

	return params.ReturnValue;
}


// Function NWindow.HennaAPI.GetHennaInfoCount
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHennaAPI::STATIC_GetHennaInfoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.HennaAPI.GetHennaInfoCount");

	UHennaAPI_GetHennaInfoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.GraphicAPI.DoFResume
// (Iterator, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UGraphicAPI::STATIC_DoFResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFResume");

	UGraphicAPI_DoFResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFPause
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)

void UGraphicAPI::STATIC_DoFPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFPause");

	UGraphicAPI_DoFPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFSetEndDistance
// (Defined, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// float                          a_EndDistance                  (Parm)

void UGraphicAPI::STATIC_DoFSetEndDistance(float a_EndDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFSetEndDistance");

	UGraphicAPI_DoFSetEndDistance_Params params;
	params.a_EndDistance = a_EndDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFSetStartDistance
// (Final, PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// float                          a_StartDistance                (Parm)

void UGraphicAPI::STATIC_DoFSetStartDistance(float a_StartDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFSetStartDistance");

	UGraphicAPI_DoFSetStartDistance_Params params;
	params.a_StartDistance = a_StartDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFSetFocusDistance
// (PreOperator, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// float                          a_FocusDistance                (Parm)

void UGraphicAPI::STATIC_DoFSetFocusDistance(float a_FocusDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFSetFocusDistance");

	UGraphicAPI_DoFSetFocusDistance_Params params;
	params.a_FocusDistance = a_FocusDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFSetFocusLocation
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FVector                 a_FocusLocation                (Parm)

void UGraphicAPI::STATIC_DoFSetFocusLocation(const struct FVector& a_FocusLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFSetFocusLocation");

	UGraphicAPI_DoFSetFocusLocation_Params params;
	params.a_FocusLocation = a_FocusLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFSetFocusPlayer
// (Iterator, Latent, Singular, NetReliable, Exec, Operator, Static, Const)

void UGraphicAPI::STATIC_DoFSetFocusPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFSetFocusPlayer");

	UGraphicAPI_DoFSetFocusPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GraphicAPI.DoFSetFocusActor
// (Defined, Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// class AActor*                  a_FocusActor                   (Parm)

void UGraphicAPI::STATIC_DoFSetFocusActor(class AActor* a_FocusActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GraphicAPI.DoFSetFocusActor");

	UGraphicAPI_DoFSetFocusActor_Params params;
	params.a_FocusActor = a_FocusActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GMAPI.RequestSnoopEnd
// (Final, Iterator, Exec, Operator, Static, Const)
// Parameters:
// int                            a_SnoopID                      (Parm)

void UGMAPI::STATIC_RequestSnoopEnd(int a_SnoopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GMAPI.RequestSnoopEnd");

	UGMAPI_RequestSnoopEnd_Params params;
	params.a_SnoopID = a_SnoopID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GMAPI.GetObservingUserInfo
// (Defined, Iterator, Exec, Operator, Static, Const)
// Parameters:
// struct FUserInfo               a_ObservingUserInfo            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGMAPI::STATIC_GetObservingUserInfo(struct FUserInfo* a_ObservingUserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GMAPI.GetObservingUserInfo");

	UGMAPI_GetObservingUserInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_ObservingUserInfo != nullptr)
		*a_ObservingUserInfo = params.a_ObservingUserInfo;

	return params.ReturnValue;
}


// Function NWindow.GMAPI.RequestGMCommand
// (Final, Defined, Iterator, Exec, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EGMCommandType>    a_GMCommandType                (Parm)
// struct FString                 a_Param                        (OptionalParm, Parm, NeedCtorLink)

void UGMAPI::STATIC_RequestGMCommand(TEnumAsByte<EGMCommandType> a_GMCommandType, const struct FString& a_Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GMAPI.RequestGMCommand");

	UGMAPI_RequestGMCommand_Params params;
	params.a_GMCommandType = a_GMCommandType;
	params.a_Param = a_Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.GMAPI.BeginGMChangeServer
// (Latent, Exec, Operator, Static, Const)
// Parameters:
// int                            a_ServerID                     (Parm)
// struct FVector                 a_PlayerLocation               (Parm)

void UGMAPI::STATIC_BeginGMChangeServer(int a_ServerID, const struct FVector& a_PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.GMAPI.BeginGMChangeServer");

	UGMAPI_BeginGMChangeServer_Params params;
	params.a_ServerID = a_ServerID;
	params.a_PlayerLocation = a_PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EventMatchAPI.SetSelectedUser
// (Final, Latent, Exec, Operator, Static, Const)
// Parameters:
// int                            a_TeamID                       (Parm)
// int                            a_UserID                       (Parm)

void UEventMatchAPI::STATIC_SetSelectedUser(int a_TeamID, int a_UserID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EventMatchAPI.SetSelectedUser");

	UEventMatchAPI_SetSelectedUser_Params params;
	params.a_TeamID = a_TeamID;
	params.a_UserID = a_UserID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EventMatchAPI.GetUserData
// (Defined, Latent, Exec, Operator, Static, Const)
// Parameters:
// int                            a_TeamID                       (Parm)
// int                            a_UserID                       (Parm)
// struct FEventMatchUserData     a_UserData                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEventMatchAPI::STATIC_GetUserData(int a_TeamID, int a_UserID, struct FEventMatchUserData* a_UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EventMatchAPI.GetUserData");

	UEventMatchAPI_GetUserData_Params params;
	params.a_TeamID = a_TeamID;
	params.a_UserID = a_UserID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_UserData != nullptr)
		*a_UserData = params.a_UserData;

	return params.ReturnValue;
}


// Function NWindow.EventMatchAPI.GetPartyMemberCount
// (Final, Defined, Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_TeamID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEventMatchAPI::STATIC_GetPartyMemberCount(int a_TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EventMatchAPI.GetPartyMemberCount");

	UEventMatchAPI_GetPartyMemberCount_Params params;
	params.a_TeamID = a_TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.EventMatchAPI.GetTeamName
// (Iterator, Latent, Exec, Operator, Static, Const)
// Parameters:
// int                            a_TeamID                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UEventMatchAPI::STATIC_GetTeamName(int a_TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EventMatchAPI.GetTeamName");

	UEventMatchAPI_GetTeamName_Params params;
	params.a_TeamID = a_TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.EventMatchAPI.GetScore
// (Final, Iterator, Latent, Exec, Operator, Static, Const)
// Parameters:
// int                            a_TeamID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UEventMatchAPI::STATIC_GetScore(int a_TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EventMatchAPI.GetScore");

	UEventMatchAPI_GetScore_Params params;
	params.a_TeamID = a_TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.EventMatchAPI.GetEventMatchData
// (Final, Defined, Iterator, Latent, Exec, Operator, Static, Const)
// Parameters:
// struct FEventMatchData         a_EventMatchData               (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UEventMatchAPI::STATIC_GetEventMatchData(struct FEventMatchData* a_EventMatchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EventMatchAPI.GetEventMatchData");

	UEventMatchAPI_GetEventMatchData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_EventMatchData != nullptr)
		*a_EventMatchData = params.a_EventMatchData;

	return params.ReturnValue;
}


// Function NWindow.EnchantAPI.RequestExCancelEnchantItem
// (Final, PreOperator, Exec, Operator, Static, Const)

void UEnchantAPI::STATIC_RequestExCancelEnchantItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EnchantAPI.RequestExCancelEnchantItem");

	UEnchantAPI_RequestExCancelEnchantItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EnchantAPI.RequestExTryToPutEnchantSupportItem
// (Defined, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_sTargetID                    (Parm)
// struct FItemID                 a_sSupportID                   (Parm)

void UEnchantAPI::STATIC_RequestExTryToPutEnchantSupportItem(const struct FItemID& a_sTargetID, const struct FItemID& a_sSupportID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EnchantAPI.RequestExTryToPutEnchantSupportItem");

	UEnchantAPI_RequestExTryToPutEnchantSupportItem_Params params;
	params.a_sTargetID = a_sTargetID;
	params.a_sSupportID = a_sSupportID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EnchantAPI.RequestExTryToPutEnchantTargetItem
// (Final, Defined, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_sTargetID                    (Parm)

void UEnchantAPI::STATIC_RequestExTryToPutEnchantTargetItem(const struct FItemID& a_sTargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EnchantAPI.RequestExTryToPutEnchantTargetItem");

	UEnchantAPI_RequestExTryToPutEnchantTargetItem_Params params;
	params.a_sTargetID = a_sTargetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EnchantAPI.RequestRemoveAttribute
// (Iterator, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void UEnchantAPI::STATIC_RequestRemoveAttribute(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EnchantAPI.RequestRemoveAttribute");

	UEnchantAPI_RequestRemoveAttribute_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EnchantAPI.RequestEnchantItemAttribute
// (Final, Iterator, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void UEnchantAPI::STATIC_RequestEnchantItemAttribute(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EnchantAPI.RequestEnchantItemAttribute");

	UEnchantAPI_RequestEnchantItemAttribute_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.EnchantAPI.RequestEnchantItem
// (Defined, Iterator, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_sTargetID                    (Parm)
// struct FItemID                 a_sSupportID                   (Parm)

void UEnchantAPI::STATIC_RequestEnchantItem(const struct FItemID& a_sTargetID, const struct FItemID& a_sSupportID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.EnchantAPI.RequestEnchantItem");

	UEnchantAPI_RequestEnchantItem_Params params;
	params.a_sTargetID = a_sTargetID;
	params.a_sSupportID = a_sSupportID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CommandChannelAPI.RequestCommandChannelPartyMembersInfo
// (Final, Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            MasterID                       (Parm)

void UCommandChannelAPI::STATIC_RequestCommandChannelPartyMembersInfo(int MasterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CommandChannelAPI.RequestCommandChannelPartyMembersInfo");

	UCommandChannelAPI_RequestCommandChannelPartyMembersInfo_Params params;
	params.MasterID = MasterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CommandChannelAPI.RequestCommandChannelWithdraw
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)

void UCommandChannelAPI::STATIC_RequestCommandChannelWithdraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CommandChannelAPI.RequestCommandChannelWithdraw");

	UCommandChannelAPI_RequestCommandChannelWithdraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CommandChannelAPI.RequestCommandChannelBanParty
// (Final, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 PartyMasterName                (Parm, NeedCtorLink)

void UCommandChannelAPI::STATIC_RequestCommandChannelBanParty(const struct FString& PartyMasterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CommandChannelAPI.RequestCommandChannelBanParty");

	UCommandChannelAPI_RequestCommandChannelBanParty_Params params;
	params.PartyMasterName = PartyMasterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.CommandChannelAPI.RequestCommandChannelInfo
// (Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)

void UCommandChannelAPI::STATIC_RequestCommandChannelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.CommandChannelAPI.RequestCommandChannelInfo");

	UCommandChannelAPI_RequestCommandChannelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.BookMarkAPI.RequestGetBookMarkPos
// (Final, Defined, Iterator, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 slotID                         (Parm)
// struct FVector                 pos                            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestGetBookMarkPos(const struct FItemID& slotID, struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestGetBookMarkPos");

	UBookMarkAPI_RequestGetBookMarkPos_Params params;
	params.slotID = slotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestChangeBookMarkSlot
// (Latent, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 slotID1                        (Parm)
// struct FItemID                 slotID2                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestChangeBookMarkSlot(const struct FItemID& slotID1, const struct FItemID& slotID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestChangeBookMarkSlot");

	UBookMarkAPI_RequestChangeBookMarkSlot_Params params;
	params.slotID1 = slotID1;
	params.slotID2 = slotID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestTelePortBookMark
// (Final, Latent, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 slotID                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestTelePortBookMark(const struct FItemID& slotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestTelePortBookMark");

	UBookMarkAPI_RequestTelePortBookMark_Params params;
	params.slotID = slotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestDeleteBookMarkSlot
// (Defined, Latent, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 slotID                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestDeleteBookMarkSlot(const struct FItemID& slotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestDeleteBookMarkSlot");

	UBookMarkAPI_RequestDeleteBookMarkSlot_Params params;
	params.slotID = slotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestModifyBookMarkSlot
// (Iterator, Latent, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 slotID                         (Parm)
// struct FString                 slotTitle                      (Parm, NeedCtorLink)
// int                            iconID                         (Parm)
// struct FString                 iconTitle                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestModifyBookMarkSlot(const struct FItemID& slotID, const struct FString& slotTitle, int iconID, const struct FString& iconTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestModifyBookMarkSlot");

	UBookMarkAPI_RequestModifyBookMarkSlot_Params params;
	params.slotID = slotID;
	params.slotTitle = slotTitle;
	params.iconID = iconID;
	params.iconTitle = iconTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestSaveBookMarkSlot
// (Defined, Iterator, Latent, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 slotTitle                      (Parm, NeedCtorLink)
// int                            iconID                         (Parm)
// struct FString                 iconTitle                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestSaveBookMarkSlot(const struct FString& slotTitle, int iconID, const struct FString& iconTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestSaveBookMarkSlot");

	UBookMarkAPI_RequestSaveBookMarkSlot_Params params;
	params.slotTitle = slotTitle;
	params.iconID = iconID;
	params.iconTitle = iconTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestShowBookMark
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestShowBookMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestShowBookMark");

	UBookMarkAPI_RequestShowBookMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.BookMarkAPI.RequestBookMarkSlotInfo
// (Singular, Exec, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBookMarkAPI::STATIC_RequestBookMarkSlotInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.BookMarkAPI.RequestBookMarkSlotInfo");

	UBookMarkAPI_RequestBookMarkSlotInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.AudioAPI.StopMusic
// (Final, Defined, Latent, Net, Exec, Event)

void UAudioAPI::StopMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AudioAPI.StopMusic");

	UAudioAPI_StopMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AudioAPI.PlayMusic
// (Final, Latent, Net, Exec, Event)
// Parameters:
// struct FString                 a_MusicName                    (Parm, NeedCtorLink)
// float                          a_FadeInTime                   (Parm)

void UAudioAPI::PlayMusic(const struct FString& a_MusicName, float a_FadeInTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AudioAPI.PlayMusic");

	UAudioAPI_PlayMusic_Params params;
	params.a_MusicName = a_MusicName;
	params.a_FadeInTime = a_FadeInTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AudioAPI.PlaySound
// (Defined, Iterator, Latent, Singular, Net, Exec, Event)
// Parameters:
// struct FString                 a_SoundName                    (Parm, NeedCtorLink)

void UAudioAPI::PlaySound(const struct FString& a_SoundName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AudioAPI.PlaySound");

	UAudioAPI_PlaySound_Params params;
	params.a_SoundName = a_SoundName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AuctionAPI.RequestInfoItemAuction
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            AuctionID                      (Parm)

void UAuctionAPI::STATIC_RequestInfoItemAuction(int AuctionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AuctionAPI.RequestInfoItemAuction");

	UAuctionAPI_RequestInfoItemAuction_Params params;
	params.AuctionID = AuctionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.AuctionAPI.RequestBidItemAuction
// (Defined, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            AuctionID                      (Parm)
// struct FINT64                  Adena                          (Parm)

void UAuctionAPI::STATIC_RequestBidItemAuction(int AuctionID, const struct FINT64& Adena)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.AuctionAPI.RequestBidItemAuction");

	UAuctionAPI_RequestBidItemAuction_Params params;
	params.AuctionID = AuctionID;
	params.Adena = Adena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ActionAPI.RequestSummonedActionList
// (Final, Latent, PreOperator, NetReliable, Exec, Operator, Static, Const)

void UActionAPI::STATIC_RequestSummonedActionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ActionAPI.RequestSummonedActionList");

	UActionAPI_RequestSummonedActionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ActionAPI.RequestPetActionList
// (Iterator, PreOperator, NetReliable, Exec, Operator, Static, Const)

void UActionAPI::STATIC_RequestPetActionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ActionAPI.RequestPetActionList");

	UActionAPI_RequestPetActionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.ActionAPI.RequestActionList
// (Final, Defined, PreOperator, NetReliable, Exec, Operator, Static, Const)

void UActionAPI::STATIC_RequestActionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.ActionAPI.RequestActionList");

	UActionAPI_RequestActionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.GetSelectedRadioButtonName
// (Final, Defined, Latent, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// int                            a_RadioGroupID                 (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_WINDOW::STATIC_GetSelectedRadioButtonName(const struct FString& a_ControlID, int a_RadioGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.GetSelectedRadioButtonName");

	UUIAPI_WINDOW_GetSelectedRadioButtonName_Params params;
	params.a_ControlID = a_ControlID;
	params.a_RadioGroupID = a_RadioGroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_WINDOW.ClearAnchor
// (Final, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_ClearAnchor(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.ClearAnchor");

	UUIAPI_WINDOW_ClearAnchor_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetAnchor
// (Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 AnchorWindowName               (Parm, NeedCtorLink)
// struct FString                 RelativePoint                  (Parm, NeedCtorLink)
// struct FString                 AnchorPoint                    (Parm, NeedCtorLink)
// int                            OffsetX                        (Parm)
// int                            OffsetY                        (Parm)

void UUIAPI_WINDOW::STATIC_SetAnchor(const struct FString& ControlName, const struct FString& AnchorWindowName, const struct FString& RelativePoint, const struct FString& AnchorPoint, int OffsetX, int OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetAnchor");

	UUIAPI_WINDOW_SetAnchor_Params params;
	params.ControlName = ControlName;
	params.AnchorWindowName = AnchorWindowName;
	params.RelativePoint = RelativePoint;
	params.AnchorPoint = AnchorPoint;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.GetTooltipText
// (Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_WINDOW::STATIC_GetTooltipText(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.GetTooltipText");

	UUIAPI_WINDOW_GetTooltipText_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_WINDOW.SetTooltipText
// (Final, Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Text                           (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_SetTooltipText(const struct FString& ControlName, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetTooltipText");

	UUIAPI_WINDOW_SetTooltipText_Params params;
	params.ControlName = ControlName;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetTooltipType
// (Final, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 TooltipType                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_SetTooltipType(const struct FString& ControlName, const struct FString& TooltipType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetTooltipType");

	UUIAPI_WINDOW_SetTooltipType_Params params;
	params.ControlName = ControlName;
	params.TooltipType = TooltipType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetTabOrder
// (Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NextName                       (Parm, NeedCtorLink)
// struct FString                 PreName                        (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_SetTabOrder(const struct FString& ControlName, const struct FString& NextName, const struct FString& PreName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetTabOrder");

	UUIAPI_WINDOW_SetTabOrder_Params params;
	params.ControlName = ControlName;
	params.NextName = NextName;
	params.PreName = PreName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetResizeFrameSize
// (Final, Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            nWidth                         (Parm)
// int                            nHeight                        (Parm)

void UUIAPI_WINDOW::STATIC_SetResizeFrameSize(const struct FString& ControlName, int nWidth, int nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetResizeFrameSize");

	UUIAPI_WINDOW_SetResizeFrameSize_Params params;
	params.ControlName = ControlName;
	params.nWidth = nWidth;
	params.nHeight = nHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetFrameSize
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            nWidth                         (Parm)
// int                            nHeight                        (Parm)

void UUIAPI_WINDOW::STATIC_SetFrameSize(const struct FString& ControlName, int nWidth, int nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetFrameSize");

	UUIAPI_WINDOW_SetFrameSize_Params params;
	params.ControlName = ControlName;
	params.nWidth = nWidth;
	params.nHeight = nHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetWindowSizeRel43
// (Final, Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// float                          fWidthRate                     (Parm)
// float                          fHeightRate                    (Parm)
// int                            nOffsetWidth                   (Parm)
// int                            nOffsetHeight                  (Parm)

void UUIAPI_WINDOW::STATIC_SetWindowSizeRel43(const struct FString& ControlName, float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetWindowSizeRel43");

	UUIAPI_WINDOW_SetWindowSizeRel43_Params params;
	params.ControlName = ControlName;
	params.fWidthRate = fWidthRate;
	params.fHeightRate = fHeightRate;
	params.nOffsetWidth = nOffsetWidth;
	params.nOffsetHeight = nOffsetHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetWindowSizeRel
// (Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// float                          fWidthRate                     (Parm)
// float                          fHeightRate                    (Parm)
// int                            nOffsetWidth                   (Parm)
// int                            nOffsetHeight                  (Parm)

void UUIAPI_WINDOW::STATIC_SetWindowSizeRel(const struct FString& ControlName, float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetWindowSizeRel");

	UUIAPI_WINDOW_SetWindowSizeRel_Params params;
	params.ControlName = ControlName;
	params.fWidthRate = fWidthRate;
	params.fHeightRate = fHeightRate;
	params.nOffsetWidth = nOffsetWidth;
	params.nOffsetHeight = nOffsetHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetWindowSize
// (Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            nWidth                         (Parm)
// int                            nHeight                        (Parm)

void UUIAPI_WINDOW::STATIC_SetWindowSize(const struct FString& ControlName, int nWidth, int nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetWindowSize");

	UUIAPI_WINDOW_SetWindowSize_Params params;
	params.ControlName = ControlName;
	params.nWidth = nWidth;
	params.nHeight = nHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.IsFocused
// (Defined, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_WINDOW::STATIC_IsFocused(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.IsFocused");

	UUIAPI_WINDOW_IsFocused_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_WINDOW.SetFocus
// (Latent, NetReliable, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::SetFocus(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetFocus");

	UUIAPI_WINDOW_SetFocus_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.NotifyAlarm
// (Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_NotifyAlarm(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.NotifyAlarm");

	UUIAPI_WINDOW_NotifyAlarm_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.Iconize
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Texture                        (Parm, NeedCtorLink)
// int                            ToolTip                        (Parm)

void UUIAPI_WINDOW::STATIC_Iconize(const struct FString& ControlName, const struct FString& Texture, int ToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.Iconize");

	UUIAPI_WINDOW_Iconize_Params params;
	params.ControlName = ControlName;
	params.Texture = Texture;
	params.ToolTip = ToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.MoveShake
// (Final, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ContorlName                    (Parm, NeedCtorLink)
// int                            a_nRange                       (Parm)
// int                            a_nSet                         (Parm)
// float                          a_Seconds                      (OptionalParm, Parm)

void UUIAPI_WINDOW::STATIC_MoveShake(const struct FString& ContorlName, int a_nRange, int a_nSet, float a_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.MoveShake");

	UUIAPI_WINDOW_MoveShake_Params params;
	params.ContorlName = ContorlName;
	params.a_nRange = a_nRange;
	params.a_nSet = a_nSet;
	params.a_Seconds = a_Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.MoveEx
// (Defined, Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            a_nX                           (Parm)
// int                            a_nY                           (Parm)

void UUIAPI_WINDOW::STATIC_MoveEx(const struct FString& ControlName, int a_nX, int a_nY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.MoveEx");

	UUIAPI_WINDOW_MoveEx_Params params;
	params.ControlName = ControlName;
	params.a_nX = a_nX;
	params.a_nY = a_nY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.MoveTo
// (Final, Iterator, Latent, Singular, Net, Operator)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            a_nX                           (Parm)
// int                            a_nY                           (Parm)

void UUIAPI_WINDOW::MoveTo(const struct FString& ControlName, int a_nX, int a_nY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.MoveTo");

	UUIAPI_WINDOW_MoveTo_Params params;
	params.ControlName = ControlName;
	params.a_nX = a_nX;
	params.a_nY = a_nY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.Move
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            a_nDeltaX                      (Parm)
// int                            a_nDeltaY                      (Parm)
// float                          a_Seconds                      (OptionalParm, Parm)

void UUIAPI_WINDOW::Move(const struct FString& ControlName, int a_nDeltaX, int a_nDeltaY, float a_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.Move");

	UUIAPI_WINDOW_Move_Params params;
	params.ControlName = ControlName;
	params.a_nDeltaX = a_nDeltaX;
	params.a_nDeltaY = a_nDeltaY;
	params.a_Seconds = a_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetAlpha
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            a_nAlpha                       (Parm)
// float                          a_Seconds                      (OptionalParm, Parm)

void UUIAPI_WINDOW::STATIC_SetAlpha(const struct FString& ControlName, int a_nAlpha, float a_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetAlpha");

	UUIAPI_WINDOW_SetAlpha_Params params;
	params.ControlName = ControlName;
	params.a_nAlpha = a_nAlpha;
	params.a_Seconds = a_Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetAlwaysOnTop
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           a_bAlwaysOnTop                 (Parm)

void UUIAPI_WINDOW::STATIC_SetAlwaysOnTop(const struct FString& ControlName, bool a_bAlwaysOnTop)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetAlwaysOnTop");

	UUIAPI_WINDOW_SetAlwaysOnTop_Params params;
	params.ControlName = ControlName;
	params.a_bAlwaysOnTop = a_bAlwaysOnTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.IsEnableWindow
// (Final, Defined, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_WINDOW::STATIC_IsEnableWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.IsEnableWindow");

	UUIAPI_WINDOW_IsEnableWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_WINDOW.DisableWindow
// (Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_DisableWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.DisableWindow");

	UUIAPI_WINDOW_DisableWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.EnableWindow
// (Final, Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_EnableWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.EnableWindow");

	UUIAPI_WINDOW_EnableWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetWindowTitleByText
// (PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 strText                        (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_SetWindowTitleByText(const struct FString& ControlName, const struct FString& strText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetWindowTitleByText");

	UUIAPI_WINDOW_SetWindowTitleByText_Params params;
	params.ControlName = ControlName;
	params.strText = strText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetWindowTitle
// (Final, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIAPI_WINDOW::STATIC_SetWindowTitle(const struct FString& ControlName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetWindowTitle");

	UUIAPI_WINDOW_SetWindowTitle_Params params;
	params.ControlName = ControlName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.KillUITimer
// (Final, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            TimerID                        (Parm)

void UUIAPI_WINDOW::STATIC_KillUITimer(const struct FString& ControlName, int TimerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.KillUITimer");

	UUIAPI_WINDOW_KillUITimer_Params params;
	params.ControlName = ControlName;
	params.TimerID = TimerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.SetUITimer
// (Defined, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            TimerID                        (Parm)
// int                            Delayms                        (Parm)

void UUIAPI_WINDOW::STATIC_SetUITimer(const struct FString& ControlName, int TimerID, int Delayms)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.SetUITimer");

	UUIAPI_WINDOW_SetUITimer_Params params;
	params.ControlName = ControlName;
	params.TimerID = TimerID;
	params.Delayms = Delayms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.GetRect
// (Final, PreOperator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FRect                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRect UUIAPI_WINDOW::STATIC_GetRect(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.GetRect");

	UUIAPI_WINDOW_GetRect_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_WINDOW.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.Clear");

	UUIAPI_WINDOW_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.HideWindow
// (Final, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_HideWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.HideWindow");

	UUIAPI_WINDOW_HideWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.ShowWindow
// (Final, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_WINDOW::STATIC_ShowWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.ShowWindow");

	UUIAPI_WINDOW_ShowWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_WINDOW.IsMinimizedWindow
// (Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_WINDOW::STATIC_IsMinimizedWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.IsMinimizedWindow");

	UUIAPI_WINDOW_IsMinimizedWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_WINDOW.IsShowWindow
// (Final, Defined, Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_WINDOW::STATIC_IsShowWindow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_WINDOW.IsShowWindow");

	UUIAPI_WINDOW_IsShowWindow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TEXTLISTBOX.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_TEXTLISTBOX::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTLISTBOX.Clear");

	UUIAPI_TEXTLISTBOX_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTLISTBOX.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FColor                  TextColor                      (Parm)

void UUIAPI_TEXTLISTBOX::STATIC_AddString(const struct FString& ControlName, const struct FString& Text, const struct FColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTLISTBOX.AddString");

	UUIAPI_TEXTLISTBOX_AddString_Params params;
	params.ControlName = ControlName;
	params.Text = Text;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TABCTRL.SetDisable
// (Final, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// bool                           bDisable                       (Parm)

void UUIAPI_TABCTRL::STATIC_SetDisable(const struct FString& ControlName, int Index, bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TABCTRL.SetDisable");

	UUIAPI_TABCTRL_SetDisable_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TABCTRL.GetTopIndex
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_TABCTRL::STATIC_GetTopIndex(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TABCTRL.GetTopIndex");

	UUIAPI_TABCTRL_GetTopIndex_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TABCTRL.SetTopOrder
// (Final, Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// bool                           bSendMessage                   (Parm)

void UUIAPI_TABCTRL::STATIC_SetTopOrder(const struct FString& ControlName, int Index, bool bSendMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TABCTRL.SetTopOrder");

	UUIAPI_TABCTRL_SetTopOrder_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.bSendMessage = bSendMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TABCTRL.InitTabCtrl
// (Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_TABCTRL::STATIC_InitTabCtrl(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TABCTRL.InitTabCtrl");

	UUIAPI_TABCTRL_InitTabCtrl_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_LISTCTRL.ShowScrollBar
// (Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bShow                          (Parm)

void UUIAPI_LISTCTRL::STATIC_ShowScrollBar(const struct FString& ControlName, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.ShowScrollBar");

	UUIAPI_LISTCTRL_ShowScrollBar_Params params;
	params.ControlName = ControlName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_LISTCTRL.SetSelectedIndex
// (Final, Defined, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// bool                           bMoveToRow                     (Parm)

void UUIAPI_LISTCTRL::STATIC_SetSelectedIndex(const struct FString& ControlName, int Index, bool bMoveToRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.SetSelectedIndex");

	UUIAPI_LISTCTRL_SetSelectedIndex_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.bMoveToRow = bMoveToRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_LISTCTRL.GetSelectedIndex
// (Defined, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_LISTCTRL::STATIC_GetSelectedIndex(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.GetSelectedIndex");

	UUIAPI_LISTCTRL_GetSelectedIndex_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_LISTCTRL.GetRecordCount
// (Final, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_LISTCTRL::STATIC_GetRecordCount(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.GetRecordCount");

	UUIAPI_LISTCTRL_GetRecordCount_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_LISTCTRL.DeleteRecord
// (Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIAPI_LISTCTRL::STATIC_DeleteRecord(const struct FString& ControlName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.DeleteRecord");

	UUIAPI_LISTCTRL_DeleteRecord_Params params;
	params.ControlName = ControlName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_LISTCTRL.DeleteAllItem
// (Final, Defined, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_LISTCTRL::STATIC_DeleteAllItem(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.DeleteAllItem");

	UUIAPI_LISTCTRL_DeleteAllItem_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_LISTCTRL.ModifyRecord
// (Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// struct FLVDataRecord           Record                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_LISTCTRL::STATIC_ModifyRecord(const struct FString& ControlName, int Index, const struct FLVDataRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.ModifyRecord");

	UUIAPI_LISTCTRL_ModifyRecord_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.Record = Record;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_LISTCTRL.InsertRecord
// (Defined, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FLVDataRecord           Record                         (Parm, NeedCtorLink)

void UUIAPI_LISTCTRL::STATIC_InsertRecord(const struct FString& ControlName, const struct FLVDataRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_LISTCTRL.InsertRecord");

	UUIAPI_LISTCTRL_InsertRecord_Params params;
	params.ControlName = ControlName;
	params.Record = Record;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MULTIEDITBOX.SetString
// (Defined, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Str                            (Parm, NeedCtorLink)

void UUIAPI_MULTIEDITBOX::STATIC_SetString(const struct FString& ControlName, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MULTIEDITBOX.SetString");

	UUIAPI_MULTIEDITBOX_SetString_Params params;
	params.ControlName = ControlName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MULTIEDITBOX.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_MULTIEDITBOX::GetString(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MULTIEDITBOX.GetString");

	UUIAPI_MULTIEDITBOX_GetString_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_PROGRESSCTRL.Start
// (Latent, PreOperator, Singular, Simulated, Native, Event, Operator)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_PROGRESSCTRL::Start(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_PROGRESSCTRL.Start");

	UUIAPI_PROGRESSCTRL_Start_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_PROGRESSCTRL.Resume
// (Final, Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_PROGRESSCTRL::STATIC_Resume(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_PROGRESSCTRL.Resume");

	UUIAPI_PROGRESSCTRL_Resume_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_PROGRESSCTRL.Stop
// (Final, Defined, Iterator, Latent, Singular, Net, Exec)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_PROGRESSCTRL::Stop(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_PROGRESSCTRL.Stop");

	UUIAPI_PROGRESSCTRL_Stop_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_PROGRESSCTRL.Reset
// (Defined, Singular, Simulated, Native)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_PROGRESSCTRL::Reset(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_PROGRESSCTRL.Reset");

	UUIAPI_PROGRESSCTRL_Reset_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_PROGRESSCTRL.SetPos
// (Final, PreOperator, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Millitime                      (Parm)

void UUIAPI_PROGRESSCTRL::SetPos(const struct FString& ControlName, int Millitime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_PROGRESSCTRL.SetPos");

	UUIAPI_PROGRESSCTRL_SetPos_Params params;
	params.ControlName = ControlName;
	params.Millitime = Millitime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_PROGRESSCTRL.SetProgressTime
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Millitime                      (Parm)

void UUIAPI_PROGRESSCTRL::SetProgressTime(const struct FString& ControlName, int Millitime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_PROGRESSCTRL.SetProgressTime");

	UUIAPI_PROGRESSCTRL_SetProgressTime_Params params;
	params.ControlName = ControlName;
	params.Millitime = Millitime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_CHECKBOX.ToggleDisable
// (Final, Defined, Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_CHECKBOX::STATIC_ToggleDisable(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_CHECKBOX.ToggleDisable");

	UUIAPI_CHECKBOX_ToggleDisable_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_CHECKBOX.SetDisable
// (Final, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bDisable                       (Parm)

void UUIAPI_CHECKBOX::STATIC_SetDisable(const struct FString& ControlName, bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_CHECKBOX.SetDisable");

	UUIAPI_CHECKBOX_SetDisable_Params params;
	params.ControlName = ControlName;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_CHECKBOX.IsDisable
// (Final, Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_CHECKBOX::STATIC_IsDisable(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_CHECKBOX.IsDisable");

	UUIAPI_CHECKBOX_IsDisable_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_CHECKBOX.IsChecked
// (Iterator, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_CHECKBOX::STATIC_IsChecked(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_CHECKBOX.IsChecked");

	UUIAPI_CHECKBOX_IsChecked_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_CHECKBOX.SetCheck
// (Final, Defined, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bCheck                         (Parm)

void UUIAPI_CHECKBOX::STATIC_SetCheck(const struct FString& ControlName, bool bCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_CHECKBOX.SetCheck");

	UUIAPI_CHECKBOX_SetCheck_Params params;
	params.ControlName = ControlName;
	params.bCheck = bCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_CHECKBOX.SetTitle
// (Defined, Latent, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Title                          (Parm, NeedCtorLink)

void UUIAPI_CHECKBOX::STATIC_SetTitle(const struct FString& ControlName, const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_CHECKBOX.SetTitle");

	UUIAPI_CHECKBOX_SetTitle_Params params;
	params.ControlName = ControlName;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_COMBOBOX.AddStringWithColor
// (Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FColor                  Col                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_COMBOBOX::STATIC_AddStringWithColor(const struct FString& ControlName, const struct FString& Str, const struct FColor& Col)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.AddStringWithColor");

	UUIAPI_COMBOBOX_AddStringWithColor_Params params;
	params.ControlName = ControlName;
	params.Str = Str;
	params.Col = Col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_COMBOBOX.GetNumOfItems
// (Final, Defined, Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_COMBOBOX::STATIC_GetNumOfItems(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.GetNumOfItems");

	UUIAPI_COMBOBOX_GetNumOfItems_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_COMBOBOX.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_COMBOBOX::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.Clear");

	UUIAPI_COMBOBOX_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_COMBOBOX.SetSelectedNum
// (Defined, Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Num                            (Parm)

void UUIAPI_COMBOBOX::STATIC_SetSelectedNum(const struct FString& ControlName, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.SetSelectedNum");

	UUIAPI_COMBOBOX_SetSelectedNum_Params params;
	params.ControlName = ControlName;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_COMBOBOX.GetSelectedNum
// (PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_COMBOBOX::STATIC_GetSelectedNum(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.GetSelectedNum");

	UUIAPI_COMBOBOX_GetSelectedNum_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_COMBOBOX.GetReserved
// (Iterator, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Num                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_COMBOBOX::STATIC_GetReserved(const struct FString& ControlName, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.GetReserved");

	UUIAPI_COMBOBOX_GetReserved_Params params;
	params.ControlName = ControlName;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_COMBOBOX.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Num                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_COMBOBOX::GetString(const struct FString& ControlName, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.GetString");

	UUIAPI_COMBOBOX_GetString_Params params;
	params.ControlName = ControlName;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_COMBOBOX.SYS_AddStringWithReserved
// (Final, Defined, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// int                            Reserved                       (Parm)

void UUIAPI_COMBOBOX::STATIC_SYS_AddStringWithReserved(const struct FString& ControlName, int Index, int Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.SYS_AddStringWithReserved");

	UUIAPI_COMBOBOX_SYS_AddStringWithReserved_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.Reserved = Reserved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_COMBOBOX.AddStringWithReserved
// (Defined, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Str                            (Parm, NeedCtorLink)
// int                            Reserved                       (Parm)

void UUIAPI_COMBOBOX::STATIC_AddStringWithReserved(const struct FString& ControlName, const struct FString& Str, int Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.AddStringWithReserved");

	UUIAPI_COMBOBOX_AddStringWithReserved_Params params;
	params.ControlName = ControlName;
	params.Str = Str;
	params.Reserved = Reserved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_COMBOBOX.SYS_AddString
// (PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIAPI_COMBOBOX::STATIC_SYS_AddString(const struct FString& ControlName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.SYS_AddString");

	UUIAPI_COMBOBOX_SYS_AddString_Params params;
	params.ControlName = ControlName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_COMBOBOX.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Str                            (Parm, NeedCtorLink)

void UUIAPI_COMBOBOX::STATIC_AddString(const struct FString& ControlName, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_COMBOBOX.AddString");

	UUIAPI_COMBOBOX_AddString_Params params;
	params.ControlName = ControlName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.SetHighLight
// (Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 CotrolName                     (Parm, NeedCtorLink)
// bool                           bHighlight                     (Parm)

void UUIAPI_EDITBOX::STATIC_SetHighLight(const struct FString& CotrolName, bool bHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.SetHighLight");

	UUIAPI_EDITBOX_SetHighLight_Params params;
	params.CotrolName = CotrolName;
	params.bHighlight = bHighlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.SetEditType
// (Final, Defined, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 CotrolName                     (Parm, NeedCtorLink)
// struct FString                 type                           (Parm, NeedCtorLink)

void UUIAPI_EDITBOX::STATIC_SetEditType(const struct FString& CotrolName, const struct FString& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.SetEditType");

	UUIAPI_EDITBOX_SetEditType_Params params;
	params.CotrolName = CotrolName;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_EDITBOX::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.Clear");

	UUIAPI_EDITBOX_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.SimulateBackspace
// (Defined, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_EDITBOX::STATIC_SimulateBackspace(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.SimulateBackspace");

	UUIAPI_EDITBOX_SimulateBackspace_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.AddString
// (Final, Defined, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Str                            (Parm, NeedCtorLink)

void UUIAPI_EDITBOX::STATIC_AddString(const struct FString& ControlName, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.AddString");

	UUIAPI_EDITBOX_AddString_Params params;
	params.ControlName = ControlName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.SetString
// (Defined, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Str                            (Parm, NeedCtorLink)

void UUIAPI_EDITBOX::STATIC_SetString(const struct FString& ControlName, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.SetString");

	UUIAPI_EDITBOX_SetString_Params params;
	params.ControlName = ControlName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EDITBOX.GetString
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_EDITBOX::GetString(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EDITBOX.GetString");

	UUIAPI_EDITBOX_GetString_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_BUTTON.SetButtonName
// (Final, Defined, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            NameID                         (Parm)

void UUIAPI_BUTTON::STATIC_SetButtonName(const struct FString& ControlName, int NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_BUTTON.SetButtonName");

	UUIAPI_BUTTON_SetButtonName_Params params;
	params.ControlName = ControlName;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TREECTRL.SetNodeItemText
// (Defined, Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// int                            nTextID                        (Parm)
// struct FString                 strText                        (Parm, NeedCtorLink)

void UUIAPI_TREECTRL::STATIC_SetNodeItemText(const struct FString& ControlName, const struct FString& NodeName, int nTextID, const struct FString& strText)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.SetNodeItemText");

	UUIAPI_TREECTRL_SetNodeItemText_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;
	params.nTextID = nTextID;
	params.strText = strText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TREECTRL.ShowScrollBar
// (Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bShow                          (Parm)

void UUIAPI_TREECTRL::STATIC_ShowScrollBar(const struct FString& ControlName, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.ShowScrollBar");

	UUIAPI_TREECTRL_ShowScrollBar_Params params;
	params.ControlName = ControlName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TREECTRL.GetParentNode
// (Final, Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_TREECTRL::STATIC_GetParentNode(const struct FString& ControlName, const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.GetParentNode");

	UUIAPI_TREECTRL_GetParentNode_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TREECTRL.GetChildNode
// (Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_TREECTRL::STATIC_GetChildNode(const struct FString& ControlName, const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.GetChildNode");

	UUIAPI_TREECTRL_GetChildNode_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TREECTRL.IsExpandedNode
// (Final, Defined, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_TREECTRL::STATIC_IsExpandedNode(const struct FString& ControlName, const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.IsExpandedNode");

	UUIAPI_TREECTRL_IsExpandedNode_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TREECTRL.IsNodeNameExist
// (Defined, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_TREECTRL::STATIC_IsNodeNameExist(const struct FString& ControlName, const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.IsNodeNameExist");

	UUIAPI_TREECTRL_IsNodeNameExist_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TREECTRL.DeleteNode
// (Final, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_TREECTRL::STATIC_DeleteNode(const struct FString& ControlName, const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.DeleteNode");

	UUIAPI_TREECTRL_DeleteNode_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TREECTRL.GetExpandedNode
// (NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_TREECTRL::STATIC_GetExpandedNode(const struct FString& ControlName, const struct FString& NodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.GetExpandedNode");

	UUIAPI_TREECTRL_GetExpandedNode_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TREECTRL.SetExpandedNode
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// bool                           bExpanded                      (Parm)

void UUIAPI_TREECTRL::STATIC_SetExpandedNode(const struct FString& ControlName, const struct FString& NodeName, bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.SetExpandedNode");

	UUIAPI_TREECTRL_SetExpandedNode_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TREECTRL.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_TREECTRL::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.Clear");

	UUIAPI_TREECTRL_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TREECTRL.InsertNodeItem
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 NodeName                       (Parm, NeedCtorLink)
// struct FXMLTreeNodeItemInfo    infNodeItem                    (Parm, NeedCtorLink)

void UUIAPI_TREECTRL::STATIC_InsertNodeItem(const struct FString& ControlName, const struct FString& NodeName, const struct FXMLTreeNodeItemInfo& infNodeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.InsertNodeItem");

	UUIAPI_TREECTRL_InsertNodeItem_Params params;
	params.ControlName = ControlName;
	params.NodeName = NodeName;
	params.infNodeItem = infNodeItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TREECTRL.InsertNode
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 strParentName                  (Parm, NeedCtorLink)
// struct FXMLTreeNodeInfo        infNode                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_TREECTRL::STATIC_InsertNode(const struct FString& ControlName, const struct FString& strParentName, const struct FXMLTreeNodeInfo& infNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TREECTRL.InsertNode");

	UUIAPI_TREECTRL_InsertNode_Params params;
	params.ControlName = ControlName;
	params.strParentName = strParentName;
	params.infNode = infNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TEXTURECTRL.GetTextureName
// (Final, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_TEXTURECTRL::STATIC_GetTextureName(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTURECTRL.GetTextureName");

	UUIAPI_TEXTURECTRL_GetTextureName_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TEXTURECTRL.SetTextureWithObject
// (Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// class UTexture*                objTexture                     (Parm)

void UUIAPI_TEXTURECTRL::STATIC_SetTextureWithObject(const struct FString& ControlName, class UTexture* objTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTURECTRL.SetTextureWithObject");

	UUIAPI_TEXTURECTRL_SetTextureWithObject_Params params;
	params.ControlName = ControlName;
	params.objTexture = objTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTURECTRL.SetTextureWithClanCrest
// (Final, Defined, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            clanID                         (Parm)

void UUIAPI_TEXTURECTRL::STATIC_SetTextureWithClanCrest(const struct FString& ControlName, int clanID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTURECTRL.SetTextureWithClanCrest");

	UUIAPI_TEXTURECTRL_SetTextureWithClanCrest_Params params;
	params.ControlName = ControlName;
	params.clanID = clanID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTURECTRL.SetTextureCtrlType
// (Defined, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// TEnumAsByte<ETextureCtrlType>  type                           (Parm)

void UUIAPI_TEXTURECTRL::STATIC_SetTextureCtrlType(const struct FString& ControlName, TEnumAsByte<ETextureCtrlType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTURECTRL.SetTextureCtrlType");

	UUIAPI_TEXTURECTRL_SetTextureCtrlType_Params params;
	params.ControlName = ControlName;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTURECTRL.SetTexture
// (Iterator, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 strTexture                     (Parm, NeedCtorLink)

void UUIAPI_TEXTURECTRL::STATIC_SetTexture(const struct FString& ControlName, const struct FString& strTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTURECTRL.SetTexture");

	UUIAPI_TEXTURECTRL_SetTexture_Params params;
	params.ControlName = ControlName;
	params.strTexture = strTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTURECTRL.SetUV
// (Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            a_U                            (Parm)
// int                            a_V                            (Parm)

void UUIAPI_TEXTURECTRL::STATIC_SetUV(const struct FString& ControlName, int a_U, int a_V)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTURECTRL.SetUV");

	UUIAPI_TEXTURECTRL_SetUV_Params params;
	params.ControlName = ControlName;
	params.a_U = a_U;
	params.a_V = a_V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTBOX.SetTooltipString
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Text                           (Parm, NeedCtorLink)

void UUIAPI_TEXTBOX::STATIC_SetTooltipString(const struct FString& ControlName, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTBOX.SetTooltipString");

	UUIAPI_TEXTBOX_SetTooltipString_Params params;
	params.ControlName = ControlName;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTBOX.GetText
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIAPI_TEXTBOX::STATIC_GetText(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTBOX.GetText");

	UUIAPI_TEXTBOX_GetText_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_TEXTBOX.SetInt
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Number                         (Parm)

void UUIAPI_TEXTBOX::STATIC_SetInt(const struct FString& ControlName, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTBOX.SetInt");

	UUIAPI_TEXTBOX_SetInt_Params params;
	params.ControlName = ControlName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTBOX.SetAlign
// (Defined, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// TEnumAsByte<ETextAlign>        Align                          (Parm)

void UUIAPI_TEXTBOX::STATIC_SetAlign(const struct FString& ControlName, TEnumAsByte<ETextAlign> Align)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTBOX.SetAlign");

	UUIAPI_TEXTBOX_SetAlign_Params params;
	params.ControlName = ControlName;
	params.Align = Align;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTBOX.SetText
// (Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Text                           (Parm, NeedCtorLink)

void UUIAPI_TEXTBOX::STATIC_SetText(const struct FString& ControlName, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTBOX.SetText");

	UUIAPI_TEXTBOX_SetText_Params params;
	params.ControlName = ControlName;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_TEXTBOX.SetTextColor
// (Final, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FColor                  a_Color                        (Parm)

void UUIAPI_TEXTBOX::STATIC_SetTextColor(const struct FString& ControlName, const struct FColor& a_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_TEXTBOX.SetTextColor");

	UUIAPI_TEXTBOX_SetTextColor_Params params;
	params.ControlName = ControlName;
	params.a_Color = a_Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_STATUSICONCTRL.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_STATUSICONCTRL::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.Clear");

	UUIAPI_STATUSICONCTRL_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_STATUSICONCTRL.DelItem
// (Final, Defined, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            row                            (Parm)
// int                            Col                            (Parm)

void UUIAPI_STATUSICONCTRL::STATIC_DelItem(const struct FString& ControlName, int row, int Col)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.DelItem");

	UUIAPI_STATUSICONCTRL_DelItem_Params params;
	params.ControlName = ControlName;
	params.row = row;
	params.Col = Col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_STATUSICONCTRL.GetItem
// (Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            row                            (Parm)
// int                            Col                            (Parm)
// struct FStatusIconInfo         Info                           (Parm, OutParm, NeedCtorLink)

void UUIAPI_STATUSICONCTRL::STATIC_GetItem(const struct FString& ControlName, int row, int Col, struct FStatusIconInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.GetItem");

	UUIAPI_STATUSICONCTRL_GetItem_Params params;
	params.ControlName = ControlName;
	params.row = row;
	params.Col = Col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function NWindow.UIAPI_STATUSICONCTRL.GetColCount
// (Defined, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            row                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_STATUSICONCTRL::STATIC_GetColCount(const struct FString& ControlName, int row)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.GetColCount");

	UUIAPI_STATUSICONCTRL_GetColCount_Params params;
	params.ControlName = ControlName;
	params.row = row;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_STATUSICONCTRL.GetRowCount
// (Final, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_STATUSICONCTRL::STATIC_GetRowCount(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.GetRowCount");

	UUIAPI_STATUSICONCTRL_GetRowCount_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_STATUSICONCTRL.InsertCol
// (PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            row                            (Parm)
// int                            Col                            (Parm)
// struct FStatusIconInfo         Info                           (Parm, NeedCtorLink)

void UUIAPI_STATUSICONCTRL::STATIC_InsertCol(const struct FString& ControlName, int row, int Col, const struct FStatusIconInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.InsertCol");

	UUIAPI_STATUSICONCTRL_InsertCol_Params params;
	params.ControlName = ControlName;
	params.row = row;
	params.Col = Col;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_STATUSICONCTRL.InsertRow
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            row                            (Parm)

void UUIAPI_STATUSICONCTRL::STATIC_InsertRow(const struct FString& ControlName, int row)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.InsertRow");

	UUIAPI_STATUSICONCTRL_InsertRow_Params params;
	params.ControlName = ControlName;
	params.row = row;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_STATUSICONCTRL.AddCol
// (Defined, Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            row                            (Parm)
// struct FStatusIconInfo         Info                           (Parm, NeedCtorLink)

void UUIAPI_STATUSICONCTRL::STATIC_AddCol(const struct FString& ControlName, int row, const struct FStatusIconInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.AddCol");

	UUIAPI_STATUSICONCTRL_AddCol_Params params;
	params.ControlName = ControlName;
	params.row = row;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_STATUSICONCTRL.AddRow
// (Final, Iterator, Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_STATUSICONCTRL::STATIC_AddRow(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_STATUSICONCTRL.AddRow");

	UUIAPI_STATUSICONCTRL_AddRow_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_SLIDERCTRL.GetTotalTickCount
// (Latent, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_SLIDERCTRL::STATIC_GetTotalTickCount(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_SLIDERCTRL.GetTotalTickCount");

	UUIAPI_SLIDERCTRL_GetTotalTickCount_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_SLIDERCTRL.SetCurrentTick
// (Final, Defined, Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            iCurrTick                      (Parm)

void UUIAPI_SLIDERCTRL::STATIC_SetCurrentTick(const struct FString& ControlName, int iCurrTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_SLIDERCTRL.SetCurrentTick");

	UUIAPI_SLIDERCTRL_SetCurrentTick_Params params;
	params.ControlName = ControlName;
	params.iCurrTick = iCurrTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_SLIDERCTRL.GetCurrentTick
// (Defined, Iterator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_SLIDERCTRL::STATIC_GetCurrentTick(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_SLIDERCTRL.GetCurrentTick");

	UUIAPI_SLIDERCTRL_GetCurrentTick_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_SHORTCUTITEMWINDOW.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 a_strWindowID                  (Parm, NeedCtorLink)

void UUIAPI_SHORTCUTITEMWINDOW::Clear(const struct FString& a_strWindowID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_SHORTCUTITEMWINDOW.Clear");

	UUIAPI_SHORTCUTITEMWINDOW_Clear_Params params;
	params.a_strWindowID = a_strWindowID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_SHORTCUTITEMWINDOW.UpdateShortcut
// (Final, Defined, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 a_strWindowID                  (Parm, NeedCtorLink)
// int                            a_nShortcutID                  (Parm)

void UUIAPI_SHORTCUTITEMWINDOW::STATIC_UpdateShortcut(const struct FString& a_strWindowID, int a_nShortcutID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_SHORTCUTITEMWINDOW.UpdateShortcut");

	UUIAPI_SHORTCUTITEMWINDOW_UpdateShortcut_Params params;
	params.a_strWindowID = a_strWindowID;
	params.a_nShortcutID = a_nShortcutID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.IsUsingPrimeShop
// (Final, Defined, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_IsUsingPrimeShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsUsingPrimeShop");

	UUIScript_IsUsingPrimeShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowCashChargeWebSite
// (Iterator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_ShowCashChargeWebSite()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowCashChargeWebSite");

	UUIScript_ShowCashChargeWebSite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBR_BuyProduct
// (Final, Iterator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iProductID                     (Parm)
// int                            iAmount                        (Parm)

void UUIScript::STATIC_RequestBR_BuyProduct(int iProductID, int iAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBR_BuyProduct");

	UUIScript_RequestBR_BuyProduct_Params params;
	params.iProductID = iProductID;
	params.iAmount = iAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBR_ProductInfo
// (Defined, Iterator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iProductID                     (Parm)

void UUIScript::STATIC_RequestBR_ProductInfo(int iProductID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBR_ProductInfo");

	UUIScript_RequestBR_ProductInfo_Params params;
	params.iProductID = iProductID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBR_ProductList
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestBR_ProductList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBR_ProductList");

	UUIScript_RequestBR_ProductList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBR_GamePoint
// (Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestBR_GamePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBR_GamePoint");

	UUIScript_RequestBR_GamePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetChatColorByType
// (Final, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            type                           (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UUIScript::STATIC_GetChatColorByType(int type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetChatColorByType");

	UUIScript_GetChatColorByType_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetDominionFlagIconTex
// (Defined, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            DominionID                     (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUIScript::STATIC_GetDominionFlagIconTex(int DominionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetDominionFlagIconTex");

	UUIScript_GetDominionFlagIconTex_Params params;
	params.DominionID = DominionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestDominionInfo
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestDominionInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDominionInfo");

	UUIScript_RequestDominionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestJoinDominionWar
// (Iterator, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            DominionID                     (Parm)
// int                            Clan                           (Parm)
// int                            Join                           (Parm)
// int                            JoinID                         (Parm)

void UUIScript::STATIC_RequestJoinDominionWar(int DominionID, int Clan, int Join, int JoinID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestJoinDominionWar");

	UUIScript_RequestJoinDominionWar_Params params;
	params.DominionID = DominionID;
	params.Clan = Clan;
	params.Join = Join;
	params.JoinID = JoinID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestStopShowCrataeCubeRank
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestStopShowCrataeCubeRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestStopShowCrataeCubeRank");

	UUIScript_RequestStopShowCrataeCubeRank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestStartShowCrataeCubeRank
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestStartShowCrataeCubeRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestStartShowCrataeCubeRank");

	UUIScript_RequestStartShowCrataeCubeRank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestWithDrawPremiumItem
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FINT64                  Amount                         (Parm)

void UUIScript::STATIC_RequestWithDrawPremiumItem(int Index, const struct FINT64& Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestWithDrawPremiumItem");

	UUIScript_RequestWithDrawPremiumItem_Params params;
	params.Index = Index;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetNicknameColorWithIndex
// (PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ColorIndex                     (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UUIScript::STATIC_GetNicknameColorWithIndex(int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetNicknameColorWithIndex");

	UUIScript_GetNicknameColorWithIndex_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetMaxNicknameColorIndexCnt
// (Final, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetMaxNicknameColorIndexCnt()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetMaxNicknameColorIndexCnt");

	UUIScript_GetMaxNicknameColorIndexCnt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestChangeNicknameNColor
// (Defined, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ColorIndex                     (Parm)
// struct FString                 nickname                       (Parm, NeedCtorLink)
// struct FItemID                 Id                             (Parm)

void UUIScript::STATIC_RequestChangeNicknameNColor(int ColorIndex, const struct FString& nickname, const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestChangeNicknameNColor");

	UUIScript_RequestChangeNicknameNColor_Params params;
	params.ColorIndex = ColorIndex;
	params.nickname = nickname;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ChatNotificationFilter
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Message                        (Parm, OutParm, NeedCtorLink)
// struct FString                 keyword0                       (Parm, NeedCtorLink)
// struct FString                 keyword1                       (Parm, NeedCtorLink)
// struct FString                 keyword2                       (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_ChatNotificationFilter(const struct FString& keyword0, const struct FString& keyword1, const struct FString& keyword2, struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ChatNotificationFilter");

	UUIScript_ChatNotificationFilter_Params params;
	params.keyword0 = keyword0;
	params.keyword1 = keyword1;
	params.keyword2 = keyword2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestPVPMatchRecord
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestPVPMatchRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestPVPMatchRecord");

	UUIScript_RequestPVPMatchRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestFortressMapInfo
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            FortressID                     (Parm)

void UUIScript::STATIC_RequestFortressMapInfo(int FortressID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestFortressMapInfo");

	UUIScript_RequestFortressMapInfo_Params params;
	params.FortressID = FortressID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestFortressSiegeInfo
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestFortressSiegeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestFortressSiegeInfo");

	UUIScript_RequestFortressSiegeInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAllAgitInfo
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestAllAgitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAllAgitInfo");

	UUIScript_RequestAllAgitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAllFortressInfo
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestAllFortressInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAllFortressInfo");

	UUIScript_RequestAllFortressInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAllCastleInfo
// (Final, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestAllCastleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAllCastleInfo");

	UUIScript_RequestAllCastleInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.CharacterCreateGetClassType
// (Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Race                           (Parm)
// int                            Job                            (Parm)
// int                            Sex                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_CharacterCreateGetClassType(int Race, int Job, int Sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CharacterCreateGetClassType");

	UUIScript_CharacterCreateGetClassType_Params params;
	params.Race = Race;
	params.Job = Job;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.CheckValidName
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_CheckValidName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CheckValidName");

	UUIScript_CheckValidName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.CheckNameLength
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_CheckNameLength(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CheckNameLength");

	UUIScript_CheckNameLength_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.DefaultCharacterStop
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_DefaultCharacterStop(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.DefaultCharacterStop");

	UUIScript_DefaultCharacterStop_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.DefaultCharacterTurn
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// float                          Ratio                          (Parm)

void UUIScript::STATIC_DefaultCharacterTurn(int Index, float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.DefaultCharacterTurn");

	UUIScript_DefaultCharacterTurn_Params params;
	params.Index = Index;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetCharacterStyle
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// int                            HairType                       (Parm)
// int                            HairColor                      (Parm)
// int                            FaceType                       (Parm)

void UUIScript::STATIC_SetCharacterStyle(int Index, int HairType, int HairColor, int FaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetCharacterStyle");

	UUIScript_SetCharacterStyle_Params params;
	params.Index = Index;
	params.HairType = HairType;
	params.HairColor = HairColor;
	params.FaceType = FaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowOnlyOneDefaultCharacter
// (Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_ShowOnlyOneDefaultCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowOnlyOneDefaultCharacter");

	UUIScript_ShowOnlyOneDefaultCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetClassDescription
// (Final, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetClassDescription(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClassDescription");

	UUIScript_GetClassDescription_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.ExecLobbyEvent
// (Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 EventName                      (Parm, NeedCtorLink)
// bool                           bReverse                       (OptionalParm, Parm)

void UUIScript::STATIC_ExecLobbyEvent(const struct FString& EventName, bool bReverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ExecLobbyEvent");

	UUIScript_ExecLobbyEvent_Params params;
	params.EventName = EventName;
	params.bReverse = bReverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetCurrentMakingRace
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Race                           (Parm)

void UUIScript::STATIC_SetCurrentMakingRace(int Race)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetCurrentMakingRace");

	UUIScript_SetCurrentMakingRace_Params params;
	params.Race = Race;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowAllDefaultCharacter
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_ShowAllDefaultCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowAllDefaultCharacter");

	UUIScript_ShowAllDefaultCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SpawnDefaultCharacter
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_SpawnDefaultCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SpawnDefaultCharacter");

	UUIScript_SpawnDefaultCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ClearDefaultCharacterInfo
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_ClearDefaultCharacterInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ClearDefaultCharacterInfo");

	UUIScript_ClearDefaultCharacterInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetDefaultCharacter
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_SetDefaultCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetDefaultCharacter");

	UUIScript_SetDefaultCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestPrevState
// (Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestPrevState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestPrevState");

	UUIScript_RequestPrevState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestCreateCharacter
// (Final, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)
// int                            Race                           (Parm)
// int                            Job                            (Parm)
// int                            Sex                            (Parm)
// int                            HairType                       (Parm)
// int                            HairColor                      (Parm)
// int                            FaceType                       (Parm)

void UUIScript::STATIC_RequestCreateCharacter(const struct FString& Name, int Race, int Job, int Sex, int HairType, int HairColor, int FaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestCreateCharacter");

	UUIScript_RequestCreateCharacter_Params params;
	params.Name = Name;
	params.Race = Race;
	params.Job = Job;
	params.Sex = Sex;
	params.HairType = HairType;
	params.HairColor = HairColor;
	params.FaceType = FaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetSelectedCharacter
// (Defined, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_SetSelectedCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetSelectedCharacter");

	UUIScript_SetSelectedCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.IsDisciplineCharacter
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsDisciplineCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsDisciplineCharacter");

	UUIScript_IsDisciplineCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsScheduledToDeleteCharacter
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsScheduledToDeleteCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsScheduledToDeleteCharacter");

	UUIScript_IsScheduledToDeleteCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.ResetCharacterPosition
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_ResetCharacterPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ResetCharacterPosition");

	UUIScript_ResetCharacterPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDeleteCharacter
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_RequestDeleteCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDeleteCharacter");

	UUIScript_RequestDeleteCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestRestoreCharacter
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_RequestRestoreCharacter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestRestoreCharacter");

	UUIScript_RequestRestoreCharacter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetSelectedCharacterInfo
// (PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FUserInfo               a_UserInfo                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetSelectedCharacterInfo(int Index, struct FUserInfo* a_UserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSelectedCharacterInfo");

	UUIScript_GetSelectedCharacterInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_UserInfo != nullptr)
		*a_UserInfo = params.a_UserInfo;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestCharacterSelect
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_RequestCharacterSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestCharacterSelect");

	UUIScript_RequestCharacterSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.StartGame
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native)
// Parameters:
// int                            SelectedCharacter              (Parm)

void UUIScript::StartGame(int SelectedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.StartGame");

	UUIScript_StartGame_Params params;
	params.SelectedCharacter = SelectedCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GotoLogin
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_GotoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GotoLogin");

	UUIScript_GotoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.CreateNewCharacter
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_CreateNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CreateNewCharacter");

	UUIScript_CreateNewCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowEnableTrackerBox
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bShow                          (Parm)

void UUIScript::STATIC_ShowEnableTrackerBox(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowEnableTrackerBox");

	UUIScript_ShowEnableTrackerBox_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ExecuteAlign
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TEnumAsByte<ETrackerAlignType> type                           (Parm)

void UUIScript::STATIC_ExecuteAlign(TEnumAsByte<ETrackerAlignType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ExecuteAlign");

	UUIScript_ExecuteAlign_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.DeleteAttachedWindow
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_DeleteAttachedWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.DeleteAttachedWindow");

	UUIScript_DeleteAttachedWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ClearTracker
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_ClearTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ClearTracker");

	UUIScript_ClearTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetTrackerAttachedWindow
// (Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UUIScript::STATIC_GetTrackerAttachedWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTrackerAttachedWindow");

	UUIScript_GetTrackerAttachedWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTrackerAttachedWindowList
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TArray<class UWindowHandle*>   a_WindowList                   (Parm, NeedCtorLink)

void UUIScript::STATIC_GetTrackerAttachedWindowList(TArray<class UWindowHandle*> a_WindowList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTrackerAttachedWindowList");

	UUIScript_GetTrackerAttachedWindowList_Params params;
	params.a_WindowList = a_WindowList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowExampleAnimation
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bShow                          (Parm)

void UUIScript::STATIC_ShowExampleAnimation(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowExampleAnimation");

	UUIScript_ShowExampleAnimation_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowVirtualWindowBackground
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           bShow                          (Parm)

void UUIScript::STATIC_ShowVirtualWindowBackground(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowVirtualWindowBackground");

	UUIScript_ShowVirtualWindowBackground_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetXMLControlIndex
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 type                           (Parm, NeedCtorLink)
// TEnumAsByte<EXMLControlType>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EXMLControlType> UUIScript::STATIC_GetXMLControlIndex(const struct FString& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetXMLControlIndex");

	UUIScript_GetXMLControlIndex_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetXMLControlString
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TEnumAsByte<EXMLControlType>   type                           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetXMLControlString(TEnumAsByte<EXMLControlType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetXMLControlString");

	UUIScript_GetXMLControlString_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetInterfaceDir
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetInterfaceDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetInterfaceDir");

	UUIScript_GetInterfaceDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.InitCreditState
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_InitCreditState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.InitCreditState");

	UUIScript_InitCreditState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ShowMessageInLogin
// (Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UUIScript::STATIC_ShowMessageInLogin(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ShowMessageInLogin");

	UUIScript_ShowMessageInLogin_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetQuestLocation
// (Final, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FVector                 Location                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetQuestLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetQuestLocation");

	UUIScript_GetQuestLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.ToggleMsnWindow
// (Defined, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_ToggleMsnWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ToggleMsnWindow");

	UUIScript_ToggleMsnWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetManorNameInManorList
// (Final, Defined, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetManorNameInManorList(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetManorNameInManorList");

	UUIScript_GetManorNameInManorList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetManorIDInManorList
// (Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetManorIDInManorList(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetManorIDInManorList");

	UUIScript_GetManorIDInManorList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetManorCount
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetManorCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetManorCount");

	UUIScript_GetManorCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestProcureCropList
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestProcureCropList(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestProcureCropList");

	UUIScript_RequestProcureCropList_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.FishFinalAction
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_FishFinalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.FishFinalAction");

	UUIScript_FishFinalAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.InitFishViewportWnd
// (Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// bool                           Event                          (Parm)

void UUIScript::STATIC_InitFishViewportWnd(bool Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.InitFishViewportWnd");

	UUIScript_InitFishViewportWnd_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestFishRanking
// (Final, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestFishRanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestFishRanking");

	UUIScript_RequestFishRanking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetScenePlayerCtrlHandleWithWindowHandle
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// class UScenePlayerCtrlHandle*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UScenePlayerCtrlHandle* UUIScript::STATIC_GetScenePlayerCtrlHandleWithWindowHandle(class UWindowHandle* a_WindowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetScenePlayerCtrlHandleWithWindowHandle");

	UUIScript_GetScenePlayerCtrlHandleWithWindowHandle_Params params;
	params.a_WindowHandle = a_WindowHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCharacterViewportWindowHandle
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UCharacterViewportWindowHandle* ReturnValue                    (Parm, OutParm, ReturnParm)

class UCharacterViewportWindowHandle* UUIScript::STATIC_GetCharacterViewportWindowHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCharacterViewportWindowHandle");

	UUIScript_GetCharacterViewportWindowHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetWindowHandle
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UUIScript::STATIC_GetWindowHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetWindowHandle");

	UUIScript_GetWindowHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetVideoPlayerCtrlHandle
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UVideoPlayerCtrlHandle*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UVideoPlayerCtrlHandle* UUIScript::STATIC_GetVideoPlayerCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetVideoPlayerCtrlHandle");

	UUIScript_GetVideoPlayerCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTreeHandle
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UTreeHandle*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UTreeHandle* UUIScript::STATIC_GetTreeHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTreeHandle");

	UUIScript_GetTreeHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTextureHandle
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UTextureHandle*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UTextureHandle* UUIScript::STATIC_GetTextureHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTextureHandle");

	UUIScript_GetTextureHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTextListBoxHandle
// (PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UTextListBoxHandle*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UTextListBoxHandle* UUIScript::STATIC_GetTextListBoxHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTextListBoxHandle");

	UUIScript_GetTextListBoxHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTextBoxHandle
// (Final, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UTextBoxHandle*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UTextBoxHandle* UUIScript::STATIC_GetTextBoxHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTextBoxHandle");

	UUIScript_GetTextBoxHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTabHandle
// (Defined, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UTabHandle*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UTabHandle* UUIScript::STATIC_GetTabHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTabHandle");

	UUIScript_GetTabHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetStatusIconHandle
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UStatusIconHandle*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UStatusIconHandle* UUIScript::STATIC_GetStatusIconHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetStatusIconHandle");

	UUIScript_GetStatusIconHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetStatusBarHandle
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UStatusBarHandle*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UStatusBarHandle* UUIScript::STATIC_GetStatusBarHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetStatusBarHandle");

	UUIScript_GetStatusBarHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetSliderCtrlHandle
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class USliderCtrlHandle*       ReturnValue                    (Parm, OutParm, ReturnParm)

class USliderCtrlHandle* UUIScript::STATIC_GetSliderCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSliderCtrlHandle");

	UUIScript_GetSliderCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetScenePlayerCtrlHandle
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UScenePlayerCtrlHandle*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UScenePlayerCtrlHandle* UUIScript::STATIC_GetScenePlayerCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetScenePlayerCtrlHandle");

	UUIScript_GetScenePlayerCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetRadarMapCtrlHandle
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class URadarMapCtrlHandle*     ReturnValue                    (Parm, OutParm, ReturnParm)

class URadarMapCtrlHandle* UUIScript::STATIC_GetRadarMapCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetRadarMapCtrlHandle");

	UUIScript_GetRadarMapCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPropertyControllerHandle
// (Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UPropertyControllerHandle* ReturnValue                    (Parm, OutParm, ReturnParm)

class UPropertyControllerHandle* UUIScript::STATIC_GetPropertyControllerHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPropertyControllerHandle");

	UUIScript_GetPropertyControllerHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetProgressCtrlHandle
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UProgressCtrlHandle*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UProgressCtrlHandle* UUIScript::STATIC_GetProgressCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetProgressCtrlHandle");

	UUIScript_GetProgressCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetNameCtrlHandle
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UNameCtrlHandle*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UNameCtrlHandle* UUIScript::STATIC_GetNameCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetNameCtrlHandle");

	UUIScript_GetNameCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetMinimapCtrlHandle
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UMinimapCtrlHandle*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UMinimapCtrlHandle* UUIScript::STATIC_GetMinimapCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetMinimapCtrlHandle");

	UUIScript_GetMinimapCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetListCtrlHandle
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UListCtrlHandle*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UListCtrlHandle* UUIScript::STATIC_GetListCtrlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetListCtrlHandle");

	UUIScript_GetListCtrlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetListBoxHandle
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UListBoxHandle*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UListBoxHandle* UUIScript::STATIC_GetListBoxHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetListBoxHandle");

	UUIScript_GetListBoxHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetItemWindowHandle
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UItemWindowHandle*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UItemWindowHandle* UUIScript::STATIC_GetItemWindowHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetItemWindowHandle");

	UUIScript_GetItemWindowHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetHtmlHandle
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UHtmlHandle*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UHtmlHandle* UUIScript::STATIC_GetHtmlHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetHtmlHandle");

	UUIScript_GetHtmlHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetEditBoxHandle
// (Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UEditBoxHandle*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UEditBoxHandle* UUIScript::STATIC_GetEditBoxHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetEditBoxHandle");

	UUIScript_GetEditBoxHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetDrawPanelHandle
// (Final, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UDrawPanelHandle*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UDrawPanelHandle* UUIScript::STATIC_GetDrawPanelHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetDrawPanelHandle");

	UUIScript_GetDrawPanelHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetComboBoxHandle
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UComboBoxHandle*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UComboBoxHandle* UUIScript::STATIC_GetComboBoxHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetComboBoxHandle");

	UUIScript_GetComboBoxHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCheckBoxHandle
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UCheckBoxHandle*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UCheckBoxHandle* UUIScript::STATIC_GetCheckBoxHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCheckBoxHandle");

	UUIScript_GetCheckBoxHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetChatWindowHandle
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UChatWindowHandle*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UChatWindowHandle* UUIScript::STATIC_GetChatWindowHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetChatWindowHandle");

	UUIScript_GetChatWindowHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetButtonHandle
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UButtonHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UButtonHandle* UUIScript::STATIC_GetButtonHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetButtonHandle");

	UUIScript_GetButtonHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetBarHandle
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UBarHandle*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UBarHandle* UUIScript::STATIC_GetBarHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetBarHandle");

	UUIScript_GetBarHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetAnimTextureHandle
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UAnimTextureHandle*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UAnimTextureHandle* UUIScript::STATIC_GetAnimTextureHandle(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetAnimTextureHandle");

	UUIScript_GetAnimTextureHandle_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetHandle
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// class UWindowHandle*           a_ParentWnd                    (OptionalParm, Parm)
// int                            a_CloneID                      (OptionalParm, Parm)
// class UWindowHandle*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UWindowHandle* UUIScript::STATIC_GetHandle(const struct FString& a_ControlID, class UWindowHandle* a_ParentWnd, int a_CloneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetHandle");

	UUIScript_GetHandle_Params params;
	params.a_ControlID = a_ControlID;
	params.a_ParentWnd = a_ParentWnd;
	params.a_CloneID = a_CloneID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestObserverModeEnd
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestObserverModeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestObserverModeEnd");

	UUIScript_RequestObserverModeEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestExEnchantSkill
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            type                           (Parm)
// int                            iID                            (Parm)
// int                            iLevel                         (Parm)

void UUIScript::STATIC_RequestExEnchantSkill(int type, int iID, int iLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestExEnchantSkill");

	UUIScript_RequestExEnchantSkill_Params params;
	params.type = type;
	params.iID = iID;
	params.iLevel = iLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestExEnchantSkillInfoDetail
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            type                           (Parm)
// int                            iID                            (Parm)
// int                            iLevel                         (Parm)

void UUIScript::STATIC_RequestExEnchantSkillInfoDetail(int type, int iID, int iLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestExEnchantSkillInfoDetail");

	UUIScript_RequestExEnchantSkillInfoDetail_Params params;
	params.type = type;
	params.iID = iID;
	params.iLevel = iLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestExEnchantSkillInfo
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            type                           (Parm)
// int                            iID                            (Parm)
// int                            iLevel                         (Parm)

void UUIScript::STATIC_RequestExEnchantSkillInfo(int type, int iID, int iLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestExEnchantSkillInfo");

	UUIScript_RequestExEnchantSkillInfo_Params params;
	params.type = type;
	params.iID = iID;
	params.iLevel = iLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAcquireSkillSubClan
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iID                            (Parm)
// int                            iLevel                         (Parm)
// int                            iType                          (Parm)
// int                            iSubClan                       (Parm)

void UUIScript::STATIC_RequestAcquireSkillSubClan(int iID, int iLevel, int iType, int iSubClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAcquireSkillSubClan");

	UUIScript_RequestAcquireSkillSubClan_Params params;
	params.iID = iID;
	params.iLevel = iLevel;
	params.iType = iType;
	params.iSubClan = iSubClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAcquireSkill
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iID                            (Parm)
// int                            iLevel                         (Parm)
// int                            iType                          (Parm)

void UUIScript::STATIC_RequestAcquireSkill(int iID, int iLevel, int iType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAcquireSkill");

	UUIScript_RequestAcquireSkill_Params params;
	params.iID = iID;
	params.iLevel = iLevel;
	params.iType = iType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAcquireSkillInfo
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iID                            (Parm)
// int                            iLevel                         (Parm)
// int                            iType                          (Parm)

void UUIScript::STATIC_RequestAcquireSkillInfo(int iID, int iLevel, int iType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAcquireSkillInfo");

	UUIScript_RequestAcquireSkillInfo_Params params;
	params.iID = iID;
	params.iLevel = iLevel;
	params.iType = iType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.BeginBenchMark
// (PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_BeginBenchMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.BeginBenchMark");

	UUIScript_BeginBenchMark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.BeginPlay
// (Iterator, Singular, Net, Simulated)

void UUIScript::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.BeginPlay");

	UUIScript_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.EraseReplayFile
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 strFileName                    (Parm, NeedCtorLink)

void UUIScript::STATIC_EraseReplayFile(const struct FString& strFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.EraseReplayFile");

	UUIScript_EraseReplayFile_Params params;
	params.strFileName = strFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.BeginReplay
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 strFileName                    (Parm, NeedCtorLink)
// bool                           bLoadCameraInst                (Parm)
// bool                           bLoadChatData                  (Parm)

void UUIScript::STATIC_BeginReplay(const struct FString& strFileName, bool bLoadCameraInst, bool bLoadChatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.BeginReplay");

	UUIScript_BeginReplay_Params params;
	params.strFileName = strFileName;
	params.bLoadCameraInst = bLoadCameraInst;
	params.bLoadChatData = bLoadChatData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetDirList
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TArray<struct FString>         DirList                        (Parm, OutParm, NeedCtorLink)
// struct FString                 strDir                         (Parm, NeedCtorLink)

void UUIScript::STATIC_GetDirList(const struct FString& strDir, TArray<struct FString>* DirList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetDirList");

	UUIScript_GetDirList_Params params;
	params.strDir = strDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DirList != nullptr)
		*DirList = params.DirList;
}


// Function NWindow.UIScript.GetFileList
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// TArray<struct FString>         FileList                       (Parm, OutParm, NeedCtorLink)
// struct FString                 strDir                         (Parm, NeedCtorLink)
// struct FString                 strExtention                   (Parm, NeedCtorLink)

void UUIScript::STATIC_GetFileList(const struct FString& strDir, const struct FString& strExtention, TArray<struct FString>* FileList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetFileList");

	UUIScript_GetFileList_Params params;
	params.strDir = strDir;
	params.strExtention = strExtention;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileList != nullptr)
		*FileList = params.FileList;
}


// Function NWindow.UIScript.GetCharacterSelectionActor
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_CharIndex                    (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UUIScript::STATIC_GetCharacterSelectionActor(int a_CharIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCharacterSelectionActor");

	UUIScript_GetCharacterSelectionActor_Params params;
	params.a_CharIndex = a_CharIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPlayerPosition
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUIScript::STATIC_GetPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPlayerPosition");

	UUIScript_GetPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPlayerActor
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UUIScript::STATIC_GetPlayerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPlayerActor");

	UUIScript_GetPlayerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.SetChatMessage
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_Message                      (Parm, NeedCtorLink)
// bool                           IsAppend                       (OptionalParm, Parm)

void UUIScript::STATIC_SetChatMessage(const struct FString& a_Message, bool IsAppend)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetChatMessage");

	UUIScript_SetChatMessage_Params params;
	params.a_Message = a_Message;
	params.IsAppend = IsAppend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestHennaUnEquip
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iHennaID                       (Parm)

void UUIScript::STATIC_RequestHennaUnEquip(int iHennaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestHennaUnEquip");

	UUIScript_RequestHennaUnEquip_Params params;
	params.iHennaID = iHennaID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestHennaUnEquipList
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestHennaUnEquipList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestHennaUnEquipList");

	UUIScript_RequestHennaUnEquipList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestHennaUnEquipInfo
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iHennaID                       (Parm)

void UUIScript::STATIC_RequestHennaUnEquipInfo(int iHennaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestHennaUnEquipInfo");

	UUIScript_RequestHennaUnEquipInfo_Params params;
	params.iHennaID = iHennaID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestHennaEquip
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iHennaID                       (Parm)

void UUIScript::STATIC_RequestHennaEquip(int iHennaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestHennaEquip");

	UUIScript_RequestHennaEquip_Params params;
	params.iHennaID = iHennaID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestHennaItemList
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)

void UUIScript::STATIC_RequestHennaItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestHennaItemList");

	UUIScript_RequestHennaItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestHennaItemInfo
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            iHennaID                       (Parm)

void UUIScript::STATIC_RequestHennaItemInfo(int iHennaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestHennaItemInfo");

	UUIScript_RequestHennaItemInfo_Params params;
	params.iHennaID = iHennaID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetLootingMethodName
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Const)
// Parameters:
// int                            a_LootingMethodID              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetLootingMethodName(int a_LootingMethodID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetLootingMethodName");

	UUIScript_GetLootingMethodName_Params params;
	params.a_LootingMethodID = a_LootingMethodID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCurrentZoneID
// (Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetCurrentZoneID()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCurrentZoneID");

	UUIScript_GetCurrentZoneID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCurrentZoneName
// (Final, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetCurrentZoneName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCurrentZoneName");

	UUIScript_GetCurrentZoneName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetZoneNameWithZoneID
// (Defined, Operator, Static, Const)
// Parameters:
// int                            a_ZoneID                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetZoneNameWithZoneID(int a_ZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetZoneNameWithZoneID");

	UUIScript_GetZoneNameWithZoneID_Params params;
	params.a_ZoneID = a_ZoneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.OnModifyCurrentTickSliderCtrl
// (Final, Defined, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// int                            iCurrentTick                   (Parm)

void UUIScript::STATIC_OnModifyCurrentTickSliderCtrl(const struct FString& strID, int iCurrentTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnModifyCurrentTickSliderCtrl");

	UUIScript_OnModifyCurrentTickSliderCtrl_Params params;
	params.strID = strID;
	params.iCurrentTick = iCurrentTick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestOpenMinimap
// (Iterator, Operator, Static, Const)

void UUIScript::STATIC_RequestOpenMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestOpenMinimap");

	UUIScript_RequestOpenMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.StopSound
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Event)
// Parameters:
// struct FString                 a_SoundName                    (Parm, NeedCtorLink)

void UUIScript::StopSound(const struct FString& a_SoundName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.StopSound");

	UUIScript_StopSound_Params params;
	params.a_SoundName = a_SoundName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.PlaySound
// (Defined, Iterator, Latent, Singular, Net, Exec, Event)
// Parameters:
// struct FString                 strSoundName                   (Parm, NeedCtorLink)

void UUIScript::PlaySound(const struct FString& strSoundName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.PlaySound");

	UUIScript_PlaySound_Params params;
	params.strSoundName = strSoundName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ProcessCommandInterPartyChatMessage
// (Final, Iterator, Operator, Static, Const)
// Parameters:
// struct FString                 a_strChatMsg                   (Parm, NeedCtorLink)

void UUIScript::STATIC_ProcessCommandInterPartyChatMessage(const struct FString& a_strChatMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ProcessCommandInterPartyChatMessage");

	UUIScript_ProcessCommandInterPartyChatMessage_Params params;
	params.a_strChatMsg = a_strChatMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ProcessCommandChatMessage
// (Defined, Iterator, Operator, Static, Const)
// Parameters:
// struct FString                 a_strChatMsg                   (Parm, NeedCtorLink)

void UUIScript::STATIC_ProcessCommandChatMessage(const struct FString& a_strChatMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ProcessCommandChatMessage");

	UUIScript_ProcessCommandChatMessage_Params params;
	params.a_strChatMsg = a_strChatMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ProcessPartyMatchChatMessage
// (Final, Defined, Iterator, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EChatType>         ChatType                       (Parm)
// struct FString                 a_strChatMsg                   (Parm, NeedCtorLink)

void UUIScript::STATIC_ProcessPartyMatchChatMessage(TEnumAsByte<EChatType> ChatType, const struct FString& a_strChatMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ProcessPartyMatchChatMessage");

	UUIScript_ProcessPartyMatchChatMessage_Params params;
	params.ChatType = ChatType;
	params.a_strChatMsg = a_strChatMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ProcessPetitionChatMessage
// (Latent, Operator, Static, Const)
// Parameters:
// struct FString                 a_strChatMsg                   (Parm, NeedCtorLink)

void UUIScript::STATIC_ProcessPetitionChatMessage(const struct FString& a_strChatMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ProcessPetitionChatMessage");

	UUIScript_ProcessPetitionChatMessage_Params params;
	params.a_strChatMsg = a_strChatMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ProcessChatMessage
// (Final, Latent, Operator, Static, Const)
// Parameters:
// struct FString                 chatMessage                    (Parm, NeedCtorLink)
// int                            type                           (Parm)
// bool                           bStopMacro                     (OptionalParm, Parm)

void UUIScript::STATIC_ProcessChatMessage(const struct FString& chatMessage, int type, bool bStopMacro)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ProcessChatMessage");

	UUIScript_ProcessChatMessage_Params params;
	params.chatMessage = chatMessage;
	params.type = type;
	params.bStopMacro = bStopMacro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnFlashCtrlMsg
// (Defined, Latent, Operator, Static, Const)
// Parameters:
// class UFlashCtrlHandle*        a_FlashCtrlHandle              (Parm)
// struct FString                 a_Param                        (Parm, NeedCtorLink)

void UUIScript::STATIC_OnFlashCtrlMsg(class UFlashCtrlHandle* a_FlashCtrlHandle, const struct FString& a_Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnFlashCtrlMsg");

	UUIScript_OnFlashCtrlMsg_Params params;
	params.a_FlashCtrlHandle = a_FlashCtrlHandle;
	params.a_Param = a_Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnHtmlMsgHideWindow
// (Final, Defined, Latent, Operator, Static, Const)
// Parameters:
// class UHtmlHandle*             a_HtmlHandle                   (Parm)

void UUIScript::STATIC_OnHtmlMsgHideWindow(class UHtmlHandle* a_HtmlHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnHtmlMsgHideWindow");

	UUIScript_OnHtmlMsgHideWindow_Params params;
	params.a_HtmlHandle = a_HtmlHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnPropertyControllerResize
// (Iterator, Latent, Operator, Static, Const)
// Parameters:
// int                            a_Height                       (Parm)

void UUIScript::STATIC_OnPropertyControllerResize(int a_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnPropertyControllerResize");

	UUIScript_OnPropertyControllerResize_Params params;
	params.a_Height = a_Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnTextureAnimEnd
// (Final, Iterator, Latent, Operator, Static, Const)
// Parameters:
// class UAnimTextureHandle*      a_AnimTextureHandle            (Parm)

void UUIScript::STATIC_OnTextureAnimEnd(class UAnimTextureHandle* a_AnimTextureHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnTextureAnimEnd");

	UUIScript_OnTextureAnimEnd_Params params;
	params.a_AnimTextureHandle = a_AnimTextureHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnComboBoxItemSelected
// (Defined, Iterator, Latent, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIScript::STATIC_OnComboBoxItemSelected(const struct FString& strID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnComboBoxItemSelected");

	UUIScript_OnComboBoxItemSelected_Params params;
	params.strID = strID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnProgressTimeUp
// (Final, Defined, Iterator, Latent, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnProgressTimeUp(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnProgressTimeUp");

	UUIScript_OnProgressTimeUp_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnSelectItemWithHandle
// (PreOperator, Operator, Static, Const)
// Parameters:
// class UItemWindowHandle*       a_hItemWindow                  (Parm)
// int                            a_Index                        (Parm)

void UUIScript::STATIC_OnSelectItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnSelectItemWithHandle");

	UUIScript_OnSelectItemWithHandle_Params params;
	params.a_hItemWindow = a_hItemWindow;
	params.a_Index = a_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDBClickItemWithHandle
// (Final, PreOperator, Operator, Static, Const)
// Parameters:
// class UItemWindowHandle*       a_hItemWindow                  (Parm)
// int                            a_Index                        (Parm)

void UUIScript::STATIC_OnDBClickItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDBClickItemWithHandle");

	UUIScript_OnDBClickItemWithHandle_Params params;
	params.a_hItemWindow = a_hItemWindow;
	params.a_Index = a_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRClickItemWithHandle
// (Defined, PreOperator, Operator, Static, Const)
// Parameters:
// class UItemWindowHandle*       a_hItemWindow                  (Parm)
// int                            a_Index                        (Parm)

void UUIScript::STATIC_OnRClickItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRClickItemWithHandle");

	UUIScript_OnRClickItemWithHandle_Params params;
	params.a_hItemWindow = a_hItemWindow;
	params.a_Index = a_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRDBClickItem
// (Final, Defined, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIScript::STATIC_OnRDBClickItem(const struct FString& strID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRDBClickItem");

	UUIScript_OnRDBClickItem_Params params;
	params.strID = strID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRClickItem
// (Iterator, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIScript::STATIC_OnRClickItem(const struct FString& strID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRClickItem");

	UUIScript_OnRClickItem_Params params;
	params.strID = strID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDBClickItem
// (Final, Iterator, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIScript::STATIC_OnDBClickItem(const struct FString& strID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDBClickItem");

	UUIScript_OnDBClickItem_Params params;
	params.strID = strID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnClickItem
// (Defined, Iterator, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIScript::STATIC_OnClickItem(const struct FString& strID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnClickItem");

	UUIScript_OnClickItem_Params params;
	params.strID = strID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnClickCheckBox
// (Final, Defined, Iterator, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnClickCheckBox(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnClickCheckBox");

	UUIScript_OnClickCheckBox_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDBClickListBoxItem
// (Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnDBClickListBoxItem(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDBClickListBoxItem");

	UUIScript_OnDBClickListBoxItem_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDBClickListCtrlRecord
// (Final, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnDBClickListCtrlRecord(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDBClickListCtrlRecord");

	UUIScript_OnDBClickListCtrlRecord_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnClickListCtrlRecord
// (Defined, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnClickListCtrlRecord(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnClickListCtrlRecord");

	UUIScript_OnClickListCtrlRecord_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnChatMarkedEditBox
// (Final, Defined, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnChatMarkedEditBox(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnChatMarkedEditBox");

	UUIScript_OnChatMarkedEditBox_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnChangeEditBox
// (Iterator, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnChangeEditBox(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnChangeEditBox");

	UUIScript_OnChangeEditBox_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnCompleteEditBox
// (Final, Iterator, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnCompleteEditBox(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnCompleteEditBox");

	UUIScript_OnCompleteEditBox_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnTabMerge
// (Defined, Iterator, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnTabMerge(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnTabMerge");

	UUIScript_OnTabMerge_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnTabSplit
// (Final, Defined, Iterator, Latent, PreOperator, Operator, Static, Const)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnTabSplit(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnTabSplit");

	UUIScript_OnTabSplit_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnButtonTimer
// (Singular, Operator, Static, Const)
// Parameters:
// bool                           bExpired                       (Parm)

void UUIScript::STATIC_OnButtonTimer(bool bExpired)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnButtonTimer");

	UUIScript_OnButtonTimer_Params params;
	params.bExpired = bExpired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnClickButtonWithHandle
// (Final, Singular, Operator, Static, Const)
// Parameters:
// class UButtonHandle*           a_ButtonHandle                 (Parm)

void UUIScript::STATIC_OnClickButtonWithHandle(class UButtonHandle* a_ButtonHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnClickButtonWithHandle");

	UUIScript_OnClickButtonWithHandle_Params params;
	params.a_ButtonHandle = a_ButtonHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnClickButton
// (Defined, Singular, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnClickButton(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnClickButton");

	UUIScript_OnClickButton_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDropWnd
// (Final, Defined, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           hTarget                        (Parm)
// class UWindowHandle*           hDropWnd                       (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnDropWnd(class UWindowHandle* hTarget, class UWindowHandle* hDropWnd, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDropWnd");

	UUIScript_OnDropWnd_Params params;
	params.hTarget = hTarget;
	params.hDropWnd = hDropWnd;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDropItemWithHandle
// (Iterator, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           hTarget                        (Parm)
// struct FItemInfo               infItem                        (Parm, NeedCtorLink)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnDropItemWithHandle(class UWindowHandle* hTarget, const struct FItemInfo& infItem, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDropItemWithHandle");

	UUIScript_OnDropItemWithHandle_Params params;
	params.hTarget = hTarget;
	params.infItem = infItem;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDropItemSource
// (Final, Iterator, Singular, Operator, Static, Const)
// Parameters:
// struct FString                 strTarget                      (Parm, NeedCtorLink)
// struct FItemInfo               infItem                        (Parm, NeedCtorLink)

void UUIScript::STATIC_OnDropItemSource(const struct FString& strTarget, const struct FItemInfo& infItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDropItemSource");

	UUIScript_OnDropItemSource_Params params;
	params.strTarget = strTarget;
	params.infItem = infItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDragItemEnd
// (Defined, Iterator, Singular, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)

void UUIScript::STATIC_OnDragItemEnd(const struct FString& strID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDragItemEnd");

	UUIScript_OnDragItemEnd_Params params;
	params.strID = strID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDragItemStart
// (Final, Defined, Iterator, Singular, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// struct FItemInfo               infItem                        (Parm, NeedCtorLink)

void UUIScript::STATIC_OnDragItemStart(const struct FString& strID, const struct FItemInfo& infItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDragItemStart");

	UUIScript_OnDragItemStart_Params params;
	params.strID = strID;
	params.infItem = infItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDropItem
// (Latent, Singular, Operator, Static, Const)
// Parameters:
// struct FString                 strID                          (Parm, NeedCtorLink)
// struct FItemInfo               infItem                        (Parm, NeedCtorLink)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDropItem");

	UUIScript_OnDropItem_Params params;
	params.strID = strID;
	params.infItem = infItem;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnMouseOut
// (Final, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)

void UUIScript::STATIC_OnMouseOut(class UWindowHandle* a_WindowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnMouseOut");

	UUIScript_OnMouseOut_Params params;
	params.a_WindowHandle = a_WindowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnMouseOver
// (Defined, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)

void UUIScript::STATIC_OnMouseOver(class UWindowHandle* a_WindowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnMouseOver");

	UUIScript_OnMouseOver_Params params;
	params.a_WindowHandle = a_WindowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnMButtonUp
// (Final, Defined, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnMButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnMButtonUp");

	UUIScript_OnMButtonUp_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnMButtonDown
// (Iterator, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnMButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnMButtonDown");

	UUIScript_OnMButtonDown_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRButtonDblClick
// (Final, Iterator, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnRButtonDblClick(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRButtonDblClick");

	UUIScript_OnRButtonDblClick_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRButtonUp
// (Defined, Iterator, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnRButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRButtonUp");

	UUIScript_OnRButtonUp_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRButtonDown
// (Final, Defined, Iterator, Latent, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnRButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRButtonDown");

	UUIScript_OnRButtonDown_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnLButtonDblClick
// (PreOperator, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnLButtonDblClick(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnLButtonDblClick");

	UUIScript_OnLButtonDblClick_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnLButtonUp
// (Final, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnLButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnLButtonUp");

	UUIScript_OnLButtonUp_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnLButtonDown
// (Defined, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UUIScript::STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnLButtonDown");

	UUIScript_OnLButtonDown_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnKeyUp
// (Final, Defined, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// TEnumAsByte<EInputKey>         Key                            (Parm)

void UUIScript::STATIC_OnKeyUp(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnKeyUp");

	UUIScript_OnKeyUp_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnKeyDown
// (Iterator, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// class UWindowHandle*           a_WindowHandle                 (Parm)
// TEnumAsByte<EInputKey>         Key                            (Parm)

void UUIScript::STATIC_OnKeyDown(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnKeyDown");

	UUIScript_OnKeyDown_Params params;
	params.a_WindowHandle = a_WindowHandle;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnRegisterEvent
// (Final, Iterator, PreOperator, Singular, Operator, Static, Const)

void UUIScript::STATIC_OnRegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnRegisterEvent");

	UUIScript_OnRegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnDefaultPosition
// (Defined, Iterator, PreOperator, Singular, Operator, Static, Const)

void UUIScript::STATIC_OnDefaultPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnDefaultPosition");

	UUIScript_OnDefaultPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnSendPacketWhenHiding
// (Final, Defined, Iterator, PreOperator, Singular, Operator, Static, Const)

void UUIScript::STATIC_OnSendPacketWhenHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnSendPacketWhenHiding");

	UUIScript_OnSendPacketWhenHiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnExitState
// (Latent, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// struct FName                   a_NextStateName                (Parm)

void UUIScript::STATIC_OnExitState(const struct FName& a_NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnExitState");

	UUIScript_OnExitState_Params params;
	params.a_NextStateName = a_NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnEnterState
// (Final, Latent, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// struct FName                   a_PreStateName                 (Parm)

void UUIScript::STATIC_OnEnterState(const struct FName& a_PreStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnEnterState");

	UUIScript_OnEnterState_Params params;
	params.a_PreStateName = a_PreStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnMinimize
// (Defined, Latent, PreOperator, Singular, Operator, Static, Const)

void UUIScript::STATIC_OnMinimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnMinimize");

	UUIScript_OnMinimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnTimer
// (Final, Defined, Latent, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// int                            TimerID                        (Parm)

void UUIScript::STATIC_OnTimer(int TimerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnTimer");

	UUIScript_OnTimer_Params params;
	params.TimerID = TimerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnEventWithParamMap
// (Iterator, Latent, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// int                            a_EventID                      (Parm)
// struct FParamMap               a_ParamMap                     (Parm)

void UUIScript::STATIC_OnEventWithParamMap(int a_EventID, const struct FParamMap& a_ParamMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnEventWithParamMap");

	UUIScript_OnEventWithParamMap_Params params;
	params.a_EventID = a_EventID;
	params.a_ParamMap = a_ParamMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnEvent
// (Final, Iterator, Latent, PreOperator, Singular, Operator, Static, Const)
// Parameters:
// int                            a_EventID                      (Parm)
// struct FString                 a_Param                        (Parm, NeedCtorLink)

void UUIScript::STATIC_OnEvent(int a_EventID, const struct FString& a_Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnEvent");

	UUIScript_OnEvent_Params params;
	params.a_EventID = a_EventID;
	params.a_Param = a_Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnHide
// (Defined, Iterator, Latent, PreOperator, Singular, Operator, Static, Const)

void UUIScript::STATIC_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnHide");

	UUIScript_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnShow
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Operator, Static, Const)

void UUIScript::STATIC_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnShow");

	UUIScript_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnTick
// (Net, Operator, Static, Const)

void UUIScript::STATIC_OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnTick");

	UUIScript_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.OnLoad
// (Final, Net, Operator, Static, Const)

void UUIScript::STATIC_OnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.OnLoad");

	UUIScript_OnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetItemTextLink
// (Defined, Net, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_ID                           (Parm)
// struct FString                 a_ItemName                     (Parm, NeedCtorLink)

void UUIScript::STATIC_SetItemTextLink(const struct FItemID& a_ID, const struct FString& a_ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetItemTextLink");

	UUIScript_SetItemTextLink_Params params;
	params.a_ID = a_ID;
	params.a_ItemName = a_ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ReturnTooltipInfo
// (Final, Defined, Net, Operator, Static, Const)
// Parameters:
// struct FCustomTooltip          Info                           (Parm, NeedCtorLink)

void UUIScript::STATIC_ReturnTooltipInfo(const struct FCustomTooltip& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ReturnTooltipInfo");

	UUIScript_ReturnTooltipInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetOggVoiceVolume
// (Iterator, Net, Operator, Static, Const)
// Parameters:
// float                          a_fVolume                      (Parm)

void UUIScript::STATIC_SetOggVoiceVolume(float a_fVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetOggVoiceVolume");

	UUIScript_SetOggVoiceVolume_Params params;
	params.a_fVolume = a_fVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetWavVoiceVolume
// (Final, Iterator, Net, Operator, Static, Const)
// Parameters:
// float                          a_fVolume                      (Parm)

void UUIScript::STATIC_SetWavVoiceVolume(float a_fVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetWavVoiceVolume");

	UUIScript_SetWavVoiceVolume_Params params;
	params.a_fVolume = a_fVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetMusicVolume
// (Defined, Iterator, Net, Operator, Static, Const)
// Parameters:
// float                          a_fVolume                      (Parm)

void UUIScript::STATIC_SetMusicVolume(float a_fVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetMusicVolume");

	UUIScript_SetMusicVolume_Params params;
	params.a_fVolume = a_fVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetSoundVolume
// (Final, Defined, Iterator, Net, Operator, Static, Const)
// Parameters:
// float                          a_fVolume                      (Parm)

void UUIScript::STATIC_SetSoundVolume(float a_fVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetSoundVolume");

	UUIScript_SetSoundVolume_Params params;
	params.a_fVolume = a_fVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetConstantFloat
// (Latent, Net, Operator, Static, Const)
// Parameters:
// int                            a_nID                          (Parm)
// float                          a_fValue                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetConstantFloat(int a_nID, float* a_fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetConstantFloat");

	UUIScript_GetConstantFloat_Params params;
	params.a_nID = a_nID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_fValue != nullptr)
		*a_fValue = params.a_fValue;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetConstantBool
// (Final, Latent, Net, Operator, Static, Const)
// Parameters:
// int                            a_nID                          (Parm)
// int                            a_bValue                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetConstantBool(int a_nID, int* a_bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetConstantBool");

	UUIScript_GetConstantBool_Params params;
	params.a_nID = a_nID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_bValue != nullptr)
		*a_bValue = params.a_bValue;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetConstantString
// (Defined, Latent, Net, Operator, Static, Const)
// Parameters:
// int                            a_nID                          (Parm)
// struct FString                 a_strValue                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetConstantString(int a_nID, struct FString* a_strValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetConstantString");

	UUIScript_GetConstantString_Params params;
	params.a_nID = a_nID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_strValue != nullptr)
		*a_strValue = params.a_strValue;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetConstantInt
// (Final, Defined, Latent, Net, Operator, Static, Const)
// Parameters:
// int                            a_nID                          (Parm)
// int                            a_nValue                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetConstantInt(int a_nID, int* a_nValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetConstantInt");

	UUIScript_GetConstantInt_Params params;
	params.a_nID = a_nID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_nValue != nullptr)
		*a_nValue = params.a_nValue;

	return params.ReturnValue;
}


// Function NWindow.UIScript.SetINIString
// (Iterator, Latent, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)
// struct FString                 file                           (Parm, NeedCtorLink)

void UUIScript::STATIC_SetINIString(const struct FString& section, const struct FString& Key, const struct FString& Value, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetINIString");

	UUIScript_SetINIString_Params params;
	params.section = section;
	params.Key = Key;
	params.Value = Value;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetINIFloat
// (Final, Iterator, Latent, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm)
// struct FString                 file                           (Parm, NeedCtorLink)

void UUIScript::STATIC_SetINIFloat(const struct FString& section, const struct FString& Key, float Value, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetINIFloat");

	UUIScript_SetINIFloat_Params params;
	params.section = section;
	params.Key = Key;
	params.Value = Value;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetINIInt
// (Defined, Iterator, Latent, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm)
// struct FString                 file                           (Parm, NeedCtorLink)

void UUIScript::STATIC_SetINIInt(const struct FString& section, const struct FString& Key, int Value, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetINIInt");

	UUIScript_SetINIInt_Params params;
	params.section = section;
	params.Key = Key;
	params.Value = Value;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetINIBool
// (Final, Defined, Iterator, Latent, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// bool                           Value                          (Parm)
// struct FString                 file                           (Parm, NeedCtorLink)

void UUIScript::STATIC_SetINIBool(const struct FString& section, const struct FString& Key, bool Value, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetINIBool");

	UUIScript_SetINIBool_Params params;
	params.section = section;
	params.Key = Key;
	params.Value = Value;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetINIString
// (PreOperator, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, OutParm, NeedCtorLink)
// struct FString                 file                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetINIString(const struct FString& section, const struct FString& Key, const struct FString& file, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetINIString");

	UUIScript_GetINIString_Params params;
	params.section = section;
	params.Key = Key;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetINIFloat
// (Final, PreOperator, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm, OutParm)
// struct FString                 file                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetINIFloat(const struct FString& section, const struct FString& Key, const struct FString& file, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetINIFloat");

	UUIScript_GetINIFloat_Params params;
	params.section = section;
	params.Key = Key;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetINIInt
// (Defined, PreOperator, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm, OutParm)
// struct FString                 file                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetINIInt(const struct FString& section, const struct FString& Key, const struct FString& file, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetINIInt");

	UUIScript_GetINIInt_Params params;
	params.section = section;
	params.Key = Key;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetINIBool
// (Final, Defined, PreOperator, Net, Operator, Static, Const)
// Parameters:
// struct FString                 section                        (Parm, NeedCtorLink)
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm, OutParm)
// struct FString                 file                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetINIBool(const struct FString& section, const struct FString& Key, const struct FString& file, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetINIBool");

	UUIScript_GetINIBool_Params params;
	params.section = section;
	params.Key = Key;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RefreshINI
// (Iterator, PreOperator, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_INIFileName                  (Parm, NeedCtorLink)

void UUIScript::STATIC_RefreshINI(const struct FString& a_INIFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RefreshINI");

	UUIScript_RefreshINI_Params params;
	params.a_INIFileName = a_INIFileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestSaveInventoryOrder
// (Final, Iterator, PreOperator, Net, Operator, Static, Const)
// Parameters:
// TArray<struct FItemID>         a_IDList                       (Parm, NeedCtorLink)
// TArray<int>                    a_OrderList                    (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestSaveInventoryOrder(TArray<struct FItemID> a_IDList, TArray<int> a_OrderList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestSaveInventoryOrder");

	UUIScript_RequestSaveInventoryOrder_Params params;
	params.a_IDList = a_IDList;
	params.a_OrderList = a_OrderList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetRaceTicketString
// (Defined, Iterator, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            Blessed                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetRaceTicketString(int Blessed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetRaceTicketString");

	UUIScript_GetRaceTicketString_Params params;
	params.Blessed = Blessed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetLottoString
// (Final, Defined, Iterator, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            Enchanted                      (Parm)
// int                            Damaged                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetLottoString(int Enchanted, int Damaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetLottoString");

	UUIScript_GetLottoString_Params params;
	params.Enchanted = Enchanted;
	params.Damaged = Damaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsMagicalArmor
// (Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsMagicalArmor(const struct FItemID& cID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsMagicalArmor");

	UUIScript_IsMagicalArmor_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetMagicalDefense
// (Final, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            CrystalType                    (Parm)
// int                            Enchanted                      (Parm)
// int                            MagicalDefense                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetMagicalDefense(int CrystalType, int Enchanted, int MagicalDefense)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetMagicalDefense");

	UUIScript_GetMagicalDefense_Params params;
	params.CrystalType = CrystalType;
	params.Enchanted = Enchanted;
	params.MagicalDefense = MagicalDefense;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPhysicalDefense
// (Defined, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            CrystalType                    (Parm)
// int                            Enchanted                      (Parm)
// int                            PhysicalDefense                (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetPhysicalDefense(int CrystalType, int Enchanted, int PhysicalDefense)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPhysicalDefense");

	UUIScript_GetPhysicalDefense_Params params;
	params.CrystalType = CrystalType;
	params.Enchanted = Enchanted;
	params.PhysicalDefense = PhysicalDefense;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetShieldDefense
// (Final, Defined, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            CrystalType                    (Parm)
// int                            Enchanted                      (Parm)
// int                            ShieldDefense                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetShieldDefense(int CrystalType, int Enchanted, int ShieldDefense)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetShieldDefense");

	UUIScript_GetShieldDefense_Params params;
	params.CrystalType = CrystalType;
	params.Enchanted = Enchanted;
	params.ShieldDefense = ShieldDefense;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetAttackSpeedString
// (Iterator, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            AttackSpeed                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetAttackSpeedString(int AttackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetAttackSpeedString");

	UUIScript_GetAttackSpeedString_Params params;
	params.AttackSpeed = AttackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetMagicalDamage
// (Final, Iterator, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            WeaponType                     (Parm)
// int                            SlotBitType                    (Parm)
// int                            CrystalType                    (Parm)
// int                            Enchanted                      (Parm)
// int                            MagicalDamage                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetMagicalDamage(int WeaponType, int SlotBitType, int CrystalType, int Enchanted, int MagicalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetMagicalDamage");

	UUIScript_GetMagicalDamage_Params params;
	params.WeaponType = WeaponType;
	params.SlotBitType = SlotBitType;
	params.CrystalType = CrystalType;
	params.Enchanted = Enchanted;
	params.MagicalDamage = MagicalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPhysicalDamage
// (Defined, Iterator, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            WeaponType                     (Parm)
// int                            SlotBitType                    (Parm)
// int                            CrystalType                    (Parm)
// int                            Enchanted                      (Parm)
// int                            PhysicalDamage                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetPhysicalDamage(int WeaponType, int SlotBitType, int CrystalType, int Enchanted, int PhysicalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPhysicalDamage");

	UUIScript_GetPhysicalDamage_Params params;
	params.WeaponType = WeaponType;
	params.SlotBitType = SlotBitType;
	params.CrystalType = CrystalType;
	params.Enchanted = Enchanted;
	params.PhysicalDamage = PhysicalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetWeaponTypeString
// (Final, Defined, Iterator, Latent, PreOperator, Net, Operator, Static, Const)
// Parameters:
// int                            WeaponType                     (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetWeaponTypeString(int WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetWeaponTypeString");

	UUIScript_GetWeaponTypeString_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetSlotTypeString
// (Singular, Net, Operator, Static, Const)
// Parameters:
// int                            ItemType                       (Parm)
// int                            SlotBitType                    (Parm)
// int                            ArmorType                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetSlotTypeString(int ItemType, int SlotBitType, int ArmorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSlotTypeString");

	UUIScript_GetSlotTypeString_Params params;
	params.ItemType = ItemType;
	params.SlotBitType = SlotBitType;
	params.ArmorType = ArmorType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetInventoryItemCount
// (Final, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// struct FINT64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FINT64 UUIScript::STATIC_GetInventoryItemCount(const struct FItemID& cID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetInventoryItemCount");

	UUIScript_GetInventoryItemCount_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetOptionString
// (Defined, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetOptionString(const struct FString& a_strSection, const struct FString& a_strName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetOptionString");

	UUIScript_GetOptionString_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetOptionFloat
// (Final, Defined, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIScript::STATIC_GetOptionFloat(const struct FString& a_strSection, const struct FString& a_strName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetOptionFloat");

	UUIScript_GetOptionFloat_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetOptionInt
// (Iterator, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetOptionInt(const struct FString& a_strSection, const struct FString& a_strName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetOptionInt");

	UUIScript_GetOptionInt_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetOptionBool
// (Final, Iterator, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetOptionBool(const struct FString& a_strSection, const struct FString& a_strName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetOptionBool");

	UUIScript_GetOptionBool_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.SetOptionString
// (Defined, Iterator, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// struct FString                 a_strValue                     (Parm, NeedCtorLink)

void UUIScript::STATIC_SetOptionString(const struct FString& a_strSection, const struct FString& a_strName, const struct FString& a_strValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetOptionString");

	UUIScript_SetOptionString_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;
	params.a_strValue = a_strValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetOptionFloat
// (Final, PreOperator, Singular, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// float                          a_fValue                       (Parm)

void UUIScript::STATIC_SetOptionFloat(const struct FString& a_strSection, const struct FString& a_strName, float a_fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetOptionFloat");

	UUIScript_SetOptionFloat_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;
	params.a_fValue = a_fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetOptionInt
// (Final, Defined, Iterator, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// int                            a_nValue                       (Parm)

void UUIScript::STATIC_SetOptionInt(const struct FString& a_strSection, const struct FString& a_strName, int a_nValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetOptionInt");

	UUIScript_SetOptionInt_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;
	params.a_nValue = a_nValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetOptionBool
// (Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 a_strSection                   (Parm, NeedCtorLink)
// struct FString                 a_strName                      (Parm, NeedCtorLink)
// bool                           a_bValue                       (Parm)

void UUIScript::STATIC_SetOptionBool(const struct FString& a_strSection, const struct FString& a_strName, bool a_bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetOptionBool");

	UUIScript_SetOptionBool_Params params;
	params.a_strSection = a_strSection;
	params.a_strName = a_strName;
	params.a_bValue = a_bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.StopMacro
// (Final, Latent, Singular, Net, Operator, Static, Const)

void UUIScript::STATIC_StopMacro()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.StopMacro");

	UUIScript_StopMacro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.IsStackableItem
// (Defined, Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            ConsumeType                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsStackableItem(int ConsumeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsStackableItem");

	UUIScript_IsStackableItem_Params params;
	params.ConsumeType = ConsumeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.UseSkill
// (Final, Defined, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)

void UUIScript::STATIC_UseSkill(const struct FItemID& cID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.UseSkill");

	UUIScript_UseSkill_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.DoAction
// (Final, Defined, Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)

void UUIScript::STATIC_DoAction(const struct FItemID& cID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.DoAction");

	UUIScript_DoAction_Params params;
	params.cID = cID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ExecuteCommandFromAction
// (Iterator, Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// struct FString                 strCmd                         (Parm, NeedCtorLink)

void UUIScript::STATIC_ExecuteCommandFromAction(const struct FString& strCmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ExecuteCommandFromAction");

	UUIScript_ExecuteCommandFromAction_Params params;
	params.strCmd = strCmd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ExecuteCommand
// (Defined, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_strCmd                       (Parm, NeedCtorLink)

void UUIScript::STATIC_ExecuteCommand(const struct FString& a_strCmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ExecuteCommand");

	UUIScript_ExecuteCommand_Params params;
	params.a_strCmd = a_strCmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetFixedDefaultCamera
// (Final, Iterator, Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bFixed                       (Parm)

void UUIScript::STATIC_SetFixedDefaultCamera(bool a_bFixed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetFixedDefaultCamera");

	UUIScript_SetFixedDefaultCamera_Params params;
	params.a_bFixed = a_bFixed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetIgnorePartyInviting
// (Defined, Iterator, Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bIgnore                      (Parm)

void UUIScript::STATIC_SetIgnorePartyInviting(bool a_bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetIgnorePartyInviting");

	UUIScript_SetIgnorePartyInviting_Params params;
	params.a_bIgnore = a_bIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetRenderCharacterCount
// (Final, Defined, Iterator, Latent, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_NewLimitAcotor               (Parm)

void UUIScript::STATIC_SetRenderCharacterCount(int a_NewLimitAcotor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetRenderCharacterCount");

	UUIScript_SetRenderCharacterCount_Params params;
	params.a_NewLimitAcotor = a_NewLimitAcotor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetShaderWaterEffect
// (PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bWater                       (Parm)

void UUIScript::STATIC_SetShaderWaterEffect(bool a_bWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetShaderWaterEffect");

	UUIScript_SetShaderWaterEffect_Params params;
	params.a_bWater = a_bWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetDepthBufferShadow
// (Final, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bShadow                      (Parm)

void UUIScript::STATIC_SetDepthBufferShadow(bool a_bShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetDepthBufferShadow");

	UUIScript_SetDepthBufferShadow_Params params;
	params.a_bShadow = a_bShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetDOF
// (Defined, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bDof                         (Parm)

void UUIScript::STATIC_SetDOF(bool a_bDof)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetDOF");

	UUIScript_SetDOF_Params params;
	params.a_bDof = a_bDof;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetL2Shader
// (Final, Defined, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bShader                      (Parm)

void UUIScript::STATIC_SetL2Shader(bool a_bShader)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetL2Shader");

	UUIScript_SetL2Shader_Params params;
	params.a_bShader = a_bShader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetWeatherEffect
// (Iterator, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nWeatherEffect               (Parm)

void UUIScript::STATIC_SetWeatherEffect(int a_nWeatherEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetWeatherEffect");

	UUIScript_SetWeatherEffect_Params params;
	params.a_nWeatherEffect = a_nWeatherEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetHDR
// (Final, Iterator, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nHDR                         (Parm)

void UUIScript::STATIC_SetHDR(int a_nHDR)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetHDR");

	UUIScript_SetHDR_Params params;
	params.a_nHDR = a_nHDR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetReflectionEffect
// (Defined, Iterator, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nReflectionEffect            (Parm)

void UUIScript::STATIC_SetReflectionEffect(int a_nReflectionEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetReflectionEffect");

	UUIScript_SetReflectionEffect_Params params;
	params.a_nReflectionEffect = a_nReflectionEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetPawnClippingRange
// (Final, Defined, Iterator, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nPawnClippingRange           (Parm)

void UUIScript::STATIC_SetPawnClippingRange(int a_nPawnClippingRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetPawnClippingRange");

	UUIScript_SetPawnClippingRange_Params params;
	params.a_nPawnClippingRange = a_nPawnClippingRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetTerrainClippingRange
// (Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nTerrainClippingRange        (Parm)

void UUIScript::STATIC_SetTerrainClippingRange(int a_nTerrainClippingRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetTerrainClippingRange");

	UUIScript_SetTerrainClippingRange_Params params;
	params.a_nTerrainClippingRange = a_nTerrainClippingRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetBackgroundEffect
// (Final, Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bBackgroundEffect            (Parm)

void UUIScript::STATIC_SetBackgroundEffect(bool a_bBackgroundEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetBackgroundEffect");

	UUIScript_SetBackgroundEffect_Params params;
	params.a_bBackgroundEffect = a_bBackgroundEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetShadow
// (Defined, Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bShadow                      (Parm)

void UUIScript::STATIC_SetShadow(bool a_bShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetShadow");

	UUIScript_SetShadow_Params params;
	params.a_bShadow = a_bShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetMotionDetail
// (Final, Defined, Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nMotionDetail                (Parm)

void UUIScript::STATIC_SetMotionDetail(int a_nMotionDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetMotionDetail");

	UUIScript_SetMotionDetail_Params params;
	params.a_nMotionDetail = a_nMotionDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetModelingDetail
// (Iterator, Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nModelingDetail              (Parm)

void UUIScript::STATIC_SetModelingDetail(int a_nModelingDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetModelingDetail");

	UUIScript_SetModelingDetail_Params params;
	params.a_nModelingDetail = a_nModelingDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetTextureDetail
// (Final, Iterator, Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// int                            a_nTextureDetail               (Parm)

void UUIScript::STATIC_SetTextureDetail(int a_nTextureDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetTextureDetail");

	UUIScript_SetTextureDetail_Params params;
	params.a_nTextureDetail = a_nTextureDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetKeyCrypt
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Operator, Static, Const)
// Parameters:
// bool                           a_bOnOff                       (Parm)

void UUIScript::STATIC_SetKeyCrypt(bool a_bOnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetKeyCrypt");

	UUIScript_SetKeyCrypt_Params params;
	params.a_bOnOff = a_bOnOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.SetDefaultPosition
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Operator, Static, Const)

void UUIScript::STATIC_SetDefaultPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetDefaultPosition");

	UUIScript_SetDefaultPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetShaderVersion
// (NetReliable, Operator, Static, Const)
// Parameters:
// int                            a_nPixelShaderVersion          (Parm, OutParm)
// int                            a_nVertexShaderVersion         (Parm, OutParm)

void UUIScript::STATIC_GetShaderVersion(int* a_nPixelShaderVersion, int* a_nVertexShaderVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetShaderVersion");

	UUIScript_GetShaderVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_nPixelShaderVersion != nullptr)
		*a_nPixelShaderVersion = params.a_nPixelShaderVersion;
	if (a_nVertexShaderVersion != nullptr)
		*a_nVertexShaderVersion = params.a_nVertexShaderVersion;
}


// Function NWindow.UIScript.GetResolutionIndex
// (Final, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetResolutionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetResolutionIndex");

	UUIScript_GetResolutionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetMultiSample
// (Defined, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetMultiSample()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetMultiSample");

	UUIScript_GetMultiSample_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.SetResolution
// (Final, Defined, NetReliable, Operator, Static, Const)
// Parameters:
// int                            a_nResolutionIndex             (Parm)
// int                            a_nRefreshRateIndex            (Parm)

void UUIScript::STATIC_SetResolution(int a_nResolutionIndex, int a_nRefreshRateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetResolution");

	UUIScript_SetResolution_Params params;
	params.a_nResolutionIndex = a_nResolutionIndex;
	params.a_nRefreshRateIndex = a_nRefreshRateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetRefreshRateList
// (Iterator, NetReliable, Operator, Static, Const)
// Parameters:
// TArray<int>                    a_RefreshRateList              (Parm, OutParm, NeedCtorLink)
// int                            a_nWidth                       (OptionalParm, Parm)
// int                            a_nHeight                      (OptionalParm, Parm)

void UUIScript::STATIC_GetRefreshRateList(int a_nWidth, int a_nHeight, TArray<int>* a_RefreshRateList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetRefreshRateList");

	UUIScript_GetRefreshRateList_Params params;
	params.a_nWidth = a_nWidth;
	params.a_nHeight = a_nHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_RefreshRateList != nullptr)
		*a_RefreshRateList = params.a_RefreshRateList;
}


// Function NWindow.UIScript.GetResolutionList
// (Final, Iterator, NetReliable, Operator, Static, Const)
// Parameters:
// TArray<struct FResolutionInfo> a_ResolutionList               (Parm, OutParm, NeedCtorLink)

void UUIScript::STATIC_GetResolutionList(TArray<struct FResolutionInfo>* a_ResolutionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetResolutionList");

	UUIScript_GetResolutionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_ResolutionList != nullptr)
		*a_ResolutionList = params.a_ResolutionList;
}


// Function NWindow.UIScript.GetLanguage
// (Defined, Iterator, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<ELanguageType>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELanguageType> UUIScript::STATIC_GetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetLanguage");

	UUIScript_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsEnableKeyCrypt
// (Final, Defined, Iterator, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsEnableKeyCrypt()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsEnableKeyCrypt");

	UUIScript_IsEnableKeyCrypt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsCheckKeyCrypt
// (Latent, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsCheckKeyCrypt()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsCheckKeyCrypt");

	UUIScript_IsCheckKeyCrypt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsUseKeyCrypt
// (Final, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsUseKeyCrypt()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsUseKeyCrypt");

	UUIScript_IsUseKeyCrypt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsEnableEngSelection
// (Defined, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsEnableEngSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsEnableEngSelection");

	UUIScript_IsEnableEngSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.CanUseHDR
// (Final, Defined, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_CanUseHDR()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CanUseHDR");

	UUIScript_CanUseHDR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.CanUseJoystick
// (Iterator, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_CanUseJoystick()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CanUseJoystick");

	UUIScript_CanUseJoystick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.CanUseAudio
// (Final, Iterator, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_CanUseAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CanUseAudio");

	UUIScript_CanUseAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetServerType
// (Defined, Iterator, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetServerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetServerType");

	UUIScript_GetServerType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetServerNo
// (Final, Defined, Iterator, Latent, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetServerNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetServerNo");

	UUIScript_GetServerNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetServerAgeLimit
// (PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EServerAgeLimit>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EServerAgeLimit> UUIScript::STATIC_GetServerAgeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetServerAgeLimit");

	UUIScript_GetServerAgeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.ExecQuit
// (Final, PreOperator, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_ExecQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ExecQuit");

	UUIScript_ExecQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ExecRestart
// (Defined, PreOperator, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_ExecRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ExecRestart");

	UUIScript_ExecRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.EndSystemMessageParam
// (Final, Defined, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// int                            MsgNum                         (Parm)
// bool                           bGetMsg                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_EndSystemMessageParam(int MsgNum, bool bGetMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.EndSystemMessageParam");

	UUIScript_EndSystemMessageParam_Params params;
	params.MsgNum = MsgNum;
	params.bGetMsg = bGetMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.AddSystemMessageParam
// (Iterator, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strParam                       (Parm, NeedCtorLink)

void UUIScript::STATIC_AddSystemMessageParam(const struct FString& strParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.AddSystemMessageParam");

	UUIScript_AddSystemMessageParam_Params params;
	params.strParam = strParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.AddSystemMessageString
// (Final, Iterator, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 Msg                            (Parm, NeedCtorLink)

void UUIScript::STATIC_AddSystemMessageString(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.AddSystemMessageString");

	UUIScript_AddSystemMessageString_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.AddSystemMessage
// (Defined, Iterator, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUIScript::STATIC_AddSystemMessage(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.AddSystemMessage");

	UUIScript_AddSystemMessage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetPrivateShopMessage
// (Final, Defined, Iterator, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 type                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetPrivateShopMessage(const struct FString& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPrivateShopMessage");

	UUIScript_GetPrivateShopMessage_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.SetPrivateShopMessage
// (Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 type                           (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UUIScript::STATIC_SetPrivateShopMessage(const struct FString& type, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SetPrivateShopMessage");

	UUIScript_SetPrivateShopMessage_Params params;
	params.type = type;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.IsSameChatPrefix
// (Final, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EChatType>         type                           (Parm)
// struct FString                 InputPrefix                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsSameChatPrefix(TEnumAsByte<EChatType> type, const struct FString& InputPrefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsSameChatPrefix");

	UUIScript_IsSameChatPrefix_Params params;
	params.type = type;
	params.InputPrefix = InputPrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetChatPrefix
// (Defined, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EChatType>         type                           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetChatPrefix(TEnumAsByte<EChatType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetChatPrefix");

	UUIScript_GetChatPrefix_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetMaxLevel
// (Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetMaxLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetMaxLevel");

	UUIScript_GetMaxLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCurrentResolution
// (Final, Defined, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ScreenWidth                    (Parm, OutParm)
// int                            ScreenHeight                   (Parm, OutParm)

void UUIScript::STATIC_GetCurrentResolution(int* ScreenWidth, int* ScreenHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCurrentResolution");

	UUIScript_GetCurrentResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenWidth != nullptr)
		*ScreenWidth = params.ScreenWidth;
	if (ScreenHeight != nullptr)
		*ScreenHeight = params.ScreenHeight;
}


// Function NWindow.UIScript.GetClickLocation
// (Iterator, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUIScript::STATIC_GetClickLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClickLocation");

	UUIScript_GetClickLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetExpRate
// (Final, Iterator, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FINT64                  a_Exp                          (Parm)
// int                            a_Level                        (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIScript::STATIC_GetExpRate(const struct FINT64& a_Exp, int a_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetExpRate");

	UUIScript_GetExpRate_Params params;
	params.a_Exp = a_Exp;
	params.a_Level = a_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.CheckItemLimit
// (Defined, Iterator, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// struct FINT64                  Count                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_CheckItemLimit(const struct FItemID& cID, const struct FINT64& Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.CheckItemLimit");

	UUIScript_CheckItemLimit_Params params;
	params.cID = cID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsSongDance
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// int                            SkillLevel                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsSongDance(const struct FItemID& cID, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsSongDance");

	UUIScript_IsSongDance_Params params;
	params.cID = cID;
	params.SkillLevel = SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsDebuff
// (Final, Defined, PreOperator, Singular, Net, Exec, Operator, Static, Const)
// Parameters:
// struct FItemID                 cID                            (Parm)
// int                            SkillLevel                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsDebuff(const struct FItemID& cID, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsDebuff");

	UUIScript_IsDebuff_Params params;
	params.cID = cID;
	params.SkillLevel = SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetRoutingString
// (Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            RoutingType                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetRoutingString(int RoutingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetRoutingString");

	UUIScript_GetRoutingString_Params params;
	params.RoutingType = RoutingType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetUserRankString
// (Final, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Rank                           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetUserRankString(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetUserRankString");

	UUIScript_GetUserRankString_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestBypassToServer
// (Defined, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strPass                        (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestBypassToServer(const struct FString& strPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBypassToServer");

	UUIScript_RequestBypassToServer_Params params;
	params.strPass = strPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetAllianceCrestTexFromAllianceCrestID
// (Final, Defined, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            AllianceCrestID                (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUIScript::STATIC_GetAllianceCrestTexFromAllianceCrestID(int AllianceCrestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetAllianceCrestTexFromAllianceCrestID");

	UUIScript_GetAllianceCrestTexFromAllianceCrestID_Params params;
	params.AllianceCrestID = AllianceCrestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPledgeCrestTexFromPledgeCrestID
// (Iterator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            PledgeCrestID                  (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUIScript::STATIC_GetPledgeCrestTexFromPledgeCrestID(int PledgeCrestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPledgeCrestTexFromPledgeCrestID");

	UUIScript_GetPledgeCrestTexFromPledgeCrestID_Params params;
	params.PledgeCrestID = PledgeCrestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCurrentIMELang
// (Final, Iterator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EIMEType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EIMEType> UUIScript::STATIC_GetCurrentIMELang()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCurrentIMELang");

	UUIScript_GetCurrentIMELang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.PlayConsoleSound
// (Defined, Iterator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EInterfaceSoundType> eType                          (Parm)

void UUIScript::STATIC_PlayConsoleSound(TEnumAsByte<EInterfaceSoundType> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.PlayConsoleSound");

	UUIScript_PlayConsoleSound_Params params;
	params.eType = eType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetNumericColor
// (Final, Defined, Iterator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strCommaAdena                  (Parm, NeedCtorLink)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UUIScript::STATIC_GetNumericColor(const struct FString& strCommaAdena)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetNumericColor");

	UUIScript_GetNumericColor_Params params;
	params.strCommaAdena = strCommaAdena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.ConvertNumToTextNoAdena
// (Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strInput                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_ConvertNumToTextNoAdena(const struct FString& strInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ConvertNumToTextNoAdena");

	UUIScript_ConvertNumToTextNoAdena_Params params;
	params.strInput = strInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.ConvertNumToText
// (Final, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strInput                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_ConvertNumToText(const struct FString& strInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ConvertNumToText");

	UUIScript_ConvertNumToText_Params params;
	params.strInput = strInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.MakeCostString
// (Defined, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strInput                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_MakeCostString(const struct FString& strInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.MakeCostString");

	UUIScript_MakeCostString_Params params;
	params.strInput = strInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.MakeCostStringINT64
// (Final, Defined, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FINT64                  a_Input                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_MakeCostStringINT64(const struct FINT64& a_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.MakeCostStringINT64");

	UUIScript_MakeCostStringINT64_Params params;
	params.a_Input = a_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetItemGradeTextureName
// (Iterator, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            nCrystalType                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetItemGradeTextureName(int nCrystalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetItemGradeTextureName");

	UUIScript_GetItemGradeTextureName_Params params;
	params.nCrystalType = nCrystalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetItemGradeString
// (Final, Iterator, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            nCrystalType                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetItemGradeString(int nCrystalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetItemGradeString");

	UUIScript_GetItemGradeString_Params params;
	params.nCrystalType = nCrystalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.MakeFullItemName
// (Defined, Iterator, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_MakeFullItemName(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.MakeFullItemName");

	UUIScript_MakeFullItemName_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTextSize
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strInput                       (Parm, NeedCtorLink)
// struct FString                 sFontName                      (Parm, NeedCtorLink)
// int                            nWidth                         (Parm, OutParm)
// int                            nHeight                        (Parm, OutParm)

void UUIScript::STATIC_GetTextSize(const struct FString& strInput, const struct FString& sFontName, int* nWidth, int* nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTextSize");

	UUIScript_GetTextSize_Params params;
	params.strInput = strInput;
	params.sFontName = sFontName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}


// Function NWindow.UIScript.GetTextSizeDefault
// (PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strInput                       (Parm, NeedCtorLink)
// int                            nWidth                         (Parm, OutParm)
// int                            nHeight                        (Parm, OutParm)

void UUIScript::STATIC_GetTextSizeDefault(const struct FString& strInput, int* nWidth, int* nHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTextSizeDefault");

	UUIScript_GetTextSizeDefault_Params params;
	params.strInput = strInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}


// Function NWindow.UIScript.MakeFullSystemMsg
// (Final, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sMsg                           (Parm, NeedCtorLink)
// struct FString                 sArg1                          (Parm, NeedCtorLink)
// struct FString                 sArg2                          (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_MakeFullSystemMsg(const struct FString& sMsg, const struct FString& sArg1, const struct FString& sArg2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.MakeFullSystemMsg");

	UUIScript_MakeFullSystemMsg_Params params;
	params.sMsg = sMsg;
	params.sArg1 = sArg1;
	params.sArg2 = sArg2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetScript
// (Iterator, Latent, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Window                         (Parm, NeedCtorLink)
// class UUIScript*               ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIScript* UUIScript::STATIC_GetScript(const struct FString& Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetScript");

	UUIScript_GetScript_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetSystemMessageWithParamNumber
// (Defined, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            param                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetSystemMessageWithParamNumber(int Id, int param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSystemMessageWithParamNumber");

	UUIScript_GetSystemMessageWithParamNumber_Params params;
	params.Id = Id;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetSystemMsgInfo
// (Final, Defined, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FSystemMsgData          SysMsgData                     (Parm, OutParm, NeedCtorLink)

void UUIScript::STATIC_GetSystemMsgInfo(int Id, struct FSystemMsgData* SysMsgData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSystemMsgInfo");

	UUIScript_GetSystemMsgInfo_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SysMsgData != nullptr)
		*SysMsgData = params.SysMsgData;
}


// Function NWindow.UIScript.GetSystemMessage
// (Iterator, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetSystemMessage(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSystemMessage");

	UUIScript_GetSystemMessage_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetSystemString
// (Final, Iterator, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetSystemString(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSystemString");

	UUIScript_GetSystemString_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsKeyDown
// (Defined, Iterator, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsKeyDown(TEnumAsByte<EInputKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsKeyDown");

	UUIScript_IsKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.Debug
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 strMsg                         (Parm, NeedCtorLink)

void UUIScript::STATIC_Debug(const struct FString& strMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.Debug");

	UUIScript_Debug_Params params;
	params.strMsg = strMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.ConvertTimetoStr
// (Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Time                           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_ConvertTimetoStr(int Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.ConvertTimetoStr");

	UUIScript_ConvertTimetoStr_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTimeString
// (Final, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTimeString");

	UUIScript_GetTimeString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.MakeBuffTimeStr
// (Defined, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Time                           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_MakeBuffTimeStr(int Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.MakeBuffTimeStr");

	UUIScript_MakeBuffTimeStr_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTeleportFlagCount
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetTeleportFlagCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTeleportFlagCount");

	UUIScript_GetTeleportFlagCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTeleportBookMarkCount
// (Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetTeleportBookMarkCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTeleportBookMarkCount");

	UUIScript_GetTeleportBookMarkCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetAdena
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// struct FINT64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FINT64 UUIScript::STATIC_GetAdena()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetAdena");

	UUIScript_GetAdena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetClanNameValue
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            iClanID                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetClanNameValue(int iClanID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClanNameValue");

	UUIScript_GetClanNameValue_Params params;
	params.iClanID = iClanID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetClanName
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Const)
// Parameters:
// int                            clanID                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetClanName(int clanID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClanName");

	UUIScript_GetClanName_Params params;
	params.clanID = clanID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.IsBuilderPC
// (Net, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsBuilderPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsBuilderPC");

	UUIScript_IsBuilderPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetClassStep
// (Final, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            a_ClassID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetClassStep(int a_ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClassStep");

	UUIScript_GetClassStep_Params params;
	params.a_ClassID = a_ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetDecoIndex
// (Defined, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FItemID                 DecoID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetDecoIndex(const struct FItemID& DecoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetDecoIndex");

	UUIScript_GetDecoIndex_Params params;
	params.DecoID = DecoID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetAccessoryItemID
// (Final, Defined, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FItemID                 a_LEar                         (Parm, OutParm)
// struct FItemID                 a_REar                         (Parm, OutParm)
// struct FItemID                 a_LFinger                      (Parm, OutParm)
// struct FItemID                 a_RFinger                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetAccessoryItemID(struct FItemID* a_LEar, struct FItemID* a_REar, struct FItemID* a_LFinger, struct FItemID* a_RFinger)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetAccessoryItemID");

	UUIScript_GetAccessoryItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_LEar != nullptr)
		*a_LEar = params.a_LEar;
	if (a_REar != nullptr)
		*a_REar = params.a_REar;
	if (a_LFinger != nullptr)
		*a_LFinger = params.a_LFinger;
	if (a_RFinger != nullptr)
		*a_RFinger = params.a_RFinger;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetExpByPlayerLevel
// (Iterator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            iLevel                         (Parm)
// struct FINT64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FINT64 UUIScript::STATIC_GetExpByPlayerLevel(int iLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetExpByPlayerLevel");

	UUIScript_GetExpByPlayerLevel_Params params;
	params.iLevel = iLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetSkillInfo
// (Final, Iterator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            a_SkillID                      (Parm)
// int                            a_SkillLevel                   (Parm)
// struct FSkillInfo              a_SkillInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetSkillInfo(int a_SkillID, int a_SkillLevel, struct FSkillInfo* a_SkillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetSkillInfo");

	UUIScript_GetSkillInfo_Params params;
	params.a_SkillID = a_SkillID;
	params.a_SkillLevel = a_SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_SkillInfo != nullptr)
		*a_SkillInfo = params.a_SkillInfo;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPetInfo
// (Defined, Iterator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FPetInfo                a_PetInfo                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetPetInfo(struct FPetInfo* a_PetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPetInfo");

	UUIScript_GetPetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_PetInfo != nullptr)
		*a_PetInfo = params.a_PetInfo;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetUserInfo
// (Final, Defined, Iterator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            UserID                         (Parm)
// struct FUserInfo               a_UserInfo                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetUserInfo(int UserID, struct FUserInfo* a_UserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetUserInfo");

	UUIScript_GetUserInfo_Params params;
	params.UserID = UserID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_UserInfo != nullptr)
		*a_UserInfo = params.a_UserInfo;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetTargetInfo
// (Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FUserInfo               a_UserInfo                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetTargetInfo(struct FUserInfo* a_UserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetTargetInfo");

	UUIScript_GetTargetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_UserInfo != nullptr)
		*a_UserInfo = params.a_UserInfo;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPlayerInfo
// (Final, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FUserInfo               a_UserInfo                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetPlayerInfo(struct FUserInfo* a_UserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPlayerInfo");

	UUIScript_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_UserInfo != nullptr)
		*a_UserInfo = params.a_UserInfo;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetClassIconName
// (Defined, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ClassID                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetClassIconName(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClassIconName");

	UUIScript_GetClassIconName_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetClassStr
// (Final, Defined, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ClassID                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetClassStr(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClassStr");

	UUIScript_GetClassStr_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetClassType
// (Iterator, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            ClassID                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetClassType(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetClassType");

	UUIScript_GetClassType_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestInviteMpcc
// (Final, Iterator, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestInviteMpcc(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestInviteMpcc");

	UUIScript_RequestInviteMpcc_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestInviteParty
// (Defined, Iterator, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestInviteParty(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestInviteParty");

	UUIScript_RequestInviteParty_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.HasClanEmblem
// (Final, Defined, Iterator, Latent, Net, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_HasClanEmblem()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.HasClanEmblem");

	UUIScript_HasClanEmblem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.HasClanCrest
// (PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_HasClanCrest()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.HasClanCrest");

	UUIScript_HasClanCrest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetCastleName
// (Final, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            castleID                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIScript::STATIC_GetCastleName(int castleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetCastleName");

	UUIScript_GetCastleName_Params params;
	params.castleID = castleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.RequestPCCafeCouponUse
// (Defined, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 a_CouponKey                    (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestPCCafeCouponUse(const struct FString& a_CouponKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestPCCafeCouponUse");

	UUIScript_RequestPCCafeCouponUse_Params params;
	params.a_CouponKey = a_CouponKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanMemberAuth
// (Final, Defined, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            clanType                       (Parm)
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanMemberAuth(int clanType, const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanMemberAuth");

	UUIScript_RequestClanMemberAuth_Params params;
	params.clanType = clanType;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestEditClanAuth
// (Iterator, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            gradeID                        (Parm)
// TArray<int>                    powers                         (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestEditClanAuth(int gradeID, TArray<int> powers)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestEditClanAuth");

	UUIScript_RequestEditClanAuth_Params params;
	params.gradeID = gradeID;
	params.powers = powers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanAuth
// (Final, Iterator, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            gradeID                        (Parm)

void UUIScript::STATIC_RequestClanAuth(int gradeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanAuth");

	UUIScript_RequestClanAuth_Params params;
	params.gradeID = gradeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanWarList
// (Defined, Iterator, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            page                           (Parm)
// int                            State                          (Parm)

void UUIScript::STATIC_RequestClanWarList(int page, int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanWarList");

	UUIScript_RequestClanWarList_Params params;
	params.page = page;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanChangeNickName
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// struct FString                 sNickName                      (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanChangeNickName(const struct FString& sName, const struct FString& sNickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanChangeNickName");

	UUIScript_RequestClanChangeNickName_Params params;
	params.sName = sName;
	params.sNickName = sNickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanUnregisterEmblem
// (Latent, PreOperator, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanUnregisterEmblem()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanUnregisterEmblem");

	UUIScript_RequestClanUnregisterEmblem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanRegisterEmblem
// (Final, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanRegisterEmblem()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanRegisterEmblem");

	UUIScript_RequestClanRegisterEmblem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanUnregisterCrest
// (Defined, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanUnregisterCrest()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanUnregisterCrest");

	UUIScript_RequestClanUnregisterCrest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanRegisterCrest
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanRegisterCrest()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanRegisterCrest");

	UUIScript_RequestClanRegisterCrest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanReorganizeMember
// (Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            type                           (Parm)
// struct FString                 memberName                     (Parm, NeedCtorLink)
// int                            clanType                       (Parm)
// struct FString                 targetMemberName               (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanReorganizeMember(int type, const struct FString& memberName, int clanType, const struct FString& targetMemberName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanReorganizeMember");

	UUIScript_RequestClanReorganizeMember_Params params;
	params.type = type;
	params.memberName = memberName;
	params.clanType = clanType;
	params.targetMemberName = targetMemberName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanWithdrawWarWithClanName
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sClanName                      (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanWithdrawWarWithClanName(const struct FString& sClanName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanWithdrawWarWithClanName");

	UUIScript_RequestClanWithdrawWarWithClanName_Params params;
	params.sClanName = sClanName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanWithdrawWar
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanWithdrawWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanWithdrawWar");

	UUIScript_RequestClanWithdrawWar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanDeclareWarWithClanName
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanDeclareWarWithClanName(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanDeclareWarWithClanName");

	UUIScript_RequestClanDeclareWarWithClanName_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanDeclareWarWithUserID
// (Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)

void UUIScript::STATIC_RequestClanDeclareWarWithUserID(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanDeclareWarWithUserID");

	UUIScript_RequestClanDeclareWarWithUserID_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanDeclareWar
// (Final, Singular, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanDeclareWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanDeclareWar");

	UUIScript_RequestClanDeclareWar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanAskJoin
// (Defined, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            Id                             (Parm)
// int                            clanType                       (Parm)

void UUIScript::STATIC_RequestClanAskJoin(int Id, int clanType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanAskJoin");

	UUIScript_RequestClanAskJoin_Params params;
	params.Id = Id;
	params.clanType = clanType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanExpelMember
// (Final, Defined, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            clanType                       (Parm)
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanExpelMember(int clanType, const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanExpelMember");

	UUIScript_RequestClanExpelMember_Params params;
	params.clanType = clanType;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanLeave
// (Iterator, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 ClanName                       (Parm, NeedCtorLink)
// int                            clanType                       (Parm)

void UUIScript::STATIC_RequestClanLeave(const struct FString& ClanName, int clanType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanLeave");

	UUIScript_RequestClanLeave_Params params;
	params.ClanName = ClanName;
	params.clanType = clanType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanDeletePupil
// (Final, Iterator, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sMaster                        (Parm, NeedCtorLink)
// struct FString                 sPupil                         (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanDeletePupil(const struct FString& sMaster, const struct FString& sPupil)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanDeletePupil");

	UUIScript_RequestClanDeletePupil_Params params;
	params.sMaster = sMaster;
	params.sPupil = sPupil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanAssignPupil
// (Defined, Iterator, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sMaster                        (Parm, NeedCtorLink)
// struct FString                 sPupil                         (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanAssignPupil(const struct FString& sMaster, const struct FString& sPupil)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanAssignPupil");

	UUIScript_RequestClanAssignPupil_Params params;
	params.sMaster = sMaster;
	params.sPupil = sPupil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanChangeGrade
// (Final, Defined, Iterator, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// int                            grade                          (Parm)

void UUIScript::STATIC_RequestClanChangeGrade(const struct FString& sName, int grade)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanChangeGrade");

	UUIScript_RequestClanChangeGrade_Params params;
	params.sName = sName;
	params.grade = grade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanGradeList
// (Latent, Singular, Net, NetReliable, Operator, Static, Const)

void UUIScript::STATIC_RequestClanGradeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanGradeList");

	UUIScript_RequestClanGradeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestClanMemberInfo
// (Final, Latent, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            type                           (Parm)
// struct FString                 Name                           (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestClanMemberInfo(int type, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestClanMemberInfo");

	UUIScript_RequestClanMemberInfo_Params params;
	params.type = type;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.GetPartyMemberLocationWithID
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            a_PartyMemberSID               (Parm)
// struct FVector                 a_Location                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetPartyMemberLocationWithID(int a_PartyMemberSID, struct FVector* a_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPartyMemberLocationWithID");

	UUIScript_GetPartyMemberLocationWithID_Params params;
	params.a_PartyMemberSID = a_PartyMemberSID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Location != nullptr)
		*a_Location = params.a_Location;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPartyMemberLocation
// (Final, Defined, Latent, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// int                            a_PartyMemberIndex             (Parm)
// struct FVector                 a_Location                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_GetPartyMemberLocation(int a_PartyMemberIndex, struct FVector* a_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPartyMemberLocation");

	UUIScript_GetPartyMemberLocation_Params params;
	params.a_PartyMemberIndex = a_PartyMemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (a_Location != nullptr)
		*a_Location = params.a_Location;

	return params.ReturnValue;
}


// Function NWindow.UIScript.GetPartyMemberCount
// (Final, Defined, Iterator, NetReliable, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIScript::STATIC_GetPartyMemberCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.GetPartyMemberCount");

	UUIScript_GetPartyMemberCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIScript.SendPrivateShopList
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 type                           (Parm, NeedCtorLink)
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_SendPrivateShopList(const struct FString& type, const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.SendPrivateShopList");

	UUIScript_SendPrivateShopList_Params params;
	params.type = type;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestQuitPrivateShop
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)
// Parameters:
// struct FString                 type                           (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestQuitPrivateShop(const struct FString& type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestQuitPrivateShop");

	UUIScript_RequestQuitPrivateShop_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDispel
// (Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// int                            SkillLevel                     (Parm)

void UUIScript::STATIC_RequestDispel(const struct FItemID& sID, int SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDispel");

	UUIScript_RequestDispel_Params params;
	params.sID = sID;
	params.SkillLevel = SkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDuelSurrender
// (Final, Defined, Iterator, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestDuelSurrender()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDuelSurrender");

	UUIScript_RequestDuelSurrender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDuelAnswerStart
// (Final, Defined, Latent, Simulated, Operator, Static, Const)
// Parameters:
// int                            duelType                       (Parm)
// int                            Option                         (Parm)
// int                            answer                         (Parm)

void UUIScript::STATIC_RequestDuelAnswerStart(int duelType, int Option, int answer)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDuelAnswerStart");

	UUIScript_RequestDuelAnswerStart_Params params;
	params.duelType = duelType;
	params.Option = Option;
	params.answer = answer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDuelStart
// (Defined, Iterator, Latent, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 sTargetName                    (Parm, NeedCtorLink)
// int                            duelType                       (Parm)

void UUIScript::STATIC_RequestDuelStart(const struct FString& sTargetName, int duelType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDuelStart");

	UUIScript_RequestDuelStart_Params params;
	params.sTargetName = sTargetName;
	params.duelType = duelType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestItemList
// (Final, Iterator, PreOperator, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestItemList");

	UUIScript_RequestItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestCrystallizeItem
// (Final, Defined, Latent, PreOperator, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// struct FINT64                  Number                         (Parm)

void UUIScript::STATIC_RequestCrystallizeItem(const struct FItemID& sID, const struct FINT64& Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestCrystallizeItem");

	UUIScript_RequestCrystallizeItem_Params params;
	params.sID = sID;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestUnequipItem
// (Defined, Iterator, PreOperator, Singular, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// int                            SlotBitType                    (Parm)

void UUIScript::STATIC_RequestUnequipItem(const struct FItemID& sID, int SlotBitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestUnequipItem");

	UUIScript_RequestUnequipItem_Params params;
	params.sID = sID;
	params.SlotBitType = SlotBitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDropItem
// (Final, Latent, PreOperator, Singular, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// struct FINT64                  Num                            (Parm)
// struct FVector                 Location                       (Parm)

void UUIScript::STATIC_RequestDropItem(const struct FItemID& sID, const struct FINT64& Num, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDropItem");

	UUIScript_RequestDropItem_Params params;
	params.sID = sID;
	params.Num = Num;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestDestroyItem
// (Net, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// struct FINT64                  Num                            (Parm)

void UUIScript::STATIC_RequestDestroyItem(const struct FItemID& sID, const struct FINT64& Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestDestroyItem");

	UUIScript_RequestDestroyItem_Params params;
	params.sID = sID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestUseItem
// (Iterator, Net, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)

void UUIScript::STATIC_RequestUseItem(const struct FItemID& sID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestUseItem");

	UUIScript_RequestUseItem_Params params;
	params.sID = sID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestRestartPoint
// (Latent, Net, Simulated, Operator, Static, Const)
// Parameters:
// TEnumAsByte<ERestartPointType> type                           (Parm)

void UUIScript::STATIC_RequestRestartPoint(TEnumAsByte<ERestartPointType> type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestRestartPoint");

	UUIScript_RequestRestartPoint_Params params;
	params.type = type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestMultiSellChoose
// (Iterator, Latent, PreOperator, Net, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestMultiSellChoose(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestMultiSellChoose");

	UUIScript_RequestMultiSellChoose_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBBSBoard
// (Final, Defined, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestBBSBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBBSBoard");

	UUIScript_RequestBBSBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestPreviewItem
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestPreviewItem(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestPreviewItem");

	UUIScript_RequestPreviewItem_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestPackageSend
// (Final, Iterator, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestPackageSend(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestPackageSend");

	UUIScript_RequestPackageSend_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestPackageSendableItemList
// (Final, Latent, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            targetID                       (Parm)

void UUIScript::STATIC_RequestPackageSendableItemList(int targetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestPackageSendableItemList");

	UUIScript_RequestPackageSendableItemList_Params params;
	params.targetID = targetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestChangePetName
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 Name                           (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestChangePetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestChangePetName");

	UUIScript_RequestChangePetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestWarehouseWithdraw
// (Final, Defined, PreOperator, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestWarehouseWithdraw(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestWarehouseWithdraw");

	UUIScript_RequestWarehouseWithdraw_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestWarehouseDeposit
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestWarehouseDeposit(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestWarehouseDeposit");

	UUIScript_RequestWarehouseDeposit_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestTargetUser
// (Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            ServerID                       (Parm)

void UUIScript::STATIC_RequestTargetUser(int ServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestTargetUser");

	UUIScript_RequestTargetUser_Params params;
	params.ServerID = ServerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAssist
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            ServerID                       (Parm)
// struct FVector                 Loc                            (Parm)

void UUIScript::STATIC_RequestAssist(int ServerID, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAssist");

	UUIScript_RequestAssist_Params params;
	params.ServerID = ServerID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAction
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            ServerID                       (Parm)
// struct FVector                 Loc                            (Parm)

void UUIScript::STATIC_RequestAction(int ServerID, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAction");

	UUIScript_RequestAction_Params params;
	params.ServerID = ServerID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAttack
// (Final, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            ServerID                       (Parm)
// struct FVector                 Loc                            (Parm)

void UUIScript::STATIC_RequestAttack(int ServerID, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAttack");

	UUIScript_RequestAttack_Params params;
	params.ServerID = ServerID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestSetCrop
// (Defined, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestSetCrop(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestSetCrop");

	UUIScript_RequestSetCrop_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestSetSeed
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestSetSeed(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestSetSeed");

	UUIScript_RequestSetSeed_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestProcureCrop
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestProcureCrop(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestProcureCrop");

	UUIScript_RequestProcureCrop_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBuySeed
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestBuySeed(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBuySeed");

	UUIScript_RequestBuySeed_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestBuyItem
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestBuyItem(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestBuyItem");

	UUIScript_RequestBuyItem_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestSellItem
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestSellItem(const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestSellItem");

	UUIScript_RequestSellItem_Params params;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.AnswerTradeRequest
// (Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// bool                           bOK                            (Parm)

void UUIScript::STATIC_AnswerTradeRequest(bool bOK)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.AnswerTradeRequest");

	UUIScript_AnswerTradeRequest_Params params;
	params.bOK = bOK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAddTradeItem
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FItemID                 sID                            (Parm)
// struct FINT64                  Num                            (Parm)

void UUIScript::STATIC_RequestAddTradeItem(const struct FItemID& sID, const struct FINT64& Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAddTradeItem");

	UUIScript_RequestAddTradeItem_Params params;
	params.sID = sID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestStartTrade
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            targetID                       (Parm)

void UUIScript::STATIC_RequestStartTrade(int targetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestStartTrade");

	UUIScript_RequestStartTrade_Params params;
	params.targetID = targetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestTradeDone
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// bool                           bDone                          (Parm)

void UUIScript::STATIC_RequestTradeDone(bool bDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestTradeDone");

	UUIScript_RequestTradeDone_Params params;
	params.bDone = bDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestRaidRecord
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestRaidRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestRaidRecord");

	UUIScript_RequestRaidRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestSkillList
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestSkillList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestSkillList");

	UUIScript_RequestSkillList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestTargetCancel
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestTargetCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestTargetCancel");

	UUIScript_RequestTargetCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestSelfTarget
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestSelfTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestSelfTarget");

	UUIScript_RequestSelfTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestAuthCardKeyLogin
// (Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// int                            uid                            (Parm)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UUIScript::STATIC_RequestAuthCardKeyLogin(int uid, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestAuthCardKeyLogin");

	UUIScript_RequestAuthCardKeyLogin_Params params;
	params.uid = uid;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.RequestExit
// (Final, Net, NetReliable, Simulated, Operator, Static, Const)

void UUIScript::STATIC_RequestExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.RequestExit");

	UUIScript_RequestExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIScript.IsPKMode
// (Defined, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScript::STATIC_IsPKMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIScript.IsPKMode");

	UUIScript_IsPKMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_MULTISELLNEEDEDITEM.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_MULTISELLNEEDEDITEM::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MULTISELLNEEDEDITEM.Clear");

	UUIAPI_MULTISELLNEEDEDITEM_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MULTISELLNEEDEDITEM.AddData
// (Iterator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 param                          (Parm, NeedCtorLink)

void UUIAPI_MULTISELLNEEDEDITEM::STATIC_AddData(const struct FString& ControlName, const struct FString& param)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MULTISELLNEEDEDITEM.AddData");

	UUIAPI_MULTISELLNEEDEDITEM_AddData_Params params;
	params.ControlName = ControlName;
	params.param = param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MULTISELLITEMINFO.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_MULTISELLITEMINFO::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MULTISELLITEMINFO.Clear");

	UUIAPI_MULTISELLITEMINFO_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MULTISELLITEMINFO.SetItemInfo
// (Final, Iterator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// struct FItemInfo               item                           (Parm, NeedCtorLink)

void UUIAPI_MULTISELLITEMINFO::STATIC_SetItemInfo(const struct FString& ControlName, int Index, const struct FItemInfo& item)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MULTISELLITEMINFO.SetItemInfo");

	UUIAPI_MULTISELLITEMINFO_SetItemInfo_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.DeleteAllCursedWeaponIcon
// (Defined, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)

void UUIAPI_MINIMAPCTRL::STATIC_DeleteAllCursedWeaponIcon(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.DeleteAllCursedWeaponIcon");

	UUIAPI_MINIMAPCTRL_DeleteAllCursedWeaponIcon_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.IsOverlapped
// (Final, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// int                            FirstX                         (Parm)
// int                            FirstY                         (Parm)
// int                            SecondX                        (Parm)
// int                            SecondY                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_MINIMAPCTRL::STATIC_IsOverlapped(const struct FString& a_ControlID, int FirstX, int FirstY, int SecondX, int SecondY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.IsOverlapped");

	UUIAPI_MINIMAPCTRL_IsOverlapped_Params params;
	params.a_ControlID = a_ControlID;
	params.FirstX = FirstX;
	params.FirstY = FirstY;
	params.SecondX = SecondX;
	params.SecondY = SecondY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_MINIMAPCTRL.RequestReduceBtn
// (Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)

void UUIAPI_MINIMAPCTRL::STATIC_RequestReduceBtn(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.RequestReduceBtn");

	UUIAPI_MINIMAPCTRL_RequestReduceBtn_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.DrawGridIcon
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// struct FString                 a_IconName                     (Parm, NeedCtorLink)
// struct FString                 a_DupIconName                  (Parm, NeedCtorLink)
// struct FVector                 a_Loc                          (Parm)
// bool                           a_Refresh                      (Parm)
// int                            a_XOffset                      (OptionalParm, Parm)
// int                            a_YOffset                      (OptionalParm, Parm)
// struct FString                 TooltipString                  (OptionalParm, Parm, NeedCtorLink)

void UUIAPI_MINIMAPCTRL::STATIC_DrawGridIcon(const struct FString& a_ControlID, const struct FString& a_IconName, const struct FString& a_DupIconName, const struct FVector& a_Loc, bool a_Refresh, int a_XOffset, int a_YOffset, const struct FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.DrawGridIcon");

	UUIAPI_MINIMAPCTRL_DrawGridIcon_Params params;
	params.a_ControlID = a_ControlID;
	params.a_IconName = a_IconName;
	params.a_DupIconName = a_DupIconName;
	params.a_Loc = a_Loc;
	params.a_Refresh = a_Refresh;
	params.a_XOffset = a_XOffset;
	params.a_YOffset = a_YOffset;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.SetSSQStatus
// (Defined, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// int                            a_SSQStatus                    (Parm)

void UUIAPI_MINIMAPCTRL::STATIC_SetSSQStatus(const struct FString& a_ControlID, int a_SSQStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.SetSSQStatus");

	UUIAPI_MINIMAPCTRL_SetSSQStatus_Params params;
	params.a_ControlID = a_ControlID;
	params.a_SSQStatus = a_SSQStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.SetShowQuest
// (Final, Iterator, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// bool                           a_ShowQuest                    (Parm)

void UUIAPI_MINIMAPCTRL::STATIC_SetShowQuest(const struct FString& a_ControlID, bool a_ShowQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.SetShowQuest");

	UUIAPI_MINIMAPCTRL_SetShowQuest_Params params;
	params.a_ControlID = a_ControlID;
	params.a_ShowQuest = a_ShowQuest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.DeleteAllTarget
// (Final, Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)

void UUIAPI_MINIMAPCTRL::STATIC_DeleteAllTarget(const struct FString& a_ControlID)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.DeleteAllTarget");

	UUIAPI_MINIMAPCTRL_DeleteAllTarget_Params params;
	params.a_ControlID = a_ControlID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.DeleteTarget
// (Defined, Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// struct FVector                 a_Loc                          (Parm)

void UUIAPI_MINIMAPCTRL::STATIC_DeleteTarget(const struct FString& a_ControlID, const struct FVector& a_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.DeleteTarget");

	UUIAPI_MINIMAPCTRL_DeleteTarget_Params params;
	params.a_ControlID = a_ControlID;
	params.a_Loc = a_Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.AddTarget
// (Final, Defined, Iterator, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// struct FVector                 a_Loc                          (Parm)

void UUIAPI_MINIMAPCTRL::STATIC_AddTarget(const struct FString& a_ControlID, const struct FVector& a_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.AddTarget");

	UUIAPI_MINIMAPCTRL_AddTarget_Params params;
	params.a_ControlID = a_ControlID;
	params.a_Loc = a_Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_MINIMAPCTRL.AdjustMapView
// (Final, Latent, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 a_ControlID                    (Parm, NeedCtorLink)
// struct FVector                 Loc                            (Parm)
// bool                           a_ZoomToTownMap                (OptionalParm, Parm)
// bool                           a_UseGridLocation              (OptionalParm, Parm)

void UUIAPI_MINIMAPCTRL::STATIC_AdjustMapView(const struct FString& a_ControlID, const struct FVector& Loc, bool a_ZoomToTownMap, bool a_UseGridLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_MINIMAPCTRL.AdjustMapView");

	UUIAPI_MINIMAPCTRL_AdjustMapView_Params params;
	params.a_ControlID = a_ControlID;
	params.Loc = Loc;
	params.a_ZoomToTownMap = a_ZoomToTownMap;
	params.a_UseGridLocation = a_UseGridLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.ShowScrollBar
// (Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bShow                          (Parm)

void UUIAPI_ITEMWINDOW::STATIC_ShowScrollBar(const struct FString& ControlName, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.ShowScrollBar");

	UUIAPI_ITEMWINDOW_ShowScrollBar_Params params;
	params.ControlName = ControlName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.SetFaded
// (Defined, Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bOn                            (Parm)

void UUIAPI_ITEMWINDOW::STATIC_SetFaded(const struct FString& ControlName, bool bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.SetFaded");

	UUIAPI_ITEMWINDOW_SetFaded_Params params;
	params.ControlName = ControlName;
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.FindItem
// (Final, Iterator, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FItemID                 Id                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_ITEMWINDOW::STATIC_FindItem(const struct FString& ControlName, const struct FItemID& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.FindItem");

	UUIAPI_ITEMWINDOW_FindItem_Params params;
	params.ControlName = ControlName;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_ITEMWINDOW.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_ITEMWINDOW::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.Clear");

	UUIAPI_ITEMWINDOW_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.GetItem
// (Defined, Iterator, Latent, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// struct FItemInfo               Info                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_ITEMWINDOW::STATIC_GetItem(const struct FString& ControlName, int Index, struct FItemInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.GetItem");

	UUIAPI_ITEMWINDOW_GetItem_Params params;
	params.ControlName = ControlName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_ITEMWINDOW.GetSelectedItem
// (Final, Defined, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FItemInfo               Info                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_ITEMWINDOW::STATIC_GetSelectedItem(const struct FString& ControlName, struct FItemInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.GetSelectedItem");

	UUIAPI_ITEMWINDOW_GetSelectedItem_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_ITEMWINDOW.DeleteItem
// (Defined, Latent, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)

void UUIAPI_ITEMWINDOW::STATIC_DeleteItem(const struct FString& ControlName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.DeleteItem");

	UUIAPI_ITEMWINDOW_DeleteItem_Params params;
	params.ControlName = ControlName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.SetItem
// (Final, Latent, PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// struct FItemInfo               Info                           (Parm, NeedCtorLink)

void UUIAPI_ITEMWINDOW::STATIC_SetItem(const struct FString& ControlName, int Index, const struct FItemInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.SetItem");

	UUIAPI_ITEMWINDOW_SetItem_Params params;
	params.ControlName = ControlName;
	params.Index = Index;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.AddItem
// (Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FItemInfo               Info                           (Parm, NeedCtorLink)

void UUIAPI_ITEMWINDOW::STATIC_AddItem(const struct FString& ControlName, const struct FItemInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.AddItem");

	UUIAPI_ITEMWINDOW_AddItem_Params params;
	params.ControlName = ControlName;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.ClearSelect
// (Final, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_ITEMWINDOW::STATIC_ClearSelect(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.ClearSelect");

	UUIAPI_ITEMWINDOW_ClearSelect_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_ITEMWINDOW.GetItemNum
// (Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_ITEMWINDOW::STATIC_GetItemNum(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.GetItemNum");

	UUIAPI_ITEMWINDOW_GetItemNum_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_ITEMWINDOW.GetSelectedNum
// (PreOperator, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_ITEMWINDOW::STATIC_GetSelectedNum(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_ITEMWINDOW.GetSelectedNum");

	UUIAPI_ITEMWINDOW_GetSelectedNum_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_INVENWEIGHT.ZeroWeight
// (Defined, Iterator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_INVENWEIGHT::STATIC_ZeroWeight(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_INVENWEIGHT.ZeroWeight");

	UUIAPI_INVENWEIGHT_ZeroWeight_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_INVENWEIGHT.ReduceWeight
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FINT64                  Weight                         (Parm)

void UUIAPI_INVENWEIGHT::STATIC_ReduceWeight(const struct FString& ControlName, const struct FINT64& Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_INVENWEIGHT.ReduceWeight");

	UUIAPI_INVENWEIGHT_ReduceWeight_Params params;
	params.ControlName = ControlName;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_INVENWEIGHT.AddWeight
// (Latent, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FINT64                  Weight                         (Parm)

void UUIAPI_INVENWEIGHT::STATIC_AddWeight(const struct FString& ControlName, const struct FINT64& Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_INVENWEIGHT.AddWeight");

	UUIAPI_INVENWEIGHT_AddWeight_Params params;
	params.ControlName = ControlName;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_HTMLCTRL.IsPageLock
// (Final, Defined, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIAPI_HTMLCTRL::STATIC_IsPageLock(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.IsPageLock");

	UUIAPI_HTMLCTRL_IsPageLock_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_HTMLCTRL.SetPageLock
// (Defined, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// bool                           bLock                          (Parm)

void UUIAPI_HTMLCTRL::STATIC_SetPageLock(const struct FString& ControlName, bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.SetPageLock");

	UUIAPI_HTMLCTRL_SetPageLock_Params params;
	params.ControlName = ControlName;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_HTMLCTRL.SetHtmlBuffData
// (Final, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 strData                        (Parm, NeedCtorLink)

void UUIAPI_HTMLCTRL::STATIC_SetHtmlBuffData(const struct FString& ControlName, const struct FString& strData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.SetHtmlBuffData");

	UUIAPI_HTMLCTRL_SetHtmlBuffData_Params params;
	params.ControlName = ControlName;
	params.strData = strData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_HTMLCTRL.ControllerExecution
// (Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 strBypass                      (Parm, NeedCtorLink)
// TEnumAsByte<EControlReturnType> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EControlReturnType> UUIAPI_HTMLCTRL::STATIC_ControllerExecution(const struct FString& ControlName, const struct FString& strBypass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.ControllerExecution");

	UUIAPI_HTMLCTRL_ControllerExecution_Params params;
	params.ControlName = ControlName;
	params.strBypass = strBypass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_HTMLCTRL.GetFrameMaxHeight
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIAPI_HTMLCTRL::STATIC_GetFrameMaxHeight(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.GetFrameMaxHeight");

	UUIAPI_HTMLCTRL_GetFrameMaxHeight_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NWindow.UIAPI_HTMLCTRL.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)

void UUIAPI_HTMLCTRL::Clear(const struct FString& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.Clear");

	UUIAPI_HTMLCTRL_Clear_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_HTMLCTRL.LoadHtmlFromString
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 HtmlString                     (Parm, NeedCtorLink)

void UUIAPI_HTMLCTRL::STATIC_LoadHtmlFromString(const struct FString& ControlName, const struct FString& HtmlString)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.LoadHtmlFromString");

	UUIAPI_HTMLCTRL_LoadHtmlFromString_Params params;
	params.ControlName = ControlName;
	params.HtmlString = HtmlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_HTMLCTRL.LoadHtml
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UUIAPI_HTMLCTRL::STATIC_LoadHtml(const struct FString& ControlName, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_HTMLCTRL.LoadHtml");

	UUIAPI_HTMLCTRL_LoadHtml_Params params;
	params.ControlName = ControlName;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NWindow.UIAPI_EFFECTBUTTON.BeginEffect
// (Final, Latent, Net, NetReliable, Simulated, Operator, Static, Const)
// Parameters:
// struct FString                 ControlName                    (Parm, NeedCtorLink)
// int                            iEffectNumber                  (Parm)

void UUIAPI_EFFECTBUTTON::STATIC_BeginEffect(const struct FString& ControlName, int iEffectNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function NWindow.UIAPI_EFFECTBUTTON.BeginEffect");

	UUIAPI_EFFECTBUTTON_BeginEffect_Params params;
	params.ControlName = ControlName;
	params.iEffectNumber = iEffectNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

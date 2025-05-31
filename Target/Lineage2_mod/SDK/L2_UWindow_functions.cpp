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

// Function UWindow.UWindowBase.BuildObjectWithProperties
// (Defined, PreOperator, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UUWindowBase::BuildObjectWithProperties(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowBase.BuildObjectWithProperties");

	UUWindowBase_BuildObjectWithProperties_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowBase.InStrAfter
// (Singular, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FString                 Match                          (Parm, NeedCtorLink)
// int                            pos                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowBase::InStrAfter(const struct FString& Text, const struct FString& Match, int pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowBase.InStrAfter");

	UUWindowBase_InStrAfter_Params params;
	params.Text = Text;
	params.Match = Match;
	params.pos = pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowBase.GetRegion
// (Final, PreOperator, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FTexRegion              t                              (Parm)
// struct FRegion                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRegion UUWindowBase::GetRegion(const struct FTexRegion& t)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowBase.GetRegion");

	UUWindowBase_GetRegion_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowBase.NewTexRegion
// (PreOperator, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UTexture*                t                              (Parm)
// struct FTexRegion              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTexRegion UUWindowBase::NewTexRegion(float X, float Y, float W, float H, class UTexture* t)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowBase.NewTexRegion");

	UUWindowBase_NewTexRegion_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowBase.NewRegion
// (Final, Defined, Iterator, Latent, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// struct FRegion                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRegion UUWindowBase::NewRegion(float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowBase.NewRegion");

	UUWindowBase_NewRegion_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.StripCRLF
// (Final, Defined, Latent, NetReliable, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, NeedCtorLink)

void UUWindowWindow::StripCRLF(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.StripCRLF");

	UUWindowWindow_StripCRLF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UWindow.UWindowWindow.ReplaceText
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, Event)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, NeedCtorLink)
// struct FString                 Replace                        (Parm, NeedCtorLink)
// struct FString                 With                           (Parm, NeedCtorLink)

void UUWindowWindow::ReplaceText(const struct FString& Replace, const struct FString& With, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ReplaceText");

	UUWindowWindow_ReplaceText_Params params;
	params.Replace = Replace;
	params.With = With;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UWindow.UWindowWindow.NotifyAfterLevelChange
// (Iterator, Singular, NetReliable, HasOptionalParms, Const)

void UUWindowWindow::NotifyAfterLevelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.NotifyAfterLevelChange");

	UUWindowWindow_NotifyAfterLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.SetCursor
// (Defined, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FMouseCursor            C                              (Parm)

void UUWindowWindow::SetCursor(const struct FMouseCursor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SetCursor");

	UUWindowWindow_SetCursor_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.NotifyBeforeLevelChange
// (Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUWindowWindow::NotifyBeforeLevelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.NotifyBeforeLevelChange");

	UUWindowWindow_NotifyBeforeLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.NotifyQuitUnreal
// (Final, Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUWindowWindow::NotifyQuitUnreal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.NotifyQuitUnreal");

	UUWindowWindow_NotifyQuitUnreal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MessageBoxDone
// (Iterator, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowMessageBox*      W                              (Parm)
// TEnumAsByte<EMessageBoxResult> Result                         (Parm)

void UUWindowWindow::MessageBoxDone(class UUWindowMessageBox* W, TEnumAsByte<EMessageBoxResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MessageBoxDone");

	UUWindowWindow_MessageBoxDone_Params params;
	params.W = W;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MessageBox
// (Final, Iterator, PreOperator, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// TEnumAsByte<EMessageBoxButtons> Buttons                        (Parm)
// TEnumAsByte<EMessageBoxResult> ESCResult                      (Parm)
// TEnumAsByte<EMessageBoxResult> EnterResult                    (OptionalParm, Parm)
// int                            TimeOut                        (OptionalParm, Parm)
// class UUWindowMessageBox*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMessageBox* UUWindowWindow::STATIC_MessageBox(const struct FString& Title, const struct FString& Message, TEnumAsByte<EMessageBoxButtons> Buttons, TEnumAsByte<EMessageBoxResult> ESCResult, TEnumAsByte<EMessageBoxResult> EnterResult, int TimeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MessageBox");

	UUWindowWindow_MessageBox_Params params;
	params.Title = Title;
	params.Message = Message;
	params.Buttons = Buttons;
	params.ESCResult = ESCResult;
	params.EnterResult = EnterResult;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.SetParent
// (Final, Iterator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          NewParent                      (Parm)

void UUWindowWindow::SetParent(class UUWindowWindow* NewParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SetParent");

	UUWindowWindow_SetParent_Params params;
	params.NewParent = NewParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.WindowIsVisible
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::WindowIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WindowIsVisible");

	UUWindowWindow_WindowIsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.CheckMousePassThrough
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::CheckMousePassThrough(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.CheckMousePassThrough");

	UUWindowWindow_CheckMousePassThrough_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.WindowShown
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::WindowShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WindowShown");

	UUWindowWindow_WindowShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.WindowHidden
// (Final, Defined, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::WindowHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WindowHidden");

	UUWindowWindow_WindowHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.WaitModal
// (Final, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::WaitModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WaitModal");

	UUWindowWindow_WaitModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.ShowModal
// (Defined, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowWindow::ShowModal(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ShowModal");

	UUWindowWindow_ShowModal_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ResolutionChanged
// (Defined, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowWindow::ResolutionChanged(float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ResolutionChanged");

	UUWindowWindow_ResolutionChanged_Params params;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.TextSize
// (Final, Latent, PreOperator, Net, Event)
// Parameters:
// class UCanvas*                 C                              (Parm)
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUWindowWindow::TextSize(class UCanvas* C, const struct FString& Text, float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.TextSize");

	UUWindowWindow_TextSize_Params params;
	params.C = C;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
	if (H != nullptr)
		*H = params.H;
}


// Function UWindow.UWindowWindow.GetDesiredDimensions
// (Defined, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUWindowWindow::GetDesiredDimensions(float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetDesiredDimensions");

	UUWindowWindow_GetDesiredDimensions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
	if (H != nullptr)
		*H = params.H;
}


// Function UWindow.UWindowWindow.FindChildWindow
// (Final, NetReliable, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UClass*                  ChildClass                     (Parm)
// bool                           bExactClass                    (OptionalParm, Parm)
// class UUWindowWindow*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowWindow* UUWindowWindow::FindChildWindow(class UClass* ChildClass, bool bExactClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.FindChildWindow");

	UUWindowWindow_FindChildWindow_Params params;
	params.ChildClass = ChildClass;
	params.bExactClass = bExactClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.GetParent
// (Defined, Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// class UClass*                  ParentClass                    (Parm)
// bool                           bExactClass                    (OptionalParm, Parm)
// class UUWindowWindow*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowWindow* UUWindowWindow::GetParent(class UClass* ParentClass, bool bExactClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetParent");

	UUWindowWindow_GetParent_Params params;
	params.ParentClass = ParentClass;
	params.bExactClass = bExactClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.SetAcceptsHotKeys
// (Defined, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bNewAccpetsHotKeys             (Parm)

void UUWindowWindow::SetAcceptsHotKeys(bool bNewAccpetsHotKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SetAcceptsHotKeys");

	UUWindowWindow_SetAcceptsHotKeys_Params params;
	params.bNewAccpetsHotKeys = bNewAccpetsHotKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.IsActive
// (Defined, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.IsActive");

	UUWindowWindow_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.GetLookAndFeelTexture
// (Final, Defined, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUWindowWindow::GetLookAndFeelTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetLookAndFeelTexture");

	UUWindowWindow_GetLookAndFeelTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.SetMouseWindow
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)

void UUWindowWindow::SetMouseWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SetMouseWindow");

	UUWindowWindow_SetMouseWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ToolTip
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 strTip                         (Parm, NeedCtorLink)

void UUWindowWindow::STATIC_ToolTip(const struct FString& strTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ToolTip");

	UUWindowWindow_ToolTip_Params params;
	params.strTip = strTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MouseIsOver
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::MouseIsOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MouseIsOver");

	UUWindowWindow_MouseIsOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.ParseAmpersand
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// struct FString                 Result                         (Parm, OutParm, NeedCtorLink)
// struct FString                 Underline                      (Parm, OutParm, NeedCtorLink)
// bool                           bCalcUnderline                 (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UUWindowWindow::ParseAmpersand(const struct FString& S, bool bCalcUnderline, struct FString* Result, struct FString* Underline)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ParseAmpersand");

	UUWindowWindow_ParseAmpersand_Params params;
	params.S = S;
	params.bCalcUnderline = bCalcUnderline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Underline != nullptr)
		*Underline = params.Underline;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.RemoveAmpersand
// (Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowWindow::RemoveAmpersand(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.RemoveAmpersand");

	UUWindowWindow_RemoveAmpersand_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.DrawMiscBevel
// (Defined, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UTexture*                t                              (Parm)
// int                            BevelType                      (Parm)

void UUWindowWindow::DrawMiscBevel(class UCanvas* C, float X, float Y, float W, float H, class UTexture* t, int BevelType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawMiscBevel");

	UUWindowWindow_DrawMiscBevel_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.t = t;
	params.BevelType = BevelType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawUpBevel
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UTexture*                t                              (Parm)

void UUWindowWindow::DrawUpBevel(class UCanvas* C, float X, float Y, float W, float H, class UTexture* t)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawUpBevel");

	UUWindowWindow_DrawUpBevel_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawClippedActor
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// class AActor*                  A                              (Parm)
// bool                           Wireframe                      (Parm)
// struct FRotator                RotOffset                      (Parm)
// struct FVector                 LocOffset                      (Parm)

void UUWindowWindow::DrawClippedActor(class UCanvas* C, float X, float Y, class AActor* A, bool Wireframe, const struct FRotator& RotOffset, const struct FVector& LocOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawClippedActor");

	UUWindowWindow_DrawClippedActor_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.A = A;
	params.Wireframe = Wireframe;
	params.RotOffset = RotOffset;
	params.LocOffset = LocOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ClipTextWidth
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// float                          W                              (Parm)

void UUWindowWindow::ClipTextWidth(class UCanvas* C, float X, float Y, const struct FString& S, float W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ClipTextWidth");

	UUWindowWindow_ClipTextWidth_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.S = S;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.WrapClipText
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// bool                           bCheckHotKey                   (OptionalParm, Parm)
// int                            Length                         (OptionalParm, Parm)
// int                            PaddingLength                  (OptionalParm, Parm)
// bool                           bNoDraw                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowWindow::WrapClipText(class UCanvas* C, float X, float Y, const struct FString& S, bool bCheckHotKey, int Length, int PaddingLength, bool bNoDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WrapClipText");

	UUWindowWindow_WrapClipText_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.S = S;
	params.bCheckHotKey = bCheckHotKey;
	params.Length = Length;
	params.PaddingLength = PaddingLength;
	params.bNoDraw = bNoDraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.ClipText
// (NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// bool                           bCheckHotKey                   (OptionalParm, Parm)

void UUWindowWindow::ClipText(class UCanvas* C, float X, float Y, const struct FString& S, bool bCheckHotKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ClipText");

	UUWindowWindow_ClipText_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.S = S;
	params.bCheckHotKey = bCheckHotKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawStretchedTextureSegment
// (Final, Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// float                          tX                             (Parm)
// float                          tY                             (Parm)
// float                          tW                             (Parm)
// float                          tH                             (Parm)
// class UTexture*                Tex                            (Parm)

void UUWindowWindow::DrawStretchedTextureSegment(class UCanvas* C, float X, float Y, float W, float H, float tX, float tY, float tW, float tH, class UTexture* Tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawStretchedTextureSegment");

	UUWindowWindow_DrawStretchedTextureSegment_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.tX = tX;
	params.tY = tY;
	params.tW = tW;
	params.tH = tH;
	params.Tex = Tex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawStretchedTexture
// (Final, Latent, NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UTexture*                Tex                            (Parm)

void UUWindowWindow::DrawStretchedTexture(class UCanvas* C, float X, float Y, float W, float H, class UTexture* Tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawStretchedTexture");

	UUWindowWindow_DrawStretchedTexture_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.Tex = Tex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawClippedTexture
// (Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// class UTexture*                Tex                            (Parm)

void UUWindowWindow::DrawClippedTexture(class UCanvas* C, float X, float Y, class UTexture* Tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawClippedTexture");

	UUWindowWindow_DrawClippedTexture_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Tex = Tex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawVertTiledPieces
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          DestX                          (Parm)
// float                          DestY                          (Parm)
// float                          DestW                          (Parm)
// float                          DestH                          (Parm)
// struct FTexRegion              T1                             (Parm)
// struct FTexRegion              T2                             (Parm)
// struct FTexRegion              T3                             (Parm)
// struct FTexRegion              T4                             (Parm)
// struct FTexRegion              T5                             (Parm)
// float                          Scale                          (Parm)

void UUWindowWindow::DrawVertTiledPieces(class UCanvas* C, float DestX, float DestY, float DestW, float DestH, const struct FTexRegion& T1, const struct FTexRegion& T2, const struct FTexRegion& T3, const struct FTexRegion& T4, const struct FTexRegion& T5, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawVertTiledPieces");

	UUWindowWindow_DrawVertTiledPieces_Params params;
	params.C = C;
	params.DestX = DestX;
	params.DestY = DestY;
	params.DestW = DestW;
	params.DestH = DestH;
	params.T1 = T1;
	params.T2 = T2;
	params.T3 = T3;
	params.T4 = T4;
	params.T5 = T5;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DrawHorizTiledPieces
// (Final, Iterator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          DestX                          (Parm)
// float                          DestY                          (Parm)
// float                          DestW                          (Parm)
// float                          DestH                          (Parm)
// struct FTexRegion              T1                             (Parm)
// struct FTexRegion              T2                             (Parm)
// struct FTexRegion              T3                             (Parm)
// struct FTexRegion              T4                             (Parm)
// struct FTexRegion              T5                             (Parm)
// float                          Scale                          (Parm)

void UUWindowWindow::DrawHorizTiledPieces(class UCanvas* C, float DestX, float DestY, float DestW, float DestH, const struct FTexRegion& T1, const struct FTexRegion& T2, const struct FTexRegion& T3, const struct FTexRegion& T4, const struct FTexRegion& T5, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DrawHorizTiledPieces");

	UUWindowWindow_DrawHorizTiledPieces_Params params;
	params.C = C;
	params.DestX = DestX;
	params.DestY = DestY;
	params.DestW = DestW;
	params.DestH = DestH;
	params.T1 = T1;
	params.T2 = T2;
	params.T3 = T3;
	params.T4 = T4;
	params.T5 = T5;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Tile
// (Iterator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UTexture*                t                              (Parm)

void UUWindowWindow::Tile(class UCanvas* C, class UTexture* t)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Tile");

	UUWindowWindow_Tile_Params params;
	params.C = C;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.CreateWindow
// (Final, Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class UClass*                  WndClass                       (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UUWindowWindow*          OwnerW                         (OptionalParm, Parm)
// bool                           bUnique                        (OptionalParm, Parm)
// struct FName                   ObjectName                     (OptionalParm, Parm)
// class UUWindowWindow*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowWindow* UUWindowWindow::CreateWindow(class UClass* WndClass, float X, float Y, float W, float H, class UUWindowWindow* OwnerW, bool bUnique, const struct FName& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.CreateWindow");

	UUWindowWindow_CreateWindow_Params params;
	params.WndClass = WndClass;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.OwnerW = OwnerW;
	params.bUnique = bUnique;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.HideWindow
// (Final, Latent, NetReliable, Exec, Native, Event, Static, Const)

void UUWindowWindow::STATIC_HideWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.HideWindow");

	UUWindowWindow_HideWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ShowWindow
// (Final, Latent, Net, Exec, Native, Event, Static, Const)

void UUWindowWindow::STATIC_ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ShowWindow");

	UUWindowWindow_ShowWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ShowChildWindow
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          Child                          (Parm)
// bool                           bAtBack                        (OptionalParm, Parm)

void UUWindowWindow::ShowChildWindow(class UUWindowWindow* Child, bool bAtBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ShowChildWindow");

	UUWindowWindow_ShowChildWindow_Params params;
	params.Child = Child;
	params.bAtBack = bAtBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.WindowToGlobal
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          WinX                           (Parm)
// float                          WinY                           (Parm)
// float                          GlobalX                        (Parm, OutParm)
// float                          GlobalY                        (Parm, OutParm)

void UUWindowWindow::WindowToGlobal(float WinX, float WinY, float* GlobalX, float* GlobalY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WindowToGlobal");

	UUWindowWindow_WindowToGlobal_Params params;
	params.WinX = WinX;
	params.WinY = WinY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalX != nullptr)
		*GlobalX = params.GlobalX;
	if (GlobalY != nullptr)
		*GlobalY = params.GlobalY;
}


// Function UWindow.UWindowWindow.GlobalToWindow
// (Final, Latent, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          GlobalX                        (Parm)
// float                          GlobalY                        (Parm)
// float                          WinX                           (Parm, OutParm)
// float                          WinY                           (Parm, OutParm)

void UUWindowWindow::GlobalToWindow(float GlobalX, float GlobalY, float* WinX, float* WinY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GlobalToWindow");

	UUWindowWindow_GlobalToWindow_Params params;
	params.GlobalX = GlobalX;
	params.GlobalY = GlobalY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WinX != nullptr)
		*WinX = params.WinX;
	if (WinY != nullptr)
		*WinY = params.WinY;
}


// Function UWindow.UWindowWindow.GetMouseXY
// (Latent, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm, OutParm)
// float                          Y                              (Parm, OutParm)

void UUWindowWindow::GetMouseXY(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetMouseXY");

	UUWindowWindow_GetMouseXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function UWindow.UWindowWindow.CancelAcceptsFocus
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)

void UUWindowWindow::CancelAcceptsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.CancelAcceptsFocus");

	UUWindowWindow_CancelAcceptsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.SetAcceptsFocus
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)

void UUWindowWindow::SetAcceptsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SetAcceptsFocus");

	UUWindowWindow_SetAcceptsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.HideChildWindow
// (Iterator, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          Child                          (Parm)

void UUWindowWindow::HideChildWindow(class UUWindowWindow* Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.HideChildWindow");

	UUWindowWindow_HideChildWindow_Params params;
	params.Child = Child;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.SendToBack
// (Final, Defined, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)

void UUWindowWindow::SendToBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SendToBack");

	UUWindowWindow_SendToBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.BringToFront
// (Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UUWindowWindow::BringToFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.BringToFront");

	UUWindowWindow_BringToFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ActivateWindow
// (Final, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Depth                          (Parm)
// bool                           bTransientNoDeactivate         (Parm)

void UUWindowWindow::ActivateWindow(int Depth, bool bTransientNoDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ActivateWindow");

	UUWindowWindow_ActivateWindow_Params params;
	params.Depth = Depth;
	params.bTransientNoDeactivate = bTransientNoDeactivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MessageClients
// (PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::MessageClients(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MessageClients");

	UUWindowWindow_MessageClients_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.CheckKeyFocusWindow
// (Final, Defined, Iterator, Latent, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowWindow* UUWindowWindow::CheckKeyFocusWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.CheckKeyFocusWindow");

	UUWindowWindow_CheckKeyFocusWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.PropagateMessage
// (Defined, Iterator, Latent, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// float                          MsgLife                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::PropagateMessage(const struct FString& Msg, float MsgLife)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.PropagateMessage");

	UUWindowWindow_PropagateMessage_Params params;
	params.Msg = Msg;
	params.MsgLife = MsgLife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.PropagateKey
// (Final, Iterator, Latent, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::PropagateKey(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.PropagateKey");

	UUWindowWindow_PropagateKey_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.FindWindowUnder
// (Iterator, Latent, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// class UUWindowWindow*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowWindow* UUWindowWindow::FindWindowUnder(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.FindWindowUnder");

	UUWindowWindow_FindWindowUnder_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.PaintClients
// (Final, Defined, Latent, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::PaintClients(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.PaintClients");

	UUWindowWindow_PaintClients_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DoTick
// (Defined, Latent, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowWindow::DoTick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DoTick");

	UUWindowWindow_DoTick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowWindow::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Tick");

	UUWindowWindow_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.SetSize
// (Iterator, Singular, Net, Simulated, Exec, Event)
// Parameters:
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowWindow::SetSize(float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SetSize");

	UUWindowWindow_SetSize_Params params;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowWindow::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Close");

	UUWindowWindow_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.EscClose
// (Final, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowWindow::EscClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.EscClose");

	UUWindowWindow_EscClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.FocusOtherWindow
// (Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowWindow::FocusOtherWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.FocusOtherWindow");

	UUWindowWindow_FocusOtherWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.FocusWindow
// (Final, Iterator, Latent, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::FocusWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.FocusWindow");

	UUWindowWindow_FocusWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.LMouseUp
// (Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::LMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.LMouseUp");

	UUWindowWindow_LMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.LMouseDown");

	UUWindowWindow_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MMouseUp
// (Final, Defined, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::MMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MMouseUp");

	UUWindowWindow_MMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MMouseDown
// (Iterator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::MMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MMouseDown");

	UUWindowWindow_MMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.RMouseUp
// (Final, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::RMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.RMouseUp");

	UUWindowWindow_RMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.RMouseDown
// (Final, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::RMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.RMouseDown");

	UUWindowWindow_RMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.KeyFocusExit
// (Defined, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::KeyFocusExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.KeyFocusExit");

	UUWindowWindow_KeyFocusExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.KeyFocusEnter
// (Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::KeyFocusEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.KeyFocusEnter");

	UUWindowWindow_KeyFocusEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.ProcessMenuKey
// (Defined, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// struct FString                 KeyName                        (Parm, NeedCtorLink)

void UUWindowWindow::ProcessMenuKey(int Key, const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.ProcessMenuKey");

	UUWindowWindow_ProcessMenuKey_Params params;
	params.Key = Key;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.KeyPressed
// (Final, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::KeyPressed(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.KeyPressed");

	UUWindowWindow_KeyPressed_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.HotKeyUp
// (Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::HotKeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.HotKeyUp");

	UUWindowWindow_HotKeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.HotKeyDown
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowWindow::HotKeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.HotKeyDown");

	UUWindowWindow_HotKeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.KeyDown");

	UUWindowWindow_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.KeyUp
// (Defined, Iterator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::KeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.KeyUp");

	UUWindowWindow_KeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MouseMove");

	UUWindowWindow_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MouseLeave
// (PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MouseLeave");

	UUWindowWindow_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Deactivated
// (Final, Singular, Event)

void UUWindowWindow::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Deactivated");

	UUWindowWindow_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Activated
// (Final, Defined, Latent, Net, Exec, Native)

void UUWindowWindow::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Activated");

	UUWindowWindow_Activated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MouseEnter
// (Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowWindow::MouseEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MouseEnter");

	UUWindowWindow_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.AfterCreate
// (Final, Defined, Latent, PreOperator, Simulated, HasOptionalParms, Const)

void UUWindowWindow::AfterCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.AfterCreate");

	UUWindowWindow_AfterCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Created");

	UUWindowWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.BeforeCreate
// (Iterator, Latent, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowWindow::BeforeCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.BeforeCreate");

	UUWindowWindow_BeforeCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.BeginPlay
// (Iterator, Singular, Net, Simulated)

void UUWindowWindow::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.BeginPlay");

	UUWindowWindow_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.RDoubleClick
// (Final, Iterator, Latent, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::RDoubleClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.RDoubleClick");

	UUWindowWindow_RDoubleClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MDoubleClick
// (Defined, Iterator, Latent, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::MDoubleClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MDoubleClick");

	UUWindowWindow_MDoubleClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.DoubleClick
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::DoubleClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.DoubleClick");

	UUWindowWindow_DoubleClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.RClick
// (Latent, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::RClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.RClick");

	UUWindowWindow_RClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.MClick
// (Final, Latent, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::MClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.MClick");

	UUWindowWindow_MClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Click");

	UUWindowWindow_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Paint");

	UUWindowWindow_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.AfterPaint
// (Defined, Latent, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::AfterPaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.AfterPaint");

	UUWindowWindow_AfterPaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowWindow::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.BeforePaint");

	UUWindowWindow_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUWindowWindow::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.Resized");

	UUWindowWindow_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.GetEntryLevel
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event)
// Parameters:
// class ALevelInfo*              ReturnValue                    (Parm, OutParm, ReturnParm)

class ALevelInfo* UUWindowWindow::GetEntryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetEntryLevel");

	UUWindowWindow_GetEntryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.GetLevel
// (Final, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class ALevelInfo*              ReturnValue                    (Parm, OutParm, ReturnParm)

class ALevelInfo* UUWindowWindow::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetLevel");

	UUWindowWindow_GetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.GetPlayerOwner
// (Defined, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* UUWindowWindow::GetPlayerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.GetPlayerOwner");

	UUWindowWindow_GetPlayerOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowWindow.SaveConfigs
// (Final, Defined, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowWindow::SaveConfigs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.SaveConfigs");

	UUWindowWindow_SaveConfigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowWindow.WindowEvent
// (Final, Iterator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)

void UUWindowWindow::WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowWindow.WindowEvent");

	UUWindowWindow_WindowEvent_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.Message
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// float                          MsgLife                        (Parm)

void UUWindowRootWindow::Message(const struct FString& Msg, float MsgLife)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.Message");

	UUWindowRootWindow_Message_Params params;
	params.Msg = Msg;
	params.MsgLife = MsgLife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.PostRender
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UUWindowRootWindow::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.PostRender");

	UUWindowRootWindow_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.KeyEvent
// (Final, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm, OutParm)
// TEnumAsByte<EInputAction>      Action                         (Parm, OutParm)
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowRootWindow::KeyEvent(float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.KeyEvent");

	UUWindowRootWindow_KeyEvent_Params params;
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


// Function UWindow.UWindowRootWindow.Initialized
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event)

void UUWindowRootWindow::Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.Initialized");

	UUWindowRootWindow_Initialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowRootWindow::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.Tick");

	UUWindowRootWindow_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.DoQuitGame
// (Defined, Iterator, Singular, Simulated, HasOptionalParms, Const)

void UUWindowRootWindow::DoQuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.DoQuitGame");

	UUWindowRootWindow_DoQuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.QuitGame
// (Final, Iterator, PreOperator, Singular, Simulated, Exec, HasOptionalParms, Const)

void UUWindowRootWindow::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.QuitGame");

	UUWindowRootWindow_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.SetMousePos
// (Defined, Iterator, PreOperator, Singular, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowRootWindow::SetMousePos(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.SetMousePos");

	UUWindowRootWindow_SetMousePos_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.HideWindow
// (Final, Latent, NetReliable, Exec, Native, Event, Static, Const)

void UUWindowRootWindow::STATIC_HideWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.HideWindow");

	UUWindowRootWindow_HideWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.ChangeLookAndFeel
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 NewLookAndFeel                 (Parm, NeedCtorLink)

void UUWindowRootWindow::ChangeLookAndFeel(const struct FString& NewLookAndFeel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.ChangeLookAndFeel");

	UUWindowRootWindow_ChangeLookAndFeel_Params params;
	params.NewLookAndFeel = NewLookAndFeel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.SetupFonts
// (PreOperator, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowRootWindow::SetupFonts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.SetupFonts");

	UUWindowRootWindow_SetupFonts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.SetScale
// (Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// float                          NewScale                       (Parm)

void UUWindowRootWindow::SetScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.SetScale");

	UUWindowRootWindow_SetScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUWindowRootWindow::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.Resized");

	UUWindowRootWindow_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.CloseActiveWindow
// (Final, Defined, Iterator, Latent, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowRootWindow::CloseActiveWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.CloseActiveWindow");

	UUWindowRootWindow_CloseActiveWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.HotKeyUp
// (Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowRootWindow::HotKeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.HotKeyUp");

	UUWindowRootWindow_HotKeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.HotKeyDown
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowRootWindow::HotKeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.HotKeyDown");

	UUWindowRootWindow_HotKeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.WindowEvent
// (Final, Iterator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)

void UUWindowRootWindow::WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.WindowEvent");

	UUWindowRootWindow_WindowEvent_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.RemoveHotkeyWindow
// (Defined, Iterator, Latent, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowRootWindow::RemoveHotkeyWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.RemoveHotkeyWindow");

	UUWindowRootWindow_RemoveHotkeyWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.AddHotkeyWindow
// (Final, Iterator, Latent, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowRootWindow::AddHotkeyWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.AddHotkeyWindow");

	UUWindowRootWindow_AddHotkeyWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.IsActive
// (Defined, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowRootWindow::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.IsActive");

	UUWindowRootWindow_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.GetLookAndFeelTexture
// (Final, Defined, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUWindowRootWindow::GetLookAndFeelTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.GetLookAndFeelTexture");

	UUWindowRootWindow_GetLookAndFeelTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.CaptureMouse
// (Defined, PreOperator, Net, Native)
// Parameters:
// class UUWindowWindow*          W                              (OptionalParm, Parm)

void UUWindowRootWindow::CaptureMouse(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.CaptureMouse");

	UUWindowRootWindow_CaptureMouse_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.CancelCapture
// (Defined, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowRootWindow::CancelCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.CancelCapture");

	UUWindowRootWindow_CancelCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.CheckCaptureMouseDown
// (Final, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowRootWindow::CheckCaptureMouseDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.CheckCaptureMouseDown");

	UUWindowRootWindow_CheckCaptureMouseDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.CheckCaptureMouseUp
// (PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowRootWindow::CheckCaptureMouseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.CheckCaptureMouseUp");

	UUWindowRootWindow_CheckCaptureMouseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.DrawMouse
// (Iterator, Latent, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowRootWindow::DrawMouse(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.DrawMouse");

	UUWindowRootWindow_DrawMouse_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.MoveMouse
// (Final, Defined, Latent, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowRootWindow::MoveMouse(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.MoveMouse");

	UUWindowRootWindow_MoveMouse_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowRootWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.Created");

	UUWindowRootWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowRootWindow.GetLookAndFeel
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 LFClassName                    (Parm, NeedCtorLink)
// class UUWindowLookAndFeel*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowLookAndFeel* UUWindowRootWindow::GetLookAndFeel(const struct FString& LFClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.GetLookAndFeel");

	UUWindowRootWindow_GetLookAndFeel_Params params;
	params.LFClassName = LFClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowRootWindow.BeginPlay
// (Iterator, Singular, Net, Simulated)

void UUWindowRootWindow::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowRootWindow.BeginPlay");

	UUWindowRootWindow_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.WindowHidden
// (Final, Defined, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowFramedWindow::WindowHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.WindowHidden");

	UUWindowFramedWindow_WindowHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.WindowEvent
// (Final, Iterator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)

void UUWindowFramedWindow::WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.WindowEvent");

	UUWindowFramedWindow_WindowEvent_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.ToolTip
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, Const)
// Parameters:
// struct FString                 strTip                         (Parm, NeedCtorLink)

void UUWindowFramedWindow::STATIC_ToolTip(const struct FString& strTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.ToolTip");

	UUWindowFramedWindow_ToolTip_Params params;
	params.strTip = strTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowFramedWindow::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.MouseMove");

	UUWindowFramedWindow_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUWindowFramedWindow::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.Resized");

	UUWindowFramedWindow_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowFramedWindow::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.LMouseDown");

	UUWindowFramedWindow_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowFramedWindow::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.Paint");

	UUWindowFramedWindow_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowFramedWindow::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.BeforePaint");

	UUWindowFramedWindow_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFramedWindow.IsActive
// (Defined, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowFramedWindow::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.IsActive");

	UUWindowFramedWindow_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowFramedWindow.GetLookAndFeelTexture
// (Final, Defined, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUWindowFramedWindow::GetLookAndFeelTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.GetLookAndFeelTexture");

	UUWindowFramedWindow_GetLookAndFeelTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowFramedWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowFramedWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFramedWindow.Created");

	UUWindowFramedWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBox.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowMessageBox::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBox.Close");

	UUWindowMessageBox_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBox.AfterPaint
// (Defined, Latent, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMessageBox::AfterPaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBox.AfterPaint");

	UUWindowMessageBox_AfterPaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBox.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMessageBox::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBox.BeforePaint");

	UUWindowMessageBox_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBox.SetupMessageBox
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// TEnumAsByte<EMessageBoxButtons> Buttons                        (Parm)
// TEnumAsByte<EMessageBoxResult> InESCResult                    (Parm)
// TEnumAsByte<EMessageBoxResult> InEnterResult                  (OptionalParm, Parm)
// int                            InTimeOut                      (OptionalParm, Parm)

void UUWindowMessageBox::SetupMessageBox(const struct FString& Title, const struct FString& Message, TEnumAsByte<EMessageBoxButtons> Buttons, TEnumAsByte<EMessageBoxResult> InESCResult, TEnumAsByte<EMessageBoxResult> InEnterResult, int InTimeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBox.SetupMessageBox");

	UUWindowMessageBox_SetupMessageBox_Params params;
	params.Title = Title;
	params.Message = Message;
	params.Buttons = Buttons;
	params.InESCResult = InESCResult;
	params.InEnterResult = InEnterResult;
	params.InTimeOut = InTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.ControlFrame_Draw
// (Defined, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowControlFrame*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::ControlFrame_Draw(class UUWindowControlFrame* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.ControlFrame_Draw");

	UUWindowLookAndFeel_ControlFrame_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.ControlFrame_SetupSizes
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowControlFrame*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::ControlFrame_SetupSizes(class UUWindowControlFrame* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.ControlFrame_SetupSizes");

	UUWindowLookAndFeel_ControlFrame_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.PlayMenuSound
// (Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)
// TEnumAsByte<EMenuSound>        S                              (Parm)

void UUWindowLookAndFeel::PlayMenuSound(class UUWindowWindow* W, TEnumAsByte<EMenuSound> S)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.PlayMenuSound");

	UUWindowLookAndFeel_PlayMenuSound_Params params;
	params.W = W;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Button_DrawSmallButton
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSmallButton*     B                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Button_DrawSmallButton(class UUWindowSmallButton* B, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Button_DrawSmallButton");

	UUWindowLookAndFeel_Button_DrawSmallButton_Params params;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Menu_DrawPulldownMenuItem
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPulldownMenu*    M                              (Parm)
// class UUWindowPulldownMenuItem* item                           (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// bool                           bSelected                      (Parm)

void UUWindowLookAndFeel::Menu_DrawPulldownMenuItem(class UUWindowPulldownMenu* M, class UUWindowPulldownMenuItem* item, class UCanvas* C, float X, float Y, float W, float H, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Menu_DrawPulldownMenuItem");

	UUWindowLookAndFeel_Menu_DrawPulldownMenuItem_Params params;
	params.M = M;
	params.item = item;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Menu_DrawPulldownMenuBackground
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPulldownMenu*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Menu_DrawPulldownMenuBackground(class UUWindowPulldownMenu* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Menu_DrawPulldownMenuBackground");

	UUWindowLookAndFeel_Menu_DrawPulldownMenuBackground_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Menu_DrawMenuBarItem
// (PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         B                              (Parm)
// class UUWindowMenuBarItem*     i                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Menu_DrawMenuBarItem(class UUWindowMenuBar* B, class UUWindowMenuBarItem* i, float X, float Y, float W, float H, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Menu_DrawMenuBarItem");

	UUWindowLookAndFeel_Menu_DrawMenuBarItem_Params params;
	params.B = B;
	params.i = i;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Menu_DrawMenuBar
// (Final, Defined, Iterator, Latent, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Menu_DrawMenuBar(class UUWindowMenuBar* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Menu_DrawMenuBar");

	UUWindowLookAndFeel_Menu_DrawMenuBar_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Tab_DrawTabPageArea
// (Defined, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControl*     W                              (Parm)
// class UCanvas*                 C                              (Parm)
// class UUWindowPageWindow*      P                              (Parm)

void UUWindowLookAndFeel::Tab_DrawTabPageArea(class UUWindowPageControl* W, class UCanvas* C, class UUWindowPageWindow* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Tab_DrawTabPageArea");

	UUWindowLookAndFeel_Tab_DrawTabPageArea_Params params;
	params.W = W;
	params.C = C;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Tab_SetTabPageSize
// (Final, Defined, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControl*     W                              (Parm)
// class UUWindowPageWindow*      P                              (Parm)

void UUWindowLookAndFeel::Tab_SetTabPageSize(class UUWindowPageControl* W, class UUWindowPageWindow* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Tab_SetTabPageSize");

	UUWindowLookAndFeel_Tab_SetTabPageSize_Params params;
	params.W = W;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Tab_SetupRightButton
// (Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlRightButton* W                              (Parm)

void UUWindowLookAndFeel::Tab_SetupRightButton(class UUWindowTabControlRightButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Tab_SetupRightButton");

	UUWindowLookAndFeel_Tab_SetupRightButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Tab_SetupLeftButton
// (Final, Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlLeftButton* W                              (Parm)

void UUWindowLookAndFeel::Tab_SetupLeftButton(class UUWindowTabControlLeftButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Tab_SetupLeftButton");

	UUWindowLookAndFeel_Tab_SetupLeftButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Tab_GetTabSize
// (Defined, Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlTabArea* tab                            (Parm)
// class UCanvas*                 C                              (Parm)
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUWindowLookAndFeel::Tab_GetTabSize(class UUWindowTabControlTabArea* tab, class UCanvas* C, const struct FString& Text, float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Tab_GetTabSize");

	UUWindowLookAndFeel_Tab_GetTabSize_Params params;
	params.tab = tab;
	params.C = C;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
	if (H != nullptr)
		*H = params.H;
}


// Function UWindow.UWindowLookAndFeel.Tab_DrawTab
// (Final, Defined, Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlTabArea* tab                            (Parm)
// class UCanvas*                 C                              (Parm)
// bool                           bActiveTab                     (Parm)
// bool                           bLeftmostTab                   (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           bShowText                      (Parm)

void UUWindowLookAndFeel::Tab_DrawTab(class UUWindowTabControlTabArea* tab, class UCanvas* C, bool bActiveTab, bool bLeftmostTab, float X, float Y, float W, float H, const struct FString& Text, bool bShowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Tab_DrawTab");

	UUWindowLookAndFeel_Tab_DrawTab_Params params;
	params.tab = tab;
	params.C = C;
	params.bActiveTab = bActiveTab;
	params.bLeftmostTab = bLeftmostTab;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.Text = Text;
	params.bShowText = bShowText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.SB_HDraw
// (Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowHScrollbar*      W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::SB_HDraw(class UUWindowHScrollbar* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.SB_HDraw");

	UUWindowLookAndFeel_SB_HDraw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.SB_VDraw
// (Final, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowVScrollbar*      W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::SB_VDraw(class UUWindowVScrollbar* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.SB_VDraw");

	UUWindowLookAndFeel_SB_VDraw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.SB_SetupRightButton
// (Defined, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBRightButton*   W                              (Parm)

void UUWindowLookAndFeel::SB_SetupRightButton(class UUWindowSBRightButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.SB_SetupRightButton");

	UUWindowLookAndFeel_SB_SetupRightButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.SB_SetupLeftButton
// (Final, Defined, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBLeftButton*    W                              (Parm)

void UUWindowLookAndFeel::SB_SetupLeftButton(class UUWindowSBLeftButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.SB_SetupLeftButton");

	UUWindowLookAndFeel_SB_SetupLeftButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.SB_SetupDownButton
// (Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBDownButton*    W                              (Parm)

void UUWindowLookAndFeel::SB_SetupDownButton(class UUWindowSBDownButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.SB_SetupDownButton");

	UUWindowLookAndFeel_SB_SetupDownButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.SB_SetupUpButton
// (Final, Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBUpButton*      W                              (Parm)

void UUWindowLookAndFeel::SB_SetupUpButton(class UUWindowSBUpButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.SB_SetupUpButton");

	UUWindowLookAndFeel_SB_SetupUpButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Editbox_Draw
// (Defined, Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowEditControl*     W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Editbox_Draw(class UUWindowEditControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Editbox_Draw");

	UUWindowLookAndFeel_Editbox_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Editbox_SetupSizes
// (Final, Defined, Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowEditControl*     W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Editbox_SetupSizes(class UUWindowEditControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Editbox_SetupSizes");

	UUWindowLookAndFeel_Editbox_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.ComboList_DrawItem
// (PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboList*       Combo                          (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           bSelected                      (Parm)

void UUWindowLookAndFeel::ComboList_DrawItem(class UUWindowComboList* Combo, class UCanvas* C, float X, float Y, float W, float H, const struct FString& Text, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.ComboList_DrawItem");

	UUWindowLookAndFeel_ComboList_DrawItem_Params params;
	params.Combo = Combo;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.Text = Text;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.ComboList_DrawBackground
// (Final, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboList*       W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::ComboList_DrawBackground(class UUWindowComboList* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.ComboList_DrawBackground");

	UUWindowLookAndFeel_ComboList_DrawBackground_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Checkbox_Draw
// (Iterator, Singular, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowCheckbox*        W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Checkbox_Draw(class UUWindowCheckbox* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Checkbox_Draw");

	UUWindowLookAndFeel_Checkbox_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Checkbox_SetupSizes
// (Defined, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowCheckbox*        W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Checkbox_SetupSizes(class UUWindowCheckbox* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Checkbox_SetupSizes");

	UUWindowLookAndFeel_Checkbox_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Combo_SetupRightButton
// (Final, Defined, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboRightButton* W                              (Parm)

void UUWindowLookAndFeel::Combo_SetupRightButton(class UUWindowComboRightButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Combo_SetupRightButton");

	UUWindowLookAndFeel_Combo_SetupRightButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Combo_SetupLeftButton
// (Iterator, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboLeftButton* W                              (Parm)

void UUWindowLookAndFeel::Combo_SetupLeftButton(class UUWindowComboLeftButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Combo_SetupLeftButton");

	UUWindowLookAndFeel_Combo_SetupLeftButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Combo_GetButtonBitmaps
// (Final, Iterator, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboButton*     W                              (Parm)

void UUWindowLookAndFeel::Combo_GetButtonBitmaps(class UUWindowComboButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Combo_GetButtonBitmaps");

	UUWindowLookAndFeel_Combo_GetButtonBitmaps_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Combo_Draw
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboControl*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Combo_Draw(class UUWindowComboControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Combo_Draw");

	UUWindowLookAndFeel_Combo_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Combo_SetupSizes
// (Defined, Iterator, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboControl*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::Combo_SetupSizes(class UUWindowComboControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Combo_SetupSizes");

	UUWindowLookAndFeel_Combo_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.DrawClientArea
// (Final, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowClientWindow*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::DrawClientArea(class UUWindowClientWindow* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.DrawClientArea");

	UUWindowLookAndFeel_DrawClientArea_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.FW_SetupFrameButtons
// (Defined, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::FW_SetupFrameButtons(class UUWindowFramedWindow* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.FW_SetupFrameButtons");

	UUWindowLookAndFeel_FW_SetupFrameButtons_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.FW_HitTest
// (Final, Defined, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// TEnumAsByte<EFrameHitTest>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFrameHitTest> UUWindowLookAndFeel::FW_HitTest(class UUWindowFramedWindow* W, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.FW_HitTest");

	UUWindowLookAndFeel_FW_HitTest_Params params;
	params.W = W;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowLookAndFeel.FW_GetClientArea
// (Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// struct FRegion                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRegion UUWindowLookAndFeel::FW_GetClientArea(class UUWindowFramedWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.FW_GetClientArea");

	UUWindowLookAndFeel_FW_GetClientArea_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowLookAndFeel.FW_DrawWindowFrame
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUWindowLookAndFeel::FW_DrawWindowFrame(class UUWindowFramedWindow* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.FW_DrawWindowFrame");

	UUWindowLookAndFeel_FW_DrawWindowFrame_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.Setup
// (Defined, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowLookAndFeel::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.Setup");

	UUWindowLookAndFeel_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowLookAndFeel.GetTexture
// (Final, Defined, Singular, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUWindowLookAndFeel::GetTexture(class UUWindowFramedWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowLookAndFeel.GetTexture");

	UUWindowLookAndFeel_GetTexture_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowList::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Clear");

	UUWindowList_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.AppendListCopy
// (Singular, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            L                              (Parm)

void UUWindowList::AppendListCopy(class UUWindowList* L)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.AppendListCopy");

	UUWindowList_AppendListCopy_Params params;
	params.L = L;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.FindEntry
// (Final, Iterator, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Index                          (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::FindEntry(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.FindEntry");

	UUWindowList_FindEntry_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.InsertItem
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewElement                     (Parm)

void UUWindowList::InsertItem(class UUWindowList* NewElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.InsertItem");

	UUWindowList_InsertItem_Params params;
	params.NewElement = NewElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.Insert
// (Final, Defined, Iterator, Net, Simulated, Exec)
// Parameters:
// class UClass*                  C                              (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::Insert(class UClass* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Insert");

	UUWindowList_Insert_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.DoAppendItem
// (Iterator, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewElement                     (Parm)

void UUWindowList::DoAppendItem(class UUWindowList* NewElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.DoAppendItem");

	UUWindowList_DoAppendItem_Params params;
	params.NewElement = NewElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.AppendItem
// (Final, Defined, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewElement                     (Parm)

void UUWindowList::AppendItem(class UUWindowList* NewElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.AppendItem");

	UUWindowList_AppendItem_Params params;
	params.NewElement = NewElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.Append
// (Final, Defined, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UClass*                  C                              (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::Append(class UClass* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Append");

	UUWindowList_Append_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.Validate
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowList::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Validate");

	UUWindowList_Validate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.SetupSentinel
// (Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bInTreeSort                    (OptionalParm, Parm)

void UUWindowList::SetupSentinel(bool bInTreeSort)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.SetupSentinel");

	UUWindowList_SetupSentinel_Params params;
	params.bInTreeSort = bInTreeSort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.MoveItemSorted
// (Final, Defined, Singular, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            item                           (Parm)

void UUWindowList::MoveItemSorted(class UUWindowList* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.MoveItemSorted");

	UUWindowList_MoveItemSorted_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.Count
// (PreOperator, Singular, Net, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowList::STATIC_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Count");

	UUWindowList_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.ShowThisItem
// (Iterator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowList::ShowThisItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.ShowThisItem");

	UUWindowList_ShowThisItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.CopyExistingListItem
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UClass*                  ItemClass                      (Parm)
// class UUWindowList*            SourceItem                     (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::CopyExistingListItem(class UClass* ItemClass, class UUWindowList* SourceItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.CopyExistingListItem");

	UUWindowList_CopyExistingListItem_Params params;
	params.ItemClass = ItemClass;
	params.SourceItem = SourceItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.CountShown
// (Final, Defined, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowList::CountShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.CountShown");

	UUWindowList_CountShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.DestroyListItem
// (Defined, PreOperator, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowList::DestroyListItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.DestroyListItem");

	UUWindowList_DestroyListItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.DestroyList
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowList::DestroyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.DestroyList");

	UUWindowList_DestroyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.DisconnectList
// (Defined, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowList::DisconnectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.DisconnectList");

	UUWindowList_DisconnectList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.Sort
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::Sort()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Sort");

	UUWindowList_Sort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowList::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Tick");

	UUWindowList_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.ContinueSort
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowList::ContinueSort()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.ContinueSort");

	UUWindowList_ContinueSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.InsertItemAfter
// (Final, Defined, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewElement                     (Parm)
// bool                           bCheckShowItem                 (OptionalParm, Parm)

void UUWindowList::InsertItemAfter(class UUWindowList* NewElement, bool bCheckShowItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.InsertItemAfter");

	UUWindowList_InsertItemAfter_Params params;
	params.NewElement = NewElement;
	params.bCheckShowItem = bCheckShowItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.InsertItemBefore
// (Defined, Iterator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewElement                     (Parm)

void UUWindowList::InsertItemBefore(class UUWindowList* NewElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.InsertItemBefore");

	UUWindowList_InsertItemBefore_Params params;
	params.NewElement = NewElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.InsertAfter
// (Final, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UClass*                  C                              (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::InsertAfter(class UClass* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.InsertAfter");

	UUWindowList_InsertAfter_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.InsertBefore
// (Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UClass*                  C                              (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::InsertBefore(class UClass* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.InsertBefore");

	UUWindowList_InsertBefore_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.Compare
// (Iterator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            t                              (Parm)
// class UUWindowList*            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowList::Compare(class UUWindowList* t, class UUWindowList* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Compare");

	UUWindowList_Compare_Params params;
	params.t = t;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.Remove
// (Latent, Net, Simulated, Exec)

void UUWindowList::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.Remove");

	UUWindowList_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.LeftMost
// (Defined, PreOperator, Singular, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::LeftMost()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.LeftMost");

	UUWindowList_LeftMost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.RightMost
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::RightMost()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.RightMost");

	UUWindowList_RightMost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowList.GraftRight
// (Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewRight                       (Parm)

void UUWindowList::GraftRight(class UUWindowList* NewRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.GraftRight");

	UUWindowList_GraftRight_Params params;
	params.NewRight = NewRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.GraftLeft
// (Final, Iterator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            NewLeft                        (Parm)

void UUWindowList::GraftLeft(class UUWindowList* NewLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.GraftLeft");

	UUWindowList_GraftLeft_Params params;
	params.NewLeft = NewLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowList.CreateItem
// (Final, Defined, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UClass*                  C                              (Parm)
// class UUWindowList*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowList* UUWindowList::CreateItem(class UClass* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowList.CreateItem");

	UUWindowList_CreateItem_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowHotkeyWindowList.FindWindow
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)
// class UUWindowHotkeyWindowList* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowHotkeyWindowList* UUWindowHotkeyWindowList::FindWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHotkeyWindowList.FindWindow");

	UUWindowHotkeyWindowList_FindWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowConsoleWindow.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowConsoleWindow::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleWindow.Close");

	UUWindowConsoleWindow_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleWindow.SetDimensions
// (Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowConsoleWindow::SetDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleWindow.SetDimensions");

	UUWindowConsoleWindow_SetDimensions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleWindow.ResolutionChanged
// (Defined, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowConsoleWindow::ResolutionChanged(float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleWindow.ResolutionChanged");

	UUWindowConsoleWindow_ResolutionChanged_Params params;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleWindow.ShowWindow
// (Final, Latent, Net, Exec, Native, Event, Static, Const)

void UUWindowConsoleWindow::STATIC_ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleWindow.ShowWindow");

	UUWindowConsoleWindow_ShowWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowConsoleWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleWindow.Created");

	UUWindowConsoleWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.MouseLeave
// (PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowDialogControl::MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.MouseLeave");

	UUWindowDialogControl_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.MouseEnter
// (Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowDialogControl::MouseEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.MouseEnter");

	UUWindowDialogControl_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowDialogControl::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.MouseMove");

	UUWindowDialogControl_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowDialogControl::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.KeyDown");

	UUWindowDialogControl_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.CheckExternalDrag
// (Final, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// class UUWindowDialogControl*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowDialogControl* UUWindowDialogControl::CheckExternalDrag(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.CheckExternalDrag");

	UUWindowDialogControl_CheckExternalDrag_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDialogControl.ExternalDragOver
// (Final, Defined, Iterator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowDialogControl*   ExternalControl                (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowDialogControl::ExternalDragOver(class UUWindowDialogControl* ExternalControl, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.ExternalDragOver");

	UUWindowDialogControl_ExternalDragOver_Params params;
	params.ExternalControl = ExternalControl;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDialogControl.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// unsigned char                  E                              (Parm)

void UUWindowDialogControl::Notify(unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.Notify");

	UUWindowDialogControl_Notify_Params params;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.Register
// (Defined, Iterator, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowDialogClientWindow* W                              (Parm)

void UUWindowDialogControl::Register(class UUWindowDialogClientWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.Register");

	UUWindowDialogControl_Register_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.SetTextColor
// (Final, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FColor                  NewColor                       (Parm)

void UUWindowDialogControl::STATIC_SetTextColor(const struct FColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.SetTextColor");

	UUWindowDialogControl_SetTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.SetFont
// (Final, Defined, Iterator, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// int                            NewFont                        (Parm)

void UUWindowDialogControl::SetFont(int NewFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.SetFont");

	UUWindowDialogControl_SetFont_Params params;
	params.NewFont = NewFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowDialogControl::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.BeforePaint");

	UUWindowDialogControl_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.SetText
// (Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NewText                        (Parm, NeedCtorLink)

void UUWindowDialogControl::STATIC_SetText(const struct FString& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.SetText");

	UUWindowDialogControl_SetText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.SetHelpText
// (Latent, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// struct FString                 NewHelpText                    (Parm, NeedCtorLink)

void UUWindowDialogControl::SetHelpText(const struct FString& NewHelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.SetHelpText");

	UUWindowDialogControl_SetHelpText_Params params;
	params.NewHelpText = NewHelpText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.KeyFocusExit
// (Defined, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowDialogControl::KeyFocusExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.KeyFocusExit");

	UUWindowDialogControl_KeyFocusExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.KeyFocusEnter
// (Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowDialogControl::KeyFocusEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.KeyFocusEnter");

	UUWindowDialogControl_KeyFocusEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogControl.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowDialogControl::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogControl.Created");

	UUWindowDialogControl_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListControl.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowListControl::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListControl.Created");

	UUWindowListControl_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListControl.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowListControl::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListControl.DrawItem");

	UUWindowListControl_DrawItem_Params params;
	params.C = C;
	params.item = item;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.MenuItemSelected
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowBase*            Sender                         (Parm)
// class UUWindowBase*            item                           (Parm)

void UUWindowMenuBar::MenuItemSelected(class UUWindowBase* Sender, class UUWindowBase* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.MenuItemSelected");

	UUWindowMenuBar_MenuItemSelected_Params params;
	params.Sender = Sender;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.MenuCmd
// (Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// int                            Menu                           (Parm)
// int                            item                           (Parm)

void UUWindowMenuBar::MenuCmd(int Menu, int item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.MenuCmd");

	UUWindowMenuBar_MenuCmd_Params params;
	params.Menu = Menu;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMenuBar::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.KeyDown");

	UUWindowMenuBar_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.HotKeyUp
// (Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowMenuBar::HotKeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.HotKeyUp");

	UUWindowMenuBar_HotKeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBar.HotKeyDown
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowMenuBar::HotKeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.HotKeyDown");

	UUWindowMenuBar_HotKeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBar.GetMenuBar
// (Final, Iterator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMenuBar* UUWindowMenuBar::GetMenuBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.GetMenuBar");

	UUWindowMenuBar_GetMenuBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBar.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowMenuBar::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.Close");

	UUWindowMenuBar_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.CloseUp
// (Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowMenuBar::CloseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.CloseUp");

	UUWindowMenuBar_CloseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.DrawMenuBar
// (Final, Defined, Latent, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowMenuBar::DrawMenuBar(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.DrawMenuBar");

	UUWindowMenuBar_DrawMenuBar_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowMenuBar::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.DrawItem");

	UUWindowMenuBar_DrawItem_Params params;
	params.C = C;
	params.item = item;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMenuBar::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.LMouseDown");

	UUWindowMenuBar_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.Select
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// class UUWindowMenuBarItem*     i                              (Parm)

void UUWindowMenuBar::Select(class UUWindowMenuBarItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.Select");

	UUWindowMenuBar_Select_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.MouseLeave
// (PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowMenuBar::MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.MouseLeave");

	UUWindowMenuBar_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMenuBar::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.MouseMove");

	UUWindowMenuBar_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)

void UUWindowMenuBar::Paint(class UCanvas* C, float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.Paint");

	UUWindowMenuBar_Paint_Params params;
	params.C = C;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.ResolutionChanged
// (Defined, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowMenuBar::ResolutionChanged(float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.ResolutionChanged");

	UUWindowMenuBar_ResolutionChanged_Params params;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBar.AddItem
// (Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UUWindowMenuBarItem*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMenuBarItem* UUWindowMenuBar::STATIC_AddItem(const struct FString& Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.AddItem");

	UUWindowMenuBar_AddItem_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBar.AddHelpItem
// (Defined, NetReliable, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UUWindowMenuBarItem*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMenuBarItem* UUWindowMenuBar::AddHelpItem(const struct FString& Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.AddHelpItem");

	UUWindowMenuBar_AddHelpItem_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBar.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowMenuBar::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBar.Created");

	UUWindowMenuBar_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.KeyDown");

	UUWindowButton_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.MClick
// (Final, Latent, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::MClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.MClick");

	UUWindowButton_MClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.RClick
// (Latent, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::RClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.RClick");

	UUWindowButton_RClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.DoubleClick
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::DoubleClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.DoubleClick");

	UUWindowButton_DoubleClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.Click");

	UUWindowButton_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.MouseEnter
// (Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowButton::MouseEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.MouseEnter");

	UUWindowButton_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.MouseLeave
// (PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowButton::MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.MouseLeave");

	UUWindowButton_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.Paint");

	UUWindowButton_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.BeforePaint");

	UUWindowButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowButton.Created");

	UUWindowButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFrameCloseBox.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowFrameCloseBox::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFrameCloseBox.KeyDown");

	UUWindowFrameCloseBox_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFrameCloseBox.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowFrameCloseBox::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFrameCloseBox.Click");

	UUWindowFrameCloseBox_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowFrameCloseBox.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowFrameCloseBox::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowFrameCloseBox.Created");

	UUWindowFrameCloseBox_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowClientWindow.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowClientWindow::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowClientWindow.Close");

	UUWindowClientWindow_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogClientWindow.GetDesiredDimensions
// (Defined, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUWindowDialogClientWindow::GetDesiredDimensions(float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogClientWindow.GetDesiredDimensions");

	UUWindowDialogClientWindow_GetDesiredDimensions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
	if (H != nullptr)
		*H = params.H;
}


// Function UWindow.UWindowDialogClientWindow.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowDialogClientWindow::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogClientWindow.Paint");

	UUWindowDialogClientWindow_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogClientWindow.CreateControl
// (Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UClass*                  ControlClass                   (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UUWindowWindow*          OwnerWindow                    (OptionalParm, Parm)
// class UUWindowDialogControl*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowDialogControl* UUWindowDialogClientWindow::CreateControl(class UClass* ControlClass, float X, float Y, float W, float H, class UUWindowWindow* OwnerWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogClientWindow.CreateControl");

	UUWindowDialogClientWindow_CreateControl_Params params;
	params.ControlClass = ControlClass;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.OwnerWindow = OwnerWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDialogClientWindow.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class UUWindowDialogControl*   C                              (Parm)
// unsigned char                  E                              (Parm)

void UUWindowDialogClientWindow::Notify(class UUWindowDialogControl* C, unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogClientWindow.Notify");

	UUWindowDialogClientWindow_Notify_Params params;
	params.C = C;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDialogClientWindow.OKPressed
// (Defined, Iterator, Net, Simulated, Exec, HasOptionalParms, Const)

void UUWindowDialogClientWindow::OKPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDialogClientWindow.OKPressed");

	UUWindowDialogClientWindow_OKPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class UUWindowDialogControl*   C                              (Parm)
// unsigned char                  E                              (Parm)

void UUWindowMessageBoxCW::Notify(class UUWindowDialogControl* C, unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.Notify");

	UUWindowMessageBoxCW_Notify_Params params;
	params.C = C;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.SetupMessageBoxClient
// (Defined, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 InMessage                      (Parm, NeedCtorLink)
// TEnumAsByte<EMessageBoxButtons> InButtons                      (Parm)
// TEnumAsByte<EMessageBoxResult> InEnterResult                  (Parm)

void UUWindowMessageBoxCW::SetupMessageBoxClient(const struct FString& InMessage, TEnumAsByte<EMessageBoxButtons> InButtons, TEnumAsByte<EMessageBoxResult> InEnterResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.SetupMessageBoxClient");

	UUWindowMessageBoxCW_SetupMessageBoxClient_Params params;
	params.InMessage = InMessage;
	params.InButtons = InButtons;
	params.InEnterResult = InEnterResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMessageBoxCW::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.Paint");

	UUWindowMessageBoxCW_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.GetHeight
// (Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUWindowMessageBoxCW::GetHeight(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.GetHeight");

	UUWindowMessageBoxCW_GetHeight_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMessageBoxCW.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUWindowMessageBoxCW::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.Resized");

	UUWindowMessageBoxCW_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMessageBoxCW::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.BeforePaint");

	UUWindowMessageBoxCW_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMessageBoxCW::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.KeyDown");

	UUWindowMessageBoxCW_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxCW.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowMessageBoxCW::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxCW.Created");

	UUWindowMessageBoxCW_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowControlFrame.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowControlFrame::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowControlFrame.Paint");

	UUWindowControlFrame_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowControlFrame.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowControlFrame::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowControlFrame.BeforePaint");

	UUWindowControlFrame_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowControlFrame.SetFrame
// (Final, Defined, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowControlFrame::SetFrame(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowControlFrame.SetFrame");

	UUWindowControlFrame_SetFrame_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallButton.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSmallButton::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallButton.Paint");

	UUWindowSmallButton_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSmallButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallButton.BeforePaint");

	UUWindowSmallButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallButton.AutoWidth
// (Final, Latent, NetReliable, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowSmallButton::AutoWidth(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallButton.AutoWidth");

	UUWindowSmallButton_AutoWidth_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSmallButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallButton.Created");

	UUWindowSmallButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.MenuCmd
// (Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// int                            item                           (Parm)

void UUWindowPulldownMenu::MenuCmd(int item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.MenuCmd");

	UUWindowPulldownMenu_MenuCmd_Params params;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.KeyUp
// (Defined, Iterator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::KeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.KeyUp");

	UUWindowPulldownMenu_KeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.KeyDown");

	UUWindowPulldownMenu_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.FocusOtherWindow
// (Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowPulldownMenu::FocusOtherWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.FocusOtherWindow");

	UUWindowPulldownMenu_FocusOtherWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.GetMenuBar
// (Final, Iterator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMenuBar* UUWindowPulldownMenu::GetMenuBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.GetMenuBar");

	UUWindowPulldownMenu_GetMenuBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPulldownMenu.CloseUp
// (Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bByOwner                       (OptionalParm, Parm)

void UUWindowPulldownMenu::CloseUp(bool bByOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.CloseUp");

	UUWindowPulldownMenu_CloseUp_Params params;
	params.bByOwner = bByOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.ExecuteItem
// (Final, Defined, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPulldownMenuItem* i                              (Parm)

void UUWindowPulldownMenu::ExecuteItem(class UUWindowPulldownMenuItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.ExecuteItem");

	UUWindowPulldownMenu_ExecuteItem_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.BeforeExecuteItem
// (Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPulldownMenuItem* i                              (Parm)

void UUWindowPulldownMenu::BeforeExecuteItem(class UUWindowPulldownMenuItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.BeforeExecuteItem");

	UUWindowPulldownMenu_BeforeExecuteItem_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowPulldownMenu::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.DrawItem");

	UUWindowPulldownMenu_DrawItem_Params params;
	params.C = C;
	params.item = item;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.DrawMenuBackground
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowPulldownMenu::DrawMenuBackground(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.DrawMenuBackground");

	UUWindowPulldownMenu_DrawMenuBackground_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.Paint");

	UUWindowPulldownMenu_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.BeforePaint");

	UUWindowPulldownMenu_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.LMouseDown");

	UUWindowPulldownMenu_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.LMouseUp
// (Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::LMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.LMouseUp");

	UUWindowPulldownMenu_LMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.MouseMove");

	UUWindowPulldownMenu_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.ShowWindow
// (Final, Latent, Net, Exec, Native, Event, Static, Const)

void UUWindowPulldownMenu::STATIC_ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.ShowWindow");

	UUWindowPulldownMenu_ShowWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.SetSelected
// (Final, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPulldownMenu::SetSelected(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.SetSelected");

	UUWindowPulldownMenu_SetSelected_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.PerformSelect
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPulldownMenuItem* NewSelected                    (Parm)

void UUWindowPulldownMenu::PerformSelect(class UUWindowPulldownMenuItem* NewSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.PerformSelect");

	UUWindowPulldownMenu_PerformSelect_Params params;
	params.NewSelected = NewSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.Select
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Native)
// Parameters:
// class UUWindowPulldownMenuItem* i                              (Parm)

void UUWindowPulldownMenu::Select(class UUWindowPulldownMenuItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.Select");

	UUWindowPulldownMenu_Select_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.DeSelect
// (Final, Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowPulldownMenu::DeSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.DeSelect");

	UUWindowPulldownMenu_DeSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowPulldownMenu::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.Clear");

	UUWindowPulldownMenu_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowPulldownMenu::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.Created");

	UUWindowPulldownMenu_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenu.AddMenuItem
// (Final, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// struct FString                 C                              (Parm, NeedCtorLink)
// class UTexture*                G                              (Parm)
// class UUWindowPulldownMenuItem* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPulldownMenuItem* UUWindowPulldownMenu::AddMenuItem(const struct FString& C, class UTexture* G)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenu.AddMenuItem");

	UUWindowPulldownMenu_AddMenuItem_Params params;
	params.C = C;
	params.G = G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPulldownMenuItem.GetMenuBar
// (Final, Iterator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMenuBar* UUWindowPulldownMenuItem::GetMenuBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenuItem.GetMenuBar");

	UUWindowPulldownMenuItem_GetMenuBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPulldownMenuItem.CloseUp
// (Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowPulldownMenuItem::CloseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenuItem.CloseUp");

	UUWindowPulldownMenuItem_CloseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenuItem.DeSelect
// (Final, Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowPulldownMenuItem::DeSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenuItem.DeSelect");

	UUWindowPulldownMenuItem_DeSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenuItem.SetCaption
// (Iterator, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 C                              (Parm, NeedCtorLink)

void UUWindowPulldownMenuItem::SetCaption(const struct FString& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenuItem.SetCaption");

	UUWindowPulldownMenuItem_SetCaption_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenuItem.Select
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Native)

void UUWindowPulldownMenuItem::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenuItem.Select");

	UUWindowPulldownMenuItem_Select_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPulldownMenuItem.CreateSubMenu
// (Final, Defined, PreOperator, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UClass*                  MenuClass                      (Parm)
// class UUWindowWindow*          InOwnerWindow                  (OptionalParm, Parm)
// class UUWindowPulldownMenu*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPulldownMenu* UUWindowPulldownMenuItem::CreateSubMenu(class UClass* MenuClass, class UUWindowWindow* InOwnerWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPulldownMenuItem.CreateSubMenu");

	UUWindowPulldownMenuItem_CreateSubMenu_Params params;
	params.MenuClass = MenuClass;
	params.InOwnerWindow = InOwnerWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBarItem.GetMenuBar
// (Final, Iterator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowMenuBar* UUWindowMenuBarItem::GetMenuBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.GetMenuBar");

	UUWindowMenuBarItem_GetMenuBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBarItem.CloseUp
// (Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowMenuBarItem::CloseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.CloseUp");

	UUWindowMenuBarItem_CloseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBarItem.Select
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Native)

void UUWindowMenuBarItem::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.Select");

	UUWindowMenuBarItem_Select_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBarItem.DeSelect
// (Final, Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowMenuBarItem::DeSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.DeSelect");

	UUWindowMenuBarItem_DeSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBarItem.CreateMenu
// (Defined, Iterator, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UClass*                  MenuClass                      (Parm)
// class UUWindowPulldownMenu*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPulldownMenu* UUWindowMenuBarItem::CreateMenu(class UClass* MenuClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.CreateMenu");

	UUWindowMenuBarItem_CreateMenu_Params params;
	params.MenuClass = MenuClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowMenuBarItem.SetCaption
// (Iterator, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 C                              (Parm, NeedCtorLink)

void UUWindowMenuBarItem::SetCaption(const struct FString& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.SetCaption");

	UUWindowMenuBarItem_SetCaption_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMenuBarItem.SetHelp
// (Defined, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// bool                           B                              (Parm)

void UUWindowMenuBarItem::SetHelp(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMenuBarItem.SetHelp");

	UUWindowMenuBarItem_SetHelp_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControl.DeleteTab
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlItem*  tab                            (Parm)

void UUWindowTabControl::DeleteTab(class UUWindowTabControlItem* tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.DeleteTab");

	UUWindowTabControl_DeleteTab_Params params;
	params.tab = tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControl.GetTab
// (Final, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UUWindowTabControlItem*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowTabControlItem* UUWindowTabControl::GetTab(const struct FString& Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.GetTab");

	UUWindowTabControl_GetTab_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowTabControl.GotoTab
// (Final, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlItem*  NewSelected                    (Parm)
// bool                           bByUser                        (OptionalParm, Parm)

void UUWindowTabControl::GotoTab(class UUWindowTabControlItem* NewSelected, bool bByUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.GotoTab");

	UUWindowTabControl_GotoTab_Params params;
	params.NewSelected = NewSelected;
	params.bByUser = bByUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControl.InsertTab
// (Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlItem*  BeforeTab                      (Parm)
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UUWindowTabControlItem*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowTabControlItem* UUWindowTabControl::InsertTab(class UUWindowTabControlItem* BeforeTab, const struct FString& Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.InsertTab");

	UUWindowTabControl_InsertTab_Params params;
	params.BeforeTab = BeforeTab;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowTabControl.AddTab
// (Final, Defined, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UUWindowTabControlItem*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowTabControlItem* UUWindowTabControl::AddTab(const struct FString& Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.AddTab");

	UUWindowTabControl_AddTab_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowTabControl.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControl::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.Paint");

	UUWindowTabControl_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControl.SetMultiLine
// (NetReliable, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           InMultiLine                    (Parm)

void UUWindowTabControl::SetMultiLine(bool InMultiLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.SetMultiLine");

	UUWindowTabControl_SetMultiLine_Params params;
	params.InMultiLine = InMultiLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControl.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControl::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.BeforePaint");

	UUWindowTabControl_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControl.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowTabControl::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControl.Created");

	UUWindowTabControl_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.FirstPage
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControlPage* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPageControlPage* UUWindowPageControl::FirstPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.FirstPage");

	UUWindowPageControl_FirstPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPageControl.GotoTab
// (Final, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlItem*  NewSelected                    (Parm)
// bool                           bByUser                        (OptionalParm, Parm)

void UUWindowPageControl::GotoTab(class UUWindowTabControlItem* NewSelected, bool bByUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.GotoTab");

	UUWindowPageControl_GotoTab_Params params;
	params.NewSelected = NewSelected;
	params.bByUser = bByUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowPageControl::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.Close");

	UUWindowPageControl_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.DeletePage
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControlPage* P                              (Parm)

void UUWindowPageControl::DeletePage(class UUWindowPageControlPage* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.DeletePage");

	UUWindowPageControl_DeletePage_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.GetPage
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UUWindowPageControlPage* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPageControlPage* UUWindowPageControl::GetPage(const struct FString& Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.GetPage");

	UUWindowPageControl_GetPage_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPageControl.InsertPage
// (Latent, PreOperator, Singular, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControlPage* BeforePage                     (Parm)
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UClass*                  PageClass                      (Parm)
// struct FName                   ObjectName                     (OptionalParm, Parm)
// class UUWindowPageControlPage* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPageControlPage* UUWindowPageControl::InsertPage(class UUWindowPageControlPage* BeforePage, const struct FString& Caption, class UClass* PageClass, const struct FName& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.InsertPage");

	UUWindowPageControl_InsertPage_Params params;
	params.BeforePage = BeforePage;
	params.Caption = Caption;
	params.PageClass = PageClass;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPageControl.AddPage
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Caption                        (Parm, NeedCtorLink)
// class UClass*                  PageClass                      (Parm)
// struct FName                   ObjectName                     (OptionalParm, Parm)
// class UUWindowPageControlPage* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPageControlPage* UUWindowPageControl::AddPage(const struct FString& Caption, class UClass* PageClass, const struct FName& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.AddPage");

	UUWindowPageControl_AddPage_Params params;
	params.Caption = Caption;
	params.PageClass = PageClass;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPageControl.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPageControl::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.Paint");

	UUWindowPageControl_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowPageControl::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.BeforePaint");

	UUWindowPageControl_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.GetDesiredDimensions
// (Defined, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUWindowPageControl::GetDesiredDimensions(float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.GetDesiredDimensions");

	UUWindowPageControl_GetDesiredDimensions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
	if (H != nullptr)
		*H = params.H;
}


// Function UWindow.UWindowPageControl.NotifyAfterLevelChange
// (Iterator, Singular, NetReliable, HasOptionalParms, Const)

void UUWindowPageControl::NotifyAfterLevelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.NotifyAfterLevelChange");

	UUWindowPageControl_NotifyAfterLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.NotifyBeforeLevelChange
// (Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUWindowPageControl::NotifyBeforeLevelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.NotifyBeforeLevelChange");

	UUWindowPageControl_NotifyBeforeLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.NotifyQuitUnreal
// (Final, Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUWindowPageControl::NotifyQuitUnreal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.NotifyQuitUnreal");

	UUWindowPageControl_NotifyQuitUnreal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControl.ResolutionChanged
// (Defined, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowPageControl::ResolutionChanged(float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControl.ResolutionChanged");

	UUWindowPageControl_ResolutionChanged_Params params;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageWindow.RightClickTab
// (Final, Defined, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowPageWindow::RightClickTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageWindow.RightClickTab");

	UUWindowPageWindow_RightClickTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlRightButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlRightButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlRightButton.LMouseDown");

	UUWindowTabControlRightButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlRightButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlRightButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlRightButton.BeforePaint");

	UUWindowTabControlRightButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlLeftButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlLeftButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlLeftButton.LMouseDown");

	UUWindowTabControlLeftButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlLeftButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlLeftButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlLeftButton.BeforePaint");

	UUWindowTabControlLeftButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.CheckMousePassThrough
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowTabControlTabArea::CheckMousePassThrough(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.CheckMousePassThrough");

	UUWindowTabControlTabArea_CheckMousePassThrough_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowTabControlTabArea.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// bool                           bShowText                      (Parm)

void UUWindowTabControlTabArea::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H, bool bShowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.DrawItem");

	UUWindowTabControlTabArea_DrawItem_Params params;
	params.C = C;
	params.item = item;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.bShowText = bShowText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.RMouseDown
// (Final, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlTabArea::RMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.RMouseDown");

	UUWindowTabControlTabArea_RMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlTabArea::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.MouseMove");

	UUWindowTabControlTabArea_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlTabArea::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.LMouseDown");

	UUWindowTabControlTabArea_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowTabControlTabArea::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.Paint");

	UUWindowTabControlTabArea_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.LayoutTabs
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowTabControlTabArea::LayoutTabs(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.LayoutTabs");

	UUWindowTabControlTabArea_LayoutTabs_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.SizeTabsMultiLine
// (Final, Iterator, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowTabControlTabArea::SizeTabsMultiLine(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.SizeTabsMultiLine");

	UUWindowTabControlTabArea_SizeTabsMultiLine_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.SizeTabsSingleLine
// (Iterator, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowTabControlTabArea::SizeTabsSingleLine(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.SizeTabsSingleLine");

	UUWindowTabControlTabArea_SizeTabsSingleLine_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlTabArea.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowTabControlTabArea::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlTabArea.Created");

	UUWindowTabControlTabArea_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHScrollbar::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.MouseMove");

	UUWindowHScrollbar_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowHScrollbar::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.Tick");

	UUWindowHScrollbar_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHScrollbar::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.LMouseDown");

	UUWindowHScrollbar_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHScrollbar::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.Paint");

	UUWindowHScrollbar_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHScrollbar::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.BeforePaint");

	UUWindowHScrollbar_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowHScrollbar::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.Created");

	UUWindowHScrollbar_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.CheckRange
// (Final, Defined, Iterator, Net, Exec, HasOptionalParms, Const)

void UUWindowHScrollbar::CheckRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.CheckRange");

	UUWindowHScrollbar_CheckRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.SetRange
// (Final, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          NewMinPos                      (Parm)
// float                          NewMaxPos                      (Parm)
// float                          NewMaxVisible                  (Parm)
// float                          NewScrollAmount                (OptionalParm, Parm)

void UUWindowHScrollbar::SetRange(float NewMinPos, float NewMaxPos, float NewMaxVisible, float NewScrollAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.SetRange");

	UUWindowHScrollbar_SetRange_Params params;
	params.NewMinPos = NewMinPos;
	params.NewMaxPos = NewMaxPos;
	params.NewMaxVisible = NewMaxVisible;
	params.NewScrollAmount = NewScrollAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHScrollbar.Scroll
// (Defined, Iterator, Latent, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowHScrollbar::Scroll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.Scroll");

	UUWindowHScrollbar_Scroll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowHScrollbar.Show
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          P                              (Parm)

void UUWindowHScrollbar::Show(float P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHScrollbar.Show");

	UUWindowHScrollbar_Show_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowVScrollbar::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.MouseMove");

	UUWindowVScrollbar_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowVScrollbar::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.Tick");

	UUWindowVScrollbar_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowVScrollbar::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.LMouseDown");

	UUWindowVScrollbar_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowVScrollbar::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.Paint");

	UUWindowVScrollbar_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowVScrollbar::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.BeforePaint");

	UUWindowVScrollbar_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowVScrollbar::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.Created");

	UUWindowVScrollbar_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.CheckRange
// (Final, Defined, Iterator, Net, Exec, HasOptionalParms, Const)

void UUWindowVScrollbar::CheckRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.CheckRange");

	UUWindowVScrollbar_CheckRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.SetRange
// (Final, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          NewMinPos                      (Parm)
// float                          NewMaxPos                      (Parm)
// float                          NewMaxVisible                  (Parm)
// float                          NewScrollAmount                (OptionalParm, Parm)

void UUWindowVScrollbar::SetRange(float NewMinPos, float NewMaxPos, float NewMaxVisible, float NewScrollAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.SetRange");

	UUWindowVScrollbar_SetRange_Params params;
	params.NewMinPos = NewMinPos;
	params.NewMaxPos = NewMaxPos;
	params.NewMaxVisible = NewMaxVisible;
	params.NewScrollAmount = NewScrollAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowVScrollbar.Scroll
// (Defined, Iterator, Latent, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowVScrollbar::Scroll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.Scroll");

	UUWindowVScrollbar_Scroll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowVScrollbar.Show
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          P                              (Parm)

void UUWindowVScrollbar::Show(float P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowVScrollbar.Show");

	UUWindowVScrollbar_Show_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBRightButton.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowSBRightButton::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBRightButton.Tick");

	UUWindowSBRightButton_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBRightButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBRightButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBRightButton.LMouseDown");

	UUWindowSBRightButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBRightButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBRightButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBRightButton.BeforePaint");

	UUWindowSBRightButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBRightButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSBRightButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBRightButton.Created");

	UUWindowSBRightButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBLeftButton.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowSBLeftButton::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBLeftButton.Tick");

	UUWindowSBLeftButton_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBLeftButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBLeftButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBLeftButton.LMouseDown");

	UUWindowSBLeftButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBLeftButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBLeftButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBLeftButton.BeforePaint");

	UUWindowSBLeftButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBLeftButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSBLeftButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBLeftButton.Created");

	UUWindowSBLeftButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBDownButton.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowSBDownButton::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBDownButton.Tick");

	UUWindowSBDownButton_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBDownButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBDownButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBDownButton.LMouseDown");

	UUWindowSBDownButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBDownButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBDownButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBDownButton.BeforePaint");

	UUWindowSBDownButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBDownButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSBDownButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBDownButton.Created");

	UUWindowSBDownButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBUpButton.Tick
// (PreOperator, Net, Simulated)
// Parameters:
// float                          Delta                          (Parm)

void UUWindowSBUpButton::Tick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBUpButton.Tick");

	UUWindowSBUpButton_Tick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBUpButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBUpButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBUpButton.LMouseDown");

	UUWindowSBUpButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBUpButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSBUpButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBUpButton.BeforePaint");

	UUWindowSBUpButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSBUpButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSBUpButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSBUpButton.Created");

	UUWindowSBUpButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetDelayedNotify
// (Final, Iterator, PreOperator, Net, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bDelayedNotify                 (Parm)

void UUWindowEditControl::SetDelayedNotify(bool bDelayedNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetDelayedNotify");

	UUWindowEditControl_SetDelayedNotify_Params params;
	params.bDelayedNotify = bDelayedNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditControl::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.BeforePaint");

	UUWindowEditControl_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditControl::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.Paint");

	UUWindowEditControl_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetMaxLength
// (Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            maxLength                      (Parm)

void UUWindowEditControl::STATIC_SetMaxLength(int maxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetMaxLength");

	UUWindowEditControl_SetMaxLength_Params params;
	params.maxLength = maxLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetValue
// (Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NewValue                       (Parm, NeedCtorLink)

void UUWindowEditControl::STATIC_SetValue(const struct FString& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetValue");

	UUWindowEditControl_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.GetValue
// (Final, Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowEditControl::STATIC_GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.GetValue");

	UUWindowEditControl_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditControl.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowEditControl::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.Clear");

	UUWindowEditControl_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetEditTextColor
// (Iterator, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FColor                  NewColor                       (Parm)

void UUWindowEditControl::SetEditTextColor(const struct FColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetEditTextColor");

	UUWindowEditControl_SetEditTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetHistory
// (PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bInHistory                     (Parm)

void UUWindowEditControl::SetHistory(bool bInHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetHistory");

	UUWindowEditControl_SetHistory_Params params;
	params.bInHistory = bInHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetFont
// (Final, Defined, Iterator, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// int                            NewFont                        (Parm)

void UUWindowEditControl::SetFont(int NewFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetFont");

	UUWindowEditControl_SetFont_Params params;
	params.NewFont = NewFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetNumericFloat
// (Iterator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bNumericFloat                  (Parm)

void UUWindowEditControl::SetNumericFloat(bool bNumericFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetNumericFloat");

	UUWindowEditControl_SetNumericFloat_Params params;
	params.bNumericFloat = bNumericFloat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.SetNumericOnly
// (Final, Defined, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bNumericOnly                   (Parm)

void UUWindowEditControl::SetNumericOnly(bool bNumericOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.SetNumericOnly");

	UUWindowEditControl_SetNumericOnly_Params params;
	params.bNumericOnly = bNumericOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditControl.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowEditControl::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditControl.Created");

	UUWindowEditControl_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.FocusOtherWindow
// (Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowComboList::FocusOtherWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.FocusOtherWindow");

	UUWindowComboList_FocusOtherWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.CloseUp
// (Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowComboList::CloseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.CloseUp");

	UUWindowComboList_CloseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.ExecuteItem
// (Final, Defined, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboListItem*   i                              (Parm)

void UUWindowComboList::ExecuteItem(class UUWindowComboListItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.ExecuteItem");

	UUWindowComboList_ExecuteItem_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowComboList::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.DrawItem");

	UUWindowComboList_DrawItem_Params params;
	params.C = C;
	params.item = item;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.DrawMenuBackground
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUWindowComboList::DrawMenuBackground(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.DrawMenuBackground");

	UUWindowComboList_DrawMenuBackground_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboList::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.Paint");

	UUWindowComboList_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboList::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.BeforePaint");

	UUWindowComboList_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboList::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.LMouseDown");

	UUWindowComboList_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.LMouseUp
// (Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboList::LMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.LMouseUp");

	UUWindowComboList_LMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboList::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.MouseMove");

	UUWindowComboList_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.SetSelected
// (Final, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboList::SetSelected(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.SetSelected");

	UUWindowComboList_SetSelected_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.InsertItem
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 Value                          (Parm, NeedCtorLink)
// struct FString                 Value2                         (OptionalParm, Parm, NeedCtorLink)
// int                            SortWeight                     (OptionalParm, Parm)

void UUWindowComboList::InsertItem(const struct FString& Value, const struct FString& Value2, int SortWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.InsertItem");

	UUWindowComboList_InsertItem_Params params;
	params.Value = Value;
	params.Value2 = Value2;
	params.SortWeight = SortWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.AddItem
// (Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 Value                          (Parm, NeedCtorLink)
// struct FString                 Value2                         (OptionalParm, Parm, NeedCtorLink)
// int                            SortWeight                     (OptionalParm, Parm)

void UUWindowComboList::STATIC_AddItem(const struct FString& Value, const struct FString& Value2, int SortWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.AddItem");

	UUWindowComboList_AddItem_Params params;
	params.Value = Value;
	params.Value2 = Value2;
	params.SortWeight = SortWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.GetItemValue2
// (Final, Defined, Iterator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowComboList::GetItemValue2(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.GetItemValue2");

	UUWindowComboList_GetItemValue2_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboList.RemoveItem
// (Final, Iterator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Index                          (Parm)

void UUWindowComboList::RemoveItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.RemoveItem");

	UUWindowComboList_RemoveItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.GetItemValue
// (Defined, Iterator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowComboList::GetItemValue(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.GetItemValue");

	UUWindowComboList_GetItemValue_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboList.FindItemIndex2
// (Iterator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Value2                         (Parm, NeedCtorLink)
// bool                           bIgnoreCase                    (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowComboList::FindItemIndex2(const struct FString& Value2, bool bIgnoreCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.FindItemIndex2");

	UUWindowComboList_FindItemIndex2_Params params;
	params.Value2 = Value2;
	params.bIgnoreCase = bIgnoreCase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboList.FindItemIndex
// (Final, Iterator, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 Value                          (Parm, NeedCtorLink)
// bool                           bIgnoreCase                    (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowComboList::FindItemIndex(const struct FString& Value, bool bIgnoreCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.FindItemIndex");

	UUWindowComboList_FindItemIndex_Params params;
	params.Value = Value;
	params.bIgnoreCase = bIgnoreCase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboList.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowComboList::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.Created");

	UUWindowComboList_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.Setup
// (Defined, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowComboList::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.Setup");

	UUWindowComboList_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.GetLookAndFeelTexture
// (Final, Defined, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UUWindowComboList::GetLookAndFeelTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.GetLookAndFeelTexture");

	UUWindowComboList_GetLookAndFeelTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboList.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowComboList::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.Clear");

	UUWindowComboList_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.WindowShown
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowComboList::WindowShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.WindowShown");

	UUWindowComboList_WindowShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboList.Sort
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)

void UUWindowComboList::Sort()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboList.Sort");

	UUWindowComboList_Sort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowCheckbox.LMouseUp
// (Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowCheckbox::LMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowCheckbox.LMouseUp");

	UUWindowCheckbox_LMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowCheckbox.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowCheckbox::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowCheckbox.Paint");

	UUWindowCheckbox_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowCheckbox.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowCheckbox::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowCheckbox.BeforePaint");

	UUWindowCheckbox_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboRightButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboRightButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboRightButton.LMouseDown");

	UUWindowComboRightButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboRightButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboRightButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboRightButton.BeforePaint");

	UUWindowComboRightButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboLeftButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboLeftButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboLeftButton.LMouseDown");

	UUWindowComboLeftButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboLeftButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboLeftButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboLeftButton.BeforePaint");

	UUWindowComboLeftButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboButton.FocusOtherWindow
// (Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowComboButton::FocusOtherWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboButton.FocusOtherWindow");

	UUWindowComboButton_FocusOtherWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboButton.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboButton::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboButton.Click");

	UUWindowComboButton_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboButton.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboButton::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboButton.LMouseDown");

	UUWindowComboButton_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboButton.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboButton::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboButton.BeforePaint");

	UUWindowComboButton_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.FocusOtherWindow
// (Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowComboControl::FocusOtherWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.FocusOtherWindow");

	UUWindowComboControl_FocusOtherWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowComboControl::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.Clear");

	UUWindowComboControl_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.ClearValue
// (Iterator, Singular, Net, Exec, Operator, Static, Const)

void UUWindowComboControl::STATIC_ClearValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.ClearValue");

	UUWindowComboControl_ClearValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.Sort
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)

void UUWindowComboControl::Sort()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.Sort");

	UUWindowComboControl_Sort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.DropDown
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowComboControl::DropDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.DropDown");

	UUWindowComboControl_DropDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.CloseUp
// (Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)

void UUWindowComboControl::CloseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.CloseUp");

	UUWindowComboControl_CloseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboControl::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.BeforePaint");

	UUWindowComboControl_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.InsertItem
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// struct FString                 S2                             (OptionalParm, Parm, NeedCtorLink)
// int                            SortWeight                     (OptionalParm, Parm)

void UUWindowComboControl::InsertItem(const struct FString& S, const struct FString& S2, int SortWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.InsertItem");

	UUWindowComboControl_InsertItem_Params params;
	params.S = S;
	params.S2 = S2;
	params.SortWeight = SortWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.AddItem
// (Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// struct FString                 S2                             (OptionalParm, Parm, NeedCtorLink)
// int                            SortWeight                     (OptionalParm, Parm)

void UUWindowComboControl::STATIC_AddItem(const struct FString& S, const struct FString& S2, int SortWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.AddItem");

	UUWindowComboControl_AddItem_Params params;
	params.S = S;
	params.S2 = S2;
	params.SortWeight = SortWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowComboControl::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.Paint");

	UUWindowComboControl_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetMaxLength
// (Latent, Singular, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// int                            maxLength                      (Parm)

void UUWindowComboControl::STATIC_SetMaxLength(int maxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetMaxLength");

	UUWindowComboControl_SetMaxLength_Params params;
	params.maxLength = maxLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetValue
// (Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NewValue                       (Parm, NeedCtorLink)
// struct FString                 NewValue2                      (OptionalParm, Parm, NeedCtorLink)

void UUWindowComboControl::STATIC_SetValue(const struct FString& NewValue, const struct FString& NewValue2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetValue");

	UUWindowComboControl_SetValue_Params params;
	params.NewValue = NewValue;
	params.NewValue2 = NewValue2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.GetValue2
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowComboControl::GetValue2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.GetValue2");

	UUWindowComboControl_GetValue2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboControl.GetValue
// (Final, Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowComboControl::STATIC_GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.GetValue");

	UUWindowComboControl_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboControl.SetSelectedIndex
// (Final, Defined, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            Index                          (Parm)

void UUWindowComboControl::STATIC_SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetSelectedIndex");

	UUWindowComboControl_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.GetSelectedIndex
// (Defined, Iterator, PreOperator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowComboControl::STATIC_GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.GetSelectedIndex");

	UUWindowComboControl_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboControl.SetEditable
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bNewCanEdit                    (Parm)

void UUWindowComboControl::STATIC_SetEditable(bool bNewCanEdit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetEditable");

	UUWindowComboControl_SetEditable_Params params;
	params.bNewCanEdit = bNewCanEdit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetEditTextColor
// (Iterator, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FColor                  NewColor                       (Parm)

void UUWindowComboControl::SetEditTextColor(const struct FColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetEditTextColor");

	UUWindowComboControl_SetEditTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetFont
// (Final, Defined, Iterator, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// int                            NewFont                        (Parm)

void UUWindowComboControl::SetFont(int NewFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetFont");

	UUWindowComboControl_SetFont_Params params;
	params.NewFont = NewFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetNumericFloat
// (Iterator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bNumericFloat                  (Parm)

void UUWindowComboControl::SetNumericFloat(bool bNumericFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetNumericFloat");

	UUWindowComboControl_SetNumericFloat_Params params;
	params.bNumericFloat = bNumericFloat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetNumericOnly
// (Final, Defined, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bNumericOnly                   (Parm)

void UUWindowComboControl::SetNumericOnly(bool bNumericOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetNumericOnly");

	UUWindowComboControl_SetNumericOnly_Params params;
	params.bNumericOnly = bNumericOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowComboControl::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.Close");

	UUWindowComboControl_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.FindItemIndex2
// (Iterator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 v2                             (Parm, NeedCtorLink)
// bool                           bIgnoreCase                    (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowComboControl::FindItemIndex2(const struct FString& v2, bool bIgnoreCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.FindItemIndex2");

	UUWindowComboControl_FindItemIndex2_Params params;
	params.v2 = v2;
	params.bIgnoreCase = bIgnoreCase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboControl.RemoveItem
// (Final, Iterator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Index                          (Parm)

void UUWindowComboControl::RemoveItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.RemoveItem");

	UUWindowComboControl_RemoveItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.FindItemIndex
// (Final, Iterator, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 V                              (Parm, NeedCtorLink)
// bool                           bIgnoreCase                    (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowComboControl::FindItemIndex(const struct FString& V, bool bIgnoreCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.FindItemIndex");

	UUWindowComboControl_FindItemIndex_Params params;
	params.V = V;
	params.bIgnoreCase = bIgnoreCase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowComboControl.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// unsigned char                  E                              (Parm)

void UUWindowComboControl::Notify(unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.Notify");

	UUWindowComboControl_Notify_Params params;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.SetButtons
// (Final, Defined, Iterator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// bool                           bInButtons                     (Parm)

void UUWindowComboControl::SetButtons(bool bInButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.SetButtons");

	UUWindowComboControl_SetButtons_Params params;
	params.bInButtons = bInButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboControl.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowComboControl::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboControl.Created");

	UUWindowComboControl_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleClientWindow.Message
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// struct FString                 Msg                            (Parm, CoerceParm, NeedCtorLink)
// float                          MsgLife                        (Parm)

void UUWindowConsoleClientWindow::Message(const struct FString& Msg, float MsgLife)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleClientWindow.Message");

	UUWindowConsoleClientWindow_Message_Params params;
	params.Msg = Msg;
	params.MsgLife = MsgLife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleClientWindow.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowConsoleClientWindow::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleClientWindow.Paint");

	UUWindowConsoleClientWindow_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleClientWindow.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowConsoleClientWindow::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleClientWindow.BeforePaint");

	UUWindowConsoleClientWindow_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleClientWindow.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class UUWindowDialogControl*   C                              (Parm)
// unsigned char                  E                              (Parm)

void UUWindowConsoleClientWindow::Notify(class UUWindowDialogControl* C, unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleClientWindow.Notify");

	UUWindowConsoleClientWindow_Notify_Params params;
	params.C = C;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowConsoleClientWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowConsoleClientWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowConsoleClientWindow.Created");

	UUWindowConsoleClientWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxArea.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowMessageBoxArea::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxArea.Paint");

	UUWindowMessageBoxArea_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowMessageBoxArea.GetHeight
// (Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUWindowMessageBoxArea::GetHeight(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowMessageBoxArea.GetHeight");

	UUWindowMessageBoxArea_GetHeight_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowTabControlItem.RightClickTab
// (Final, Defined, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowTabControlItem::RightClickTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlItem.RightClickTab");

	UUWindowTabControlItem_RightClickTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowTabControlItem.SetCaption
// (Iterator, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 NewCaption                     (Parm, NeedCtorLink)

void UUWindowTabControlItem::SetCaption(const struct FString& NewCaption)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowTabControlItem.SetCaption");

	UUWindowTabControlItem_SetCaption_Params params;
	params.NewCaption = NewCaption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowPageControlPage.NextPage
// (Final, Iterator, PreOperator, Simulated, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControlPage* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowPageControlPage* UUWindowPageControlPage::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControlPage.NextPage");

	UUWindowPageControlPage_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowPageControlPage.RightClickTab
// (Final, Defined, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)

void UUWindowPageControlPage::RightClickTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowPageControlPage.RightClickTab");

	UUWindowPageControlPage_RightClickTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.KeyFocusExit
// (Defined, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowEditBox::KeyFocusExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.KeyFocusExit");

	UUWindowEditBox_KeyFocusExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.DoubleClick
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditBox::DoubleClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.DoubleClick");

	UUWindowEditBox_DoubleClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.KeyFocusEnter
// (Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowEditBox::KeyFocusEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.KeyFocusEnter");

	UUWindowEditBox_KeyFocusEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.FocusOtherWindow
// (Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)

void UUWindowEditBox::FocusOtherWindow(class UUWindowWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.FocusOtherWindow");

	UUWindowEditBox_FocusOtherWindow_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.Close
// (Final, PreOperator, Singular, Net, Simulated, Native)
// Parameters:
// bool                           bByParent                      (OptionalParm, Parm)

void UUWindowEditBox::Close(bool bByParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Close");

	UUWindowEditBox_Close_Params params;
	params.bByParent = bByParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditBox::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Paint");

	UUWindowEditBox_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditBox::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.LMouseDown");

	UUWindowEditBox_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditBox::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Click");

	UUWindowEditBox_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditBox::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.KeyDown");

	UUWindowEditBox_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.KeyUp
// (Defined, Iterator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowEditBox::KeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.KeyUp");

	UUWindowEditBox_KeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.KeyPressed
// (Final, PreOperator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)

void UUWindowEditBox::KeyPressed(int Key, float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.KeyPressed");

	UUWindowEditBox_KeyPressed_Params params;
	params.Key = Key;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.EditCut
// (Net, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowEditBox::EditCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.EditCut");

	UUWindowEditBox_EditCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.EditPaste
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowEditBox::EditPaste()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.EditPaste");

	UUWindowEditBox_EditPaste_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.EditCopy
// (Final, Latent, NetReliable, Exec, HasOptionalParms, Const)

void UUWindowEditBox::EditCopy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.EditCopy");

	UUWindowEditBox_EditCopy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.MoveEnd
// (Defined, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::MoveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.MoveEnd");

	UUWindowEditBox_MoveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.MoveHome
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::MoveHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.MoveHome");

	UUWindowEditBox_MoveHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.WordRight
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::WordRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.WordRight");

	UUWindowEditBox_WordRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.MoveRight
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::MoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.MoveRight");

	UUWindowEditBox_MoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.MoveLeft
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::MoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.MoveLeft");

	UUWindowEditBox_MoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.WordLeft
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::WordLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.WordLeft");

	UUWindowEditBox_WordLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.Delete
// (Final, Latent, Singular, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::STATIC_Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Delete");

	UUWindowEditBox_Delete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.Backspace
// (Defined, Iterator, Latent, Native, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::STATIC_Backspace()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Backspace");

	UUWindowEditBox_Backspace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.Insert
// (Final, Defined, Iterator, Net, Simulated, Exec)
// Parameters:
// unsigned char                  C                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowEditBox::Insert(unsigned char C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Insert");

	UUWindowEditBox_Insert_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.InsertText
// (Final, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void UUWindowEditBox::InsertText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.InsertText");

	UUWindowEditBox_InsertText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// unsigned char                  E                              (Parm)

void UUWindowEditBox::Notify(unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Notify");

	UUWindowEditBox_Notify_Params params;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.GetValue2
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowEditBox::GetValue2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.GetValue2");

	UUWindowEditBox_GetValue2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.GetValue
// (Final, Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUWindowEditBox::STATIC_GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.GetValue");

	UUWindowEditBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowEditBox.SelectAll
// (Final, PreOperator, Singular, Net, Exec, HasOptionalParms, Const)

void UUWindowEditBox::SelectAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.SelectAll");

	UUWindowEditBox_SelectAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowEditBox::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Clear");

	UUWindowEditBox_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.SetValue
// (Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 NewValue                       (Parm, NeedCtorLink)
// struct FString                 NewValue2                      (OptionalParm, Parm, NeedCtorLink)

void UUWindowEditBox::STATIC_SetValue(const struct FString& NewValue, const struct FString& NewValue2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.SetValue");

	UUWindowEditBox_SetValue_Params params;
	params.NewValue = NewValue;
	params.NewValue2 = NewValue2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.SetEditable
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Operator, Static, Const)
// Parameters:
// bool                           bEditable                      (Parm)

void UUWindowEditBox::STATIC_SetEditable(bool bEditable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.SetEditable");

	UUWindowEditBox_SetEditable_Params params;
	params.bEditable = bEditable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.SetHistory
// (PreOperator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// bool                           bInHistory                     (Parm)

void UUWindowEditBox::SetHistory(bool bInHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.SetHistory");

	UUWindowEditBox_SetHistory_Params params;
	params.bInHistory = bInHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowEditBox.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowEditBox::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowEditBox.Created");

	UUWindowEditBox_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowComboListItem.Compare
// (Iterator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            t                              (Parm)
// class UUWindowList*            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowComboListItem::Compare(class UUWindowList* t, class UUWindowList* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowComboListItem.Compare");

	UUWindowComboListItem_Compare_Params params;
	params.t = t;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDynamicTextArea.RemoveWrap
// (Defined, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowDynamicTextRow*  L                              (Parm)

void UUWindowDynamicTextArea::RemoveWrap(class UUWindowDynamicTextRow* L)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.RemoveWrap");

	UUWindowDynamicTextArea_RemoveWrap_Params params;
	params.L = L;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.RemoveNextWord
// (Final, Defined, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, NeedCtorLink)
// struct FString                 NextWord                       (Parm, OutParm, NeedCtorLink)

void UUWindowDynamicTextArea::RemoveNextWord(struct FString* Text, struct FString* NextWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.RemoveNextWord");

	UUWindowDynamicTextArea_RemoveNextWord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (NextWord != nullptr)
		*NextWord = params.NextWord;
}


// Function UWindow.UWindowDynamicTextArea.SplitRowAt
// (Defined, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowDynamicTextRow*  L                              (Parm)
// int                            SplitPos                       (Parm)
// class UUWindowDynamicTextRow*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowDynamicTextRow* UUWindowDynamicTextArea::SplitRowAt(class UUWindowDynamicTextRow* L, int SplitPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.SplitRowAt");

	UUWindowDynamicTextArea_SplitRowAt_Params params;
	params.L = L;
	params.SplitPos = SplitPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDynamicTextArea.GetWrapPos
// (Final, Iterator, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowDynamicTextRow*  L                              (Parm)
// float                          MaxWidth                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUWindowDynamicTextArea::GetWrapPos(class UCanvas* C, class UUWindowDynamicTextRow* L, float MaxWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.GetWrapPos");

	UUWindowDynamicTextArea_GetWrapPos_Params params;
	params.C = C;
	params.L = L;
	params.MaxWidth = MaxWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDynamicTextArea.DrawTextLine
// (Defined, Iterator, Latent, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowDynamicTextRow*  L                              (Parm)
// float                          Y                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUWindowDynamicTextArea::DrawTextLine(class UCanvas* C, class UUWindowDynamicTextRow* L, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.DrawTextLine");

	UUWindowDynamicTextArea_DrawTextLine_Params params;
	params.C = C;
	params.L = L;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDynamicTextArea.WrapRow
// (Final, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowDynamicTextRow*  L                              (Parm)

void UUWindowDynamicTextArea::WrapRow(class UCanvas* C, class UUWindowDynamicTextRow* L)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.WrapRow");

	UUWindowDynamicTextArea_WrapRow_Params params;
	params.C = C;
	params.L = L;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.WordWrap
// (NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// bool                           bForce                         (Parm)

void UUWindowDynamicTextArea::WordWrap(class UCanvas* C, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.WordWrap");

	UUWindowDynamicTextArea_WordWrap_Params params;
	params.C = C;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.CheckMaxRows
// (Defined, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowDynamicTextRow*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowDynamicTextRow* UUWindowDynamicTextArea::CheckMaxRows()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.CheckMaxRows");

	UUWindowDynamicTextArea_CheckMaxRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDynamicTextArea.AddText
// (Defined, Net, Exec, HasOptionalParms, Const)
// Parameters:
// struct FString                 NewLine                        (Parm, NeedCtorLink)
// class UUWindowDynamicTextRow*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowDynamicTextRow* UUWindowDynamicTextArea::AddText(const struct FString& NewLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.AddText");

	UUWindowDynamicTextArea_AddText_Params params;
	params.NewLine = NewLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowDynamicTextArea.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)

void UUWindowDynamicTextArea::Paint(class UCanvas* C, float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.Paint");

	UUWindowDynamicTextArea_Paint_Params params;
	params.C = C;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowDynamicTextArea::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.BeforePaint");

	UUWindowDynamicTextArea_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.TextAreaTextSize
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUWindowDynamicTextArea::TextAreaTextSize(class UCanvas* C, const struct FString& Text, float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.TextAreaTextSize");

	UUWindowDynamicTextArea_TextAreaTextSize_Params params;
	params.C = C;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
	if (H != nullptr)
		*H = params.H;
}


// Function UWindow.UWindowDynamicTextArea.TextAreaClipText
// (Defined, Latent, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          DrawX                          (Parm)
// float                          DrawY                          (Parm)
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// bool                           bCheckHotKey                   (OptionalParm, Parm)

void UUWindowDynamicTextArea::TextAreaClipText(class UCanvas* C, float DrawX, float DrawY, const struct FString& S, bool bCheckHotKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.TextAreaClipText");

	UUWindowDynamicTextArea_TextAreaClipText_Params params;
	params.C = C;
	params.DrawX = DrawX;
	params.DrawY = DrawY;
	params.S = S;
	params.bCheckHotKey = bCheckHotKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.SetTextColor
// (Final, Latent, PreOperator, Singular, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FColor                  C                              (Parm)

void UUWindowDynamicTextArea::STATIC_SetTextColor(const struct FColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.SetTextColor");

	UUWindowDynamicTextArea_SetTextColor_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.SetFont
// (Final, Defined, Iterator, Latent, NetReliable, HasOptionalParms, Const)
// Parameters:
// int                            f                              (Parm)

void UUWindowDynamicTextArea::SetFont(int f)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.SetFont");

	UUWindowDynamicTextArea_SetFont_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.SetAbsoluteFont
// (Final, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UFont*                   f                              (Parm)

void UUWindowDynamicTextArea::SetAbsoluteFont(class UFont* f)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.SetAbsoluteFont");

	UUWindowDynamicTextArea_SetAbsoluteFont_Params params;
	params.f = f;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.Clear
// (Final, Singular, NetReliable, Simulated, Native, Event)

void UUWindowDynamicTextArea::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.Clear");

	UUWindowDynamicTextArea_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowDynamicTextArea.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowDynamicTextArea::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowDynamicTextArea.Created");

	UUWindowDynamicTextArea_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallCloseButton.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowSmallCloseButton::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallCloseButton.Click");

	UUWindowSmallCloseButton_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallCloseButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSmallCloseButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallCloseButton.Created");

	UUWindowSmallCloseButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.KeyUp
// (Defined, Iterator, Singular, Net, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowListBox::KeyUp(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.KeyUp");

	UUWindowListBox_KeyUp_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUWindowListBox::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.DrawItem");

	UUWindowListBox_DrawItem_Params params;
	params.C = C;
	params.item = item;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.ExternalDragOver
// (Final, Defined, Iterator, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowDialogControl*   ExternalControl                (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUWindowListBox::ExternalDragOver(class UUWindowDialogControl* ExternalControl, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.ExternalDragOver");

	UUWindowListBox_ExternalDragOver_Params params;
	params.ExternalControl = ExternalControl;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowListBox.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowListBox::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.MouseMove");

	UUWindowListBox_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.DoubleClickItem
// (Final, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowListBoxItem*     i                              (Parm)

void UUWindowListBox::DoubleClickItem(class UUWindowListBoxItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.DoubleClickItem");

	UUWindowListBox_DoubleClickItem_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.ReceiveDoubleClickItem
// (Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowListBox*         L                              (Parm)
// class UUWindowListBoxItem*     i                              (Parm)

void UUWindowListBox::ReceiveDoubleClickItem(class UUWindowListBox* L, class UUWindowListBoxItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.ReceiveDoubleClickItem");

	UUWindowListBox_ReceiveDoubleClickItem_Params params;
	params.L = L;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.DoubleClick
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowListBox::DoubleClick(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.DoubleClick");

	UUWindowListBox_DoubleClick_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowListBox::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.LMouseDown");

	UUWindowListBox_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.SetSelected
// (Final, Iterator, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowListBox::SetSelected(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.SetSelected");

	UUWindowListBox_SetSelected_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.SetSelectedItem
// (Final, PreOperator, Net, Exec, HasOptionalParms, Const)
// Parameters:
// class UUWindowListBoxItem*     NewSelected                    (Parm)

void UUWindowListBox::SetSelectedItem(class UUWindowListBoxItem* NewSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.SetSelectedItem");

	UUWindowListBox_SetSelectedItem_Params params;
	params.NewSelected = NewSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.MakeSelectedVisible
// (Final, Defined, NetReliable, Simulated, Exec, HasOptionalParms, Const)

void UUWindowListBox::MakeSelectedVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.MakeSelectedVisible");

	UUWindowListBox_MakeSelectedVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.GetItemAt
// (Final, Latent, Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)
// class UUWindowListBoxItem*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowListBoxItem* UUWindowListBox::GetItemAt(float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.GetItemAt");

	UUWindowListBox_GetItemAt_Params params;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowListBox.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUWindowListBox::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.Resized");

	UUWindowListBox_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)

void UUWindowListBox::Paint(class UCanvas* C, float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.Paint");

	UUWindowListBox_Paint_Params params;
	params.C = C;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.Sort
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)

void UUWindowListBox::Sort()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.Sort");

	UUWindowListBox_Sort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.SetHelpText
// (Latent, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// struct FString                 t                              (Parm, NeedCtorLink)

void UUWindowListBox::SetHelpText(const struct FString& t)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.SetHelpText");

	UUWindowListBox_SetHelpText_Params params;
	params.t = t;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)

void UUWindowListBox::BeforePaint(class UCanvas* C, float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.BeforePaint");

	UUWindowListBox_BeforePaint_Params params;
	params.C = C;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowListBox.AddItem
// (Defined, Iterator, Net, Exec, Native, Event, Static, Const)
// Parameters:
// struct FString                 C                              (Parm, NeedCtorLink)
// class UUWindowListBoxItem*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UUWindowListBoxItem* UUWindowListBox::STATIC_AddItem(const struct FString& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.AddItem");

	UUWindowListBox_AddItem_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowListBox.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowListBox::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowListBox.Created");

	UUWindowListBox_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowSmallOKButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowSmallOKButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowSmallOKButton.Created");

	UUWindowSmallOKButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.KeyDown
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// int                            Key                            (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHSliderControl::KeyDown(int Key, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.KeyDown");

	UUWindowHSliderControl_KeyDown_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.MouseMove
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHSliderControl::MouseMove(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.MouseMove");

	UUWindowHSliderControl_MouseMove_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHSliderControl::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.LMouseDown");

	UUWindowHSliderControl_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.LMouseUp
// (Net, Exec, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHSliderControl::LMouseUp(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.LMouseUp");

	UUWindowHSliderControl_LMouseUp_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHSliderControl::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.Paint");

	UUWindowHSliderControl_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUWindowHSliderControl::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.BeforePaint");

	UUWindowHSliderControl_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.CheckValue
// (Defined, Latent, NetReliable, Exec, HasOptionalParms, Const)
// Parameters:
// float                          test                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUWindowHSliderControl::CheckValue(float test)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.CheckValue");

	UUWindowHSliderControl_CheckValue_Params params;
	params.test = test;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowHSliderControl.SetValue
// (Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// float                          NewValue                       (Parm)
// bool                           bNoNotify                      (OptionalParm, Parm)

void UUWindowHSliderControl::STATIC_SetValue(float NewValue, bool bNoNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.SetValue");

	UUWindowHSliderControl_SetValue_Params params;
	params.NewValue = NewValue;
	params.bNoNotify = bNoNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.GetValue
// (Final, Defined, Iterator, Singular, Exec, Native, Event, Static, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUWindowHSliderControl::STATIC_GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.GetValue");

	UUWindowHSliderControl_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UWindow.UWindowHSliderControl.SetRange
// (Final, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          Min                            (Parm)
// float                          Max                            (Parm)
// int                            NewStep                        (Parm)

void UUWindowHSliderControl::SetRange(float Min, float Max, int NewStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.SetRange");

	UUWindowHSliderControl_SetRange_Params params;
	params.Min = Min;
	params.Max = Max;
	params.NewStep = NewStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UWindow.UWindowHSliderControl.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUWindowHSliderControl::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWindow.UWindowHSliderControl.Created");

	UUWindowHSliderControl_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

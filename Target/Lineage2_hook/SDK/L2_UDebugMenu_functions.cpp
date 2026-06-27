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

// Function UDebugMenu.UDebugRootWindow.KeyEvent
// (Final, Iterator, PreOperator, Singular, Simulated, Exec)
// Parameters:
// TEnumAsByte<EInputKey>         Key                            (Parm, OutParm)
// TEnumAsByte<EInputAction>      Action                         (Parm, OutParm)
// float                          Delta                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDebugRootWindow::KeyEvent(float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugRootWindow.KeyEvent");

	UUDebugRootWindow_KeyEvent_Params params;
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


// Function UDebugMenu.UDebugRootWindow.DoQuitGame
// (Defined, Iterator, Singular, Simulated, HasOptionalParms, Const)

void UUDebugRootWindow::DoQuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugRootWindow.DoQuitGame");

	UUDebugRootWindow_DoQuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugRootWindow.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUDebugRootWindow::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugRootWindow.Resized");

	UUDebugRootWindow_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugRootWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugRootWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugRootWindow.Created");

	UUDebugRootWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.MenuItemSelected
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowBase*            Sender                         (Parm)
// class UUWindowBase*            item                           (Parm)

void UUDebugMenuBar::MenuItemSelected(class UUWindowBase* Sender, class UUWindowBase* item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.MenuItemSelected");

	UUDebugMenuBar_MenuItemSelected_Params params;
	params.Sender = Sender;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          MouseX                         (Parm)
// float                          MouseY                         (Parm)

void UUDebugMenuBar::Paint(class UCanvas* C, float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.Paint");

	UUDebugMenuBar_Paint_Params params;
	params.C = C;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.WindowEvent
// (Final, Iterator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)

void UUDebugMenuBar::WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.WindowEvent");

	UUDebugMenuBar_WindowEvent_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.MenuCmd
// (Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// int                            Menu                           (Parm)
// int                            item                           (Parm)

void UUDebugMenuBar::MenuCmd(int Menu, int item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.MenuCmd");

	UUDebugMenuBar_MenuCmd_Params params;
	params.Menu = Menu;
	params.item = item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.NotifyAfterLevelChange
// (Iterator, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugMenuBar::NotifyAfterLevelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.NotifyAfterLevelChange");

	UUDebugMenuBar_NotifyAfterLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.NotifyBeforeLevelChange
// (Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugMenuBar::NotifyBeforeLevelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.NotifyBeforeLevelChange");

	UUDebugMenuBar_NotifyBeforeLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.NotifyQuitUnreal
// (Final, Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugMenuBar::NotifyQuitUnreal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.NotifyQuitUnreal");

	UUDebugMenuBar_NotifyQuitUnreal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.LMouseDown
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugMenuBar::LMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.LMouseDown");

	UUDebugMenuBar_LMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.DrawMenuBar
// (Final, Defined, Latent, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)

void UUDebugMenuBar::DrawMenuBar(class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.DrawMenuBar");

	UUDebugMenuBar_DrawMenuBar_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUDebugMenuBar::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.DrawItem");

	UUDebugMenuBar_DrawItem_Params params;
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


// Function UDebugMenu.UDebugMenuBar.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugMenuBar::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.BeforePaint");

	UUDebugMenuBar_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.ShowHelpItem
// (Final, Defined, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBarItem*     i                              (Parm)

void UUDebugMenuBar::ShowHelpItem(class UUWindowMenuBarItem* i)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.ShowHelpItem");

	UUDebugMenuBar_ShowHelpItem_Params params;
	params.i = i;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.SetHelp
// (Defined, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 NewHelpText                    (Parm, NeedCtorLink)

void UUDebugMenuBar::SetHelp(const struct FString& NewHelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.SetHelp");

	UUDebugMenuBar_SetHelp_Params params;
	params.NewHelpText = NewHelpText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMenuBar.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugMenuBar::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMenuBar.Created");

	UUDebugMenuBar_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugMapListWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListWindow.Created");

	UUDebugMapListWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenWindow.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugOpenWindow::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenWindow.Paint");

	UUDebugOpenWindow_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenWindow.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugOpenWindow::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenWindow.BeforePaint");

	UUDebugOpenWindow_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenWindow.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUDebugOpenWindow::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenWindow.Resized");

	UUDebugOpenWindow_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenWindow.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugOpenWindow::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenWindow.Created");

	UUDebugOpenWindow_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.WindowEvent
// (Final, Iterator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EWinMessage>       Msg                            (Parm)
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            Key                            (Parm)

void UUDebugMapListCW::WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.WindowEvent");

	UUDebugMapListCW_WindowEvent_Params params;
	params.Msg = Msg;
	params.C = C;
	params.X = X;
	params.Y = Y;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class UUWindowDialogControl*   C                              (Parm)
// unsigned char                  E                              (Parm)

void UUDebugMapListCW::Notify(class UUWindowDialogControl* C, unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.Notify");

	UUDebugMapListCW_Notify_Params params;
	params.C = C;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.LoadMapList
// (Iterator, Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugMapListCW::LoadMapList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.LoadMapList");

	UUDebugMapListCW_LoadMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.Resized
// (Defined, PreOperator, NetReliable, HasOptionalParms, Const)

void UUDebugMapListCW::Resized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.Resized");

	UUDebugMapListCW_Resized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.Paint
// (Final, Defined, Iterator, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugMapListCW::Paint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.Paint");

	UUDebugMapListCW_Paint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugMapListCW::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.BeforePaint");

	UUDebugMapListCW_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapListCW.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugMapListCW::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListCW.Created");

	UUDebugMapListCW_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenCW.OpenURL
// (Defined, Iterator, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugOpenCW::OpenURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenCW.OpenURL");

	UUDebugOpenCW_OpenURL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenCW.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class UUWindowDialogControl*   C                              (Parm)
// unsigned char                  E                              (Parm)

void UUDebugOpenCW::Notify(class UUWindowDialogControl* C, unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenCW.Notify");

	UUDebugOpenCW_Notify_Params params;
	params.C = C;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugOpenCW.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugOpenCW::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugOpenCW.Created");

	UUDebugOpenCW_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.BrightnessChanged
// (Final, Iterator, Latent, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugVideoClient::BrightnessChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.BrightnessChanged");

	UUDebugVideoClient_BrightnessChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.MessageBoxDone
// (Iterator, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowMessageBox*      W                              (Parm)
// TEnumAsByte<EMessageBoxResult> Result                         (Parm)

void UUDebugVideoClient::MessageBoxDone(class UUWindowMessageBox* W, TEnumAsByte<EMessageBoxResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.MessageBoxDone");

	UUDebugVideoClient_MessageBoxDone_Params params;
	params.W = W;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.SettingsChanged
// (Final, Defined, Singular, NetReliable, HasOptionalParms, Const)

void UUDebugVideoClient::SettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.SettingsChanged");

	UUDebugVideoClient_SettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.Notify
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Event)
// Parameters:
// class UUWindowDialogControl*   C                              (Parm)
// unsigned char                  E                              (Parm)

void UUDebugVideoClient::Notify(class UUWindowDialogControl* C, unsigned char E)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.Notify");

	UUDebugVideoClient_Notify_Params params;
	params.C = C;
	params.E = E;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.BeforePaint
// (Final, Defined, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugVideoClient::BeforePaint(class UCanvas* C, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.BeforePaint");

	UUDebugVideoClient_BeforePaint_Params params;
	params.C = C;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.ResolutionChanged
// (Defined, Latent, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUDebugVideoClient::ResolutionChanged(float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.ResolutionChanged");

	UUDebugVideoClient_ResolutionChanged_Params params;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.LoadAvailableSettings
// (PreOperator, NetReliable, HasOptionalParms, Const)

void UUDebugVideoClient::LoadAvailableSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.LoadAvailableSettings");

	UUDebugVideoClient_LoadAvailableSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.AfterCreate
// (Final, Defined, Latent, PreOperator, Simulated, HasOptionalParms, Const)

void UUDebugVideoClient::AfterCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.AfterCreate");

	UUDebugVideoClient_AfterCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugVideoClient.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugVideoClient::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugVideoClient.Created");

	UUDebugVideoClient_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugMapList.FindMap
// (Final, Defined, Latent, PreOperator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// struct FString                 FindMapName                    (Parm, NeedCtorLink)
// class UUDebugMapList*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UUDebugMapList* UUDebugMapList::FindMap(const struct FString& FindMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapList.FindMap");

	UUDebugMapList_FindMap_Params params;
	params.FindMapName = FindMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDebugMenu.UDebugMapList.Compare
// (Iterator, Singular, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowList*            t                              (Parm)
// class UUWindowList*            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDebugMapList::Compare(class UUWindowList* t, class UUWindowList* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapList.Compare");

	UUDebugMapList_Compare_Params params;
	params.t = t;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDebugMenu.UDebugMapListBox.DrawItem
// (Final, PreOperator, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 C                              (Parm)
// class UUWindowList*            item                           (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)

void UUDebugMapListBox::DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugMapListBox.DrawItem");

	UUDebugMapListBox_DrawItem_Params params;
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


// Function UDebugMenu.UDebugSmallLoadMapButton.Click
// (Final, Latent, PreOperator, Simulated, HasOptionalParms, Const)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UUDebugSmallLoadMapButton::Click(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugSmallLoadMapButton.Click");

	UUDebugSmallLoadMapButton_Click_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugSmallLoadMapButton.Created
// (Final, Iterator, Latent, NetReliable, HasOptionalParms, Const)

void UUDebugSmallLoadMapButton::Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugSmallLoadMapButton.Created");

	UUDebugSmallLoadMapButton_Created_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.PlayMenuSound
// (Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowWindow*          W                              (Parm)
// TEnumAsByte<EMenuSound>        S                              (Parm)

void UUDebugBlueLookAndFeel::PlayMenuSound(class UUWindowWindow* W, TEnumAsByte<EMenuSound> S)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.PlayMenuSound");

	UUDebugBlueLookAndFeel_PlayMenuSound_Params params;
	params.W = W;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Button_DrawSmallButton
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSmallButton*     B                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Button_DrawSmallButton(class UUWindowSmallButton* B, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Button_DrawSmallButton");

	UUDebugBlueLookAndFeel_Button_DrawSmallButton_Params params;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawPulldownMenuItem
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

void UUDebugBlueLookAndFeel::Menu_DrawPulldownMenuItem(class UUWindowPulldownMenu* M, class UUWindowPulldownMenuItem* item, class UCanvas* C, float X, float Y, float W, float H, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawPulldownMenuItem");

	UUDebugBlueLookAndFeel_Menu_DrawPulldownMenuItem_Params params;
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


// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawPulldownMenuBackground
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPulldownMenu*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Menu_DrawPulldownMenuBackground(class UUWindowPulldownMenu* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawPulldownMenuBackground");

	UUDebugBlueLookAndFeel_Menu_DrawPulldownMenuBackground_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawMenuBarItem
// (PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         B                              (Parm)
// class UUWindowMenuBarItem*     i                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          W                              (Parm)
// float                          H                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Menu_DrawMenuBarItem(class UUWindowMenuBar* B, class UUWindowMenuBarItem* i, float X, float Y, float W, float H, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawMenuBarItem");

	UUDebugBlueLookAndFeel_Menu_DrawMenuBarItem_Params params;
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


// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawMenuBar
// (Final, Defined, Iterator, Latent, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowMenuBar*         W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Menu_DrawMenuBar(class UUWindowMenuBar* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawMenuBar");

	UUDebugBlueLookAndFeel_Menu_DrawMenuBar_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_GetTabSize
// (Defined, Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlTabArea* tab                            (Parm)
// class UCanvas*                 C                              (Parm)
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          W                              (Parm, OutParm)
// float                          H                              (Parm, OutParm)

void UUDebugBlueLookAndFeel::Tab_GetTabSize(class UUWindowTabControlTabArea* tab, class UCanvas* C, const struct FString& Text, float* W, float* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Tab_GetTabSize");

	UUDebugBlueLookAndFeel_Tab_GetTabSize_Params params;
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


// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_DrawTabPageArea
// (Defined, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControl*     W                              (Parm)
// class UCanvas*                 C                              (Parm)
// class UUWindowPageWindow*      P                              (Parm)

void UUDebugBlueLookAndFeel::Tab_DrawTabPageArea(class UUWindowPageControl* W, class UCanvas* C, class UUWindowPageWindow* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Tab_DrawTabPageArea");

	UUDebugBlueLookAndFeel_Tab_DrawTabPageArea_Params params;
	params.W = W;
	params.C = C;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetTabPageSize
// (Final, Defined, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowPageControl*     W                              (Parm)
// class UUWindowPageWindow*      P                              (Parm)

void UUDebugBlueLookAndFeel::Tab_SetTabPageSize(class UUWindowPageControl* W, class UUWindowPageWindow* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetTabPageSize");

	UUDebugBlueLookAndFeel_Tab_SetTabPageSize_Params params;
	params.W = W;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetupRightButton
// (Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlRightButton* W                              (Parm)

void UUDebugBlueLookAndFeel::Tab_SetupRightButton(class UUWindowTabControlRightButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetupRightButton");

	UUDebugBlueLookAndFeel_Tab_SetupRightButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetupLeftButton
// (Final, Iterator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowTabControlLeftButton* W                              (Parm)

void UUDebugBlueLookAndFeel::Tab_SetupLeftButton(class UUWindowTabControlLeftButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetupLeftButton");

	UUDebugBlueLookAndFeel_Tab_SetupLeftButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.SB_HDraw
// (Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowHScrollbar*      W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::SB_HDraw(class UUWindowHScrollbar* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.SB_HDraw");

	UUDebugBlueLookAndFeel_SB_HDraw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.SB_VDraw
// (Final, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowVScrollbar*      W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::SB_VDraw(class UUWindowVScrollbar* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.SB_VDraw");

	UUDebugBlueLookAndFeel_SB_VDraw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupRightButton
// (Defined, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBRightButton*   W                              (Parm)

void UUDebugBlueLookAndFeel::SB_SetupRightButton(class UUWindowSBRightButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupRightButton");

	UUDebugBlueLookAndFeel_SB_SetupRightButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupLeftButton
// (Final, Defined, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBLeftButton*    W                              (Parm)

void UUDebugBlueLookAndFeel::SB_SetupLeftButton(class UUWindowSBLeftButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupLeftButton");

	UUDebugBlueLookAndFeel_SB_SetupLeftButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupDownButton
// (Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBDownButton*    W                              (Parm)

void UUDebugBlueLookAndFeel::SB_SetupDownButton(class UUWindowSBDownButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupDownButton");

	UUDebugBlueLookAndFeel_SB_SetupDownButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupUpButton
// (Final, Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowSBUpButton*      W                              (Parm)

void UUDebugBlueLookAndFeel::SB_SetupUpButton(class UUWindowSBUpButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupUpButton");

	UUDebugBlueLookAndFeel_SB_SetupUpButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_DrawTab
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

void UUDebugBlueLookAndFeel::Tab_DrawTab(class UUWindowTabControlTabArea* tab, class UCanvas* C, bool bActiveTab, bool bLeftmostTab, float X, float Y, float W, float H, const struct FString& Text, bool bShowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Tab_DrawTab");

	UUDebugBlueLookAndFeel_Tab_DrawTab_Params params;
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


// Function UDebugMenu.UDebugBlueLookAndFeel.ControlFrame_Draw
// (Defined, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowControlFrame*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::ControlFrame_Draw(class UUWindowControlFrame* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.ControlFrame_Draw");

	UUDebugBlueLookAndFeel_ControlFrame_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.ControlFrame_SetupSizes
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowControlFrame*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::ControlFrame_SetupSizes(class UUWindowControlFrame* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.ControlFrame_SetupSizes");

	UUDebugBlueLookAndFeel_ControlFrame_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Editbox_Draw
// (Defined, Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowEditControl*     W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Editbox_Draw(class UUWindowEditControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Editbox_Draw");

	UUDebugBlueLookAndFeel_Editbox_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Editbox_SetupSizes
// (Final, Defined, Iterator, Latent, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowEditControl*     W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Editbox_SetupSizes(class UUWindowEditControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Editbox_SetupSizes");

	UUDebugBlueLookAndFeel_Editbox_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupRightButton
// (Final, Defined, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboRightButton* W                              (Parm)

void UUDebugBlueLookAndFeel::Combo_SetupRightButton(class UUWindowComboRightButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupRightButton");

	UUDebugBlueLookAndFeel_Combo_SetupRightButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupLeftButton
// (Iterator, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboLeftButton* W                              (Parm)

void UUDebugBlueLookAndFeel::Combo_SetupLeftButton(class UUWindowComboLeftButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupLeftButton");

	UUDebugBlueLookAndFeel_Combo_SetupLeftButton_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_GetButtonBitmaps
// (Final, Iterator, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboButton*     W                              (Parm)

void UUDebugBlueLookAndFeel::Combo_GetButtonBitmaps(class UUWindowComboButton* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Combo_GetButtonBitmaps");

	UUDebugBlueLookAndFeel_Combo_GetButtonBitmaps_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Checkbox_SetupSizes
// (Defined, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowCheckbox*        W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Checkbox_SetupSizes(class UUWindowCheckbox* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Checkbox_SetupSizes");

	UUDebugBlueLookAndFeel_Checkbox_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.ComboList_DrawItem
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

void UUDebugBlueLookAndFeel::ComboList_DrawItem(class UUWindowComboList* Combo, class UCanvas* C, float X, float Y, float W, float H, const struct FString& Text, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.ComboList_DrawItem");

	UUDebugBlueLookAndFeel_ComboList_DrawItem_Params params;
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


// Function UDebugMenu.UDebugBlueLookAndFeel.ComboList_DrawBackground
// (Final, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboList*       W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::ComboList_DrawBackground(class UUWindowComboList* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.ComboList_DrawBackground");

	UUDebugBlueLookAndFeel_ComboList_DrawBackground_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_Draw
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboControl*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Combo_Draw(class UUWindowComboControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Combo_Draw");

	UUDebugBlueLookAndFeel_Combo_Draw_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupSizes
// (Defined, Iterator, Net, Simulated, HasOptionalParms, Const)
// Parameters:
// class UUWindowComboControl*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::Combo_SetupSizes(class UUWindowComboControl* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupSizes");

	UUDebugBlueLookAndFeel_Combo_SetupSizes_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.DrawClientArea
// (Final, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowClientWindow*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::DrawClientArea(class UUWindowClientWindow* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.DrawClientArea");

	UUDebugBlueLookAndFeel_DrawClientArea_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.FW_HitTest
// (Final, Defined, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// TEnumAsByte<EFrameHitTest>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFrameHitTest> UUDebugBlueLookAndFeel::FW_HitTest(class UUWindowFramedWindow* W, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.FW_HitTest");

	UUDebugBlueLookAndFeel_FW_HitTest_Params params;
	params.W = W;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.FW_GetClientArea
// (Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// struct FRegion                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRegion UUDebugBlueLookAndFeel::FW_GetClientArea(class UUWindowFramedWindow* W)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.FW_GetClientArea");

	UUDebugBlueLookAndFeel_FW_GetClientArea_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.FW_SetupFrameButtons
// (Defined, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::FW_SetupFrameButtons(class UUWindowFramedWindow* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.FW_SetupFrameButtons");

	UUDebugBlueLookAndFeel_FW_SetupFrameButtons_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDebugMenu.UDebugBlueLookAndFeel.FW_DrawWindowFrame
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms, Const)
// Parameters:
// class UUWindowFramedWindow*    W                              (Parm)
// class UCanvas*                 C                              (Parm)

void UUDebugBlueLookAndFeel::FW_DrawWindowFrame(class UUWindowFramedWindow* W, class UCanvas* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDebugMenu.UDebugBlueLookAndFeel.FW_DrawWindowFrame");

	UUDebugBlueLookAndFeel_FW_DrawWindowFrame_Params params;
	params.W = W;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

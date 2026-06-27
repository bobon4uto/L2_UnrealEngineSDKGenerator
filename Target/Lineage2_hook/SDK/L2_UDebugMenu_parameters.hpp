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

// Function UDebugMenu.UDebugRootWindow.KeyEvent
struct UUDebugRootWindow_KeyEvent_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm, OutParm)
	TEnumAsByte<EInputAction>                          Action;                                                   // (Parm, OutParm)
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDebugMenu.UDebugRootWindow.DoQuitGame
struct UUDebugRootWindow_DoQuitGame_Params
{
};

// Function UDebugMenu.UDebugRootWindow.Resized
struct UUDebugRootWindow_Resized_Params
{
};

// Function UDebugMenu.UDebugRootWindow.Created
struct UUDebugRootWindow_Created_Params
{
};

// Function UDebugMenu.UDebugMenuBar.MenuItemSelected
struct UUDebugMenuBar_MenuItemSelected_Params
{
	class UUWindowBase*                                Sender;                                                   // (Parm)
	class UUWindowBase*                                item;                                                     // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.Paint
struct UUDebugMenuBar_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.WindowEvent
struct UUDebugMenuBar_WindowEvent_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.MenuCmd
struct UUDebugMenuBar_MenuCmd_Params
{
	int                                                Menu;                                                     // (Parm)
	int                                                item;                                                     // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.NotifyAfterLevelChange
struct UUDebugMenuBar_NotifyAfterLevelChange_Params
{
};

// Function UDebugMenu.UDebugMenuBar.NotifyBeforeLevelChange
struct UUDebugMenuBar_NotifyBeforeLevelChange_Params
{
};

// Function UDebugMenu.UDebugMenuBar.NotifyQuitUnreal
struct UUDebugMenuBar_NotifyQuitUnreal_Params
{
};

// Function UDebugMenu.UDebugMenuBar.LMouseDown
struct UUDebugMenuBar_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.DrawMenuBar
struct UUDebugMenuBar_DrawMenuBar_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.DrawItem
struct UUDebugMenuBar_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.BeforePaint
struct UUDebugMenuBar_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.ShowHelpItem
struct UUDebugMenuBar_ShowHelpItem_Params
{
	class UUWindowMenuBarItem*                         i;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMenuBar.SetHelp
struct UUDebugMenuBar_SetHelp_Params
{
	struct FString                                     NewHelpText;                                              // (Parm, NeedCtorLink)
};

// Function UDebugMenu.UDebugMenuBar.Created
struct UUDebugMenuBar_Created_Params
{
};

// Function UDebugMenu.UDebugMapListWindow.Created
struct UUDebugMapListWindow_Created_Params
{
};

// Function UDebugMenu.UDebugOpenWindow.Paint
struct UUDebugOpenWindow_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugOpenWindow.BeforePaint
struct UUDebugOpenWindow_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugOpenWindow.Resized
struct UUDebugOpenWindow_Resized_Params
{
};

// Function UDebugMenu.UDebugOpenWindow.Created
struct UUDebugOpenWindow_Created_Params
{
};

// Function UDebugMenu.UDebugMapListCW.WindowEvent
struct UUDebugMapListCW_WindowEvent_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
};

// Function UDebugMenu.UDebugMapListCW.Notify
struct UUDebugMapListCW_Notify_Params
{
	class UUWindowDialogControl*                       C;                                                        // (Parm)
	unsigned char                                      E;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMapListCW.LoadMapList
struct UUDebugMapListCW_LoadMapList_Params
{
};

// Function UDebugMenu.UDebugMapListCW.Resized
struct UUDebugMapListCW_Resized_Params
{
};

// Function UDebugMenu.UDebugMapListCW.Paint
struct UUDebugMapListCW_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMapListCW.BeforePaint
struct UUDebugMapListCW_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugMapListCW.Created
struct UUDebugMapListCW_Created_Params
{
};

// Function UDebugMenu.UDebugOpenCW.OpenURL
struct UUDebugOpenCW_OpenURL_Params
{
};

// Function UDebugMenu.UDebugOpenCW.Notify
struct UUDebugOpenCW_Notify_Params
{
	class UUWindowDialogControl*                       C;                                                        // (Parm)
	unsigned char                                      E;                                                        // (Parm)
};

// Function UDebugMenu.UDebugOpenCW.Created
struct UUDebugOpenCW_Created_Params
{
};

// Function UDebugMenu.UDebugVideoClient.BrightnessChanged
struct UUDebugVideoClient_BrightnessChanged_Params
{
};

// Function UDebugMenu.UDebugVideoClient.MessageBoxDone
struct UUDebugVideoClient_MessageBoxDone_Params
{
	class UUWindowMessageBox*                          W;                                                        // (Parm)
	TEnumAsByte<EMessageBoxResult>                     Result;                                                   // (Parm)
};

// Function UDebugMenu.UDebugVideoClient.SettingsChanged
struct UUDebugVideoClient_SettingsChanged_Params
{
};

// Function UDebugMenu.UDebugVideoClient.Notify
struct UUDebugVideoClient_Notify_Params
{
	class UUWindowDialogControl*                       C;                                                        // (Parm)
	unsigned char                                      E;                                                        // (Parm)
};

// Function UDebugMenu.UDebugVideoClient.BeforePaint
struct UUDebugVideoClient_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugVideoClient.ResolutionChanged
struct UUDebugVideoClient_ResolutionChanged_Params
{
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UDebugMenu.UDebugVideoClient.LoadAvailableSettings
struct UUDebugVideoClient_LoadAvailableSettings_Params
{
};

// Function UDebugMenu.UDebugVideoClient.AfterCreate
struct UUDebugVideoClient_AfterCreate_Params
{
};

// Function UDebugMenu.UDebugVideoClient.Created
struct UUDebugVideoClient_Created_Params
{
};

// Function UDebugMenu.UDebugMapList.FindMap
struct UUDebugMapList_FindMap_Params
{
	struct FString                                     FindMapName;                                              // (Parm, NeedCtorLink)
	class UUDebugMapList*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDebugMenu.UDebugMapList.Compare
struct UUDebugMapList_Compare_Params
{
	class UUWindowList*                                t;                                                        // (Parm)
	class UUWindowList*                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDebugMenu.UDebugMapListBox.DrawItem
struct UUDebugMapListBox_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UDebugMenu.UDebugSmallLoadMapButton.Click
struct UUDebugSmallLoadMapButton_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UDebugMenu.UDebugSmallLoadMapButton.Created
struct UUDebugSmallLoadMapButton_Created_Params
{
};

// Function UDebugMenu.UDebugBlueLookAndFeel.PlayMenuSound
struct UUDebugBlueLookAndFeel_PlayMenuSound_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
	TEnumAsByte<EMenuSound>                            S;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Button_DrawSmallButton
struct UUDebugBlueLookAndFeel_Button_DrawSmallButton_Params
{
	class UUWindowSmallButton*                         B;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawPulldownMenuItem
struct UUDebugBlueLookAndFeel_Menu_DrawPulldownMenuItem_Params
{
	class UUWindowPulldownMenu*                        M;                                                        // (Parm)
	class UUWindowPulldownMenuItem*                    item;                                                     // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	bool                                               bSelected;                                                // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawPulldownMenuBackground
struct UUDebugBlueLookAndFeel_Menu_DrawPulldownMenuBackground_Params
{
	class UUWindowPulldownMenu*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawMenuBarItem
struct UUDebugBlueLookAndFeel_Menu_DrawMenuBarItem_Params
{
	class UUWindowMenuBar*                             B;                                                        // (Parm)
	class UUWindowMenuBarItem*                         i;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Menu_DrawMenuBar
struct UUDebugBlueLookAndFeel_Menu_DrawMenuBar_Params
{
	class UUWindowMenuBar*                             W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_GetTabSize
struct UUDebugBlueLookAndFeel_Tab_GetTabSize_Params
{
	class UUWindowTabControlTabArea*                   tab;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_DrawTabPageArea
struct UUDebugBlueLookAndFeel_Tab_DrawTabPageArea_Params
{
	class UUWindowPageControl*                         W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowPageWindow*                          P;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetTabPageSize
struct UUDebugBlueLookAndFeel_Tab_SetTabPageSize_Params
{
	class UUWindowPageControl*                         W;                                                        // (Parm)
	class UUWindowPageWindow*                          P;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetupRightButton
struct UUDebugBlueLookAndFeel_Tab_SetupRightButton_Params
{
	class UUWindowTabControlRightButton*               W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_SetupLeftButton
struct UUDebugBlueLookAndFeel_Tab_SetupLeftButton_Params
{
	class UUWindowTabControlLeftButton*                W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.SB_HDraw
struct UUDebugBlueLookAndFeel_SB_HDraw_Params
{
	class UUWindowHScrollbar*                          W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.SB_VDraw
struct UUDebugBlueLookAndFeel_SB_VDraw_Params
{
	class UUWindowVScrollbar*                          W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupRightButton
struct UUDebugBlueLookAndFeel_SB_SetupRightButton_Params
{
	class UUWindowSBRightButton*                       W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupLeftButton
struct UUDebugBlueLookAndFeel_SB_SetupLeftButton_Params
{
	class UUWindowSBLeftButton*                        W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupDownButton
struct UUDebugBlueLookAndFeel_SB_SetupDownButton_Params
{
	class UUWindowSBDownButton*                        W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.SB_SetupUpButton
struct UUDebugBlueLookAndFeel_SB_SetupUpButton_Params
{
	class UUWindowSBUpButton*                          W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Tab_DrawTab
struct UUDebugBlueLookAndFeel_Tab_DrawTab_Params
{
	class UUWindowTabControlTabArea*                   tab;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	bool                                               bActiveTab;                                               // (Parm)
	bool                                               bLeftmostTab;                                             // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	bool                                               bShowText;                                                // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.ControlFrame_Draw
struct UUDebugBlueLookAndFeel_ControlFrame_Draw_Params
{
	class UUWindowControlFrame*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.ControlFrame_SetupSizes
struct UUDebugBlueLookAndFeel_ControlFrame_SetupSizes_Params
{
	class UUWindowControlFrame*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Editbox_Draw
struct UUDebugBlueLookAndFeel_Editbox_Draw_Params
{
	class UUWindowEditControl*                         W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Editbox_SetupSizes
struct UUDebugBlueLookAndFeel_Editbox_SetupSizes_Params
{
	class UUWindowEditControl*                         W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupRightButton
struct UUDebugBlueLookAndFeel_Combo_SetupRightButton_Params
{
	class UUWindowComboRightButton*                    W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupLeftButton
struct UUDebugBlueLookAndFeel_Combo_SetupLeftButton_Params
{
	class UUWindowComboLeftButton*                     W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_GetButtonBitmaps
struct UUDebugBlueLookAndFeel_Combo_GetButtonBitmaps_Params
{
	class UUWindowComboButton*                         W;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Checkbox_SetupSizes
struct UUDebugBlueLookAndFeel_Checkbox_SetupSizes_Params
{
	class UUWindowCheckbox*                            W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.ComboList_DrawItem
struct UUDebugBlueLookAndFeel_ComboList_DrawItem_Params
{
	class UUWindowComboList*                           Combo;                                                    // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	bool                                               bSelected;                                                // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.ComboList_DrawBackground
struct UUDebugBlueLookAndFeel_ComboList_DrawBackground_Params
{
	class UUWindowComboList*                           W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_Draw
struct UUDebugBlueLookAndFeel_Combo_Draw_Params
{
	class UUWindowComboControl*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.Combo_SetupSizes
struct UUDebugBlueLookAndFeel_Combo_SetupSizes_Params
{
	class UUWindowComboControl*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.DrawClientArea
struct UUDebugBlueLookAndFeel_DrawClientArea_Params
{
	class UUWindowClientWindow*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.FW_HitTest
struct UUDebugBlueLookAndFeel_FW_HitTest_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	TEnumAsByte<EFrameHitTest>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.FW_GetClientArea
struct UUDebugBlueLookAndFeel_FW_GetClientArea_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	struct FRegion                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.FW_SetupFrameButtons
struct UUDebugBlueLookAndFeel_FW_SetupFrameButtons_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UDebugMenu.UDebugBlueLookAndFeel.FW_DrawWindowFrame
struct UUDebugBlueLookAndFeel_FW_DrawWindowFrame_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

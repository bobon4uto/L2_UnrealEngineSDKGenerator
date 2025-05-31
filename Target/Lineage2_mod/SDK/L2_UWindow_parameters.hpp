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

// Function UWindow.UWindowBase.BuildObjectWithProperties
struct UUWindowBase_BuildObjectWithProperties_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowBase.InStrAfter
struct UUWindowBase_InStrAfter_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Match;                                                    // (Parm, NeedCtorLink)
	int                                                pos;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowBase.GetRegion
struct UUWindowBase_GetRegion_Params
{
	struct FTexRegion                                  t;                                                        // (Parm)
	struct FRegion                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowBase.NewTexRegion
struct UUWindowBase_NewTexRegion_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UTexture*                                    t;                                                        // (Parm)
	struct FTexRegion                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowBase.NewRegion
struct UUWindowBase_NewRegion_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	struct FRegion                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.StripCRLF
struct UUWindowWindow_StripCRLF_Params
{
	struct FString                                     Text;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function UWindow.UWindowWindow.ReplaceText
struct UUWindowWindow_ReplaceText_Params
{
	struct FString                                     Text;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Replace;                                                  // (Parm, NeedCtorLink)
	struct FString                                     With;                                                     // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowWindow.NotifyAfterLevelChange
struct UUWindowWindow_NotifyAfterLevelChange_Params
{
};

// Function UWindow.UWindowWindow.SetCursor
struct UUWindowWindow_SetCursor_Params
{
	struct FMouseCursor                                C;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.NotifyBeforeLevelChange
struct UUWindowWindow_NotifyBeforeLevelChange_Params
{
};

// Function UWindow.UWindowWindow.NotifyQuitUnreal
struct UUWindowWindow_NotifyQuitUnreal_Params
{
};

// Function UWindow.UWindowWindow.MessageBoxDone
struct UUWindowWindow_MessageBoxDone_Params
{
	class UUWindowMessageBox*                          W;                                                        // (Parm)
	TEnumAsByte<EMessageBoxResult>                     Result;                                                   // (Parm)
};

// Function UWindow.UWindowWindow.MessageBox
struct UUWindowWindow_MessageBox_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<EMessageBoxButtons>                    Buttons;                                                  // (Parm)
	TEnumAsByte<EMessageBoxResult>                     ESCResult;                                                // (Parm)
	TEnumAsByte<EMessageBoxResult>                     EnterResult;                                              // (OptionalParm, Parm)
	int                                                TimeOut;                                                  // (OptionalParm, Parm)
	class UUWindowMessageBox*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.SetParent
struct UUWindowWindow_SetParent_Params
{
	class UUWindowWindow*                              NewParent;                                                // (Parm)
};

// Function UWindow.UWindowWindow.WindowIsVisible
struct UUWindowWindow_WindowIsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.CheckMousePassThrough
struct UUWindowWindow_CheckMousePassThrough_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.WindowShown
struct UUWindowWindow_WindowShown_Params
{
};

// Function UWindow.UWindowWindow.WindowHidden
struct UUWindowWindow_WindowHidden_Params
{
};

// Function UWindow.UWindowWindow.WaitModal
struct UUWindowWindow_WaitModal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.ShowModal
struct UUWindowWindow_ShowModal_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.ResolutionChanged
struct UUWindowWindow_ResolutionChanged_Params
{
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.TextSize
struct UUWindowWindow_TextSize_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowWindow.GetDesiredDimensions
struct UUWindowWindow_GetDesiredDimensions_Params
{
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowWindow.FindChildWindow
struct UUWindowWindow_FindChildWindow_Params
{
	class UClass*                                      ChildClass;                                               // (Parm)
	bool                                               bExactClass;                                              // (OptionalParm, Parm)
	class UUWindowWindow*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.GetParent
struct UUWindowWindow_GetParent_Params
{
	class UClass*                                      ParentClass;                                              // (Parm)
	bool                                               bExactClass;                                              // (OptionalParm, Parm)
	class UUWindowWindow*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.SetAcceptsHotKeys
struct UUWindowWindow_SetAcceptsHotKeys_Params
{
	bool                                               bNewAccpetsHotKeys;                                       // (Parm)
};

// Function UWindow.UWindowWindow.IsActive
struct UUWindowWindow_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.GetLookAndFeelTexture
struct UUWindowWindow_GetLookAndFeelTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.SetMouseWindow
struct UUWindowWindow_SetMouseWindow_Params
{
};

// Function UWindow.UWindowWindow.ToolTip
struct UUWindowWindow_ToolTip_Params
{
	struct FString                                     strTip;                                                   // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowWindow.MouseIsOver
struct UUWindowWindow_MouseIsOver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.ParseAmpersand
struct UUWindowWindow_ParseAmpersand_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FString                                     Result;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Underline;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               bCalcUnderline;                                           // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.RemoveAmpersand
struct UUWindowWindow_RemoveAmpersand_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowWindow.DrawMiscBevel
struct UUWindowWindow_DrawMiscBevel_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UTexture*                                    t;                                                        // (Parm)
	int                                                BevelType;                                                // (Parm)
};

// Function UWindow.UWindowWindow.DrawUpBevel
struct UUWindowWindow_DrawUpBevel_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UTexture*                                    t;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.DrawClippedActor
struct UUWindowWindow_DrawClippedActor_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	class AActor*                                      A;                                                        // (Parm)
	bool                                               Wireframe;                                                // (Parm)
	struct FRotator                                    RotOffset;                                                // (Parm)
	struct FVector                                     LocOffset;                                                // (Parm)
};

// Function UWindow.UWindowWindow.ClipTextWidth
struct UUWindowWindow_ClipTextWidth_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	float                                              W;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.WrapClipText
struct UUWindowWindow_WrapClipText_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bCheckHotKey;                                             // (OptionalParm, Parm)
	int                                                Length;                                                   // (OptionalParm, Parm)
	int                                                PaddingLength;                                            // (OptionalParm, Parm)
	bool                                               bNoDraw;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.ClipText
struct UUWindowWindow_ClipText_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bCheckHotKey;                                             // (OptionalParm, Parm)
};

// Function UWindow.UWindowWindow.DrawStretchedTextureSegment
struct UUWindowWindow_DrawStretchedTextureSegment_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	float                                              tX;                                                       // (Parm)
	float                                              tY;                                                       // (Parm)
	float                                              tW;                                                       // (Parm)
	float                                              tH;                                                       // (Parm)
	class UTexture*                                    Tex;                                                      // (Parm)
};

// Function UWindow.UWindowWindow.DrawStretchedTexture
struct UUWindowWindow_DrawStretchedTexture_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UTexture*                                    Tex;                                                      // (Parm)
};

// Function UWindow.UWindowWindow.DrawClippedTexture
struct UUWindowWindow_DrawClippedTexture_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	class UTexture*                                    Tex;                                                      // (Parm)
};

// Function UWindow.UWindowWindow.DrawVertTiledPieces
struct UUWindowWindow_DrawVertTiledPieces_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              DestX;                                                    // (Parm)
	float                                              DestY;                                                    // (Parm)
	float                                              DestW;                                                    // (Parm)
	float                                              DestH;                                                    // (Parm)
	struct FTexRegion                                  T1;                                                       // (Parm)
	struct FTexRegion                                  T2;                                                       // (Parm)
	struct FTexRegion                                  T3;                                                       // (Parm)
	struct FTexRegion                                  T4;                                                       // (Parm)
	struct FTexRegion                                  T5;                                                       // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function UWindow.UWindowWindow.DrawHorizTiledPieces
struct UUWindowWindow_DrawHorizTiledPieces_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              DestX;                                                    // (Parm)
	float                                              DestY;                                                    // (Parm)
	float                                              DestW;                                                    // (Parm)
	float                                              DestH;                                                    // (Parm)
	struct FTexRegion                                  T1;                                                       // (Parm)
	struct FTexRegion                                  T2;                                                       // (Parm)
	struct FTexRegion                                  T3;                                                       // (Parm)
	struct FTexRegion                                  T4;                                                       // (Parm)
	struct FTexRegion                                  T5;                                                       // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function UWindow.UWindowWindow.Tile
struct UUWindowWindow_Tile_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UTexture*                                    t;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.CreateWindow
struct UUWindowWindow_CreateWindow_Params
{
	class UClass*                                      WndClass;                                                 // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UUWindowWindow*                              OwnerW;                                                   // (OptionalParm, Parm)
	bool                                               bUnique;                                                  // (OptionalParm, Parm)
	struct FName                                       ObjectName;                                               // (OptionalParm, Parm)
	class UUWindowWindow*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.HideWindow
struct UUWindowWindow_HideWindow_Params
{
};

// Function UWindow.UWindowWindow.ShowWindow
struct UUWindowWindow_ShowWindow_Params
{
};

// Function UWindow.UWindowWindow.ShowChildWindow
struct UUWindowWindow_ShowChildWindow_Params
{
	class UUWindowWindow*                              Child;                                                    // (Parm)
	bool                                               bAtBack;                                                  // (OptionalParm, Parm)
};

// Function UWindow.UWindowWindow.WindowToGlobal
struct UUWindowWindow_WindowToGlobal_Params
{
	float                                              WinX;                                                     // (Parm)
	float                                              WinY;                                                     // (Parm)
	float                                              GlobalX;                                                  // (Parm, OutParm)
	float                                              GlobalY;                                                  // (Parm, OutParm)
};

// Function UWindow.UWindowWindow.GlobalToWindow
struct UUWindowWindow_GlobalToWindow_Params
{
	float                                              GlobalX;                                                  // (Parm)
	float                                              GlobalY;                                                  // (Parm)
	float                                              WinX;                                                     // (Parm, OutParm)
	float                                              WinY;                                                     // (Parm, OutParm)
};

// Function UWindow.UWindowWindow.GetMouseXY
struct UUWindowWindow_GetMouseXY_Params
{
	float                                              X;                                                        // (Parm, OutParm)
	float                                              Y;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowWindow.CancelAcceptsFocus
struct UUWindowWindow_CancelAcceptsFocus_Params
{
};

// Function UWindow.UWindowWindow.SetAcceptsFocus
struct UUWindowWindow_SetAcceptsFocus_Params
{
};

// Function UWindow.UWindowWindow.HideChildWindow
struct UUWindowWindow_HideChildWindow_Params
{
	class UUWindowWindow*                              Child;                                                    // (Parm)
};

// Function UWindow.UWindowWindow.SendToBack
struct UUWindowWindow_SendToBack_Params
{
};

// Function UWindow.UWindowWindow.BringToFront
struct UUWindowWindow_BringToFront_Params
{
};

// Function UWindow.UWindowWindow.ActivateWindow
struct UUWindowWindow_ActivateWindow_Params
{
	int                                                Depth;                                                    // (Parm)
	bool                                               bTransientNoDeactivate;                                   // (Parm)
};

// Function UWindow.UWindowWindow.MessageClients
struct UUWindowWindow_MessageClients_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.CheckKeyFocusWindow
struct UUWindowWindow_CheckKeyFocusWindow_Params
{
	class UUWindowWindow*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.PropagateMessage
struct UUWindowWindow_PropagateMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	float                                              MsgLife;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.PropagateKey
struct UUWindowWindow_PropagateKey_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.FindWindowUnder
struct UUWindowWindow_FindWindowUnder_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	class UUWindowWindow*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.PaintClients
struct UUWindowWindow_PaintClients_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.DoTick
struct UUWindowWindow_DoTick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowWindow.Tick
struct UUWindowWindow_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowWindow.SetSize
struct UUWindowWindow_SetSize_Params
{
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.Close
struct UUWindowWindow_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowWindow.EscClose
struct UUWindowWindow_EscClose_Params
{
};

// Function UWindow.UWindowWindow.FocusOtherWindow
struct UUWindowWindow_FocusOtherWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.FocusWindow
struct UUWindowWindow_FocusWindow_Params
{
};

// Function UWindow.UWindowWindow.LMouseUp
struct UUWindowWindow_LMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.LMouseDown
struct UUWindowWindow_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.MMouseUp
struct UUWindowWindow_MMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.MMouseDown
struct UUWindowWindow_MMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.RMouseUp
struct UUWindowWindow_RMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.RMouseDown
struct UUWindowWindow_RMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.KeyFocusExit
struct UUWindowWindow_KeyFocusExit_Params
{
};

// Function UWindow.UWindowWindow.KeyFocusEnter
struct UUWindowWindow_KeyFocusEnter_Params
{
};

// Function UWindow.UWindowWindow.ProcessMenuKey
struct UUWindowWindow_ProcessMenuKey_Params
{
	int                                                Key;                                                      // (Parm)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowWindow.KeyPressed
struct UUWindowWindow_KeyPressed_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.HotKeyUp
struct UUWindowWindow_HotKeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.HotKeyDown
struct UUWindowWindow_HotKeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.KeyDown
struct UUWindowWindow_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.KeyUp
struct UUWindowWindow_KeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.MouseMove
struct UUWindowWindow_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.MouseLeave
struct UUWindowWindow_MouseLeave_Params
{
};

// Function UWindow.UWindowWindow.Deactivated
struct UUWindowWindow_Deactivated_Params
{
};

// Function UWindow.UWindowWindow.Activated
struct UUWindowWindow_Activated_Params
{
};

// Function UWindow.UWindowWindow.MouseEnter
struct UUWindowWindow_MouseEnter_Params
{
};

// Function UWindow.UWindowWindow.AfterCreate
struct UUWindowWindow_AfterCreate_Params
{
};

// Function UWindow.UWindowWindow.Created
struct UUWindowWindow_Created_Params
{
};

// Function UWindow.UWindowWindow.BeforeCreate
struct UUWindowWindow_BeforeCreate_Params
{
};

// Function UWindow.UWindowWindow.BeginPlay
struct UUWindowWindow_BeginPlay_Params
{
};

// Function UWindow.UWindowWindow.RDoubleClick
struct UUWindowWindow_RDoubleClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.MDoubleClick
struct UUWindowWindow_MDoubleClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.DoubleClick
struct UUWindowWindow_DoubleClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.RClick
struct UUWindowWindow_RClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.MClick
struct UUWindowWindow_MClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.Click
struct UUWindowWindow_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.Paint
struct UUWindowWindow_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.AfterPaint
struct UUWindowWindow_AfterPaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.BeforePaint
struct UUWindowWindow_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowWindow.Resized
struct UUWindowWindow_Resized_Params
{
};

// Function UWindow.UWindowWindow.GetEntryLevel
struct UUWindowWindow_GetEntryLevel_Params
{
	class ALevelInfo*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.GetLevel
struct UUWindowWindow_GetLevel_Params
{
	class ALevelInfo*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.GetPlayerOwner
struct UUWindowWindow_GetPlayerOwner_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowWindow.SaveConfigs
struct UUWindowWindow_SaveConfigs_Params
{
};

// Function UWindow.UWindowWindow.WindowEvent
struct UUWindowWindow_WindowEvent_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
};

// Function UWindow.UWindowRootWindow.Message
struct UUWindowRootWindow_Message_Params
{
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	float                                              MsgLife;                                                  // (Parm)
};

// Function UWindow.UWindowRootWindow.PostRender
struct UUWindowRootWindow_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function UWindow.UWindowRootWindow.KeyEvent
struct UUWindowRootWindow_KeyEvent_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm, OutParm)
	TEnumAsByte<EInputAction>                          Action;                                                   // (Parm, OutParm)
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.Initialized
struct UUWindowRootWindow_Initialized_Params
{
};

// Function UWindow.UWindowRootWindow.Tick
struct UUWindowRootWindow_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowRootWindow.DoQuitGame
struct UUWindowRootWindow_DoQuitGame_Params
{
};

// Function UWindow.UWindowRootWindow.QuitGame
struct UUWindowRootWindow_QuitGame_Params
{
};

// Function UWindow.UWindowRootWindow.SetMousePos
struct UUWindowRootWindow_SetMousePos_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowRootWindow.HideWindow
struct UUWindowRootWindow_HideWindow_Params
{
};

// Function UWindow.UWindowRootWindow.ChangeLookAndFeel
struct UUWindowRootWindow_ChangeLookAndFeel_Params
{
	struct FString                                     NewLookAndFeel;                                           // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowRootWindow.SetupFonts
struct UUWindowRootWindow_SetupFonts_Params
{
};

// Function UWindow.UWindowRootWindow.SetScale
struct UUWindowRootWindow_SetScale_Params
{
	float                                              NewScale;                                                 // (Parm)
};

// Function UWindow.UWindowRootWindow.Resized
struct UUWindowRootWindow_Resized_Params
{
};

// Function UWindow.UWindowRootWindow.CloseActiveWindow
struct UUWindowRootWindow_CloseActiveWindow_Params
{
};

// Function UWindow.UWindowRootWindow.HotKeyUp
struct UUWindowRootWindow_HotKeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.HotKeyDown
struct UUWindowRootWindow_HotKeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.WindowEvent
struct UUWindowRootWindow_WindowEvent_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
};

// Function UWindow.UWindowRootWindow.RemoveHotkeyWindow
struct UUWindowRootWindow_RemoveHotkeyWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowRootWindow.AddHotkeyWindow
struct UUWindowRootWindow_AddHotkeyWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowRootWindow.IsActive
struct UUWindowRootWindow_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.GetLookAndFeelTexture
struct UUWindowRootWindow_GetLookAndFeelTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.CaptureMouse
struct UUWindowRootWindow_CaptureMouse_Params
{
	class UUWindowWindow*                              W;                                                        // (OptionalParm, Parm)
};

// Function UWindow.UWindowRootWindow.CancelCapture
struct UUWindowRootWindow_CancelCapture_Params
{
};

// Function UWindow.UWindowRootWindow.CheckCaptureMouseDown
struct UUWindowRootWindow_CheckCaptureMouseDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.CheckCaptureMouseUp
struct UUWindowRootWindow_CheckCaptureMouseUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.DrawMouse
struct UUWindowRootWindow_DrawMouse_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowRootWindow.MoveMouse
struct UUWindowRootWindow_MoveMouse_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowRootWindow.Created
struct UUWindowRootWindow_Created_Params
{
};

// Function UWindow.UWindowRootWindow.GetLookAndFeel
struct UUWindowRootWindow_GetLookAndFeel_Params
{
	struct FString                                     LFClassName;                                              // (Parm, NeedCtorLink)
	class UUWindowLookAndFeel*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowRootWindow.BeginPlay
struct UUWindowRootWindow_BeginPlay_Params
{
};

// Function UWindow.UWindowFramedWindow.WindowHidden
struct UUWindowFramedWindow_WindowHidden_Params
{
};

// Function UWindow.UWindowFramedWindow.WindowEvent
struct UUWindowFramedWindow_WindowEvent_Params
{
	TEnumAsByte<EWinMessage>                           Msg;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	int                                                Key;                                                      // (Parm)
};

// Function UWindow.UWindowFramedWindow.ToolTip
struct UUWindowFramedWindow_ToolTip_Params
{
	struct FString                                     strTip;                                                   // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowFramedWindow.MouseMove
struct UUWindowFramedWindow_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowFramedWindow.Resized
struct UUWindowFramedWindow_Resized_Params
{
};

// Function UWindow.UWindowFramedWindow.LMouseDown
struct UUWindowFramedWindow_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowFramedWindow.Paint
struct UUWindowFramedWindow_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowFramedWindow.BeforePaint
struct UUWindowFramedWindow_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowFramedWindow.IsActive
struct UUWindowFramedWindow_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowFramedWindow.GetLookAndFeelTexture
struct UUWindowFramedWindow_GetLookAndFeelTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowFramedWindow.Created
struct UUWindowFramedWindow_Created_Params
{
};

// Function UWindow.UWindowMessageBox.Close
struct UUWindowMessageBox_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowMessageBox.AfterPaint
struct UUWindowMessageBox_AfterPaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBox.BeforePaint
struct UUWindowMessageBox_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBox.SetupMessageBox
struct UUWindowMessageBox_SetupMessageBox_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<EMessageBoxButtons>                    Buttons;                                                  // (Parm)
	TEnumAsByte<EMessageBoxResult>                     InESCResult;                                              // (Parm)
	TEnumAsByte<EMessageBoxResult>                     InEnterResult;                                            // (OptionalParm, Parm)
	int                                                InTimeOut;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowLookAndFeel.ControlFrame_Draw
struct UUWindowLookAndFeel_ControlFrame_Draw_Params
{
	class UUWindowControlFrame*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.ControlFrame_SetupSizes
struct UUWindowLookAndFeel_ControlFrame_SetupSizes_Params
{
	class UUWindowControlFrame*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.PlayMenuSound
struct UUWindowLookAndFeel_PlayMenuSound_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
	TEnumAsByte<EMenuSound>                            S;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Button_DrawSmallButton
struct UUWindowLookAndFeel_Button_DrawSmallButton_Params
{
	class UUWindowSmallButton*                         B;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Menu_DrawPulldownMenuItem
struct UUWindowLookAndFeel_Menu_DrawPulldownMenuItem_Params
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

// Function UWindow.UWindowLookAndFeel.Menu_DrawPulldownMenuBackground
struct UUWindowLookAndFeel_Menu_DrawPulldownMenuBackground_Params
{
	class UUWindowPulldownMenu*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Menu_DrawMenuBarItem
struct UUWindowLookAndFeel_Menu_DrawMenuBarItem_Params
{
	class UUWindowMenuBar*                             B;                                                        // (Parm)
	class UUWindowMenuBarItem*                         i;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Menu_DrawMenuBar
struct UUWindowLookAndFeel_Menu_DrawMenuBar_Params
{
	class UUWindowMenuBar*                             W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Tab_DrawTabPageArea
struct UUWindowLookAndFeel_Tab_DrawTabPageArea_Params
{
	class UUWindowPageControl*                         W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowPageWindow*                          P;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Tab_SetTabPageSize
struct UUWindowLookAndFeel_Tab_SetTabPageSize_Params
{
	class UUWindowPageControl*                         W;                                                        // (Parm)
	class UUWindowPageWindow*                          P;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Tab_SetupRightButton
struct UUWindowLookAndFeel_Tab_SetupRightButton_Params
{
	class UUWindowTabControlRightButton*               W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Tab_SetupLeftButton
struct UUWindowLookAndFeel_Tab_SetupLeftButton_Params
{
	class UUWindowTabControlLeftButton*                W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Tab_GetTabSize
struct UUWindowLookAndFeel_Tab_GetTabSize_Params
{
	class UUWindowTabControlTabArea*                   tab;                                                      // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowLookAndFeel.Tab_DrawTab
struct UUWindowLookAndFeel_Tab_DrawTab_Params
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

// Function UWindow.UWindowLookAndFeel.SB_HDraw
struct UUWindowLookAndFeel_SB_HDraw_Params
{
	class UUWindowHScrollbar*                          W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.SB_VDraw
struct UUWindowLookAndFeel_SB_VDraw_Params
{
	class UUWindowVScrollbar*                          W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.SB_SetupRightButton
struct UUWindowLookAndFeel_SB_SetupRightButton_Params
{
	class UUWindowSBRightButton*                       W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.SB_SetupLeftButton
struct UUWindowLookAndFeel_SB_SetupLeftButton_Params
{
	class UUWindowSBLeftButton*                        W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.SB_SetupDownButton
struct UUWindowLookAndFeel_SB_SetupDownButton_Params
{
	class UUWindowSBDownButton*                        W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.SB_SetupUpButton
struct UUWindowLookAndFeel_SB_SetupUpButton_Params
{
	class UUWindowSBUpButton*                          W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Editbox_Draw
struct UUWindowLookAndFeel_Editbox_Draw_Params
{
	class UUWindowEditControl*                         W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Editbox_SetupSizes
struct UUWindowLookAndFeel_Editbox_SetupSizes_Params
{
	class UUWindowEditControl*                         W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.ComboList_DrawItem
struct UUWindowLookAndFeel_ComboList_DrawItem_Params
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

// Function UWindow.UWindowLookAndFeel.ComboList_DrawBackground
struct UUWindowLookAndFeel_ComboList_DrawBackground_Params
{
	class UUWindowComboList*                           W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Checkbox_Draw
struct UUWindowLookAndFeel_Checkbox_Draw_Params
{
	class UUWindowCheckbox*                            W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Checkbox_SetupSizes
struct UUWindowLookAndFeel_Checkbox_SetupSizes_Params
{
	class UUWindowCheckbox*                            W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Combo_SetupRightButton
struct UUWindowLookAndFeel_Combo_SetupRightButton_Params
{
	class UUWindowComboRightButton*                    W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Combo_SetupLeftButton
struct UUWindowLookAndFeel_Combo_SetupLeftButton_Params
{
	class UUWindowComboLeftButton*                     W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Combo_GetButtonBitmaps
struct UUWindowLookAndFeel_Combo_GetButtonBitmaps_Params
{
	class UUWindowComboButton*                         W;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Combo_Draw
struct UUWindowLookAndFeel_Combo_Draw_Params
{
	class UUWindowComboControl*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Combo_SetupSizes
struct UUWindowLookAndFeel_Combo_SetupSizes_Params
{
	class UUWindowComboControl*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.DrawClientArea
struct UUWindowLookAndFeel_DrawClientArea_Params
{
	class UUWindowClientWindow*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.FW_SetupFrameButtons
struct UUWindowLookAndFeel_FW_SetupFrameButtons_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.FW_HitTest
struct UUWindowLookAndFeel_FW_HitTest_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	TEnumAsByte<EFrameHitTest>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowLookAndFeel.FW_GetClientArea
struct UUWindowLookAndFeel_FW_GetClientArea_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	struct FRegion                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowLookAndFeel.FW_DrawWindowFrame
struct UUWindowLookAndFeel_FW_DrawWindowFrame_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowLookAndFeel.Setup
struct UUWindowLookAndFeel_Setup_Params
{
};

// Function UWindow.UWindowLookAndFeel.GetTexture
struct UUWindowLookAndFeel_GetTexture_Params
{
	class UUWindowFramedWindow*                        W;                                                        // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.Clear
struct UUWindowList_Clear_Params
{
};

// Function UWindow.UWindowList.AppendListCopy
struct UUWindowList_AppendListCopy_Params
{
	class UUWindowList*                                L;                                                        // (Parm)
};

// Function UWindow.UWindowList.FindEntry
struct UUWindowList_FindEntry_Params
{
	int                                                Index;                                                    // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.InsertItem
struct UUWindowList_InsertItem_Params
{
	class UUWindowList*                                NewElement;                                               // (Parm)
};

// Function UWindow.UWindowList.Insert
struct UUWindowList_Insert_Params
{
	class UClass*                                      C;                                                        // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.DoAppendItem
struct UUWindowList_DoAppendItem_Params
{
	class UUWindowList*                                NewElement;                                               // (Parm)
};

// Function UWindow.UWindowList.AppendItem
struct UUWindowList_AppendItem_Params
{
	class UUWindowList*                                NewElement;                                               // (Parm)
};

// Function UWindow.UWindowList.Append
struct UUWindowList_Append_Params
{
	class UClass*                                      C;                                                        // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.Validate
struct UUWindowList_Validate_Params
{
};

// Function UWindow.UWindowList.SetupSentinel
struct UUWindowList_SetupSentinel_Params
{
	bool                                               bInTreeSort;                                              // (OptionalParm, Parm)
};

// Function UWindow.UWindowList.MoveItemSorted
struct UUWindowList_MoveItemSorted_Params
{
	class UUWindowList*                                item;                                                     // (Parm)
};

// Function UWindow.UWindowList.Count
struct UUWindowList_Count_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.ShowThisItem
struct UUWindowList_ShowThisItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.CopyExistingListItem
struct UUWindowList_CopyExistingListItem_Params
{
	class UClass*                                      ItemClass;                                                // (Parm)
	class UUWindowList*                                SourceItem;                                               // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.CountShown
struct UUWindowList_CountShown_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.DestroyListItem
struct UUWindowList_DestroyListItem_Params
{
};

// Function UWindow.UWindowList.DestroyList
struct UUWindowList_DestroyList_Params
{
};

// Function UWindow.UWindowList.DisconnectList
struct UUWindowList_DisconnectList_Params
{
};

// Function UWindow.UWindowList.Sort
struct UUWindowList_Sort_Params
{
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.Tick
struct UUWindowList_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowList.ContinueSort
struct UUWindowList_ContinueSort_Params
{
};

// Function UWindow.UWindowList.InsertItemAfter
struct UUWindowList_InsertItemAfter_Params
{
	class UUWindowList*                                NewElement;                                               // (Parm)
	bool                                               bCheckShowItem;                                           // (OptionalParm, Parm)
};

// Function UWindow.UWindowList.InsertItemBefore
struct UUWindowList_InsertItemBefore_Params
{
	class UUWindowList*                                NewElement;                                               // (Parm)
};

// Function UWindow.UWindowList.InsertAfter
struct UUWindowList_InsertAfter_Params
{
	class UClass*                                      C;                                                        // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.InsertBefore
struct UUWindowList_InsertBefore_Params
{
	class UClass*                                      C;                                                        // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.Compare
struct UUWindowList_Compare_Params
{
	class UUWindowList*                                t;                                                        // (Parm)
	class UUWindowList*                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.Remove
struct UUWindowList_Remove_Params
{
};

// Function UWindow.UWindowList.LeftMost
struct UUWindowList_LeftMost_Params
{
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.RightMost
struct UUWindowList_RightMost_Params
{
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowList.GraftRight
struct UUWindowList_GraftRight_Params
{
	class UUWindowList*                                NewRight;                                                 // (Parm)
};

// Function UWindow.UWindowList.GraftLeft
struct UUWindowList_GraftLeft_Params
{
	class UUWindowList*                                NewLeft;                                                  // (Parm)
};

// Function UWindow.UWindowList.CreateItem
struct UUWindowList_CreateItem_Params
{
	class UClass*                                      C;                                                        // (Parm)
	class UUWindowList*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowHotkeyWindowList.FindWindow
struct UUWindowHotkeyWindowList_FindWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
	class UUWindowHotkeyWindowList*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowConsoleWindow.Close
struct UUWindowConsoleWindow_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowConsoleWindow.SetDimensions
struct UUWindowConsoleWindow_SetDimensions_Params
{
};

// Function UWindow.UWindowConsoleWindow.ResolutionChanged
struct UUWindowConsoleWindow_ResolutionChanged_Params
{
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowConsoleWindow.ShowWindow
struct UUWindowConsoleWindow_ShowWindow_Params
{
};

// Function UWindow.UWindowConsoleWindow.Created
struct UUWindowConsoleWindow_Created_Params
{
};

// Function UWindow.UWindowDialogControl.MouseLeave
struct UUWindowDialogControl_MouseLeave_Params
{
};

// Function UWindow.UWindowDialogControl.MouseEnter
struct UUWindowDialogControl_MouseEnter_Params
{
};

// Function UWindow.UWindowDialogControl.MouseMove
struct UUWindowDialogControl_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowDialogControl.KeyDown
struct UUWindowDialogControl_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowDialogControl.CheckExternalDrag
struct UUWindowDialogControl_CheckExternalDrag_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	class UUWindowDialogControl*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDialogControl.ExternalDragOver
struct UUWindowDialogControl_ExternalDragOver_Params
{
	class UUWindowDialogControl*                       ExternalControl;                                          // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDialogControl.Notify
struct UUWindowDialogControl_Notify_Params
{
	unsigned char                                      E;                                                        // (Parm)
};

// Function UWindow.UWindowDialogControl.Register
struct UUWindowDialogControl_Register_Params
{
	class UUWindowDialogClientWindow*                  W;                                                        // (Parm)
};

// Function UWindow.UWindowDialogControl.SetTextColor
struct UUWindowDialogControl_SetTextColor_Params
{
	struct FColor                                      NewColor;                                                 // (Parm)
};

// Function UWindow.UWindowDialogControl.SetFont
struct UUWindowDialogControl_SetFont_Params
{
	int                                                NewFont;                                                  // (Parm)
};

// Function UWindow.UWindowDialogControl.BeforePaint
struct UUWindowDialogControl_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowDialogControl.SetText
struct UUWindowDialogControl_SetText_Params
{
	struct FString                                     NewText;                                                  // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowDialogControl.SetHelpText
struct UUWindowDialogControl_SetHelpText_Params
{
	struct FString                                     NewHelpText;                                              // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowDialogControl.KeyFocusExit
struct UUWindowDialogControl_KeyFocusExit_Params
{
};

// Function UWindow.UWindowDialogControl.KeyFocusEnter
struct UUWindowDialogControl_KeyFocusEnter_Params
{
};

// Function UWindow.UWindowDialogControl.Created
struct UUWindowDialogControl_Created_Params
{
};

// Function UWindow.UWindowListControl.Created
struct UUWindowListControl_Created_Params
{
};

// Function UWindow.UWindowListControl.DrawItem
struct UUWindowListControl_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.MenuItemSelected
struct UUWindowMenuBar_MenuItemSelected_Params
{
	class UUWindowBase*                                Sender;                                                   // (Parm)
	class UUWindowBase*                                item;                                                     // (Parm)
};

// Function UWindow.UWindowMenuBar.MenuCmd
struct UUWindowMenuBar_MenuCmd_Params
{
	int                                                Menu;                                                     // (Parm)
	int                                                item;                                                     // (Parm)
};

// Function UWindow.UWindowMenuBar.KeyDown
struct UUWindowMenuBar_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.HotKeyUp
struct UUWindowMenuBar_HotKeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBar.HotKeyDown
struct UUWindowMenuBar_HotKeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBar.GetMenuBar
struct UUWindowMenuBar_GetMenuBar_Params
{
	class UUWindowMenuBar*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBar.Close
struct UUWindowMenuBar_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowMenuBar.CloseUp
struct UUWindowMenuBar_CloseUp_Params
{
};

// Function UWindow.UWindowMenuBar.DrawMenuBar
struct UUWindowMenuBar_DrawMenuBar_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.DrawItem
struct UUWindowMenuBar_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.LMouseDown
struct UUWindowMenuBar_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.Select
struct UUWindowMenuBar_Select_Params
{
	class UUWindowMenuBarItem*                         i;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.MouseLeave
struct UUWindowMenuBar_MouseLeave_Params
{
};

// Function UWindow.UWindowMenuBar.MouseMove
struct UUWindowMenuBar_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.Paint
struct UUWindowMenuBar_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
};

// Function UWindow.UWindowMenuBar.ResolutionChanged
struct UUWindowMenuBar_ResolutionChanged_Params
{
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowMenuBar.AddItem
struct UUWindowMenuBar_AddItem_Params
{
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UUWindowMenuBarItem*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBar.AddHelpItem
struct UUWindowMenuBar_AddHelpItem_Params
{
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UUWindowMenuBarItem*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBar.Created
struct UUWindowMenuBar_Created_Params
{
};

// Function UWindow.UWindowButton.KeyDown
struct UUWindowButton_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.MClick
struct UUWindowButton_MClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.RClick
struct UUWindowButton_RClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.DoubleClick
struct UUWindowButton_DoubleClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.Click
struct UUWindowButton_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.MouseEnter
struct UUWindowButton_MouseEnter_Params
{
};

// Function UWindow.UWindowButton.MouseLeave
struct UUWindowButton_MouseLeave_Params
{
};

// Function UWindow.UWindowButton.Paint
struct UUWindowButton_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.BeforePaint
struct UUWindowButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowButton.Created
struct UUWindowButton_Created_Params
{
};

// Function UWindow.UWindowFrameCloseBox.KeyDown
struct UUWindowFrameCloseBox_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowFrameCloseBox.Click
struct UUWindowFrameCloseBox_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowFrameCloseBox.Created
struct UUWindowFrameCloseBox_Created_Params
{
};

// Function UWindow.UWindowClientWindow.Close
struct UUWindowClientWindow_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowDialogClientWindow.GetDesiredDimensions
struct UUWindowDialogClientWindow_GetDesiredDimensions_Params
{
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowDialogClientWindow.Paint
struct UUWindowDialogClientWindow_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowDialogClientWindow.CreateControl
struct UUWindowDialogClientWindow_CreateControl_Params
{
	class UClass*                                      ControlClass;                                             // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	class UUWindowWindow*                              OwnerWindow;                                              // (OptionalParm, Parm)
	class UUWindowDialogControl*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDialogClientWindow.Notify
struct UUWindowDialogClientWindow_Notify_Params
{
	class UUWindowDialogControl*                       C;                                                        // (Parm)
	unsigned char                                      E;                                                        // (Parm)
};

// Function UWindow.UWindowDialogClientWindow.OKPressed
struct UUWindowDialogClientWindow_OKPressed_Params
{
};

// Function UWindow.UWindowMessageBoxCW.Notify
struct UUWindowMessageBoxCW_Notify_Params
{
	class UUWindowDialogControl*                       C;                                                        // (Parm)
	unsigned char                                      E;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBoxCW.SetupMessageBoxClient
struct UUWindowMessageBoxCW_SetupMessageBoxClient_Params
{
	struct FString                                     InMessage;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<EMessageBoxButtons>                    InButtons;                                                // (Parm)
	TEnumAsByte<EMessageBoxResult>                     InEnterResult;                                            // (Parm)
};

// Function UWindow.UWindowMessageBoxCW.Paint
struct UUWindowMessageBoxCW_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBoxCW.GetHeight
struct UUWindowMessageBoxCW_GetHeight_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMessageBoxCW.Resized
struct UUWindowMessageBoxCW_Resized_Params
{
};

// Function UWindow.UWindowMessageBoxCW.BeforePaint
struct UUWindowMessageBoxCW_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBoxCW.KeyDown
struct UUWindowMessageBoxCW_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBoxCW.Created
struct UUWindowMessageBoxCW_Created_Params
{
};

// Function UWindow.UWindowControlFrame.Paint
struct UUWindowControlFrame_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowControlFrame.BeforePaint
struct UUWindowControlFrame_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowControlFrame.SetFrame
struct UUWindowControlFrame_SetFrame_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowSmallButton.Paint
struct UUWindowSmallButton_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSmallButton.BeforePaint
struct UUWindowSmallButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSmallButton.AutoWidth
struct UUWindowSmallButton_AutoWidth_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowSmallButton.Created
struct UUWindowSmallButton_Created_Params
{
};

// Function UWindow.UWindowPulldownMenu.MenuCmd
struct UUWindowPulldownMenu_MenuCmd_Params
{
	int                                                item;                                                     // (Parm)
};

// Function UWindow.UWindowPulldownMenu.KeyUp
struct UUWindowPulldownMenu_KeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.KeyDown
struct UUWindowPulldownMenu_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.FocusOtherWindow
struct UUWindowPulldownMenu_FocusOtherWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.GetMenuBar
struct UUWindowPulldownMenu_GetMenuBar_Params
{
	class UUWindowMenuBar*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPulldownMenu.CloseUp
struct UUWindowPulldownMenu_CloseUp_Params
{
	bool                                               bByOwner;                                                 // (OptionalParm, Parm)
};

// Function UWindow.UWindowPulldownMenu.ExecuteItem
struct UUWindowPulldownMenu_ExecuteItem_Params
{
	class UUWindowPulldownMenuItem*                    i;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.BeforeExecuteItem
struct UUWindowPulldownMenu_BeforeExecuteItem_Params
{
	class UUWindowPulldownMenuItem*                    i;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.DrawItem
struct UUWindowPulldownMenu_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.DrawMenuBackground
struct UUWindowPulldownMenu_DrawMenuBackground_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.Paint
struct UUWindowPulldownMenu_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.BeforePaint
struct UUWindowPulldownMenu_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.LMouseDown
struct UUWindowPulldownMenu_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.LMouseUp
struct UUWindowPulldownMenu_LMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.MouseMove
struct UUWindowPulldownMenu_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.ShowWindow
struct UUWindowPulldownMenu_ShowWindow_Params
{
};

// Function UWindow.UWindowPulldownMenu.SetSelected
struct UUWindowPulldownMenu_SetSelected_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.PerformSelect
struct UUWindowPulldownMenu_PerformSelect_Params
{
	class UUWindowPulldownMenuItem*                    NewSelected;                                              // (Parm)
};

// Function UWindow.UWindowPulldownMenu.Select
struct UUWindowPulldownMenu_Select_Params
{
	class UUWindowPulldownMenuItem*                    i;                                                        // (Parm)
};

// Function UWindow.UWindowPulldownMenu.DeSelect
struct UUWindowPulldownMenu_DeSelect_Params
{
};

// Function UWindow.UWindowPulldownMenu.Clear
struct UUWindowPulldownMenu_Clear_Params
{
};

// Function UWindow.UWindowPulldownMenu.Created
struct UUWindowPulldownMenu_Created_Params
{
};

// Function UWindow.UWindowPulldownMenu.AddMenuItem
struct UUWindowPulldownMenu_AddMenuItem_Params
{
	struct FString                                     C;                                                        // (Parm, NeedCtorLink)
	class UTexture*                                    G;                                                        // (Parm)
	class UUWindowPulldownMenuItem*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPulldownMenuItem.GetMenuBar
struct UUWindowPulldownMenuItem_GetMenuBar_Params
{
	class UUWindowMenuBar*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPulldownMenuItem.CloseUp
struct UUWindowPulldownMenuItem_CloseUp_Params
{
};

// Function UWindow.UWindowPulldownMenuItem.DeSelect
struct UUWindowPulldownMenuItem_DeSelect_Params
{
};

// Function UWindow.UWindowPulldownMenuItem.SetCaption
struct UUWindowPulldownMenuItem_SetCaption_Params
{
	struct FString                                     C;                                                        // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowPulldownMenuItem.Select
struct UUWindowPulldownMenuItem_Select_Params
{
};

// Function UWindow.UWindowPulldownMenuItem.CreateSubMenu
struct UUWindowPulldownMenuItem_CreateSubMenu_Params
{
	class UClass*                                      MenuClass;                                                // (Parm)
	class UUWindowWindow*                              InOwnerWindow;                                            // (OptionalParm, Parm)
	class UUWindowPulldownMenu*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBarItem.GetMenuBar
struct UUWindowMenuBarItem_GetMenuBar_Params
{
	class UUWindowMenuBar*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBarItem.CloseUp
struct UUWindowMenuBarItem_CloseUp_Params
{
};

// Function UWindow.UWindowMenuBarItem.Select
struct UUWindowMenuBarItem_Select_Params
{
};

// Function UWindow.UWindowMenuBarItem.DeSelect
struct UUWindowMenuBarItem_DeSelect_Params
{
};

// Function UWindow.UWindowMenuBarItem.CreateMenu
struct UUWindowMenuBarItem_CreateMenu_Params
{
	class UClass*                                      MenuClass;                                                // (Parm)
	class UUWindowPulldownMenu*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowMenuBarItem.SetCaption
struct UUWindowMenuBarItem_SetCaption_Params
{
	struct FString                                     C;                                                        // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowMenuBarItem.SetHelp
struct UUWindowMenuBarItem_SetHelp_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function UWindow.UWindowTabControl.DeleteTab
struct UUWindowTabControl_DeleteTab_Params
{
	class UUWindowTabControlItem*                      tab;                                                      // (Parm)
};

// Function UWindow.UWindowTabControl.GetTab
struct UUWindowTabControl_GetTab_Params
{
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UUWindowTabControlItem*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowTabControl.GotoTab
struct UUWindowTabControl_GotoTab_Params
{
	class UUWindowTabControlItem*                      NewSelected;                                              // (Parm)
	bool                                               bByUser;                                                  // (OptionalParm, Parm)
};

// Function UWindow.UWindowTabControl.InsertTab
struct UUWindowTabControl_InsertTab_Params
{
	class UUWindowTabControlItem*                      BeforeTab;                                                // (Parm)
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UUWindowTabControlItem*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowTabControl.AddTab
struct UUWindowTabControl_AddTab_Params
{
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UUWindowTabControlItem*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowTabControl.Paint
struct UUWindowTabControl_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControl.SetMultiLine
struct UUWindowTabControl_SetMultiLine_Params
{
	bool                                               InMultiLine;                                              // (Parm)
};

// Function UWindow.UWindowTabControl.BeforePaint
struct UUWindowTabControl_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControl.Created
struct UUWindowTabControl_Created_Params
{
};

// Function UWindow.UWindowPageControl.FirstPage
struct UUWindowPageControl_FirstPage_Params
{
	class UUWindowPageControlPage*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPageControl.GotoTab
struct UUWindowPageControl_GotoTab_Params
{
	class UUWindowTabControlItem*                      NewSelected;                                              // (Parm)
	bool                                               bByUser;                                                  // (OptionalParm, Parm)
};

// Function UWindow.UWindowPageControl.Close
struct UUWindowPageControl_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowPageControl.DeletePage
struct UUWindowPageControl_DeletePage_Params
{
	class UUWindowPageControlPage*                     P;                                                        // (Parm)
};

// Function UWindow.UWindowPageControl.GetPage
struct UUWindowPageControl_GetPage_Params
{
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UUWindowPageControlPage*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPageControl.InsertPage
struct UUWindowPageControl_InsertPage_Params
{
	class UUWindowPageControlPage*                     BeforePage;                                               // (Parm)
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UClass*                                      PageClass;                                                // (Parm)
	struct FName                                       ObjectName;                                               // (OptionalParm, Parm)
	class UUWindowPageControlPage*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPageControl.AddPage
struct UUWindowPageControl_AddPage_Params
{
	struct FString                                     Caption;                                                  // (Parm, NeedCtorLink)
	class UClass*                                      PageClass;                                                // (Parm)
	struct FName                                       ObjectName;                                               // (OptionalParm, Parm)
	class UUWindowPageControlPage*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPageControl.Paint
struct UUWindowPageControl_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPageControl.BeforePaint
struct UUWindowPageControl_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowPageControl.GetDesiredDimensions
struct UUWindowPageControl_GetDesiredDimensions_Params
{
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowPageControl.NotifyAfterLevelChange
struct UUWindowPageControl_NotifyAfterLevelChange_Params
{
};

// Function UWindow.UWindowPageControl.NotifyBeforeLevelChange
struct UUWindowPageControl_NotifyBeforeLevelChange_Params
{
};

// Function UWindow.UWindowPageControl.NotifyQuitUnreal
struct UUWindowPageControl_NotifyQuitUnreal_Params
{
};

// Function UWindow.UWindowPageControl.ResolutionChanged
struct UUWindowPageControl_ResolutionChanged_Params
{
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowPageWindow.RightClickTab
struct UUWindowPageWindow_RightClickTab_Params
{
};

// Function UWindow.UWindowTabControlRightButton.LMouseDown
struct UUWindowTabControlRightButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlRightButton.BeforePaint
struct UUWindowTabControlRightButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlLeftButton.LMouseDown
struct UUWindowTabControlLeftButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlLeftButton.BeforePaint
struct UUWindowTabControlLeftButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.CheckMousePassThrough
struct UUWindowTabControlTabArea_CheckMousePassThrough_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowTabControlTabArea.DrawItem
struct UUWindowTabControlTabArea_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	bool                                               bShowText;                                                // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.RMouseDown
struct UUWindowTabControlTabArea_RMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.MouseMove
struct UUWindowTabControlTabArea_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.LMouseDown
struct UUWindowTabControlTabArea_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.Paint
struct UUWindowTabControlTabArea_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.LayoutTabs
struct UUWindowTabControlTabArea_LayoutTabs_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.SizeTabsMultiLine
struct UUWindowTabControlTabArea_SizeTabsMultiLine_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.SizeTabsSingleLine
struct UUWindowTabControlTabArea_SizeTabsSingleLine_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowTabControlTabArea.Created
struct UUWindowTabControlTabArea_Created_Params
{
};

// Function UWindow.UWindowHScrollbar.MouseMove
struct UUWindowHScrollbar_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHScrollbar.Tick
struct UUWindowHScrollbar_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowHScrollbar.LMouseDown
struct UUWindowHScrollbar_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHScrollbar.Paint
struct UUWindowHScrollbar_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHScrollbar.BeforePaint
struct UUWindowHScrollbar_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHScrollbar.Created
struct UUWindowHScrollbar_Created_Params
{
};

// Function UWindow.UWindowHScrollbar.CheckRange
struct UUWindowHScrollbar_CheckRange_Params
{
};

// Function UWindow.UWindowHScrollbar.SetRange
struct UUWindowHScrollbar_SetRange_Params
{
	float                                              NewMinPos;                                                // (Parm)
	float                                              NewMaxPos;                                                // (Parm)
	float                                              NewMaxVisible;                                            // (Parm)
	float                                              NewScrollAmount;                                          // (OptionalParm, Parm)
};

// Function UWindow.UWindowHScrollbar.Scroll
struct UUWindowHScrollbar_Scroll_Params
{
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowHScrollbar.Show
struct UUWindowHScrollbar_Show_Params
{
	float                                              P;                                                        // (Parm)
};

// Function UWindow.UWindowVScrollbar.MouseMove
struct UUWindowVScrollbar_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowVScrollbar.Tick
struct UUWindowVScrollbar_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowVScrollbar.LMouseDown
struct UUWindowVScrollbar_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowVScrollbar.Paint
struct UUWindowVScrollbar_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowVScrollbar.BeforePaint
struct UUWindowVScrollbar_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowVScrollbar.Created
struct UUWindowVScrollbar_Created_Params
{
};

// Function UWindow.UWindowVScrollbar.CheckRange
struct UUWindowVScrollbar_CheckRange_Params
{
};

// Function UWindow.UWindowVScrollbar.SetRange
struct UUWindowVScrollbar_SetRange_Params
{
	float                                              NewMinPos;                                                // (Parm)
	float                                              NewMaxPos;                                                // (Parm)
	float                                              NewMaxVisible;                                            // (Parm)
	float                                              NewScrollAmount;                                          // (OptionalParm, Parm)
};

// Function UWindow.UWindowVScrollbar.Scroll
struct UUWindowVScrollbar_Scroll_Params
{
	float                                              Delta;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowVScrollbar.Show
struct UUWindowVScrollbar_Show_Params
{
	float                                              P;                                                        // (Parm)
};

// Function UWindow.UWindowSBRightButton.Tick
struct UUWindowSBRightButton_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowSBRightButton.LMouseDown
struct UUWindowSBRightButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBRightButton.BeforePaint
struct UUWindowSBRightButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBRightButton.Created
struct UUWindowSBRightButton_Created_Params
{
};

// Function UWindow.UWindowSBLeftButton.Tick
struct UUWindowSBLeftButton_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowSBLeftButton.LMouseDown
struct UUWindowSBLeftButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBLeftButton.BeforePaint
struct UUWindowSBLeftButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBLeftButton.Created
struct UUWindowSBLeftButton_Created_Params
{
};

// Function UWindow.UWindowSBDownButton.Tick
struct UUWindowSBDownButton_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowSBDownButton.LMouseDown
struct UUWindowSBDownButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBDownButton.BeforePaint
struct UUWindowSBDownButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBDownButton.Created
struct UUWindowSBDownButton_Created_Params
{
};

// Function UWindow.UWindowSBUpButton.Tick
struct UUWindowSBUpButton_Tick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UWindow.UWindowSBUpButton.LMouseDown
struct UUWindowSBUpButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBUpButton.BeforePaint
struct UUWindowSBUpButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSBUpButton.Created
struct UUWindowSBUpButton_Created_Params
{
};

// Function UWindow.UWindowEditControl.SetDelayedNotify
struct UUWindowEditControl_SetDelayedNotify_Params
{
	bool                                               bDelayedNotify;                                           // (Parm)
};

// Function UWindow.UWindowEditControl.BeforePaint
struct UUWindowEditControl_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditControl.Paint
struct UUWindowEditControl_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditControl.SetMaxLength
struct UUWindowEditControl_SetMaxLength_Params
{
	int                                                maxLength;                                                // (Parm)
};

// Function UWindow.UWindowEditControl.SetValue
struct UUWindowEditControl_SetValue_Params
{
	struct FString                                     NewValue;                                                 // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowEditControl.GetValue
struct UUWindowEditControl_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowEditControl.Clear
struct UUWindowEditControl_Clear_Params
{
};

// Function UWindow.UWindowEditControl.SetEditTextColor
struct UUWindowEditControl_SetEditTextColor_Params
{
	struct FColor                                      NewColor;                                                 // (Parm)
};

// Function UWindow.UWindowEditControl.SetHistory
struct UUWindowEditControl_SetHistory_Params
{
	bool                                               bInHistory;                                               // (Parm)
};

// Function UWindow.UWindowEditControl.SetFont
struct UUWindowEditControl_SetFont_Params
{
	int                                                NewFont;                                                  // (Parm)
};

// Function UWindow.UWindowEditControl.SetNumericFloat
struct UUWindowEditControl_SetNumericFloat_Params
{
	bool                                               bNumericFloat;                                            // (Parm)
};

// Function UWindow.UWindowEditControl.SetNumericOnly
struct UUWindowEditControl_SetNumericOnly_Params
{
	bool                                               bNumericOnly;                                             // (Parm)
};

// Function UWindow.UWindowEditControl.Created
struct UUWindowEditControl_Created_Params
{
};

// Function UWindow.UWindowComboList.FocusOtherWindow
struct UUWindowComboList_FocusOtherWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.CloseUp
struct UUWindowComboList_CloseUp_Params
{
};

// Function UWindow.UWindowComboList.ExecuteItem
struct UUWindowComboList_ExecuteItem_Params
{
	class UUWindowComboListItem*                       i;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.DrawItem
struct UUWindowComboList_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.DrawMenuBackground
struct UUWindowComboList_DrawMenuBackground_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.Paint
struct UUWindowComboList_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.BeforePaint
struct UUWindowComboList_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.LMouseDown
struct UUWindowComboList_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.LMouseUp
struct UUWindowComboList_LMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.MouseMove
struct UUWindowComboList_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.SetSelected
struct UUWindowComboList_SetSelected_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboList.InsertItem
struct UUWindowComboList_InsertItem_Params
{
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Value2;                                                   // (OptionalParm, Parm, NeedCtorLink)
	int                                                SortWeight;                                               // (OptionalParm, Parm)
};

// Function UWindow.UWindowComboList.AddItem
struct UUWindowComboList_AddItem_Params
{
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Value2;                                                   // (OptionalParm, Parm, NeedCtorLink)
	int                                                SortWeight;                                               // (OptionalParm, Parm)
};

// Function UWindow.UWindowComboList.GetItemValue2
struct UUWindowComboList_GetItemValue2_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowComboList.RemoveItem
struct UUWindowComboList_RemoveItem_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function UWindow.UWindowComboList.GetItemValue
struct UUWindowComboList_GetItemValue_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowComboList.FindItemIndex2
struct UUWindowComboList_FindItemIndex2_Params
{
	struct FString                                     Value2;                                                   // (Parm, NeedCtorLink)
	bool                                               bIgnoreCase;                                              // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowComboList.FindItemIndex
struct UUWindowComboList_FindItemIndex_Params
{
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
	bool                                               bIgnoreCase;                                              // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowComboList.Created
struct UUWindowComboList_Created_Params
{
};

// Function UWindow.UWindowComboList.Setup
struct UUWindowComboList_Setup_Params
{
};

// Function UWindow.UWindowComboList.GetLookAndFeelTexture
struct UUWindowComboList_GetLookAndFeelTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowComboList.Clear
struct UUWindowComboList_Clear_Params
{
};

// Function UWindow.UWindowComboList.WindowShown
struct UUWindowComboList_WindowShown_Params
{
};

// Function UWindow.UWindowComboList.Sort
struct UUWindowComboList_Sort_Params
{
};

// Function UWindow.UWindowCheckbox.LMouseUp
struct UUWindowCheckbox_LMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowCheckbox.Paint
struct UUWindowCheckbox_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowCheckbox.BeforePaint
struct UUWindowCheckbox_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboRightButton.LMouseDown
struct UUWindowComboRightButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboRightButton.BeforePaint
struct UUWindowComboRightButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboLeftButton.LMouseDown
struct UUWindowComboLeftButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboLeftButton.BeforePaint
struct UUWindowComboLeftButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboButton.FocusOtherWindow
struct UUWindowComboButton_FocusOtherWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowComboButton.Click
struct UUWindowComboButton_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboButton.LMouseDown
struct UUWindowComboButton_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboButton.BeforePaint
struct UUWindowComboButton_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboControl.FocusOtherWindow
struct UUWindowComboControl_FocusOtherWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowComboControl.Clear
struct UUWindowComboControl_Clear_Params
{
};

// Function UWindow.UWindowComboControl.ClearValue
struct UUWindowComboControl_ClearValue_Params
{
};

// Function UWindow.UWindowComboControl.Sort
struct UUWindowComboControl_Sort_Params
{
};

// Function UWindow.UWindowComboControl.DropDown
struct UUWindowComboControl_DropDown_Params
{
};

// Function UWindow.UWindowComboControl.CloseUp
struct UUWindowComboControl_CloseUp_Params
{
};

// Function UWindow.UWindowComboControl.BeforePaint
struct UUWindowComboControl_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboControl.InsertItem
struct UUWindowComboControl_InsertItem_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FString                                     S2;                                                       // (OptionalParm, Parm, NeedCtorLink)
	int                                                SortWeight;                                               // (OptionalParm, Parm)
};

// Function UWindow.UWindowComboControl.AddItem
struct UUWindowComboControl_AddItem_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FString                                     S2;                                                       // (OptionalParm, Parm, NeedCtorLink)
	int                                                SortWeight;                                               // (OptionalParm, Parm)
};

// Function UWindow.UWindowComboControl.Paint
struct UUWindowComboControl_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowComboControl.SetMaxLength
struct UUWindowComboControl_SetMaxLength_Params
{
	int                                                maxLength;                                                // (Parm)
};

// Function UWindow.UWindowComboControl.SetValue
struct UUWindowComboControl_SetValue_Params
{
	struct FString                                     NewValue;                                                 // (Parm, NeedCtorLink)
	struct FString                                     NewValue2;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function UWindow.UWindowComboControl.GetValue2
struct UUWindowComboControl_GetValue2_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowComboControl.GetValue
struct UUWindowComboControl_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowComboControl.SetSelectedIndex
struct UUWindowComboControl_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function UWindow.UWindowComboControl.GetSelectedIndex
struct UUWindowComboControl_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowComboControl.SetEditable
struct UUWindowComboControl_SetEditable_Params
{
	bool                                               bNewCanEdit;                                              // (Parm)
};

// Function UWindow.UWindowComboControl.SetEditTextColor
struct UUWindowComboControl_SetEditTextColor_Params
{
	struct FColor                                      NewColor;                                                 // (Parm)
};

// Function UWindow.UWindowComboControl.SetFont
struct UUWindowComboControl_SetFont_Params
{
	int                                                NewFont;                                                  // (Parm)
};

// Function UWindow.UWindowComboControl.SetNumericFloat
struct UUWindowComboControl_SetNumericFloat_Params
{
	bool                                               bNumericFloat;                                            // (Parm)
};

// Function UWindow.UWindowComboControl.SetNumericOnly
struct UUWindowComboControl_SetNumericOnly_Params
{
	bool                                               bNumericOnly;                                             // (Parm)
};

// Function UWindow.UWindowComboControl.Close
struct UUWindowComboControl_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowComboControl.FindItemIndex2
struct UUWindowComboControl_FindItemIndex2_Params
{
	struct FString                                     v2;                                                       // (Parm, NeedCtorLink)
	bool                                               bIgnoreCase;                                              // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowComboControl.RemoveItem
struct UUWindowComboControl_RemoveItem_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function UWindow.UWindowComboControl.FindItemIndex
struct UUWindowComboControl_FindItemIndex_Params
{
	struct FString                                     V;                                                        // (Parm, NeedCtorLink)
	bool                                               bIgnoreCase;                                              // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowComboControl.Notify
struct UUWindowComboControl_Notify_Params
{
	unsigned char                                      E;                                                        // (Parm)
};

// Function UWindow.UWindowComboControl.SetButtons
struct UUWindowComboControl_SetButtons_Params
{
	bool                                               bInButtons;                                               // (Parm)
};

// Function UWindow.UWindowComboControl.Created
struct UUWindowComboControl_Created_Params
{
};

// Function UWindow.UWindowConsoleClientWindow.Message
struct UUWindowConsoleClientWindow_Message_Params
{
	struct FString                                     Msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	float                                              MsgLife;                                                  // (Parm)
};

// Function UWindow.UWindowConsoleClientWindow.Paint
struct UUWindowConsoleClientWindow_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowConsoleClientWindow.BeforePaint
struct UUWindowConsoleClientWindow_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowConsoleClientWindow.Notify
struct UUWindowConsoleClientWindow_Notify_Params
{
	class UUWindowDialogControl*                       C;                                                        // (Parm)
	unsigned char                                      E;                                                        // (Parm)
};

// Function UWindow.UWindowConsoleClientWindow.Created
struct UUWindowConsoleClientWindow_Created_Params
{
};

// Function UWindow.UWindowMessageBoxArea.Paint
struct UUWindowMessageBoxArea_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowMessageBoxArea.GetHeight
struct UUWindowMessageBoxArea_GetHeight_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowTabControlItem.RightClickTab
struct UUWindowTabControlItem_RightClickTab_Params
{
};

// Function UWindow.UWindowTabControlItem.SetCaption
struct UUWindowTabControlItem_SetCaption_Params
{
	struct FString                                     NewCaption;                                               // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowPageControlPage.NextPage
struct UUWindowPageControlPage_NextPage_Params
{
	class UUWindowPageControlPage*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowPageControlPage.RightClickTab
struct UUWindowPageControlPage_RightClickTab_Params
{
};

// Function UWindow.UWindowEditBox.KeyFocusExit
struct UUWindowEditBox_KeyFocusExit_Params
{
};

// Function UWindow.UWindowEditBox.DoubleClick
struct UUWindowEditBox_DoubleClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.KeyFocusEnter
struct UUWindowEditBox_KeyFocusEnter_Params
{
};

// Function UWindow.UWindowEditBox.FocusOtherWindow
struct UUWindowEditBox_FocusOtherWindow_Params
{
	class UUWindowWindow*                              W;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.Close
struct UUWindowEditBox_Close_Params
{
	bool                                               bByParent;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowEditBox.Paint
struct UUWindowEditBox_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.LMouseDown
struct UUWindowEditBox_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.Click
struct UUWindowEditBox_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.KeyDown
struct UUWindowEditBox_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.KeyUp
struct UUWindowEditBox_KeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.KeyPressed
struct UUWindowEditBox_KeyPressed_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
};

// Function UWindow.UWindowEditBox.EditCut
struct UUWindowEditBox_EditCut_Params
{
};

// Function UWindow.UWindowEditBox.EditPaste
struct UUWindowEditBox_EditPaste_Params
{
};

// Function UWindow.UWindowEditBox.EditCopy
struct UUWindowEditBox_EditCopy_Params
{
};

// Function UWindow.UWindowEditBox.MoveEnd
struct UUWindowEditBox_MoveEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.MoveHome
struct UUWindowEditBox_MoveHome_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.WordRight
struct UUWindowEditBox_WordRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.MoveRight
struct UUWindowEditBox_MoveRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.MoveLeft
struct UUWindowEditBox_MoveLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.WordLeft
struct UUWindowEditBox_WordLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.Delete
struct UUWindowEditBox_Delete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.Backspace
struct UUWindowEditBox_Backspace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.Insert
struct UUWindowEditBox_Insert_Params
{
	unsigned char                                      C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowEditBox.InsertText
struct UUWindowEditBox_InsertText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowEditBox.Notify
struct UUWindowEditBox_Notify_Params
{
	unsigned char                                      E;                                                        // (Parm)
};

// Function UWindow.UWindowEditBox.GetValue2
struct UUWindowEditBox_GetValue2_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowEditBox.GetValue
struct UUWindowEditBox_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UWindow.UWindowEditBox.SelectAll
struct UUWindowEditBox_SelectAll_Params
{
};

// Function UWindow.UWindowEditBox.Clear
struct UUWindowEditBox_Clear_Params
{
};

// Function UWindow.UWindowEditBox.SetValue
struct UUWindowEditBox_SetValue_Params
{
	struct FString                                     NewValue;                                                 // (Parm, NeedCtorLink)
	struct FString                                     NewValue2;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function UWindow.UWindowEditBox.SetEditable
struct UUWindowEditBox_SetEditable_Params
{
	bool                                               bEditable;                                                // (Parm)
};

// Function UWindow.UWindowEditBox.SetHistory
struct UUWindowEditBox_SetHistory_Params
{
	bool                                               bInHistory;                                               // (Parm)
};

// Function UWindow.UWindowEditBox.Created
struct UUWindowEditBox_Created_Params
{
};

// Function UWindow.UWindowComboListItem.Compare
struct UUWindowComboListItem_Compare_Params
{
	class UUWindowList*                                t;                                                        // (Parm)
	class UUWindowList*                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDynamicTextArea.RemoveWrap
struct UUWindowDynamicTextArea_RemoveWrap_Params
{
	class UUWindowDynamicTextRow*                      L;                                                        // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.RemoveNextWord
struct UUWindowDynamicTextArea_RemoveNextWord_Params
{
	struct FString                                     Text;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     NextWord;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function UWindow.UWindowDynamicTextArea.SplitRowAt
struct UUWindowDynamicTextArea_SplitRowAt_Params
{
	class UUWindowDynamicTextRow*                      L;                                                        // (Parm)
	int                                                SplitPos;                                                 // (Parm)
	class UUWindowDynamicTextRow*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDynamicTextArea.GetWrapPos
struct UUWindowDynamicTextArea_GetWrapPos_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowDynamicTextRow*                      L;                                                        // (Parm)
	float                                              MaxWidth;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDynamicTextArea.DrawTextLine
struct UUWindowDynamicTextArea_DrawTextLine_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowDynamicTextRow*                      L;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDynamicTextArea.WrapRow
struct UUWindowDynamicTextArea_WrapRow_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowDynamicTextRow*                      L;                                                        // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.WordWrap
struct UUWindowDynamicTextArea_WordWrap_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	bool                                               bForce;                                                   // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.CheckMaxRows
struct UUWindowDynamicTextArea_CheckMaxRows_Params
{
	class UUWindowDynamicTextRow*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDynamicTextArea.AddText
struct UUWindowDynamicTextArea_AddText_Params
{
	struct FString                                     NewLine;                                                  // (Parm, NeedCtorLink)
	class UUWindowDynamicTextRow*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowDynamicTextArea.Paint
struct UUWindowDynamicTextArea_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.BeforePaint
struct UUWindowDynamicTextArea_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.TextAreaTextSize
struct UUWindowDynamicTextArea_TextAreaTextSize_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	float                                              W;                                                        // (Parm, OutParm)
	float                                              H;                                                        // (Parm, OutParm)
};

// Function UWindow.UWindowDynamicTextArea.TextAreaClipText
struct UUWindowDynamicTextArea_TextAreaClipText_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              DrawX;                                                    // (Parm)
	float                                              DrawY;                                                    // (Parm)
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bCheckHotKey;                                             // (OptionalParm, Parm)
};

// Function UWindow.UWindowDynamicTextArea.SetTextColor
struct UUWindowDynamicTextArea_SetTextColor_Params
{
	struct FColor                                      C;                                                        // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.SetFont
struct UUWindowDynamicTextArea_SetFont_Params
{
	int                                                f;                                                        // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.SetAbsoluteFont
struct UUWindowDynamicTextArea_SetAbsoluteFont_Params
{
	class UFont*                                       f;                                                        // (Parm)
};

// Function UWindow.UWindowDynamicTextArea.Clear
struct UUWindowDynamicTextArea_Clear_Params
{
};

// Function UWindow.UWindowDynamicTextArea.Created
struct UUWindowDynamicTextArea_Created_Params
{
};

// Function UWindow.UWindowSmallCloseButton.Click
struct UUWindowSmallCloseButton_Click_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowSmallCloseButton.Created
struct UUWindowSmallCloseButton_Created_Params
{
};

// Function UWindow.UWindowListBox.KeyUp
struct UUWindowListBox_KeyUp_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.DrawItem
struct UUWindowListBox_DrawItem_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	class UUWindowList*                                item;                                                     // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.ExternalDragOver
struct UUWindowListBox_ExternalDragOver_Params
{
	class UUWindowDialogControl*                       ExternalControl;                                          // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowListBox.MouseMove
struct UUWindowListBox_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.DoubleClickItem
struct UUWindowListBox_DoubleClickItem_Params
{
	class UUWindowListBoxItem*                         i;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.ReceiveDoubleClickItem
struct UUWindowListBox_ReceiveDoubleClickItem_Params
{
	class UUWindowListBox*                             L;                                                        // (Parm)
	class UUWindowListBoxItem*                         i;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.DoubleClick
struct UUWindowListBox_DoubleClick_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.LMouseDown
struct UUWindowListBox_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.SetSelected
struct UUWindowListBox_SetSelected_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowListBox.SetSelectedItem
struct UUWindowListBox_SetSelectedItem_Params
{
	class UUWindowListBoxItem*                         NewSelected;                                              // (Parm)
};

// Function UWindow.UWindowListBox.MakeSelectedVisible
struct UUWindowListBox_MakeSelectedVisible_Params
{
};

// Function UWindow.UWindowListBox.GetItemAt
struct UUWindowListBox_GetItemAt_Params
{
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
	class UUWindowListBoxItem*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowListBox.Resized
struct UUWindowListBox_Resized_Params
{
};

// Function UWindow.UWindowListBox.Paint
struct UUWindowListBox_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
};

// Function UWindow.UWindowListBox.Sort
struct UUWindowListBox_Sort_Params
{
};

// Function UWindow.UWindowListBox.SetHelpText
struct UUWindowListBox_SetHelpText_Params
{
	struct FString                                     t;                                                        // (Parm, NeedCtorLink)
};

// Function UWindow.UWindowListBox.BeforePaint
struct UUWindowListBox_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              MouseX;                                                   // (Parm)
	float                                              MouseY;                                                   // (Parm)
};

// Function UWindow.UWindowListBox.AddItem
struct UUWindowListBox_AddItem_Params
{
	struct FString                                     C;                                                        // (Parm, NeedCtorLink)
	class UUWindowListBoxItem*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowListBox.Created
struct UUWindowListBox_Created_Params
{
};

// Function UWindow.UWindowSmallOKButton.Created
struct UUWindowSmallOKButton_Created_Params
{
};

// Function UWindow.UWindowHSliderControl.KeyDown
struct UUWindowHSliderControl_KeyDown_Params
{
	int                                                Key;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHSliderControl.MouseMove
struct UUWindowHSliderControl_MouseMove_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHSliderControl.LMouseDown
struct UUWindowHSliderControl_LMouseDown_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHSliderControl.LMouseUp
struct UUWindowHSliderControl_LMouseUp_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHSliderControl.Paint
struct UUWindowHSliderControl_Paint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHSliderControl.BeforePaint
struct UUWindowHSliderControl_BeforePaint_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function UWindow.UWindowHSliderControl.CheckValue
struct UUWindowHSliderControl_CheckValue_Params
{
	float                                              test;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowHSliderControl.SetValue
struct UUWindowHSliderControl_SetValue_Params
{
	float                                              NewValue;                                                 // (Parm)
	bool                                               bNoNotify;                                                // (OptionalParm, Parm)
};

// Function UWindow.UWindowHSliderControl.GetValue
struct UUWindowHSliderControl_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UWindow.UWindowHSliderControl.SetRange
struct UUWindowHSliderControl_SetRange_Params
{
	float                                              Min;                                                      // (Parm)
	float                                              Max;                                                      // (Parm)
	int                                                NewStep;                                                  // (Parm)
};

// Function UWindow.UWindowHSliderControl.Created
struct UUWindowHSliderControl_Created_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function NWindow.UIEventManager.GetUIState
struct UUIEventManager_GetUIState_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIEventManager.SMessageBox
struct UUIEventManager_SMessageBox_Params
{
	int                                                SystemMsgNum;                                             // (Parm)
};

// Function NWindow.UIEventManager.MessageBox
struct UUIEventManager_MessageBox_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.UIEventManager.SetUIState
struct UUIEventManager_SetUIState_Params
{
	struct FString                                     State;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIEventManager.RegisterState
struct UUIEventManager_RegisterState_Params
{
	struct FString                                     WindowName;                                               // (Parm, NeedCtorLink)
	struct FString                                     State;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIEventManager.RegisterEvent
struct UUIEventManager_RegisterEvent_Params
{
	int                                                ev;                                                       // (Parm)
};

// Function NWindow.UIEventManager.ParseFloat
struct UUIEventManager_ParseFloat_Params
{
	struct FString                                     a_strCmd;                                                 // (Parm, NeedCtorLink)
	struct FString                                     a_strMatch;                                               // (Parm, NeedCtorLink)
	float                                              a_Result;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIEventManager.ParseINT64
struct UUIEventManager_ParseINT64_Params
{
	struct FString                                     a_strCmd;                                                 // (Parm, NeedCtorLink)
	struct FString                                     a_strMatch;                                               // (Parm, NeedCtorLink)
	struct FINT64                                      a_Result;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIEventManager.ParseInt
struct UUIEventManager_ParseInt_Params
{
	struct FString                                     a_strCmd;                                                 // (Parm, NeedCtorLink)
	struct FString                                     a_strMatch;                                               // (Parm, NeedCtorLink)
	int                                                a_Result;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIEventManager.ParseString
struct UUIEventManager_ParseString_Params
{
	struct FString                                     a_strCmd;                                                 // (Parm, NeedCtorLink)
	struct FString                                     a_strMatch;                                               // (Parm, NeedCtorLink)
	struct FString                                     a_strResult;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIEventManager.ParamAddINT64
struct UUIEventManager_ParamAddINT64_Params
{
	struct FString                                     strParam;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	struct FINT64                                      sValue;                                                   // (Parm)
};

// Function NWindow.UIEventManager.ParamAdd
struct UUIEventManager_ParamAdd_Params
{
	struct FString                                     strParam;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     strValue;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.UIEventManager.ExecuteEvent
struct UUIEventManager_ExecuteEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.IsCurrentState
struct UWindowHandle_IsCurrentState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.ExitState
struct UWindowHandle_ExitState_Params
{
};

// Function NWindow.WindowHandle.EnterState
struct UWindowHandle_EnterState_Params
{
};

// Function NWindow.WindowHandle.ChangeControlOrder
struct UWindowHandle_ChangeControlOrder_Params
{
	TEnumAsByte<EControlOrderWay>                      WayType;                                                  // (Parm)
};

// Function NWindow.WindowHandle.MakeBaseUC
struct UWindowHandle_MakeBaseUC_Params
{
	struct FString                                     UCName;                                                   // (Parm, NeedCtorLink)
	struct FString                                     FilePathName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.ConvertToEditable
struct UWindowHandle_ConvertToEditable_Params
{
};

// Function NWindow.WindowHandle.SetXMLDocumentInfo
struct UWindowHandle_SetXMLDocumentInfo_Params
{
	struct FString                                     Comment;                                                  // (Parm, NeedCtorLink)
	struct FString                                     NameSpace;                                                // (Parm, NeedCtorLink)
	struct FString                                     XSI;                                                      // (Parm, NeedCtorLink)
	struct FString                                     SchemaLocation;                                           // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.GetXMLDocumentInfo
struct UWindowHandle_GetXMLDocumentInfo_Params
{
	struct FString                                     Comment;                                                  // (Parm, OutParm, NeedCtorLink)
	struct FString                                     NameSpace;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     XSI;                                                      // (Parm, OutParm, NeedCtorLink)
	struct FString                                     SchemaLocation;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.SaveXMLWindow
struct UWindowHandle_SaveXMLWindow_Params
{
	struct FString                                     FilePathName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.LoadXMLWindow
struct UWindowHandle_LoadXMLWindow_Params
{
	struct FString                                     FilePathName;                                             // (Parm, NeedCtorLink)
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.GetControlType
struct UWindowHandle_GetControlType_Params
{
	TEnumAsByte<EXMLControlType>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.IsControlContainer
struct UWindowHandle_IsControlContainer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetScript
struct UWindowHandle_SetScript_Params
{
	struct FString                                     ScriptName;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.SetBackTexture
struct UWindowHandle_SetBackTexture_Params
{
	struct FString                                     TextureName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.DeleteChildWnd
struct UWindowHandle_DeleteChildWnd_Params
{
	struct FString                                     ChildName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.GetClassName
struct UWindowHandle_GetClassName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.AddChildWnd
struct UWindowHandle_AddChildWnd_Params
{
	TEnumAsByte<EXMLControlType>                       ChildType;                                                // (Parm)
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetEditable
struct UWindowHandle_SetEditable_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function NWindow.WindowHandle.InitRotation
struct UWindowHandle_InitRotation_Params
{
};

// Function NWindow.WindowHandle.IsFront
struct UWindowHandle_IsFront_Params
{
};

// Function NWindow.WindowHandle.ClearRotation
struct UWindowHandle_ClearRotation_Params
{
};

// Function NWindow.WindowHandle.Rotate
struct UWindowHandle_Rotate_Params
{
	bool                                               bWithCapture;                                             // (OptionalParm, Parm)
	int                                                RotationTime;                                             // (OptionalParm, Parm)
	struct FVector                                     Direction;                                                // (OptionalParm, Parm)
	int                                                BeginAlpha;                                               // (OptionalParm, Parm)
	int                                                EndAlpha;                                                 // (OptionalParm, Parm)
	bool                                               bCW;                                                      // (OptionalParm, Parm)
	float                                              RotationConstant;                                         // (OptionalParm, Parm)
};

// Function NWindow.WindowHandle.SetSettledWnd
struct UWindowHandle_SetSettledWnd_Params
{
	bool                                               bFlag;                                                    // (Parm)
};

// Function NWindow.WindowHandle.SetScrollHeight
struct UWindowHandle_SetScrollHeight_Params
{
	int                                                Height;                                                   // (Parm)
};

// Function NWindow.WindowHandle.SetScrollPosition
struct UWindowHandle_SetScrollPosition_Params
{
	int                                                pos;                                                      // (Parm)
};

// Function NWindow.WindowHandle.SetScrollBarPosition
struct UWindowHandle_SetScrollBarPosition_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                HeightOffset;                                             // (Parm)
};

// Function NWindow.WindowHandle.SetResizeFrameSize
struct UWindowHandle_SetResizeFrameSize_Params
{
	int                                                nWidth;                                                   // (Parm)
	int                                                nHeight;                                                  // (Parm)
};

// Function NWindow.WindowHandle.SetFrameSize
struct UWindowHandle_SetFrameSize_Params
{
	int                                                nWidth;                                                   // (Parm)
	int                                                nHeight;                                                  // (Parm)
};

// Function NWindow.WindowHandle.GetTooltipCustomType
struct UWindowHandle_GetTooltipCustomType_Params
{
	struct FCustomTooltip                              Info;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.SetTooltipCustomType
struct UWindowHandle_SetTooltipCustomType_Params
{
	struct FCustomTooltip                              Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.SetTooltipType
struct UWindowHandle_SetTooltipType_Params
{
	struct FString                                     TooltipType;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.GetTooltipText
struct UWindowHandle_GetTooltipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.SetTooltipText
struct UWindowHandle_SetTooltipText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.NotifyAlarm
struct UWindowHandle_NotifyAlarm_Params
{
};

// Function NWindow.WindowHandle.KillTimer
struct UWindowHandle_KillTimer_Params
{
	int                                                a_TimerID;                                                // (Parm)
};

// Function NWindow.WindowHandle.SetTimer
struct UWindowHandle_SetTimer_Params
{
	int                                                a_TimerID;                                                // (Parm)
	int                                                a_DelayMiliseconds;                                       // (Parm)
};

// Function NWindow.WindowHandle.ReleaseFocus
struct UWindowHandle_ReleaseFocus_Params
{
};

// Function NWindow.WindowHandle.IsFocused
struct UWindowHandle_IsFocused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetFocus
struct UWindowHandle_SetFocus_Params
{
};

// Function NWindow.WindowHandle.IsEnableWindow
struct UWindowHandle_IsEnableWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.DisableWindow
struct UWindowHandle_DisableWindow_Params
{
};

// Function NWindow.WindowHandle.EnableWindow
struct UWindowHandle_EnableWindow_Params
{
};

// Function NWindow.WindowHandle.SetDragOverTexture
struct UWindowHandle_SetDragOverTexture_Params
{
	struct FString                                     a_TextureName;                                            // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.SetVirtualDrag
struct UWindowHandle_SetVirtualDrag_Params
{
	bool                                               a_bFlag;                                                  // (Parm)
};

// Function NWindow.WindowHandle.IsVirtualDrag
struct UWindowHandle_IsVirtualDrag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetStuckable
struct UWindowHandle_SetStuckable_Params
{
	bool                                               a_Stuckable;                                              // (Parm)
};

// Function NWindow.WindowHandle.SetDraggable
struct UWindowHandle_SetDraggable_Params
{
	bool                                               a_Draggable;                                              // (Parm)
};

// Function NWindow.WindowHandle.IsDraggable
struct UWindowHandle_IsDraggable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.IsAnchored
struct UWindowHandle_IsAnchored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.ClearAnchor
struct UWindowHandle_ClearAnchor_Params
{
};

// Function NWindow.WindowHandle.SetAnchor
struct UWindowHandle_SetAnchor_Params
{
	struct FString                                     AnchorWindowName;                                         // (Parm, NeedCtorLink)
	struct FString                                     RelativePoint;                                            // (Parm, NeedCtorLink)
	struct FString                                     AnchorPoint;                                              // (Parm, NeedCtorLink)
	int                                                OffsetX;                                                  // (Parm)
	int                                                OffsetY;                                                  // (Parm)
};

// Function NWindow.WindowHandle.EnableTick
struct UWindowHandle_EnableTick_Params
{
};

// Function NWindow.WindowHandle.MoveShake
struct UWindowHandle_MoveShake_Params
{
	int                                                a_nRange;                                                 // (Parm)
	int                                                a_nSet;                                                   // (Parm)
	float                                              a_Seconds;                                                // (OptionalParm, Parm)
};

// Function NWindow.WindowHandle.MoveEx
struct UWindowHandle_MoveEx_Params
{
	int                                                a_nX;                                                     // (Parm)
	int                                                a_nY;                                                     // (Parm)
};

// Function NWindow.WindowHandle.MoveTo
struct UWindowHandle_MoveTo_Params
{
	int                                                a_nX;                                                     // (Parm)
	int                                                a_nY;                                                     // (Parm)
};

// Function NWindow.WindowHandle.Move
struct UWindowHandle_Move_Params
{
	int                                                a_nDeltaX;                                                // (Parm)
	int                                                a_nDeltaY;                                                // (Parm)
	float                                              a_Seconds;                                                // (OptionalParm, Parm)
};

// Function NWindow.WindowHandle.IsRelativeSize
struct UWindowHandle_IsRelativeSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetWindowSizeRel43
struct UWindowHandle_SetWindowSizeRel43_Params
{
	float                                              fWidthRate;                                               // (Parm)
	float                                              fHeightRate;                                              // (Parm)
	int                                                nOffsetWidth;                                             // (Parm)
	int                                                nOffsetHeight;                                            // (Parm)
};

// Function NWindow.WindowHandle.GetWindowSizeRel
struct UWindowHandle_GetWindowSizeRel_Params
{
	float                                              fWidthRate;                                               // (Parm, OutParm)
	float                                              fHeightRate;                                              // (Parm, OutParm)
	int                                                nOffsetWidth;                                             // (Parm, OutParm)
	int                                                nOffsetHeight;                                            // (Parm, OutParm)
};

// Function NWindow.WindowHandle.SetWindowSizeRel
struct UWindowHandle_SetWindowSizeRel_Params
{
	float                                              fWidthRate;                                               // (Parm)
	float                                              fHeightRate;                                              // (Parm)
	int                                                nOffsetWidth;                                             // (Parm)
	int                                                nOffsetHeight;                                            // (Parm)
};

// Function NWindow.WindowHandle.GetWindowSize
struct UWindowHandle_GetWindowSize_Params
{
	int                                                a_Width;                                                  // (Parm, OutParm)
	int                                                a_Height;                                                 // (Parm, OutParm)
};

// Function NWindow.WindowHandle.SetWindowSize
struct UWindowHandle_SetWindowSize_Params
{
	int                                                a_Width;                                                  // (Parm)
	int                                                a_Height;                                                 // (Parm)
};

// Function NWindow.WindowHandle.AddWindowSize
struct UWindowHandle_AddWindowSize_Params
{
	int                                                a_DeltaWidth;                                             // (Parm)
	int                                                a_DeltaHeight;                                            // (Parm)
};

// Function NWindow.WindowHandle.GetRect
struct UWindowHandle_GetRect_Params
{
	struct FRect                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetAlwaysFullAlpha
struct UWindowHandle_SetAlwaysFullAlpha_Params
{
	bool                                               a_AlwaysFullAlpha;                                        // (Parm)
};

// Function NWindow.WindowHandle.SetFontColor
struct UWindowHandle_SetFontColor_Params
{
	struct FColor                                      a_FontColor;                                              // (Parm)
};

// Function NWindow.WindowHandle.IsAlwaysOnBack
struct UWindowHandle_IsAlwaysOnBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.IsAlwaysOnTop
struct UWindowHandle_IsAlwaysOnTop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.IsVirtual
struct UWindowHandle_IsVirtual_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.GetScriptName
struct UWindowHandle_GetScriptName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.GetScript
struct UWindowHandle_GetScript_Params
{
	class UUIScript*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.SetAlpha
struct UWindowHandle_SetAlpha_Params
{
	int                                                a_Alpha;                                                  // (Parm)
	float                                              a_Seconds;                                                // (OptionalParm, Parm)
};

// Function NWindow.WindowHandle.GetAlpha
struct UWindowHandle_GetAlpha_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.GetTopFrameWnd
struct UWindowHandle_GetTopFrameWnd_Params
{
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.IsChildOf
struct UWindowHandle_IsChildOf_Params
{
	class UWindowHandle*                               a_hParentWnd;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.GetChildWindowList
struct UWindowHandle_GetChildWindowList_Params
{
	TArray<class UWindowHandle*>                       a_ChildList;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.WindowHandle.GetParentWindowHandle
struct UWindowHandle_GetParentWindowHandle_Params
{
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.ChangeParentWindow
struct UWindowHandle_ChangeParentWindow_Params
{
	class UWindowHandle*                               a_hNewParentWnd;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.GetParentWindowName
struct UWindowHandle_GetParentWindowName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.GetWindowName
struct UWindowHandle_GetWindowName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.WindowHandle.IsMinimizedWindow
struct UWindowHandle_IsMinimizedWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.IsShowWindow
struct UWindowHandle_IsShowWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.WindowHandle.HideWindow
struct UWindowHandle_HideWindow_Params
{
};

// Function NWindow.WindowHandle.ShowWindow
struct UWindowHandle_ShowWindow_Params
{
};

// Function NWindow.WindowHandle.SetTitlePosOffset
struct UWindowHandle_SetTitlePosOffset_Params
{
	int                                                OffsetX;                                                  // (Parm)
	int                                                OffsetY;                                                  // (Parm)
};

// Function NWindow.WindowHandle.SetWindowTitle
struct UWindowHandle_SetWindowTitle_Params
{
	struct FString                                     a_Title;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.VideoPlayerCtrlHandle.FullScreen
struct UVideoPlayerCtrlHandle_FullScreen_Params
{
};

// Function NWindow.VideoPlayerCtrlHandle.Resize
struct UVideoPlayerCtrlHandle_Resize_Params
{
};

// Function NWindow.VideoPlayerCtrlHandle.EndMovie
struct UVideoPlayerCtrlHandle_EndMovie_Params
{
};

// Function NWindow.VideoPlayerCtrlHandle.PlayMovie
struct UVideoPlayerCtrlHandle_PlayMovie_Params
{
};

// Function NWindow.TreeHandle.SetNodeItemText
struct UTreeHandle_SetNodeItemText_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	int                                                nTextID;                                                  // (Parm)
	struct FString                                     strText;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.TreeHandle.ShowScrollBar
struct UTreeHandle_ShowScrollBar_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.TreeHandle.GetParentNode
struct UTreeHandle_GetParentNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.TreeHandle.GetChildNode
struct UTreeHandle_GetChildNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.TreeHandle.IsExpandedNode
struct UTreeHandle_IsExpandedNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.TreeHandle.IsNodeNameExist
struct UTreeHandle_IsNodeNameExist_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.TreeHandle.DeleteNode
struct UTreeHandle_DeleteNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.TreeHandle.GetExpandedNode
struct UTreeHandle_GetExpandedNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.TreeHandle.SetExpandedNode
struct UTreeHandle_SetExpandedNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               bExpanded;                                                // (Parm)
};

// Function NWindow.TreeHandle.Clear
struct UTreeHandle_Clear_Params
{
};

// Function NWindow.TreeHandle.InsertNodeItem
struct UTreeHandle_InsertNodeItem_Params
{
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FXMLTreeNodeItemInfo                        infNodeItem;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.TreeHandle.InsertNode
struct UTreeHandle_InsertNode_Params
{
	struct FString                                     strParentName;                                            // (Parm, NeedCtorLink)
	struct FXMLTreeNodeInfo                            infNode;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.TextureHandle.SetRotatingDirection
struct UTextureHandle_SetRotatingDirection_Params
{
	int                                                Dir;                                                      // (Parm)
};

// Function NWindow.TextureHandle.SetAutoRotateType
struct UTextureHandle_SetAutoRotateType_Params
{
	TEnumAsByte<ETextureAutoRotateType>                type;                                                     // (Parm)
};

// Function NWindow.TextureHandle.GetTextureName
struct UTextureHandle_GetTextureName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.TextureHandle.SetTextureWithObject
struct UTextureHandle_SetTextureWithObject_Params
{
	class UTexture*                                    objTexture;                                               // (Parm)
};

// Function NWindow.TextureHandle.SetTextureWithClanCrest
struct UTextureHandle_SetTextureWithClanCrest_Params
{
	int                                                clanID;                                                   // (Parm)
};

// Function NWindow.TextureHandle.SetTextureCtrlType
struct UTextureHandle_SetTextureCtrlType_Params
{
	TEnumAsByte<ETextureCtrlType>                      type;                                                     // (Parm)
};

// Function NWindow.TextureHandle.SetTextureSize
struct UTextureHandle_SetTextureSize_Params
{
	int                                                a_UL;                                                     // (Parm)
	int                                                a_VL;                                                     // (Parm)
};

// Function NWindow.TextureHandle.SetUV
struct UTextureHandle_SetUV_Params
{
	int                                                a_U;                                                      // (Parm)
	int                                                a_V;                                                      // (Parm)
};

// Function NWindow.TextureHandle.SetTexture
struct UTextureHandle_SetTexture_Params
{
	struct FString                                     a_TextureName;                                            // (Parm, NeedCtorLink)
};

// Function NWindow.TextListBoxHandle.Clear
struct UTextListBoxHandle_Clear_Params
{
};

// Function NWindow.TextListBoxHandle.AddString
struct UTextListBoxHandle_AddString_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FColor                                      TextColor;                                                // (Parm)
};

// Function NWindow.TextBoxHandle.SetTooltipString
struct UTextBoxHandle_SetTooltipString_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.TextBoxHandle.SetInt
struct UTextBoxHandle_SetInt_Params
{
	int                                                Number;                                                   // (Parm)
};

// Function NWindow.TextBoxHandle.SetAlign
struct UTextBoxHandle_SetAlign_Params
{
	TEnumAsByte<ETextAlign>                            Align;                                                    // (Parm)
};

// Function NWindow.TextBoxHandle.GetTextColor
struct UTextBoxHandle_GetTextColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.TextBoxHandle.SetTextColor
struct UTextBoxHandle_SetTextColor_Params
{
	struct FColor                                      a_Color;                                                  // (Parm)
};

// Function NWindow.TextBoxHandle.SetText
struct UTextBoxHandle_SetText_Params
{
	struct FString                                     a_Text;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.TextBoxHandle.GetText
struct UTextBoxHandle_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.TabHandle.SetButtonName
struct UTabHandle_SetButtonName_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     NewName;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.TabHandle.MergeTab
struct UTabHandle_MergeTab_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.TabHandle.SetDisable
struct UTabHandle_SetDisable_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bDisable;                                                 // (Parm)
};

// Function NWindow.TabHandle.GetTopIndex
struct UTabHandle_GetTopIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.TabHandle.SetTopOrder
struct UTabHandle_SetTopOrder_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bSendMessage;                                             // (Parm)
};

// Function NWindow.TabHandle.InitTabCtrl
struct UTabHandle_InitTabCtrl_Params
{
};

// Function NWindow.StatusIconHandle.Clear
struct UStatusIconHandle_Clear_Params
{
};

// Function NWindow.StatusIconHandle.SetIconSize
struct UStatusIconHandle_SetIconSize_Params
{
	int                                                a_Size;                                                   // (Parm)
};

// Function NWindow.StatusIconHandle.DelItem
struct UStatusIconHandle_DelItem_Params
{
	int                                                a_Row;                                                    // (Parm)
	int                                                a_Col;                                                    // (Parm)
};

// Function NWindow.StatusIconHandle.SetItem
struct UStatusIconHandle_SetItem_Params
{
	int                                                a_Row;                                                    // (Parm)
	int                                                a_Col;                                                    // (Parm)
	struct FStatusIconInfo                             a_Info;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.StatusIconHandle.GetItem
struct UStatusIconHandle_GetItem_Params
{
	int                                                a_Row;                                                    // (Parm)
	int                                                a_Col;                                                    // (Parm)
	struct FStatusIconInfo                             a_Info;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.StatusIconHandle.GetColCount
struct UStatusIconHandle_GetColCount_Params
{
	int                                                a_Row;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.StatusIconHandle.GetRowCount
struct UStatusIconHandle_GetRowCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.StatusIconHandle.InsertCol
struct UStatusIconHandle_InsertCol_Params
{
	int                                                a_Row;                                                    // (Parm)
	int                                                a_Col;                                                    // (Parm)
	struct FStatusIconInfo                             a_Info;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.StatusIconHandle.InsertRow
struct UStatusIconHandle_InsertRow_Params
{
	int                                                a_Row;                                                    // (Parm)
};

// Function NWindow.StatusIconHandle.AddCol
struct UStatusIconHandle_AddCol_Params
{
	int                                                a_Row;                                                    // (Parm)
	struct FStatusIconInfo                             a_Info;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.StatusIconHandle.AddRow
struct UStatusIconHandle_AddRow_Params
{
};

// Function NWindow.StatusBarHandle.SetRegenInfo
struct UStatusBarHandle_SetRegenInfo_Params
{
	int                                                Duration;                                                 // (Parm)
	int                                                ticks;                                                    // (Parm)
	float                                              Amount;                                                   // (Parm)
};

// Function NWindow.StatusBarHandle.SetPointExp
struct UStatusBarHandle_SetPointExp_Params
{
	struct FINT64                                      CurrentValue;                                             // (Parm)
	int                                                Level;                                                    // (Parm)
};

// Function NWindow.StatusBarHandle.SetPointPercent
struct UStatusBarHandle_SetPointPercent_Params
{
	struct FINT64                                      CurrentValue;                                             // (Parm)
	struct FINT64                                      MinValue;                                                 // (Parm)
	struct FINT64                                      MaxValue;                                                 // (Parm)
};

// Function NWindow.StatusBarHandle.SetPoint
struct UStatusBarHandle_SetPoint_Params
{
	int                                                CurrentValue;                                             // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function NWindow.SliderCtrlHandle.IsMouseScrolling
struct USliderCtrlHandle_IsMouseScrolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.SliderCtrlHandle.SetTotalTickCount
struct USliderCtrlHandle_SetTotalTickCount_Params
{
	int                                                a_TotalTickCount;                                         // (Parm)
};

// Function NWindow.SliderCtrlHandle.GetTotalTickCount
struct USliderCtrlHandle_GetTotalTickCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.SliderCtrlHandle.SetCurrentTick
struct USliderCtrlHandle_SetCurrentTick_Params
{
	int                                                iCurrTick;                                                // (Parm)
};

// Function NWindow.SliderCtrlHandle.GetCurrentTick
struct USliderCtrlHandle_GetCurrentTick_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ScenePlayerCtrlHandle.LoadUCFile
struct UScenePlayerCtrlHandle_LoadUCFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.ScenePlayerCtrlHandle.SaveUCFile
struct UScenePlayerCtrlHandle_SaveUCFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     CurPath;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.ScenePlayerCtrlHandle.Play
struct UScenePlayerCtrlHandle_Play_Params
{
	int                                                EndSceneNo;                                               // (Parm)
	bool                                               bShowInfo;                                                // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.SetMapInvisible
struct URadarMapCtrlHandle_SetMapInvisible_Params
{
	bool                                               bInvisible;                                               // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.SetEnableRotation
struct URadarMapCtrlHandle_SetEnableRotation_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.SetMagnification
struct URadarMapCtrlHandle_SetMagnification_Params
{
	float                                              newMag;                                                   // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.RequestObjectAround
struct URadarMapCtrlHandle_RequestObjectAround_Params
{
	int                                                ObjectType;                                               // (Parm)
	int                                                DistanceLimitXY;                                          // (Parm)
	int                                                DistanceLimitZ;                                           // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.UpdateObject
struct URadarMapCtrlHandle_UpdateObject_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                WorldX;                                                   // (Parm)
	int                                                WorldY;                                                   // (Parm)
	int                                                WorldZ;                                                   // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.DeleteObject
struct URadarMapCtrlHandle_DeleteObject_Params
{
	int                                                ObjectID;                                                 // (Parm)
};

// Function NWindow.RadarMapCtrlHandle.AddObject
struct URadarMapCtrlHandle_AddObject_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	int                                                locX;                                                     // (Parm)
	int                                                locY;                                                     // (Parm)
	int                                                locZ;                                                     // (Parm)
};

// Function NWindow.PropertyControllerHandle.GetItemStringValue
struct UPropertyControllerHandle_GetItemStringValue_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.PropertyControllerHandle.GetItemIntegerValue
struct UPropertyControllerHandle_GetItemIntegerValue_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.PropertyControllerHandle.GetItemBooleanValue
struct UPropertyControllerHandle_GetItemBooleanValue_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.PropertyControllerHandle.SetItemStringValue
struct UPropertyControllerHandle_SetItemStringValue_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.PropertyControllerHandle.SetItemIntegerValue
struct UPropertyControllerHandle_SetItemIntegerValue_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
};

// Function NWindow.PropertyControllerHandle.SetItemBooleanValue
struct UPropertyControllerHandle_SetItemBooleanValue_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	bool                                               Value;                                                    // (Parm)
};

// Function NWindow.PropertyControllerHandle.GetItemType
struct UPropertyControllerHandle_GetItemType_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EControlPropertyItemType>              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.PropertyControllerHandle.SetGroupVisible
struct UPropertyControllerHandle_SetGroupVisible_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.PropertyControllerHandle.SetGroupExpandState
struct UPropertyControllerHandle_SetGroupExpandState_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	bool                                               bExpand;                                                  // (Parm)
};

// Function NWindow.PropertyControllerHandle.AddGroup
struct UPropertyControllerHandle_AddGroup_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.PropertyControllerHandle.DeleteGroup
struct UPropertyControllerHandle_DeleteGroup_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.PropertyControllerHandle.GetGroupCheck
struct UPropertyControllerHandle_GetGroupCheck_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.PropertyControllerHandle.SetGroupCheck
struct UPropertyControllerHandle_SetGroupCheck_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	bool                                               Value;                                                    // (Parm)
};

// Function NWindow.PropertyControllerHandle.GetGroupType
struct UPropertyControllerHandle_GetGroupType_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<EControlPropertyGroupType>             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.PropertyControllerHandle.UpdatePropertyGroup
struct UPropertyControllerHandle_UpdatePropertyGroup_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.PropertyControllerHandle.GetPropertyHeight
struct UPropertyControllerHandle_GetPropertyHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.PropertyControllerHandle.ClearValue
struct UPropertyControllerHandle_ClearValue_Params
{
};

// Function NWindow.PropertyControllerHandle.Clear
struct UPropertyControllerHandle_Clear_Params
{
};

// Function NWindow.PropertyControllerHandle.SetProperty
struct UPropertyControllerHandle_SetProperty_Params
{
	TEnumAsByte<EXMLControlType>                       a_Type;                                                   // (Parm)
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
};

// Function NWindow.ProgressCtrlHandle.Start
struct UProgressCtrlHandle_Start_Params
{
};

// Function NWindow.ProgressCtrlHandle.Resume
struct UProgressCtrlHandle_Resume_Params
{
};

// Function NWindow.ProgressCtrlHandle.Stop
struct UProgressCtrlHandle_Stop_Params
{
};

// Function NWindow.ProgressCtrlHandle.Reset
struct UProgressCtrlHandle_Reset_Params
{
};

// Function NWindow.ProgressCtrlHandle.SetPos
struct UProgressCtrlHandle_SetPos_Params
{
	int                                                Millitime;                                                // (Parm)
};

// Function NWindow.ProgressCtrlHandle.SetProgressTime
struct UProgressCtrlHandle_SetProgressTime_Params
{
	int                                                Millitime;                                                // (Parm)
};

// Function NWindow.NameCtrlHandle.GetName
struct UNameCtrlHandle_GetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.NameCtrlHandle.SetNameWithColor
struct UNameCtrlHandle_SetNameWithColor_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	TEnumAsByte<ENameCtrlType>                         type;                                                     // (Parm)
	TEnumAsByte<ETextAlign>                            Align;                                                    // (Parm)
	struct FColor                                      NameColor;                                                // (Parm)
};

// Function NWindow.NameCtrlHandle.SetName
struct UNameCtrlHandle_SetName_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	TEnumAsByte<ENameCtrlType>                         type;                                                     // (Parm)
	TEnumAsByte<ETextAlign>                            Align;                                                    // (Parm)
};

// Function NWindow.MinimapCtrlHandle.SetContinent
struct UMinimapCtrlHandle_SetContinent_Params
{
	int                                                Continent;                                                // (Parm)
};

// Function NWindow.MinimapCtrlHandle.EraseRegionInfo
struct UMinimapCtrlHandle_EraseRegionInfo_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.MinimapCtrlHandle.EraseAllRegionInfo
struct UMinimapCtrlHandle_EraseAllRegionInfo_Params
{
};

// Function NWindow.MinimapCtrlHandle.UpdateRegionInfo
struct UMinimapCtrlHandle_UpdateRegionInfo_Params
{
	int                                                idx;                                                      // (Parm)
	struct FString                                     RegionInfo;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.MinimapCtrlHandle.AddRegionInfo
struct UMinimapCtrlHandle_AddRegionInfo_Params
{
	struct FString                                     RegionInfo;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.MinimapCtrlHandle.DeleteAllCursedWeaponIcon
struct UMinimapCtrlHandle_DeleteAllCursedWeaponIcon_Params
{
};

// Function NWindow.MinimapCtrlHandle.IsOverlapped
struct UMinimapCtrlHandle_IsOverlapped_Params
{
	int                                                FirstX;                                                   // (Parm)
	int                                                FirstY;                                                   // (Parm)
	int                                                SecondX;                                                  // (Parm)
	int                                                SecondY;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.MinimapCtrlHandle.RequestReduceBtn
struct UMinimapCtrlHandle_RequestReduceBtn_Params
{
};

// Function NWindow.MinimapCtrlHandle.DrawGridIcon
struct UMinimapCtrlHandle_DrawGridIcon_Params
{
	struct FString                                     a_IconName;                                               // (Parm, NeedCtorLink)
	struct FString                                     a_DupIconName;                                            // (Parm, NeedCtorLink)
	struct FVector                                     a_Loc;                                                    // (Parm)
	bool                                               a_Refresh;                                                // (Parm)
	int                                                a_XOffset;                                                // (OptionalParm, Parm)
	int                                                a_YOffset;                                                // (OptionalParm, Parm)
	struct FString                                     TooltipString;                                            // (OptionalParm, Parm, NeedCtorLink)
};

// Function NWindow.MinimapCtrlHandle.SetSSQStatus
struct UMinimapCtrlHandle_SetSSQStatus_Params
{
	int                                                a_SSQStatus;                                              // (Parm)
};

// Function NWindow.MinimapCtrlHandle.SetShowQuest
struct UMinimapCtrlHandle_SetShowQuest_Params
{
	bool                                               a_ShowQuest;                                              // (Parm)
};

// Function NWindow.MinimapCtrlHandle.DeleteAllTarget
struct UMinimapCtrlHandle_DeleteAllTarget_Params
{
};

// Function NWindow.MinimapCtrlHandle.DeleteTarget
struct UMinimapCtrlHandle_DeleteTarget_Params
{
	struct FVector                                     a_Loc;                                                    // (Parm)
};

// Function NWindow.MinimapCtrlHandle.AddTarget
struct UMinimapCtrlHandle_AddTarget_Params
{
	struct FVector                                     a_Loc;                                                    // (Parm)
};

// Function NWindow.MinimapCtrlHandle.AdjustMapView
struct UMinimapCtrlHandle_AdjustMapView_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	bool                                               a_ZoomToTownMap;                                          // (OptionalParm, Parm)
	bool                                               a_UseGridLocation;                                        // (OptionalParm, Parm)
};

// Function NWindow.ListCtrlHandle.GetRec
struct UListCtrlHandle_GetRec_Params
{
	int                                                Index;                                                    // (Parm)
	struct FLVDataRecord                               Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.ListCtrlHandle.GetSelectedRec
struct UListCtrlHandle_GetSelectedRec_Params
{
	struct FLVDataRecord                               Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.ListCtrlHandle.ModifyRecord
struct UListCtrlHandle_ModifyRecord_Params
{
	int                                                Index;                                                    // (Parm)
	struct FLVDataRecord                               Record;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ListCtrlHandle.ShowScrollBar
struct UListCtrlHandle_ShowScrollBar_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.ListCtrlHandle.SetSelectedIndex
struct UListCtrlHandle_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bMoveToRow;                                               // (Parm)
};

// Function NWindow.ListCtrlHandle.GetSelectedIndex
struct UListCtrlHandle_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ListCtrlHandle.GetRecordCount
struct UListCtrlHandle_GetRecordCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ListCtrlHandle.DeleteRecord
struct UListCtrlHandle_DeleteRecord_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.ListCtrlHandle.DeleteAllItem
struct UListCtrlHandle_DeleteAllItem_Params
{
};

// Function NWindow.ListCtrlHandle.InsertRecord
struct UListCtrlHandle_InsertRecord_Params
{
	struct FLVDataRecord                               Record;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.ListBoxHandle.GetSelectedString
struct UListBoxHandle_GetSelectedString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.ListBoxHandle.AddStringWithData
struct UListBoxHandle_AddStringWithData_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	int                                                Color;                                                    // (Parm)
	int                                                Data;                                                     // (Parm)
};

// Function NWindow.ListBoxHandle.Clear
struct UListBoxHandle_Clear_Params
{
};

// Function NWindow.ListBoxHandle.AddString
struct UListBoxHandle_AddString_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.ItemWindowHandle.SetExpandItemNum
struct UItemWindowHandle_SetExpandItemNum_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                Num;                                                      // (Parm)
};

// Function NWindow.ItemWindowHandle.SetCol
struct UItemWindowHandle_SetCol_Params
{
	int                                                a_Col;                                                    // (Parm)
};

// Function NWindow.ItemWindowHandle.SetRow
struct UItemWindowHandle_SetRow_Params
{
	int                                                a_Row;                                                    // (Parm)
};

// Function NWindow.ItemWindowHandle.SetDisableTex
struct UItemWindowHandle_SetDisableTex_Params
{
	struct FString                                     a_DisableTex;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.ItemWindowHandle.GetIndexAt
struct UItemWindowHandle_GetIndexAt_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                OffsetX;                                                  // (Parm)
	int                                                OffsetY;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.SwapItems
struct UItemWindowHandle_SwapItems_Params
{
	int                                                index1;                                                   // (Parm)
	int                                                index2;                                                   // (Parm)
};

// Function NWindow.ItemWindowHandle.ShowScrollBar
struct UItemWindowHandle_ShowScrollBar_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.ItemWindowHandle.SetFaded
struct UItemWindowHandle_SetFaded_Params
{
	bool                                               bOn;                                                      // (Parm)
};

// Function NWindow.ItemWindowHandle.FindItemWithReserved
struct UItemWindowHandle_FindItemWithReserved_Params
{
	int                                                Reserved;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.FindItemWithAllProperty
struct UItemWindowHandle_FindItemWithAllProperty_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.FindItem
struct UItemWindowHandle_FindItem_Params
{
	struct FItemID                                     scID;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.Clear
struct UItemWindowHandle_Clear_Params
{
};

// Function NWindow.ItemWindowHandle.GetItem
struct UItemWindowHandle_GetItem_Params
{
	int                                                Index;                                                    // (Parm)
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.GetSelectedItem
struct UItemWindowHandle_GetSelectedItem_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.DeleteItem
struct UItemWindowHandle_DeleteItem_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.ItemWindowHandle.SetItem
struct UItemWindowHandle_SetItem_Params
{
	int                                                Index;                                                    // (Parm)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.AddItem
struct UItemWindowHandle_AddItem_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.ItemWindowHandle.ClearSelect
struct UItemWindowHandle_ClearSelect_Params
{
};

// Function NWindow.ItemWindowHandle.GetItemNum
struct UItemWindowHandle_GetItemNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ItemWindowHandle.GetSelectedNum
struct UItemWindowHandle_GetSelectedNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.HtmlHandle.IsPageLock
struct UHtmlHandle_IsPageLock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.HtmlHandle.SetPageLock
struct UHtmlHandle_SetPageLock_Params
{
	bool                                               bLock;                                                    // (Parm)
};

// Function NWindow.HtmlHandle.SetHtmlBuffData
struct UHtmlHandle_SetHtmlBuffData_Params
{
	struct FString                                     strData;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.HtmlHandle.ControllerExecution
struct UHtmlHandle_ControllerExecution_Params
{
	struct FString                                     strBypass;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<EControlReturnType>                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.HtmlHandle.GetFrameMaxHeight
struct UHtmlHandle_GetFrameMaxHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.HtmlHandle.Clear
struct UHtmlHandle_Clear_Params
{
};

// Function NWindow.HtmlHandle.LoadHtmlFromString
struct UHtmlHandle_LoadHtmlFromString_Params
{
	struct FString                                     HtmlString;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.HtmlHandle.LoadHtml
struct UHtmlHandle_LoadHtml_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.FlashCtrlHandle.Invoke
struct UFlashCtrlHandle_Invoke_Params
{
	struct FString                                     a_Command;                                                // (Parm, NeedCtorLink)
	struct FParamMap                                   a_Param;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.FlashCtrlHandle.SetFlashFile
struct UFlashCtrlHandle_SetFlashFile_Params
{
	struct FString                                     a_FlashFile;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.FlashCtrlHandle.GotoFrame
struct UFlashCtrlHandle_GotoFrame_Params
{
	int                                                a_FrameNumber;                                            // (Parm)
};

// Function NWindow.FlashCtrlHandle.GetCurrentFrame
struct UFlashCtrlHandle_GetCurrentFrame_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.FlashCtrlHandle.GetTotalFrameCnt
struct UFlashCtrlHandle_GetTotalFrameCnt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.FlashCtrlHandle.Stop
struct UFlashCtrlHandle_Stop_Params
{
};

// Function NWindow.FlashCtrlHandle.Pause
struct UFlashCtrlHandle_Pause_Params
{
};

// Function NWindow.FlashCtrlHandle.Play
struct UFlashCtrlHandle_Play_Params
{
};

// Function NWindow.EditBoxHandle.SetEnableTextLink
struct UEditBoxHandle_SetEnableTextLink_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function NWindow.EditBoxHandle.GetMaxLength
struct UEditBoxHandle_GetMaxLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.EditBoxHandle.SetMaxLength
struct UEditBoxHandle_SetMaxLength_Params
{
	int                                                maxLength;                                                // (Parm)
};

// Function NWindow.EditBoxHandle.SetHighLight
struct UEditBoxHandle_SetHighLight_Params
{
	bool                                               bHighlight;                                               // (Parm)
};

// Function NWindow.EditBoxHandle.SetEditType
struct UEditBoxHandle_SetEditType_Params
{
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.EditBoxHandle.Clear
struct UEditBoxHandle_Clear_Params
{
};

// Function NWindow.EditBoxHandle.SimulateBackspace
struct UEditBoxHandle_SimulateBackspace_Params
{
};

// Function NWindow.EditBoxHandle.AddString
struct UEditBoxHandle_AddString_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.EditBoxHandle.SetString
struct UEditBoxHandle_SetString_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.EditBoxHandle.GetString
struct UEditBoxHandle_GetString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.DrawPanelHandle.PreCheckPanelSize
struct UDrawPanelHandle_PreCheckPanelSize_Params
{
	int                                                Width;                                                    // (Parm, OutParm)
	int                                                Height;                                                   // (Parm, OutParm)
};

// Function NWindow.DrawPanelHandle.Clear
struct UDrawPanelHandle_Clear_Params
{
};

// Function NWindow.DrawPanelHandle.InsertDrawItem
struct UDrawPanelHandle_InsertDrawItem_Params
{
	struct FDrawItemInfo                               infNodeItem;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.ComboBoxHandle.AddStringWithColor
struct UComboBoxHandle_AddStringWithColor_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	struct FColor                                      Col;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ComboBoxHandle.GetNumOfItems
struct UComboBoxHandle_GetNumOfItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ComboBoxHandle.Clear
struct UComboBoxHandle_Clear_Params
{
};

// Function NWindow.ComboBoxHandle.SetSelectedNum
struct UComboBoxHandle_SetSelectedNum_Params
{
	int                                                Num;                                                      // (Parm)
};

// Function NWindow.ComboBoxHandle.GetSelectedNum
struct UComboBoxHandle_GetSelectedNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ComboBoxHandle.GetReserved
struct UComboBoxHandle_GetReserved_Params
{
	int                                                Num;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ComboBoxHandle.GetString
struct UComboBoxHandle_GetString_Params
{
	int                                                Num;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.ComboBoxHandle.SYS_AddStringWithReserved
struct UComboBoxHandle_SYS_AddStringWithReserved_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                Reserved;                                                 // (Parm)
};

// Function NWindow.ComboBoxHandle.AddStringWithReserved
struct UComboBoxHandle_AddStringWithReserved_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	int                                                Reserved;                                                 // (Parm)
};

// Function NWindow.ComboBoxHandle.SYS_AddString
struct UComboBoxHandle_SYS_AddString_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.ComboBoxHandle.AddString
struct UComboBoxHandle_AddString_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.CheckBoxHandle.ToggleDisable
struct UCheckBoxHandle_ToggleDisable_Params
{
};

// Function NWindow.CheckBoxHandle.SetDisable
struct UCheckBoxHandle_SetDisable_Params
{
	bool                                               bDisable;                                                 // (Parm)
};

// Function NWindow.CheckBoxHandle.IsDisable
struct UCheckBoxHandle_IsDisable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.CheckBoxHandle.IsChecked
struct UCheckBoxHandle_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.CheckBoxHandle.SetCheck
struct UCheckBoxHandle_SetCheck_Params
{
	bool                                               bCheck;                                                   // (Parm)
};

// Function NWindow.CheckBoxHandle.SetTitle
struct UCheckBoxHandle_SetTitle_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.ChatWindowHandle.EnableTexture
struct UChatWindowHandle_EnableTexture_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function NWindow.CharacterViewportWindowHandle.SetCharacterOffsetY
struct UCharacterViewportWindowHandle_SetCharacterOffsetY_Params
{
	int                                                nOffSetY;                                                 // (Parm)
};

// Function NWindow.CharacterViewportWindowHandle.SetCharacterOffsetX
struct UCharacterViewportWindowHandle_SetCharacterOffsetX_Params
{
	int                                                nOffSetX;                                                 // (Parm)
};

// Function NWindow.CharacterViewportWindowHandle.SetCharacterScale
struct UCharacterViewportWindowHandle_SetCharacterScale_Params
{
	float                                              fCharacterScale;                                          // (Parm)
};

// Function NWindow.CharacterViewportWindowHandle.EndZoom
struct UCharacterViewportWindowHandle_EndZoom_Params
{
};

// Function NWindow.CharacterViewportWindowHandle.StartZoom
struct UCharacterViewportWindowHandle_StartZoom_Params
{
	bool                                               bOut;                                                     // (Parm)
};

// Function NWindow.CharacterViewportWindowHandle.EndRotation
struct UCharacterViewportWindowHandle_EndRotation_Params
{
};

// Function NWindow.CharacterViewportWindowHandle.StartRotation
struct UCharacterViewportWindowHandle_StartRotation_Params
{
	bool                                               bRight;                                                   // (Parm)
};

// Function NWindow.ButtonHandle.SetTexture
struct UButtonHandle_SetTexture_Params
{
	struct FString                                     sForeTexture;                                             // (Parm, NeedCtorLink)
	struct FString                                     sBackTexture;                                             // (Parm, NeedCtorLink)
	struct FString                                     sHighlightTexture;                                        // (Parm, NeedCtorLink)
};

// Function NWindow.ButtonHandle.SetNameText
struct UButtonHandle_SetNameText_Params
{
	struct FString                                     NameText;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.ButtonHandle.SetButtonName
struct UButtonHandle_SetButtonName_Params
{
	int                                                a_NameID;                                                 // (Parm)
};

// Function NWindow.ButtonHandle.GetButtonName
struct UButtonHandle_GetButtonName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.BarHandle.Clear
struct UBarHandle_Clear_Params
{
};

// Function NWindow.BarHandle.GetValue
struct UBarHandle_GetValue_Params
{
	int                                                a_MaxValue;                                               // (Parm, OutParm)
	int                                                a_CurValue;                                               // (Parm, OutParm)
};

// Function NWindow.BarHandle.SetValue
struct UBarHandle_SetValue_Params
{
	int                                                a_MaxValue;                                               // (Parm)
	int                                                a_CurValue;                                               // (Parm)
};

// Function NWindow.AnimTextureHandle.Stop
struct UAnimTextureHandle_Stop_Params
{
};

// Function NWindow.AnimTextureHandle.Pause
struct UAnimTextureHandle_Pause_Params
{
};

// Function NWindow.AnimTextureHandle.Play
struct UAnimTextureHandle_Play_Params
{
};

// Function NWindow.AnimTextureHandle.SetLoopCount
struct UAnimTextureHandle_SetLoopCount_Params
{
	int                                                a_LoopCount;                                              // (Parm)
};

// Function NWindow.UIDATA_USER.GetClanType
struct UUIDATA_USER_GetClanType_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                type;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_USER.GetUserName
struct UUIDATA_USER_GetUserName_Params
{
	int                                                ServerID;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_TUTORIALLIST.CheckTutorial
struct UUIDATA_TUTORIALLIST_CheckTutorial_Params
{
	int                                                TutorialIndex;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetActor
struct UUIDATA_TARGET_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.IsVehicle
struct UUIDATA_TARGET_IsVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.IsHPShowableNPC
struct UUIDATA_TARGET_IsHPShowableNPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.IsCanBeAttacked
struct UUIDATA_TARGET_IsCanBeAttacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.IsPet
struct UUIDATA_TARGET_IsPet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.IsNpc
struct UUIDATA_TARGET_IsNpc_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.IsServerObject
struct UUIDATA_TARGET_IsServerObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetClassID
struct UUIDATA_TARGET_GetTargetClassID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetPledgeID
struct UUIDATA_TARGET_GetTargetPledgeID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetNameColor
struct UUIDATA_TARGET_GetTargetNameColor_Params
{
	int                                                Level;                                                    // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetName
struct UUIDATA_TARGET_GetTargetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_TARGET.GetTargetMP
struct UUIDATA_TARGET_GetTargetMP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetMaxMP
struct UUIDATA_TARGET_GetTargetMaxMP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetHP
struct UUIDATA_TARGET_GetTargetHP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetMaxHP
struct UUIDATA_TARGET_GetTargetMaxHP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetUserRank
struct UUIDATA_TARGET_GetTargetUserRank_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_TARGET.GetTargetID
struct UUIDATA_TARGET_GetTargetID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_STATICOBJECT.GetStaticObjectShowHP
struct UUIDATA_STATICOBJECT_GetStaticObjectShowHP_Params
{
	int                                                a_ID;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_STATICOBJECT.GetStaticObjectName
struct UUIDATA_STATICOBJECT_GetStaticObjectName_Params
{
	int                                                NameID;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectHP
struct UUIDATA_STATICOBJECT_GetServerObjectHP_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectMaxHP
struct UUIDATA_STATICOBJECT_GetServerObjectMaxHP_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectType
struct UUIDATA_STATICOBJECT_GetServerObjectType_Params
{
	int                                                Id;                                                       // (Parm)
	TEnumAsByte<EL2ObjectType>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_STATICOBJECT.GetServerObjectNameID
struct UUIDATA_STATICOBJECT_GetServerObjectNameID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetCastRange
struct UUIDATA_SKILL_GetCastRange_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetMpConsume
struct UUIDATA_SKILL_GetMpConsume_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetHpConsume
struct UUIDATA_SKILL_GetHpConsume_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetOperateType
struct UUIDATA_SKILL_GetOperateType_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_SKILL.GetEnchantSkillLevel
struct UUIDATA_SKILL_GetEnchantSkillLevel_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetEnchantName
struct UUIDATA_SKILL_GetEnchantName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_SKILL.GetDescription
struct UUIDATA_SKILL_GetDescription_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_SKILL.GetName
struct UUIDATA_SKILL_GetName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_SKILL.GetIconName
struct UUIDATA_SKILL_GetIconName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_SKILL.GetDataCount
struct UUIDATA_SKILL_GetDataCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetNextID
struct UUIDATA_SKILL_GetNextID_Params
{
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_SKILL.GetFirstID
struct UUIDATA_SKILL_GetFirstID_Params
{
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_REFINERYOPTION.GetOptionDescription
struct UUIDATA_REFINERYOPTION_GetOptionDescription_Params
{
	int                                                a_ID;                                                     // (Parm)
	struct FString                                     a_Desc1;                                                  // (Parm, OutParm, NeedCtorLink)
	struct FString                                     a_Desc2;                                                  // (Parm, OutParm, NeedCtorLink)
	struct FString                                     a_Desc3;                                                  // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_REFINERYOPTION.GetQuality
struct UUIDATA_REFINERYOPTION_GetQuality_Params
{
	int                                                a_ID;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeIsMultipleProduct
struct UUIDATA_RECIPE_GetRecipeIsMultipleProduct_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeMaterialItemBy2Condition
struct UUIDATA_RECIPE_GetRecipeMaterialItemBy2Condition_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                nSuccessRate;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeDescriptionBy2Condition
struct UUIDATA_RECIPE_GetRecipeDescriptionBy2Condition_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                nSuccessRate;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeIconNameBy2Condition
struct UUIDATA_RECIPE_GetRecipeIconNameBy2Condition_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                nSuccessRate;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeNameBy2Condition
struct UUIDATA_RECIPE_GetRecipeNameBy2Condition_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                nSuccessRate;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeMaterialItem
struct UUIDATA_RECIPE_GetRecipeMaterialItem_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeSuccessRate
struct UUIDATA_RECIPE_GetRecipeSuccessRate_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeDescription
struct UUIDATA_RECIPE_GetRecipeDescription_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeLevel
struct UUIDATA_RECIPE_GetRecipeLevel_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeMpConsume
struct UUIDATA_RECIPE_GetRecipeMpConsume_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeCrystalType
struct UUIDATA_RECIPE_GetRecipeCrystalType_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeProductNum
struct UUIDATA_RECIPE_GetRecipeProductNum_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeProductID
struct UUIDATA_RECIPE_GetRecipeProductID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeIconName
struct UUIDATA_RECIPE_GetRecipeIconName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RECIPE.GetRecipeItemID
struct UUIDATA_RECIPE_GetRecipeItemID_Params
{
	int                                                Id;                                                       // (Parm)
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RAID.GetRaidLoc
struct UUIDATA_RAID_GetRaidLoc_Params
{
	int                                                Id;                                                       // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RAID.GetRaidDescription
struct UUIDATA_RAID_GetRaidDescription_Params
{
	int                                                RaidID;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_RAID.GetRaidMonsterZone
struct UUIDATA_RAID_GetRaidMonsterZone_Params
{
	int                                                RaidID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RAID.GetRaidMonsterLevel
struct UUIDATA_RAID_GetRaidMonsterLevel_Params
{
	int                                                RaidID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RAID.GetRaidMonsterID
struct UUIDATA_RAID_GetRaidMonsterID_Params
{
	int                                                RaidID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_RAID.IsValidData
struct UUIDATA_RAID_IsValidData_Params
{
	int                                                Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetQuestReward
struct UUIDATA_QUEST_GetQuestReward_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	TArray<int>                                        rewardIDList;                                             // (Parm, OutParm, NeedCtorLink)
	TArray<int>                                        rewardNumList;                                            // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetQuestIscategory
struct UUIDATA_QUEST_GetQuestIscategory_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.IsShowableItemNumQuest
struct UUIDATA_QUEST_IsShowableItemNumQuest_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.IsShowableJournalQuest
struct UUIDATA_QUEST_IsShowableJournalQuest_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetQuestZone
struct UUIDATA_QUEST_GetQuestZone_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetClearedQuest
struct UUIDATA_QUEST_GetClearedQuest_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetQuestType
struct UUIDATA_QUEST_GetQuestType_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetMaxLevel
struct UUIDATA_QUEST_GetMaxLevel_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetMinLevel
struct UUIDATA_QUEST_GetMinLevel_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetIntro
struct UUIDATA_QUEST_GetIntro_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.GetRequirement
struct UUIDATA_QUEST_GetRequirement_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.GetStartNPCID
struct UUIDATA_QUEST_GetStartNPCID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetStartNPCLoc
struct UUIDATA_QUEST_GetStartNPCLoc_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetTargetName
struct UUIDATA_QUEST_GetTargetName_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.GetTargetLoc
struct UUIDATA_QUEST_GetTargetLoc_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetQuestItem
struct UUIDATA_QUEST_GetQuestItem_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.GetQuestDescription
struct UUIDATA_QUEST_GetQuestDescription_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.GetQuestJournalName
struct UUIDATA_QUEST_GetQuestJournalName_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.GetQuestName
struct UUIDATA_QUEST_GetQuestName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_QUEST.IsMinimapOnly
struct UUIDATA_QUEST_IsMinimapOnly_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.IsValidData
struct UUIDATA_QUEST_IsValidData_Params
{
	int                                                Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetNextID
struct UUIDATA_QUEST_GetNextID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_QUEST.GetFirstID
struct UUIDATA_QUEST_GetFirstID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.GetInventoryCount
struct UUIDATA_PLAYER_GetInventoryCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.GetInventoryLimit
struct UUIDATA_PLAYER_GetInventoryLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.HasCrystallizeAbility
struct UUIDATA_PLAYER_HasCrystallizeAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.GetPlayerEnvironment
struct UUIDATA_PLAYER_GetPlayerEnvironment_Params
{
	TEnumAsByte<EEnvType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.GetPlayerMoveType
struct UUIDATA_PLAYER_GetPlayerMoveType_Params
{
	TEnumAsByte<EMoveType>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.GetPlayerEXPRate
struct UUIDATA_PLAYER_GetPlayerEXPRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.GetRecipeShopMsg
struct UUIDATA_PLAYER_GetRecipeShopMsg_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_PLAYER.GetPlayerID
struct UUIDATA_PLAYER_GetPlayerID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PLAYER.IsHero
struct UUIDATA_PLAYER_IsHero_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetEXPRate
struct UUIDATA_PET_GetPetEXPRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetIsPetOrSummoned
struct UUIDATA_PET_GetIsPetOrSummoned_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetCarringWeight
struct UUIDATA_PET_GetPetCarringWeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetCarryWeight
struct UUIDATA_PET_GetPetCarryWeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetMaxEXP
struct UUIDATA_PET_GetPetMaxEXP_Params
{
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetMinEXP
struct UUIDATA_PET_GetPetMinEXP_Params
{
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetMaxFatigue
struct UUIDATA_PET_GetPetMaxFatigue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetMaxMP
struct UUIDATA_PET_GetPetMaxMP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetMaxHP
struct UUIDATA_PET_GetPetMaxHP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetEXP
struct UUIDATA_PET_GetPetEXP_Params
{
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetFatigue
struct UUIDATA_PET_GetPetFatigue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetLevel
struct UUIDATA_PET_GetPetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetSP
struct UUIDATA_PET_GetPetSP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetMP
struct UUIDATA_PET_GetPetMP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetHP
struct UUIDATA_PET_GetPetHP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetID
struct UUIDATA_PET_GetPetID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_PET.GetPetName
struct UUIDATA_PET_GetPetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_PARTY.GetMemberVirtualName
struct UUIDATA_PARTY_GetMemberVirtualName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_PARTY.MovePartyMember
struct UUIDATA_PARTY_MovePartyMember_Params
{
	int                                                SrcPos;                                                   // (Parm)
	int                                                TarPos;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_PARTY.GetMemberName
struct UUIDATA_PARTY_GetMemberName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_NPC.GetNpcProperty
struct UUIDATA_NPC_GetNpcProperty_Params
{
	int                                                Id;                                                       // (Parm)
	TArray<int>                                        arrProperty;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_NPC.GetNPCName
struct UUIDATA_NPC_GetNPCName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_NPC.IsValidData
struct UUIDATA_NPC_IsValidData_Params
{
	int                                                Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_NPC.GetNextID
struct UUIDATA_NPC_GetNextID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_NPC.GetFirstID
struct UUIDATA_NPC_GetFirstID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_MACRO.GetMacroCount
struct UUIDATA_MACRO_GetMacroCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_MACRO.GetMacroInfo
struct UUIDATA_MACRO_GetMacroInfo_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	struct FMacroInfo                                  Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetItemNameClass
struct UUIDATA_ITEM_GetItemNameClass_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetEtcItemTextureName
struct UUIDATA_ITEM_GetEtcItemTextureName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetSetItemEnchantEffectDescription
struct UUIDATA_ITEM_GetSetItemEnchantEffectDescription_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetSetItemEffectDescription
struct UUIDATA_ITEM_GetSetItemEffectDescription_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                EffectID;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetSetItemEnchantValue
struct UUIDATA_ITEM_GetSetItemEnchantValue_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetSetItemID
struct UUIDATA_ITEM_GetSetItemID_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                setId;                                                    // (Parm)
	int                                                Index;                                                    // (Parm)
	TArray<struct FItemID>                             arrID;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetSetItemFirstID
struct UUIDATA_ITEM_GetSetItemFirstID_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                setId;                                                    // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.IsExistSetItem
struct UUIDATA_ITEM_IsExistSetItem_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                setId;                                                    // (Parm)
	int                                                Index;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetSetItemNum
struct UUIDATA_ITEM_GetSetItemNum_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                setIdId;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetRefineryItemName
struct UUIDATA_ITEM_GetRefineryItemName_Params
{
	struct FString                                     strItemName;                                              // (Parm, NeedCtorLink)
	int                                                RefineryOp1;                                              // (Parm)
	int                                                RefineryOp2;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.IsCrystallizable
struct UUIDATA_ITEM_IsCrystallizable_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetItemInfo
struct UUIDATA_ITEM_GetItemInfo_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetItemCrystalType
struct UUIDATA_ITEM_GetItemCrystalType_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetItemDataType
struct UUIDATA_ITEM_GetItemDataType_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetItemWeight
struct UUIDATA_ITEM_GetItemWeight_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetItemDescription
struct UUIDATA_ITEM_GetItemDescription_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetItemTextureName
struct UUIDATA_ITEM_GetItemTextureName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetItemAdditionalName
struct UUIDATA_ITEM_GetItemAdditionalName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetItemName
struct UUIDATA_ITEM_GetItemName_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_ITEM.GetDataCount
struct UUIDATA_ITEM_GetDataCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetNextID
struct UUIDATA_ITEM_GetNextID_Params
{
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_ITEM.GetFirstID
struct UUIDATA_ITEM_GetFirstID_Params
{
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingDescription
struct UUIDATA_HUNTINGZONE_GetHuntingDescription_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZone
struct UUIDATA_HUNTINGZONE_GetHuntingZone_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneLoc
struct UUIDATA_HUNTINGZONE_GetHuntingZoneLoc_Params
{
	int                                                Id;                                                       // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetMaxLevel
struct UUIDATA_HUNTINGZONE_GetMaxLevel_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetMinLevel
struct UUIDATA_HUNTINGZONE_GetMinLevel_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneType
struct UUIDATA_HUNTINGZONE_GetHuntingZoneType_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HUNTINGZONE.GetHuntingZoneName
struct UUIDATA_HUNTINGZONE_GetHuntingZoneName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_HUNTINGZONE.IsValidData
struct UUIDATA_HUNTINGZONE_IsValidData_Params
{
	int                                                Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HENNA.GetIconTex
struct UUIDATA_HENNA_GetIconTex_Params
{
	int                                                a_ID;                                                     // (Parm)
	struct FString                                     a_IconTex;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HENNA.GetDescription
struct UUIDATA_HENNA_GetDescription_Params
{
	int                                                a_ID;                                                     // (Parm)
	struct FString                                     a_Description;                                            // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_HENNA.GetItemName
struct UUIDATA_HENNA_GetItemName_Params
{
	int                                                a_ID;                                                     // (Parm)
	struct FString                                     a_ItemName;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_GAMETIP.GetDataByIndex
struct UUIDATA_GAMETIP_GetDataByIndex_Params
{
	int                                                a_nIndex;                                                 // (Parm)
	struct FGameTipData                                a_GameTipData;                                            // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_GAMETIP.GetDataCount
struct UUIDATA_GAMETIP_GetDataCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.GetSubClanSkillLevel
struct UUIDATA_CLAN_GetSubClanSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm)
	int                                                subClanIndex;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.GetSkillLevel
struct UUIDATA_CLAN_GetSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.RequestSubClanSkillList
struct UUIDATA_CLAN_RequestSubClanSkillList_Params
{
	int                                                subClanIndex;                                             // (Parm)
};

// Function NWindow.UIDATA_CLAN.RequestClanSkillList
struct UUIDATA_CLAN_RequestClanSkillList_Params
{
};

// Function NWindow.UIDATA_CLAN.RequestClanInfo
struct UUIDATA_CLAN_RequestClanInfo_Params
{
};

// Function NWindow.UIDATA_CLAN.GetNameValue
struct UUIDATA_CLAN_GetNameValue_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                namevalue;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.GetAllianceCrestTexture
struct UUIDATA_CLAN_GetAllianceCrestTexture_Params
{
	int                                                Id;                                                       // (Parm)
	class UTexture*                                    texCrest;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.GetEmblemTexture
struct UUIDATA_CLAN_GetEmblemTexture_Params
{
	int                                                Id;                                                       // (Parm)
	class UTexture*                                    emblemTexture;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.GetCrestTexture
struct UUIDATA_CLAN_GetCrestTexture_Params
{
	int                                                Id;                                                       // (Parm)
	class UTexture*                                    texCrest;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIDATA_CLAN.GetAllianceName
struct UUIDATA_CLAN_GetAllianceName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIDATA_CLAN.GetName
struct UUIDATA_CLAN_GetName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.VehicleAPI.AirShipMoveDown
struct UVehicleAPI_AirShipMoveDown_Params
{
};

// Function NWindow.VehicleAPI.AirShipMoveUp
struct UVehicleAPI_AirShipMoveUp_Params
{
};

// Function NWindow.VehicleAPI.RequestExAirShipTeleport
struct UVehicleAPI_RequestExAirShipTeleport_Params
{
	int                                                a_SpotID;                                                 // (Parm)
};

// Function NWindow.VehicleAPI.GetVehicle
struct UVehicleAPI_GetVehicle_Params
{
	int                                                a_VehicleID;                                              // (Parm)
	class AVehicle*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.TutorialAPI.RequestExSetTutorial
struct UTutorialAPI_RequestExSetTutorial_Params
{
	int                                                TutorialIndex;                                            // (Parm)
};

// Function NWindow.TeamMatchAPI.RequestExBlockGameVote
struct UTeamMatchAPI_RequestExBlockGameVote_Params
{
	int                                                a_Stage;                                                  // (Parm)
	int                                                a_Start;                                                  // (Parm)
};

// Function NWindow.TeamMatchAPI.RequestExBlockGameEnter
struct UTeamMatchAPI_RequestExBlockGameEnter_Params
{
	int                                                a_Stage;                                                  // (Parm)
	int                                                a_TeamID;                                                 // (Parm)
};

// Function NWindow.TeamMatchAPI.RequestBlockGameAllData
struct UTeamMatchAPI_RequestBlockGameAllData_Params
{
};

// Function NWindow.TeamMatchAPI.RequestExCleftEnter
struct UTeamMatchAPI_RequestExCleftEnter_Params
{
	int                                                a_TeamID;                                                 // (Parm)
};

// Function NWindow.TeamMatchAPI.RequestCleftAllData
struct UTeamMatchAPI_RequestCleftAllData_Params
{
};

// Function NWindow.SSQAPI.RequestSSQStatus
struct USSQAPI_RequestSSQStatus_Params
{
	int                                                nStatusID;                                                // (Parm)
};

// Function NWindow.SiegeAPI.RequestSetCastleSiegeTime
struct USiegeAPI_RequestSetCastleSiegeTime_Params
{
	int                                                castleID;                                                 // (Parm)
	int                                                TimeID;                                                   // (Parm)
};

// Function NWindow.SiegeAPI.RequestConfirmCastleSiegeWaitingList
struct USiegeAPI_RequestConfirmCastleSiegeWaitingList_Params
{
	int                                                castleID;                                                 // (Parm)
	int                                                clanID;                                                   // (Parm)
	int                                                IsRegister;                                               // (Parm)
};

// Function NWindow.SiegeAPI.RequestJoinCastleSiege
struct USiegeAPI_RequestJoinCastleSiege_Params
{
	int                                                castleID;                                                 // (Parm)
	int                                                IsAttacker;                                               // (Parm)
	int                                                IsRegister;                                               // (Parm)
};

// Function NWindow.SiegeAPI.RequestCastleSiegeDefenderList
struct USiegeAPI_RequestCastleSiegeDefenderList_Params
{
	int                                                castleID;                                                 // (Parm)
};

// Function NWindow.SiegeAPI.RequestCastleSiegeAttackerList
struct USiegeAPI_RequestCastleSiegeAttackerList_Params
{
	int                                                castleID;                                                 // (Parm)
};

// Function NWindow.ShortcutAPI.Clear
struct UShortcutAPI_Clear_Params
{
};

// Function NWindow.ShortcutAPI.RestoreDefault
struct UShortcutAPI_RestoreDefault_Params
{
};

// Function NWindow.ShortcutAPI.DeactivateAll
struct UShortcutAPI_DeactivateAll_Params
{
};

// Function NWindow.ShortcutAPI.DeactivateGroup
struct UShortcutAPI_DeactivateGroup_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.ShortcutAPI.ActivateGroup
struct UShortcutAPI_ActivateGroup_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.ShortcutAPI.ExecuteShortcutBySlot
struct UShortcutAPI_ExecuteShortcutBySlot_Params
{
	int                                                Slot;                                                     // (Parm)
};

// Function NWindow.ShortcutAPI.RequestShortcutScriptData
struct UShortcutAPI_RequestShortcutScriptData_Params
{
	int                                                Id;                                                       // (Parm)
	struct FShortcutScriptData                         Data;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ShortcutAPI.RequestList
struct UShortcutAPI_RequestList_Params
{
};

// Function NWindow.ShortcutAPI.Save
struct UShortcutAPI_Save_Params
{
};

// Function NWindow.ShortcutAPI.UnlockShortcut
struct UShortcutAPI_UnlockShortcut_Params
{
};

// Function NWindow.ShortcutAPI.LockShortcut
struct UShortcutAPI_LockShortcut_Params
{
};

// Function NWindow.ShortcutAPI.GetActiveGroupList
struct UShortcutAPI_GetActiveGroupList_Params
{
	TArray<struct FString>                             groups;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.ShortcutAPI.GetGroupList
struct UShortcutAPI_GetGroupList_Params
{
	TArray<struct FString>                             groups;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.ShortcutAPI.GetGroupCommandList
struct UShortcutAPI_GetGroupCommandList_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	TArray<struct FShortcutCommandItem>                commands;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.ShortcutAPI.AssignCommand
struct UShortcutAPI_AssignCommand_Params
{
	struct FString                                     GroupName;                                                // (Parm, NeedCtorLink)
	struct FShortcutCommandItem                        Command;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ShortcutAPI.AssignSpecialKey
struct UShortcutAPI_AssignSpecialKey_Params
{
	struct FShortcutCommandItem                        Command;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.ShortcutAPI.SetShortcutPage
struct UShortcutAPI_SetShortcutPage_Params
{
	int                                                a_ShortcutPage;                                           // (Parm)
};

// Function NWindow.RefineryAPI.RequestRefineCancel
struct URefineryAPI_RequestRefineCancel_Params
{
	struct FItemID                                     a_CancelItemID;                                           // (Parm)
};

// Function NWindow.RefineryAPI.ConfirmCancelItem
struct URefineryAPI_ConfirmCancelItem_Params
{
	struct FItemID                                     a_CancelItemID;                                           // (Parm)
};

// Function NWindow.RefineryAPI.RequestRefine
struct URefineryAPI_RequestRefine_Params
{
	struct FItemID                                     a_TargetItemID;                                           // (Parm)
	struct FItemID                                     a_RefinerItemID;                                          // (Parm)
	struct FItemID                                     a_GemStoneID;                                             // (Parm)
	struct FINT64                                      a_GemStoneCount;                                          // (Parm)
};

// Function NWindow.RefineryAPI.ConfirmGemStone
struct URefineryAPI_ConfirmGemStone_Params
{
	struct FItemID                                     a_TargetItemID;                                           // (Parm)
	struct FItemID                                     a_RefinerItemID;                                          // (Parm)
	struct FItemID                                     a_GemStoneID;                                             // (Parm)
	struct FINT64                                      a_GemStoneCount;                                          // (Parm)
};

// Function NWindow.RefineryAPI.ConfirmRefinerItem
struct URefineryAPI_ConfirmRefinerItem_Params
{
	struct FItemID                                     a_TargetItemID;                                           // (Parm)
	struct FItemID                                     a_RefinerItemID;                                          // (Parm)
};

// Function NWindow.RefineryAPI.ConfirmTargetItem
struct URefineryAPI_ConfirmTargetItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeShopListSet
struct URecipeAPI_RequestRecipeShopListSet_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.RecipeAPI.RequestRecipeShopMessageSet
struct URecipeAPI_RequestRecipeShopMessageSet_Params
{
	struct FString                                     strMsg;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.RecipeAPI.RequestRecipeShopManageQuit
struct URecipeAPI_RequestRecipeShopManageQuit_Params
{
};

// Function NWindow.RecipeAPI.RequestRecipeItemDelete
struct URecipeAPI_RequestRecipeItemDelete_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeBookOpen
struct URecipeAPI_RequestRecipeBookOpen_Params
{
	int                                                type;                                                     // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeItemMakeInfo
struct URecipeAPI_RequestRecipeItemMakeInfo_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeItemMakeSelf
struct URecipeAPI_RequestRecipeItemMakeSelf_Params
{
	int                                                RecipeID;                                                 // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeShopMakeDo
struct URecipeAPI_RequestRecipeShopMakeDo_Params
{
	int                                                MerchantID;                                               // (Parm)
	int                                                RecipeID;                                                 // (Parm)
	struct FINT64                                      Adena;                                                    // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeShopSellList
struct URecipeAPI_RequestRecipeShopSellList_Params
{
	int                                                nServerID;                                                // (Parm)
};

// Function NWindow.RecipeAPI.RequestRecipeShopMakeInfo
struct URecipeAPI_RequestRecipeShopMakeInfo_Params
{
	int                                                nServerID;                                                // (Parm)
	int                                                nRecipeID;                                                // (Parm)
};

// Function NWindow.QuestAPI.SetQuestTargetInfo
struct UQuestAPI_SetQuestTargetInfo_Params
{
	bool                                               QuestOn;                                                  // (Parm)
	bool                                               ShowTargetInRadar;                                        // (Parm)
	bool                                               ShowArrow;                                                // (Parm)
	struct FString                                     TargetName;                                               // (Parm, NeedCtorLink)
	struct FVector                                     TargetPos;                                                // (Parm)
	int                                                QuestID;                                                  // (Parm)
};

// Function NWindow.QuestAPI.RequestDestroyQuest
struct UQuestAPI_RequestDestroyQuest_Params
{
	int                                                QuestID;                                                  // (Parm)
};

// Function NWindow.QuestAPI.RequestQuestList
struct UQuestAPI_RequestQuestList_Params
{
};

// Function NWindow.PetitionAPI.RequestPetitionFeedBack
struct UPetitionAPI_RequestPetitionFeedBack_Params
{
	int                                                a_Rate;                                                   // (Parm)
	struct FString                                     a_Message;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.PetitionAPI.RequestPetition
struct UPetitionAPI_RequestPetition_Params
{
	struct FString                                     a_Message;                                                // (Parm, NeedCtorLink)
	int                                                a_PetitionType;                                           // (Parm)
};

// Function NWindow.PetitionAPI.RequestPetitionCancel
struct UPetitionAPI_RequestPetitionCancel_Params
{
};

// Function NWindow.PetAPI.RequestGetItemFromPet
struct UPetAPI_RequestGetItemFromPet_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
	bool                                               IsEquipItem;                                              // (Parm)
};

// Function NWindow.PetAPI.RequestGiveItemToPet
struct UPetAPI_RequestGiveItemToPet_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
};

// Function NWindow.PetAPI.RequestPetUseItem
struct UPetAPI_RequestPetUseItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.PetAPI.RequestPetInventoryItemList
struct UPetAPI_RequestPetInventoryItemList_Params
{
};

// Function NWindow.PartyMatchAPI.RequestMpccPartymasterList
struct UPartyMatchAPI_RequestMpccPartymasterList_Params
{
};

// Function NWindow.PartyMatchAPI.RequestWithdrawMpccRoom
struct UPartyMatchAPI_RequestWithdrawMpccRoom_Params
{
};

// Function NWindow.PartyMatchAPI.RequestDismissMpccRoom
struct UPartyMatchAPI_RequestDismissMpccRoom_Params
{
};

// Function NWindow.PartyMatchAPI.RequestOustFromMpccRoom
struct UPartyMatchAPI_RequestOustFromMpccRoom_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestJoinMpccRoom
struct UPartyMatchAPI_RequestJoinMpccRoom_Params
{
	int                                                RoomNum;                                                  // (Parm)
	int                                                Location;                                                 // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestManageMpccRoom
struct UPartyMatchAPI_RequestManageMpccRoom_Params
{
	int                                                RoomNum;                                                  // (Parm)
	int                                                MaxMemberCount;                                           // (Parm)
	int                                                MinLevelLimit;                                            // (Parm)
	int                                                MaxLevelLimit;                                            // (Parm)
	int                                                PartyRoutingType;                                         // (Parm)
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.PartyMatchAPI.RequestListMpccWaiting
struct UPartyMatchAPI_RequestListMpccWaiting_Params
{
	int                                                page;                                                     // (Parm)
	int                                                Location;                                                 // (Parm)
	int                                                LevelFilter;                                              // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestAskJoinPartyRoom
struct UPartyMatchAPI_RequestAskJoinPartyRoom_Params
{
	struct FString                                     a_Name;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.PartyMatchAPI.RequestExitPartyMatchingWaitingRoom
struct UPartyMatchAPI_RequestExitPartyMatchingWaitingRoom_Params
{
};

// Function NWindow.PartyMatchAPI.RequestPartyMatchWaitList
struct UPartyMatchAPI_RequestPartyMatchWaitList_Params
{
	int                                                a_Page;                                                   // (Parm)
	int                                                a_MinLevel;                                               // (Parm)
	int                                                a_MaxLevel;                                               // (Parm)
	int                                                RoomType;                                                 // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestBanFromPartyRoom
struct UPartyMatchAPI_RequestBanFromPartyRoom_Params
{
	int                                                a_MemberID;                                               // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestWithdrawPartyRoom
struct UPartyMatchAPI_RequestWithdrawPartyRoom_Params
{
	int                                                a_RoomNumber;                                             // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestDismissPartyRoom
struct UPartyMatchAPI_RequestDismissPartyRoom_Params
{
	int                                                a_RoomNumber;                                             // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestManagePartyRoom
struct UPartyMatchAPI_RequestManagePartyRoom_Params
{
	int                                                a_RoomNumber;                                             // (Parm)
	int                                                a_MaxPartyMemberCount;                                    // (Parm)
	int                                                a_MinLevel;                                               // (Parm)
	int                                                a_MaxLevel;                                               // (Parm)
	struct FString                                     a_RoomTitle;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.PartyMatchAPI.RequestJoinPartyRoomAuto
struct UPartyMatchAPI_RequestJoinPartyRoomAuto_Params
{
	int                                                a_Page;                                                   // (Parm)
	int                                                a_LocationFilter;                                         // (Parm)
	int                                                a_LevelFilter;                                            // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestJoinPartyRoom
struct UPartyMatchAPI_RequestJoinPartyRoom_Params
{
	int                                                a_RoomNumber;                                             // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestPartyRoomList
struct UPartyMatchAPI_RequestPartyRoomList_Params
{
	int                                                a_Page;                                                   // (Parm)
	int                                                a_LocationFilter;                                         // (Parm)
	int                                                a_LevelFilter;                                            // (Parm)
};

// Function NWindow.PartyMatchAPI.RequestOpenPartyMatch
struct UPartyMatchAPI_RequestOpenPartyMatch_Params
{
};

// Function NWindow.OlympiadAPI.RequestOlympiadMatchList
struct UOlympiadAPI_RequestOlympiadMatchList_Params
{
};

// Function NWindow.OlympiadAPI.RequestOlympiadObserverEnd
struct UOlympiadAPI_RequestOlympiadObserverEnd_Params
{
};

// Function NWindow.MiniMapAPI.RequestSeedPhase
struct UMiniMapAPI_RequestSeedPhase_Params
{
};

// Function NWindow.MiniMapAPI.RequestCursedWeaponLocation
struct UMiniMapAPI_RequestCursedWeaponLocation_Params
{
};

// Function NWindow.MiniMapAPI.RequestCursedWeaponList
struct UMiniMapAPI_RequestCursedWeaponList_Params
{
};

// Function NWindow.MacroAPI.RequestMakeMacro
struct UMacroAPI_RequestMakeMacro_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	struct FString                                     IconName;                                                 // (Parm, NeedCtorLink)
	int                                                IconNum;                                                  // (Parm)
	struct FString                                     Description;                                              // (Parm, NeedCtorLink)
	TArray<struct FString>                             CommandList;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.MacroAPI.RequestDeleteMacro
struct UMacroAPI_RequestDeleteMacro_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
};

// Function NWindow.MacroAPI.RequestUseMacro
struct UMacroAPI_RequestUseMacro_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
};

// Function NWindow.MacroAPI.RequestMacroList
struct UMacroAPI_RequestMacroList_Params
{
};

// Function NWindow.InputAPI.GetInputKey
struct UInputAPI_GetInputKey_Params
{
	struct FString                                     keyString;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<EInputKey>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.InputAPI.GetKeyString
struct UInputAPI_GetKeyString_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.InputAPI.IsAltPressed
struct UInputAPI_IsAltPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.InputAPI.IsCtrlPressed
struct UInputAPI_IsCtrlPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.InputAPI.IsShiftPressed
struct UInputAPI_IsShiftPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.HeroTowerAPI.RequestHeroMatchRecord
struct UHeroTowerAPI_RequestHeroMatchRecord_Params
{
	int                                                ClassID;                                                  // (Parm)
};

// Function NWindow.HeroTowerAPI.RequestWriteHeroWords
struct UHeroTowerAPI_RequestWriteHeroWords_Params
{
	struct FString                                     strWord;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.HennaAPI.GetHennaInfo
struct UHennaAPI_GetHennaInfo_Params
{
	int                                                a_Index;                                                  // (Parm)
	int                                                a_HennaID;                                                // (Parm, OutParm)
	int                                                a_IsActive;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.HennaAPI.GetHennaInfoCount
struct UHennaAPI_GetHennaInfoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.GraphicAPI.DoFResume
struct UGraphicAPI_DoFResume_Params
{
};

// Function NWindow.GraphicAPI.DoFPause
struct UGraphicAPI_DoFPause_Params
{
};

// Function NWindow.GraphicAPI.DoFSetEndDistance
struct UGraphicAPI_DoFSetEndDistance_Params
{
	float                                              a_EndDistance;                                            // (Parm)
};

// Function NWindow.GraphicAPI.DoFSetStartDistance
struct UGraphicAPI_DoFSetStartDistance_Params
{
	float                                              a_StartDistance;                                          // (Parm)
};

// Function NWindow.GraphicAPI.DoFSetFocusDistance
struct UGraphicAPI_DoFSetFocusDistance_Params
{
	float                                              a_FocusDistance;                                          // (Parm)
};

// Function NWindow.GraphicAPI.DoFSetFocusLocation
struct UGraphicAPI_DoFSetFocusLocation_Params
{
	struct FVector                                     a_FocusLocation;                                          // (Parm)
};

// Function NWindow.GraphicAPI.DoFSetFocusPlayer
struct UGraphicAPI_DoFSetFocusPlayer_Params
{
};

// Function NWindow.GraphicAPI.DoFSetFocusActor
struct UGraphicAPI_DoFSetFocusActor_Params
{
	class AActor*                                      a_FocusActor;                                             // (Parm)
};

// Function NWindow.GMAPI.RequestSnoopEnd
struct UGMAPI_RequestSnoopEnd_Params
{
	int                                                a_SnoopID;                                                // (Parm)
};

// Function NWindow.GMAPI.GetObservingUserInfo
struct UGMAPI_GetObservingUserInfo_Params
{
	struct FUserInfo                                   a_ObservingUserInfo;                                      // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.GMAPI.RequestGMCommand
struct UGMAPI_RequestGMCommand_Params
{
	TEnumAsByte<EGMCommandType>                        a_GMCommandType;                                          // (Parm)
	struct FString                                     a_Param;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function NWindow.GMAPI.BeginGMChangeServer
struct UGMAPI_BeginGMChangeServer_Params
{
	int                                                a_ServerID;                                               // (Parm)
	struct FVector                                     a_PlayerLocation;                                         // (Parm)
};

// Function NWindow.EventMatchAPI.SetSelectedUser
struct UEventMatchAPI_SetSelectedUser_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                a_UserID;                                                 // (Parm)
};

// Function NWindow.EventMatchAPI.GetUserData
struct UEventMatchAPI_GetUserData_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                a_UserID;                                                 // (Parm)
	struct FEventMatchUserData                         a_UserData;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.EventMatchAPI.GetPartyMemberCount
struct UEventMatchAPI_GetPartyMemberCount_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.EventMatchAPI.GetTeamName
struct UEventMatchAPI_GetTeamName_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.EventMatchAPI.GetScore
struct UEventMatchAPI_GetScore_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.EventMatchAPI.GetEventMatchData
struct UEventMatchAPI_GetEventMatchData_Params
{
	struct FEventMatchData                             a_EventMatchData;                                         // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.EnchantAPI.RequestExCancelEnchantItem
struct UEnchantAPI_RequestExCancelEnchantItem_Params
{
};

// Function NWindow.EnchantAPI.RequestExTryToPutEnchantSupportItem
struct UEnchantAPI_RequestExTryToPutEnchantSupportItem_Params
{
	struct FItemID                                     a_sTargetID;                                              // (Parm)
	struct FItemID                                     a_sSupportID;                                             // (Parm)
};

// Function NWindow.EnchantAPI.RequestExTryToPutEnchantTargetItem
struct UEnchantAPI_RequestExTryToPutEnchantTargetItem_Params
{
	struct FItemID                                     a_sTargetID;                                              // (Parm)
};

// Function NWindow.EnchantAPI.RequestRemoveAttribute
struct UEnchantAPI_RequestRemoveAttribute_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.EnchantAPI.RequestEnchantItemAttribute
struct UEnchantAPI_RequestEnchantItemAttribute_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.EnchantAPI.RequestEnchantItem
struct UEnchantAPI_RequestEnchantItem_Params
{
	struct FItemID                                     a_sTargetID;                                              // (Parm)
	struct FItemID                                     a_sSupportID;                                             // (Parm)
};

// Function NWindow.CommandChannelAPI.RequestCommandChannelPartyMembersInfo
struct UCommandChannelAPI_RequestCommandChannelPartyMembersInfo_Params
{
	int                                                MasterID;                                                 // (Parm)
};

// Function NWindow.CommandChannelAPI.RequestCommandChannelWithdraw
struct UCommandChannelAPI_RequestCommandChannelWithdraw_Params
{
};

// Function NWindow.CommandChannelAPI.RequestCommandChannelBanParty
struct UCommandChannelAPI_RequestCommandChannelBanParty_Params
{
	struct FString                                     PartyMasterName;                                          // (Parm, NeedCtorLink)
};

// Function NWindow.CommandChannelAPI.RequestCommandChannelInfo
struct UCommandChannelAPI_RequestCommandChannelInfo_Params
{
};

// Function NWindow.BookMarkAPI.RequestGetBookMarkPos
struct UBookMarkAPI_RequestGetBookMarkPos_Params
{
	struct FItemID                                     slotID;                                                   // (Parm)
	struct FVector                                     pos;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestChangeBookMarkSlot
struct UBookMarkAPI_RequestChangeBookMarkSlot_Params
{
	struct FItemID                                     slotID1;                                                  // (Parm)
	struct FItemID                                     slotID2;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestTelePortBookMark
struct UBookMarkAPI_RequestTelePortBookMark_Params
{
	struct FItemID                                     slotID;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestDeleteBookMarkSlot
struct UBookMarkAPI_RequestDeleteBookMarkSlot_Params
{
	struct FItemID                                     slotID;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestModifyBookMarkSlot
struct UBookMarkAPI_RequestModifyBookMarkSlot_Params
{
	struct FItemID                                     slotID;                                                   // (Parm)
	struct FString                                     slotTitle;                                                // (Parm, NeedCtorLink)
	int                                                iconID;                                                   // (Parm)
	struct FString                                     iconTitle;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestSaveBookMarkSlot
struct UBookMarkAPI_RequestSaveBookMarkSlot_Params
{
	struct FString                                     slotTitle;                                                // (Parm, NeedCtorLink)
	int                                                iconID;                                                   // (Parm)
	struct FString                                     iconTitle;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestShowBookMark
struct UBookMarkAPI_RequestShowBookMark_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.BookMarkAPI.RequestBookMarkSlotInfo
struct UBookMarkAPI_RequestBookMarkSlotInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.AudioAPI.StopMusic
struct UAudioAPI_StopMusic_Params
{
};

// Function NWindow.AudioAPI.PlayMusic
struct UAudioAPI_PlayMusic_Params
{
	struct FString                                     a_MusicName;                                              // (Parm, NeedCtorLink)
	float                                              a_FadeInTime;                                             // (Parm)
};

// Function NWindow.AudioAPI.PlaySound
struct UAudioAPI_PlaySound_Params
{
	struct FString                                     a_SoundName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.AuctionAPI.RequestInfoItemAuction
struct UAuctionAPI_RequestInfoItemAuction_Params
{
	int                                                AuctionID;                                                // (Parm)
};

// Function NWindow.AuctionAPI.RequestBidItemAuction
struct UAuctionAPI_RequestBidItemAuction_Params
{
	int                                                AuctionID;                                                // (Parm)
	struct FINT64                                      Adena;                                                    // (Parm)
};

// Function NWindow.ActionAPI.RequestSummonedActionList
struct UActionAPI_RequestSummonedActionList_Params
{
};

// Function NWindow.ActionAPI.RequestPetActionList
struct UActionAPI_RequestPetActionList_Params
{
};

// Function NWindow.ActionAPI.RequestActionList
struct UActionAPI_RequestActionList_Params
{
};

// Function NWindow.UIAPI_WINDOW.GetSelectedRadioButtonName
struct UUIAPI_WINDOW_GetSelectedRadioButtonName_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	int                                                a_RadioGroupID;                                           // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.ClearAnchor
struct UUIAPI_WINDOW_ClearAnchor_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetAnchor
struct UUIAPI_WINDOW_SetAnchor_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     AnchorWindowName;                                         // (Parm, NeedCtorLink)
	struct FString                                     RelativePoint;                                            // (Parm, NeedCtorLink)
	struct FString                                     AnchorPoint;                                              // (Parm, NeedCtorLink)
	int                                                OffsetX;                                                  // (Parm)
	int                                                OffsetY;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.GetTooltipText
struct UUIAPI_WINDOW_GetTooltipText_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetTooltipText
struct UUIAPI_WINDOW_SetTooltipText_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetTooltipType
struct UUIAPI_WINDOW_SetTooltipType_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     TooltipType;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetTabOrder
struct UUIAPI_WINDOW_SetTabOrder_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NextName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     PreName;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetResizeFrameSize
struct UUIAPI_WINDOW_SetResizeFrameSize_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                nWidth;                                                   // (Parm)
	int                                                nHeight;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.SetFrameSize
struct UUIAPI_WINDOW_SetFrameSize_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                nWidth;                                                   // (Parm)
	int                                                nHeight;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.SetWindowSizeRel43
struct UUIAPI_WINDOW_SetWindowSizeRel43_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	float                                              fWidthRate;                                               // (Parm)
	float                                              fHeightRate;                                              // (Parm)
	int                                                nOffsetWidth;                                             // (Parm)
	int                                                nOffsetHeight;                                            // (Parm)
};

// Function NWindow.UIAPI_WINDOW.SetWindowSizeRel
struct UUIAPI_WINDOW_SetWindowSizeRel_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	float                                              fWidthRate;                                               // (Parm)
	float                                              fHeightRate;                                              // (Parm)
	int                                                nOffsetWidth;                                             // (Parm)
	int                                                nOffsetHeight;                                            // (Parm)
};

// Function NWindow.UIAPI_WINDOW.SetWindowSize
struct UUIAPI_WINDOW_SetWindowSize_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                nWidth;                                                   // (Parm)
	int                                                nHeight;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.IsFocused
struct UUIAPI_WINDOW_IsFocused_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_WINDOW.SetFocus
struct UUIAPI_WINDOW_SetFocus_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.NotifyAlarm
struct UUIAPI_WINDOW_NotifyAlarm_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.Iconize
struct UUIAPI_WINDOW_Iconize_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Texture;                                                  // (Parm, NeedCtorLink)
	int                                                ToolTip;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.MoveShake
struct UUIAPI_WINDOW_MoveShake_Params
{
	struct FString                                     ContorlName;                                              // (Parm, NeedCtorLink)
	int                                                a_nRange;                                                 // (Parm)
	int                                                a_nSet;                                                   // (Parm)
	float                                              a_Seconds;                                                // (OptionalParm, Parm)
};

// Function NWindow.UIAPI_WINDOW.MoveEx
struct UUIAPI_WINDOW_MoveEx_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                a_nX;                                                     // (Parm)
	int                                                a_nY;                                                     // (Parm)
};

// Function NWindow.UIAPI_WINDOW.MoveTo
struct UUIAPI_WINDOW_MoveTo_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                a_nX;                                                     // (Parm)
	int                                                a_nY;                                                     // (Parm)
};

// Function NWindow.UIAPI_WINDOW.Move
struct UUIAPI_WINDOW_Move_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                a_nDeltaX;                                                // (Parm)
	int                                                a_nDeltaY;                                                // (Parm)
	float                                              a_Seconds;                                                // (OptionalParm, Parm)
};

// Function NWindow.UIAPI_WINDOW.SetAlpha
struct UUIAPI_WINDOW_SetAlpha_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                a_nAlpha;                                                 // (Parm)
	float                                              a_Seconds;                                                // (OptionalParm, Parm)
};

// Function NWindow.UIAPI_WINDOW.SetAlwaysOnTop
struct UUIAPI_WINDOW_SetAlwaysOnTop_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               a_bAlwaysOnTop;                                           // (Parm)
};

// Function NWindow.UIAPI_WINDOW.IsEnableWindow
struct UUIAPI_WINDOW_IsEnableWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_WINDOW.DisableWindow
struct UUIAPI_WINDOW_DisableWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.EnableWindow
struct UUIAPI_WINDOW_EnableWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetWindowTitleByText
struct UUIAPI_WINDOW_SetWindowTitleByText_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strText;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.SetWindowTitle
struct UUIAPI_WINDOW_SetWindowTitle_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIAPI_WINDOW.KillUITimer
struct UUIAPI_WINDOW_KillUITimer_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                TimerID;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.SetUITimer
struct UUIAPI_WINDOW_SetUITimer_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                TimerID;                                                  // (Parm)
	int                                                Delayms;                                                  // (Parm)
};

// Function NWindow.UIAPI_WINDOW.GetRect
struct UUIAPI_WINDOW_GetRect_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FRect                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_WINDOW.Clear
struct UUIAPI_WINDOW_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.HideWindow
struct UUIAPI_WINDOW_HideWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.ShowWindow
struct UUIAPI_WINDOW_ShowWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_WINDOW.IsMinimizedWindow
struct UUIAPI_WINDOW_IsMinimizedWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_WINDOW.IsShowWindow
struct UUIAPI_WINDOW_IsShowWindow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_TEXTLISTBOX.Clear
struct UUIAPI_TEXTLISTBOX_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTLISTBOX.AddString
struct UUIAPI_TEXTLISTBOX_AddString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FColor                                      TextColor;                                                // (Parm)
};

// Function NWindow.UIAPI_TABCTRL.SetDisable
struct UUIAPI_TABCTRL_SetDisable_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	bool                                               bDisable;                                                 // (Parm)
};

// Function NWindow.UIAPI_TABCTRL.GetTopIndex
struct UUIAPI_TABCTRL_GetTopIndex_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_TABCTRL.SetTopOrder
struct UUIAPI_TABCTRL_SetTopOrder_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	bool                                               bSendMessage;                                             // (Parm)
};

// Function NWindow.UIAPI_TABCTRL.InitTabCtrl
struct UUIAPI_TABCTRL_InitTabCtrl_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_LISTCTRL.ShowScrollBar
struct UUIAPI_LISTCTRL_ShowScrollBar_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.UIAPI_LISTCTRL.SetSelectedIndex
struct UUIAPI_LISTCTRL_SetSelectedIndex_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	bool                                               bMoveToRow;                                               // (Parm)
};

// Function NWindow.UIAPI_LISTCTRL.GetSelectedIndex
struct UUIAPI_LISTCTRL_GetSelectedIndex_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_LISTCTRL.GetRecordCount
struct UUIAPI_LISTCTRL_GetRecordCount_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_LISTCTRL.DeleteRecord
struct UUIAPI_LISTCTRL_DeleteRecord_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIAPI_LISTCTRL.DeleteAllItem
struct UUIAPI_LISTCTRL_DeleteAllItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_LISTCTRL.ModifyRecord
struct UUIAPI_LISTCTRL_ModifyRecord_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	struct FLVDataRecord                               Record;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_LISTCTRL.InsertRecord
struct UUIAPI_LISTCTRL_InsertRecord_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FLVDataRecord                               Record;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MULTIEDITBOX.SetString
struct UUIAPI_MULTIEDITBOX_SetString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MULTIEDITBOX.GetString
struct UUIAPI_MULTIEDITBOX_GetString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_PROGRESSCTRL.Start
struct UUIAPI_PROGRESSCTRL_Start_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_PROGRESSCTRL.Resume
struct UUIAPI_PROGRESSCTRL_Resume_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_PROGRESSCTRL.Stop
struct UUIAPI_PROGRESSCTRL_Stop_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_PROGRESSCTRL.Reset
struct UUIAPI_PROGRESSCTRL_Reset_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_PROGRESSCTRL.SetPos
struct UUIAPI_PROGRESSCTRL_SetPos_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Millitime;                                                // (Parm)
};

// Function NWindow.UIAPI_PROGRESSCTRL.SetProgressTime
struct UUIAPI_PROGRESSCTRL_SetProgressTime_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Millitime;                                                // (Parm)
};

// Function NWindow.UIAPI_CHECKBOX.ToggleDisable
struct UUIAPI_CHECKBOX_ToggleDisable_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_CHECKBOX.SetDisable
struct UUIAPI_CHECKBOX_SetDisable_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bDisable;                                                 // (Parm)
};

// Function NWindow.UIAPI_CHECKBOX.IsDisable
struct UUIAPI_CHECKBOX_IsDisable_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_CHECKBOX.IsChecked
struct UUIAPI_CHECKBOX_IsChecked_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_CHECKBOX.SetCheck
struct UUIAPI_CHECKBOX_SetCheck_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bCheck;                                                   // (Parm)
};

// Function NWindow.UIAPI_CHECKBOX.SetTitle
struct UUIAPI_CHECKBOX_SetTitle_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_COMBOBOX.AddStringWithColor
struct UUIAPI_COMBOBOX_AddStringWithColor_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	struct FColor                                      Col;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_COMBOBOX.GetNumOfItems
struct UUIAPI_COMBOBOX_GetNumOfItems_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_COMBOBOX.Clear
struct UUIAPI_COMBOBOX_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_COMBOBOX.SetSelectedNum
struct UUIAPI_COMBOBOX_SetSelectedNum_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Num;                                                      // (Parm)
};

// Function NWindow.UIAPI_COMBOBOX.GetSelectedNum
struct UUIAPI_COMBOBOX_GetSelectedNum_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_COMBOBOX.GetReserved
struct UUIAPI_COMBOBOX_GetReserved_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Num;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_COMBOBOX.GetString
struct UUIAPI_COMBOBOX_GetString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Num;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_COMBOBOX.SYS_AddStringWithReserved
struct UUIAPI_COMBOBOX_SYS_AddStringWithReserved_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	int                                                Reserved;                                                 // (Parm)
};

// Function NWindow.UIAPI_COMBOBOX.AddStringWithReserved
struct UUIAPI_COMBOBOX_AddStringWithReserved_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	int                                                Reserved;                                                 // (Parm)
};

// Function NWindow.UIAPI_COMBOBOX.SYS_AddString
struct UUIAPI_COMBOBOX_SYS_AddString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIAPI_COMBOBOX.AddString
struct UUIAPI_COMBOBOX_AddString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EDITBOX.SetHighLight
struct UUIAPI_EDITBOX_SetHighLight_Params
{
	struct FString                                     CotrolName;                                               // (Parm, NeedCtorLink)
	bool                                               bHighlight;                                               // (Parm)
};

// Function NWindow.UIAPI_EDITBOX.SetEditType
struct UUIAPI_EDITBOX_SetEditType_Params
{
	struct FString                                     CotrolName;                                               // (Parm, NeedCtorLink)
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EDITBOX.Clear
struct UUIAPI_EDITBOX_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EDITBOX.SimulateBackspace
struct UUIAPI_EDITBOX_SimulateBackspace_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EDITBOX.AddString
struct UUIAPI_EDITBOX_AddString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EDITBOX.SetString
struct UUIAPI_EDITBOX_SetString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EDITBOX.GetString
struct UUIAPI_EDITBOX_GetString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_BUTTON.SetButtonName
struct UUIAPI_BUTTON_SetButtonName_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                NameID;                                                   // (Parm)
};

// Function NWindow.UIAPI_TREECTRL.SetNodeItemText
struct UUIAPI_TREECTRL_SetNodeItemText_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	int                                                nTextID;                                                  // (Parm)
	struct FString                                     strText;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TREECTRL.ShowScrollBar
struct UUIAPI_TREECTRL_ShowScrollBar_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.UIAPI_TREECTRL.GetParentNode
struct UUIAPI_TREECTRL_GetParentNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_TREECTRL.GetChildNode
struct UUIAPI_TREECTRL_GetChildNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_TREECTRL.IsExpandedNode
struct UUIAPI_TREECTRL_IsExpandedNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_TREECTRL.IsNodeNameExist
struct UUIAPI_TREECTRL_IsNodeNameExist_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_TREECTRL.DeleteNode
struct UUIAPI_TREECTRL_DeleteNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_TREECTRL.GetExpandedNode
struct UUIAPI_TREECTRL_GetExpandedNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_TREECTRL.SetExpandedNode
struct UUIAPI_TREECTRL_SetExpandedNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	bool                                               bExpanded;                                                // (Parm)
};

// Function NWindow.UIAPI_TREECTRL.Clear
struct UUIAPI_TREECTRL_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TREECTRL.InsertNodeItem
struct UUIAPI_TREECTRL_InsertNodeItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
	struct FXMLTreeNodeItemInfo                        infNodeItem;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TREECTRL.InsertNode
struct UUIAPI_TREECTRL_InsertNode_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strParentName;                                            // (Parm, NeedCtorLink)
	struct FXMLTreeNodeInfo                            infNode;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTURECTRL.GetTextureName
struct UUIAPI_TEXTURECTRL_GetTextureName_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTURECTRL.SetTextureWithObject
struct UUIAPI_TEXTURECTRL_SetTextureWithObject_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	class UTexture*                                    objTexture;                                               // (Parm)
};

// Function NWindow.UIAPI_TEXTURECTRL.SetTextureWithClanCrest
struct UUIAPI_TEXTURECTRL_SetTextureWithClanCrest_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                clanID;                                                   // (Parm)
};

// Function NWindow.UIAPI_TEXTURECTRL.SetTextureCtrlType
struct UUIAPI_TEXTURECTRL_SetTextureCtrlType_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<ETextureCtrlType>                      type;                                                     // (Parm)
};

// Function NWindow.UIAPI_TEXTURECTRL.SetTexture
struct UUIAPI_TEXTURECTRL_SetTexture_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strTexture;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTURECTRL.SetUV
struct UUIAPI_TEXTURECTRL_SetUV_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                a_U;                                                      // (Parm)
	int                                                a_V;                                                      // (Parm)
};

// Function NWindow.UIAPI_TEXTBOX.SetTooltipString
struct UUIAPI_TEXTBOX_SetTooltipString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTBOX.GetText
struct UUIAPI_TEXTBOX_GetText_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTBOX.SetInt
struct UUIAPI_TEXTBOX_SetInt_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Number;                                                   // (Parm)
};

// Function NWindow.UIAPI_TEXTBOX.SetAlign
struct UUIAPI_TEXTBOX_SetAlign_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<ETextAlign>                            Align;                                                    // (Parm)
};

// Function NWindow.UIAPI_TEXTBOX.SetText
struct UUIAPI_TEXTBOX_SetText_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_TEXTBOX.SetTextColor
struct UUIAPI_TEXTBOX_SetTextColor_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FColor                                      a_Color;                                                  // (Parm)
};

// Function NWindow.UIAPI_STATUSICONCTRL.Clear
struct UUIAPI_STATUSICONCTRL_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_STATUSICONCTRL.DelItem
struct UUIAPI_STATUSICONCTRL_DelItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                row;                                                      // (Parm)
	int                                                Col;                                                      // (Parm)
};

// Function NWindow.UIAPI_STATUSICONCTRL.GetItem
struct UUIAPI_STATUSICONCTRL_GetItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                row;                                                      // (Parm)
	int                                                Col;                                                      // (Parm)
	struct FStatusIconInfo                             Info;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.UIAPI_STATUSICONCTRL.GetColCount
struct UUIAPI_STATUSICONCTRL_GetColCount_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                row;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_STATUSICONCTRL.GetRowCount
struct UUIAPI_STATUSICONCTRL_GetRowCount_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_STATUSICONCTRL.InsertCol
struct UUIAPI_STATUSICONCTRL_InsertCol_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                row;                                                      // (Parm)
	int                                                Col;                                                      // (Parm)
	struct FStatusIconInfo                             Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_STATUSICONCTRL.InsertRow
struct UUIAPI_STATUSICONCTRL_InsertRow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                row;                                                      // (Parm)
};

// Function NWindow.UIAPI_STATUSICONCTRL.AddCol
struct UUIAPI_STATUSICONCTRL_AddCol_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                row;                                                      // (Parm)
	struct FStatusIconInfo                             Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_STATUSICONCTRL.AddRow
struct UUIAPI_STATUSICONCTRL_AddRow_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_SLIDERCTRL.GetTotalTickCount
struct UUIAPI_SLIDERCTRL_GetTotalTickCount_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_SLIDERCTRL.SetCurrentTick
struct UUIAPI_SLIDERCTRL_SetCurrentTick_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                iCurrTick;                                                // (Parm)
};

// Function NWindow.UIAPI_SLIDERCTRL.GetCurrentTick
struct UUIAPI_SLIDERCTRL_GetCurrentTick_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_SHORTCUTITEMWINDOW.Clear
struct UUIAPI_SHORTCUTITEMWINDOW_Clear_Params
{
	struct FString                                     a_strWindowID;                                            // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_SHORTCUTITEMWINDOW.UpdateShortcut
struct UUIAPI_SHORTCUTITEMWINDOW_UpdateShortcut_Params
{
	struct FString                                     a_strWindowID;                                            // (Parm, NeedCtorLink)
	int                                                a_nShortcutID;                                            // (Parm)
};

// Function NWindow.UIScript.IsUsingPrimeShop
struct UUIScript_IsUsingPrimeShop_Params
{
};

// Function NWindow.UIScript.ShowCashChargeWebSite
struct UUIScript_ShowCashChargeWebSite_Params
{
};

// Function NWindow.UIScript.RequestBR_BuyProduct
struct UUIScript_RequestBR_BuyProduct_Params
{
	int                                                iProductID;                                               // (Parm)
	int                                                iAmount;                                                  // (Parm)
};

// Function NWindow.UIScript.RequestBR_ProductInfo
struct UUIScript_RequestBR_ProductInfo_Params
{
	int                                                iProductID;                                               // (Parm)
};

// Function NWindow.UIScript.RequestBR_ProductList
struct UUIScript_RequestBR_ProductList_Params
{
};

// Function NWindow.UIScript.RequestBR_GamePoint
struct UUIScript_RequestBR_GamePoint_Params
{
};

// Function NWindow.UIScript.GetChatColorByType
struct UUIScript_GetChatColorByType_Params
{
	int                                                type;                                                     // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetDominionFlagIconTex
struct UUIScript_GetDominionFlagIconTex_Params
{
	int                                                DominionID;                                               // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RequestDominionInfo
struct UUIScript_RequestDominionInfo_Params
{
};

// Function NWindow.UIScript.RequestJoinDominionWar
struct UUIScript_RequestJoinDominionWar_Params
{
	int                                                DominionID;                                               // (Parm)
	int                                                Clan;                                                     // (Parm)
	int                                                Join;                                                     // (Parm)
	int                                                JoinID;                                                   // (Parm)
};

// Function NWindow.UIScript.RequestStopShowCrataeCubeRank
struct UUIScript_RequestStopShowCrataeCubeRank_Params
{
};

// Function NWindow.UIScript.RequestStartShowCrataeCubeRank
struct UUIScript_RequestStartShowCrataeCubeRank_Params
{
};

// Function NWindow.UIScript.RequestWithDrawPremiumItem
struct UUIScript_RequestWithDrawPremiumItem_Params
{
	int                                                Index;                                                    // (Parm)
	struct FINT64                                      Amount;                                                   // (Parm)
};

// Function NWindow.UIScript.GetNicknameColorWithIndex
struct UUIScript_GetNicknameColorWithIndex_Params
{
	int                                                ColorIndex;                                               // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetMaxNicknameColorIndexCnt
struct UUIScript_GetMaxNicknameColorIndexCnt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RequestChangeNicknameNColor
struct UUIScript_RequestChangeNicknameNColor_Params
{
	int                                                ColorIndex;                                               // (Parm)
	struct FString                                     nickname;                                                 // (Parm, NeedCtorLink)
	struct FItemID                                     Id;                                                       // (Parm)
};

// Function NWindow.UIScript.ChatNotificationFilter
struct UUIScript_ChatNotificationFilter_Params
{
	struct FString                                     Message;                                                  // (Parm, OutParm, NeedCtorLink)
	struct FString                                     keyword0;                                                 // (Parm, NeedCtorLink)
	struct FString                                     keyword1;                                                 // (Parm, NeedCtorLink)
	struct FString                                     keyword2;                                                 // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RequestPVPMatchRecord
struct UUIScript_RequestPVPMatchRecord_Params
{
};

// Function NWindow.UIScript.RequestFortressMapInfo
struct UUIScript_RequestFortressMapInfo_Params
{
	int                                                FortressID;                                               // (Parm)
};

// Function NWindow.UIScript.RequestFortressSiegeInfo
struct UUIScript_RequestFortressSiegeInfo_Params
{
};

// Function NWindow.UIScript.RequestAllAgitInfo
struct UUIScript_RequestAllAgitInfo_Params
{
};

// Function NWindow.UIScript.RequestAllFortressInfo
struct UUIScript_RequestAllFortressInfo_Params
{
};

// Function NWindow.UIScript.RequestAllCastleInfo
struct UUIScript_RequestAllCastleInfo_Params
{
};

// Function NWindow.UIScript.CharacterCreateGetClassType
struct UUIScript_CharacterCreateGetClassType_Params
{
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                Sex;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.CheckValidName
struct UUIScript_CheckValidName_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.CheckNameLength
struct UUIScript_CheckNameLength_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.DefaultCharacterStop
struct UUIScript_DefaultCharacterStop_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.DefaultCharacterTurn
struct UUIScript_DefaultCharacterTurn_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              Ratio;                                                    // (Parm)
};

// Function NWindow.UIScript.SetCharacterStyle
struct UUIScript_SetCharacterStyle_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                HairType;                                                 // (Parm)
	int                                                HairColor;                                                // (Parm)
	int                                                FaceType;                                                 // (Parm)
};

// Function NWindow.UIScript.ShowOnlyOneDefaultCharacter
struct UUIScript_ShowOnlyOneDefaultCharacter_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.GetClassDescription
struct UUIScript_GetClassDescription_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.ExecLobbyEvent
struct UUIScript_ExecLobbyEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, NeedCtorLink)
	bool                                               bReverse;                                                 // (OptionalParm, Parm)
};

// Function NWindow.UIScript.SetCurrentMakingRace
struct UUIScript_SetCurrentMakingRace_Params
{
	int                                                Race;                                                     // (Parm)
};

// Function NWindow.UIScript.ShowAllDefaultCharacter
struct UUIScript_ShowAllDefaultCharacter_Params
{
};

// Function NWindow.UIScript.SpawnDefaultCharacter
struct UUIScript_SpawnDefaultCharacter_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.ClearDefaultCharacterInfo
struct UUIScript_ClearDefaultCharacterInfo_Params
{
};

// Function NWindow.UIScript.SetDefaultCharacter
struct UUIScript_SetDefaultCharacter_Params
{
};

// Function NWindow.UIScript.RequestPrevState
struct UUIScript_RequestPrevState_Params
{
};

// Function NWindow.UIScript.RequestCreateCharacter
struct UUIScript_RequestCreateCharacter_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                Sex;                                                      // (Parm)
	int                                                HairType;                                                 // (Parm)
	int                                                HairColor;                                                // (Parm)
	int                                                FaceType;                                                 // (Parm)
};

// Function NWindow.UIScript.SetSelectedCharacter
struct UUIScript_SetSelectedCharacter_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.IsDisciplineCharacter
struct UUIScript_IsDisciplineCharacter_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsScheduledToDeleteCharacter
struct UUIScript_IsScheduledToDeleteCharacter_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.ResetCharacterPosition
struct UUIScript_ResetCharacterPosition_Params
{
};

// Function NWindow.UIScript.RequestDeleteCharacter
struct UUIScript_RequestDeleteCharacter_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.RequestRestoreCharacter
struct UUIScript_RequestRestoreCharacter_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.GetSelectedCharacterInfo
struct UUIScript_GetSelectedCharacterInfo_Params
{
	int                                                Index;                                                    // (Parm)
	struct FUserInfo                                   a_UserInfo;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RequestCharacterSelect
struct UUIScript_RequestCharacterSelect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.StartGame
struct UUIScript_StartGame_Params
{
	int                                                SelectedCharacter;                                        // (Parm)
};

// Function NWindow.UIScript.GotoLogin
struct UUIScript_GotoLogin_Params
{
};

// Function NWindow.UIScript.CreateNewCharacter
struct UUIScript_CreateNewCharacter_Params
{
};

// Function NWindow.UIScript.ShowEnableTrackerBox
struct UUIScript_ShowEnableTrackerBox_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.UIScript.ExecuteAlign
struct UUIScript_ExecuteAlign_Params
{
	TEnumAsByte<ETrackerAlignType>                     type;                                                     // (Parm)
};

// Function NWindow.UIScript.DeleteAttachedWindow
struct UUIScript_DeleteAttachedWindow_Params
{
};

// Function NWindow.UIScript.ClearTracker
struct UUIScript_ClearTracker_Params
{
};

// Function NWindow.UIScript.GetTrackerAttachedWindow
struct UUIScript_GetTrackerAttachedWindow_Params
{
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTrackerAttachedWindowList
struct UUIScript_GetTrackerAttachedWindowList_Params
{
	TArray<class UWindowHandle*>                       a_WindowList;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ShowExampleAnimation
struct UUIScript_ShowExampleAnimation_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.UIScript.ShowVirtualWindowBackground
struct UUIScript_ShowVirtualWindowBackground_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.UIScript.GetXMLControlIndex
struct UUIScript_GetXMLControlIndex_Params
{
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
	TEnumAsByte<EXMLControlType>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetXMLControlString
struct UUIScript_GetXMLControlString_Params
{
	TEnumAsByte<EXMLControlType>                       type;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetInterfaceDir
struct UUIScript_GetInterfaceDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.InitCreditState
struct UUIScript_InitCreditState_Params
{
};

// Function NWindow.UIScript.ShowMessageInLogin
struct UUIScript_ShowMessageInLogin_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetQuestLocation
struct UUIScript_GetQuestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.ToggleMsnWindow
struct UUIScript_ToggleMsnWindow_Params
{
};

// Function NWindow.UIScript.GetManorNameInManorList
struct UUIScript_GetManorNameInManorList_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetManorIDInManorList
struct UUIScript_GetManorIDInManorList_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetManorCount
struct UUIScript_GetManorCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RequestProcureCropList
struct UUIScript_RequestProcureCropList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.FishFinalAction
struct UUIScript_FishFinalAction_Params
{
};

// Function NWindow.UIScript.InitFishViewportWnd
struct UUIScript_InitFishViewportWnd_Params
{
	bool                                               Event;                                                    // (Parm)
};

// Function NWindow.UIScript.RequestFishRanking
struct UUIScript_RequestFishRanking_Params
{
};

// Function NWindow.UIScript.GetScenePlayerCtrlHandleWithWindowHandle
struct UUIScript_GetScenePlayerCtrlHandleWithWindowHandle_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	class UScenePlayerCtrlHandle*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetCharacterViewportWindowHandle
struct UUIScript_GetCharacterViewportWindowHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UCharacterViewportWindowHandle*              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetWindowHandle
struct UUIScript_GetWindowHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetVideoPlayerCtrlHandle
struct UUIScript_GetVideoPlayerCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UVideoPlayerCtrlHandle*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTreeHandle
struct UUIScript_GetTreeHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UTreeHandle*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTextureHandle
struct UUIScript_GetTextureHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UTextureHandle*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTextListBoxHandle
struct UUIScript_GetTextListBoxHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UTextListBoxHandle*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTextBoxHandle
struct UUIScript_GetTextBoxHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UTextBoxHandle*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTabHandle
struct UUIScript_GetTabHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UTabHandle*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetStatusIconHandle
struct UUIScript_GetStatusIconHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UStatusIconHandle*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetStatusBarHandle
struct UUIScript_GetStatusBarHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UStatusBarHandle*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetSliderCtrlHandle
struct UUIScript_GetSliderCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class USliderCtrlHandle*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetScenePlayerCtrlHandle
struct UUIScript_GetScenePlayerCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UScenePlayerCtrlHandle*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetRadarMapCtrlHandle
struct UUIScript_GetRadarMapCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class URadarMapCtrlHandle*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPropertyControllerHandle
struct UUIScript_GetPropertyControllerHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UPropertyControllerHandle*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetProgressCtrlHandle
struct UUIScript_GetProgressCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UProgressCtrlHandle*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetNameCtrlHandle
struct UUIScript_GetNameCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UNameCtrlHandle*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetMinimapCtrlHandle
struct UUIScript_GetMinimapCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UMinimapCtrlHandle*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetListCtrlHandle
struct UUIScript_GetListCtrlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UListCtrlHandle*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetListBoxHandle
struct UUIScript_GetListBoxHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UListBoxHandle*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetItemWindowHandle
struct UUIScript_GetItemWindowHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UItemWindowHandle*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetHtmlHandle
struct UUIScript_GetHtmlHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UHtmlHandle*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetEditBoxHandle
struct UUIScript_GetEditBoxHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UEditBoxHandle*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetDrawPanelHandle
struct UUIScript_GetDrawPanelHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UDrawPanelHandle*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetComboBoxHandle
struct UUIScript_GetComboBoxHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UComboBoxHandle*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetCheckBoxHandle
struct UUIScript_GetCheckBoxHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UCheckBoxHandle*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetChatWindowHandle
struct UUIScript_GetChatWindowHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UChatWindowHandle*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetButtonHandle
struct UUIScript_GetButtonHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UButtonHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetBarHandle
struct UUIScript_GetBarHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UBarHandle*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetAnimTextureHandle
struct UUIScript_GetAnimTextureHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UAnimTextureHandle*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetHandle
struct UUIScript_GetHandle_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	class UWindowHandle*                               a_ParentWnd;                                              // (OptionalParm, Parm)
	int                                                a_CloneID;                                                // (OptionalParm, Parm)
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RequestObserverModeEnd
struct UUIScript_RequestObserverModeEnd_Params
{
};

// Function NWindow.UIScript.RequestExEnchantSkill
struct UUIScript_RequestExEnchantSkill_Params
{
	int                                                type;                                                     // (Parm)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
};

// Function NWindow.UIScript.RequestExEnchantSkillInfoDetail
struct UUIScript_RequestExEnchantSkillInfoDetail_Params
{
	int                                                type;                                                     // (Parm)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
};

// Function NWindow.UIScript.RequestExEnchantSkillInfo
struct UUIScript_RequestExEnchantSkillInfo_Params
{
	int                                                type;                                                     // (Parm)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
};

// Function NWindow.UIScript.RequestAcquireSkillSubClan
struct UUIScript_RequestAcquireSkillSubClan_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	int                                                iType;                                                    // (Parm)
	int                                                iSubClan;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestAcquireSkill
struct UUIScript_RequestAcquireSkill_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	int                                                iType;                                                    // (Parm)
};

// Function NWindow.UIScript.RequestAcquireSkillInfo
struct UUIScript_RequestAcquireSkillInfo_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	int                                                iType;                                                    // (Parm)
};

// Function NWindow.UIScript.BeginBenchMark
struct UUIScript_BeginBenchMark_Params
{
};

// Function NWindow.UIScript.BeginPlay
struct UUIScript_BeginPlay_Params
{
};

// Function NWindow.UIScript.EraseReplayFile
struct UUIScript_EraseReplayFile_Params
{
	struct FString                                     strFileName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.BeginReplay
struct UUIScript_BeginReplay_Params
{
	struct FString                                     strFileName;                                              // (Parm, NeedCtorLink)
	bool                                               bLoadCameraInst;                                          // (Parm)
	bool                                               bLoadChatData;                                            // (Parm)
};

// Function NWindow.UIScript.GetDirList
struct UUIScript_GetDirList_Params
{
	TArray<struct FString>                             DirList;                                                  // (Parm, OutParm, NeedCtorLink)
	struct FString                                     strDir;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetFileList
struct UUIScript_GetFileList_Params
{
	TArray<struct FString>                             FileList;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     strDir;                                                   // (Parm, NeedCtorLink)
	struct FString                                     strExtention;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetCharacterSelectionActor
struct UUIScript_GetCharacterSelectionActor_Params
{
	int                                                a_CharIndex;                                              // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPlayerPosition
struct UUIScript_GetPlayerPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPlayerActor
struct UUIScript_GetPlayerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.SetChatMessage
struct UUIScript_SetChatMessage_Params
{
	struct FString                                     a_Message;                                                // (Parm, NeedCtorLink)
	bool                                               IsAppend;                                                 // (OptionalParm, Parm)
};

// Function NWindow.UIScript.RequestHennaUnEquip
struct UUIScript_RequestHennaUnEquip_Params
{
	int                                                iHennaID;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestHennaUnEquipList
struct UUIScript_RequestHennaUnEquipList_Params
{
};

// Function NWindow.UIScript.RequestHennaUnEquipInfo
struct UUIScript_RequestHennaUnEquipInfo_Params
{
	int                                                iHennaID;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestHennaEquip
struct UUIScript_RequestHennaEquip_Params
{
	int                                                iHennaID;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestHennaItemList
struct UUIScript_RequestHennaItemList_Params
{
};

// Function NWindow.UIScript.RequestHennaItemInfo
struct UUIScript_RequestHennaItemInfo_Params
{
	int                                                iHennaID;                                                 // (Parm)
};

// Function NWindow.UIScript.GetLootingMethodName
struct UUIScript_GetLootingMethodName_Params
{
	int                                                a_LootingMethodID;                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetCurrentZoneID
struct UUIScript_GetCurrentZoneID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetCurrentZoneName
struct UUIScript_GetCurrentZoneName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetZoneNameWithZoneID
struct UUIScript_GetZoneNameWithZoneID_Params
{
	int                                                a_ZoneID;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.OnModifyCurrentTickSliderCtrl
struct UUIScript_OnModifyCurrentTickSliderCtrl_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                iCurrentTick;                                             // (Parm)
};

// Function NWindow.UIScript.RequestOpenMinimap
struct UUIScript_RequestOpenMinimap_Params
{
};

// Function NWindow.UIScript.StopSound
struct UUIScript_StopSound_Params
{
	struct FString                                     a_SoundName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.PlaySound
struct UUIScript_PlaySound_Params
{
	struct FString                                     strSoundName;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ProcessCommandInterPartyChatMessage
struct UUIScript_ProcessCommandInterPartyChatMessage_Params
{
	struct FString                                     a_strChatMsg;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ProcessCommandChatMessage
struct UUIScript_ProcessCommandChatMessage_Params
{
	struct FString                                     a_strChatMsg;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ProcessPartyMatchChatMessage
struct UUIScript_ProcessPartyMatchChatMessage_Params
{
	TEnumAsByte<EChatType>                             ChatType;                                                 // (Parm)
	struct FString                                     a_strChatMsg;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ProcessPetitionChatMessage
struct UUIScript_ProcessPetitionChatMessage_Params
{
	struct FString                                     a_strChatMsg;                                             // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ProcessChatMessage
struct UUIScript_ProcessChatMessage_Params
{
	struct FString                                     chatMessage;                                              // (Parm, NeedCtorLink)
	int                                                type;                                                     // (Parm)
	bool                                               bStopMacro;                                               // (OptionalParm, Parm)
};

// Function NWindow.UIScript.OnFlashCtrlMsg
struct UUIScript_OnFlashCtrlMsg_Params
{
	class UFlashCtrlHandle*                            a_FlashCtrlHandle;                                        // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnHtmlMsgHideWindow
struct UUIScript_OnHtmlMsgHideWindow_Params
{
	class UHtmlHandle*                                 a_HtmlHandle;                                             // (Parm)
};

// Function NWindow.UIScript.OnPropertyControllerResize
struct UUIScript_OnPropertyControllerResize_Params
{
	int                                                a_Height;                                                 // (Parm)
};

// Function NWindow.UIScript.OnTextureAnimEnd
struct UUIScript_OnTextureAnimEnd_Params
{
	class UAnimTextureHandle*                          a_AnimTextureHandle;                                      // (Parm)
};

// Function NWindow.UIScript.OnComboBoxItemSelected
struct UUIScript_OnComboBoxItemSelected_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.OnProgressTimeUp
struct UUIScript_OnProgressTimeUp_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnSelectItemWithHandle
struct UUIScript_OnSelectItemWithHandle_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                a_Index;                                                  // (Parm)
};

// Function NWindow.UIScript.OnDBClickItemWithHandle
struct UUIScript_OnDBClickItemWithHandle_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                a_Index;                                                  // (Parm)
};

// Function NWindow.UIScript.OnRClickItemWithHandle
struct UUIScript_OnRClickItemWithHandle_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                a_Index;                                                  // (Parm)
};

// Function NWindow.UIScript.OnRDBClickItem
struct UUIScript_OnRDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.OnRClickItem
struct UUIScript_OnRClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.OnDBClickItem
struct UUIScript_OnDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.OnClickItem
struct UUIScript_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.OnClickCheckBox
struct UUIScript_OnClickCheckBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnDBClickListBoxItem
struct UUIScript_OnDBClickListBoxItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnDBClickListCtrlRecord
struct UUIScript_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnClickListCtrlRecord
struct UUIScript_OnClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnChatMarkedEditBox
struct UUIScript_OnChatMarkedEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnChangeEditBox
struct UUIScript_OnChangeEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnCompleteEditBox
struct UUIScript_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnTabMerge
struct UUIScript_OnTabMerge_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnTabSplit
struct UUIScript_OnTabSplit_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnButtonTimer
struct UUIScript_OnButtonTimer_Params
{
	bool                                               bExpired;                                                 // (Parm)
};

// Function NWindow.UIScript.OnClickButtonWithHandle
struct UUIScript_OnClickButtonWithHandle_Params
{
	class UButtonHandle*                               a_ButtonHandle;                                           // (Parm)
};

// Function NWindow.UIScript.OnClickButton
struct UUIScript_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnDropWnd
struct UUIScript_OnDropWnd_Params
{
	class UWindowHandle*                               hTarget;                                                  // (Parm)
	class UWindowHandle*                               hDropWnd;                                                 // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnDropItemWithHandle
struct UUIScript_OnDropItemWithHandle_Params
{
	class UWindowHandle*                               hTarget;                                                  // (Parm)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnDropItemSource
struct UUIScript_OnDropItemSource_Params
{
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnDragItemEnd
struct UUIScript_OnDragItemEnd_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnDragItemStart
struct UUIScript_OnDragItemStart_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnDropItem
struct UUIScript_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnMouseOut
struct UUIScript_OnMouseOut_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
};

// Function NWindow.UIScript.OnMouseOver
struct UUIScript_OnMouseOver_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
};

// Function NWindow.UIScript.OnMButtonUp
struct UUIScript_OnMButtonUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnMButtonDown
struct UUIScript_OnMButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnRButtonDblClick
struct UUIScript_OnRButtonDblClick_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnRButtonUp
struct UUIScript_OnRButtonUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnRButtonDown
struct UUIScript_OnRButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnLButtonDblClick
struct UUIScript_OnLButtonDblClick_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnLButtonUp
struct UUIScript_OnLButtonUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnLButtonDown
struct UUIScript_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function NWindow.UIScript.OnKeyUp
struct UUIScript_OnKeyUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
};

// Function NWindow.UIScript.OnKeyDown
struct UUIScript_OnKeyDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
};

// Function NWindow.UIScript.OnRegisterEvent
struct UUIScript_OnRegisterEvent_Params
{
};

// Function NWindow.UIScript.OnDefaultPosition
struct UUIScript_OnDefaultPosition_Params
{
};

// Function NWindow.UIScript.OnSendPacketWhenHiding
struct UUIScript_OnSendPacketWhenHiding_Params
{
};

// Function NWindow.UIScript.OnExitState
struct UUIScript_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function NWindow.UIScript.OnEnterState
struct UUIScript_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function NWindow.UIScript.OnMinimize
struct UUIScript_OnMinimize_Params
{
};

// Function NWindow.UIScript.OnTimer
struct UUIScript_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function NWindow.UIScript.OnEventWithParamMap
struct UUIScript_OnEventWithParamMap_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FParamMap                                   a_ParamMap;                                               // (Parm)
};

// Function NWindow.UIScript.OnEvent
struct UUIScript_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.OnHide
struct UUIScript_OnHide_Params
{
};

// Function NWindow.UIScript.OnShow
struct UUIScript_OnShow_Params
{
};

// Function NWindow.UIScript.OnTick
struct UUIScript_OnTick_Params
{
};

// Function NWindow.UIScript.OnLoad
struct UUIScript_OnLoad_Params
{
};

// Function NWindow.UIScript.SetItemTextLink
struct UUIScript_SetItemTextLink_Params
{
	struct FItemID                                     a_ID;                                                     // (Parm)
	struct FString                                     a_ItemName;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ReturnTooltipInfo
struct UUIScript_ReturnTooltipInfo_Params
{
	struct FCustomTooltip                              Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.SetOggVoiceVolume
struct UUIScript_SetOggVoiceVolume_Params
{
	float                                              a_fVolume;                                                // (Parm)
};

// Function NWindow.UIScript.SetWavVoiceVolume
struct UUIScript_SetWavVoiceVolume_Params
{
	float                                              a_fVolume;                                                // (Parm)
};

// Function NWindow.UIScript.SetMusicVolume
struct UUIScript_SetMusicVolume_Params
{
	float                                              a_fVolume;                                                // (Parm)
};

// Function NWindow.UIScript.SetSoundVolume
struct UUIScript_SetSoundVolume_Params
{
	float                                              a_fVolume;                                                // (Parm)
};

// Function NWindow.UIScript.GetConstantFloat
struct UUIScript_GetConstantFloat_Params
{
	int                                                a_nID;                                                    // (Parm)
	float                                              a_fValue;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetConstantBool
struct UUIScript_GetConstantBool_Params
{
	int                                                a_nID;                                                    // (Parm)
	int                                                a_bValue;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetConstantString
struct UUIScript_GetConstantString_Params
{
	int                                                a_nID;                                                    // (Parm)
	struct FString                                     a_strValue;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetConstantInt
struct UUIScript_GetConstantInt_Params
{
	int                                                a_nID;                                                    // (Parm)
	int                                                a_nValue;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.SetINIString
struct UUIScript_SetINIString_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.SetINIFloat
struct UUIScript_SetINIFloat_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.SetINIInt
struct UUIScript_SetINIInt_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.SetINIBool
struct UUIScript_SetINIBool_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	bool                                               Value;                                                    // (Parm)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetINIString
struct UUIScript_GetINIString_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetINIFloat
struct UUIScript_GetINIFloat_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm, OutParm)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetINIInt
struct UUIScript_GetINIInt_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm, OutParm)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetINIBool
struct UUIScript_GetINIBool_Params
{
	struct FString                                     section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm, OutParm)
	struct FString                                     file;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.RefreshINI
struct UUIScript_RefreshINI_Params
{
	struct FString                                     a_INIFileName;                                            // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestSaveInventoryOrder
struct UUIScript_RequestSaveInventoryOrder_Params
{
	TArray<struct FItemID>                             a_IDList;                                                 // (Parm, NeedCtorLink)
	TArray<int>                                        a_OrderList;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetRaceTicketString
struct UUIScript_GetRaceTicketString_Params
{
	int                                                Blessed;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetLottoString
struct UUIScript_GetLottoString_Params
{
	int                                                Enchanted;                                                // (Parm)
	int                                                Damaged;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.IsMagicalArmor
struct UUIScript_IsMagicalArmor_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetMagicalDefense
struct UUIScript_GetMagicalDefense_Params
{
	int                                                CrystalType;                                              // (Parm)
	int                                                Enchanted;                                                // (Parm)
	int                                                MagicalDefense;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPhysicalDefense
struct UUIScript_GetPhysicalDefense_Params
{
	int                                                CrystalType;                                              // (Parm)
	int                                                Enchanted;                                                // (Parm)
	int                                                PhysicalDefense;                                          // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetShieldDefense
struct UUIScript_GetShieldDefense_Params
{
	int                                                CrystalType;                                              // (Parm)
	int                                                Enchanted;                                                // (Parm)
	int                                                ShieldDefense;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetAttackSpeedString
struct UUIScript_GetAttackSpeedString_Params
{
	int                                                AttackSpeed;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetMagicalDamage
struct UUIScript_GetMagicalDamage_Params
{
	int                                                WeaponType;                                               // (Parm)
	int                                                SlotBitType;                                              // (Parm)
	int                                                CrystalType;                                              // (Parm)
	int                                                Enchanted;                                                // (Parm)
	int                                                MagicalDamage;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPhysicalDamage
struct UUIScript_GetPhysicalDamage_Params
{
	int                                                WeaponType;                                               // (Parm)
	int                                                SlotBitType;                                              // (Parm)
	int                                                CrystalType;                                              // (Parm)
	int                                                Enchanted;                                                // (Parm)
	int                                                PhysicalDamage;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetWeaponTypeString
struct UUIScript_GetWeaponTypeString_Params
{
	int                                                WeaponType;                                               // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetSlotTypeString
struct UUIScript_GetSlotTypeString_Params
{
	int                                                ItemType;                                                 // (Parm)
	int                                                SlotBitType;                                              // (Parm)
	int                                                ArmorType;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetInventoryItemCount
struct UUIScript_GetInventoryItemCount_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetOptionString
struct UUIScript_GetOptionString_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetOptionFloat
struct UUIScript_GetOptionFloat_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetOptionInt
struct UUIScript_GetOptionInt_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetOptionBool
struct UUIScript_GetOptionBool_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.SetOptionString
struct UUIScript_SetOptionString_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	struct FString                                     a_strValue;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.SetOptionFloat
struct UUIScript_SetOptionFloat_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	float                                              a_fValue;                                                 // (Parm)
};

// Function NWindow.UIScript.SetOptionInt
struct UUIScript_SetOptionInt_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	int                                                a_nValue;                                                 // (Parm)
};

// Function NWindow.UIScript.SetOptionBool
struct UUIScript_SetOptionBool_Params
{
	struct FString                                     a_strSection;                                             // (Parm, NeedCtorLink)
	struct FString                                     a_strName;                                                // (Parm, NeedCtorLink)
	bool                                               a_bValue;                                                 // (Parm)
};

// Function NWindow.UIScript.StopMacro
struct UUIScript_StopMacro_Params
{
};

// Function NWindow.UIScript.IsStackableItem
struct UUIScript_IsStackableItem_Params
{
	int                                                ConsumeType;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.UseSkill
struct UUIScript_UseSkill_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
};

// Function NWindow.UIScript.DoAction
struct UUIScript_DoAction_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
};

// Function NWindow.UIScript.ExecuteCommandFromAction
struct UUIScript_ExecuteCommandFromAction_Params
{
	struct FString                                     strCmd;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ExecuteCommand
struct UUIScript_ExecuteCommand_Params
{
	struct FString                                     a_strCmd;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.SetFixedDefaultCamera
struct UUIScript_SetFixedDefaultCamera_Params
{
	bool                                               a_bFixed;                                                 // (Parm)
};

// Function NWindow.UIScript.SetIgnorePartyInviting
struct UUIScript_SetIgnorePartyInviting_Params
{
	bool                                               a_bIgnore;                                                // (Parm)
};

// Function NWindow.UIScript.SetRenderCharacterCount
struct UUIScript_SetRenderCharacterCount_Params
{
	int                                                a_NewLimitAcotor;                                         // (Parm)
};

// Function NWindow.UIScript.SetShaderWaterEffect
struct UUIScript_SetShaderWaterEffect_Params
{
	bool                                               a_bWater;                                                 // (Parm)
};

// Function NWindow.UIScript.SetDepthBufferShadow
struct UUIScript_SetDepthBufferShadow_Params
{
	bool                                               a_bShadow;                                                // (Parm)
};

// Function NWindow.UIScript.SetDOF
struct UUIScript_SetDOF_Params
{
	bool                                               a_bDof;                                                   // (Parm)
};

// Function NWindow.UIScript.SetL2Shader
struct UUIScript_SetL2Shader_Params
{
	bool                                               a_bShader;                                                // (Parm)
};

// Function NWindow.UIScript.SetWeatherEffect
struct UUIScript_SetWeatherEffect_Params
{
	int                                                a_nWeatherEffect;                                         // (Parm)
};

// Function NWindow.UIScript.SetHDR
struct UUIScript_SetHDR_Params
{
	int                                                a_nHDR;                                                   // (Parm)
};

// Function NWindow.UIScript.SetReflectionEffect
struct UUIScript_SetReflectionEffect_Params
{
	int                                                a_nReflectionEffect;                                      // (Parm)
};

// Function NWindow.UIScript.SetPawnClippingRange
struct UUIScript_SetPawnClippingRange_Params
{
	int                                                a_nPawnClippingRange;                                     // (Parm)
};

// Function NWindow.UIScript.SetTerrainClippingRange
struct UUIScript_SetTerrainClippingRange_Params
{
	int                                                a_nTerrainClippingRange;                                  // (Parm)
};

// Function NWindow.UIScript.SetBackgroundEffect
struct UUIScript_SetBackgroundEffect_Params
{
	bool                                               a_bBackgroundEffect;                                      // (Parm)
};

// Function NWindow.UIScript.SetShadow
struct UUIScript_SetShadow_Params
{
	bool                                               a_bShadow;                                                // (Parm)
};

// Function NWindow.UIScript.SetMotionDetail
struct UUIScript_SetMotionDetail_Params
{
	int                                                a_nMotionDetail;                                          // (Parm)
};

// Function NWindow.UIScript.SetModelingDetail
struct UUIScript_SetModelingDetail_Params
{
	int                                                a_nModelingDetail;                                        // (Parm)
};

// Function NWindow.UIScript.SetTextureDetail
struct UUIScript_SetTextureDetail_Params
{
	int                                                a_nTextureDetail;                                         // (Parm)
};

// Function NWindow.UIScript.SetKeyCrypt
struct UUIScript_SetKeyCrypt_Params
{
	bool                                               a_bOnOff;                                                 // (Parm)
};

// Function NWindow.UIScript.SetDefaultPosition
struct UUIScript_SetDefaultPosition_Params
{
};

// Function NWindow.UIScript.GetShaderVersion
struct UUIScript_GetShaderVersion_Params
{
	int                                                a_nPixelShaderVersion;                                    // (Parm, OutParm)
	int                                                a_nVertexShaderVersion;                                   // (Parm, OutParm)
};

// Function NWindow.UIScript.GetResolutionIndex
struct UUIScript_GetResolutionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetMultiSample
struct UUIScript_GetMultiSample_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.SetResolution
struct UUIScript_SetResolution_Params
{
	int                                                a_nResolutionIndex;                                       // (Parm)
	int                                                a_nRefreshRateIndex;                                      // (Parm)
};

// Function NWindow.UIScript.GetRefreshRateList
struct UUIScript_GetRefreshRateList_Params
{
	TArray<int>                                        a_RefreshRateList;                                        // (Parm, OutParm, NeedCtorLink)
	int                                                a_nWidth;                                                 // (OptionalParm, Parm)
	int                                                a_nHeight;                                                // (OptionalParm, Parm)
};

// Function NWindow.UIScript.GetResolutionList
struct UUIScript_GetResolutionList_Params
{
	TArray<struct FResolutionInfo>                     a_ResolutionList;                                         // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetLanguage
struct UUIScript_GetLanguage_Params
{
	TEnumAsByte<ELanguageType>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsEnableKeyCrypt
struct UUIScript_IsEnableKeyCrypt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsCheckKeyCrypt
struct UUIScript_IsCheckKeyCrypt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsUseKeyCrypt
struct UUIScript_IsUseKeyCrypt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsEnableEngSelection
struct UUIScript_IsEnableEngSelection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.CanUseHDR
struct UUIScript_CanUseHDR_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.CanUseJoystick
struct UUIScript_CanUseJoystick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.CanUseAudio
struct UUIScript_CanUseAudio_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetServerType
struct UUIScript_GetServerType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetServerNo
struct UUIScript_GetServerNo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetServerAgeLimit
struct UUIScript_GetServerAgeLimit_Params
{
	TEnumAsByte<EServerAgeLimit>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.ExecQuit
struct UUIScript_ExecQuit_Params
{
};

// Function NWindow.UIScript.ExecRestart
struct UUIScript_ExecRestart_Params
{
};

// Function NWindow.UIScript.EndSystemMessageParam
struct UUIScript_EndSystemMessageParam_Params
{
	int                                                MsgNum;                                                   // (Parm)
	bool                                               bGetMsg;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.AddSystemMessageParam
struct UUIScript_AddSystemMessageParam_Params
{
	struct FString                                     strParam;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.AddSystemMessageString
struct UUIScript_AddSystemMessageString_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.AddSystemMessage
struct UUIScript_AddSystemMessage_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIScript.GetPrivateShopMessage
struct UUIScript_GetPrivateShopMessage_Params
{
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.SetPrivateShopMessage
struct UUIScript_SetPrivateShopMessage_Params
{
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.IsSameChatPrefix
struct UUIScript_IsSameChatPrefix_Params
{
	TEnumAsByte<EChatType>                             type;                                                     // (Parm)
	struct FString                                     InputPrefix;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetChatPrefix
struct UUIScript_GetChatPrefix_Params
{
	TEnumAsByte<EChatType>                             type;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetMaxLevel
struct UUIScript_GetMaxLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetCurrentResolution
struct UUIScript_GetCurrentResolution_Params
{
	int                                                ScreenWidth;                                              // (Parm, OutParm)
	int                                                ScreenHeight;                                             // (Parm, OutParm)
};

// Function NWindow.UIScript.GetClickLocation
struct UUIScript_GetClickLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetExpRate
struct UUIScript_GetExpRate_Params
{
	struct FINT64                                      a_Exp;                                                    // (Parm)
	int                                                a_Level;                                                  // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.CheckItemLimit
struct UUIScript_CheckItemLimit_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	struct FINT64                                      Count;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsSongDance
struct UUIScript_IsSongDance_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	int                                                SkillLevel;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.IsDebuff
struct UUIScript_IsDebuff_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	int                                                SkillLevel;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetRoutingString
struct UUIScript_GetRoutingString_Params
{
	int                                                RoutingType;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetUserRankString
struct UUIScript_GetUserRankString_Params
{
	int                                                Rank;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestBypassToServer
struct UUIScript_RequestBypassToServer_Params
{
	struct FString                                     strPass;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetAllianceCrestTexFromAllianceCrestID
struct UUIScript_GetAllianceCrestTexFromAllianceCrestID_Params
{
	int                                                AllianceCrestID;                                          // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPledgeCrestTexFromPledgeCrestID
struct UUIScript_GetPledgeCrestTexFromPledgeCrestID_Params
{
	int                                                PledgeCrestID;                                            // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetCurrentIMELang
struct UUIScript_GetCurrentIMELang_Params
{
	TEnumAsByte<EIMEType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.PlayConsoleSound
struct UUIScript_PlayConsoleSound_Params
{
	TEnumAsByte<EInterfaceSoundType>                   eType;                                                    // (Parm)
};

// Function NWindow.UIScript.GetNumericColor
struct UUIScript_GetNumericColor_Params
{
	struct FString                                     strCommaAdena;                                            // (Parm, NeedCtorLink)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.ConvertNumToTextNoAdena
struct UUIScript_ConvertNumToTextNoAdena_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.ConvertNumToText
struct UUIScript_ConvertNumToText_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.MakeCostString
struct UUIScript_MakeCostString_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.MakeCostStringINT64
struct UUIScript_MakeCostStringINT64_Params
{
	struct FINT64                                      a_Input;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetItemGradeTextureName
struct UUIScript_GetItemGradeTextureName_Params
{
	int                                                nCrystalType;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetItemGradeString
struct UUIScript_GetItemGradeString_Params
{
	int                                                nCrystalType;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.MakeFullItemName
struct UUIScript_MakeFullItemName_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetTextSize
struct UUIScript_GetTextSize_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
	struct FString                                     sFontName;                                                // (Parm, NeedCtorLink)
	int                                                nWidth;                                                   // (Parm, OutParm)
	int                                                nHeight;                                                  // (Parm, OutParm)
};

// Function NWindow.UIScript.GetTextSizeDefault
struct UUIScript_GetTextSizeDefault_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
	int                                                nWidth;                                                   // (Parm, OutParm)
	int                                                nHeight;                                                  // (Parm, OutParm)
};

// Function NWindow.UIScript.MakeFullSystemMsg
struct UUIScript_MakeFullSystemMsg_Params
{
	struct FString                                     sMsg;                                                     // (Parm, NeedCtorLink)
	struct FString                                     sArg1;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sArg2;                                                    // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetScript
struct UUIScript_GetScript_Params
{
	struct FString                                     Window;                                                   // (Parm, NeedCtorLink)
	class UUIScript*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetSystemMessageWithParamNumber
struct UUIScript_GetSystemMessageWithParamNumber_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                param;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetSystemMsgInfo
struct UUIScript_GetSystemMsgInfo_Params
{
	int                                                Id;                                                       // (Parm)
	struct FSystemMsgData                              SysMsgData;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetSystemMessage
struct UUIScript_GetSystemMessage_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetSystemString
struct UUIScript_GetSystemString_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.IsKeyDown
struct UUIScript_IsKeyDown_Params
{
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.Debug
struct UUIScript_Debug_Params
{
	struct FString                                     strMsg;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.ConvertTimetoStr
struct UUIScript_ConvertTimetoStr_Params
{
	int                                                Time;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetTimeString
struct UUIScript_GetTimeString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.MakeBuffTimeStr
struct UUIScript_MakeBuffTimeStr_Params
{
	int                                                Time;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetTeleportFlagCount
struct UUIScript_GetTeleportFlagCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTeleportBookMarkCount
struct UUIScript_GetTeleportBookMarkCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetAdena
struct UUIScript_GetAdena_Params
{
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetClanNameValue
struct UUIScript_GetClanNameValue_Params
{
	int                                                iClanID;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetClanName
struct UUIScript_GetClanName_Params
{
	int                                                clanID;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.IsBuilderPC
struct UUIScript_IsBuilderPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetClassStep
struct UUIScript_GetClassStep_Params
{
	int                                                a_ClassID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetDecoIndex
struct UUIScript_GetDecoIndex_Params
{
	struct FItemID                                     DecoID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetAccessoryItemID
struct UUIScript_GetAccessoryItemID_Params
{
	struct FItemID                                     a_LEar;                                                   // (Parm, OutParm)
	struct FItemID                                     a_REar;                                                   // (Parm, OutParm)
	struct FItemID                                     a_LFinger;                                                // (Parm, OutParm)
	struct FItemID                                     a_RFinger;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetExpByPlayerLevel
struct UUIScript_GetExpByPlayerLevel_Params
{
	int                                                iLevel;                                                   // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetSkillInfo
struct UUIScript_GetSkillInfo_Params
{
	int                                                a_SkillID;                                                // (Parm)
	int                                                a_SkillLevel;                                             // (Parm)
	struct FSkillInfo                                  a_SkillInfo;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPetInfo
struct UUIScript_GetPetInfo_Params
{
	struct FPetInfo                                    a_PetInfo;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetUserInfo
struct UUIScript_GetUserInfo_Params
{
	int                                                UserID;                                                   // (Parm)
	struct FUserInfo                                   a_UserInfo;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetTargetInfo
struct UUIScript_GetTargetInfo_Params
{
	struct FUserInfo                                   a_UserInfo;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPlayerInfo
struct UUIScript_GetPlayerInfo_Params
{
	struct FUserInfo                                   a_UserInfo;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetClassIconName
struct UUIScript_GetClassIconName_Params
{
	int                                                ClassID;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetClassStr
struct UUIScript_GetClassStr_Params
{
	int                                                ClassID;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.GetClassType
struct UUIScript_GetClassType_Params
{
	int                                                ClassID;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestInviteMpcc
struct UUIScript_RequestInviteMpcc_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestInviteParty
struct UUIScript_RequestInviteParty_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.HasClanEmblem
struct UUIScript_HasClanEmblem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.HasClanCrest
struct UUIScript_HasClanCrest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetCastleName
struct UUIScript_GetCastleName_Params
{
	int                                                castleID;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestPCCafeCouponUse
struct UUIScript_RequestPCCafeCouponUse_Params
{
	struct FString                                     a_CouponKey;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanMemberAuth
struct UUIScript_RequestClanMemberAuth_Params
{
	int                                                clanType;                                                 // (Parm)
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestEditClanAuth
struct UUIScript_RequestEditClanAuth_Params
{
	int                                                gradeID;                                                  // (Parm)
	TArray<int>                                        powers;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanAuth
struct UUIScript_RequestClanAuth_Params
{
	int                                                gradeID;                                                  // (Parm)
};

// Function NWindow.UIScript.RequestClanWarList
struct UUIScript_RequestClanWarList_Params
{
	int                                                page;                                                     // (Parm)
	int                                                State;                                                    // (Parm)
};

// Function NWindow.UIScript.RequestClanChangeNickName
struct UUIScript_RequestClanChangeNickName_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sNickName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanUnregisterEmblem
struct UUIScript_RequestClanUnregisterEmblem_Params
{
};

// Function NWindow.UIScript.RequestClanRegisterEmblem
struct UUIScript_RequestClanRegisterEmblem_Params
{
};

// Function NWindow.UIScript.RequestClanUnregisterCrest
struct UUIScript_RequestClanUnregisterCrest_Params
{
};

// Function NWindow.UIScript.RequestClanRegisterCrest
struct UUIScript_RequestClanRegisterCrest_Params
{
};

// Function NWindow.UIScript.RequestClanReorganizeMember
struct UUIScript_RequestClanReorganizeMember_Params
{
	int                                                type;                                                     // (Parm)
	struct FString                                     memberName;                                               // (Parm, NeedCtorLink)
	int                                                clanType;                                                 // (Parm)
	struct FString                                     targetMemberName;                                         // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanWithdrawWarWithClanName
struct UUIScript_RequestClanWithdrawWarWithClanName_Params
{
	struct FString                                     sClanName;                                                // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanWithdrawWar
struct UUIScript_RequestClanWithdrawWar_Params
{
};

// Function NWindow.UIScript.RequestClanDeclareWarWithClanName
struct UUIScript_RequestClanDeclareWarWithClanName_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanDeclareWarWithUserID
struct UUIScript_RequestClanDeclareWarWithUserID_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function NWindow.UIScript.RequestClanDeclareWar
struct UUIScript_RequestClanDeclareWar_Params
{
};

// Function NWindow.UIScript.RequestClanAskJoin
struct UUIScript_RequestClanAskJoin_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                clanType;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestClanExpelMember
struct UUIScript_RequestClanExpelMember_Params
{
	int                                                clanType;                                                 // (Parm)
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanLeave
struct UUIScript_RequestClanLeave_Params
{
	struct FString                                     ClanName;                                                 // (Parm, NeedCtorLink)
	int                                                clanType;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestClanDeletePupil
struct UUIScript_RequestClanDeletePupil_Params
{
	struct FString                                     sMaster;                                                  // (Parm, NeedCtorLink)
	struct FString                                     sPupil;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanAssignPupil
struct UUIScript_RequestClanAssignPupil_Params
{
	struct FString                                     sMaster;                                                  // (Parm, NeedCtorLink)
	struct FString                                     sPupil;                                                   // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestClanChangeGrade
struct UUIScript_RequestClanChangeGrade_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                grade;                                                    // (Parm)
};

// Function NWindow.UIScript.RequestClanGradeList
struct UUIScript_RequestClanGradeList_Params
{
};

// Function NWindow.UIScript.RequestClanMemberInfo
struct UUIScript_RequestClanMemberInfo_Params
{
	int                                                type;                                                     // (Parm)
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.GetPartyMemberLocationWithID
struct UUIScript_GetPartyMemberLocationWithID_Params
{
	int                                                a_PartyMemberSID;                                         // (Parm)
	struct FVector                                     a_Location;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPartyMemberLocation
struct UUIScript_GetPartyMemberLocation_Params
{
	int                                                a_PartyMemberIndex;                                       // (Parm)
	struct FVector                                     a_Location;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.GetPartyMemberCount
struct UUIScript_GetPartyMemberCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIScript.SendPrivateShopList
struct UUIScript_SendPrivateShopList_Params
{
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestQuitPrivateShop
struct UUIScript_RequestQuitPrivateShop_Params
{
	struct FString                                     type;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestDispel
struct UUIScript_RequestDispel_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	int                                                SkillLevel;                                               // (Parm)
};

// Function NWindow.UIScript.RequestDuelSurrender
struct UUIScript_RequestDuelSurrender_Params
{
};

// Function NWindow.UIScript.RequestDuelAnswerStart
struct UUIScript_RequestDuelAnswerStart_Params
{
	int                                                duelType;                                                 // (Parm)
	int                                                Option;                                                   // (Parm)
	int                                                answer;                                                   // (Parm)
};

// Function NWindow.UIScript.RequestDuelStart
struct UUIScript_RequestDuelStart_Params
{
	struct FString                                     sTargetName;                                              // (Parm, NeedCtorLink)
	int                                                duelType;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestItemList
struct UUIScript_RequestItemList_Params
{
};

// Function NWindow.UIScript.RequestCrystallizeItem
struct UUIScript_RequestCrystallizeItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	struct FINT64                                      Number;                                                   // (Parm)
};

// Function NWindow.UIScript.RequestUnequipItem
struct UUIScript_RequestUnequipItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	int                                                SlotBitType;                                              // (Parm)
};

// Function NWindow.UIScript.RequestDropItem
struct UUIScript_RequestDropItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
	struct FVector                                     Location;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestDestroyItem
struct UUIScript_RequestDestroyItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestUseItem
struct UUIScript_RequestUseItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestRestartPoint
struct UUIScript_RequestRestartPoint_Params
{
	TEnumAsByte<ERestartPointType>                     type;                                                     // (Parm)
};

// Function NWindow.UIScript.RequestMultiSellChoose
struct UUIScript_RequestMultiSellChoose_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestBBSBoard
struct UUIScript_RequestBBSBoard_Params
{
};

// Function NWindow.UIScript.RequestPreviewItem
struct UUIScript_RequestPreviewItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestPackageSend
struct UUIScript_RequestPackageSend_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestPackageSendableItemList
struct UUIScript_RequestPackageSendableItemList_Params
{
	int                                                targetID;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestChangePetName
struct UUIScript_RequestChangePetName_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestWarehouseWithdraw
struct UUIScript_RequestWarehouseWithdraw_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestWarehouseDeposit
struct UUIScript_RequestWarehouseDeposit_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestTargetUser
struct UUIScript_RequestTargetUser_Params
{
	int                                                ServerID;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestAssist
struct UUIScript_RequestAssist_Params
{
	int                                                ServerID;                                                 // (Parm)
	struct FVector                                     Loc;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestAction
struct UUIScript_RequestAction_Params
{
	int                                                ServerID;                                                 // (Parm)
	struct FVector                                     Loc;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestAttack
struct UUIScript_RequestAttack_Params
{
	int                                                ServerID;                                                 // (Parm)
	struct FVector                                     Loc;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestSetCrop
struct UUIScript_RequestSetCrop_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestSetSeed
struct UUIScript_RequestSetSeed_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestProcureCrop
struct UUIScript_RequestProcureCrop_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestBuySeed
struct UUIScript_RequestBuySeed_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestBuyItem
struct UUIScript_RequestBuyItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestSellItem
struct UUIScript_RequestSellItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.AnswerTradeRequest
struct UUIScript_AnswerTradeRequest_Params
{
	bool                                               bOK;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestAddTradeItem
struct UUIScript_RequestAddTradeItem_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
};

// Function NWindow.UIScript.RequestStartTrade
struct UUIScript_RequestStartTrade_Params
{
	int                                                targetID;                                                 // (Parm)
};

// Function NWindow.UIScript.RequestTradeDone
struct UUIScript_RequestTradeDone_Params
{
	bool                                               bDone;                                                    // (Parm)
};

// Function NWindow.UIScript.RequestRaidRecord
struct UUIScript_RequestRaidRecord_Params
{
};

// Function NWindow.UIScript.RequestSkillList
struct UUIScript_RequestSkillList_Params
{
};

// Function NWindow.UIScript.RequestTargetCancel
struct UUIScript_RequestTargetCancel_Params
{
};

// Function NWindow.UIScript.RequestSelfTarget
struct UUIScript_RequestSelfTarget_Params
{
};

// Function NWindow.UIScript.RequestAuthCardKeyLogin
struct UUIScript_RequestAuthCardKeyLogin_Params
{
	int                                                uid;                                                      // (Parm)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIScript.RequestExit
struct UUIScript_RequestExit_Params
{
};

// Function NWindow.UIScript.IsPKMode
struct UUIScript_IsPKMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_MULTISELLNEEDEDITEM.Clear
struct UUIAPI_MULTISELLNEEDEDITEM_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MULTISELLNEEDEDITEM.AddData
struct UUIAPI_MULTISELLNEEDEDITEM_AddData_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MULTISELLITEMINFO.Clear
struct UUIAPI_MULTISELLITEMINFO_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MULTISELLITEMINFO.SetItemInfo
struct UUIAPI_MULTISELLITEMINFO_SetItemInfo_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MINIMAPCTRL.DeleteAllCursedWeaponIcon
struct UUIAPI_MINIMAPCTRL_DeleteAllCursedWeaponIcon_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MINIMAPCTRL.IsOverlapped
struct UUIAPI_MINIMAPCTRL_IsOverlapped_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	int                                                FirstX;                                                   // (Parm)
	int                                                FirstY;                                                   // (Parm)
	int                                                SecondX;                                                  // (Parm)
	int                                                SecondY;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_MINIMAPCTRL.RequestReduceBtn
struct UUIAPI_MINIMAPCTRL_RequestReduceBtn_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MINIMAPCTRL.DrawGridIcon
struct UUIAPI_MINIMAPCTRL_DrawGridIcon_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	struct FString                                     a_IconName;                                               // (Parm, NeedCtorLink)
	struct FString                                     a_DupIconName;                                            // (Parm, NeedCtorLink)
	struct FVector                                     a_Loc;                                                    // (Parm)
	bool                                               a_Refresh;                                                // (Parm)
	int                                                a_XOffset;                                                // (OptionalParm, Parm)
	int                                                a_YOffset;                                                // (OptionalParm, Parm)
	struct FString                                     TooltipString;                                            // (OptionalParm, Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MINIMAPCTRL.SetSSQStatus
struct UUIAPI_MINIMAPCTRL_SetSSQStatus_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	int                                                a_SSQStatus;                                              // (Parm)
};

// Function NWindow.UIAPI_MINIMAPCTRL.SetShowQuest
struct UUIAPI_MINIMAPCTRL_SetShowQuest_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	bool                                               a_ShowQuest;                                              // (Parm)
};

// Function NWindow.UIAPI_MINIMAPCTRL.DeleteAllTarget
struct UUIAPI_MINIMAPCTRL_DeleteAllTarget_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_MINIMAPCTRL.DeleteTarget
struct UUIAPI_MINIMAPCTRL_DeleteTarget_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	struct FVector                                     a_Loc;                                                    // (Parm)
};

// Function NWindow.UIAPI_MINIMAPCTRL.AddTarget
struct UUIAPI_MINIMAPCTRL_AddTarget_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	struct FVector                                     a_Loc;                                                    // (Parm)
};

// Function NWindow.UIAPI_MINIMAPCTRL.AdjustMapView
struct UUIAPI_MINIMAPCTRL_AdjustMapView_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	struct FVector                                     Loc;                                                      // (Parm)
	bool                                               a_ZoomToTownMap;                                          // (OptionalParm, Parm)
	bool                                               a_UseGridLocation;                                        // (OptionalParm, Parm)
};

// Function NWindow.UIAPI_ITEMWINDOW.ShowScrollBar
struct UUIAPI_ITEMWINDOW_ShowScrollBar_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bShow;                                                    // (Parm)
};

// Function NWindow.UIAPI_ITEMWINDOW.SetFaded
struct UUIAPI_ITEMWINDOW_SetFaded_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bOn;                                                      // (Parm)
};

// Function NWindow.UIAPI_ITEMWINDOW.FindItem
struct UUIAPI_ITEMWINDOW_FindItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_ITEMWINDOW.Clear
struct UUIAPI_ITEMWINDOW_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_ITEMWINDOW.GetItem
struct UUIAPI_ITEMWINDOW_GetItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_ITEMWINDOW.GetSelectedItem
struct UUIAPI_ITEMWINDOW_GetSelectedItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_ITEMWINDOW.DeleteItem
struct UUIAPI_ITEMWINDOW_DeleteItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function NWindow.UIAPI_ITEMWINDOW.SetItem
struct UUIAPI_ITEMWINDOW_SetItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_ITEMWINDOW.AddItem
struct UUIAPI_ITEMWINDOW_AddItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_ITEMWINDOW.ClearSelect
struct UUIAPI_ITEMWINDOW_ClearSelect_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_ITEMWINDOW.GetItemNum
struct UUIAPI_ITEMWINDOW_GetItemNum_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_ITEMWINDOW.GetSelectedNum
struct UUIAPI_ITEMWINDOW_GetSelectedNum_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_INVENWEIGHT.ZeroWeight
struct UUIAPI_INVENWEIGHT_ZeroWeight_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_INVENWEIGHT.ReduceWeight
struct UUIAPI_INVENWEIGHT_ReduceWeight_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FINT64                                      Weight;                                                   // (Parm)
};

// Function NWindow.UIAPI_INVENWEIGHT.AddWeight
struct UUIAPI_INVENWEIGHT_AddWeight_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FINT64                                      Weight;                                                   // (Parm)
};

// Function NWindow.UIAPI_HTMLCTRL.IsPageLock
struct UUIAPI_HTMLCTRL_IsPageLock_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_HTMLCTRL.SetPageLock
struct UUIAPI_HTMLCTRL_SetPageLock_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	bool                                               bLock;                                                    // (Parm)
};

// Function NWindow.UIAPI_HTMLCTRL.SetHtmlBuffData
struct UUIAPI_HTMLCTRL_SetHtmlBuffData_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strData;                                                  // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_HTMLCTRL.ControllerExecution
struct UUIAPI_HTMLCTRL_ControllerExecution_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strBypass;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<EControlReturnType>                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_HTMLCTRL.GetFrameMaxHeight
struct UUIAPI_HTMLCTRL_GetFrameMaxHeight_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NWindow.UIAPI_HTMLCTRL.Clear
struct UUIAPI_HTMLCTRL_Clear_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_HTMLCTRL.LoadHtmlFromString
struct UUIAPI_HTMLCTRL_LoadHtmlFromString_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     HtmlString;                                               // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_HTMLCTRL.LoadHtml
struct UUIAPI_HTMLCTRL_LoadHtml_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function NWindow.UIAPI_EFFECTBUTTON.BeginEffect
struct UUIAPI_EFFECTBUTTON_BeginEffect_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                iEffectNumber;                                            // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

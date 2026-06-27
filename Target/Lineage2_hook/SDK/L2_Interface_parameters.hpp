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

// Function Interface.UICommonAPI.GetPrimeItemSymbolName
struct UUICommonAPI_GetPrimeItemSymbolName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UICommonAPI.IsAdena
struct UUICommonAPI_IsAdena_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.IsSameServerID
struct UUICommonAPI_IsSameServerID_Params
{
	struct FItemID                                     src;                                                      // (Parm)
	struct FItemID                                     des;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.IsSameClassID
struct UUICommonAPI_IsSameClassID_Params
{
	struct FItemID                                     src;                                                      // (Parm)
	struct FItemID                                     des;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.IsSameItemID
struct UUICommonAPI_IsSameItemID_Params
{
	struct FItemID                                     src;                                                      // (Parm)
	struct FItemID                                     des;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.ClearItemID
struct UUICommonAPI_ClearItemID_Params
{
	struct FItemID                                     Id;                                                       // (Parm, OutParm)
};

// Function Interface.UICommonAPI.ParamAddItemIDWithIndex
struct UUICommonAPI_ParamAddItemIDWithIndex_Params
{
	struct FString                                     param;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FItemID                                     Id;                                                       // (Parm)
	int                                                idx;                                                      // (Parm)
};

// Function Interface.UICommonAPI.ParamAddItemID
struct UUICommonAPI_ParamAddItemID_Params
{
	struct FString                                     param;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FItemID                                     Id;                                                       // (Parm)
};

// Function Interface.UICommonAPI.ParseItemIDWithIndex
struct UUICommonAPI_ParseItemIDWithIndex_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	struct FItemID                                     Id;                                                       // (Parm, OutParm)
	int                                                idx;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.ParseItemID
struct UUICommonAPI_ParseItemID_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	struct FItemID                                     Id;                                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.GetItemID
struct UUICommonAPI_GetItemID_Params
{
	int                                                Id;                                                       // (Parm)
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.IsValidItemID
struct UUICommonAPI_IsValidItemID_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.MakeTooltipSimpleText
struct UUICommonAPI_MakeTooltipSimpleText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FCustomTooltip                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UICommonAPI.ParamToRecord
struct UUICommonAPI_ParamToRecord_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	struct FLVDataRecord                               Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function Interface.UICommonAPI.ParamToItemInfo
struct UUICommonAPI_ParamToItemInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Interface.UICommonAPI.IsShowWindow
struct UUICommonAPI_IsShowWindow_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.HideWindow
struct UUICommonAPI_HideWindow_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function Interface.UICommonAPI.ShowWindowWithFocus
struct UUICommonAPI_ShowWindowWithFocus_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function Interface.UICommonAPI.ShowWindow
struct UUICommonAPI_ShowWindow_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function Interface.UICommonAPI.Split
struct UUICommonAPI_Split_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
	struct FString                                     delim;                                                    // (Parm, NeedCtorLink)
	TArray<struct FString>                             arrToken;                                                 // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogSetEditBoxMaxLength
struct UUICommonAPI_DialogSetEditBoxMaxLength_Params
{
	int                                                maxLength;                                                // (Parm)
};

// Function Interface.UICommonAPI.DialogGetReservedItemInfo
struct UUICommonAPI_DialogGetReservedItemInfo_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Interface.UICommonAPI.DialogGetReservedItemID
struct UUICommonAPI_DialogGetReservedItemID_Params
{
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogGetReservedInt3
struct UUICommonAPI_DialogGetReservedInt3_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogGetReservedInt2
struct UUICommonAPI_DialogGetReservedInt2_Params
{
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogGetReservedInt
struct UUICommonAPI_DialogGetReservedInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogSetReservedItemInfo
struct UUICommonAPI_DialogSetReservedItemInfo_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UICommonAPI.DialogSetReservedItemID
struct UUICommonAPI_DialogSetReservedItemID_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
};

// Function Interface.UICommonAPI.DialogSetReservedInt3
struct UUICommonAPI_DialogSetReservedInt3_Params
{
	int                                                Value;                                                    // (Parm)
};

// Function Interface.UICommonAPI.DialogSetReservedInt2
struct UUICommonAPI_DialogSetReservedInt2_Params
{
	struct FINT64                                      Value;                                                    // (Parm)
};

// Function Interface.UICommonAPI.DialogSetReservedInt
struct UUICommonAPI_DialogSetReservedInt_Params
{
	int                                                Value;                                                    // (Parm)
};

// Function Interface.UICommonAPI.DialogSetParamInt64
struct UUICommonAPI_DialogSetParamInt64_Params
{
	struct FINT64                                      param;                                                    // (Parm)
};

// Function Interface.UICommonAPI.DialogGetID
struct UUICommonAPI_DialogGetID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogSetString
struct UUICommonAPI_DialogSetString_Params
{
	struct FString                                     strInput;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.UICommonAPI.DialogGetString
struct UUICommonAPI_DialogGetString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UICommonAPI.DialogSetEditType
struct UUICommonAPI_DialogSetEditType_Params
{
	struct FString                                     strType;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UICommonAPI.DialogSetID
struct UUICommonAPI_DialogSetID_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.UICommonAPI.DialogIsMine
struct UUICommonAPI_DialogIsMine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UICommonAPI.DialogSetDefaultOK
struct UUICommonAPI_DialogSetDefaultOK_Params
{
};

// Function Interface.UICommonAPI.DialogHide
struct UUICommonAPI_DialogHide_Params
{
};

// Function Interface.UICommonAPI.DialogShow
struct UUICommonAPI_DialogShow_Params
{
	TEnumAsByte<EDialogType>                           dialogType;                                               // (Parm)
	struct FString                                     strMessage;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.AddPrimeItemSymbol
struct UToolTip_AddPrimeItemSymbol_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.GetDefAttrLv
struct UToolTip_GetDefAttrLv_Params
{
	int                                                DefValue;                                                 // (Parm)
};

// Function Interface.ToolTip.GetAttAttrLv
struct UToolTip_GetAttAttrLv_Params
{
	int                                                AttValue;                                                 // (Parm)
};

// Function Interface.ToolTip.AddTooltipItemQuestList
struct UToolTip_AddTooltipItemQuestList_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.AddTooltipItemAttributeGage
struct UToolTip_AddTooltipItemAttributeGage_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.GetRefineryColor
struct UToolTip_GetRefineryColor_Params
{
	int                                                Quality;                                                  // (Parm)
	int                                                R;                                                        // (Parm, OutParm)
	int                                                G;                                                        // (Parm, OutParm)
	int                                                B;                                                        // (Parm, OutParm)
};

// Function Interface.ToolTip.AddTooltipItemCount
struct UToolTip_AddTooltipItemCount_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.AddTooltipItemGrade
struct UToolTip_AddTooltipItemGrade_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.AddTooltipItemName
struct UToolTip_AddTooltipItemName_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
	int                                                AddTooltipItemName;                                       // (Parm)
};

// Function Interface.ToolTip.AddTooltipItemEnchant
struct UToolTip_AddTooltipItemEnchant_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.AddTooltipItemBlank
struct UToolTip_AddTooltipItemBlank_Params
{
	int                                                Height;                                                   // (Parm)
};

// Function Interface.ToolTip.SetTooltipItemColor
struct UToolTip_SetTooltipItemColor_Params
{
	int                                                R;                                                        // (Parm)
	int                                                G;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                offset;                                                   // (Parm)
};

// Function Interface.ToolTip.AddTooltipItemOption2
struct UToolTip_AddTooltipItemOption2_Params
{
	int                                                TitleID;                                                  // (Parm)
	int                                                ContentID;                                                // (Parm)
	bool                                               bTitle;                                                   // (Parm)
	bool                                               bContent;                                                 // (Parm)
	bool                                               IamFirst;                                                 // (Parm)
};

// Function Interface.ToolTip.AddTooltipItemOption
struct UToolTip_AddTooltipItemOption_Params
{
	int                                                TitleID;                                                  // (Parm)
	struct FString                                     Content;                                                  // (Parm, NeedCtorLink)
	bool                                               bTitle;                                                   // (Parm)
	bool                                               bContent;                                                 // (Parm)
	bool                                               IamFirst;                                                 // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_MANOR
struct UToolTip_ReturnTooltip_NTT_MANOR_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	struct FString                                     TooltipType;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_QUESTINFO
struct UToolTip_ReturnTooltip_NTT_QUESTINFO_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_RAIDLIST
struct UToolTip_ReturnTooltip_NTT_RAIDLIST_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_QUESTLIST
struct UToolTip_ReturnTooltip_NTT_QUESTLIST_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_PARTYMATCH
struct UToolTip_ReturnTooltip_NTT_PARTYMATCH_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_CLANINFO
struct UToolTip_ReturnTooltip_NTT_CLANINFO_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_RECIPE_MANUFACTURE
struct UToolTip_ReturnTooltip_NTT_RECIPE_MANUFACTURE_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_SHORTCUT
struct UToolTip_ReturnTooltip_NTT_SHORTCUT_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_RECIPE
struct UToolTip_ReturnTooltip_NTT_RECIPE_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
	bool                                               bShowPrice;                                               // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_NORMALITEM
struct UToolTip_ReturnTooltip_NTT_NORMALITEM_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_ABNORMALSTATUS
struct UToolTip_ReturnTooltip_NTT_ABNORMALSTATUS_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_SKILL
struct UToolTip_ReturnTooltip_NTT_SKILL_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_ACTION
struct UToolTip_ReturnTooltip_NTT_ACTION_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_ITEM
struct UToolTip_ReturnTooltip_NTT_ITEM_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	struct FString                                     TooltipType;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
};

// Function Interface.ToolTip.ReturnTooltip_NTT_TEXT
struct UToolTip_ReturnTooltip_NTT_TEXT_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	TEnumAsByte<ETooltipSourceType>                    eSourceType;                                              // (Parm)
	bool                                               bDesc;                                                    // (Parm)
};

// Function Interface.ToolTip.EndItem
struct UToolTip_EndItem_Params
{
};

// Function Interface.ToolTip.StartItem
struct UToolTip_StartItem_Params
{
};

// Function Interface.ToolTip.ClearTooltip
struct UToolTip_ClearTooltip_Params
{
};

// Function Interface.ToolTip.IsEnchantableItem
struct UToolTip_IsEnchantableItem_Params
{
	TEnumAsByte<EItemParamType>                        type;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ToolTip.HandleRequestTooltipInfo
struct UToolTip_HandleRequestTooltipInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.OnEvent
struct UToolTip_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ToolTip.OnLoad
struct UToolTip_OnLoad_Params
{
};

// Function Interface.ToolTip.OnRegisterEvent
struct UToolTip_OnRegisterEvent_Params
{
};

// Function Interface.MiniGame1Wnd.TrimRight
struct UMiniGame1Wnd_TrimRight_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.MiniGame1Wnd.PutNumberScore
struct UMiniGame1Wnd_PutNumberScore_Params
{
	int                                                LevelNo;                                                  // (Parm)
};

// Function Interface.MiniGame1Wnd.PutNumberLevel
struct UMiniGame1Wnd_PutNumberLevel_Params
{
	int                                                LevelNo;                                                  // (Parm)
};

// Function Interface.MiniGame1Wnd.ProcEndGameDefaultSetting
struct UMiniGame1Wnd_ProcEndGameDefaultSetting_Params
{
	struct FString                                     SetTextureName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.MiniGame1Wnd.EndGamewithTimeOut
struct UMiniGame1Wnd_EndGamewithTimeOut_Params
{
};

// Function Interface.MiniGame1Wnd.EndGame
struct UMiniGame1Wnd_EndGame_Params
{
};

// Function Interface.MiniGame1Wnd.StartLevelUp
struct UMiniGame1Wnd_StartLevelUp_Params
{
};

// Function Interface.MiniGame1Wnd.EndGameRemoveBlock
struct UMiniGame1Wnd_EndGameRemoveBlock_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.MiniGame1Wnd.GetTargetScore
struct UMiniGame1Wnd_GetTargetScore_Params
{
	int                                                CurrentLevel;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MiniGame1Wnd.GetCurrentTimeLimit
struct UMiniGame1Wnd_GetCurrentTimeLimit_Params
{
	int                                                CurrentLevel;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MiniGame1Wnd.OnTextureAnimEnd
struct UMiniGame1Wnd_OnTextureAnimEnd_Params
{
	class UAnimTextureHandle*                          a_WindowHandle;                                           // (Parm)
};

// Function Interface.MiniGame1Wnd.OnProgressTimeUp
struct UMiniGame1Wnd_OnProgressTimeUp_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MiniGame1Wnd.GetCellGridID
struct UMiniGame1Wnd_GetCellGridID_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MiniGame1Wnd.CheckSwappable
struct UMiniGame1Wnd_CheckSwappable_Params
{
	int                                                ID1;                                                      // (Parm)
	int                                                ID2;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MiniGame1Wnd.CheckMovesOnTimer
struct UMiniGame1Wnd_CheckMovesOnTimer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MiniGame1Wnd.OnTimer
struct UMiniGame1Wnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.MiniGame1Wnd.OnClickCellIcon
struct UMiniGame1Wnd_OnClickCellIcon_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.MiniGame1Wnd.OnTimeOver
struct UMiniGame1Wnd_OnTimeOver_Params
{
};

// Function Interface.MiniGame1Wnd.RestartCurrentGame
struct UMiniGame1Wnd_RestartCurrentGame_Params
{
};

// Function Interface.MiniGame1Wnd.StartNewGameProc
struct UMiniGame1Wnd_StartNewGameProc_Params
{
};

// Function Interface.MiniGame1Wnd.StartNewGame
struct UMiniGame1Wnd_StartNewGame_Params
{
};

// Function Interface.MiniGame1Wnd.OnHide
struct UMiniGame1Wnd_OnHide_Params
{
};

// Function Interface.MiniGame1Wnd.PauseGame
struct UMiniGame1Wnd_PauseGame_Params
{
};

// Function Interface.MiniGame1Wnd.OnClickButton
struct UMiniGame1Wnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MiniGame1Wnd.CheckMatches
struct UMiniGame1Wnd_CheckMatches_Params
{
	bool                                               ClearButton;                                              // (Parm)
};

// Function Interface.MiniGame1Wnd.Randomize
struct UMiniGame1Wnd_Randomize_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.MiniGame1Wnd.Initialize
struct UMiniGame1Wnd_Initialize_Params
{
};

// Function Interface.MiniGame1Wnd.PushDownRow
struct UMiniGame1Wnd_PushDownRow_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.MiniGame1Wnd.CheckMoves
struct UMiniGame1Wnd_CheckMoves_Params
{
};

// Function Interface.MiniGame1Wnd.CountMatches
struct UMiniGame1Wnd_CountMatches_Params
{
};

// Function Interface.MiniGame1Wnd.ClearCellGridDataFlag
struct UMiniGame1Wnd_ClearCellGridDataFlag_Params
{
};

// Function Interface.MiniGame1Wnd.MoveTillnoMatches
struct UMiniGame1Wnd_MoveTillnoMatches_Params
{
};

// Function Interface.MiniGame1Wnd.ReadyCells
struct UMiniGame1Wnd_ReadyCells_Params
{
};

// Function Interface.MiniGame1Wnd.OnShow
struct UMiniGame1Wnd_OnShow_Params
{
};

// Function Interface.MiniGame1Wnd.ClearCellGridData
struct UMiniGame1Wnd_ClearCellGridData_Params
{
};

// Function Interface.MiniGame1Wnd.ClearScoreData
struct UMiniGame1Wnd_ClearScoreData_Params
{
};

// Function Interface.MiniGame1Wnd.OnEvent
struct UMiniGame1Wnd_OnEvent_Params
{
	int                                                EvID;                                                     // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MiniGame1Wnd.OnLoad
struct UMiniGame1Wnd_OnLoad_Params
{
};

// Function Interface.MiniGame1Wnd.OnRegisterEvent
struct UMiniGame1Wnd_OnRegisterEvent_Params
{
};

// Function Interface.SSQMainBoard.GetSSQTimeAttackEventRoomName
struct USSQMainBoard_GetSSQTimeAttackEventRoomName_Params
{
	int                                                nID;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.GetSSQSealDesc
struct USSQMainBoard_GetSSQSealDesc_Params
{
	int                                                nID;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.GetSSQTeamName
struct USSQMainBoard_GetSSQTeamName_Params
{
	int                                                nID;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.GetSSQSealName
struct USSQMainBoard_GetSSQSealName_Params
{
	int                                                nID;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.AddSSQSealStatus
struct USSQMainBoard_AddSSQSealStatus_Params
{
	int                                                m_nSSQStatus;                                             // (Parm)
	int                                                m_nNeedPoint1;                                            // (Parm)
	int                                                m_nNeedPoint2;                                            // (Parm)
	int                                                m_nSealID;                                                // (Parm)
	int                                                m_nOwnerTeamID;                                           // (Parm)
	int                                                m_nTeam1Mark;                                             // (Parm)
	int                                                m_nTeam2Mark;                                             // (Parm)
};

// Function Interface.SSQMainBoard.ShowSSQSealStatus
struct USSQMainBoard_ShowSSQSealStatus_Params
{
};

// Function Interface.SSQMainBoard.AddSSQMainEvent
struct USSQMainBoard_AddSSQMainEvent_Params
{
	struct FSSQMainEventInfo                           Info;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.ShowSSQMainEvent
struct USSQMainBoard_ShowSSQMainEvent_Params
{
};

// Function Interface.SSQMainBoard.ClearSSQMainEventInfo
struct USSQMainBoard_ClearSSQMainEventInfo_Params
{
	struct FSSQMainEventInfo                           Info;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.AddSSQPreInfoSealStatus
struct USSQMainBoard_AddSSQPreInfoSealStatus_Params
{
};

// Function Interface.SSQMainBoard.SetSSQPreInfo
struct USSQMainBoard_SetSSQPreInfo_Params
{
};

// Function Interface.SSQMainBoard.ClearSSQPreInfo
struct USSQMainBoard_ClearSSQPreInfo_Params
{
};

// Function Interface.SSQMainBoard.SetSSQStatusInfo
struct USSQMainBoard_SetSSQStatusInfo_Params
{
};

// Function Interface.SSQMainBoard.SetSSQStatus
struct USSQMainBoard_SetSSQStatus_Params
{
};

// Function Interface.SSQMainBoard.OnClickButton
struct USSQMainBoard_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.OnEvent
struct USSQMainBoard_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SSQMainBoard.OnHide
struct USSQMainBoard_OnHide_Params
{
};

// Function Interface.SSQMainBoard.OnShow
struct USSQMainBoard_OnShow_Params
{
};

// Function Interface.SSQMainBoard.OnLoad
struct USSQMainBoard_OnLoad_Params
{
};

// Function Interface.SSQMainBoard.OnRegisterEvent
struct USSQMainBoard_OnRegisterEvent_Params
{
};

// Function Interface.ChatWnd.GetCurrentChatTypeID
struct UChatWnd_GetCurrentChatTypeID_Params
{
	int                                                ChatTypeUI;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ChatWnd.AssignCurrentChatTypeID
struct UChatWnd_AssignCurrentChatTypeID_Params
{
	int                                                ChatTypeID;                                               // (Parm)
	int                                                ChatTypeUI;                                               // (Parm)
};

// Function Interface.ChatWnd.GetAllcurrentAssignedChatTypeID
struct UChatWnd_GetAllcurrentAssignedChatTypeID_Params
{
};

// Function Interface.ChatWnd.SetCurrentAssignedChatType2Ini
struct UChatWnd_SetCurrentAssignedChatType2Ini_Params
{
	int                                                ChannelIndex;                                             // (Parm)
	int                                                ChatType;                                                 // (Parm)
};

// Function Interface.ChatWnd.ChangeTabChannel
struct UChatWnd_ChangeTabChannel_Params
{
	int                                                ChannelIndex;                                             // (Parm)
};

// Function Interface.ChatWnd.HandleDominionWarChannelSet
struct UChatWnd_HandleDominionWarChannelSet_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.HandleTextLinkLButtonClick
struct UChatWnd_HandleTextLinkLButtonClick_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.GetChatTypeByTabIndex
struct UChatWnd_GetChatTypeByTabIndex_Params
{
	int                                                Index;                                                    // (Parm)
	TEnumAsByte<EChatType>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ChatWnd.HandleMsnStatus
struct UChatWnd_HandleMsnStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.Print
struct UChatWnd_Print_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ChatWnd.HandleSetFocus
struct UChatWnd_HandleSetFocus_Params
{
};

// Function Interface.ChatWnd.HandleSetString
struct UChatWnd_HandleSetString_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.HandleChatWndStatusChange
struct UChatWnd_HandleChatWndStatusChange_Params
{
};

// Function Interface.ChatWnd.SetChatFilterButton
struct UChatWnd_SetChatFilterButton_Params
{
};

// Function Interface.ChatWnd.SetDefaultFilterValue
struct UChatWnd_SetDefaultFilterValue_Params
{
};

// Function Interface.ChatWnd.SetDefaultFilterOn
struct UChatWnd_SetDefaultFilterOn_Params
{
};

// Function Interface.ChatWnd.InitFilterInfo
struct UChatWnd_InitFilterInfo_Params
{
};

// Function Interface.ChatWnd.CheckFilter
struct UChatWnd_CheckFilter_Params
{
	TEnumAsByte<EChatType>                             type;                                                     // (Parm)
	int                                                WindowType;                                               // (Parm)
	TEnumAsByte<ESystemMsgType>                        systemType;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ChatWnd.HandleIMEStatusChange
struct UChatWnd_HandleIMEStatusChange_Params
{
};

// Function Interface.ChatWnd.ShowAnnounceMessgage
struct UChatWnd_ShowAnnounceMessgage_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.ShowUnionCommanderMessgage
struct UChatWnd_ShowUnionCommanderMessgage_Params
{
	struct FString                                     Msg;                                                      // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.HandleChatmessage
struct UChatWnd_HandleChatmessage_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.HandleChatWndMacroCommand
struct UChatWnd_HandleChatWndMacroCommand_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.OnEvent
struct UChatWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.OnEnterState
struct UChatWnd_OnEnterState_Params
{
	struct FName                                       a_PrevStateName;                                          // (Parm)
};

// Function Interface.ChatWnd.HandleTabClick
struct UChatWnd_HandleTabClick_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.OnTabMerge
struct UChatWnd_OnTabMerge_Params
{
	struct FString                                     sTabButton;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.OnTabSplit
struct UChatWnd_OnTabSplit_Params
{
	struct FString                                     sTabButton;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.OnTimer
struct UChatWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.ChatWnd.ClosePartyMatchingWnd
struct UChatWnd_ClosePartyMatchingWnd_Params
{
};

// Function Interface.ChatWnd.OnClickButton
struct UChatWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.OnShow
struct UChatWnd_OnShow_Params
{
};

// Function Interface.ChatWnd.Clear
struct UChatWnd_Clear_Params
{
};

// Function Interface.ChatWnd.OnCompleteEditBox
struct UChatWnd_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatWnd.InitScrollBarPosition
struct UChatWnd_InitScrollBarPosition_Params
{
};

// Function Interface.ChatWnd.InitHandleCOD
struct UChatWnd_InitHandleCOD_Params
{
};

// Function Interface.ChatWnd.InitHandle
struct UChatWnd_InitHandle_Params
{
};

// Function Interface.ChatWnd.InitGlobalSetting
struct UChatWnd_InitGlobalSetting_Params
{
};

// Function Interface.ChatWnd.OnDefaultPosition
struct UChatWnd_OnDefaultPosition_Params
{
};

// Function Interface.ChatWnd.OnLoad
struct UChatWnd_OnLoad_Params
{
};

// Function Interface.ChatWnd.OnRegisterEvent
struct UChatWnd_OnRegisterEvent_Params
{
};

// Function Interface.ClanWnd.ResetOpeningVariables
struct UClanWnd_ResetOpeningVariables_Params
{
};

// Function Interface.ClanWnd.HandleClanMyAuth
struct UClanWnd_HandleClanMyAuth_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.AskJoin
struct UClanWnd_AskJoin_Params
{
};

// Function Interface.ClanWnd.HandleSubClanUpdated
struct UClanWnd_HandleSubClanUpdated_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.RefreshCombobox
struct UClanWnd_RefreshCombobox_Params
{
};

// Function Interface.ClanWnd.HandleDeleteMember
struct UClanWnd_HandleDeleteMember_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.GetIndexFromType
struct UClanWnd_GetIndexFromType_Params
{
	int                                                type;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanWnd.HandleAddClanMember
struct UClanWnd_HandleAddClanMember_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.RefreshCombobox1
struct UClanWnd_RefreshCombobox1_Params
{
	int                                                ClanT;                                                    // (Parm)
};

// Function Interface.ClanWnd.HandleMemberInfoUpdate
struct UClanWnd_HandleMemberInfoUpdate_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.GetSelectedListCtrlItem
struct UClanWnd_GetSelectedListCtrlItem_Params
{
	struct FLVDataRecord                               Record;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanWnd.AddToList
struct UClanWnd_AddToList_Params
{
	int                                                idx;                                                      // (Parm)
};

// Function Interface.ClanWnd.getClanKnighthoodMasterInfo
struct UClanWnd_getClanKnighthoodMasterInfo_Params
{
	struct FString                                     NameVal;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanWnd.ShowList
struct UClanWnd_ShowList_Params
{
	int                                                clanType;                                                 // (Parm)
};

// Function Interface.ClanWnd.ClearList
struct UClanWnd_ClearList_Params
{
};

// Function Interface.ClanWnd.HandleAddClanMemberMultiple
struct UClanWnd_HandleAddClanMemberMultiple_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.HandleClanInfoUpdate
struct UClanWnd_HandleClanInfoUpdate_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.HandleClanInfo
struct UClanWnd_HandleClanInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.HandleEV_ResultJoinDominionWar
struct UClanWnd_HandleEV_ResultJoinDominionWar_Params
{
};

// Function Interface.ClanWnd.Clear
struct UClanWnd_Clear_Params
{
};

// Function Interface.ClanWnd.resetBtnShowHide
struct UClanWnd_resetBtnShowHide_Params
{
};

// Function Interface.ClanWnd.OnDBClickListCtrlRecord
struct UClanWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     ListCtrlID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.OnClickListCtrlRecord
struct UClanWnd_OnClickListCtrlRecord_Params
{
	struct FString                                     ListCtrlID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.OnComboBoxItemSelected
struct UClanWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ClanWnd.OnEvent
struct UClanWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.OnClickButton
struct UClanWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ClanWnd.OnEnterState
struct UClanWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.ClanWnd.OnHide
struct UClanWnd_OnHide_Params
{
};

// Function Interface.ClanWnd.NoblessMenuValidate
struct UClanWnd_NoblessMenuValidate_Params
{
};

// Function Interface.ClanWnd.OnShow
struct UClanWnd_OnShow_Params
{
};

// Function Interface.ClanWnd.GetClanTypeNameFromIndex
struct UClanWnd_GetClanTypeNameFromIndex_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ClanWnd.GetClanTypeFromIndex
struct UClanWnd_GetClanTypeFromIndex_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanWnd.OnRegisterEvent
struct UClanWnd_OnRegisterEvent_Params
{
};

// Function Interface.ClanWnd.Load
struct UClanWnd_Load_Params
{
};

// Function Interface.ClanWnd.InitHandleCOD
struct UClanWnd_InitHandleCOD_Params
{
};

// Function Interface.ClanWnd.InitHandle
struct UClanWnd_InitHandle_Params
{
};

// Function Interface.ClanWnd.OnLoad
struct UClanWnd_OnLoad_Params
{
};

// Function Interface.ClanWnd.findmyClanData
struct UClanWnd_findmyClanData_Params
{
	struct FString                                     C_Name;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanWnd.getmyClanInfo
struct UClanWnd_getmyClanInfo_Params
{
};

// Function Interface.InventoryWnd.HandleChangeCharacterPawn
struct UInventoryWnd_HandleChangeCharacterPawn_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.HandleSetMaxCount
struct UInventoryWnd_HandleSetMaxCount_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.UpdateCloakSlotActivation
struct UInventoryWnd_UpdateCloakSlotActivation_Params
{
};

// Function Interface.InventoryWnd.UpdateTalismanSlotActivation
struct UInventoryWnd_UpdateTalismanSlotActivation_Params
{
};

// Function Interface.InventoryWnd.SortItem
struct UInventoryWnd_SortItem_Params
{
	class UItemWindowHandle*                           ItemWnd;                                                  // (Parm)
};

// Function Interface.InventoryWnd.OnLButtonUp
struct UInventoryWnd_OnLButtonUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.InventoryWnd.OnLButtonDown
struct UInventoryWnd_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.InventoryWnd.OnClickButton
struct UInventoryWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.SaveInventoryOrder
struct UInventoryWnd_SaveInventoryOrder_Params
{
};

// Function Interface.InventoryWnd.InvenClear
struct UInventoryWnd_InvenClear_Params
{
};

// Function Interface.InventoryWnd.InvenDelete
struct UInventoryWnd_InvenDelete_Params
{
	struct FItemInfo                                   item;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.InvenAddItem
struct UInventoryWnd_InvenAddItem_Params
{
	struct FItemInfo                                   NewItem;                                                  // (Parm, NeedCtorLink)
	int                                                ORDER;                                                    // (Parm)
};

// Function Interface.InventoryWnd.InvenLimitUpdate
struct UInventoryWnd_InvenLimitUpdate_Params
{
};

// Function Interface.InventoryWnd.IsArrow
struct UInventoryWnd_IsArrow_Params
{
	struct FItemInfo                                   a_Info;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.IsDecoItem
struct UInventoryWnd_IsDecoItem_Params
{
	struct FItemInfo                                   a_Info;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.IsBowOrFishingRod
struct UInventoryWnd_IsBowOrFishingRod_Params
{
	struct FItemInfo                                   a_Info;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.IsLOrRFinger
struct UInventoryWnd_IsLOrRFinger_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.IsLOrREar
struct UInventoryWnd_IsLOrREar_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.IsShowInventoryWndUponEvent
struct UInventoryWnd_IsShowInventoryWndUponEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.HandleToggleWindow
struct UInventoryWnd_HandleToggleWindow_Params
{
};

// Function Interface.InventoryWnd.HandleUpdateUserInfo
struct UInventoryWnd_HandleUpdateUserInfo_Params
{
};

// Function Interface.InventoryWnd.HandleDialogOK
struct UInventoryWnd_HandleDialogOK_Params
{
};

// Function Interface.InventoryWnd.SetItemCount
struct UInventoryWnd_SetItemCount_Params
{
};

// Function Interface.InventoryWnd.GetMyInventoryLimit
struct UInventoryWnd_GetMyInventoryLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.UseItem
struct UInventoryWnd_UseItem_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.InventoryWnd.SetAdenaText
struct UInventoryWnd_SetAdenaText_Params
{
};

// Function Interface.InventoryWnd.UpdateHennaInfo
struct UInventoryWnd_UpdateHennaInfo_Params
{
};

// Function Interface.InventoryWnd.HandleUpdateHennaInfo
struct UInventoryWnd_HandleUpdateHennaInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.HandleAddHennaInfo
struct UInventoryWnd_HandleAddHennaInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.HandleItemListEnd
struct UInventoryWnd_HandleItemListEnd_Params
{
};

// Function Interface.InventoryWnd.HandleUpdateItem
struct UInventoryWnd_HandleUpdateItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.HandleAddItem
struct UInventoryWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.HandleHideWindow
struct UInventoryWnd_HandleHideWindow_Params
{
};

// Function Interface.InventoryWnd.OpenWindow
struct UInventoryWnd_OpenWindow_Params
{
};

// Function Interface.InventoryWnd.HandleOpenWindow
struct UInventoryWnd_HandleOpenWindow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.EquipItemUpdate
struct UInventoryWnd_EquipItemUpdate_Params
{
	struct FItemInfo                                   a_Info;                                                   // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.FingerItemUpdate
struct UInventoryWnd_FingerItemUpdate_Params
{
};

// Function Interface.InventoryWnd.EarItemUpdate
struct UInventoryWnd_EarItemUpdate_Params
{
};

// Function Interface.InventoryWnd.EquipItemDelete
struct UInventoryWnd_EquipItemDelete_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
};

// Function Interface.InventoryWnd.EquipItemFind
struct UInventoryWnd_EquipItemFind_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.EquipItemClear
struct UInventoryWnd_EquipItemClear_Params
{
};

// Function Interface.InventoryWnd.EquipItemGetItemNum
struct UInventoryWnd_EquipItemGetItemNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.HandleClear
struct UInventoryWnd_HandleClear_Params
{
};

// Function Interface.InventoryWnd.IsQuestItem
struct UInventoryWnd_IsQuestItem_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.IsEquipItem
struct UInventoryWnd_IsEquipItem_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.InventoryWnd.OnDropItemSource
struct UInventoryWnd_OnDropItemSource_Params
{
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.OnDropItem
struct UInventoryWnd_OnDropItem_Params
{
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.InventoryWnd.OnSelectItemWithHandle
struct UInventoryWnd_OnSelectItemWithHandle_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                a_Index;                                                  // (Parm)
};

// Function Interface.InventoryWnd.OnRClickItemWithHandle
struct UInventoryWnd_OnRClickItemWithHandle_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.InventoryWnd.OnDBClickItemWithHandle
struct UInventoryWnd_OnDBClickItemWithHandle_Params
{
	class UItemWindowHandle*                           a_hItemWindow;                                            // (Parm)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.InventoryWnd.OnExitState
struct UInventoryWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.InventoryWnd.OnEnterState
struct UInventoryWnd_OnEnterState_Params
{
	struct FName                                       a_PrevStateName;                                          // (Parm)
};

// Function Interface.InventoryWnd.HandleRestart
struct UInventoryWnd_HandleRestart_Params
{
};

// Function Interface.InventoryWnd.OnHide
struct UInventoryWnd_OnHide_Params
{
};

// Function Interface.InventoryWnd.CheckShowCrystallizeButton
struct UInventoryWnd_CheckShowCrystallizeButton_Params
{
};

// Function Interface.InventoryWnd.OnShow
struct UInventoryWnd_OnShow_Params
{
};

// Function Interface.InventoryWnd.OnEvent
struct UInventoryWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InventoryWnd.InitScrollBar
struct UInventoryWnd_InitScrollBar_Params
{
};

// Function Interface.InventoryWnd.InitHandleCOD
struct UInventoryWnd_InitHandleCOD_Params
{
};

// Function Interface.InventoryWnd.InitHandle
struct UInventoryWnd_InitHandle_Params
{
};

// Function Interface.InventoryWnd.OnLoad
struct UInventoryWnd_OnLoad_Params
{
};

// Function Interface.InventoryWnd.OnRegisterEvent
struct UInventoryWnd_OnRegisterEvent_Params
{
};

// Function Interface.QuestTreeWnd.GetSelectedJournalLevelID
struct UQuestTreeWnd_GetSelectedJournalLevelID_Params
{
	struct FString                                     CurrentSelectedNodeID;                                    // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.QuestTreeWnd.GetSelectedJournalQuestID
struct UQuestTreeWnd_GetSelectedJournalQuestID_Params
{
	struct FString                                     CurrentSelectedNodeID;                                    // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.QuestTreeWnd.SetCurrentQuestJournalOnDrawerWnd
struct UQuestTreeWnd_SetCurrentQuestJournalOnDrawerWnd_Params
{
	int                                                QuestID;                                                  // (Parm)
	int                                                QuestLevel;                                               // (Parm)
	int                                                Completed;                                                // (Parm)
};

// Function Interface.QuestTreeWnd.InsertQuestTrackList
struct UQuestTreeWnd_InsertQuestTrackList_Params
{
};

// Function Interface.QuestTreeWnd.ProcInsertNode
struct UQuestTreeWnd_ProcInsertNode_Params
{
	int                                                QuestID;                                                  // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     strParentName;                                            // (Parm, NeedCtorLink)
	struct FXMLTreeNodeInfo                            infNode;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.InsertNodeItem
struct UQuestTreeWnd_InsertNodeItem_Params
{
	int                                                QuestID;                                                  // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FString                                     strRetName;                                               // (Parm, NeedCtorLink)
	struct FXMLTreeNodeItemInfo                        infNodeItem;                                              // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.GetNodeInfo_Alarm
struct UQuestTreeWnd_GetNodeInfo_Alarm_Params
{
};

// Function Interface.QuestTreeWnd.ButtonEnableCheck
struct UQuestTreeWnd_ButtonEnableCheck_Params
{
};

// Function Interface.QuestTreeWnd.HandleDeleteAlarm
struct UQuestTreeWnd_HandleDeleteAlarm_Params
{
};

// Function Interface.QuestTreeWnd.HandleAddAlarm
struct UQuestTreeWnd_HandleAddAlarm_Params
{
};

// Function Interface.QuestTreeWnd.HandleLanguageChanged
struct UQuestTreeWnd_HandleLanguageChanged_Params
{
};

// Function Interface.QuestTreeWnd.InitQuestTooltip
struct UQuestTreeWnd_InitQuestTooltip_Params
{
};

// Function Interface.QuestTreeWnd.AddQuestInfo
struct UQuestTreeWnd_AddQuestInfo_Params
{
	struct FString                                     strParentName;                                            // (Parm, NeedCtorLink)
	int                                                QuestID;                                                  // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                Completed;                                                // (Parm)
};

// Function Interface.QuestTreeWnd.HandleQuestCancel
struct UQuestTreeWnd_HandleQuestCancel_Params
{
};

// Function Interface.QuestTreeWnd.GetExpandedNode
struct UQuestTreeWnd_GetExpandedNode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.SetQuestOff
struct UQuestTreeWnd_SetQuestOff_Params
{
};

// Function Interface.QuestTreeWnd.UpdateTargetInfo
struct UQuestTreeWnd_UpdateTargetInfo_Params
{
};

// Function Interface.QuestTreeWnd.UpdateQuestCount
struct UQuestTreeWnd_UpdateQuestCount_Params
{
};

// Function Interface.QuestTreeWnd.UpdateItemCountWhenAdd
struct UQuestTreeWnd_UpdateItemCountWhenAdd_Params
{
	int                                                ClassID;                                                  // (Parm)
};

// Function Interface.QuestTreeWnd.UpdateItemCount
struct UQuestTreeWnd_UpdateItemCount_Params
{
	int                                                ClassID;                                                  // (Parm)
	struct FINT64                                      a_ItemCount;                                              // (OptionalParm, Parm)
};

// Function Interface.QuestTreeWnd.HandleQuestSetCurrentIDfromMiniMap
struct UQuestTreeWnd_HandleQuestSetCurrentIDfromMiniMap_Params
{
	int                                                QuestID;                                                  // (Parm)
	int                                                Level;                                                    // (Parm)
};

// Function Interface.QuestTreeWnd.HandleQuestSetCurrentID
struct UQuestTreeWnd_HandleQuestSetCurrentID_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.OnEvent
struct UQuestTreeWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.HandleQuestListEnd
struct UQuestTreeWnd_HandleQuestListEnd_Params
{
};

// Function Interface.QuestTreeWnd.HandleQuestList
struct UQuestTreeWnd_HandleQuestList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.HandleQuestListStart
struct UQuestTreeWnd_HandleQuestListStart_Params
{
};

// Function Interface.QuestTreeWnd.InitTree
struct UQuestTreeWnd_InitTree_Params
{
};

// Function Interface.QuestTreeWnd.ShowQuestList
struct UQuestTreeWnd_ShowQuestList_Params
{
};

// Function Interface.QuestTreeWnd.Clear
struct UQuestTreeWnd_Clear_Params
{
};

// Function Interface.QuestTreeWnd.OnClickCheckBox
struct UQuestTreeWnd_OnClickCheckBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.GetCurrentJournalID
struct UQuestTreeWnd_GetCurrentJournalID_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.OnClickButton
struct UQuestTreeWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeWnd.OnHide
struct UQuestTreeWnd_OnHide_Params
{
};

// Function Interface.QuestTreeWnd.OnShow
struct UQuestTreeWnd_OnShow_Params
{
};

// Function Interface.QuestTreeWnd.OnDefaultPosition
struct UQuestTreeWnd_OnDefaultPosition_Params
{
};

// Function Interface.QuestTreeWnd.OnLoad
struct UQuestTreeWnd_OnLoad_Params
{
};

// Function Interface.QuestTreeWnd.OnRegisterEvent
struct UQuestTreeWnd_OnRegisterEvent_Params
{
};

// Function Interface.QuestAlarmWnd.QuestItemSlotIdx
struct UQuestAlarmWnd_QuestItemSlotIdx_Params
{
	int                                                QuestIdx;                                                 // (Parm)
	int                                                ItemID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.QuestAlarmWnd.FindEmptyItemSlot
struct UQuestAlarmWnd_FindEmptyItemSlot_Params
{
	int                                                QuestIdx;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.QuestAlarmWnd.QuestSlotIdx
struct UQuestAlarmWnd_QuestSlotIdx_Params
{
	int                                                QuestID;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.QuestAlarmWnd.FindEmptyQuestSlot
struct UQuestAlarmWnd_FindEmptyQuestSlot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.QuestAlarmWnd.UpdateAlarmItem
struct UQuestAlarmWnd_UpdateAlarmItem_Params
{
	int                                                ItemID;                                                   // (Parm)
	struct FINT64                                      Count;                                                    // (Parm)
};

// Function Interface.QuestAlarmWnd.DeleteQuestAlarm
struct UQuestAlarmWnd_DeleteQuestAlarm_Params
{
	int                                                QuestID;                                                  // (Parm)
};

// Function Interface.QuestAlarmWnd.AddQuestAlarm
struct UQuestAlarmWnd_AddQuestAlarm_Params
{
	int                                                QuestID;                                                  // (Parm)
	int                                                Level;                                                    // (Parm)
	int                                                ItemID;                                                   // (Parm)
	struct FINT64                                      ItemNum;                                                  // (Parm)
};

// Function Interface.QuestAlarmWnd.FitWindowSize
struct UQuestAlarmWnd_FitWindowSize_Params
{
};

// Function Interface.QuestAlarmWnd.ContractWindowSize
struct UQuestAlarmWnd_ContractWindowSize_Params
{
};

// Function Interface.QuestAlarmWnd.ExpendWindowSize
struct UQuestAlarmWnd_ExpendWindowSize_Params
{
};

// Function Interface.QuestAlarmWnd.OnbtnCloseClick
struct UQuestAlarmWnd_OnbtnCloseClick_Params
{
};

// Function Interface.QuestAlarmWnd.OnClickButton
struct UQuestAlarmWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.QuestAlarmWnd.OnTimer
struct UQuestAlarmWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.QuestAlarmWnd.OnEvent
struct UQuestAlarmWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.QuestAlarmWnd.InitData
struct UQuestAlarmWnd_InitData_Params
{
};

// Function Interface.QuestAlarmWnd.Load
struct UQuestAlarmWnd_Load_Params
{
};

// Function Interface.QuestAlarmWnd.InitializeCOD
struct UQuestAlarmWnd_InitializeCOD_Params
{
};

// Function Interface.QuestAlarmWnd.Initialize
struct UQuestAlarmWnd_Initialize_Params
{
};

// Function Interface.QuestAlarmWnd.OnLoad
struct UQuestAlarmWnd_OnLoad_Params
{
};

// Function Interface.QuestAlarmWnd.OnRegisterEvent
struct UQuestAlarmWnd_OnRegisterEvent_Params
{
};

// Function Interface.MinimapWnd.GetContinent
struct UMinimapWnd_GetContinent_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MinimapWnd.SetLocContinent
struct UMinimapWnd_SetLocContinent_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
};

// Function Interface.MinimapWnd.SetContinent
struct UMinimapWnd_SetContinent_Params
{
	int                                                Continent;                                                // (Parm)
};

// Function Interface.MinimapWnd.DrawCleftStatus
struct UMinimapWnd_DrawCleftStatus_Params
{
};

// Function Interface.MinimapWnd.HandleDominionsOwnPos
struct UMinimapWnd_HandleDominionsOwnPos_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.InitializeLocation
struct UMinimapWnd_InitializeLocation_Params
{
};

// Function Interface.MinimapWnd.DrawMapMainInfo
struct UMinimapWnd_DrawMapMainInfo_Params
{
	int                                                ReturnInt;                                                // (Parm)
};

// Function Interface.MinimapWnd.DrawMapAfterBarrack
struct UMinimapWnd_DrawMapAfterBarrack_Params
{
	int                                                ReturnInt;                                                // (Parm)
};

// Function Interface.MinimapWnd.DrawMapBasicInfo
struct UMinimapWnd_DrawMapBasicInfo_Params
{
	int                                                ReturnInt;                                                // (Parm)
};

// Function Interface.MinimapWnd.BarrackID2Int
struct UMinimapWnd_BarrackID2Int_Params
{
	int                                                FortressID;                                               // (Parm)
	int                                                BarrackID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MinimapWnd.BarrackID2Text
struct UMinimapWnd_BarrackID2Text_Params
{
	int                                                FortressID;                                               // (Parm)
	int                                                BarrackID;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.MinimapWnd.BarrackID2YLoc
struct UMinimapWnd_BarrackID2YLoc_Params
{
	int                                                FortressID;                                               // (Parm)
	int                                                BarrackID;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.MinimapWnd.BarrackID2XLoc
struct UMinimapWnd_BarrackID2XLoc_Params
{
	int                                                FortressID;                                               // (Parm)
	int                                                BarrackID;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleFortressMapBarrackInfo
struct UMinimapWnd_HandleFortressMapBarrackInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleShowFortressMapInfo
struct UMinimapWnd_HandleShowFortressMapInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.DrawPeaceStatusFortressSiegeStatus
struct UMinimapWnd_DrawPeaceStatusFortressSiegeStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.SelectSunOrMoon
struct UMinimapWnd_SelectSunOrMoon_Params
{
	int                                                GameHour;                                                 // (Parm)
};

// Function Interface.MinimapWnd.HandleMinimapTravel
struct UMinimapWnd_HandleMinimapTravel_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleUpdateGameTime
struct UMinimapWnd_HandleUpdateGameTime_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.DrawCursedWeapon
struct UMinimapWnd_DrawCursedWeapon_Params
{
	struct FString                                     WindowName;                                               // (Parm, NeedCtorLink)
	int                                                ItemID;                                                   // (Parm)
	struct FString                                     cursedName;                                               // (Parm, NeedCtorLink)
	struct FVector                                     vecLoc;                                                   // (Parm)
	bool                                               bDropped;                                                 // (Parm)
	bool                                               bRefresh;                                                 // (Parm)
};

// Function Interface.MinimapWnd.HandleCursedWeaponLoctaion
struct UMinimapWnd_HandleCursedWeaponLoctaion_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleCursedWeaponList
struct UMinimapWnd_HandleCursedWeaponList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.OnClickPartyLocButton
struct UMinimapWnd_OnClickPartyLocButton_Params
{
};

// Function Interface.MinimapWnd.AdjustMapToPlayerPosition
struct UMinimapWnd_AdjustMapToPlayerPosition_Params
{
	bool                                               a_ZoomToTownMap;                                          // (Parm)
};

// Function Interface.MinimapWnd.OnClickMyLocButton
struct UMinimapWnd_OnClickMyLocButton_Params
{
};

// Function Interface.MinimapWnd.OnClickTargetButton
struct UMinimapWnd_OnClickTargetButton_Params
{
};

// Function Interface.MinimapWnd.OnClickReduceButton
struct UMinimapWnd_OnClickReduceButton_Params
{
};

// Function Interface.MinimapWnd.OnClickButton
struct UMinimapWnd_OnClickButton_Params
{
	struct FString                                     a_ButtonID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleMinimapHideQuest
struct UMinimapWnd_HandleMinimapHideQuest_Params
{
};

// Function Interface.MinimapWnd.HandleMinimapShowQuest
struct UMinimapWnd_HandleMinimapShowQuest_Params
{
};

// Function Interface.MinimapWnd.HandleMinimapDeleteAllTarget
struct UMinimapWnd_HandleMinimapDeleteAllTarget_Params
{
};

// Function Interface.MinimapWnd.HandleMinimapDeleteTarget
struct UMinimapWnd_HandleMinimapDeleteTarget_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleMinimapAddTarget
struct UMinimapWnd_HandleMinimapAddTarget_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleShowMinimap
struct UMinimapWnd_HandleShowMinimap_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.IsExpandState
struct UMinimapWnd_IsExpandState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MinimapWnd.SetExpandState
struct UMinimapWnd_SetExpandState_Params
{
	bool                                               bExpandState;                                             // (Parm)
};

// Function Interface.MinimapWnd.HandlePartyMemberChanged
struct UMinimapWnd_HandlePartyMemberChanged_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.OnHide
struct UMinimapWnd_OnHide_Params
{
};

// Function Interface.MinimapWnd.SetCurrentLocation
struct UMinimapWnd_SetCurrentLocation_Params
{
};

// Function Interface.MinimapWnd.SetSSQTypeText
struct UMinimapWnd_SetSSQTypeText_Params
{
};

// Function Interface.MinimapWnd.ContinentLoc
struct UMinimapWnd_ContinentLoc_Params
{
};

// Function Interface.MinimapWnd.OnShow
struct UMinimapWnd_OnShow_Params
{
};

// Function Interface.MinimapWnd.FilterDungeonMap
struct UMinimapWnd_FilterDungeonMap_Params
{
};

// Function Interface.MinimapWnd.HandleDungeonMapRefresh
struct UMinimapWnd_HandleDungeonMapRefresh_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleZoneTitle
struct UMinimapWnd_HandleZoneTitle_Params
{
};

// Function Interface.MinimapWnd.HandleChatmessage
struct UMinimapWnd_HandleChatmessage_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.HandleSeedMapInfo
struct UMinimapWnd_HandleSeedMapInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.DrawDominionTarget
struct UMinimapWnd_DrawDominionTarget_Params
{
};

// Function Interface.MinimapWnd.HandleDominionWarEnd
struct UMinimapWnd_HandleDominionWarEnd_Params
{
};

// Function Interface.MinimapWnd.HandleDominionWarStart
struct UMinimapWnd_HandleDominionWarStart_Params
{
};

// Function Interface.MinimapWnd.OnEvent
struct UMinimapWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.OnLoad
struct UMinimapWnd_OnLoad_Params
{
};

// Function Interface.MinimapWnd.OnRegisterEvent
struct UMinimapWnd_OnRegisterEvent_Params
{
};

// Function Interface.MinimapWnd.GetLocData
struct UMinimapWnd_GetLocData_Params
{
};

// Function Interface.MinimapWnd.IsHideMinimapZone_new
struct UMinimapWnd_IsHideMinimapZone_new_Params
{
	int                                                nZoneID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MinimapWnd.IsHideMinimapZone
struct UMinimapWnd_IsHideMinimapZone_Params
{
	int                                                nZoneID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MinimapWnd.ExecuteFortressSiegeStatus
struct UMinimapWnd_ExecuteFortressSiegeStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd.FortressID2ZoneNameID
struct UMinimapWnd_FortressID2ZoneNameID_Params
{
	int                                                LocalID;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ShopWnd.HandleOKButton
struct UShopWnd_HandleOKButton_Params
{
};

// Function Interface.ShopWnd.AddPrice
struct UShopWnd_AddPrice_Params
{
	struct FINT64                                      Price;                                                    // (Parm)
};

// Function Interface.ShopWnd.HandleAddItem
struct UShopWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShopWnd.HandleOpenWindow
struct UShopWnd_HandleOpenWindow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShopWnd.HandleDialogOK
struct UShopWnd_HandleDialogOK_Params
{
};

// Function Interface.ShopWnd.MoveItemBottomToTop
struct UShopWnd_MoveItemBottomToTop_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.ShopWnd.MoveItemTopToBottom
struct UShopWnd_MoveItemTopToBottom_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.ShopWnd.OnDropItem
struct UShopWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.ShopWnd.OnDBClickItem
struct UShopWnd_OnDBClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ShopWnd.OnClickButton
struct UShopWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.ShopWnd.OnEvent
struct UShopWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShopWnd.Clear
struct UShopWnd_Clear_Params
{
};

// Function Interface.ShopWnd.OnLoad
struct UShopWnd_OnLoad_Params
{
};

// Function Interface.ShopWnd.OnRegisterEvent
struct UShopWnd_OnRegisterEvent_Params
{
};

// Function Interface.EventMatchObserverWnd.UpdateSkillMsg
struct UEventMatchObserverWnd_UpdateSkillMsg_Params
{
};

// Function Interface.EventMatchObserverWnd.AddSkillMsg
struct UEventMatchObserverWnd_AddSkillMsg_Params
{
	int                                                a_AttackerTeamID;                                         // (Parm)
	int                                                a_AttackerUserID;                                         // (Parm)
	struct FString                                     a_AttackerName;                                           // (Parm, NeedCtorLink)
	int                                                a_DefenderTeamID;                                         // (Parm)
	int                                                a_DefenderUserID;                                         // (Parm)
	struct FString                                     a_DefenderName;                                           // (Parm, NeedCtorLink)
	struct FString                                     a_SkillName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.GetTeamUserID
struct UEventMatchObserverWnd_GetTeamUserID_Params
{
	int                                                a_UserClassID;                                            // (Parm)
	int                                                a_TeamID;                                                 // (Parm, OutParm)
	int                                                a_UserID;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.EventMatchObserverWnd.ClearMsg
struct UEventMatchObserverWnd_ClearMsg_Params
{
};

// Function Interface.EventMatchObserverWnd.IsSelectedUser
struct UEventMatchObserverWnd_IsSelectedUser_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                a_UserID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.EventMatchObserverWnd.SetSelectedUser
struct UEventMatchObserverWnd_SetSelectedUser_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                a_UserID;                                                 // (Parm)
};

// Function Interface.EventMatchObserverWnd.UpdateUserInfo
struct UEventMatchObserverWnd_UpdateUserInfo_Params
{
	int                                                a_TeamID;                                                 // (Parm)
	int                                                a_UserID;                                                 // (Parm)
};

// Function Interface.EventMatchObserverWnd.UpdateScore
struct UEventMatchObserverWnd_UpdateScore_Params
{
};

// Function Interface.EventMatchObserverWnd.UpdateTeamInfo
struct UEventMatchObserverWnd_UpdateTeamInfo_Params
{
	int                                                a_TeamID;                                                 // (Parm)
};

// Function Interface.EventMatchObserverWnd.UpdateTeamName
struct UEventMatchObserverWnd_UpdateTeamName_Params
{
};

// Function Interface.EventMatchObserverWnd.RefreshClassOrName
struct UEventMatchObserverWnd_RefreshClassOrName_Params
{
};

// Function Interface.EventMatchObserverWnd.HandleShortcutCommand
struct UEventMatchObserverWnd_HandleShortcutCommand_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.HandleReceiveMagicSkillUse
struct UEventMatchObserverWnd_HandleReceiveMagicSkillUse_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.HandleEventMatchUpdateUserInfo
struct UEventMatchObserverWnd_HandleEventMatchUpdateUserInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.HandleEventMatchUpdateTeamInfo
struct UEventMatchObserverWnd_HandleEventMatchUpdateTeamInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.HandleStartEventMatchObserver
struct UEventMatchObserverWnd_HandleStartEventMatchObserver_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.OnLButtonDown
struct UEventMatchObserverWnd_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.EventMatchObserverWnd.OnTimer
struct UEventMatchObserverWnd_OnTimer_Params
{
	int                                                a_TimerID;                                                // (Parm)
};

// Function Interface.EventMatchObserverWnd.OnEvent
struct UEventMatchObserverWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchObserverWnd.OnEnterState
struct UEventMatchObserverWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.EventMatchObserverWnd.InitHandleCOD
struct UEventMatchObserverWnd_InitHandleCOD_Params
{
};

// Function Interface.EventMatchObserverWnd.InitHandle
struct UEventMatchObserverWnd_InitHandle_Params
{
};

// Function Interface.EventMatchObserverWnd.OnLoad
struct UEventMatchObserverWnd_OnLoad_Params
{
};

// Function Interface.EventMatchObserverWnd.OnRegisterEvent
struct UEventMatchObserverWnd_OnRegisterEvent_Params
{
};

// Function Interface.DetailStatusWnd.RunUnTransformManage
struct UDetailStatusWnd_RunUnTransformManage_Params
{
};

// Function Interface.DetailStatusWnd.RunTransformManage
struct UDetailStatusWnd_RunTransformManage_Params
{
};

// Function Interface.DetailStatusWnd.UpdateVp
struct UDetailStatusWnd_UpdateVp_Params
{
	int                                                Vitality;                                                 // (Parm)
};

// Function Interface.DetailStatusWnd.HandleVitalityPointInfo
struct UDetailStatusWnd_HandleVitalityPointInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DetailStatusWnd.OnKeyDown
struct UDetailStatusWnd_OnKeyDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             nKey;                                                     // (Parm)
};

// Function Interface.DetailStatusWnd.ToggleOpenCharInfoWnd
struct UDetailStatusWnd_ToggleOpenCharInfoWnd_Params
{
};

// Function Interface.DetailStatusWnd.UpdateCPBar
struct UDetailStatusWnd_UpdateCPBar_Params
{
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.DetailStatusWnd.UpdateEXPBar
struct UDetailStatusWnd_UpdateEXPBar_Params
{
	struct FINT64                                      Value;                                                    // (Parm)
	int                                                Level;                                                    // (Parm)
};

// Function Interface.DetailStatusWnd.UpdateMPBar
struct UDetailStatusWnd_UpdateMPBar_Params
{
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.DetailStatusWnd.UpdateHPBar
struct UDetailStatusWnd_UpdateHPBar_Params
{
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.DetailStatusWnd.UpdateInterface
struct UDetailStatusWnd_UpdateInterface_Params
{
};

// Function Interface.DetailStatusWnd.HandleUpdateUserInfo
struct UDetailStatusWnd_HandleUpdateUserInfo_Params
{
};

// Function Interface.DetailStatusWnd.HandleUpdateUserGauge
struct UDetailStatusWnd_HandleUpdateUserGauge_Params
{
	int                                                type;                                                     // (Parm)
};

// Function Interface.DetailStatusWnd.GetMyExpRate
struct UDetailStatusWnd_GetMyExpRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DetailStatusWnd.GetMovingSpeed
struct UDetailStatusWnd_GetMovingSpeed_Params
{
	struct FUserInfo                                   a_UserInfo;                                               // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.DetailStatusWnd.GetMyUserInfo
struct UDetailStatusWnd_GetMyUserInfo_Params
{
	struct FUserInfo                                   a_MyUserInfo;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DetailStatusWnd.HandleUpdateHennaInfo
struct UDetailStatusWnd_HandleUpdateHennaInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DetailStatusWnd.HandleUpdateStatusGauge
struct UDetailStatusWnd_HandleUpdateStatusGauge_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	int                                                type;                                                     // (Parm)
};

// Function Interface.DetailStatusWnd.HandleToggle
struct UDetailStatusWnd_HandleToggle_Params
{
};

// Function Interface.DetailStatusWnd.OnEvent
struct UDetailStatusWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DetailStatusWnd.OnShow
struct UDetailStatusWnd_OnShow_Params
{
};

// Function Interface.DetailStatusWnd.OnEnterState
struct UDetailStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.DetailStatusWnd.InitializeCOD
struct UDetailStatusWnd_InitializeCOD_Params
{
};

// Function Interface.DetailStatusWnd.Initialize
struct UDetailStatusWnd_Initialize_Params
{
};

// Function Interface.DetailStatusWnd.OnLoad
struct UDetailStatusWnd_OnLoad_Params
{
};

// Function Interface.DetailStatusWnd.OnRegisterEvent
struct UDetailStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.SkillEnchantInfoWnd.AddSkillEnchantInfoExtend
struct USkillEnchantInfoWnd_AddSkillEnchantInfoExtend_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	struct FINT64                                      iNumOfItem;                                               // (Parm)
};

// Function Interface.SkillEnchantInfoWnd.InsertNodeItem
struct USkillEnchantInfoWnd_InsertNodeItem_Params
{
	struct FString                                     strNodeName;                                              // (Parm, NeedCtorLink)
	struct FXMLTreeNodeItemInfo                        infNodeItemName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantInfoWnd.ClearDetailInfo
struct USkillEnchantInfoWnd_ClearDetailInfo_Params
{
};

// Function Interface.SkillEnchantInfoWnd.AddSkillEnchantInfoListItem
struct USkillEnchantInfoWnd_AddSkillEnchantInfoListItem_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	int                                                iSPConsume;                                               // (Parm)
	struct FString                                     strEnchantName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantInfoWnd.ShowSkillEnchantInfoWnd
struct USkillEnchantInfoWnd_ShowSkillEnchantInfoWnd_Params
{
	int                                                iType;                                                    // (Parm)
};

// Function Interface.SkillEnchantInfoWnd.OnEvent
struct USkillEnchantInfoWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantInfoWnd.OnLearn
struct USkillEnchantInfoWnd_OnLearn_Params
{
};

// Function Interface.SkillEnchantInfoWnd.OnClickButton
struct USkillEnchantInfoWnd_OnClickButton_Params
{
	struct FString                                     strItemID;                                                // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantInfoWnd.OnLoad
struct USkillEnchantInfoWnd_OnLoad_Params
{
};

// Function Interface.SkillEnchantInfoWnd.OnRegisterEvent
struct USkillEnchantInfoWnd_OnRegisterEvent_Params
{
};

// Function Interface.MagicSkillWnd.IsChangeSkillID
struct UMagicSkillWnd_IsChangeSkillID_Params
{
	int                                                SkillID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MagicSkillWnd.IsItemSkillID
struct UMagicSkillWnd_IsItemSkillID_Params
{
	int                                                SkillID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MagicSkillWnd.IsHeroSkillID
struct UMagicSkillWnd_IsHeroSkillID_Params
{
	int                                                SkillID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MagicSkillWnd.GroupingSkill
struct UMagicSkillWnd_GroupingSkill_Params
{
	int                                                SkillID;                                                  // (Parm)
	int                                                SkillLevel;                                               // (Parm)
};

// Function Interface.MagicSkillWnd.ComputeItemWndAnchor
struct UMagicSkillWnd_ComputeItemWndAnchor_Params
{
};

// Function Interface.MagicSkillWnd.ComputeItemWndHeight
struct UMagicSkillWnd_ComputeItemWndHeight_Params
{
};

// Function Interface.MagicSkillWnd.HandleSkillList
struct UMagicSkillWnd_HandleSkillList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MagicSkillWnd.Clear
struct UMagicSkillWnd_Clear_Params
{
};

// Function Interface.MagicSkillWnd.HandleSkillListStart
struct UMagicSkillWnd_HandleSkillListStart_Params
{
};

// Function Interface.MagicSkillWnd.HandleLanguageChanged
struct UMagicSkillWnd_HandleLanguageChanged_Params
{
};

// Function Interface.MagicSkillWnd.OnClickButton
struct UMagicSkillWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MagicSkillWnd.OnClickItem
struct UMagicSkillWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.MagicSkillWnd.OnEvent
struct UMagicSkillWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MagicSkillWnd.OnHide
struct UMagicSkillWnd_OnHide_Params
{
};

// Function Interface.MagicSkillWnd.OnShow
struct UMagicSkillWnd_OnShow_Params
{
};

// Function Interface.MagicSkillWnd.OnLoad
struct UMagicSkillWnd_OnLoad_Params
{
};

// Function Interface.MagicSkillWnd.OnRegisterEvent
struct UMagicSkillWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMMagicSkillWnd.OnClickItem
struct UGMMagicSkillWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.GMMagicSkillWnd.HadleGMObservingSkillList
struct UGMMagicSkillWnd_HadleGMObservingSkillList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMMagicSkillWnd.HadleGMObservingSkillListStart
struct UGMMagicSkillWnd_HadleGMObservingSkillListStart_Params
{
};

// Function Interface.GMMagicSkillWnd.OnEvent
struct UGMMagicSkillWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMMagicSkillWnd.ShowMagicSkill
struct UGMMagicSkillWnd_ShowMagicSkill_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMMagicSkillWnd.OnHide
struct UGMMagicSkillWnd_OnHide_Params
{
};

// Function Interface.GMMagicSkillWnd.OnShow
struct UGMMagicSkillWnd_OnShow_Params
{
};

// Function Interface.GMMagicSkillWnd.OnLoad
struct UGMMagicSkillWnd_OnLoad_Params
{
};

// Function Interface.GMMagicSkillWnd.OnRegisterEvent
struct UGMMagicSkillWnd_OnRegisterEvent_Params
{
};

// Function Interface.RecipeBuyListWnd.SetTooltip
struct URecipeBuyListWnd_SetTooltip_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Description;                                              // (Parm, NeedCtorLink)
	struct FINT64                                      MakingFee;                                                // (Parm)
	struct FCustomTooltip                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.RecipeBuyListWnd.AddRecipeShopSellItem
struct URecipeBuyListWnd_AddRecipeShopSellItem_Params
{
	int                                                RecipeID;                                                 // (Parm)
	int                                                CanbeMade;                                                // (Parm)
	struct FINT64                                      MakingFee;                                                // (Parm)
};

// Function Interface.RecipeBuyListWnd.SetMPBar
struct URecipeBuyListWnd_SetMPBar_Params
{
	int                                                currentMP;                                                // (Parm)
};

// Function Interface.RecipeBuyListWnd.ReceiveRecipeShopSellList
struct URecipeBuyListWnd_ReceiveRecipeShopSellList_Params
{
	int                                                ServerID;                                                 // (Parm)
	int                                                currentMP;                                                // (Parm)
	int                                                MaxMP;                                                    // (Parm)
	struct FINT64                                      Adena;                                                    // (Parm)
};

// Function Interface.RecipeBuyListWnd.Clear
struct URecipeBuyListWnd_Clear_Params
{
};

// Function Interface.RecipeBuyListWnd.CloseWindow
struct URecipeBuyListWnd_CloseWindow_Params
{
};

// Function Interface.RecipeBuyListWnd.OnClickButton
struct URecipeBuyListWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBuyListWnd.OnEvent
struct URecipeBuyListWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBuyListWnd.OnLoad
struct URecipeBuyListWnd_OnLoad_Params
{
};

// Function Interface.RecipeBuyListWnd.OnRegisterEvent
struct URecipeBuyListWnd_OnRegisterEvent_Params
{
};

// Function Interface.RecipeTreeWnd.AddRecipeItem
struct URecipeTreeWnd_AddRecipeItem_Params
{
	int                                                ProductID;                                                // (Parm)
	int                                                SuccessRate;                                              // (Parm)
	struct FINT64                                      NeedCount;                                                // (Parm)
	struct FString                                     NodeName;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.RecipeTreeWnd.SetRecipeInfo
struct URecipeTreeWnd_SetRecipeInfo_Params
{
	int                                                RecipeID;                                                 // (Parm)
	int                                                SuccessRate;                                              // (Parm)
};

// Function Interface.RecipeTreeWnd.StartRecipeTreeWnd
struct URecipeTreeWnd_StartRecipeTreeWnd_Params
{
	int                                                RecipeID;                                                 // (Parm)
	int                                                SuccessRate;                                              // (Parm)
};

// Function Interface.RecipeTreeWnd.Clear
struct URecipeTreeWnd_Clear_Params
{
};

// Function Interface.RecipeTreeWnd.CloseWindow
struct URecipeTreeWnd_CloseWindow_Params
{
};

// Function Interface.RecipeTreeWnd.OnClickButton
struct URecipeTreeWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeTreeWnd.OnEvent
struct URecipeTreeWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeTreeWnd.OnLoad
struct URecipeTreeWnd_OnLoad_Params
{
};

// Function Interface.RecipeTreeWnd.OnRegisterEvent
struct URecipeTreeWnd_OnRegisterEvent_Params
{
};

// Function Interface.SkillTrainListWnd.InsertNodeItem
struct USkillTrainListWnd_InsertNodeItem_Params
{
	struct FString                                     strNodeName;                                              // (Parm, NeedCtorLink)
	struct FXMLTreeNodeItemInfo                        infNodeItemName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainListWnd.AddSkillTrainListItem
struct USkillTrainListWnd_AddSkillTrainListItem_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	int                                                iSPConsume;                                               // (Parm)
	struct FString                                     strEnchantName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainListWnd.ShowSkillTrainListWnd
struct USkillTrainListWnd_ShowSkillTrainListWnd_Params
{
	int                                                iType;                                                    // (Parm)
};

// Function Interface.SkillTrainListWnd.OnShow
struct USkillTrainListWnd_OnShow_Params
{
};

// Function Interface.SkillTrainListWnd.OnEvent
struct USkillTrainListWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainListWnd.Clear
struct USkillTrainListWnd_Clear_Params
{
};

// Function Interface.SkillTrainListWnd.OnClickButton
struct USkillTrainListWnd_OnClickButton_Params
{
	struct FString                                     strItemID;                                                // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainListWnd.OnLoad
struct USkillTrainListWnd_OnLoad_Params
{
};

// Function Interface.SkillTrainListWnd.OnRegisterEvent
struct USkillTrainListWnd_OnRegisterEvent_Params
{
};

// Function Interface.HennaListWnd.AddHennaListItem
struct UHennaListWnd_AddHennaListItem_Params
{
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strDescription;                                           // (Parm, NeedCtorLink)
	struct FINT64                                      iFee;                                                     // (Parm)
	int                                                iHennaID;                                                 // (Parm)
};

// Function Interface.HennaListWnd.ShowHennaListWnd
struct UHennaListWnd_ShowHennaListWnd_Params
{
	struct FINT64                                      iAdena;                                                   // (Parm)
};

// Function Interface.HennaListWnd.OnEvent
struct UHennaListWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HennaListWnd.Clear
struct UHennaListWnd_Clear_Params
{
};

// Function Interface.HennaListWnd.OnClickButton
struct UHennaListWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HennaListWnd.OnLoad
struct UHennaListWnd_OnLoad_Params
{
};

// Function Interface.HennaListWnd.OnRegisterEvent
struct UHennaListWnd_OnRegisterEvent_Params
{
};

// Function Interface.CharacterCreateMenuWnd.SetCameraChar
struct UCharacterCreateMenuWnd_SetCameraChar_Params
{
	int                                                a_CharIndex;                                              // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.EnableRotate
struct UCharacterCreateMenuWnd_EnableRotate_Params
{
	bool                                               bRotate;                                                  // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.CameraMoveBackward
struct UCharacterCreateMenuWnd_CameraMoveBackward_Params
{
	int                                                State;                                                    // (Parm)
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                gender;                                                   // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.CameraMoveParallelTransference
struct UCharacterCreateMenuWnd_CameraMoveParallelTransference_Params
{
	int                                                State;                                                    // (Parm)
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                gender;                                                   // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.CameraMoveForward
struct UCharacterCreateMenuWnd_CameraMoveForward_Params
{
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                gender;                                                   // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.CameraMove
struct UCharacterCreateMenuWnd_CameraMove_Params
{
	int                                                State;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.GetIndex
struct UCharacterCreateMenuWnd_GetIndex_Params
{
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                gender;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.CharacterCreateMenuWnd.GetDefaultCharacterIndex
struct UCharacterCreateMenuWnd_GetDefaultCharacterIndex_Params
{
	int                                                Race;                                                     // (Parm)
	int                                                Job;                                                      // (Parm)
	int                                                Sex;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.CharacterCreateMenuWnd.ErrorInSex
struct UCharacterCreateMenuWnd_ErrorInSex_Params
{
};

// Function Interface.CharacterCreateMenuWnd.ErrorInJob
struct UCharacterCreateMenuWnd_ErrorInJob_Params
{
};

// Function Interface.CharacterCreateMenuWnd.ErrorInRace
struct UCharacterCreateMenuWnd_ErrorInRace_Params
{
};

// Function Interface.CharacterCreateMenuWnd.OnFaceType
struct UCharacterCreateMenuWnd_OnFaceType_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnHairColor
struct UCharacterCreateMenuWnd_OnHairColor_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnHairType
struct UCharacterCreateMenuWnd_OnHairType_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnSexSelect
struct UCharacterCreateMenuWnd_OnSexSelect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnJobSelect
struct UCharacterCreateMenuWnd_OnJobSelect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnRaceSelect
struct UCharacterCreateMenuWnd_OnRaceSelect_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnComboBoxItemSelected
struct UCharacterCreateMenuWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.HandleSetClassDescription
struct UCharacterCreateMenuWnd_HandleSetClassDescription_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.CharacterCreateMenuWnd.HandleClearSetupWnd
struct UCharacterCreateMenuWnd_HandleClearSetupWnd_Params
{
};

// Function Interface.CharacterCreateMenuWnd.HandleClear
struct UCharacterCreateMenuWnd_HandleClear_Params
{
};

// Function Interface.CharacterCreateMenuWnd.HandleEnableRotate
struct UCharacterCreateMenuWnd_HandleEnableRotate_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.CharacterCreateMenuWnd.OnEvent
struct UCharacterCreateMenuWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.CharacterCreateMenuWnd.OnLButtonUp
struct UCharacterCreateMenuWnd_OnLButtonUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.OnLButtonDown
struct UCharacterCreateMenuWnd_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.CharacterCreateMenuWnd.HandleZoom
struct UCharacterCreateMenuWnd_HandleZoom_Params
{
};

// Function Interface.CharacterCreateMenuWnd.IsValidData
struct UCharacterCreateMenuWnd_IsValidData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.CharacterCreateMenuWnd.HandleBtnCreateCharacter
struct UCharacterCreateMenuWnd_HandleBtnCreateCharacter_Params
{
};

// Function Interface.CharacterCreateMenuWnd.OnClickButton
struct UCharacterCreateMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CharacterCreateMenuWnd.OnShow
struct UCharacterCreateMenuWnd_OnShow_Params
{
};

// Function Interface.CharacterCreateMenuWnd.InitString
struct UCharacterCreateMenuWnd_InitString_Params
{
};

// Function Interface.CharacterCreateMenuWnd.OnLoad
struct UCharacterCreateMenuWnd_OnLoad_Params
{
};

// Function Interface.CharacterCreateMenuWnd.OnRegisterEvent
struct UCharacterCreateMenuWnd_OnRegisterEvent_Params
{
};

// Function Interface.Shortcut.HandleStateChange
struct UShortcut_HandleStateChange_Params
{
	struct FString                                     State;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.Shortcut.HandleCloseAllWindow
struct UShortcut_HandleCloseAllWindow_Params
{
};

// Function Interface.Shortcut.HandleSetNextChatType
struct UShortcut_HandleSetNextChatType_Params
{
};

// Function Interface.Shortcut.HandleSetPrevChatType
struct UShortcut_HandleSetPrevChatType_Params
{
};

// Function Interface.Shortcut.HandleShowChatWindow
struct UShortcut_HandleShowChatWindow_Params
{
};

// Function Interface.Shortcut.HandleShortcutTest
struct UShortcut_HandleShortcutTest_Params
{
};

// Function Interface.Shortcut.HandlePrintShortcut
struct UShortcut_HandlePrintShortcut_Params
{
};

// Function Interface.Shortcut.HandleShortcutCommand
struct UShortcut_HandleShortcutCommand_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.Shortcut.OnExitState
struct UShortcut_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.Shortcut.OnTimer
struct UShortcut_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.Shortcut.HandlePartyMatchingOnOff
struct UShortcut_HandlePartyMatchingOnOff_Params
{
};

// Function Interface.Shortcut.HandleShowHelpHtmlWnd
struct UShortcut_HandleShowHelpHtmlWnd_Params
{
};

// Function Interface.Shortcut.ClosePartyMatchingWnd
struct UShortcut_ClosePartyMatchingWnd_Params
{
};

// Function Interface.Shortcut.HandleShortcutKeyEvent
struct UShortcut_HandleShortcutKeyEvent_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.Shortcut.OnEvent
struct UShortcut_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.Shortcut.OnLoad
struct UShortcut_OnLoad_Params
{
};

// Function Interface.Shortcut.OnRegisterEvent
struct UShortcut_OnRegisterEvent_Params
{
};

// Function Interface.SkillEnchantWnd.InsertNodeItem
struct USkillEnchantWnd_InsertNodeItem_Params
{
	struct FString                                     strNodeName;                                              // (Parm, NeedCtorLink)
	struct FXMLTreeNodeItemInfo                        infNodeItemName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantWnd.AddSkillEnchantListItem
struct USkillEnchantWnd_AddSkillEnchantListItem_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	int                                                iSPConsume;                                               // (Parm)
	struct FString                                     strEnchantName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantWnd.ShowSkillEnchantWnd
struct USkillEnchantWnd_ShowSkillEnchantWnd_Params
{
	int                                                iType;                                                    // (Parm)
};

// Function Interface.SkillEnchantWnd.OnShow
struct USkillEnchantWnd_OnShow_Params
{
};

// Function Interface.SkillEnchantWnd.OnEvent
struct USkillEnchantWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantWnd.OnClickButton
struct USkillEnchantWnd_OnClickButton_Params
{
	struct FString                                     strItemID;                                                // (Parm, NeedCtorLink)
};

// Function Interface.SkillEnchantWnd.OnLoad
struct USkillEnchantWnd_OnLoad_Params
{
};

// Function Interface.SkillEnchantWnd.OnRegisterEvent
struct USkillEnchantWnd_OnRegisterEvent_Params
{
};

// Function Interface.QuestHTMLWnd.HandleLoadHtmlFromString
struct UQuestHTMLWnd_HandleLoadHtmlFromString_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestHTMLWnd.OnHtmlMsgHideWindow
struct UQuestHTMLWnd_OnHtmlMsgHideWindow_Params
{
	class UHtmlHandle*                                 a_HtmlHandle;                                             // (Parm)
};

// Function Interface.QuestHTMLWnd.HandleQuestIDLoadHtmlFromString
struct UQuestHTMLWnd_HandleQuestIDLoadHtmlFromString_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestHTMLWnd.OnEvent
struct UQuestHTMLWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestHTMLWnd.OnLoad
struct UQuestHTMLWnd_OnLoad_Params
{
};

// Function Interface.QuestHTMLWnd.OnRegisterEvent
struct UQuestHTMLWnd_OnRegisterEvent_Params
{
};

// Function Interface.BR_CashShopWnd.MakeDrawInfo_Blank
struct UBR_CashShopWnd_MakeDrawInfo_Blank_Params
{
	struct FDrawItemInfo                               Info;                                                     // (Parm, OutParm, NeedCtorLink)
	int                                                Height;                                                   // (Parm)
};

// Function Interface.BR_CashShopWnd.MakeDrawInfo_Image
struct UBR_CashShopWnd_MakeDrawInfo_Image_Params
{
	struct FDrawItemInfo                               Info;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     TextureName;                                              // (Parm, NeedCtorLink)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.BR_CashShopWnd.MakeDrawInfo_Desc
struct UBR_CashShopWnd_MakeDrawInfo_Desc_Params
{
	struct FDrawItemInfo                               Info;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	int                                                R;                                                        // (Parm)
	int                                                G;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
};

// Function Interface.BR_CashShopWnd.MakeDrawInfo_Text
struct UBR_CashShopWnd_MakeDrawInfo_Text_Params
{
	struct FDrawItemInfo                               Info;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	int                                                R;                                                        // (Parm)
	int                                                G;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
};

// Function Interface.BR_CashShopWnd.MakeText
struct UBR_CashShopWnd_MakeText_Params
{
	struct FDrawItemInfo                               Info;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.MakeCashItemIcon
struct UBR_CashShopWnd_MakeCashItemIcon_Params
{
	struct FDrawItemInfo                               Info;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.BR_CashShopWnd.ResetScrollHeight
struct UBR_CashShopWnd_ResetScrollHeight_Params
{
};

// Function Interface.BR_CashShopWnd.CalcTextHeight
struct UBR_CashShopWnd_CalcTextHeight_Params
{
	struct FString                                     tempStr;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.BR_CashShopWnd.AddEachProductInfo
struct UBR_CashShopWnd_AddEachProductInfo_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                iAmount;                                                  // (Parm)
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     IconName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
	int                                                Weight;                                                   // (Parm)
	int                                                trade;                                                    // (Parm)
};

// Function Interface.BR_CashShopWnd.SetNewProductInfo
struct UBR_CashShopWnd_SetNewProductInfo_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                Price;                                                    // (Parm)
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.AddProductItem
struct UBR_CashShopWnd_AddProductItem_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                category;                                                 // (Parm)
	int                                                showtab;                                                  // (Parm)
	int                                                Price;                                                    // (Parm)
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     IconName;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.AddFilteredProductList
struct UBR_CashShopWnd_AddFilteredProductList_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                category;                                                 // (Parm)
	int                                                showtab;                                                  // (Parm)
	int                                                Price;                                                    // (Parm)
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     IconName;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.AddFilteredProductListAll
struct UBR_CashShopWnd_AddFilteredProductListAll_Params
{
};

// Function Interface.BR_CashShopWnd.CheckTabIndex
struct UBR_CashShopWnd_CheckTabIndex_Params
{
	int                                                category;                                                 // (Parm)
	int                                                showtab;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.BR_CashShopWnd.ShowCashShopWnd
struct UBR_CashShopWnd_ShowCashShopWnd_Params
{
};

// Function Interface.BR_CashShopWnd.InitProductList
struct UBR_CashShopWnd_InitProductList_Params
{
};

// Function Interface.BR_CashShopWnd.OnBtnInputQuantity
struct UBR_CashShopWnd_OnBtnInputQuantity_Params
{
};

// Function Interface.BR_CashShopWnd.OnBtnCashChargeClick
struct UBR_CashShopWnd_OnBtnCashChargeClick_Params
{
};

// Function Interface.BR_CashShopWnd.OnbtnCancelClick
struct UBR_CashShopWnd_OnbtnCancelClick_Params
{
};

// Function Interface.BR_CashShopWnd.GetProductItem
struct UBR_CashShopWnd_GetProductItem_Params
{
	int                                                Id;                                                       // (Parm)
	struct FProductInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.OnBtnBuyClick
struct UBR_CashShopWnd_OnBtnBuyClick_Params
{
};

// Function Interface.BR_CashShopWnd.OnTabCategory
struct UBR_CashShopWnd_OnTabCategory_Params
{
	int                                                tabindex;                                                 // (Parm)
};

// Function Interface.BR_CashShopWnd.PrepareProductList
struct UBR_CashShopWnd_PrepareProductList_Params
{
	int                                                iOption;                                                  // (Parm)
};

// Function Interface.BR_CashShopWnd.HandleDialogOK
struct UBR_CashShopWnd_HandleDialogOK_Params
{
};

// Function Interface.BR_CashShopWnd.HandleToggleWindow
struct UBR_CashShopWnd_HandleToggleWindow_Params
{
};

// Function Interface.BR_CashShopWnd.ClearItemInfo
struct UBR_CashShopWnd_ClearItemInfo_Params
{
};

// Function Interface.BR_CashShopWnd.ClearItemList
struct UBR_CashShopWnd_ClearItemList_Params
{
	int                                                allclear;                                                 // (Parm)
};

// Function Interface.BR_CashShopWnd.SetGamePoint
struct UBR_CashShopWnd_SetGamePoint_Params
{
	struct FINT64                                      iGamePoint;                                               // (Parm)
};

// Function Interface.BR_CashShopWnd.OnChangeEditBox
struct UBR_CashShopWnd_OnChangeEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.OnClickButton
struct UBR_CashShopWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.OnEvent
struct UBR_CashShopWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopWnd.Initialize
struct UBR_CashShopWnd_Initialize_Params
{
};

// Function Interface.BR_CashShopWnd.InitHandle
struct UBR_CashShopWnd_InitHandle_Params
{
};

// Function Interface.BR_CashShopWnd.OnLoad
struct UBR_CashShopWnd_OnLoad_Params
{
};

// Function Interface.BR_CashShopWnd.OnRegisterEvent
struct UBR_CashShopWnd_OnRegisterEvent_Params
{
};

// Function Interface.BR_BuyingWnd.AddProductList
struct UBR_BuyingWnd_AddProductList_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                iAmount;                                                  // (Parm)
	int                                                Price;                                                    // (Parm)
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     IconName;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.BR_BuyingWnd.InitProductList
struct UBR_BuyingWnd_InitProductList_Params
{
};

// Function Interface.BR_BuyingWnd.ShowBuyWindow
struct UBR_BuyingWnd_ShowBuyWindow_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function Interface.BR_BuyingWnd.ResultBuy
struct UBR_BuyingWnd_ResultBuy_Params
{
	int                                                iResult;                                                  // (Parm)
	struct FINT64                                      iGamePoint;                                               // (Parm)
};

// Function Interface.BR_BuyingWnd.CalculateBalance
struct UBR_BuyingWnd_CalculateBalance_Params
{
};

// Function Interface.BR_BuyingWnd.OnBtnChargeClick
struct UBR_BuyingWnd_OnBtnChargeClick_Params
{
};

// Function Interface.BR_BuyingWnd.OnBtnBuyClick
struct UBR_BuyingWnd_OnBtnBuyClick_Params
{
};

// Function Interface.BR_BuyingWnd.OnbtnCancelClick
struct UBR_BuyingWnd_OnbtnCancelClick_Params
{
};

// Function Interface.BR_BuyingWnd.OnShow
struct UBR_BuyingWnd_OnShow_Params
{
};

// Function Interface.BR_BuyingWnd.OnHide
struct UBR_BuyingWnd_OnHide_Params
{
};

// Function Interface.BR_BuyingWnd.OnEvent
struct UBR_BuyingWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BR_BuyingWnd.OnClickButton
struct UBR_BuyingWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BR_BuyingWnd.OnRegisterEvent
struct UBR_BuyingWnd_OnRegisterEvent_Params
{
};

// Function Interface.BR_BuyingWnd.InitHandle
struct UBR_BuyingWnd_InitHandle_Params
{
};

// Function Interface.BR_BuyingWnd.OnLoad
struct UBR_BuyingWnd_OnLoad_Params
{
};

// Function Interface.PrivateShopWnd.ResetBulkOnlyShop
struct UPrivateShopWnd_ResetBulkOnlyShop_Params
{
};

// Function Interface.PrivateShopWnd.SwithBulkOnlyShop
struct UPrivateShopWnd_SwithBulkOnlyShop_Params
{
};

// Function Interface.PrivateShopWnd.IsProperPrice
struct UPrivateShopWnd_IsProperPrice_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FINT64                                      Price;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PrivateShopWnd.HandleSetMaxCount
struct UPrivateShopWnd_HandleSetMaxCount_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PrivateShopWnd.HandleOKButton
struct UPrivateShopWnd_HandleOKButton_Params
{
	bool                                               bPriceCheck;                                              // (Parm)
};

// Function Interface.PrivateShopWnd.AdjustWeight
struct UPrivateShopWnd_AdjustWeight_Params
{
};

// Function Interface.PrivateShopWnd.AdjustCount
struct UPrivateShopWnd_AdjustCount_Params
{
};

// Function Interface.PrivateShopWnd.AdjustPrice
struct UPrivateShopWnd_AdjustPrice_Params
{
};

// Function Interface.PrivateShopWnd.HandleAddItem
struct UPrivateShopWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PrivateShopWnd.HandleOpenWindow
struct UPrivateShopWnd_HandleOpenWindow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PrivateShopWnd.HandleDialogOK
struct UPrivateShopWnd_HandleDialogOK_Params
{
};

// Function Interface.PrivateShopWnd.MoveItemBottomToTop
struct UPrivateShopWnd_MoveItemBottomToTop_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.PrivateShopWnd.MoveItemTopToBottom
struct UPrivateShopWnd_MoveItemTopToBottom_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.PrivateShopWnd.RequestQuit
struct UPrivateShopWnd_RequestQuit_Params
{
};

// Function Interface.PrivateShopWnd.Clear
struct UPrivateShopWnd_Clear_Params
{
};

// Function Interface.PrivateShopWnd.OnDropItem
struct UPrivateShopWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PrivateShopWnd.OnClickItem
struct UPrivateShopWnd_OnClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.PrivateShopWnd.OnDBClickItem
struct UPrivateShopWnd_OnDBClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.PrivateShopWnd.OnClickButton
struct UPrivateShopWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.PrivateShopWnd.OnEvent
struct UPrivateShopWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PrivateShopWnd.OnHide
struct UPrivateShopWnd_OnHide_Params
{
};

// Function Interface.PrivateShopWnd.OnSendPacketWhenHiding
struct UPrivateShopWnd_OnSendPacketWhenHiding_Params
{
};

// Function Interface.PrivateShopWnd.OnLoad
struct UPrivateShopWnd_OnLoad_Params
{
};

// Function Interface.PrivateShopWnd.OnRegisterEvent
struct UPrivateShopWnd_OnRegisterEvent_Params
{
};

// Function Interface.ShortcutAssignWnd.ActiveFlightShort
struct UShortcutAssignWnd_ActiveFlightShort_Params
{
};

// Function Interface.ShortcutAssignWnd.SwapReduntedShortcutItemwithCurrentShortcutItem
struct UShortcutAssignWnd_SwapReduntedShortcutItemwithCurrentShortcutItem_Params
{
};

// Function Interface.ShortcutAssignWnd.CheckShortcutItemRedundency
struct UShortcutAssignWnd_CheckShortcutItemRedundency_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.DeleteCurrentShortcutItem
struct UShortcutAssignWnd_DeleteCurrentShortcutItem_Params
{
};

// Function Interface.ShortcutAssignWnd.SetCurrentKeyAsShortKey
struct UShortcutAssignWnd_SetCurrentKeyAsShortKey_Params
{
};

// Function Interface.ShortcutAssignWnd.Switch2KeyBrowsingMode
struct UShortcutAssignWnd_Switch2KeyBrowsingMode_Params
{
};

// Function Interface.ShortcutAssignWnd.Switch2KeyInputMode
struct UShortcutAssignWnd_Switch2KeyInputMode_Params
{
};

// Function Interface.ShortcutAssignWnd.AssignCurrentSelectedKeyfromtheListCtrl
struct UShortcutAssignWnd_AssignCurrentSelectedKeyfromtheListCtrl_Params
{
};

// Function Interface.ShortcutAssignWnd.OnResetAllBtnClickPopUpMessage
struct UShortcutAssignWnd_OnResetAllBtnClickPopUpMessage_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleUpdateAirTransKeyListControl
struct UShortcutAssignWnd_HandleUpdateAirTransKeyListControl_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleUpdateAirKeyListControl
struct UShortcutAssignWnd_HandleUpdateAirKeyListControl_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleUpdateEnterKeyListControl
struct UShortcutAssignWnd_HandleUpdateEnterKeyListControl_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleUpdateGeneralKeyListControl
struct UShortcutAssignWnd_HandleUpdateGeneralKeyListControl_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleResetUI2Default
struct UShortcutAssignWnd_HandleResetUI2Default_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleSwitchEnterchatting
struct UShortcutAssignWnd_HandleSwitchEnterchatting_Params
{
};

// Function Interface.ShortcutAssignWnd.ResetGMKeyActivate
struct UShortcutAssignWnd_ResetGMKeyActivate_Params
{
};

// Function Interface.ShortcutAssignWnd.UIActivationUponStateChanges
struct UShortcutAssignWnd_UIActivationUponStateChanges_Params
{
	bool                                               bTurnOff;                                                 // (Parm)
};

// Function Interface.ShortcutAssignWnd.OnRegisterEvent
struct UShortcutAssignWnd_OnRegisterEvent_Params
{
};

// Function Interface.ShortcutAssignWnd.InitializeWindowHandlesCOD
struct UShortcutAssignWnd_InitializeWindowHandlesCOD_Params
{
};

// Function Interface.ShortcutAssignWnd.InitializeWindowHandles
struct UShortcutAssignWnd_InitializeWindowHandles_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleDialogCancel
struct UShortcutAssignWnd_HandleDialogCancel_Params
{
};

// Function Interface.ShortcutAssignWnd.HandleDialogOK
struct UShortcutAssignWnd_HandleDialogOK_Params
{
};

// Function Interface.ShortcutAssignWnd.OnKeyDown
struct UShortcutAssignWnd_OnKeyDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
};

// Function Interface.ShortcutAssignWnd.OnEvent
struct UShortcutAssignWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.OnHide
struct UShortcutAssignWnd_OnHide_Params
{
};

// Function Interface.ShortcutAssignWnd.OnShow
struct UShortcutAssignWnd_OnShow_Params
{
};

// Function Interface.ShortcutAssignWnd.OnClickCheckBox
struct UShortcutAssignWnd_OnClickCheckBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.OnDBClickListCtrlRecord
struct UShortcutAssignWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     Id;                                                       // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.OnClickButton
struct UShortcutAssignWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.OnClickListCtrlRecord
struct UShortcutAssignWnd_OnClickListCtrlRecord_Params
{
	struct FString                                     Id;                                                       // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.OnLoad
struct UShortcutAssignWnd_OnLoad_Params
{
};

// Function Interface.ShortcutAssignWnd.GetUserReadableKeyName
struct UShortcutAssignWnd_GetUserReadableKeyName_Params
{
	struct FString                                     Input;                                                    // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.GetKeySettingDescriptionWithID
struct UShortcutAssignWnd_GetKeySettingDescriptionWithID_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.MakeFullShortcutKeyCombinationName
struct UShortcutAssignWnd_MakeFullShortcutKeyCombinationName_Params
{
	struct FString                                     MainKey;                                                  // (Parm, NeedCtorLink)
	struct FString                                     subkey1;                                                  // (Parm, NeedCtorLink)
	struct FString                                     subkey2;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.GetShortcutItemNameWithID
struct UShortcutAssignWnd_GetShortcutItemNameWithID_Params
{
	int                                                Id;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.MakeSystemUserInputKeyCombination
struct UShortcutAssignWnd_MakeSystemUserInputKeyCombination_Params
{
	struct FString                                     MainKey;                                                  // (Parm, NeedCtorLink)
	bool                                               subkeybool1;                                              // (Parm)
	bool                                               subkeybool2;                                              // (Parm)
	bool                                               subkeybool3;                                              // (Parm)
};

// Function Interface.ShortcutAssignWnd.MakeUserInputKeyCombinationName
struct UShortcutAssignWnd_MakeUserInputKeyCombinationName_Params
{
	struct FString                                     MainKey;                                                  // (Parm, NeedCtorLink)
	bool                                               subkeybool1;                                              // (Parm)
	bool                                               subkeybool2;                                              // (Parm)
	bool                                               subkeybool3;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ShortcutAssignWnd.IsReleaseActionItems
struct UShortcutAssignWnd_IsReleaseActionItems_Params
{
	struct FString                                     ActionName;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ShortcutAssignWnd.IsValidKey
struct UShortcutAssignWnd_IsValidKey_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ShortcutAssignWnd.IsStandAloneKey
struct UShortcutAssignWnd_IsStandAloneKey_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ShortcutAssignWnd.DataSheetAssignKeyReplacement
struct UShortcutAssignWnd_DataSheetAssignKeyReplacement_Params
{
};

// Function Interface.DialogBox.DoDefaultAction
struct UDialogBox_DoDefaultAction_Params
{
};

// Function Interface.DialogBox.OnProgressTimeUp
struct UDialogBox_OnProgressTimeUp_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.HandleNumberClick
struct UDialogBox_HandleNumberClick_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.HandleCancel
struct UDialogBox_HandleCancel_Params
{
};

// Function Interface.DialogBox.HandleOK
struct UDialogBox_HandleOK_Params
{
};

// Function Interface.DialogBox.SetButtonName
struct UDialogBox_SetButtonName_Params
{
	int                                                indexOK;                                                  // (Parm)
	int                                                indexCancel;                                              // (Parm)
};

// Function Interface.DialogBox.SetMessage
struct UDialogBox_SetMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.SetWindowStyle
struct UDialogBox_SetWindowStyle_Params
{
	TEnumAsByte<EDialogType>                           Style;                                                    // (Parm)
};

// Function Interface.DialogBox.HideAll
struct UDialogBox_HideAll_Params
{
};

// Function Interface.DialogBox.Initialize
struct UDialogBox_Initialize_Params
{
};

// Function Interface.DialogBox.OnChangeEditBox
struct UDialogBox_OnChangeEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.OnHide
struct UDialogBox_OnHide_Params
{
};

// Function Interface.DialogBox.OnClickButton
struct UDialogBox_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.OnLoad
struct UDialogBox_OnLoad_Params
{
};

// Function Interface.DialogBox.SetEditBoxMaxLength
struct UDialogBox_SetEditBoxMaxLength_Params
{
	int                                                maxLength;                                                // (Parm)
};

// Function Interface.DialogBox.GetReservedItemInfo
struct UDialogBox_GetReservedItemInfo_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Interface.DialogBox.GetReservedItemID
struct UDialogBox_GetReservedItemID_Params
{
	struct FItemID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DialogBox.GetReservedInt3
struct UDialogBox_GetReservedInt3_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DialogBox.GetReservedInt2
struct UDialogBox_GetReservedInt2_Params
{
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DialogBox.GetReservedInt
struct UDialogBox_GetReservedInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DialogBox.SetReservedItemInfo
struct UDialogBox_SetReservedItemInfo_Params
{
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.SetReservedItemID
struct UDialogBox_SetReservedItemID_Params
{
	struct FItemID                                     Id;                                                       // (Parm)
};

// Function Interface.DialogBox.SetReservedInt3
struct UDialogBox_SetReservedInt3_Params
{
	int                                                Value;                                                    // (Parm)
};

// Function Interface.DialogBox.SetReservedInt2
struct UDialogBox_SetReservedInt2_Params
{
	struct FINT64                                      Value;                                                    // (Parm)
};

// Function Interface.DialogBox.SetReservedInt
struct UDialogBox_SetReservedInt_Params
{
	int                                                Value;                                                    // (Parm)
};

// Function Interface.DialogBox.SetParamInt64
struct UDialogBox_SetParamInt64_Params
{
	struct FINT64                                      param;                                                    // (Parm)
};

// Function Interface.DialogBox.SetEditType
struct UDialogBox_SetEditType_Params
{
	struct FString                                     strType;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.setId
struct UDialogBox_setId_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.DialogBox.GetID
struct UDialogBox_GetID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.DialogBox.SetEditMessage
struct UDialogBox_SetEditMessage_Params
{
	struct FString                                     strMsg;                                                   // (Parm, NeedCtorLink)
};

// Function Interface.DialogBox.GetEditMessage
struct UDialogBox_GetEditMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.DialogBox.GetTarget
struct UDialogBox_GetTarget_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.DialogBox.SetDefaultAction
struct UDialogBox_SetDefaultAction_Params
{
	TEnumAsByte<EDialogDefaultAction>                  defaultAction;                                            // (Parm)
};

// Function Interface.DialogBox.HideDialog
struct UDialogBox_HideDialog_Params
{
};

// Function Interface.DialogBox.ShowDialog
struct UDialogBox_ShowDialog_Params
{
	TEnumAsByte<EDialogType>                           Style;                                                    // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Target;                                                   // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.HandleDominionInfo
struct UGuideWnd_HandleDominionInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.HandleDominionInfoCnt
struct UGuideWnd_HandleDominionInfoCnt_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.SetCastleLocData
struct UGuideWnd_SetCastleLocData_Params
{
};

// Function Interface.GuideWnd.LoadFortressSeigeInfo
struct UGuideWnd_LoadFortressSeigeInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.LoadAgitInfo
struct UGuideWnd_LoadAgitInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.LoadFortressInfo
struct UGuideWnd_LoadFortressInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.LoadCastleInfo
struct UGuideWnd_LoadCastleInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.GetMapCastleID
struct UGuideWnd_GetMapCastleID_Params
{
	struct FString                                     CastleName;                                               // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GuideWnd.FortressSeigeInfoReq
struct UGuideWnd_FortressSeigeInfoReq_Params
{
};

// Function Interface.GuideWnd.AgitInfo
struct UGuideWnd_AgitInfo_Params
{
};

// Function Interface.GuideWnd.FortressInfo
struct UGuideWnd_FortressInfo_Params
{
};

// Function Interface.GuideWnd.CastleInfo
struct UGuideWnd_CastleInfo_Params
{
};

// Function Interface.GuideWnd.conv_zoneName
struct UGuideWnd_conv_zoneName_Params
{
	int                                                search_zoneid;                                            // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.GuideWnd.conv_zoneType
struct UGuideWnd_conv_zoneType_Params
{
	int                                                ZoneTypeNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.GuideWnd.conv_dom
struct UGuideWnd_conv_dom_Params
{
	int                                                ZoneNameNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.GuideWnd.proc_combox
struct UGuideWnd_proc_combox_Params
{
	struct FString                                     ComboboxName;                                             // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.comboxFiller
struct UGuideWnd_comboxFiller_Params
{
	struct FString                                     ComboboxName;                                             // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.LoadAreaInfoListSearchResult
struct UGuideWnd_LoadAreaInfoListSearchResult_Params
{
	int                                                SearchZone;                                               // (Parm)
};

// Function Interface.GuideWnd.ResetArray
struct UGuideWnd_ResetArray_Params
{
};

// Function Interface.GuideWnd.LoadAreaInfoList
struct UGuideWnd_LoadAreaInfoList_Params
{
};

// Function Interface.GuideWnd.LoadQuestSearchResult
struct UGuideWnd_LoadQuestSearchResult_Params
{
	int                                                SearchZone;                                               // (Parm)
};

// Function Interface.GuideWnd.JustdisplayCurrentDataOnTheMap
struct UGuideWnd_JustdisplayCurrentDataOnTheMap_Params
{
};

// Function Interface.GuideWnd.displayCurrentDataOnTheMap
struct UGuideWnd_displayCurrentDataOnTheMap_Params
{
	struct FVector                                     currentloc;                                               // (Parm)
	int                                                txtureint;                                                // (Parm)
};

// Function Interface.GuideWnd.LoadQuestList
struct UGuideWnd_LoadQuestList_Params
{
};

// Function Interface.GuideWnd.LoadRaidSearchResult
struct UGuideWnd_LoadRaidSearchResult_Params
{
	int                                                SearchZone;                                               // (Parm)
};

// Function Interface.GuideWnd.LoadRaidList2
struct UGuideWnd_LoadRaidList2_Params
{
};

// Function Interface.GuideWnd.LoadRaidList3
struct UGuideWnd_LoadRaidList3_Params
{
};

// Function Interface.GuideWnd.LoadRaidList
struct UGuideWnd_LoadRaidList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.LoadRaidRanking
struct UGuideWnd_LoadRaidRanking_Params
{
};

// Function Interface.GuideWnd.LoadHuntingZoneListSearchResult
struct UGuideWnd_LoadHuntingZoneListSearchResult_Params
{
	int                                                SearchZone;                                               // (Parm)
};

// Function Interface.GuideWnd.LoadHuntingZoneList
struct UGuideWnd_LoadHuntingZoneList_Params
{
};

// Function Interface.GuideWnd.OnEvent
struct UGuideWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.OnClickListCtrlRecord
struct UGuideWnd_OnClickListCtrlRecord_Params
{
	struct FString                                     Id;                                                       // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.OnComboBoxItemSelected
struct UGuideWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.GuideWnd.swapReset
struct UGuideWnd_swapReset_Params
{
};

// Function Interface.GuideWnd.swaptab2
struct UGuideWnd_swaptab2_Params
{
};

// Function Interface.GuideWnd.swaptab1
struct UGuideWnd_swaptab1_Params
{
};

// Function Interface.GuideWnd.OnClickButton
struct UGuideWnd_OnClickButton_Params
{
	struct FString                                     Id;                                                       // (Parm, NeedCtorLink)
};

// Function Interface.GuideWnd.OnHide
struct UGuideWnd_OnHide_Params
{
};

// Function Interface.GuideWnd.OnShow
struct UGuideWnd_OnShow_Params
{
};

// Function Interface.GuideWnd.DisableTabBtn
struct UGuideWnd_DisableTabBtn_Params
{
};

// Function Interface.GuideWnd.OnTimer
struct UGuideWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.GuideWnd.OnLoad
struct UGuideWnd_OnLoad_Params
{
};

// Function Interface.GuideWnd.OnRegisterEvent
struct UGuideWnd_OnRegisterEvent_Params
{
};

// Function Interface.ChatFilterWnd.SetComboxIDSelect
struct UChatFilterWnd_SetComboxIDSelect_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                Id;                                                       // (Parm)
};

// Function Interface.ChatFilterWnd.OnComboBoxItemSelected
struct UChatFilterWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                IndexID;                                                  // (Parm)
};

// Function Interface.ChatFilterWnd.SaveChatFilterOption
struct UChatFilterWnd_SaveChatFilterOption_Params
{
};

// Function Interface.ChatFilterWnd.OnClickCheckBox
struct UChatFilterWnd_OnClickCheckBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatFilterWnd.OnClickButton
struct UChatFilterWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ChatFilterWnd.FillOutComboBoxHandle
struct UChatFilterWnd_FillOutComboBoxHandle_Params
{
};

// Function Interface.ChatFilterWnd.OnShow
struct UChatFilterWnd_OnShow_Params
{
};

// Function Interface.ChatFilterWnd.InitTabOrder
struct UChatFilterWnd_InitTabOrder_Params
{
};

// Function Interface.ChatFilterWnd.OnLoad
struct UChatFilterWnd_OnLoad_Params
{
};

// Function Interface.OptionWnd.LoadGameOption
struct UOptionWnd_LoadGameOption_Params
{
};

// Function Interface.OptionWnd.LoadAudioOption
struct UOptionWnd_LoadAudioOption_Params
{
};

// Function Interface.OptionWnd.LoadVideoOption
struct UOptionWnd_LoadVideoOption_Params
{
};

// Function Interface.OptionWnd.SetTutorialData
struct UOptionWnd_SetTutorialData_Params
{
	bool                                               bOption;                                                  // (Parm)
};

// Function Interface.OptionWnd.OnTimer
struct UOptionWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.OptionWnd.SetStuck
struct UOptionWnd_SetStuck_Params
{
	bool                                               A;                                                        // (Parm)
};

// Function Interface.OptionWnd.OnDefaultPosition
struct UOptionWnd_OnDefaultPosition_Params
{
};

// Function Interface.OptionWnd.OnModifyCurrentTickSliderCtrl
struct UOptionWnd_OnModifyCurrentTickSliderCtrl_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                iCurrentTick;                                             // (Parm)
};

// Function Interface.OptionWnd.OnComboBoxItemSelected
struct UOptionWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.OptionWnd.OnEvent
struct UOptionWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.OptionWnd.MinFrameRateOff
struct UOptionWnd_MinFrameRateOff_Params
{
};

// Function Interface.OptionWnd.MinFrameRateOn
struct UOptionWnd_MinFrameRateOn_Params
{
};

// Function Interface.OptionWnd.AirStateOff
struct UOptionWnd_AirStateOff_Params
{
};

// Function Interface.OptionWnd.AirStateOn
struct UOptionWnd_AirStateOn_Params
{
};

// Function Interface.OptionWnd.GetVolumeFromSliderTick
struct UOptionWnd_GetVolumeFromSliderTick_Params
{
	int                                                iTick;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.OptionWnd.OnClickButton
struct UOptionWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OptionWnd.ApplyGameOption
struct UOptionWnd_ApplyGameOption_Params
{
};

// Function Interface.OptionWnd.ApplyAudioOption
struct UOptionWnd_ApplyAudioOption_Params
{
};

// Function Interface.OptionWnd.ApplyVideoOption
struct UOptionWnd_ApplyVideoOption_Params
{
};

// Function Interface.OptionWnd.OnHide
struct UOptionWnd_OnHide_Params
{
};

// Function Interface.OptionWnd.OnShow
struct UOptionWnd_OnShow_Params
{
};

// Function Interface.OptionWnd.OnClickCheckBox
struct UOptionWnd_OnClickCheckBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OptionWnd.InitGameOption
struct UOptionWnd_InitGameOption_Params
{
};

// Function Interface.OptionWnd.InitAudioOption
struct UOptionWnd_InitAudioOption_Params
{
};

// Function Interface.OptionWnd.InitVideoOption
struct UOptionWnd_InitVideoOption_Params
{
};

// Function Interface.OptionWnd.GetPawnValue
struct UOptionWnd_GetPawnValue_Params
{
	int                                                iCurrTick;                                                // (Parm, OutParm)
	int                                                iNumTick;                                                 // (Parm)
	int                                                Min;                                                      // (Parm)
	int                                                Max;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.OptionWnd.RefreshLootingBox
struct UOptionWnd_RefreshLootingBox_Params
{
};

// Function Interface.OptionWnd.OnLoad
struct UOptionWnd_OnLoad_Params
{
};

// Function Interface.OptionWnd.InitHandleCOD
struct UOptionWnd_InitHandleCOD_Params
{
};

// Function Interface.OptionWnd.InitHandle
struct UOptionWnd_InitHandle_Params
{
};

// Function Interface.OptionWnd.OnRegisterEvent
struct UOptionWnd_OnRegisterEvent_Params
{
};

// Function Interface.OptionWnd.ResetRefreshRate
struct UOptionWnd_ResetRefreshRate_Params
{
	int                                                a_nWidth;                                                 // (OptionalParm, Parm)
	int                                                a_nHeight;                                                // (OptionalParm, Parm)
};

// Function Interface.PremiumItemGetWnd.clearInfo
struct UPremiumItemGetWnd_clearInfo_Params
{
};

// Function Interface.PremiumItemGetWnd.AddPremiumListItem
struct UPremiumItemGetWnd_AddPremiumListItem_Params
{
	int                                                iGift;                                                    // (Parm)
	int                                                iItemClassID;                                             // (Parm)
	struct FINT64                                      iItemAmount;                                              // (Parm)
	struct FString                                     senderCharacter;                                          // (Parm, NeedCtorLink)
	int                                                iIndexID;                                                 // (Parm)
};

// Function Interface.PremiumItemGetWnd.HandlePremiumItemList
struct UPremiumItemGetWnd_HandlePremiumItemList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemGetWnd.OnEvent
struct UPremiumItemGetWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemGetWnd.OnClickButton
struct UPremiumItemGetWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemGetWnd.createTreeRoot
struct UPremiumItemGetWnd_createTreeRoot_Params
{
};

// Function Interface.PremiumItemGetWnd.Clear
struct UPremiumItemGetWnd_Clear_Params
{
};

// Function Interface.PremiumItemGetWnd.OnLoad
struct UPremiumItemGetWnd_OnLoad_Params
{
};

// Function Interface.PremiumItemGetWnd.OnRegisterEvent
struct UPremiumItemGetWnd_OnRegisterEvent_Params
{
};

// Function Interface.PARTYWND.ResetVName
struct UPARTYWND_ResetVName_Params
{
};

// Function Interface.PARTYWND.OnDropWnd
struct UPARTYWND_OnDropWnd_Params
{
	class UWindowHandle*                               hTarget;                                                  // (Parm)
	class UWindowHandle*                               hDropWnd;                                                 // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PARTYWND.SetBuffButtonTooltip
struct UPARTYWND_SetBuffButtonTooltip_Params
{
};

// Function Interface.PARTYWND.GetIdx
struct UPARTYWND_GetIdx_Params
{
	int                                                Y;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PARTYWND.OnRButtonDown
struct UPARTYWND_OnRButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PARTYWND.OnLButtonDown
struct UPARTYWND_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PARTYWND.UpdateMPBar
struct UPARTYWND_UpdateMPBar_Params
{
	int                                                idx;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.PARTYWND.UpdateHPBar
struct UPARTYWND_UpdateHPBar_Params
{
	int                                                idx;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.PARTYWND.UpdateCPBar
struct UPARTYWND_UpdateCPBar_Params
{
	int                                                idx;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.PARTYWND.UpdateBuff
struct UPARTYWND_UpdateBuff_Params
{
};

// Function Interface.PARTYWND.OnBuffButton
struct UPARTYWND_OnBuffButton_Params
{
};

// Function Interface.PARTYWND.OnOpenPartyWndOption
struct UPARTYWND_OnOpenPartyWndOption_Params
{
};

// Function Interface.PARTYWND.OnClickButton
struct UPARTYWND_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandleShowBuffIcon
struct UPARTYWND_HandleShowBuffIcon_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartySpelledList
struct UPARTYWND_HandlePartySpelledList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.UpdatePetStatus
struct UPARTYWND_UpdatePetStatus_Params
{
	int                                                idx;                                                      // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartySummonDelete
struct UPARTYWND_HandlePartySummonDelete_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartySummonUpdate
struct UPARTYWND_HandlePartySummonUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartySummonAdd
struct UPARTYWND_HandlePartySummonAdd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.UpdateStatus
struct UPARTYWND_UpdateStatus_Params
{
	int                                                idx;                                                      // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartyDeleteAllParty
struct UPARTYWND_HandlePartyDeleteAllParty_Params
{
};

// Function Interface.PARTYWND.HandlePartyDeleteParty
struct UPARTYWND_HandlePartyDeleteParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartyUpdateParty
struct UPARTYWND_HandlePartyUpdateParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.HandlePartyAddParty
struct UPARTYWND_HandlePartyAddParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.FindPetID
struct UPARTYWND_FindPetID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PARTYWND.FindPartyID
struct UPARTYWND_FindPartyID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PARTYWND.ResizeWnd
struct UPARTYWND_ResizeWnd_Params
{
};

// Function Interface.PARTYWND.CopyStatus
struct UPARTYWND_CopyStatus_Params
{
	int                                                DesIndex;                                                 // (Parm)
	int                                                SrcIndex;                                                 // (Parm)
};

// Function Interface.PARTYWND.ClearPetStatus
struct UPARTYWND_ClearPetStatus_Params
{
	int                                                idx;                                                      // (Parm)
};

// Function Interface.PARTYWND.ClearStatus
struct UPARTYWND_ClearStatus_Params
{
	int                                                idx;                                                      // (Parm)
};

// Function Interface.PARTYWND.Clear
struct UPARTYWND_Clear_Params
{
};

// Function Interface.PARTYWND.HandleRestart
struct UPARTYWND_HandleRestart_Params
{
};

// Function Interface.PARTYWND.HandleCheckTarget
struct UPARTYWND_HandleCheckTarget_Params
{
};

// Function Interface.PARTYWND.HandlePartyRenameMember
struct UPARTYWND_HandlePartyRenameMember_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.OnEvent
struct UPARTYWND_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PARTYWND.OnEnterState
struct UPARTYWND_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.PARTYWND.OnHide
struct UPARTYWND_OnHide_Params
{
};

// Function Interface.PARTYWND.OnShow
struct UPARTYWND_OnShow_Params
{
};

// Function Interface.PARTYWND.InitHandleCOD
struct UPARTYWND_InitHandleCOD_Params
{
};

// Function Interface.PARTYWND.InitHandle
struct UPARTYWND_InitHandle_Params
{
};

// Function Interface.PARTYWND.OnLoad
struct UPARTYWND_OnLoad_Params
{
};

// Function Interface.PARTYWND.OnRegisterEvent
struct UPARTYWND_OnRegisterEvent_Params
{
};

// Function Interface.ColorNickNameWnd.OnClickButton
struct UColorNickNameWnd_OnClickButton_Params
{
	struct FString                                     ButtonName;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ColorNickNameWnd.OnComboBoxItemSelected
struct UColorNickNameWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     ComboboxName;                                             // (Parm, NeedCtorLink)
	int                                                Id;                                                       // (Parm)
};

// Function Interface.ColorNickNameWnd.OnOpenWnd
struct UColorNickNameWnd_OnOpenWnd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ColorNickNameWnd.OnEvent
struct UColorNickNameWnd_OnEvent_Params
{
	int                                                EventID;                                                  // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ColorNickNameWnd.OnChangeEditBox
struct UColorNickNameWnd_OnChangeEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ColorNickNameWnd.OnLoad
struct UColorNickNameWnd_OnLoad_Params
{
};

// Function Interface.ColorNickNameWnd.OnRegisterEvent
struct UColorNickNameWnd_OnRegisterEvent_Params
{
};

// Function Interface.ItemEnchantWnd.HandleEnchantResult
struct UItemEnchantWnd_HandleEnchantResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemEnchantWnd.HandletPutSupportItemResult
struct UItemEnchantWnd_HandletPutSupportItemResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemEnchantWnd.CheckScrollType
struct UItemEnchantWnd_CheckScrollType_Params
{
	int                                                Id;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ItemEnchantWnd.HandlePutTargetItemResult
struct UItemEnchantWnd_HandlePutTargetItemResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemEnchantWnd.OnDropItem
struct UItemEnchantWnd_OnDropItem_Params
{
	struct FString                                     a_WindowID;                                               // (Parm, NeedCtorLink)
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.ItemEnchantWnd.OnHide
struct UItemEnchantWnd_OnHide_Params
{
};

// Function Interface.ItemEnchantWnd.EnableCloverSlot
struct UItemEnchantWnd_EnableCloverSlot_Params
{
};

// Function Interface.ItemEnchantWnd.ResetUI
struct UItemEnchantWnd_ResetUI_Params
{
};

// Function Interface.ItemEnchantWnd.HandleEnchantShow
struct UItemEnchantWnd_HandleEnchantShow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemEnchantWnd.OnTextureAnimEnd
struct UItemEnchantWnd_OnTextureAnimEnd_Params
{
	class UAnimTextureHandle*                          a_WindowHandle;                                           // (Parm)
};

// Function Interface.ItemEnchantWnd.ProcCancel
struct UItemEnchantWnd_ProcCancel_Params
{
};

// Function Interface.ItemEnchantWnd.OnEnchantBtnClick
struct UItemEnchantWnd_OnEnchantBtnClick_Params
{
};

// Function Interface.ItemEnchantWnd.OnEvent
struct UItemEnchantWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemEnchantWnd.OnClickButton
struct UItemEnchantWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ItemEnchantWnd.Load
struct UItemEnchantWnd_Load_Params
{
};

// Function Interface.ItemEnchantWnd.OnRegisterEvent
struct UItemEnchantWnd_OnRegisterEvent_Params
{
};

// Function Interface.ItemEnchantWnd.Initialize
struct UItemEnchantWnd_Initialize_Params
{
};

// Function Interface.ItemEnchantWnd.OnLoad
struct UItemEnchantWnd_OnLoad_Params
{
};

// Function Interface.MultiSellWnd.HandleDialogOK
struct UMultiSellWnd_HandleDialogOK_Params
{
};

// Function Interface.MultiSellWnd.HandleOKButton
struct UMultiSellWnd_HandleOKButton_Params
{
};

// Function Interface.MultiSellWnd.ShowItemList
struct UMultiSellWnd_ShowItemList_Params
{
};

// Function Interface.MultiSellWnd.HandleMultiSellInfoListEnd
struct UMultiSellWnd_HandleMultiSellInfoListEnd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.HandelMultiSellInputItemInfo
struct UMultiSellWnd_HandelMultiSellInputItemInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.HandelMultiSellOutputItemInfo
struct UMultiSellWnd_HandelMultiSellOutputItemInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.HandleMultiSellResultItemInfo
struct UMultiSellWnd_HandleMultiSellResultItemInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.HandleMultiSellInfoListBegin
struct UMultiSellWnd_HandleMultiSellInfoListBegin_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.Clear
struct UMultiSellWnd_Clear_Params
{
};

// Function Interface.MultiSellWnd.Print
struct UMultiSellWnd_Print_Params
{
};

// Function Interface.MultiSellWnd.OnClickItem
struct UMultiSellWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.MultiSellWnd.OnClickButton
struct UMultiSellWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.OnHide
struct UMultiSellWnd_OnHide_Params
{
};

// Function Interface.MultiSellWnd.OnShow
struct UMultiSellWnd_OnShow_Params
{
};

// Function Interface.MultiSellWnd.OnEvent
struct UMultiSellWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MultiSellWnd.OnLoad
struct UMultiSellWnd_OnLoad_Params
{
};

// Function Interface.MultiSellWnd.OnRegisterEvent
struct UMultiSellWnd_OnRegisterEvent_Params
{
};

// Function Interface.TargetStatusWnd.IsNoBarID
struct UTargetStatusWnd_IsNoBarID_Params
{
	int                                                m_targetID;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.TargetStatusWnd.IsAllWhiteID
struct UTargetStatusWnd_IsAllWhiteID_Params
{
	int                                                m_targetID;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.TargetStatusWnd.SetNpcInfoTooltip
struct UTargetStatusWnd_SetNpcInfoTooltip_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Level;                                                    // (Parm)
	struct FCustomTooltip                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.TargetStatusWnd.UpdateNpcInfoTree
struct UTargetStatusWnd_UpdateNpcInfoTree_Params
{
	TArray<int>                                        arrNpcInfo;                                               // (Parm, NeedCtorLink)
};

// Function Interface.TargetStatusWnd.UpdateMPBar
struct UTargetStatusWnd_UpdateMPBar_Params
{
	int                                                MP;                                                       // (Parm)
	int                                                MaxMP;                                                    // (Parm)
};

// Function Interface.TargetStatusWnd.UpdateHPBar
struct UTargetStatusWnd_UpdateHPBar_Params
{
	int                                                HP;                                                       // (Parm)
	int                                                MaxHP;                                                    // (Parm)
};

// Function Interface.TargetStatusWnd.SetExpandMode
struct UTargetStatusWnd_SetExpandMode_Params
{
	bool                                               bExpand;                                                  // (Parm)
};

// Function Interface.TargetStatusWnd.GetTargetNameColor
struct UTargetStatusWnd_GetTargetNameColor_Params
{
	int                                                TargetLevelDiff;                                          // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.TargetStatusWnd.HandleTargetUpdate
struct UTargetStatusWnd_HandleTargetUpdate_Params
{
};

// Function Interface.TargetStatusWnd.HandleTargetUpdateGauge
struct UTargetStatusWnd_HandleTargetUpdateGauge_Params
{
	int                                                type;                                                     // (Parm)
};

// Function Interface.TargetStatusWnd.HandleReceiveTargetLevelDiff
struct UTargetStatusWnd_HandleReceiveTargetLevelDiff_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TargetStatusWnd.HandleUpdateGauge
struct UTargetStatusWnd_HandleUpdateGauge_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	int                                                type;                                                     // (Parm)
};

// Function Interface.TargetStatusWnd.OnCloseButton
struct UTargetStatusWnd_OnCloseButton_Params
{
};

// Function Interface.TargetStatusWnd.OnClickButton
struct UTargetStatusWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TargetStatusWnd.OnEvent
struct UTargetStatusWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TargetStatusWnd.OnEnterState
struct UTargetStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.TargetStatusWnd.OnHide
struct UTargetStatusWnd_OnHide_Params
{
};

// Function Interface.TargetStatusWnd.OnShow
struct UTargetStatusWnd_OnShow_Params
{
};

// Function Interface.TargetStatusWnd.OnTimer
struct UTargetStatusWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.TargetStatusWnd.OnRotateReset
struct UTargetStatusWnd_OnRotateReset_Params
{
};

// Function Interface.TargetStatusWnd.OnRotateClose
struct UTargetStatusWnd_OnRotateClose_Params
{
};

// Function Interface.TargetStatusWnd.OnRotate2
struct UTargetStatusWnd_OnRotate2_Params
{
};

// Function Interface.TargetStatusWnd.OnRotate1
struct UTargetStatusWnd_OnRotate1_Params
{
};

// Function Interface.TargetStatusWnd.OnShowProcess
struct UTargetStatusWnd_OnShowProcess_Params
{
};

// Function Interface.TargetStatusWnd.Load
struct UTargetStatusWnd_Load_Params
{
};

// Function Interface.TargetStatusWnd.InitializeCOD
struct UTargetStatusWnd_InitializeCOD_Params
{
};

// Function Interface.TargetStatusWnd.Initialize
struct UTargetStatusWnd_Initialize_Params
{
};

// Function Interface.TargetStatusWnd.OnLoad
struct UTargetStatusWnd_OnLoad_Params
{
};

// Function Interface.TargetStatusWnd.OnRegisterEvent
struct UTargetStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyMatchMakeRoomWnd.SetMaxPartyMemberCount
struct UPartyMatchMakeRoomWnd_SetMaxPartyMemberCount_Params
{
	int                                                a_MaxPartyMemberCount;                                    // (Parm)
};

// Function Interface.PartyMatchMakeRoomWnd.SetMaxLevel
struct UPartyMatchMakeRoomWnd_SetMaxLevel_Params
{
	int                                                a_MaxLevel;                                               // (Parm)
};

// Function Interface.PartyMatchMakeRoomWnd.SetMinLevel
struct UPartyMatchMakeRoomWnd_SetMinLevel_Params
{
	int                                                a_MinLevel;                                               // (Parm)
};

// Function Interface.PartyMatchMakeRoomWnd.SetTitle
struct UPartyMatchMakeRoomWnd_SetTitle_Params
{
	struct FString                                     a_Title;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchMakeRoomWnd.SetRoomNumber
struct UPartyMatchMakeRoomWnd_SetRoomNumber_Params
{
	int                                                a_RoomNumber;                                             // (Parm)
};

// Function Interface.PartyMatchMakeRoomWnd.OnCancelButtonClick
struct UPartyMatchMakeRoomWnd_OnCancelButtonClick_Params
{
};

// Function Interface.PartyMatchMakeRoomWnd.OnOKButtonClick
struct UPartyMatchMakeRoomWnd_OnOKButtonClick_Params
{
};

// Function Interface.PartyMatchMakeRoomWnd.OnClickButton
struct UPartyMatchMakeRoomWnd_OnClickButton_Params
{
	struct FString                                     a_strButtonName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchMakeRoomWnd.OnShow
struct UPartyMatchMakeRoomWnd_OnShow_Params
{
};

// Function Interface.PartyMatchMakeRoomWnd.OnLoad
struct UPartyMatchMakeRoomWnd_OnLoad_Params
{
};

// Function Interface.ClanDrawerWnd.GetClanTypeFromIndex
struct UClanDrawerWnd_GetClanTypeFromIndex_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanDrawerWnd.SetTooltip
struct UClanDrawerWnd_SetTooltip_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FCustomTooltip                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.getCurrentGradebyClanType
struct UClanDrawerWnd_getCurrentGradebyClanType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanDrawerWnd.resetAcademyAuth
struct UClanDrawerWnd_resetAcademyAuth_Params
{
};

// Function Interface.ClanDrawerWnd.disableAcademyAuth
struct UClanDrawerWnd_disableAcademyAuth_Params
{
};

// Function Interface.ClanDrawerWnd.reset_clan_org
struct UClanDrawerWnd_reset_clan_org_Params
{
};

// Function Interface.ClanDrawerWnd.getClanOrderString
struct UClanDrawerWnd_getClanOrderString_Params
{
	int                                                gradeID;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.ReplaceSkill
struct UClanDrawerWnd_ReplaceSkill_Params
{
	int                                                Index;                                                    // (Parm)
	struct FItemID                                     cID;                                                      // (Parm)
	int                                                Level;                                                    // (Parm)
};

// Function Interface.ClanDrawerWnd.AddSkill
struct UClanDrawerWnd_AddSkill_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	int                                                Level;                                                    // (Parm)
};

// Function Interface.ClanDrawerWnd.GetWarStateString
struct UClanDrawerWnd_GetWarStateString_Params
{
	int                                                State;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.EditAuthGrade2
struct UClanDrawerWnd_EditAuthGrade2_Params
{
};

// Function Interface.ClanDrawerWnd.EditAuthGrade
struct UClanDrawerWnd_EditAuthGrade_Params
{
};

// Function Interface.ClanDrawerWnd.ApplyEditGrade
struct UClanDrawerWnd_ApplyEditGrade_Params
{
};

// Function Interface.ClanDrawerWnd.HideClanWindow
struct UClanDrawerWnd_HideClanWindow_Params
{
};

// Function Interface.ClanDrawerWnd.OnComboBoxItemSelected
struct UClanDrawerWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ClanDrawerWnd.proc_swapmember
struct UClanDrawerWnd_proc_swapmember_Params
{
};

// Function Interface.ClanDrawerWnd.swapTargetSelect
struct UClanDrawerWnd_swapTargetSelect_Params
{
	int                                                clanNo;                                                   // (Parm)
};

// Function Interface.ClanDrawerWnd.KnighthoodCombobox
struct UClanDrawerWnd_KnighthoodCombobox_Params
{
};

// Function Interface.ClanDrawerWnd.InitializeGradeComboBox
struct UClanDrawerWnd_InitializeGradeComboBox_Params
{
};

// Function Interface.ClanDrawerWnd.InitializeClanInfoWnd
struct UClanDrawerWnd_InitializeClanInfoWnd_Params
{
};

// Function Interface.ClanDrawerWnd.InitializeClan1_AssignApprenticeList
struct UClanDrawerWnd_InitializeClan1_AssignApprenticeList_Params
{
};

// Function Interface.ClanDrawerWnd.InitializeAcademyList
struct UClanDrawerWnd_InitializeAcademyList_Params
{
};

// Function Interface.ClanDrawerWnd.GetStringByGradeID
struct UClanDrawerWnd_GetStringByGradeID_Params
{
	int                                                gradeID;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleClearWarList
struct UClanDrawerWnd_HandleClearWarList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleClanAuthMember
struct UClanDrawerWnd_HandleClanAuthMember_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleClanAuth
struct UClanDrawerWnd_HandleClanAuth_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleCancelWar2
struct UClanDrawerWnd_HandleCancelWar2_Params
{
};

// Function Interface.ClanDrawerWnd.HandleDeclareWar
struct UClanDrawerWnd_HandleDeclareWar_Params
{
};

// Function Interface.ClanDrawerWnd.HandleCancelWar1
struct UClanDrawerWnd_HandleCancelWar1_Params
{
};

// Function Interface.ClanDrawerWnd.HandleSkillList
struct UClanDrawerWnd_HandleSkillList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleCrestChange
struct UClanDrawerWnd_HandleCrestChange_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.Proc_AuthValidation
struct UClanDrawerWnd_Proc_AuthValidation_Params
{
};

// Function Interface.ClanDrawerWnd.CheckandCompareMyNameandDisableThings
struct UClanDrawerWnd_CheckandCompareMyNameandDisableThings_Params
{
};

// Function Interface.ClanDrawerWnd.HandleClanMemberInfo
struct UClanDrawerWnd_HandleClanMemberInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleClanWarList
struct UClanDrawerWnd_HandleClanWarList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HandleClanAuthGradeList
struct UClanDrawerWnd_HandleClanAuthGradeList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.OnEvent
struct UClanDrawerWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.count_all_check2
struct UClanDrawerWnd_count_all_check2_Params
{
	struct FString                                     numString;                                                // (Parm, NeedCtorLink)
	int                                                TotalNum;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanDrawerWnd.count_all_check
struct UClanDrawerWnd_count_all_check_Params
{
	struct FString                                     numString;                                                // (Parm, NeedCtorLink)
	int                                                TotalNum;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ClanDrawerWnd.OnClickCheckBox
struct UClanDrawerWnd_OnClickCheckBox_Params
{
	struct FString                                     CheckBoxID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.RecallCurrentMemberInfo
struct UClanDrawerWnd_RecallCurrentMemberInfo_Params
{
};

// Function Interface.ClanDrawerWnd.OnDBClickListCtrlRecord
struct UClanDrawerWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     ListCtrlID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.OnClickButton
struct UClanDrawerWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.HideAll
struct UClanDrawerWnd_HideAll_Params
{
};

// Function Interface.ClanDrawerWnd.SetStateAndShow
struct UClanDrawerWnd_SetStateAndShow_Params
{
	struct FString                                     State;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ClanDrawerWnd.Clear
struct UClanDrawerWnd_Clear_Params
{
};

// Function Interface.ClanDrawerWnd.OnShow
struct UClanDrawerWnd_OnShow_Params
{
};

// Function Interface.ClanDrawerWnd.InitHandle
struct UClanDrawerWnd_InitHandle_Params
{
};

// Function Interface.ClanDrawerWnd.OnLoad
struct UClanDrawerWnd_OnLoad_Params
{
};

// Function Interface.ClanDrawerWnd.OnRegisterEvent
struct UClanDrawerWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyWndCompact.ResetVName
struct UPartyWndCompact_ResetVName_Params
{
};

// Function Interface.PartyWndCompact.OnDropWnd
struct UPartyWndCompact_OnDropWnd_Params
{
	class UWindowHandle*                               hTarget;                                                  // (Parm)
	class UWindowHandle*                               hDropWnd;                                                 // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PartyWndCompact.SetBuffButtonTooltip
struct UPartyWndCompact_SetBuffButtonTooltip_Params
{
};

// Function Interface.PartyWndCompact.GetIdx
struct UPartyWndCompact_GetIdx_Params
{
	int                                                Y;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PartyWndCompact.OnRButtonDown
struct UPartyWndCompact_OnRButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PartyWndCompact.OnLButtonDown
struct UPartyWndCompact_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PartyWndCompact.UpdateMPBar
struct UPartyWndCompact_UpdateMPBar_Params
{
	int                                                idx;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.PartyWndCompact.UpdateHPBar
struct UPartyWndCompact_UpdateHPBar_Params
{
	int                                                idx;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.PartyWndCompact.UpdateCPBar
struct UPartyWndCompact_UpdateCPBar_Params
{
	int                                                idx;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                MaxValue;                                                 // (Parm)
};

// Function Interface.PartyWndCompact.UpdateBuff
struct UPartyWndCompact_UpdateBuff_Params
{
};

// Function Interface.PartyWndCompact.OnBuffButton
struct UPartyWndCompact_OnBuffButton_Params
{
};

// Function Interface.PartyWndCompact.OnOpenPartyWndOption
struct UPartyWndCompact_OnOpenPartyWndOption_Params
{
};

// Function Interface.PartyWndCompact.OnClickButton
struct UPartyWndCompact_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandleShowBuffIcon
struct UPartyWndCompact_HandleShowBuffIcon_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartySpelledList
struct UPartyWndCompact_HandlePartySpelledList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.UpdatePetStatus
struct UPartyWndCompact_UpdatePetStatus_Params
{
	int                                                idx;                                                      // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartySummonDelete
struct UPartyWndCompact_HandlePartySummonDelete_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartySummonUpdate
struct UPartyWndCompact_HandlePartySummonUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartySummonAdd
struct UPartyWndCompact_HandlePartySummonAdd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.UpdateStatus
struct UPartyWndCompact_UpdateStatus_Params
{
	int                                                idx;                                                      // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartyDeleteAllParty
struct UPartyWndCompact_HandlePartyDeleteAllParty_Params
{
};

// Function Interface.PartyWndCompact.HandlePartyDeleteParty
struct UPartyWndCompact_HandlePartyDeleteParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartyUpdateParty
struct UPartyWndCompact_HandlePartyUpdateParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.HandlePartyAddParty
struct UPartyWndCompact_HandlePartyAddParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.FindPetID
struct UPartyWndCompact_FindPetID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PartyWndCompact.FindPartyID
struct UPartyWndCompact_FindPartyID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PartyWndCompact.ResizeWnd
struct UPartyWndCompact_ResizeWnd_Params
{
};

// Function Interface.PartyWndCompact.CopyStatus
struct UPartyWndCompact_CopyStatus_Params
{
	int                                                DesIndex;                                                 // (Parm)
	int                                                SrcIndex;                                                 // (Parm)
};

// Function Interface.PartyWndCompact.ClearPetStatus
struct UPartyWndCompact_ClearPetStatus_Params
{
	int                                                idx;                                                      // (Parm)
};

// Function Interface.PartyWndCompact.ClearStatus
struct UPartyWndCompact_ClearStatus_Params
{
	int                                                idx;                                                      // (Parm)
};

// Function Interface.PartyWndCompact.Clear
struct UPartyWndCompact_Clear_Params
{
};

// Function Interface.PartyWndCompact.HandleRestart
struct UPartyWndCompact_HandleRestart_Params
{
};

// Function Interface.PartyWndCompact.HandlePartyRenameMember
struct UPartyWndCompact_HandlePartyRenameMember_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.OnEvent
struct UPartyWndCompact_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndCompact.OnEnterState
struct UPartyWndCompact_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.PartyWndCompact.OnShow
struct UPartyWndCompact_OnShow_Params
{
};

// Function Interface.PartyWndCompact.InitHandleCOD
struct UPartyWndCompact_InitHandleCOD_Params
{
};

// Function Interface.PartyWndCompact.InitHandle
struct UPartyWndCompact_InitHandle_Params
{
};

// Function Interface.PartyWndCompact.OnHide
struct UPartyWndCompact_OnHide_Params
{
};

// Function Interface.PartyWndCompact.OnLoad
struct UPartyWndCompact_OnLoad_Params
{
};

// Function Interface.PartyWndCompact.OnRegisterEvent
struct UPartyWndCompact_OnRegisterEvent_Params
{
};

// Function Interface.HeroTowerWnd.HandleHeroShowList
struct UHeroTowerWnd_HandleHeroShowList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HeroTowerWnd.Clear
struct UHeroTowerWnd_Clear_Params
{
};

// Function Interface.HeroTowerWnd.HandleCheckAmIHero
struct UHeroTowerWnd_HandleCheckAmIHero_Params
{
};

// Function Interface.HeroTowerWnd.HandleShowHistory
struct UHeroTowerWnd_HandleShowHistory_Params
{
};

// Function Interface.HeroTowerWnd.HandleShowDiary
struct UHeroTowerWnd_HandleShowDiary_Params
{
};

// Function Interface.HeroTowerWnd.OnClickButton
struct UHeroTowerWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HeroTowerWnd.OnDBClickListCtrlRecord
struct UHeroTowerWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HeroTowerWnd.OnEvent
struct UHeroTowerWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HeroTowerWnd.OnLoad
struct UHeroTowerWnd_OnLoad_Params
{
};

// Function Interface.HeroTowerWnd.OnRegisterEvent
struct UHeroTowerWnd_OnRegisterEvent_Params
{
};

// Function Interface.ShortcutWnd.HandleExpandButton
struct UShortcutWnd_HandleExpandButton_Params
{
};

// Function Interface.ShortcutWnd.ExecuteShortcutCommandBySlot
struct UShortcutWnd_ExecuteShortcutCommandBySlot_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.OnClickExpandShortcutButton
struct UShortcutWnd_OnClickExpandShortcutButton_Params
{
};

// Function Interface.ShortcutWnd.Reduce
struct UShortcutWnd_Reduce_Params
{
};

// Function Interface.ShortcutWnd.Expand2
struct UShortcutWnd_Expand2_Params
{
};

// Function Interface.ShortcutWnd.Expand1
struct UShortcutWnd_Expand1_Params
{
};

// Function Interface.ShortcutWnd.ExpandWnd
struct UShortcutWnd_ExpandWnd_Params
{
};

// Function Interface.ShortcutWnd.ArrangeWnd
struct UShortcutWnd_ArrangeWnd_Params
{
};

// Function Interface.ShortcutWnd.SetJoypadExpand
struct UShortcutWnd_SetJoypadExpand_Params
{
	bool                                               a_IsJoypadExpand;                                         // (Parm)
};

// Function Interface.ShortcutWnd.SetJoypad
struct UShortcutWnd_SetJoypad_Params
{
	bool                                               a_IsJoypad;                                               // (Parm)
};

// Function Interface.ShortcutWnd.SetVertical
struct UShortcutWnd_SetVertical_Params
{
	bool                                               a_IsVertical;                                             // (Parm)
};

// Function Interface.ShortcutWnd.UnLock
struct UShortcutWnd_UnLock_Params
{
};

// Function Interface.ShortcutWnd.Lock
struct UShortcutWnd_Lock_Params
{
};

// Function Interface.ShortcutWnd.IsShortcutIDInCurPage
struct UShortcutWnd_IsShortcutIDInCurPage_Params
{
	int                                                PageNum;                                                  // (Parm)
	int                                                a_nShortcutID;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ShortcutWnd.SetCurPage3
struct UShortcutWnd_SetCurPage3_Params
{
	int                                                a_nCurPage;                                               // (Parm)
};

// Function Interface.ShortcutWnd.SetCurPage2
struct UShortcutWnd_SetCurPage2_Params
{
	int                                                a_nCurPage;                                               // (Parm)
};

// Function Interface.ShortcutWnd.SetCurPage
struct UShortcutWnd_SetCurPage_Params
{
	int                                                a_nCurPage;                                               // (Parm)
};

// Function Interface.ShortcutWnd.OnExpandBtn
struct UShortcutWnd_OnExpandBtn_Params
{
};

// Function Interface.ShortcutWnd.OnJoypadBtn
struct UShortcutWnd_OnJoypadBtn_Params
{
};

// Function Interface.ShortcutWnd.OnRotateBtn
struct UShortcutWnd_OnRotateBtn_Params
{
};

// Function Interface.ShortcutWnd.OnClickUnlockBtn
struct UShortcutWnd_OnClickUnlockBtn_Params
{
};

// Function Interface.ShortcutWnd.OnClickLockBtn
struct UShortcutWnd_OnClickLockBtn_Params
{
};

// Function Interface.ShortcutWnd.OnNextBtn3
struct UShortcutWnd_OnNextBtn3_Params
{
};

// Function Interface.ShortcutWnd.OnNextBtn2
struct UShortcutWnd_OnNextBtn2_Params
{
};

// Function Interface.ShortcutWnd.OnNextBtn
struct UShortcutWnd_OnNextBtn_Params
{
};

// Function Interface.ShortcutWnd.OnPrevBtn3
struct UShortcutWnd_OnPrevBtn3_Params
{
};

// Function Interface.ShortcutWnd.OnPrevBtn2
struct UShortcutWnd_OnPrevBtn2_Params
{
};

// Function Interface.ShortcutWnd.OnPrevBtn
struct UShortcutWnd_OnPrevBtn_Params
{
};

// Function Interface.ShortcutWnd.OnClickButton
struct UShortcutWnd_OnClickButton_Params
{
	struct FString                                     a_strID;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.SetJoypadShortcut
struct UShortcutWnd_SetJoypadShortcut_Params
{
	TEnumAsByte<EJoyShortcut>                          a_JoyShortcut;                                            // (Parm)
};

// Function Interface.ShortcutWnd.HandleJoypadRButtonDown
struct UShortcutWnd_HandleJoypadRButtonDown_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.HandleJoypadRButtonUp
struct UShortcutWnd_HandleJoypadRButtonUp_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.HandleJoypadLButtonDown
struct UShortcutWnd_HandleJoypadLButtonDown_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.HandleJoypadLButtonUp
struct UShortcutWnd_HandleJoypadLButtonUp_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.HandleShortcutJoypad
struct UShortcutWnd_HandleShortcutJoypad_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.HandleShortcutClear
struct UShortcutWnd_HandleShortcutClear_Params
{
};

// Function Interface.ShortcutWnd.HandleShortcutUpdate
struct UShortcutWnd_HandleShortcutUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.HandleShortcutPageUpdate
struct UShortcutWnd_HandleShortcutPageUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.InitShortPageNum
struct UShortcutWnd_InitShortPageNum_Params
{
};

// Function Interface.ShortcutWnd.OnEvent
struct UShortcutWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShortcutWnd.OnEnterState
struct UShortcutWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.ShortcutWnd.OnDefaultPosition
struct UShortcutWnd_OnDefaultPosition_Params
{
};

// Function Interface.ShortcutWnd.OnLoad
struct UShortcutWnd_OnLoad_Params
{
};

// Function Interface.ShortcutWnd.OnRegisterEvent
struct UShortcutWnd_OnRegisterEvent_Params
{
};

// Function Interface.SiegeInfoWnd.ClearDefenseButton
struct USiegeInfoWnd_ClearDefenseButton_Params
{
};

// Function Interface.SiegeInfoWnd.ClearAttackButton
struct USiegeInfoWnd_ClearAttackButton_Params
{
};

// Function Interface.SiegeInfoWnd.ClearTimeCombo
struct USiegeInfoWnd_ClearTimeCombo_Params
{
};

// Function Interface.SiegeInfoWnd.UpdateDefenseButton
struct USiegeInfoWnd_UpdateDefenseButton_Params
{
};

// Function Interface.SiegeInfoWnd.UpdateAttackButton
struct USiegeInfoWnd_UpdateAttackButton_Params
{
};

// Function Interface.SiegeInfoWnd.UpdateTimeCombo
struct USiegeInfoWnd_UpdateTimeCombo_Params
{
};

// Function Interface.SiegeInfoWnd.UpdateDefenseCount
struct USiegeInfoWnd_UpdateDefenseCount_Params
{
};

// Function Interface.SiegeInfoWnd.UpdateAttackCount
struct USiegeInfoWnd_UpdateAttackCount_Params
{
};

// Function Interface.SiegeInfoWnd.HandleSiegeInfoSelectableTime
struct USiegeInfoWnd_HandleSiegeInfoSelectableTime_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.HandleSiegeInfoClanListEnd
struct USiegeInfoWnd_HandleSiegeInfoClanListEnd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.HandleSiegeInfoClanList
struct USiegeInfoWnd_HandleSiegeInfoClanList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.HandleSiegeInfoClanListStart
struct USiegeInfoWnd_HandleSiegeInfoClanListStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.HandleSiegeInfo
struct USiegeInfoWnd_HandleSiegeInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.OnTabCtrl2Click
struct USiegeInfoWnd_OnTabCtrl2Click_Params
{
};

// Function Interface.SiegeInfoWnd.OnTabCtrl1Click
struct USiegeInfoWnd_OnTabCtrl1Click_Params
{
};

// Function Interface.SiegeInfoWnd.OnTabCtrl0Click
struct USiegeInfoWnd_OnTabCtrl0Click_Params
{
};

// Function Interface.SiegeInfoWnd.OnDefenseConfirmClick
struct USiegeInfoWnd_OnDefenseConfirmClick_Params
{
};

// Function Interface.SiegeInfoWnd.OnDefenseRejectClick
struct USiegeInfoWnd_OnDefenseRejectClick_Params
{
};

// Function Interface.SiegeInfoWnd.OnDefenseCancelClick
struct USiegeInfoWnd_OnDefenseCancelClick_Params
{
};

// Function Interface.SiegeInfoWnd.OnDefenseApplyClick
struct USiegeInfoWnd_OnDefenseApplyClick_Params
{
};

// Function Interface.SiegeInfoWnd.OnAttackCancelClick
struct USiegeInfoWnd_OnAttackCancelClick_Params
{
};

// Function Interface.SiegeInfoWnd.OnAttackApplyClick
struct USiegeInfoWnd_OnAttackApplyClick_Params
{
};

// Function Interface.SiegeInfoWnd.OnClickButton
struct USiegeInfoWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.clearInfo
struct USiegeInfoWnd_clearInfo_Params
{
};

// Function Interface.SiegeInfoWnd.OnComboBoxItemSelected
struct USiegeInfoWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.SiegeInfoWnd.OnEvent
struct USiegeInfoWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SiegeInfoWnd.OnEnterState
struct USiegeInfoWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.SiegeInfoWnd.OnHide
struct USiegeInfoWnd_OnHide_Params
{
};

// Function Interface.SiegeInfoWnd.OnShow
struct USiegeInfoWnd_OnShow_Params
{
};

// Function Interface.SiegeInfoWnd.OnLoad
struct USiegeInfoWnd_OnLoad_Params
{
};

// Function Interface.SiegeInfoWnd.OnRegisterEvent
struct USiegeInfoWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyMatchWnd.IsShowWaitListWnd
struct UPartyMatchWnd_IsShowWaitListWnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PartyMatchWnd.ToggleWaitListWnd
struct UPartyMatchWnd_ToggleWaitListWnd_Params
{
};

// Function Interface.PartyMatchWnd.UpdateWaitListWnd
struct UPartyMatchWnd_UpdateWaitListWnd_Params
{
};

// Function Interface.PartyMatchWnd.ShowHideWaitListWnd
struct UPartyMatchWnd_ShowHideWaitListWnd_Params
{
};

// Function Interface.PartyMatchWnd.SetWaitListWnd
struct UPartyMatchWnd_SetWaitListWnd_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function Interface.PartyMatchWnd.GetLevelFilter
struct UPartyMatchWnd_GetLevelFilter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PartyMatchWnd.GetLocationFilter
struct UPartyMatchWnd_GetLocationFilter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PartyMatchWnd.OnAutoJoinBtnClick
struct UPartyMatchWnd_OnAutoJoinBtnClick_Params
{
};

// Function Interface.PartyMatchWnd.OnDBClickListCtrlRecord
struct UPartyMatchWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     a_ListCtrlName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWnd.OnMakeRoomBtnClick
struct UPartyMatchWnd_OnMakeRoomBtnClick_Params
{
};

// Function Interface.PartyMatchWnd.RequestPartyRoomListLocal
struct UPartyMatchWnd_RequestPartyRoomListLocal_Params
{
	int                                                a_Page;                                                   // (Parm)
};

// Function Interface.PartyMatchWnd.OnNextBtnClick
struct UPartyMatchWnd_OnNextBtnClick_Params
{
};

// Function Interface.PartyMatchWnd.OnPrevBtnClick
struct UPartyMatchWnd_OnPrevBtnClick_Params
{
};

// Function Interface.PartyMatchWnd.OnRefreshBtnClick
struct UPartyMatchWnd_OnRefreshBtnClick_Params
{
};

// Function Interface.PartyMatchWnd.OnWaitListButton
struct UPartyMatchWnd_OnWaitListButton_Params
{
};

// Function Interface.PartyMatchWnd.OnClickButton
struct UPartyMatchWnd_OnClickButton_Params
{
	struct FString                                     a_strButtonName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWnd.HandlePartyMatchList
struct UPartyMatchWnd_HandlePartyMatchList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWnd.OnButtonTimer
struct UPartyMatchWnd_OnButtonTimer_Params
{
	bool                                               bExpired;                                                 // (Parm)
};

// Function Interface.PartyMatchWnd.OnEvent
struct UPartyMatchWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWnd.OnHide
struct UPartyMatchWnd_OnHide_Params
{
};

// Function Interface.PartyMatchWnd.OnSendPacketWhenHiding
struct UPartyMatchWnd_OnSendPacketWhenHiding_Params
{
};

// Function Interface.PartyMatchWnd.OnShow
struct UPartyMatchWnd_OnShow_Params
{
};

// Function Interface.PartyMatchWnd.InitializeCOD
struct UPartyMatchWnd_InitializeCOD_Params
{
};

// Function Interface.PartyMatchWnd.Initialize
struct UPartyMatchWnd_Initialize_Params
{
};

// Function Interface.PartyMatchWnd.OnLoad
struct UPartyMatchWnd_OnLoad_Params
{
};

// Function Interface.PartyMatchWnd.OnRegisterEvent
struct UPartyMatchWnd_OnRegisterEvent_Params
{
};

// Function Interface.RadarMapWnd.IsHidePositionZone
struct URadarMapWnd_IsHidePositionZone_Params
{
	int                                                nZoneID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.IsHideRadarZone
struct URadarMapWnd_IsHideRadarZone_Params
{
	int                                                nZoneID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.LayerOfAltitude
struct URadarMapWnd_LayerOfAltitude_Params
{
	int                                                altitude;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.updateAltitudeTex
struct URadarMapWnd_updateAltitudeTex_Params
{
	int                                                altitude;                                                 // (Parm)
};

// Function Interface.RadarMapWnd.ShowAirShipTutorial
struct URadarMapWnd_ShowAirShipTutorial_Params
{
	int                                                SystemMsgID;                                              // (Parm)
};

// Function Interface.RadarMapWnd.OnAirShipAltitude
struct URadarMapWnd_OnAirShipAltitude_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.OnAirShipUpdate
struct URadarMapWnd_OnAirShipUpdate_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.OnAirShipState
struct URadarMapWnd_OnAirShipState_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.FlightGaugesClear
struct URadarMapWnd_FlightGaugesClear_Params
{
};

// Function Interface.RadarMapWnd.HandleZoneTitle
struct URadarMapWnd_HandleZoneTitle_Params
{
};

// Function Interface.RadarMapWnd.FindMonsterIDX
struct URadarMapWnd_FindMonsterIDX_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.FindPartyIDX
struct URadarMapWnd_FindPartyIDX_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.init_textboxmove
struct URadarMapWnd_init_textboxmove_Params
{
};

// Function Interface.RadarMapWnd.resetanimloc
struct URadarMapWnd_resetanimloc_Params
{
};

// Function Interface.RadarMapWnd.move_value
struct URadarMapWnd_move_value_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.FadeOut
struct URadarMapWnd_FadeOut_Params
{
};

// Function Interface.RadarMapWnd.FadeIn
struct URadarMapWnd_FadeIn_Params
{
};

// Function Interface.RadarMapWnd.OnTick
struct URadarMapWnd_OnTick_Params
{
};

// Function Interface.RadarMapWnd.SetRadarColor
struct URadarMapWnd_SetRadarColor_Params
{
	struct FColor                                      a_RadarColor;                                             // (Parm)
	float                                              a_Seconds;                                                // (Parm)
};

// Function Interface.RadarMapWnd.HandleRadarZoneCode
struct URadarMapWnd_HandleRadarZoneCode_Params
{
	int                                                type;                                                     // (Parm)
};

// Function Interface.RadarMapWnd.HandleFinishRotate
struct URadarMapWnd_HandleFinishRotate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.clickRotateButton
struct URadarMapWnd_clickRotateButton_Params
{
};

// Function Interface.RadarMapWnd.RotateProcess
struct URadarMapWnd_RotateProcess_Params
{
};

// Function Interface.RadarMapWnd.OnClickCheckBox
struct URadarMapWnd_OnClickCheckBox_Params
{
	struct FString                                     CheckBoxID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.OnClickButton
struct URadarMapWnd_OnClickButton_Params
{
	struct FString                                     a_ButtonID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.OnTimer
struct URadarMapWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.RadarMapWnd.findEmptyPartySlot
struct URadarMapWnd_findEmptyPartySlot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.findEmptyMonsterSlot
struct URadarMapWnd_findEmptyMonsterSlot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.ClearObject
struct URadarMapWnd_ClearObject_Params
{
};

// Function Interface.RadarMapWnd.HandleNotifyObject
struct URadarMapWnd_HandleNotifyObject_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.OptionApply
struct URadarMapWnd_OptionApply_Params
{
};

// Function Interface.RadarMapWnd.GetDistanceFromMe
struct URadarMapWnd_GetDistanceFromMe_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Z;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.RadarMapWnd.GetPartyLocation
struct URadarMapWnd_GetPartyLocation_Params
{
};

// Function Interface.RadarMapWnd.AddPartyObject
struct URadarMapWnd_AddPartyObject_Params
{
};

// Function Interface.RadarMapWnd.HandleOntimer
struct URadarMapWnd_HandleOntimer_Params
{
};

// Function Interface.RadarMapWnd.OnRButtonDown
struct URadarMapWnd_OnRButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.RadarMapWnd.HandleNotifyPartyMemberPosition
struct URadarMapWnd_HandleNotifyPartyMemberPosition_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.HandlePartyDeleteAllParty
struct URadarMapWnd_HandlePartyDeleteAllParty_Params
{
};

// Function Interface.RadarMapWnd.HandlePartyDeleteParty
struct URadarMapWnd_HandlePartyDeleteParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.HandlePartyAddParty
struct URadarMapWnd_HandlePartyAddParty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.HandleTargetHideWindow
struct URadarMapWnd_HandleTargetHideWindow_Params
{
};

// Function Interface.RadarMapWnd.HandleTargetUpdate
struct URadarMapWnd_HandleTargetUpdate_Params
{
};

// Function Interface.RadarMapWnd.OnEvent
struct URadarMapWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RadarMapWnd.CheckTimer
struct URadarMapWnd_CheckTimer_Params
{
};

// Function Interface.RadarMapWnd.OnShow
struct URadarMapWnd_OnShow_Params
{
};

// Function Interface.RadarMapWnd.InitDatas
struct URadarMapWnd_InitDatas_Params
{
};

// Function Interface.RadarMapWnd.OnLoad
struct URadarMapWnd_OnLoad_Params
{
};

// Function Interface.RadarMapWnd.OnRegisterEvent
struct URadarMapWnd_OnRegisterEvent_Params
{
};

// Function Interface.OlympiadPlayerWnd.Resize
struct UOlympiadPlayerWnd_Resize_Params
{
	int                                                Count;                                                    // (Parm)
};

// Function Interface.OlympiadPlayerWnd.SetExpandMode
struct UOlympiadPlayerWnd_SetExpandMode_Params
{
	bool                                               bExpand;                                                  // (Parm)
};

// Function Interface.OlympiadPlayerWnd.OnClickButton
struct UOlympiadPlayerWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadPlayerWnd.UpdateUserInfo
struct UOlympiadPlayerWnd_UpdateUserInfo_Params
{
	int                                                where;                                                    // (Parm)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.OlympiadPlayerWnd.UpdateUsersInfo
struct UOlympiadPlayerWnd_UpdateUsersInfo_Params
{
};

// Function Interface.OlympiadPlayerWnd.UpdateMsg
struct UOlympiadPlayerWnd_UpdateMsg_Params
{
	struct FString                                     strMsg;                                                   // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadPlayerWnd.HandleAttack
struct UOlympiadPlayerWnd_HandleAttack_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadPlayerWnd.HandleMagicSkillUse
struct UOlympiadPlayerWnd_HandleMagicSkillUse_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadPlayerWnd.HandleUserInfo
struct UOlympiadPlayerWnd_HandleUserInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadPlayerWnd.Clear
struct UOlympiadPlayerWnd_Clear_Params
{
};

// Function Interface.OlympiadPlayerWnd.OnEvent
struct UOlympiadPlayerWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadPlayerWnd.OnEnterState
struct UOlympiadPlayerWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.OlympiadPlayerWnd.OnLoad
struct UOlympiadPlayerWnd_OnLoad_Params
{
};

// Function Interface.OlympiadPlayerWnd.OnRegisterEvent
struct UOlympiadPlayerWnd_OnRegisterEvent_Params
{
};

// Function Interface.OlympiadPlayerWnd.SetPlayerNum
struct UOlympiadPlayerWnd_SetPlayerNum_Params
{
	int                                                PlayerNum;                                                // (Parm)
};

// Function Interface.WarehouseWnd.HandleSetMaxCount
struct UWarehouseWnd_HandleSetMaxCount_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.WarehouseWnd.HandleOKButton
struct UWarehouseWnd_HandleOKButton_Params
{
};

// Function Interface.WarehouseWnd.AdjustCount
struct UWarehouseWnd_AdjustCount_Params
{
};

// Function Interface.WarehouseWnd.AdjustPrice
struct UWarehouseWnd_AdjustPrice_Params
{
};

// Function Interface.WarehouseWnd.HandleDeleteItem
struct UWarehouseWnd_HandleDeleteItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.WarehouseWnd.HandleAddItem
struct UWarehouseWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.WarehouseWnd.HandleOpenWindow
struct UWarehouseWnd_HandleOpenWindow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.WarehouseWnd.HandleDialogOK
struct UWarehouseWnd_HandleDialogOK_Params
{
};

// Function Interface.WarehouseWnd.MoveItemBottomToTop
struct UWarehouseWnd_MoveItemBottomToTop_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.WarehouseWnd.MoveItemTopToBottom
struct UWarehouseWnd_MoveItemTopToBottom_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.WarehouseWnd.OnDropItem
struct UWarehouseWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.WarehouseWnd.OnClickItem
struct UWarehouseWnd_OnClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.WarehouseWnd.OnDBClickItem
struct UWarehouseWnd_OnDBClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.WarehouseWnd.OnClickButton
struct UWarehouseWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.WarehouseWnd.OnEvent
struct UWarehouseWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.WarehouseWnd.Clear
struct UWarehouseWnd_Clear_Params
{
};

// Function Interface.WarehouseWnd.InitHandle
struct UWarehouseWnd_InitHandle_Params
{
};

// Function Interface.WarehouseWnd.OnLoad
struct UWarehouseWnd_OnLoad_Params
{
};

// Function Interface.WarehouseWnd.OnRegisterEvent
struct UWarehouseWnd_OnRegisterEvent_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSummon1Team
struct UEventMatchGMWnd_OnClickSummon1Team_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickDelayReset
struct UEventMatchGMWnd_OnClickDelayReset_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSetAllHeal
struct UEventMatchGMWnd_OnClickSetAllHeal_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSummon2Team
struct UEventMatchGMWnd_OnClickSummon2Team_Params
{
};

// Function Interface.EventMatchGMWnd.SetMatchID
struct UEventMatchGMWnd_SetMatchID_Params
{
	int                                                a_MatchID;                                                // (Parm)
};

// Function Interface.EventMatchGMWnd.SetPause
struct UEventMatchGMWnd_SetPause_Params
{
	bool                                               a_Pause;                                                  // (Parm)
	bool                                               a_SendToServer;                                           // (OptionalParm, Parm)
};

// Function Interface.EventMatchGMWnd.HandleEventMatchManage
struct UEventMatchGMWnd_HandleEventMatchManage_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMWnd.HandleEventMatchPartyLeader
struct UEventMatchGMWnd_HandleEventMatchPartyLeader_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMWnd.Firecracker
struct UEventMatchGMWnd_Firecracker_Params
{
	int                                                a_TeamID;                                                 // (Parm)
};

// Function Interface.EventMatchGMWnd.SendGameEndMsg
struct UEventMatchGMWnd_SendGameEndMsg_Params
{
};

// Function Interface.EventMatchGMWnd.SendAnnounce
struct UEventMatchGMWnd_SendAnnounce_Params
{
};

// Function Interface.EventMatchGMWnd.SetScore
struct UEventMatchGMWnd_SetScore_Params
{
};

// Function Interface.EventMatchGMWnd.RemoveEventMatch
struct UEventMatchGMWnd_RemoveEventMatch_Params
{
};

// Function Interface.EventMatchGMWnd.SetFence
struct UEventMatchGMWnd_SetFence_Params
{
};

// Function Interface.EventMatchGMWnd.CheckBuffRule
struct UEventMatchGMWnd_CheckBuffRule_Params
{
	struct FString                                     a_OptionFile;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.EventMatchGMWnd.ApplyBuffRule
struct UEventMatchGMWnd_ApplyBuffRule_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.EventMatchGMWnd.ApplyItemRule
struct UEventMatchGMWnd_ApplyItemRule_Params
{
	struct FString                                     a_OptionFile;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.EventMatchGMWnd.ApplySkillRule
struct UEventMatchGMWnd_ApplySkillRule_Params
{
	struct FString                                     a_OptionFile;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.EventMatchGMWnd.StartCountDown
struct UEventMatchGMWnd_StartCountDown_Params
{
};

// Function Interface.EventMatchGMWnd.RefreshLockStatus
struct UEventMatchGMWnd_RefreshLockStatus_Params
{
};

// Function Interface.EventMatchGMWnd.HandleEventMatchUpdateTeamInfo
struct UEventMatchGMWnd_HandleEventMatchUpdateTeamInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMWnd.HandleEventMatchCreated
struct UEventMatchGMWnd_HandleEventMatchCreated_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMWnd.HandleShowEventMatchGMWnd
struct UEventMatchGMWnd_HandleShowEventMatchGMWnd_Params
{
};

// Function Interface.EventMatchGMWnd.NotifyFenceInfo
struct UEventMatchGMWnd_NotifyFenceInfo_Params
{
	struct FVector                                     a_Position;                                               // (Parm)
	int                                                a_XLength;                                                // (Parm)
	int                                                a_YLength;                                                // (Parm)
};

// Function Interface.EventMatchGMWnd.OnClickTeam2FirecrackerButton
struct UEventMatchGMWnd_OnClickTeam2FirecrackerButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickTeam1FirecrackerButton
struct UEventMatchGMWnd_OnClickTeam1FirecrackerButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSetFenceButton
struct UEventMatchGMWnd_OnClickSetFenceButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSendGameEngMsgButton
struct UEventMatchGMWnd_OnClickSendGameEngMsgButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickShowCommandWndButton
struct UEventMatchGMWnd_OnClickShowCommandWndButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSendAnnounceButton
struct UEventMatchGMWnd_OnClickSendAnnounceButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSetScoreButton
struct UEventMatchGMWnd_OnClickSetScoreButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickStartButton
struct UEventMatchGMWnd_OnClickStartButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickPauseButton
struct UEventMatchGMWnd_OnClickPauseButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickLockTeam2Button
struct UEventMatchGMWnd_OnClickLockTeam2Button_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSetTeam2LeaderButton
struct UEventMatchGMWnd_OnClickSetTeam2LeaderButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickLockTeam1Button
struct UEventMatchGMWnd_OnClickLockTeam1Button_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickSetTeam1LeaderButton
struct UEventMatchGMWnd_OnClickSetTeam1LeaderButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnClickCreateEventMatchButton
struct UEventMatchGMWnd_OnClickCreateEventMatchButton_Params
{
};

// Function Interface.EventMatchGMWnd.OnHide
struct UEventMatchGMWnd_OnHide_Params
{
};

// Function Interface.EventMatchGMWnd.OnEvent
struct UEventMatchGMWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMWnd.OnClickButtonWithHandle
struct UEventMatchGMWnd_OnClickButtonWithHandle_Params
{
	class UButtonHandle*                               a_ButtonHandle;                                           // (Parm)
};

// Function Interface.EventMatchGMWnd.OnLoad
struct UEventMatchGMWnd_OnLoad_Params
{
};

// Function Interface.EventMatchGMWnd.OnRegisterEvent
struct UEventMatchGMWnd_OnRegisterEvent_Params
{
};

// Function Interface.DuelManager.OnLButtonDown
struct UDuelManager_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.DuelManager.Resize
struct UDuelManager_Resize_Params
{
	int                                                Count;                                                    // (Parm)
};

// Function Interface.DuelManager.Clear
struct UDuelManager_Clear_Params
{
};

// Function Interface.DuelManager.HandleUpdateUserInfo
struct UDuelManager_HandleUpdateUserInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DuelManager.HandleDialogCancel
struct UDuelManager_HandleDialogCancel_Params
{
};

// Function Interface.DuelManager.HandleDialogOK
struct UDuelManager_HandleDialogOK_Params
{
};

// Function Interface.DuelManager.HandleOlympiadEnd
struct UDuelManager_HandleOlympiadEnd_Params
{
};

// Function Interface.DuelManager.HandleOlympiadUserInfo
struct UDuelManager_HandleOlympiadUserInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DuelManager.HandleDuelAskStart
struct UDuelManager_HandleDuelAskStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DuelManager.OnEvent
struct UDuelManager_OnEvent_Params
{
	int                                                EventID;                                                  // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DuelManager.OnLoad
struct UDuelManager_OnLoad_Params
{
};

// Function Interface.DuelManager.OnRegisterEvent
struct UDuelManager_OnRegisterEvent_Params
{
};

// Function Interface.AITimerWnd.OnHide
struct UAITimerWnd_OnHide_Params
{
};

// Function Interface.AITimerWnd.StartCountUp
struct UAITimerWnd_StartCountUp_Params
{
	int                                                CurMin;                                                   // (Parm)
	int                                                CurSec;                                                   // (Parm)
	struct FString                                     strDisplayTxt;                                            // (Parm, NeedCtorLink)
	int                                                TMin;                                                     // (Parm)
	int                                                TSec;                                                     // (Parm)
};

// Function Interface.AITimerWnd.StartCountDown
struct UAITimerWnd_StartCountDown_Params
{
	int                                                CurMin;                                                   // (Parm)
	int                                                CurSec;                                                   // (Parm)
	struct FString                                     strDisplayTxt;                                            // (Parm, NeedCtorLink)
	int                                                TMin;                                                     // (Parm)
	int                                                TSec;                                                     // (Parm)
};

// Function Interface.AITimerWnd.TimerReset
struct UAITimerWnd_TimerReset_Params
{
	int                                                CurMin;                                                   // (Parm)
	int                                                CurSec;                                                   // (Parm)
};

// Function Interface.AITimerWnd.UpdateTimerCountUp
struct UAITimerWnd_UpdateTimerCountUp_Params
{
};

// Function Interface.AITimerWnd.UpdateTimerCountDown
struct UAITimerWnd_UpdateTimerCountDown_Params
{
};

// Function Interface.AITimerWnd.OnTimer
struct UAITimerWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.AITimerWnd.HandleAIController
struct UAITimerWnd_HandleAIController_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AITimerWnd.OnEvent
struct UAITimerWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AITimerWnd.OnRegisterEvent
struct UAITimerWnd_OnRegisterEvent_Params
{
};

// Function Interface.AITimerWnd.OnLoad
struct UAITimerWnd_OnLoad_Params
{
};

// Function Interface.AbnormalStatusWnd.OnClickItem
struct UAbnormalStatusWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.AbnormalStatusWnd.HandleLanguageChanged
struct UAbnormalStatusWnd_HandleLanguageChanged_Params
{
};

// Function Interface.AbnormalStatusWnd.UpdateWindowSize
struct UAbnormalStatusWnd_UpdateWindowSize_Params
{
};

// Function Interface.AbnormalStatusWnd.HandleAddShortStatus
struct UAbnormalStatusWnd_HandleAddShortStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AbnormalStatusWnd.HandleAddEtcStatus
struct UAbnormalStatusWnd_HandleAddEtcStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AbnormalStatusWnd.HandleAddNormalStatus
struct UAbnormalStatusWnd_HandleAddNormalStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AbnormalStatusWnd.ClearAll
struct UAbnormalStatusWnd_ClearAll_Params
{
};

// Function Interface.AbnormalStatusWnd.ClearStatus
struct UAbnormalStatusWnd_ClearStatus_Params
{
	bool                                               bEtcItem;                                                 // (Parm)
	bool                                               bShortItem;                                               // (Parm)
};

// Function Interface.AbnormalStatusWnd.OnShow
struct UAbnormalStatusWnd_OnShow_Params
{
};

// Function Interface.AbnormalStatusWnd.HandleShowReplayQuitDialogBox
struct UAbnormalStatusWnd_HandleShowReplayQuitDialogBox_Params
{
};

// Function Interface.AbnormalStatusWnd.HandleDie
struct UAbnormalStatusWnd_HandleDie_Params
{
};

// Function Interface.AbnormalStatusWnd.HandleRestart
struct UAbnormalStatusWnd_HandleRestart_Params
{
};

// Function Interface.AbnormalStatusWnd.OnEvent
struct UAbnormalStatusWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AbnormalStatusWnd.OnExitState
struct UAbnormalStatusWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.AbnormalStatusWnd.OnEnterState
struct UAbnormalStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.AbnormalStatusWnd.InitHandle
struct UAbnormalStatusWnd_InitHandle_Params
{
};

// Function Interface.AbnormalStatusWnd.OnLoad
struct UAbnormalStatusWnd_OnLoad_Params
{
};

// Function Interface.AbnormalStatusWnd.OnRegisterEvent
struct UAbnormalStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.KillPointRankWnd.InsertKillPoint
struct UKillPointRankWnd_InsertKillPoint_Params
{
};

// Function Interface.KillPointRankWnd.OnHide
struct UKillPointRankWnd_OnHide_Params
{
};

// Function Interface.KillPointRankWnd.OnClickButton
struct UKillPointRankWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.KillPointRankWnd.OnEvent
struct UKillPointRankWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.KillPointRankWnd.OnShow
struct UKillPointRankWnd_OnShow_Params
{
};

// Function Interface.KillPointRankWnd.OnLoad
struct UKillPointRankWnd_OnLoad_Params
{
};

// Function Interface.KillPointRankWnd.OnRegisterEvent
struct UKillPointRankWnd_OnRegisterEvent_Params
{
};

// Function Interface.PetWnd.HandlePetInventoryItemUpdate
struct UPetWnd_HandlePetInventoryItemUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.HandlePetInventoryItemList
struct UPetWnd_HandlePetInventoryItemList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.HandlePetInventoryItemStart
struct UPetWnd_HandlePetInventoryItemStart_Params
{
};

// Function Interface.PetWnd.HandleActionPetList
struct UPetWnd_HandleActionPetList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.HandleActionPetListStart
struct UPetWnd_HandleActionPetListStart_Params
{
};

// Function Interface.PetWnd.HandlePetShow
struct UPetWnd_HandlePetShow_Params
{
};

// Function Interface.PetWnd.HandlePetInfoUpdate
struct UPetWnd_HandlePetInfoUpdate_Params
{
};

// Function Interface.PetWnd.HandlePetSummonedStatusClose
struct UPetWnd_HandlePetSummonedStatusClose_Params
{
};

// Function Interface.PetWnd.SetVisibleNameBtn
struct UPetWnd_SetVisibleNameBtn_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function Interface.PetWnd.HandlePetShowNameBtn
struct UPetWnd_HandlePetShowNameBtn_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.HandleRegPetName
struct UPetWnd_HandleRegPetName_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.ClearInvenWnd
struct UPetWnd_ClearInvenWnd_Params
{
};

// Function Interface.PetWnd.ClearActionWnd
struct UPetWnd_ClearActionWnd_Params
{
};

// Function Interface.PetWnd.Clear
struct UPetWnd_Clear_Params
{
};

// Function Interface.PetWnd.OnRClickItem
struct UPetWnd_OnRClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.PetWnd.OnDBClickItem
struct UPetWnd_OnDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.PetWnd.OnClickItem
struct UPetWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.PetWnd.OnNameClick
struct UPetWnd_OnNameClick_Params
{
};

// Function Interface.PetWnd.OnClickButton
struct UPetWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.HandleDialogOK
struct UPetWnd_HandleDialogOK_Params
{
};

// Function Interface.PetWnd.OnEvent
struct UPetWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetWnd.HandleLanguageChanged
struct UPetWnd_HandleLanguageChanged_Params
{
};

// Function Interface.PetWnd.OnDropItem
struct UPetWnd_OnDropItem_Params
{
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PetWnd.OnShow
struct UPetWnd_OnShow_Params
{
};

// Function Interface.PetWnd.InitHandleCOD
struct UPetWnd_InitHandleCOD_Params
{
};

// Function Interface.PetWnd.InitHandle
struct UPetWnd_InitHandle_Params
{
};

// Function Interface.PetWnd.OnLoad
struct UPetWnd_OnLoad_Params
{
};

// Function Interface.PetWnd.OnRegisterEvent
struct UPetWnd_OnRegisterEvent_Params
{
};

// Function Interface.SystemTutorialWnd.FillTutorialList
struct USystemTutorialWnd_FillTutorialList_Params
{
};

// Function Interface.SystemTutorialWnd.BubbleData
struct USystemTutorialWnd_BubbleData_Params
{
	int                                                A;                                                        // (Parm)
};

// Function Interface.SystemTutorialWnd.ShowTutorialIcon
struct USystemTutorialWnd_ShowTutorialIcon_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                C;                                                        // (Parm)
};

// Function Interface.SystemTutorialWnd.OnTutorialCondition
struct USystemTutorialWnd_OnTutorialCondition_Params
{
	int                                                CurrentEvent;                                             // (Parm)
};

// Function Interface.SystemTutorialWnd.ClearCurrentID
struct USystemTutorialWnd_ClearCurrentID_Params
{
};

// Function Interface.SystemTutorialWnd.OnClickButton
struct USystemTutorialWnd_OnClickButton_Params
{
	struct FString                                     btnName;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.SystemTutorialWnd.LaunchTutorial
struct USystemTutorialWnd_LaunchTutorial_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Title;                                                    // (Parm)
	int                                                Msg;                                                      // (Parm)
};

// Function Interface.SystemTutorialWnd.OnHide
struct USystemTutorialWnd_OnHide_Params
{
};

// Function Interface.SystemTutorialWnd.OnShow
struct USystemTutorialWnd_OnShow_Params
{
};

// Function Interface.SystemTutorialWnd.Initialize
struct USystemTutorialWnd_Initialize_Params
{
};

// Function Interface.SystemTutorialWnd.OnLoad
struct USystemTutorialWnd_OnLoad_Params
{
};

// Function Interface.SystemTutorialWnd.OnStart
struct USystemTutorialWnd_OnStart_Params
{
};

// Function Interface.SystemTutorialWnd.OnEnterState
struct USystemTutorialWnd_OnEnterState_Params
{
	struct FName                                       a_PrevStateName;                                          // (Parm)
};

// Function Interface.AuctionWnd.HandleDialogOK
struct UAuctionWnd_HandleDialogOK_Params
{
};

// Function Interface.AuctionWnd.OnBtnBidInputClick
struct UAuctionWnd_OnBtnBidInputClick_Params
{
};

// Function Interface.AuctionWnd.UpdateAuctionWnd
struct UAuctionWnd_UpdateAuctionWnd_Params
{
};

// Function Interface.AuctionWnd.OnClickButton
struct UAuctionWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.AuctionWnd.OnHide
struct UAuctionWnd_OnHide_Params
{
};

// Function Interface.AuctionWnd.ComputeScrollHeight
struct UAuctionWnd_ComputeScrollHeight_Params
{
	struct FString                                     tempStr;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.AuctionWnd.InsertAuctionItem
struct UAuctionWnd_InsertAuctionItem_Params
{
};

// Function Interface.AuctionWnd.OnTimer
struct UAuctionWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.AuctionWnd.OnEvent
struct UAuctionWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AuctionWnd.Load
struct UAuctionWnd_Load_Params
{
};

// Function Interface.AuctionWnd.Initialize
struct UAuctionWnd_Initialize_Params
{
};

// Function Interface.AuctionWnd.OnLoad
struct UAuctionWnd_OnLoad_Params
{
};

// Function Interface.AuctionWnd.OnRegisterEvent
struct UAuctionWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorShopWnd.HandleOKButton
struct UManorShopWnd_HandleOKButton_Params
{
};

// Function Interface.ManorShopWnd.HandleAddItem
struct UManorShopWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorShopWnd.HandleOpenWindow
struct UManorShopWnd_HandleOpenWindow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorShopWnd.MoveItemTopToBottom
struct UManorShopWnd_MoveItemTopToBottom_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.ManorShopWnd.OnEvent
struct UManorShopWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorShopWnd.OnLoad
struct UManorShopWnd_OnLoad_Params
{
};

// Function Interface.ManorShopWnd.OnRegisterEvent
struct UManorShopWnd_OnRegisterEvent_Params
{
};

// Function Interface.HennaInfoWnd.ShowHennaInfoWnd
struct UHennaInfoWnd_ShowHennaInfoWnd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HennaInfoWnd.OnEvent
struct UHennaInfoWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HennaInfoWnd.OnShow
struct UHennaInfoWnd_OnShow_Params
{
};

// Function Interface.HennaInfoWnd.OnClickButton
struct UHennaInfoWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HennaInfoWnd.OnLoad
struct UHennaInfoWnd_OnLoad_Params
{
};

// Function Interface.HennaInfoWnd.OnRegisterEvent
struct UHennaInfoWnd_OnRegisterEvent_Params
{
};

// Function Interface.QuestListWnd.InitQuestTooltip
struct UQuestListWnd_InitQuestTooltip_Params
{
};

// Function Interface.QuestListWnd.ShowQuestTarget
struct UQuestListWnd_ShowQuestTarget_Params
{
};

// Function Interface.QuestListWnd.HandleQuestInfo
struct UQuestListWnd_HandleQuestInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestListWnd.HandleQuestInfoStart
struct UQuestListWnd_HandleQuestInfoStart_Params
{
};

// Function Interface.QuestListWnd.OnClickListCtrlRecord
struct UQuestListWnd_OnClickListCtrlRecord_Params
{
	struct FString                                     Id;                                                       // (Parm, NeedCtorLink)
};

// Function Interface.QuestListWnd.OnClickButton
struct UQuestListWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestListWnd.OnEvent
struct UQuestListWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestListWnd.OnLoad
struct UQuestListWnd_OnLoad_Params
{
};

// Function Interface.QuestListWnd.OnRegisterEvent
struct UQuestListWnd_OnRegisterEvent_Params
{
};

// Function Interface.SummonedWnd.HandleActionSummonedList
struct USummonedWnd_HandleActionSummonedList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedWnd.HandlePetShow
struct USummonedWnd_HandlePetShow_Params
{
};

// Function Interface.SummonedWnd.HandlePetInfoUpdate
struct USummonedWnd_HandlePetInfoUpdate_Params
{
};

// Function Interface.SummonedWnd.HandlePetSummonedStatusClose
struct USummonedWnd_HandlePetSummonedStatusClose_Params
{
};

// Function Interface.SummonedWnd.ClearActionWnd
struct USummonedWnd_ClearActionWnd_Params
{
};

// Function Interface.SummonedWnd.Clear
struct USummonedWnd_Clear_Params
{
};

// Function Interface.SummonedWnd.HandleActionSummonedListStart
struct USummonedWnd_HandleActionSummonedListStart_Params
{
};

// Function Interface.SummonedWnd.OnClickItem
struct USummonedWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.SummonedWnd.OnEvent
struct USummonedWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedWnd.HandleLanguageChanged
struct USummonedWnd_HandleLanguageChanged_Params
{
};

// Function Interface.SummonedWnd.OnShow
struct USummonedWnd_OnShow_Params
{
};

// Function Interface.SummonedWnd.InitHandleCOD
struct USummonedWnd_InitHandleCOD_Params
{
};

// Function Interface.SummonedWnd.InitHandle
struct USummonedWnd_InitHandle_Params
{
};

// Function Interface.SummonedWnd.OnLoad
struct USummonedWnd_OnLoad_Params
{
};

// Function Interface.SummonedWnd.OnRegisterEvent
struct USummonedWnd_OnRegisterEvent_Params
{
};

// Function Interface.StatusWnd.HandlePremiumState
struct UStatusWnd_HandlePremiumState_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.StatusWnd.HandleRegenStatus
struct UStatusWnd_HandleRegenStatus_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.StatusWnd.HandleUpdateInfo
struct UStatusWnd_HandleUpdateInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.StatusWnd.HandleUpdateGauge
struct UStatusWnd_HandleUpdateGauge_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
	int                                                type;                                                     // (Parm)
};

// Function Interface.StatusWnd.HandleVitalityPointInfo
struct UStatusWnd_HandleVitalityPointInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.StatusWnd.OnEvent
struct UStatusWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.StatusWnd.OnLButtonDown
struct UStatusWnd_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.StatusWnd.LevelOfVitality
struct UStatusWnd_LevelOfVitality_Params
{
	int                                                Vitality;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.StatusWnd.UpdateVp
struct UStatusWnd_UpdateVp_Params
{
	int                                                Vitality;                                                 // (Parm)
};

// Function Interface.StatusWnd.UpdateUserInfo
struct UStatusWnd_UpdateUserInfo_Params
{
};

// Function Interface.StatusWnd.UpdateUserGauge
struct UStatusWnd_UpdateUserGauge_Params
{
	int                                                type;                                                     // (Parm)
};

// Function Interface.StatusWnd.OnEnterState
struct UStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.StatusWnd.InitAnimation
struct UStatusWnd_InitAnimation_Params
{
};

// Function Interface.StatusWnd.PlayAnimationPrem
struct UStatusWnd_PlayAnimationPrem_Params
{
};

// Function Interface.StatusWnd.PlayAnimation
struct UStatusWnd_PlayAnimation_Params
{
};

// Function Interface.StatusWnd.OnTimer
struct UStatusWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.StatusWnd.InitHandleCOD
struct UStatusWnd_InitHandleCOD_Params
{
};

// Function Interface.StatusWnd.InitHandle
struct UStatusWnd_InitHandle_Params
{
};

// Function Interface.StatusWnd.OnLoad
struct UStatusWnd_OnLoad_Params
{
};

// Function Interface.StatusWnd.OnRegisterEvent
struct UStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMWnd.OnClickChangeServerButton
struct UGMWnd_OnClickChangeServerButton_Params
{
};

// Function Interface.GMWnd.OnClickForcePetitionButton
struct UGMWnd_OnClickForcePetitionButton_Params
{
};

// Function Interface.GMWnd.OnClickSkillListButton
struct UGMWnd_OnClickSkillListButton_Params
{
};

// Function Interface.GMWnd.OnClickItemListButton
struct UGMWnd_OnClickItemListButton_Params
{
};

// Function Interface.GMWnd.OnClickNPCListButton
struct UGMWnd_OnClickNPCListButton_Params
{
};

// Function Interface.GMWnd.SendHome
struct UGMWnd_SendHome_Params
{
};

// Function Interface.GMWnd.OnClickSendHomeButton
struct UGMWnd_OnClickSendHomeButton_Params
{
};

// Function Interface.GMWnd.OnClickPetitionButton
struct UGMWnd_OnClickPetitionButton_Params
{
};

// Function Interface.GMWnd.OnClickClanButton
struct UGMWnd_OnClickClanButton_Params
{
};

// Function Interface.GMWnd.OnClickStoreButton
struct UGMWnd_OnClickStoreButton_Params
{
};

// Function Interface.GMWnd.OnClickInfoButton
struct UGMWnd_OnClickInfoButton_Params
{
};

// Function Interface.GMWnd.OnClickQuestButton
struct UGMWnd_OnClickQuestButton_Params
{
};

// Function Interface.GMWnd.OnClickMagicSkillButton
struct UGMWnd_OnClickMagicSkillButton_Params
{
};

// Function Interface.GMWnd.OnClickInventoryButton
struct UGMWnd_OnClickInventoryButton_Params
{
};

// Function Interface.GMWnd.OnClickDetailStatusButton
struct UGMWnd_OnClickDetailStatusButton_Params
{
};

// Function Interface.GMWnd.Recall
struct UGMWnd_Recall_Params
{
};

// Function Interface.GMWnd.OnClickRecallButton
struct UGMWnd_OnClickRecallButton_Params
{
};

// Function Interface.GMWnd.OnClickMoveButton
struct UGMWnd_OnClickMoveButton_Params
{
};

// Function Interface.GMWnd.OnClickTeleButton
struct UGMWnd_OnClickTeleButton_Params
{
};

// Function Interface.GMWnd.OnClickButton
struct UGMWnd_OnClickButton_Params
{
	struct FString                                     a_ButtonID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.GMWnd.HandleDialogCancel
struct UGMWnd_HandleDialogCancel_Params
{
};

// Function Interface.GMWnd.HandleTargetUpdate
struct UGMWnd_HandleTargetUpdate_Params
{
};

// Function Interface.GMWnd.HandleDialogOK
struct UGMWnd_HandleDialogOK_Params
{
};

// Function Interface.GMWnd.HandleShowGMWnd
struct UGMWnd_HandleShowGMWnd_Params
{
};

// Function Interface.GMWnd.OnEvent
struct UGMWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMWnd.OnLoad
struct UGMWnd_OnLoad_Params
{
};

// Function Interface.GMWnd.OnRegisterEvent
struct UGMWnd_OnRegisterEvent_Params
{
};

// Function Interface.UIEditor_FileManager.MakeUC
struct UUIEditor_FileManager_MakeUC_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.SaveXMLFile
struct UUIEditor_FileManager_SaveXMLFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.OnMakeClick
struct UUIEditor_FileManager_OnMakeClick_Params
{
};

// Function Interface.UIEditor_FileManager.OnSaveClick
struct UUIEditor_FileManager_OnSaveClick_Params
{
};

// Function Interface.UIEditor_FileManager.OnLoadClick
struct UUIEditor_FileManager_OnLoadClick_Params
{
};

// Function Interface.UIEditor_FileManager.OnCompleteEditBox
struct UUIEditor_FileManager_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.OnClickButton
struct UUIEditor_FileManager_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.GetParentDirectory
struct UUIEditor_FileManager_GetParentDirectory_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.Update
struct UUIEditor_FileManager_Update_Params
{
};

// Function Interface.UIEditor_FileManager.OnDBClickListBoxItem
struct UUIEditor_FileManager_OnDBClickListBoxItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.OnEvent
struct UUIEditor_FileManager_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_FileManager.InitControlItem
struct UUIEditor_FileManager_InitControlItem_Params
{
};

// Function Interface.UIEditor_FileManager.InitHandle
struct UUIEditor_FileManager_InitHandle_Params
{
};

// Function Interface.UIEditor_FileManager.UpdateFileList
struct UUIEditor_FileManager_UpdateFileList_Params
{
};

// Function Interface.UIEditor_FileManager.UpdateDirectory
struct UUIEditor_FileManager_UpdateDirectory_Params
{
};

// Function Interface.UIEditor_FileManager.OnLoad
struct UUIEditor_FileManager_OnLoad_Params
{
};

// Function Interface.UIEditor_FileManager.OnRegisterEvent
struct UUIEditor_FileManager_OnRegisterEvent_Params
{
};

// Function Interface.PartyMatchWndCommon.GetAmbiguousLevelString
struct UPartyMatchWndCommon_GetAmbiguousLevelString_Params
{
	int                                                a_Level;                                                  // (Parm)
	bool                                               a_HasSpace;                                               // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.OnSendPacketWhenHiding
struct UUnionMatchingWnd_OnSendPacketWhenHiding_Params
{
};

// Function Interface.UnionMatchingWnd.UpdateMyMembershipType
struct UUnionMatchingWnd_UpdateMyMembershipType_Params
{
};

// Function Interface.UnionMatchingWnd.ExitPartyRoom
struct UUnionMatchingWnd_ExitPartyRoom_Params
{
};

// Function Interface.UnionMatchingWnd.OnExitButtonClick
struct UUnionMatchingWnd_OnExitButtonClick_Params
{
};

// Function Interface.UnionMatchingWnd.OnbtnUnionInviteClick
struct UUnionMatchingWnd_OnbtnUnionInviteClick_Params
{
};

// Function Interface.UnionMatchingWnd.OnInviteButtonClick
struct UUnionMatchingWnd_OnInviteButtonClick_Params
{
};

// Function Interface.UnionMatchingWnd.OnBanButtonClick
struct UUnionMatchingWnd_OnBanButtonClick_Params
{
};

// Function Interface.UnionMatchingWnd.OnbtnUnionInfoClick
struct UUnionMatchingWnd_OnbtnUnionInfoClick_Params
{
};

// Function Interface.UnionMatchingWnd.OnRoomSettingButtonClick
struct UUnionMatchingWnd_OnRoomSettingButtonClick_Params
{
};

// Function Interface.UnionMatchingWnd.OnClickButton
struct UUnionMatchingWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.HandleMpccRoomMemberInfo
struct UUnionMatchingWnd_HandleMpccRoomMemberInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.HandleMpccRoomMemberStart
struct UUnionMatchingWnd_HandleMpccRoomMemberStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.UpdateData
struct UUnionMatchingWnd_UpdateData_Params
{
	bool                                               a_ToControl;                                              // (Parm)
};

// Function Interface.UnionMatchingWnd.RemoveMember
struct UUnionMatchingWnd_RemoveMember_Params
{
	int                                                a_MemberID;                                               // (Parm)
};

// Function Interface.UnionMatchingWnd.AddMember
struct UUnionMatchingWnd_AddMember_Params
{
	int                                                a_MemberID;                                               // (Parm)
	struct FString                                     a_MemberName;                                             // (Parm, NeedCtorLink)
	int                                                a_ClassID;                                                // (Parm)
	int                                                a_Level;                                                  // (Parm)
	int                                                a_ZoneID;                                                 // (Parm)
	int                                                a_MembershipType;                                         // (Parm)
};

// Function Interface.UnionMatchingWnd.HandleManageMpccRoomMember
struct UUnionMatchingWnd_HandleManageMpccRoomMember_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.HandleDismissMpccRoom
struct UUnionMatchingWnd_HandleDismissMpccRoom_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.HandleMpccRoomInfo
struct UUnionMatchingWnd_HandleMpccRoomInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.HandleMpccRoomChatMessage
struct UUnionMatchingWnd_HandleMpccRoomChatMessage_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.OnEvent
struct UUnionMatchingWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionMatchingWnd.Load
struct UUnionMatchingWnd_Load_Params
{
};

// Function Interface.UnionMatchingWnd.InitializeCOD
struct UUnionMatchingWnd_InitializeCOD_Params
{
};

// Function Interface.UnionMatchingWnd.Initialize
struct UUnionMatchingWnd_Initialize_Params
{
};

// Function Interface.UnionMatchingWnd.OnLoad
struct UUnionMatchingWnd_OnLoad_Params
{
};

// Function Interface.UnionMatchingWnd.OnRegisterEvent
struct UUnionMatchingWnd_OnRegisterEvent_Params
{
};

// Function Interface.FishViewportWnd.OnTimer
struct UFishViewportWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.FishViewportWnd.OnClickButton
struct UFishViewportWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FishViewportWnd.ShowFishStringWithPenalty
struct UFishViewportWnd_ShowFishStringWithPenalty_Params
{
	int                                                strID;                                                    // (Parm)
	int                                                DeltaHP;                                                  // (Parm)
	int                                                Penalty;                                                  // (Parm)
};

// Function Interface.FishViewportWnd.ShowFishString
struct UFishViewportWnd_ShowFishString_Params
{
	int                                                strID;                                                    // (Parm)
	int                                                DeltaHP;                                                  // (Parm)
};

// Function Interface.FishViewportWnd.showeffect
struct UFishViewportWnd_showeffect_Params
{
};

// Function Interface.FishViewportWnd.HandleSetFishStatus
struct UFishViewportWnd_HandleSetFishStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FishViewportWnd.HandleInitFishStatus
struct UFishViewportWnd_HandleInitFishStatus_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FishViewportWnd.HideHPBarNEtc
struct UFishViewportWnd_HideHPBarNEtc_Params
{
};

// Function Interface.FishViewportWnd.ShowHPBarNEtc
struct UFishViewportWnd_ShowHPBarNEtc_Params
{
};

// Function Interface.FishViewportWnd.OnEvent
struct UFishViewportWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FishViewportWnd.InitHandleCOD
struct UFishViewportWnd_InitHandleCOD_Params
{
};

// Function Interface.FishViewportWnd.InitHandle
struct UFishViewportWnd_InitHandle_Params
{
};

// Function Interface.FishViewportWnd.OnLoad
struct UFishViewportWnd_OnLoad_Params
{
};

// Function Interface.FishViewportWnd.OnRegisterEvent
struct UFishViewportWnd_OnRegisterEvent_Params
{
};

// Function Interface.FlightTransformCtrlWnd.ShowAirTutorial
struct UFlightTransformCtrlWnd_ShowAirTutorial_Params
{
	int                                                SystemMsgID;                                              // (Parm)
};

// Function Interface.FlightTransformCtrlWnd.OnReserveShortCut
struct UFlightTransformCtrlWnd_OnReserveShortCut_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.ExecuteShortcutCommandBySlot
struct UFlightTransformCtrlWnd_ExecuteShortcutCommandBySlot_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.HandleShortcutPageUpdate
struct UFlightTransformCtrlWnd_HandleShortcutPageUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.HandleShortcutClear
struct UFlightTransformCtrlWnd_HandleShortcutClear_Params
{
};

// Function Interface.FlightTransformCtrlWnd.HandleShortcutUpdate
struct UFlightTransformCtrlWnd_HandleShortcutUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.ShortCutUpdateAll
struct UFlightTransformCtrlWnd_ShortCutUpdateAll_Params
{
};

// Function Interface.FlightTransformCtrlWnd.OnFlightTransformState
struct UFlightTransformCtrlWnd_OnFlightTransformState_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.OnTimer
struct UFlightTransformCtrlWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.FlightTransformCtrlWnd.OnEvent
struct UFlightTransformCtrlWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.OnExitState
struct UFlightTransformCtrlWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.FlightTransformCtrlWnd.OnEnterState
struct UFlightTransformCtrlWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.FlightTransformCtrlWnd.OnClickButton
struct UFlightTransformCtrlWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FlightTransformCtrlWnd.updateLockButton
struct UFlightTransformCtrlWnd_updateLockButton_Params
{
};

// Function Interface.FlightTransformCtrlWnd.OnLoad
struct UFlightTransformCtrlWnd_OnLoad_Params
{
};

// Function Interface.FlightTransformCtrlWnd.OnRegisterEvent
struct UFlightTransformCtrlWnd_OnRegisterEvent_Params
{
};

// Function Interface.ReplayLogoWnd.OnLoad
struct UReplayLogoWnd_OnLoad_Params
{
};

// Function Interface.LoadingWnd.CheckResolution
struct ULoadingWnd_CheckResolution_Params
{
};

// Function Interface.LoadingWnd.OnEvent
struct ULoadingWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.LoadingWnd.OnLoad
struct ULoadingWnd_OnLoad_Params
{
};

// Function Interface.LoadingWnd.OnRegisterEvent
struct ULoadingWnd_OnRegisterEvent_Params
{
};

// Function Interface.CalculatorWnd.OnClickButton
struct UCalculatorWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CalculatorWnd.OnKeyUp
struct UCalculatorWnd_OnKeyUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
};

// Function Interface.CalculatorWnd.ProcessBtn
struct UCalculatorWnd_ProcessBtn_Params
{
	TEnumAsByte<EInputKey>                             iValue;                                                   // (Parm)
};

// Function Interface.CalculatorWnd.ProcessEqual
struct UCalculatorWnd_ProcessEqual_Params
{
};

// Function Interface.CalculatorWnd.ProcessOperator
struct UCalculatorWnd_ProcessOperator_Params
{
	TEnumAsByte<EOperator>                             a_Operator;                                               // (Parm)
};

// Function Interface.CalculatorWnd.ProcessNumeric
struct UCalculatorWnd_ProcessNumeric_Params
{
	int                                                a_Number;                                                 // (Parm)
};

// Function Interface.CalculatorWnd.SetNumeric
struct UCalculatorWnd_SetNumeric_Params
{
	int                                                a_Number;                                                 // (Parm)
};

// Function Interface.CalculatorWnd.AddNumeric
struct UCalculatorWnd_AddNumeric_Params
{
	int                                                a_Number;                                                 // (Parm)
};

// Function Interface.CalculatorWnd.OnEvent
struct UCalculatorWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CalculatorWnd.Backspace
struct UCalculatorWnd_Backspace_Params
{
};

// Function Interface.CalculatorWnd.Calc
struct UCalculatorWnd_Calc_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	TEnumAsByte<EOperator>                             Op;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.CalculatorWnd.GetOperand
struct UCalculatorWnd_GetOperand_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.CalculatorWnd.GetString
struct UCalculatorWnd_GetString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.CalculatorWnd.SetString
struct UCalculatorWnd_SetString_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function Interface.CalculatorWnd.AddString
struct UCalculatorWnd_AddString_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function Interface.CalculatorWnd.SetOperator
struct UCalculatorWnd_SetOperator_Params
{
	TEnumAsByte<EOperator>                             Op;                                                       // (Parm)
};

// Function Interface.CalculatorWnd.SetOperand1
struct UCalculatorWnd_SetOperand1_Params
{
	int                                                a_Operand;                                                // (Parm)
};

// Function Interface.CalculatorWnd.CE
struct UCalculatorWnd_CE_Params
{
};

// Function Interface.CalculatorWnd.InitCalculator
struct UCalculatorWnd_InitCalculator_Params
{
};

// Function Interface.CalculatorWnd.OnShow
struct UCalculatorWnd_OnShow_Params
{
};

// Function Interface.CalculatorWnd.OnLoad
struct UCalculatorWnd_OnLoad_Params
{
};

// Function Interface.CalculatorWnd.OnRegisterEvent
struct UCalculatorWnd_OnRegisterEvent_Params
{
};

// Function Interface.RecipeBuyManufactureWnd.HandleInventoryItem
struct URecipeBuyManufactureWnd_HandleInventoryItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBuyManufactureWnd.SetMPBar
struct URecipeBuyManufactureWnd_SetMPBar_Params
{
	int                                                currentMP;                                                // (Parm)
};

// Function Interface.RecipeBuyManufactureWnd.ReceiveRecipeShopSellList
struct URecipeBuyManufactureWnd_ReceiveRecipeShopSellList_Params
{
	int                                                MerchantID;                                               // (Parm)
	int                                                RecipeID;                                                 // (Parm)
	int                                                currentMP;                                                // (Parm)
	int                                                MaxMP;                                                    // (Parm)
	int                                                MakingResult;                                             // (Parm)
	struct FINT64                                      Adena;                                                    // (Parm)
};

// Function Interface.RecipeBuyManufactureWnd.Clear
struct URecipeBuyManufactureWnd_Clear_Params
{
};

// Function Interface.RecipeBuyManufactureWnd.CloseWindow
struct URecipeBuyManufactureWnd_CloseWindow_Params
{
};

// Function Interface.RecipeBuyManufactureWnd.OnClickButton
struct URecipeBuyManufactureWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBuyManufactureWnd.OnEvent
struct URecipeBuyManufactureWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBuyManufactureWnd.OnLoad
struct URecipeBuyManufactureWnd_OnLoad_Params
{
};

// Function Interface.RecipeBuyManufactureWnd.OnRegisterEvent
struct URecipeBuyManufactureWnd_OnRegisterEvent_Params
{
};

// Function Interface.RecipeManufactureWnd.HandleInventoryItem
struct URecipeManufactureWnd_HandleInventoryItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeManufactureWnd.SetMPBar
struct URecipeManufactureWnd_SetMPBar_Params
{
	int                                                currentMP;                                                // (Parm)
};

// Function Interface.RecipeManufactureWnd.ReceiveRecipeItemMakeInfo
struct URecipeManufactureWnd_ReceiveRecipeItemMakeInfo_Params
{
	int                                                RecipeID;                                                 // (Parm)
	int                                                currentMP;                                                // (Parm)
	int                                                MaxMP;                                                    // (Parm)
	int                                                MakingResult;                                             // (Parm)
	int                                                type;                                                     // (Parm)
};

// Function Interface.RecipeManufactureWnd.Clear
struct URecipeManufactureWnd_Clear_Params
{
};

// Function Interface.RecipeManufactureWnd.CloseWindow
struct URecipeManufactureWnd_CloseWindow_Params
{
};

// Function Interface.RecipeManufactureWnd.OnClickButton
struct URecipeManufactureWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeManufactureWnd.OnEvent
struct URecipeManufactureWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeManufactureWnd.OnLoad
struct URecipeManufactureWnd_OnLoad_Params
{
};

// Function Interface.RecipeManufactureWnd.OnRegisterEvent
struct URecipeManufactureWnd_OnRegisterEvent_Params
{
};

// Function Interface.FlightTeleportWnd.FindArrIdxByID
struct UFlightTeleportWnd_FindArrIdxByID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.FlightTeleportWnd.SetLoc
struct UFlightTeleportWnd_SetLoc_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.FlightTeleportWnd.UnSelectLoc
struct UFlightTeleportWnd_UnSelectLoc_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Interface.FlightTeleportWnd.SelectLoc
struct UFlightTeleportWnd_SelectLoc_Params
{
	int                                                Id;                                                       // (Parm)
	bool                                               isUpdate;                                                 // (Parm)
};

// Function Interface.FlightTeleportWnd.SetMeCenter
struct UFlightTeleportWnd_SetMeCenter_Params
{
};

// Function Interface.FlightTeleportWnd.OnBtnGo
struct UFlightTeleportWnd_OnBtnGo_Params
{
};

// Function Interface.FlightTeleportWnd.OnBtnMyPos
struct UFlightTeleportWnd_OnBtnMyPos_Params
{
};

// Function Interface.FlightTeleportWnd.OnClickButton
struct UFlightTeleportWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.FlightTeleportWnd.OnMinimapRegionInfoBtnClick
struct UFlightTeleportWnd_OnMinimapRegionInfoBtnClick_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTeleportWnd.OnAirShipTeleportList
struct UFlightTeleportWnd_OnAirShipTeleportList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTeleportWnd.OnAirShipTeleportListStart
struct UFlightTeleportWnd_OnAirShipTeleportListStart_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTeleportWnd.OnEvent
struct UFlightTeleportWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightTeleportWnd.Clear
struct UFlightTeleportWnd_Clear_Params
{
};

// Function Interface.FlightTeleportWnd.InitializeCOD
struct UFlightTeleportWnd_InitializeCOD_Params
{
};

// Function Interface.FlightTeleportWnd.Initialize
struct UFlightTeleportWnd_Initialize_Params
{
};

// Function Interface.FlightTeleportWnd.OnLoad
struct UFlightTeleportWnd_OnLoad_Params
{
};

// Function Interface.FlightTeleportWnd.OnRegisterEvent
struct UFlightTeleportWnd_OnRegisterEvent_Params
{
};

// Function Interface.FlightTeleportWnd.FindSystemStrByID
struct UFlightTeleportWnd_FindSystemStrByID_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                AirportID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ScenePlayerWnd.OnbtnPlayClick
struct UScenePlayerWnd_OnbtnPlayClick_Params
{
};

// Function Interface.ScenePlayerWnd.OnbtnSaveClick
struct UScenePlayerWnd_OnbtnSaveClick_Params
{
};

// Function Interface.ScenePlayerWnd.OnbtnLoadClick
struct UScenePlayerWnd_OnbtnLoadClick_Params
{
};

// Function Interface.ScenePlayerWnd.OnbtnNewClick
struct UScenePlayerWnd_OnbtnNewClick_Params
{
};

// Function Interface.ScenePlayerWnd.LoadFromFile
struct UScenePlayerWnd_LoadFromFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.SaveToFile
struct UScenePlayerWnd_SaveToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.OnPropertyControllerResize
struct UScenePlayerWnd_OnPropertyControllerResize_Params
{
	int                                                a_Height;                                                 // (Parm)
};

// Function Interface.ScenePlayerWnd.OnCompleteEditBox
struct UScenePlayerWnd_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.OnDBClickListBoxItem
struct UScenePlayerWnd_OnDBClickListBoxItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.GetParentDirectory
struct UScenePlayerWnd_GetParentDirectory_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.Update
struct UScenePlayerWnd_Update_Params
{
};

// Function Interface.ScenePlayerWnd.UpdateFileList
struct UScenePlayerWnd_UpdateFileList_Params
{
};

// Function Interface.ScenePlayerWnd.UpdateDirectory
struct UScenePlayerWnd_UpdateDirectory_Params
{
};

// Function Interface.ScenePlayerWnd.SetProperty
struct UScenePlayerWnd_SetProperty_Params
{
	class UWindowHandle*                               a_hWnd;                                                   // (Parm)
};

// Function Interface.ScenePlayerWnd.DeleteCurrentScenePlayer
struct UScenePlayerWnd_DeleteCurrentScenePlayer_Params
{
};

// Function Interface.ScenePlayerWnd.InitControlItem
struct UScenePlayerWnd_InitControlItem_Params
{
};

// Function Interface.ScenePlayerWnd.OnEvent
struct UScenePlayerWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.OnClickButton
struct UScenePlayerWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ScenePlayerWnd.Load
struct UScenePlayerWnd_Load_Params
{
};

// Function Interface.ScenePlayerWnd.InitializeCOD
struct UScenePlayerWnd_InitializeCOD_Params
{
};

// Function Interface.ScenePlayerWnd.Initialize
struct UScenePlayerWnd_Initialize_Params
{
};

// Function Interface.ScenePlayerWnd.OnLoad
struct UScenePlayerWnd_OnLoad_Params
{
};

// Function Interface.ScenePlayerWnd.OnRegisterEvent
struct UScenePlayerWnd_OnRegisterEvent_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.GetClanTypeFromIndex
struct USkillTrainClanTreeWnd_GetClanTypeFromIndex_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.SkillTrainClanTreeWnd.ShowNeedItems
struct USkillTrainClanTreeWnd_ShowNeedItems_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.OnShow
struct USkillTrainClanTreeWnd_OnShow_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.AddSkillTrainInfoExtend
struct USkillTrainClanTreeWnd_AddSkillTrainInfoExtend_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	struct FINT64                                      iNumOfItem;                                               // (Parm)
};

// Function Interface.SkillTrainClanTreeWnd.AddSkillTrainInfo
struct USkillTrainClanTreeWnd_AddSkillTrainInfo_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	struct FString                                     strOperateType;                                           // (Parm, NeedCtorLink)
	int                                                iMPConsume;                                               // (Parm)
	int                                                iCastRange;                                               // (Parm)
	struct FString                                     strDescription;                                           // (Parm, NeedCtorLink)
	int                                                iSPConsume;                                               // (Parm)
	struct FINT64                                      iEXPConsume;                                              // (Parm)
	struct FString                                     strEnchantName;                                           // (Parm, NeedCtorLink)
	struct FString                                     strEnchantDesc;                                           // (Parm, NeedCtorLink)
	int                                                iPercent;                                                 // (Parm)
};

// Function Interface.SkillTrainClanTreeWnd.ShowSkillTrainClanTreeWnd
struct USkillTrainClanTreeWnd_ShowSkillTrainClanTreeWnd_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.EnableProperClanSubWnd
struct USkillTrainClanTreeWnd_EnableProperClanSubWnd_Params
{
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
};

// Function Interface.SkillTrainClanTreeWnd.OnEvent
struct USkillTrainClanTreeWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainClanTreeWnd.OnbtnLearnClick
struct USkillTrainClanTreeWnd_OnbtnLearnClick_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.OnClickButton
struct USkillTrainClanTreeWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainClanTreeWnd.Load
struct USkillTrainClanTreeWnd_Load_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.InitHandleCOD
struct USkillTrainClanTreeWnd_InitHandleCOD_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.InitHandle
struct USkillTrainClanTreeWnd_InitHandle_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.DisableAllClanTreeWnd
struct USkillTrainClanTreeWnd_DisableAllClanTreeWnd_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.Initialize
struct USkillTrainClanTreeWnd_Initialize_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.OnLoad
struct USkillTrainClanTreeWnd_OnLoad_Params
{
};

// Function Interface.SkillTrainClanTreeWnd.OnRegisterEvent
struct USkillTrainClanTreeWnd_OnRegisterEvent_Params
{
};

// Function Interface.SkillTrainInfoWnd.ShowNeedItems
struct USkillTrainInfoWnd_ShowNeedItems_Params
{
};

// Function Interface.SkillTrainInfoWnd.OnShow
struct USkillTrainInfoWnd_OnShow_Params
{
};

// Function Interface.SkillTrainInfoWnd.AddSkillTrainInfoExtend
struct USkillTrainInfoWnd_AddSkillTrainInfoExtend_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	struct FINT64                                      iNumOfItem;                                               // (Parm)
};

// Function Interface.SkillTrainInfoWnd.AddSkillTrainInfo
struct USkillTrainInfoWnd_AddSkillTrainInfo_Params
{
	struct FString                                     strIconName;                                              // (Parm, NeedCtorLink)
	struct FString                                     strName;                                                  // (Parm, NeedCtorLink)
	int                                                iID;                                                      // (Parm)
	int                                                iLevel;                                                   // (Parm)
	struct FString                                     strOperateType;                                           // (Parm, NeedCtorLink)
	int                                                iMPConsume;                                               // (Parm)
	int                                                iCastRange;                                               // (Parm)
	struct FString                                     strDescription;                                           // (Parm, NeedCtorLink)
	int                                                iSPConsume;                                               // (Parm)
	struct FINT64                                      iEXPConsume;                                              // (Parm)
	struct FString                                     strEnchantName;                                           // (Parm, NeedCtorLink)
	struct FString                                     strEnchantDesc;                                           // (Parm, NeedCtorLink)
	int                                                iPercent;                                                 // (Parm)
};

// Function Interface.SkillTrainInfoWnd.ShowSkillTrainInfoWnd
struct USkillTrainInfoWnd_ShowSkillTrainInfoWnd_Params
{
};

// Function Interface.SkillTrainInfoWnd.OnEvent
struct USkillTrainInfoWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainInfoWnd.OnLearn
struct USkillTrainInfoWnd_OnLearn_Params
{
};

// Function Interface.SkillTrainInfoWnd.OnClickButton
struct USkillTrainInfoWnd_OnClickButton_Params
{
	struct FString                                     strBtnID;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.SkillTrainInfoWnd.OnLoad
struct USkillTrainInfoWnd_OnLoad_Params
{
};

// Function Interface.SkillTrainInfoWnd.OnRegisterEvent
struct USkillTrainInfoWnd_OnRegisterEvent_Params
{
};

// Function Interface.OnScreenMessageWnd.ValidateSystemMsg
struct UOnScreenMessageWnd_ValidateSystemMsg_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     StringTxt1;                                               // (Parm, NeedCtorLink)
	struct FString                                     StringTxt2;                                               // (Parm, NeedCtorLink)
};

// Function Interface.OnScreenMessageWnd.OnEvent
struct UOnScreenMessageWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.OnScreenMessageWnd.FadeOut
struct UOnScreenMessageWnd_FadeOut_Params
{
	struct FString                                     WndName;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.OnScreenMessageWnd.FadeIn
struct UOnScreenMessageWnd_FadeIn_Params
{
	struct FString                                     WndName;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.OnScreenMessageWnd.ShowMsg
struct UOnScreenMessageWnd_ShowMsg_Params
{
	int                                                WndNum;                                                   // (Parm)
	struct FString                                     TextValue;                                                // (Parm, NeedCtorLink)
	int                                                Duration;                                                 // (Parm)
	int                                                Animation;                                                // (Parm)
	int                                                FontType;                                                 // (Parm)
	int                                                BackgroundType;                                           // (Parm)
	int                                                ColorR;                                                   // (Parm)
	int                                                ColorG;                                                   // (Parm)
	int                                                ColorB;                                                   // (Parm)
};

// Function Interface.OnScreenMessageWnd.ResetAllMessage
struct UOnScreenMessageWnd_ResetAllMessage_Params
{
};

// Function Interface.OnScreenMessageWnd.OnHide
struct UOnScreenMessageWnd_OnHide_Params
{
};

// Function Interface.OnScreenMessageWnd.OnTimer
struct UOnScreenMessageWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.OnScreenMessageWnd.OnTick
struct UOnScreenMessageWnd_OnTick_Params
{
};

// Function Interface.OnScreenMessageWnd.OnLoad
struct UOnScreenMessageWnd_OnLoad_Params
{
};

// Function Interface.OnScreenMessageWnd.OnRegisterEvent
struct UOnScreenMessageWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.HandleChangeValue
struct UManorCropInfoSettingWnd_HandleChangeValue_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoSettingWnd.OnChangeBtn
struct UManorCropInfoSettingWnd_OnChangeBtn_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.CalculateSumOfDefaultPrice
struct UManorCropInfoSettingWnd_CalculateSumOfDefaultPrice_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.HandleAddItem
struct UManorCropInfoSettingWnd_HandleAddItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoSettingWnd.OnOk
struct UManorCropInfoSettingWnd_OnOk_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.OnClickButton
struct UManorCropInfoSettingWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoSettingWnd.OnDBClickListCtrlRecord
struct UManorCropInfoSettingWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoSettingWnd.DeleteAll
struct UManorCropInfoSettingWnd_DeleteAll_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.HandleShow
struct UManorCropInfoSettingWnd_HandleShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoSettingWnd.HandleSetToday
struct UManorCropInfoSettingWnd_HandleSetToday_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.HandleStop
struct UManorCropInfoSettingWnd_HandleStop_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.HandleDialogOK
struct UManorCropInfoSettingWnd_HandleDialogOK_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.OnEvent
struct UManorCropInfoSettingWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoSettingWnd.OnLoad
struct UManorCropInfoSettingWnd_OnLoad_Params
{
};

// Function Interface.ManorCropInfoSettingWnd.OnRegisterEvent
struct UManorCropInfoSettingWnd_OnRegisterEvent_Params
{
};

// Function Interface.UnionWnd.OnExitState
struct UUnionWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.UnionWnd.UpdatePartyMemberCount
struct UUnionWnd_UpdatePartyMemberCount_Params
{
	int                                                MasterID;                                                 // (Parm)
	int                                                MemberCount;                                              // (Parm)
};

// Function Interface.UnionWnd.UpdateCountInfo
struct UUnionWnd_UpdateCountInfo_Params
{
};

// Function Interface.UnionWnd.FindMasterID
struct UUnionWnd_FindMasterID_Params
{
	int                                                MasterID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UnionWnd.UpdateRoutingType
struct UUnionWnd_UpdateRoutingType_Params
{
	int                                                type;                                                     // (Parm)
};

// Function Interface.UnionWnd.HandleCommandChannelRoutingType
struct UUnionWnd_HandleCommandChannelRoutingType_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.HandleCommandChannelPartyUpdate
struct UUnionWnd_HandleCommandChannelPartyUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.HandleCommandChannelPartyList
struct UUnionWnd_HandleCommandChannelPartyList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.HandleCommandChannelInfo
struct UUnionWnd_HandleCommandChannelInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.HandleCommandChannelEnd
struct UUnionWnd_HandleCommandChannelEnd_Params
{
};

// Function Interface.UnionWnd.HandleCommandChannelStart
struct UUnionWnd_HandleCommandChannelStart_Params
{
};

// Function Interface.UnionWnd.RequestPartyMember
struct UUnionWnd_RequestPartyMember_Params
{
	bool                                               bShowWindow;                                              // (Parm)
};

// Function Interface.UnionWnd.OnMemberInfoClick
struct UUnionWnd_OnMemberInfoClick_Params
{
};

// Function Interface.UnionWnd.OnOutClick
struct UUnionWnd_OnOutClick_Params
{
};

// Function Interface.UnionWnd.OnBanClick
struct UUnionWnd_OnBanClick_Params
{
};

// Function Interface.UnionWnd.RequestNewInfo
struct UUnionWnd_RequestNewInfo_Params
{
};

// Function Interface.UnionWnd.OnRefreshClick
struct UUnionWnd_OnRefreshClick_Params
{
};

// Function Interface.UnionWnd.OnClickButton
struct UUnionWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.MemberClear
struct UUnionWnd_MemberClear_Params
{
};

// Function Interface.UnionWnd.Clear
struct UUnionWnd_Clear_Params
{
};

// Function Interface.UnionWnd.OnDBClickListCtrlRecord
struct UUnionWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.OnEvent
struct UUnionWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionWnd.OnEnterState
struct UUnionWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.UnionWnd.OnShow
struct UUnionWnd_OnShow_Params
{
};

// Function Interface.UnionWnd.OnLoad
struct UUnionWnd_OnLoad_Params
{
};

// Function Interface.UnionWnd.OnRegisterEvent
struct UUnionWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.CalculateSumOfDefaultPrice
struct UManorSeedInfoSettingWnd_CalculateSumOfDefaultPrice_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.HandleAddItem
struct UManorSeedInfoSettingWnd_HandleAddItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoSettingWnd.OnChangeBtn
struct UManorSeedInfoSettingWnd_OnChangeBtn_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.OnOk
struct UManorSeedInfoSettingWnd_OnOk_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.OnClickButton
struct UManorSeedInfoSettingWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoSettingWnd.OnDBClickListCtrlRecord
struct UManorSeedInfoSettingWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoSettingWnd.DeleteAll
struct UManorSeedInfoSettingWnd_DeleteAll_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.HandleChangeValue
struct UManorSeedInfoSettingWnd_HandleChangeValue_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoSettingWnd.HandleShow
struct UManorSeedInfoSettingWnd_HandleShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoSettingWnd.HandleSetToday
struct UManorSeedInfoSettingWnd_HandleSetToday_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.HandleStop
struct UManorSeedInfoSettingWnd_HandleStop_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.HandleDialogOK
struct UManorSeedInfoSettingWnd_HandleDialogOK_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.OnEvent
struct UManorSeedInfoSettingWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoSettingWnd.OnLoad
struct UManorSeedInfoSettingWnd_OnLoad_Params
{
};

// Function Interface.ManorSeedInfoSettingWnd.OnRegisterEvent
struct UManorSeedInfoSettingWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorInfoWnd.RequestSelectedData
struct UManorInfoWnd_RequestSelectedData_Params
{
	struct FString                                     WindowName;                                               // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ManorInfoWnd.OnComboBoxItemSelected
struct UManorInfoWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ManorInfoWnd.OnClickInfoTab
struct UManorInfoWnd_OnClickInfoTab_Params
{
	struct FString                                     TabName;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.OnClickButton
struct UManorInfoWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.HandleDefaultAdd
struct UManorInfoWnd_HandleDefaultAdd_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.HandleDefaultInfoShow
struct UManorInfoWnd_HandleDefaultInfoShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.HandleCropAdd
struct UManorInfoWnd_HandleCropAdd_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.HandleCropInfoShow
struct UManorInfoWnd_HandleCropInfoShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.HandleSeedAdd
struct UManorInfoWnd_HandleSeedAdd_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.HandleSeedInfoShow
struct UManorInfoWnd_HandleSeedInfoShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.OnEvent
struct UManorInfoWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorInfoWnd.OnLoad
struct UManorInfoWnd_OnLoad_Params
{
};

// Function Interface.ManorInfoWnd.OnRegisterEvent
struct UManorInfoWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorCropSellWnd.HandleSetCropSell
struct UManorCropSellWnd_HandleSetCropSell_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellWnd.HandleAddItem
struct UManorCropSellWnd_HandleAddItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellWnd.OnChangeBtn
struct UManorCropSellWnd_OnChangeBtn_Params
{
};

// Function Interface.ManorCropSellWnd.OnSellBtn
struct UManorCropSellWnd_OnSellBtn_Params
{
};

// Function Interface.ManorCropSellWnd.OnClickButton
struct UManorCropSellWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellWnd.OnDBClickListCtrlRecord
struct UManorCropSellWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellWnd.DeleteAll
struct UManorCropSellWnd_DeleteAll_Params
{
};

// Function Interface.ManorCropSellWnd.OnEvent
struct UManorCropSellWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellWnd.OnLoad
struct UManorCropSellWnd_OnLoad_Params
{
};

// Function Interface.ManorCropSellWnd.OnRegisterEvent
struct UManorCropSellWnd_OnRegisterEvent_Params
{
};

// Function Interface.DominionWarInfoWnd.HandleDominionWarJoinList
struct UDominionWarInfoWnd_HandleDominionWarJoinList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.HandleDominionInfo
struct UDominionWarInfoWnd_HandleDominionInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.HandleDominionInfoCnt
struct UDominionWarInfoWnd_HandleDominionInfoCnt_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.HandleResultJoinDominionWar
struct UDominionWarInfoWnd_HandleResultJoinDominionWar_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.HandleShowDominionWarJoinList
struct UDominionWarInfoWnd_HandleShowDominionWarJoinList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.HandleShowDominionWarJoisnListEnd
struct UDominionWarInfoWnd_HandleShowDominionWarJoisnListEnd_Params
{
};

// Function Interface.DominionWarInfoWnd.HandleShowDominionWarJoinListEnemyDominionInfo
struct UDominionWarInfoWnd_HandleShowDominionWarJoinListEnemyDominionInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.OnEvent
struct UDominionWarInfoWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.OnbtnAcceptClanClick
struct UDominionWarInfoWnd_OnbtnAcceptClanClick_Params
{
};

// Function Interface.DominionWarInfoWnd.OnbtnClanApplyBtnClick
struct UDominionWarInfoWnd_OnbtnClanApplyBtnClick_Params
{
};

// Function Interface.DominionWarInfoWnd.OnbtnApplyMachineryClick
struct UDominionWarInfoWnd_OnbtnApplyMachineryClick_Params
{
};

// Function Interface.DominionWarInfoWnd.OnClickButton
struct UDominionWarInfoWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.DominionWarInfoWnd.Load
struct UDominionWarInfoWnd_Load_Params
{
};

// Function Interface.DominionWarInfoWnd.InitHandleCOD
struct UDominionWarInfoWnd_InitHandleCOD_Params
{
};

// Function Interface.DominionWarInfoWnd.InitHandle
struct UDominionWarInfoWnd_InitHandle_Params
{
};

// Function Interface.DominionWarInfoWnd.OnRegisterEvent
struct UDominionWarInfoWnd_OnRegisterEvent_Params
{
};

// Function Interface.DominionWarInfoWnd.OnLoad
struct UDominionWarInfoWnd_OnLoad_Params
{
};

// Function Interface.DominionWarInfoWnd.InitClanTexName
struct UDominionWarInfoWnd_InitClanTexName_Params
{
};

// Function Interface.RefineryWnd.MoveItemBoxes
struct URefineryWnd_MoveItemBoxes_Params
{
	bool                                               a_Origin;                                                 // (Parm)
};

// Function Interface.RefineryWnd.PlayResultAnimation
struct URefineryWnd_PlayResultAnimation_Params
{
	int                                                grade;                                                    // (Parm)
};

// Function Interface.RefineryWnd.HandleDialogOK
struct URefineryWnd_HandleDialogOK_Params
{
};

// Function Interface.RefineryWnd.OnRefineDoneResult
struct URefineryWnd_OnRefineDoneResult_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.OnRefineRequest
struct URefineryWnd_OnRefineRequest_Params
{
};

// Function Interface.RefineryWnd.OnResultAnimEnd
struct URefineryWnd_OnResultAnimEnd_Params
{
};

// Function Interface.RefineryWnd.OnTextureAnimEnd
struct URefineryWnd_OnTextureAnimEnd_Params
{
	class UAnimTextureHandle*                          a_WindowHandle;                                           // (Parm)
};

// Function Interface.RefineryWnd.PlayRefineAnimation
struct URefineryWnd_PlayRefineAnimation_Params
{
};

// Function Interface.RefineryWnd.OnClickRefineButton
struct URefineryWnd_OnClickRefineButton_Params
{
};

// Function Interface.RefineryWnd.OnClickCancelButton
struct URefineryWnd_OnClickCancelButton_Params
{
};

// Function Interface.RefineryWnd.OnClickButton
struct URefineryWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.OnGemstoneValidationResult
struct URefineryWnd_OnGemstoneValidationResult_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.ValidateGemstoneItem
struct URefineryWnd_ValidateGemstoneItem_Params
{
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.OnRefinerItemValidationResult
struct URefineryWnd_OnRefinerItemValidationResult_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.ValidateSecondItem
struct URefineryWnd_ValidateSecondItem_Params
{
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.OnTargetItemValidationResult
struct URefineryWnd_OnTargetItemValidationResult_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.ValidateFirstItem
struct URefineryWnd_ValidateFirstItem_Params
{
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.OnDropItem
struct URefineryWnd_OnDropItem_Params
{
	struct FString                                     a_WindowID;                                               // (Parm, NeedCtorLink)
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.RefineryWnd.ShowRefineryInterface
struct URefineryWnd_ShowRefineryInterface_Params
{
};

// Function Interface.RefineryWnd.OnEvent
struct URefineryWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RefineryWnd.OnRefineryRefineResult
struct URefineryWnd_OnRefineryRefineResult_Params
{
};

// Function Interface.RefineryWnd.OnRefineryConfirmGemStoneResult
struct URefineryWnd_OnRefineryConfirmGemStoneResult_Params
{
};

// Function Interface.RefineryWnd.OnRefineryConfirmRefinerItemResult
struct URefineryWnd_OnRefineryConfirmRefinerItemResult_Params
{
};

// Function Interface.RefineryWnd.OnRefineryConfirmTargetItemResult
struct URefineryWnd_OnRefineryConfirmTargetItemResult_Params
{
};

// Function Interface.RefineryWnd.ResetReady
struct URefineryWnd_ResetReady_Params
{
};

// Function Interface.RefineryWnd.ResetBools
struct URefineryWnd_ResetBools_Params
{
};

// Function Interface.RefineryWnd.OnShow
struct URefineryWnd_OnShow_Params
{
};

// Function Interface.RefineryWnd.InitHandleCOD
struct URefineryWnd_InitHandleCOD_Params
{
};

// Function Interface.RefineryWnd.InitHandle
struct URefineryWnd_InitHandle_Params
{
};

// Function Interface.RefineryWnd.OnLoad
struct URefineryWnd_OnLoad_Params
{
};

// Function Interface.RefineryWnd.OnRegisterEvent
struct URefineryWnd_OnRegisterEvent_Params
{
};

// Function Interface.UIEditor_Worksheet.SetDefaultValue
struct UUIEditor_Worksheet_SetDefaultValue_Params
{
	class UWindowHandle*                               NewWnd;                                                   // (Parm)
	TEnumAsByte<EXMLControlType>                       type;                                                     // (Parm)
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.UIEditor_Worksheet.OnDropItemWithHandle
struct UUIEditor_Worksheet_OnDropItemWithHandle_Params
{
	class UWindowHandle*                               hTarget;                                                  // (Parm)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.UIEditor_Worksheet.OnDropWnd
struct UUIEditor_Worksheet_OnDropWnd_Params
{
	class UWindowHandle*                               hTarget;                                                  // (Parm)
	class UWindowHandle*                               hDropWnd;                                                 // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.UIEditor_Worksheet.DeleteWindow
struct UUIEditor_Worksheet_DeleteWindow_Params
{
};

// Function Interface.UIEditor_Worksheet.ClearAllTracker
struct UUIEditor_Worksheet_ClearAllTracker_Params
{
};

// Function Interface.UIEditor_Worksheet.OnKeyDown
struct UUIEditor_Worksheet_OnKeyDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
};

// Function Interface.PetStatusWnd.SetBuffButtonTooltip
struct UPetStatusWnd_SetBuffButtonTooltip_Params
{
};

// Function Interface.PetStatusWnd.OnBuffButton
struct UPetStatusWnd_OnBuffButton_Params
{
};

// Function Interface.PetStatusWnd.OnClickButton
struct UPetStatusWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetStatusWnd.OnLButtonDown
struct UPetStatusWnd_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.PetStatusWnd.UpdateBuff
struct UPetStatusWnd_UpdateBuff_Params
{
};

// Function Interface.PetStatusWnd.HandleShowBuffIcon
struct UPetStatusWnd_HandleShowBuffIcon_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetStatusWnd.HandlePetStatusSpelledList
struct UPetStatusWnd_HandlePetStatusSpelledList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetStatusWnd.HandlePetStatusShow
struct UPetStatusWnd_HandlePetStatusShow_Params
{
};

// Function Interface.PetStatusWnd.HandlePetInfoUpdate
struct UPetStatusWnd_HandlePetInfoUpdate_Params
{
};

// Function Interface.PetStatusWnd.HandlePetStatusClose
struct UPetStatusWnd_HandlePetStatusClose_Params
{
};

// Function Interface.PetStatusWnd.Clear
struct UPetStatusWnd_Clear_Params
{
};

// Function Interface.PetStatusWnd.OnEvent
struct UPetStatusWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetStatusWnd.OnEnterState
struct UPetStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.PetStatusWnd.OnHide
struct UPetStatusWnd_OnHide_Params
{
};

// Function Interface.PetStatusWnd.OnShow
struct UPetStatusWnd_OnShow_Params
{
};

// Function Interface.PetStatusWnd.Load
struct UPetStatusWnd_Load_Params
{
};

// Function Interface.PetStatusWnd.InitializeCOD
struct UPetStatusWnd_InitializeCOD_Params
{
};

// Function Interface.PetStatusWnd.Initialize
struct UPetStatusWnd_Initialize_Params
{
};

// Function Interface.PetStatusWnd.OnLoad
struct UPetStatusWnd_OnLoad_Params
{
};

// Function Interface.PetStatusWnd.OnRegisterEvent
struct UPetStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.SummonedStatusWnd.InitFATIGUEBar
struct USummonedStatusWnd_InitFATIGUEBar_Params
{
};

// Function Interface.SummonedStatusWnd.SetBuffButtonTooltip
struct USummonedStatusWnd_SetBuffButtonTooltip_Params
{
};

// Function Interface.SummonedStatusWnd.OnBuffButton
struct USummonedStatusWnd_OnBuffButton_Params
{
};

// Function Interface.SummonedStatusWnd.OnClickButton
struct USummonedStatusWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedStatusWnd.OnLButtonDown
struct USummonedStatusWnd_OnLButtonDown_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.SummonedStatusWnd.UpdateBuff
struct USummonedStatusWnd_UpdateBuff_Params
{
};

// Function Interface.SummonedStatusWnd.HandleShowBuffIcon
struct USummonedStatusWnd_HandleShowBuffIcon_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedStatusWnd.HandleSummonedStatusSpelledList
struct USummonedStatusWnd_HandleSummonedStatusSpelledList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedStatusWnd.HandleSummonedStatusShow
struct USummonedStatusWnd_HandleSummonedStatusShow_Params
{
};

// Function Interface.SummonedStatusWnd.HandlePetInfoUpdate
struct USummonedStatusWnd_HandlePetInfoUpdate_Params
{
};

// Function Interface.SummonedStatusWnd.HandlePetSummonedStatusClose
struct USummonedStatusWnd_HandlePetSummonedStatusClose_Params
{
};

// Function Interface.SummonedStatusWnd.HandleSummonedStatusRemainTime
struct USummonedStatusWnd_HandleSummonedStatusRemainTime_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedStatusWnd.ClearBuff
struct USummonedStatusWnd_ClearBuff_Params
{
};

// Function Interface.SummonedStatusWnd.Clear
struct USummonedStatusWnd_Clear_Params
{
};

// Function Interface.SummonedStatusWnd.OnEvent
struct USummonedStatusWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SummonedStatusWnd.OnEnterState
struct USummonedStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.SummonedStatusWnd.OnHide
struct USummonedStatusWnd_OnHide_Params
{
};

// Function Interface.SummonedStatusWnd.OnShow
struct USummonedStatusWnd_OnShow_Params
{
};

// Function Interface.SummonedStatusWnd.Load
struct USummonedStatusWnd_Load_Params
{
};

// Function Interface.SummonedStatusWnd.InitializeCOD
struct USummonedStatusWnd_InitializeCOD_Params
{
};

// Function Interface.SummonedStatusWnd.Initialize
struct USummonedStatusWnd_Initialize_Params
{
};

// Function Interface.SummonedStatusWnd.OnLoad
struct USummonedStatusWnd_OnLoad_Params
{
};

// Function Interface.SummonedStatusWnd.OnRegisterEvent
struct USummonedStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.BlockCounter.HandleHide
struct UBlockCounter_HandleHide_Params
{
};

// Function Interface.BlockCounter.ResetCurrentStat
struct UBlockCounter_ResetCurrentStat_Params
{
};

// Function Interface.BlockCounter.TimerReset
struct UBlockCounter_TimerReset_Params
{
	int                                                RemainTime;                                               // (Parm)
};

// Function Interface.BlockCounter.UpdateTimerCount
struct UBlockCounter_UpdateTimerCount_Params
{
};

// Function Interface.BlockCounter.DrawTimerCount
struct UBlockCounter_DrawTimerCount_Params
{
};

// Function Interface.BlockCounter.OnTimer
struct UBlockCounter_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.BlockCounter.OnClickButton
struct UBlockCounter_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BlockCounter.HandleBlockStatePlayer
struct UBlockCounter_HandleBlockStatePlayer_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCounter.HandleBlockStateTeam
struct UBlockCounter_HandleBlockStateTeam_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCounter.OnShow
struct UBlockCounter_OnShow_Params
{
};

// Function Interface.BlockCounter.OnHide
struct UBlockCounter_OnHide_Params
{
};

// Function Interface.BlockCounter.OnEvent
struct UBlockCounter_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.BlockCounter.InitializeCOD
struct UBlockCounter_InitializeCOD_Params
{
};

// Function Interface.BlockCounter.Initialize
struct UBlockCounter_Initialize_Params
{
};

// Function Interface.BlockCounter.OnLoad
struct UBlockCounter_OnLoad_Params
{
};

// Function Interface.BlockCounter.OnRegisterEvent
struct UBlockCounter_OnRegisterEvent_Params
{
};

// Function Interface.RecipeBookWnd.DeleteItem
struct URecipeBookWnd_DeleteItem_Params
{
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBookWnd.SetItemCount
struct URecipeBookWnd_SetItemCount_Params
{
	int                                                MaxCount;                                                 // (Parm)
};

// Function Interface.RecipeBookWnd.AddRecipeBookItem
struct URecipeBookWnd_AddRecipeBookItem_Params
{
	int                                                RecipeID;                                                 // (Parm)
};

// Function Interface.RecipeBookWnd.Clear
struct URecipeBookWnd_Clear_Params
{
};

// Function Interface.RecipeBookWnd.OnClickButton
struct URecipeBookWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBookWnd.OnDropItem
struct URecipeBookWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.RecipeBookWnd.OnDBClickItem
struct URecipeBookWnd_OnDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.RecipeBookWnd.OnEvent
struct URecipeBookWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeBookWnd.OnLoad
struct URecipeBookWnd_OnLoad_Params
{
};

// Function Interface.RecipeBookWnd.OnRegisterEvent
struct URecipeBookWnd_OnRegisterEvent_Params
{
};

// Function Interface.BlockCurWnd.ResetUI
struct UBlockCurWnd_ResetUI_Params
{
};

// Function Interface.BlockCurWnd.OnClickButton
struct UBlockCurWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.HandleBlockListRemove
struct UBlockCurWnd_HandleBlockListRemove_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.HandleBlockListAdd
struct UBlockCurWnd_HandleBlockListAdd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.HandleBlockStateResult
struct UBlockCurWnd_HandleBlockStateResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.HandleBlockStatePlayer
struct UBlockCurWnd_HandleBlockStatePlayer_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.HandleBlockStateTeam
struct UBlockCurWnd_HandleBlockStateTeam_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.HandleBlockListStart
struct UBlockCurWnd_HandleBlockListStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.OnEvent
struct UBlockCurWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurWnd.InitializeCOD
struct UBlockCurWnd_InitializeCOD_Params
{
};

// Function Interface.BlockCurWnd.Initialize
struct UBlockCurWnd_Initialize_Params
{
};

// Function Interface.BlockCurWnd.OnShow
struct UBlockCurWnd_OnShow_Params
{
};

// Function Interface.BlockCurWnd.OnLoad
struct UBlockCurWnd_OnLoad_Params
{
};

// Function Interface.BlockCurWnd.OnRegisterEvent
struct UBlockCurWnd_OnRegisterEvent_Params
{
};

// Function Interface.RecipeShopWnd.HandleMoveDownItem
struct URecipeShopWnd_HandleMoveDownItem_Params
{
};

// Function Interface.RecipeShopWnd.HandleMoveUpItem
struct URecipeShopWnd_HandleMoveUpItem_Params
{
};

// Function Interface.RecipeShopWnd.StartRecipeShop
struct URecipeShopWnd_StartRecipeShop_Params
{
};

// Function Interface.RecipeShopWnd.UpdateShopItemCount
struct URecipeShopWnd_UpdateShopItemCount_Params
{
	int                                                Count;                                                    // (Parm)
};

// Function Interface.RecipeShopWnd.DeleteShopItem
struct URecipeShopWnd_DeleteShopItem_Params
{
	struct FItemInfo                                   DeleteItem;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RecipeShopWnd.UpdateShopItem
struct URecipeShopWnd_UpdateShopItem_Params
{
	struct FItemInfo                                   AddItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RecipeShopWnd.ShowShopItemAddDialog
struct URecipeShopWnd_ShowShopItemAddDialog_Params
{
	struct FItemInfo                                   AddItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.RecipeShopWnd.AddRecipeShopItem
struct URecipeShopWnd_AddRecipeShopItem_Params
{
	int                                                RecipeID;                                                 // (Parm)
	int                                                CanbeMade;                                                // (Parm)
	struct FINT64                                      MakingFee;                                                // (Parm)
};

// Function Interface.RecipeShopWnd.AddRecipeBookItem
struct URecipeShopWnd_AddRecipeBookItem_Params
{
	int                                                RecipeID;                                                 // (Parm)
};

// Function Interface.RecipeShopWnd.ClearHandleItem
struct URecipeShopWnd_ClearHandleItem_Params
{
};

// Function Interface.RecipeShopWnd.Clear
struct URecipeShopWnd_Clear_Params
{
};

// Function Interface.RecipeShopWnd.OnDropItem
struct URecipeShopWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.RecipeShopWnd.OnDBClickItem
struct URecipeShopWnd_OnDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.RecipeShopWnd.CloseWindow
struct URecipeShopWnd_CloseWindow_Params
{
};

// Function Interface.RecipeShopWnd.OnSendPacketWhenHiding
struct URecipeShopWnd_OnSendPacketWhenHiding_Params
{
};

// Function Interface.RecipeShopWnd.OnEvent
struct URecipeShopWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeShopWnd.OnClickButton
struct URecipeShopWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RecipeShopWnd.OnLoad
struct URecipeShopWnd_OnLoad_Params
{
};

// Function Interface.RecipeShopWnd.OnRegisterEvent
struct URecipeShopWnd_OnRegisterEvent_Params
{
};

// Function Interface.MacroEditWnd.SaveMacro
struct UMacroEditWnd_SaveMacro_Params
{
};

// Function Interface.MacroEditWnd.SetMacroID
struct UMacroEditWnd_SetMacroID_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
};

// Function Interface.MacroEditWnd.HandleMacroShowEditWnd
struct UMacroEditWnd_HandleMacroShowEditWnd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.HandleMacroDeleted
struct UMacroEditWnd_HandleMacroDeleted_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.Clear
struct UMacroEditWnd_Clear_Params
{
};

// Function Interface.MacroEditWnd.UpdateIconName
struct UMacroEditWnd_UpdateIconName_Params
{
};

// Function Interface.MacroEditWnd.UpdateIcon
struct UMacroEditWnd_UpdateIcon_Params
{
};

// Function Interface.MacroEditWnd.OnClickRight
struct UMacroEditWnd_OnClickRight_Params
{
};

// Function Interface.MacroEditWnd.OnClickLeft
struct UMacroEditWnd_OnClickLeft_Params
{
};

// Function Interface.MacroEditWnd.OnChangeEditBox
struct UMacroEditWnd_OnChangeEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.OnDragItemEnd
struct UMacroEditWnd_OnDragItemEnd_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.OnDragItemStart
struct UMacroEditWnd_OnDragItemStart_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.OnDropItem
struct UMacroEditWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.MacroEditWnd.OnClickSave
struct UMacroEditWnd_OnClickSave_Params
{
};

// Function Interface.MacroEditWnd.OnClickCancel
struct UMacroEditWnd_OnClickCancel_Params
{
};

// Function Interface.MacroEditWnd.OnClickHelp
struct UMacroEditWnd_OnClickHelp_Params
{
};

// Function Interface.MacroEditWnd.OnClickInfo
struct UMacroEditWnd_OnClickInfo_Params
{
};

// Function Interface.MacroEditWnd.InitTabOrder
struct UMacroEditWnd_InitTabOrder_Params
{
};

// Function Interface.MacroEditWnd.OnEvent
struct UMacroEditWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.OnClickButton
struct UMacroEditWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroEditWnd.OnHide
struct UMacroEditWnd_OnHide_Params
{
};

// Function Interface.MacroEditWnd.OnShow
struct UMacroEditWnd_OnShow_Params
{
};

// Function Interface.MacroEditWnd.OnLoad
struct UMacroEditWnd_OnLoad_Params
{
};

// Function Interface.MacroEditWnd.OnRegisterEvent
struct UMacroEditWnd_OnRegisterEvent_Params
{
};

// Function Interface.LobbyMenuWnd.OnComboBoxItemSelected
struct ULobbyMenuWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.LobbyMenuWnd.ResetCharacterSelectWindow
struct ULobbyMenuWnd_ResetCharacterSelectWindow_Params
{
};

// Function Interface.LobbyMenuWnd.HandleDialogDelete
struct ULobbyMenuWnd_HandleDialogDelete_Params
{
	bool                                               bOK;                                                      // (Parm)
	int                                                SelectedCharacter;                                        // (Parm)
};

// Function Interface.LobbyMenuWnd.HandleDialogRestore
struct ULobbyMenuWnd_HandleDialogRestore_Params
{
	bool                                               bOK;                                                      // (Parm)
	int                                                SelectedCharacter;                                        // (Parm)
};

// Function Interface.LobbyMenuWnd.HandleDialogResult
struct ULobbyMenuWnd_HandleDialogResult_Params
{
	bool                                               bOK;                                                      // (Parm)
};

// Function Interface.LobbyMenuWnd.ShowRestoreDialog
struct ULobbyMenuWnd_ShowRestoreDialog_Params
{
	int                                                SelectedCharacter;                                        // (Parm)
};

// Function Interface.LobbyMenuWnd.HandleShowDialog
struct ULobbyMenuWnd_HandleShowDialog_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.LobbyMenuWnd.HandleCharacterSelect
struct ULobbyMenuWnd_HandleCharacterSelect_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.LobbyMenuWnd.HandleAddCharacterName
struct ULobbyMenuWnd_HandleAddCharacterName_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.LobbyMenuWnd.HandleMenuButtonEnable
struct ULobbyMenuWnd_HandleMenuButtonEnable_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.LobbyMenuWnd.OnEvent
struct ULobbyMenuWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.LobbyMenuWnd.ShowDeleteDialog
struct ULobbyMenuWnd_ShowDeleteDialog_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.LobbyMenuWnd.OnClickDeleteCharacter
struct ULobbyMenuWnd_OnClickDeleteCharacter_Params
{
};

// Function Interface.LobbyMenuWnd.OnClickStartButton
struct ULobbyMenuWnd_OnClickStartButton_Params
{
};

// Function Interface.LobbyMenuWnd.OnKeyUp
struct ULobbyMenuWnd_OnKeyUp_Params
{
	class UWindowHandle*                               a_WindowHandle;                                           // (Parm)
	TEnumAsByte<EInputKey>                             Key;                                                      // (Parm)
};

// Function Interface.LobbyMenuWnd.OnClickButton
struct ULobbyMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.LobbyMenuWnd.OnShow
struct ULobbyMenuWnd_OnShow_Params
{
};

// Function Interface.LobbyMenuWnd.OnLoad
struct ULobbyMenuWnd_OnLoad_Params
{
};

// Function Interface.LobbyMenuWnd.OnRegisterEvent
struct ULobbyMenuWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnChatMarkedEditBox
struct UPartyMatchRoomWnd_OnChatMarkedEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.OnCompleteEditBox
struct UPartyMatchRoomWnd_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.OnExitButtonClick
struct UPartyMatchRoomWnd_OnExitButtonClick_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnInviteButtonClick
struct UPartyMatchRoomWnd_OnInviteButtonClick_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnBanButtonClick
struct UPartyMatchRoomWnd_OnBanButtonClick_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnRoomSettingButtonClick
struct UPartyMatchRoomWnd_OnRoomSettingButtonClick_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnWaitListButtonClick
struct UPartyMatchRoomWnd_OnWaitListButtonClick_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnClickButton
struct UPartyMatchRoomWnd_OnClickButton_Params
{
	struct FString                                     a_strButtonName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.UpdateData
struct UPartyMatchRoomWnd_UpdateData_Params
{
	bool                                               a_ToControl;                                              // (Parm)
};

// Function Interface.PartyMatchRoomWnd.HandlePartyMatchChatMessage
struct UPartyMatchRoomWnd_HandlePartyMatchChatMessage_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.HandlePartyMatchRoomMemberUpdate
struct UPartyMatchRoomWnd_HandlePartyMatchRoomMemberUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.RemoveMember
struct UPartyMatchRoomWnd_RemoveMember_Params
{
	int                                                a_MemberID;                                               // (Parm)
};

// Function Interface.PartyMatchRoomWnd.AddMember
struct UPartyMatchRoomWnd_AddMember_Params
{
	int                                                a_MemberID;                                               // (Parm)
	struct FString                                     a_MemberName;                                             // (Parm, NeedCtorLink)
	int                                                a_ClassID;                                                // (Parm)
	int                                                a_Level;                                                  // (Parm)
	int                                                a_ZoneID;                                                 // (Parm)
	int                                                a_MembershipType;                                         // (Parm)
};

// Function Interface.PartyMatchRoomWnd.HandlePartyMatchRoomMember
struct UPartyMatchRoomWnd_HandlePartyMatchRoomMember_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.UpdateMyMembershipType
struct UPartyMatchRoomWnd_UpdateMyMembershipType_Params
{
};

// Function Interface.PartyMatchRoomWnd.HandlePartyMatchRoomClose
struct UPartyMatchRoomWnd_HandlePartyMatchRoomClose_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnHide
struct UPartyMatchRoomWnd_OnHide_Params
{
};

// Function Interface.PartyMatchRoomWnd.UpdateWaitListWnd
struct UPartyMatchRoomWnd_UpdateWaitListWnd_Params
{
};

// Function Interface.PartyMatchRoomWnd.HandlePartyMatchRoomStart
struct UPartyMatchRoomWnd_HandlePartyMatchRoomStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.ExitPartyRoom
struct UPartyMatchRoomWnd_ExitPartyRoom_Params
{
};

// Function Interface.PartyMatchRoomWnd.HandleRestart
struct UPartyMatchRoomWnd_HandleRestart_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnEvent
struct UPartyMatchRoomWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchRoomWnd.OnEnterState
struct UPartyMatchRoomWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.PartyMatchRoomWnd.OnSendPacketWhenHiding
struct UPartyMatchRoomWnd_OnSendPacketWhenHiding_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnLoad
struct UPartyMatchRoomWnd_OnLoad_Params
{
};

// Function Interface.PartyMatchRoomWnd.OnRegisterEvent
struct UPartyMatchRoomWnd_OnRegisterEvent_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnMyLocBtnClick
struct UTeleportBookMarkWnd_OnMyLocBtnClick_Params
{
};

// Function Interface.TeleportBookMarkWnd.SetBookMarkCount
struct UTeleportBookMarkWnd_SetBookMarkCount_Params
{
	int                                                ableSlotNum;                                              // (Parm)
	int                                                curSlotNum;                                               // (Parm)
};

// Function Interface.TeleportBookMarkWnd.OnClickItem
struct UTeleportBookMarkWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.TeleportBookMarkWnd.OnDBClickItem
struct UTeleportBookMarkWnd_OnDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.TeleportBookMarkWnd.Clear
struct UTeleportBookMarkWnd_Clear_Params
{
};

// Function Interface.TeleportBookMarkWnd.SetLocatorOnMiniMap2
struct UTeleportBookMarkWnd_SetLocatorOnMiniMap2_Params
{
};

// Function Interface.TeleportBookMarkWnd.SetLocatorOnMiniMap
struct UTeleportBookMarkWnd_SetLocatorOnMiniMap_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
};

// Function Interface.TeleportBookMarkWnd.SetCurrentLocOnMinimap
struct UTeleportBookMarkWnd_SetCurrentLocOnMinimap_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnbtnSaveMyLocClick
struct UTeleportBookMarkWnd_OnbtnSaveMyLocClick_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnModifyBookMarkSlot
struct UTeleportBookMarkWnd_OnModifyBookMarkSlot_Params
{
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkWnd.OnDeleteBookMarkSlot
struct UTeleportBookMarkWnd_OnDeleteBookMarkSlot_Params
{
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkWnd.HandleBookMarkList
struct UTeleportBookMarkWnd_HandleBookMarkList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkWnd.SetUnActiveSlots
struct UTeleportBookMarkWnd_SetUnActiveSlots_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnDropItem
struct UTeleportBookMarkWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.TeleportBookMarkWnd.OpenWindow
struct UTeleportBookMarkWnd_OpenWindow_Params
{
};

// Function Interface.TeleportBookMarkWnd.HandleUpdateItemCountSystemMessage
struct UTeleportBookMarkWnd_HandleUpdateItemCountSystemMessage_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.TeleportBookMarkWnd.OnEvent
struct UTeleportBookMarkWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkWnd.OnClickButton
struct UTeleportBookMarkWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkWnd.OnRegisterEvent
struct UTeleportBookMarkWnd_OnRegisterEvent_Params
{
};

// Function Interface.TeleportBookMarkWnd.Load
struct UTeleportBookMarkWnd_Load_Params
{
};

// Function Interface.TeleportBookMarkWnd.InitializeCOD
struct UTeleportBookMarkWnd_InitializeCOD_Params
{
};

// Function Interface.TeleportBookMarkWnd.Initialize
struct UTeleportBookMarkWnd_Initialize_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnLoad
struct UTeleportBookMarkWnd_OnLoad_Params
{
};

// Function Interface.TeleportBookMarkWnd.GetTeleportItemCnt
struct UTeleportBookMarkWnd_GetTeleportItemCnt_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnShow
struct UTeleportBookMarkWnd_OnShow_Params
{
};

// Function Interface.TeleportBookMarkWnd.OnEnterState
struct UTeleportBookMarkWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.InviteClanPopWnd.InitializeComboBox
struct UInviteClanPopWnd_InitializeComboBox_Params
{
};

// Function Interface.InviteClanPopWnd.AskJoin
struct UInviteClanPopWnd_AskJoin_Params
{
};

// Function Interface.InviteClanPopWnd.OnClickButton
struct UInviteClanPopWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.InviteClanPopWnd.OnEvent
struct UInviteClanPopWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.InviteClanPopWnd.OnShow
struct UInviteClanPopWnd_OnShow_Params
{
};

// Function Interface.InviteClanPopWnd.OnLoad
struct UInviteClanPopWnd_OnLoad_Params
{
};

// Function Interface.InviteClanPopWnd.OnRegisterEvent
struct UInviteClanPopWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMInventoryWnd.UpdateHennaInfo
struct UGMInventoryWnd_UpdateHennaInfo_Params
{
};

// Function Interface.GMInventoryWnd.IsLOrRFinger
struct UGMInventoryWnd_IsLOrRFinger_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMInventoryWnd.IsLOrREar
struct UGMInventoryWnd_IsLOrREar_Params
{
	struct FItemID                                     sID;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMInventoryWnd.EquipItemUpdate
struct UGMInventoryWnd_EquipItemUpdate_Params
{
	struct FItemInfo                                   a_Info;                                                   // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.OnRClickItem
struct UGMInventoryWnd_OnRClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.GMInventoryWnd.OnDBClickItem
struct UGMInventoryWnd_OnDBClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.GMInventoryWnd.OnDropItemSource
struct UGMInventoryWnd_OnDropItemSource_Params
{
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.OnDropItem
struct UGMInventoryWnd_OnDropItem_Params
{
	struct FString                                     strTarget;                                                // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.GMInventoryWnd.HandleGMUpdateHennaInfo
struct UGMInventoryWnd_HandleGMUpdateHennaInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.HandleGMAddHennaInfo
struct UGMInventoryWnd_HandleGMAddHennaInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.HandleGMObservingInventoryClear
struct UGMInventoryWnd_HandleGMObservingInventoryClear_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.GetMyInventoryLimit
struct UGMInventoryWnd_GetMyInventoryLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMInventoryWnd.SetAdenaText
struct UGMInventoryWnd_SetAdenaText_Params
{
};

// Function Interface.GMInventoryWnd.SetAdena
struct UGMInventoryWnd_SetAdena_Params
{
	struct FINT64                                      a_Adena;                                                  // (Parm)
};

// Function Interface.GMInventoryWnd.HandleAddItem
struct UGMInventoryWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.HandleGMObservingInventoryAddItem
struct UGMInventoryWnd_HandleGMObservingInventoryAddItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.OnEvent
struct UGMInventoryWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.ShowInventory
struct UGMInventoryWnd_ShowInventory_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMInventoryWnd.OnHide
struct UGMInventoryWnd_OnHide_Params
{
};

// Function Interface.GMInventoryWnd.OnShow
struct UGMInventoryWnd_OnShow_Params
{
};

// Function Interface.GMInventoryWnd.OnLoad
struct UGMInventoryWnd_OnLoad_Params
{
};

// Function Interface.GMInventoryWnd.OnRegisterEvent
struct UGMInventoryWnd_OnRegisterEvent_Params
{
};

// Function Interface.CouponEventWnd.count_editBox
struct UCouponEventWnd_count_editBox_Params
{
	struct FString                                     currentboxnum;                                            // (Parm, NeedCtorLink)
};

// Function Interface.CouponEventWnd.OnChangeEditBox
struct UCouponEventWnd_OnChangeEditBox_Params
{
	struct FString                                     EditBoxID;                                                // (Parm, NeedCtorLink)
};

// Function Interface.CouponEventWnd.Proc_Delivery
struct UCouponEventWnd_Proc_Delivery_Params
{
};

// Function Interface.CouponEventWnd.OnClickButton
struct UCouponEventWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CouponEventWnd.OnEvent
struct UCouponEventWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CouponEventWnd.OnShow
struct UCouponEventWnd_OnShow_Params
{
};

// Function Interface.CouponEventWnd.resetEditBox
struct UCouponEventWnd_resetEditBox_Params
{
};

// Function Interface.CouponEventWnd.initValue
struct UCouponEventWnd_initValue_Params
{
};

// Function Interface.CouponEventWnd.OnLoad
struct UCouponEventWnd_OnLoad_Params
{
};

// Function Interface.CouponEventWnd.OnRegisterEvent
struct UCouponEventWnd_OnRegisterEvent_Params
{
};

// Function Interface.UIEditor_ControlManager.OnOrderClick
struct UUIEditor_ControlManager_OnOrderClick_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.GetFullName
struct UUIEditor_ControlManager_GetFullName_Params
{
	class UWindowHandle*                               hWnd;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.SelectControlList
struct UUIEditor_ControlManager_SelectControlList_Params
{
	struct FString                                     FullName;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.FindWindowHandle
struct UUIEditor_ControlManager_FindWindowHandle_Params
{
	struct FString                                     a_FullName;                                               // (Parm, NeedCtorLink)
	class UWindowHandle*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UIEditor_ControlManager.ReverseParentName
struct UUIEditor_ControlManager_ReverseParentName_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.SelectControl
struct UUIEditor_ControlManager_SelectControl_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.AddChildWIndowToList
struct UUIEditor_ControlManager_AddChildWIndowToList_Params
{
	class UWindowHandle*                               hWnd;                                                     // (Parm)
	struct FString                                     ParentName;                                               // (Parm, NeedCtorLink)
	int                                                Depth;                                                    // (Parm)
};

// Function Interface.UIEditor_ControlManager.HandleEditorSetProperty
struct UUIEditor_ControlManager_HandleEditorSetProperty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.HandleTrackerDetach
struct UUIEditor_ControlManager_HandleTrackerDetach_Params
{
};

// Function Interface.UIEditor_ControlManager.HandleTrackerAttach
struct UUIEditor_ControlManager_HandleTrackerAttach_Params
{
};

// Function Interface.UIEditor_ControlManager.RefreshControlList
struct UUIEditor_ControlManager_RefreshControlList_Params
{
};

// Function Interface.UIEditor_ControlManager.UpdateControlList
struct UUIEditor_ControlManager_UpdateControlList_Params
{
};

// Function Interface.UIEditor_ControlManager.OnDBClickListCtrlRecord
struct UUIEditor_ControlManager_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.OnClickListCtrlRecord
struct UUIEditor_ControlManager_OnClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.OnAlignClick
struct UUIEditor_ControlManager_OnAlignClick_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.GetCurrentControlTypeString
struct UUIEditor_ControlManager_GetCurrentControlTypeString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.GetCurrentControlType
struct UUIEditor_ControlManager_GetCurrentControlType_Params
{
	TEnumAsByte<EXMLControlType>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UIEditor_ControlManager.OnClickCheckBox
struct UUIEditor_ControlManager_OnClickCheckBox_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.OnClickButton
struct UUIEditor_ControlManager_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.OnEvent
struct UUIEditor_ControlManager_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_ControlManager.InitNewControlList
struct UUIEditor_ControlManager_InitNewControlList_Params
{
};

// Function Interface.UIEditor_ControlManager.InitControlItem
struct UUIEditor_ControlManager_InitControlItem_Params
{
};

// Function Interface.UIEditor_ControlManager.InitHandle
struct UUIEditor_ControlManager_InitHandle_Params
{
};

// Function Interface.UIEditor_ControlManager.OnLoad
struct UUIEditor_ControlManager_OnLoad_Params
{
};

// Function Interface.UIEditor_ControlManager.OnRegisterEvent
struct UUIEditor_ControlManager_OnRegisterEvent_Params
{
};

// Function Interface.CleftCurWnd.ResetUI
struct UCleftCurWnd_ResetUI_Params
{
};

// Function Interface.CleftCurWnd.OnClickButton
struct UCleftCurWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.HandleCleftListRemove
struct UCleftCurWnd_HandleCleftListRemove_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.HandleCleftListAdd
struct UCleftCurWnd_HandleCleftListAdd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.HandleCleftStateResult
struct UCleftCurWnd_HandleCleftStateResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.HandleCleftStatePlayer
struct UCleftCurWnd_HandleCleftStatePlayer_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.HandleCleftStateTeam
struct UCleftCurWnd_HandleCleftStateTeam_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.HandleCleftListStart
struct UCleftCurWnd_HandleCleftListStart_Params
{
};

// Function Interface.CleftCurWnd.OnEvent
struct UCleftCurWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurWnd.InitializeCOD
struct UCleftCurWnd_InitializeCOD_Params
{
};

// Function Interface.CleftCurWnd.Initialize
struct UCleftCurWnd_Initialize_Params
{
};

// Function Interface.CleftCurWnd.OnShow
struct UCleftCurWnd_OnShow_Params
{
};

// Function Interface.CleftCurWnd.OnLoad
struct UCleftCurWnd_OnLoad_Params
{
};

// Function Interface.CleftCurWnd.OnRegisterEvent
struct UCleftCurWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMDetailStatusWnd.GetMyExpRate
struct UGMDetailStatusWnd_GetMyExpRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMDetailStatusWnd.GetMovingSpeed
struct UGMDetailStatusWnd_GetMovingSpeed_Params
{
	struct FUserInfo                                   a_UserInfo;                                               // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.GMDetailStatusWnd.GetMyUserInfo
struct UGMDetailStatusWnd_GetMyUserInfo_Params
{
	struct FUserInfo                                   a_MyUserInfo;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMDetailStatusWnd.HandleGMUpdateHennaInfo
struct UGMDetailStatusWnd_HandleGMUpdateHennaInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMDetailStatusWnd.HandleGMObservingUserInfoUpdate
struct UGMDetailStatusWnd_HandleGMObservingUserInfoUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMDetailStatusWnd.OnEvent
struct UGMDetailStatusWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMDetailStatusWnd.ShowStatus
struct UGMDetailStatusWnd_ShowStatus_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMDetailStatusWnd.OnEnterState
struct UGMDetailStatusWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.GMDetailStatusWnd.OnHide
struct UGMDetailStatusWnd_OnHide_Params
{
};

// Function Interface.GMDetailStatusWnd.OnShow
struct UGMDetailStatusWnd_OnShow_Params
{
};

// Function Interface.GMDetailStatusWnd.OnLoad
struct UGMDetailStatusWnd_OnLoad_Params
{
};

// Function Interface.GMDetailStatusWnd.OnRegisterEvent
struct UGMDetailStatusWnd_OnRegisterEvent_Params
{
};

// Function Interface.CleftEnterWnd.GetMyUserInfo
struct UCleftEnterWnd_GetMyUserInfo_Params
{
	struct FUserInfo                                   a_MyUserInfo;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.CleftEnterWnd.OnHide
struct UCleftEnterWnd_OnHide_Params
{
};

// Function Interface.CleftEnterWnd.OnClickButton
struct UCleftEnterWnd_OnClickButton_Params
{
	struct FString                                     ButtonID;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.CleftEnterWnd.OnLButtonUp
struct UCleftEnterWnd_OnLButtonUp_Params
{
	class UWindowHandle*                               WindowHandle;                                             // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.CleftEnterWnd.UpdateNeedMember
struct UCleftEnterWnd_UpdateNeedMember_Params
{
};

// Function Interface.CleftEnterWnd.HandleCleftListInfo
struct UCleftEnterWnd_HandleCleftListInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftEnterWnd.HandleCleftListClose
struct UCleftEnterWnd_HandleCleftListClose_Params
{
};

// Function Interface.CleftEnterWnd.HandleCleftListRemove
struct UCleftEnterWnd_HandleCleftListRemove_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftEnterWnd.HandleCleftListAdd
struct UCleftEnterWnd_HandleCleftListAdd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftEnterWnd.HandleCleftListStart
struct UCleftEnterWnd_HandleCleftListStart_Params
{
};

// Function Interface.CleftEnterWnd.ResetUI
struct UCleftEnterWnd_ResetUI_Params
{
};

// Function Interface.CleftEnterWnd.OnEvent
struct UCleftEnterWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftEnterWnd.InitializeCOD
struct UCleftEnterWnd_InitializeCOD_Params
{
};

// Function Interface.CleftEnterWnd.Initialize
struct UCleftEnterWnd_Initialize_Params
{
};

// Function Interface.CleftEnterWnd.OnShow
struct UCleftEnterWnd_OnShow_Params
{
};

// Function Interface.CleftEnterWnd.OnLoad
struct UCleftEnterWnd_OnLoad_Params
{
};

// Function Interface.CleftEnterWnd.OnRegisterEvent
struct UCleftEnterWnd_OnRegisterEvent_Params
{
};

// Function Interface.MinimapWnd_Expand.InitializeLocation
struct UMinimapWnd_Expand_InitializeLocation_Params
{
};

// Function Interface.MinimapWnd_Expand.GetContinent
struct UMinimapWnd_Expand_GetContinent_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.MinimapWnd_Expand.SetLocContinent
struct UMinimapWnd_Expand_SetLocContinent_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
};

// Function Interface.MinimapWnd_Expand.SetContinent
struct UMinimapWnd_Expand_SetContinent_Params
{
	int                                                Continent;                                                // (Parm)
};

// Function Interface.MinimapWnd_Expand.SelectSunOrMoon
struct UMinimapWnd_Expand_SelectSunOrMoon_Params
{
	int                                                GameHour;                                                 // (Parm)
};

// Function Interface.MinimapWnd_Expand.HandleUpdateGameTime
struct UMinimapWnd_Expand_HandleUpdateGameTime_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.DrawCursedWeapon
struct UMinimapWnd_Expand_DrawCursedWeapon_Params
{
	struct FString                                     WindowName;                                               // (Parm, NeedCtorLink)
	int                                                ItemID;                                                   // (Parm)
	struct FString                                     cursedName;                                               // (Parm, NeedCtorLink)
	struct FVector                                     vecLoc;                                                   // (Parm)
	bool                                               bDropped;                                                 // (Parm)
	bool                                               bRefresh;                                                 // (Parm)
};

// Function Interface.MinimapWnd_Expand.HandleCursedWeaponLoctaion
struct UMinimapWnd_Expand_HandleCursedWeaponLoctaion_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.HandleCursedWeaponList
struct UMinimapWnd_Expand_HandleCursedWeaponList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.OnClickPartyLocButton
struct UMinimapWnd_Expand_OnClickPartyLocButton_Params
{
};

// Function Interface.MinimapWnd_Expand.AdjustMapToPlayerPosition
struct UMinimapWnd_Expand_AdjustMapToPlayerPosition_Params
{
	bool                                               a_ZoomToTownMap;                                          // (Parm)
};

// Function Interface.MinimapWnd_Expand.OnClickMyLocButton
struct UMinimapWnd_Expand_OnClickMyLocButton_Params
{
};

// Function Interface.MinimapWnd_Expand.OnClickTargetButton
struct UMinimapWnd_Expand_OnClickTargetButton_Params
{
};

// Function Interface.MinimapWnd_Expand.OnClickCollapseButton
struct UMinimapWnd_Expand_OnClickCollapseButton_Params
{
};

// Function Interface.MinimapWnd_Expand.OnClickButton
struct UMinimapWnd_Expand_OnClickButton_Params
{
	struct FString                                     a_ButtonID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.OnComboBoxItemSelected
struct UMinimapWnd_Expand_OnComboBoxItemSelected_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.MinimapWnd_Expand.RequestCursedWeaponLocation
struct UMinimapWnd_Expand_RequestCursedWeaponLocation_Params
{
};

// Function Interface.MinimapWnd_Expand.HandleMinimapHideQuest
struct UMinimapWnd_Expand_HandleMinimapHideQuest_Params
{
};

// Function Interface.MinimapWnd_Expand.HandleMinimapShowQuest
struct UMinimapWnd_Expand_HandleMinimapShowQuest_Params
{
};

// Function Interface.MinimapWnd_Expand.HandleMinimapDeleteAllTarget
struct UMinimapWnd_Expand_HandleMinimapDeleteAllTarget_Params
{
};

// Function Interface.MinimapWnd_Expand.HandleMinimapDeleteTarget
struct UMinimapWnd_Expand_HandleMinimapDeleteTarget_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.HandleMinimapAddTarget
struct UMinimapWnd_Expand_HandleMinimapAddTarget_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.HandlePartyMemberChanged
struct UMinimapWnd_Expand_HandlePartyMemberChanged_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.OnHide
struct UMinimapWnd_Expand_OnHide_Params
{
};

// Function Interface.MinimapWnd_Expand.ResetMiniMapSize
struct UMinimapWnd_Expand_ResetMiniMapSize_Params
{
	int                                                CurrentWidth;                                             // (Parm)
	int                                                CurrentHeight;                                            // (Parm)
};

// Function Interface.MinimapWnd_Expand.CheckResolution
struct UMinimapWnd_Expand_CheckResolution_Params
{
};

// Function Interface.MinimapWnd_Expand.SetCurrentLocation
struct UMinimapWnd_Expand_SetCurrentLocation_Params
{
};

// Function Interface.MinimapWnd_Expand.SetSSQTypeText
struct UMinimapWnd_Expand_SetSSQTypeText_Params
{
};

// Function Interface.MinimapWnd_Expand.HandleResolutionChanged
struct UMinimapWnd_Expand_HandleResolutionChanged_Params
{
	struct FString                                     aParam;                                                   // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.OnShow
struct UMinimapWnd_Expand_OnShow_Params
{
};

// Function Interface.MinimapWnd_Expand.OnEvent
struct UMinimapWnd_Expand_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MinimapWnd_Expand.FilterDungeonMapExpand
struct UMinimapWnd_Expand_FilterDungeonMapExpand_Params
{
};

// Function Interface.MinimapWnd_Expand.OnLoad
struct UMinimapWnd_Expand_OnLoad_Params
{
};

// Function Interface.MinimapWnd_Expand.OnRegisterEvent
struct UMinimapWnd_Expand_OnRegisterEvent_Params
{
};

// Function Interface.GametipWnd.OnShow
struct UGametipWnd_OnShow_Params
{
};

// Function Interface.GametipWnd.LoadGameTipData
struct UGametipWnd_LoadGameTipData_Params
{
};

// Function Interface.GametipWnd.OnEventWithStr
struct UGametipWnd_OnEventWithStr_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GametipWnd.OnLoad
struct UGametipWnd_OnLoad_Params
{
};

// Function Interface.GametipWnd.OnRegisterEvent
struct UGametipWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyMatchWaitListWnd.CheckButtonAlive
struct UPartyMatchWaitListWnd_CheckButtonAlive_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnDBClickListCtrlRecord
struct UPartyMatchWaitListWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     a_ListCtrlName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWaitListWnd.OnCloseButtonClick
struct UPartyMatchWaitListWnd_OnCloseButtonClick_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnInviteButtonClick
struct UPartyMatchWaitListWnd_OnInviteButtonClick_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnWhisperButtonClick
struct UPartyMatchWaitListWnd_OnWhisperButtonClick_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnPrevbuttonClick
struct UPartyMatchWaitListWnd_OnPrevbuttonClick_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnNextbuttonClick
struct UPartyMatchWaitListWnd_OnNextbuttonClick_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnRefreshButtonClick
struct UPartyMatchWaitListWnd_OnRefreshButtonClick_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnClickButton
struct UPartyMatchWaitListWnd_OnClickButton_Params
{
	struct FString                                     a_strButtonName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWaitListWnd.HandlePartyMatchWaitList
struct UPartyMatchWaitListWnd_HandlePartyMatchWaitList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWaitListWnd.HandlePartyMatchWaitListStart
struct UPartyMatchWaitListWnd_HandlePartyMatchWaitListStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWaitListWnd.HandlePartyMatchRoomStart
struct UPartyMatchWaitListWnd_HandlePartyMatchRoomStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWaitListWnd.OnEvent
struct UPartyMatchWaitListWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchWaitListWnd.OnShow
struct UPartyMatchWaitListWnd_OnShow_Params
{
};

// Function Interface.PartyMatchWaitListWnd.InitializeCOD
struct UPartyMatchWaitListWnd_InitializeCOD_Params
{
};

// Function Interface.PartyMatchWaitListWnd.Initialize
struct UPartyMatchWaitListWnd_Initialize_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnLoad
struct UPartyMatchWaitListWnd_OnLoad_Params
{
};

// Function Interface.PartyMatchWaitListWnd.OnRegisterEvent
struct UPartyMatchWaitListWnd_OnRegisterEvent_Params
{
};

// Function Interface.BlockEnterWnd.UpdateTimerCount
struct UBlockEnterWnd_UpdateTimerCount_Params
{
};

// Function Interface.BlockEnterWnd.HandleDialogCancel
struct UBlockEnterWnd_HandleDialogCancel_Params
{
};

// Function Interface.BlockEnterWnd.HandleDialogOK
struct UBlockEnterWnd_HandleDialogOK_Params
{
};

// Function Interface.BlockEnterWnd.HandleStartVote
struct UBlockEnterWnd_HandleStartVote_Params
{
};

// Function Interface.BlockEnterWnd.OnTimer
struct UBlockEnterWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.BlockEnterWnd.OnClickButton
struct UBlockEnterWnd_OnClickButton_Params
{
	struct FString                                     ButtonID;                                                 // (Parm, NeedCtorLink)
};

// Function Interface.BlockEnterWnd.OnLButtonUp
struct UBlockEnterWnd_OnLButtonUp_Params
{
	class UWindowHandle*                               WindowHandle;                                             // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.BlockEnterWnd.HandleBlockRemainTime
struct UBlockEnterWnd_HandleBlockRemainTime_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockEnterWnd.HandleBlockListClose
struct UBlockEnterWnd_HandleBlockListClose_Params
{
};

// Function Interface.BlockEnterWnd.HandleBlockListRemove
struct UBlockEnterWnd_HandleBlockListRemove_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockEnterWnd.HandleBlockListAdd
struct UBlockEnterWnd_HandleBlockListAdd_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockEnterWnd.HandleBlockListStart
struct UBlockEnterWnd_HandleBlockListStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockEnterWnd.ResetUI
struct UBlockEnterWnd_ResetUI_Params
{
};

// Function Interface.BlockEnterWnd.OnEvent
struct UBlockEnterWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BlockEnterWnd.InitializeCOD
struct UBlockEnterWnd_InitializeCOD_Params
{
};

// Function Interface.BlockEnterWnd.Initialize
struct UBlockEnterWnd_Initialize_Params
{
};

// Function Interface.BlockEnterWnd.OnHide
struct UBlockEnterWnd_OnHide_Params
{
};

// Function Interface.BlockEnterWnd.OnShow
struct UBlockEnterWnd_OnShow_Params
{
};

// Function Interface.BlockEnterWnd.OnLoad
struct UBlockEnterWnd_OnLoad_Params
{
};

// Function Interface.BlockEnterWnd.OnRegisterEvent
struct UBlockEnterWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.CheckButtonAlive
struct UPartyMatchOutWaitListWnd_CheckButtonAlive_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.MakeRoomFirst
struct UPartyMatchOutWaitListWnd_MakeRoomFirst_Params
{
	int                                                TargetLevel;                                              // (Parm)
	struct FString                                     InviteTargetName;                                         // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchOutWaitListWnd.OnDBClickListCtrlRecord
struct UPartyMatchOutWaitListWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     a_ListCtrlName;                                           // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchOutWaitListWnd.OnCloseButtonClick
struct UPartyMatchOutWaitListWnd_OnCloseButtonClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnInviteButtonClick
struct UPartyMatchOutWaitListWnd_OnInviteButtonClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnWhisperButtonClick
struct UPartyMatchOutWaitListWnd_OnWhisperButtonClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnSearchBtnClick
struct UPartyMatchOutWaitListWnd_OnSearchBtnClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnPrevbuttonClick
struct UPartyMatchOutWaitListWnd_OnPrevbuttonClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnNextbuttonClick
struct UPartyMatchOutWaitListWnd_OnNextbuttonClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnRefreshButtonClick
struct UPartyMatchOutWaitListWnd_OnRefreshButtonClick_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnClickButton
struct UPartyMatchOutWaitListWnd_OnClickButton_Params
{
	struct FString                                     a_strButtonName;                                          // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchOutWaitListWnd.HandlePartyMatchWaitList
struct UPartyMatchOutWaitListWnd_HandlePartyMatchWaitList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchOutWaitListWnd.HandlePartyMatchWaitListStart
struct UPartyMatchOutWaitListWnd_HandlePartyMatchWaitListStart_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchOutWaitListWnd.OnEvent
struct UPartyMatchOutWaitListWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyMatchOutWaitListWnd.OnShow
struct UPartyMatchOutWaitListWnd_OnShow_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnLoad
struct UPartyMatchOutWaitListWnd_OnLoad_Params
{
};

// Function Interface.PartyMatchOutWaitListWnd.OnRegisterEvent
struct UPartyMatchOutWaitListWnd_OnRegisterEvent_Params
{
};

// Function Interface.AuctionBtnWnd.ComputeWidth
struct UAuctionBtnWnd_ComputeWidth_Params
{
};

// Function Interface.AuctionBtnWnd.DeleteAuctionTooltip
struct UAuctionBtnWnd_DeleteAuctionTooltip_Params
{
};

// Function Interface.AuctionBtnWnd.SetAuctionTooltip
struct UAuctionBtnWnd_SetAuctionTooltip_Params
{
};

// Function Interface.AuctionBtnWnd.HandleAuctionSystemMessage
struct UAuctionBtnWnd_HandleAuctionSystemMessage_Params
{
	int                                                SystemMsgIndex;                                           // (Parm)
};

// Function Interface.AuctionBtnWnd.OnExitState
struct UAuctionBtnWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.AuctionBtnWnd.OnEvent
struct UAuctionBtnWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AuctionBtnWnd.Clear
struct UAuctionBtnWnd_Clear_Params
{
};

// Function Interface.AuctionBtnWnd.Load
struct UAuctionBtnWnd_Load_Params
{
};

// Function Interface.AuctionBtnWnd.Initialize
struct UAuctionBtnWnd_Initialize_Params
{
};

// Function Interface.AuctionBtnWnd.OnLoad
struct UAuctionBtnWnd_OnLoad_Params
{
};

// Function Interface.AuctionBtnWnd.OnRegisterEvent
struct UAuctionBtnWnd_OnRegisterEvent_Params
{
};

// Function Interface.BoardWnd.OnClickBookmark
struct UBoardWnd_OnClickBookmark_Params
{
};

// Function Interface.BoardWnd.ShowBBSTab
struct UBoardWnd_ShowBBSTab_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function Interface.BoardWnd.HandleShowBoardPacket
struct UBoardWnd_HandleShowBoardPacket_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BoardWnd.HandleShowBBS
struct UBoardWnd_HandleShowBBS_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BoardWnd.Clear
struct UBoardWnd_Clear_Params
{
};

// Function Interface.BoardWnd.OnClickButton
struct UBoardWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BoardWnd.OnEvent
struct UBoardWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BoardWnd.OnHide
struct UBoardWnd_OnHide_Params
{
};

// Function Interface.BoardWnd.OnShow
struct UBoardWnd_OnShow_Params
{
};

// Function Interface.BoardWnd.OnLoad
struct UBoardWnd_OnLoad_Params
{
};

// Function Interface.BoardWnd.OnRegisterEvent
struct UBoardWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMFindTreeWnd.ClearList
struct UGMFindTreeWnd_ClearList_Params
{
};

// Function Interface.GMFindTreeWnd.GetSelectedListCtrlItem
struct UGMFindTreeWnd_GetSelectedListCtrlItem_Params
{
	struct FLVDataRecord                               Record;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMFindTreeWnd.OnDBClickListCtrlRecord
struct UGMFindTreeWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     ListCtrlID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.FindAllItem
struct UGMFindTreeWnd_FindAllItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.FindAllNPC
struct UGMFindTreeWnd_FindAllNPC_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.FindAllSkill
struct UGMFindTreeWnd_FindAllSkill_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.ShowItemList
struct UGMFindTreeWnd_ShowItemList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.ShowNPCList
struct UGMFindTreeWnd_ShowNPCList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.ShowSkillList
struct UGMFindTreeWnd_ShowSkillList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.OnClickButton
struct UGMFindTreeWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.OnEvent
struct UGMFindTreeWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMFindTreeWnd.OnLoad
struct UGMFindTreeWnd_OnLoad_Params
{
};

// Function Interface.TradeWnd.Clear
struct UTradeWnd_Clear_Params
{
};

// Function Interface.TradeWnd.HandleDialogCancel
struct UTradeWnd_HandleDialogCancel_Params
{
};

// Function Interface.TradeWnd.HandleDialogOK
struct UTradeWnd_HandleDialogOK_Params
{
};

// Function Interface.TradeWnd.HandleReceiveStartTrade
struct UTradeWnd_HandleReceiveStartTrade_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.HandleTradeUpdateInventoryItem
struct UTradeWnd_HandleTradeUpdateInventoryItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.HandleTradeOtherOK
struct UTradeWnd_HandleTradeOtherOK_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.HandleTradeDone
struct UTradeWnd_HandleTradeDone_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.HandleTradeAddItem
struct UTradeWnd_HandleTradeAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.HandleStartTrade
struct UTradeWnd_HandleStartTrade_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.HandleMoveButton
struct UTradeWnd_HandleMoveButton_Params
{
};

// Function Interface.TradeWnd.MoveToMyList
struct UTradeWnd_MoveToMyList_Params
{
	int                                                Index;                                                    // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
};

// Function Interface.TradeWnd.OnDropItem
struct UTradeWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.TradeWnd.OnDBClickItem
struct UTradeWnd_OnDBClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.TradeWnd.OnClickButton
struct UTradeWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.OnEvent
struct UTradeWnd_OnEvent_Params
{
	int                                                EventID;                                                  // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TradeWnd.OnHide
struct UTradeWnd_OnHide_Params
{
};

// Function Interface.TradeWnd.OnSendPacketWhenHiding
struct UTradeWnd_OnSendPacketWhenHiding_Params
{
};

// Function Interface.TradeWnd.OnLoad
struct UTradeWnd_OnLoad_Params
{
};

// Function Interface.TradeWnd.OnRegisterEvent
struct UTradeWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMSnoopWnd.IsFiltered
struct UGMSnoopWnd_IsFiltered_Params
{
	TEnumAsByte<EChatType>                             a_Type;                                                   // (Parm)
	int                                                a_SnoopIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMSnoopWnd.GetSnoopIndexByID
struct UGMSnoopWnd_GetSnoopIndexByID_Params
{
	int                                                a_SnoopID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMSnoopWnd.GetSnoopWnd
struct UGMSnoopWnd_GetSnoopWnd_Params
{
	int                                                a_SnoopID;                                                // (Parm)
	class UWindowHandle*                               a_hSnoopWnd;                                              // (Parm, OutParm)
	class UTextListBoxHandle*                          a_hSnoopChatWnd;                                          // (Parm, OutParm)
	int                                                a_SnoopIndex;                                             // (Parm, OutParm)
	struct FString                                     a_CharacterName;                                          // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.GMSnoopWnd.ClearSnoop
struct UGMSnoopWnd_ClearSnoop_Params
{
	int                                                a_SnoopIndex;                                             // (Parm)
};

// Function Interface.GMSnoopWnd.ClearAllSnoop
struct UGMSnoopWnd_ClearAllSnoop_Params
{
};

// Function Interface.GMSnoopWnd.HandleGMSnoop
struct UGMSnoopWnd_HandleGMSnoop_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMSnoopWnd.OnEvent
struct UGMSnoopWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMSnoopWnd.OnClickButtonWithHandle
struct UGMSnoopWnd_OnClickButtonWithHandle_Params
{
	class UButtonHandle*                               a_ButtonHandle;                                           // (Parm)
};

// Function Interface.GMSnoopWnd.OnHide
struct UGMSnoopWnd_OnHide_Params
{
};

// Function Interface.GMSnoopWnd.OnShow
struct UGMSnoopWnd_OnShow_Params
{
};

// Function Interface.GMSnoopWnd.InitHandleCOD
struct UGMSnoopWnd_InitHandleCOD_Params
{
};

// Function Interface.GMSnoopWnd.InitHandle
struct UGMSnoopWnd_InitHandle_Params
{
};

// Function Interface.GMSnoopWnd.OnLoad
struct UGMSnoopWnd_OnLoad_Params
{
};

// Function Interface.GMSnoopWnd.OnRegisterEvent
struct UGMSnoopWnd_OnRegisterEvent_Params
{
};

// Function Interface.PartyWndOption.ShowPartyWndOption
struct UPartyWndOption_ShowPartyWndOption_Params
{
};

// Function Interface.PartyWndOption.OnClickButton
struct UPartyWndOption_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndOption.SwapBigandSmall
struct UPartyWndOption_SwapBigandSmall_Params
{
};

// Function Interface.PartyWndOption.OnClickCheckBox
struct UPartyWndOption_OnClickCheckBox_Params
{
	struct FString                                     CheckBoxID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.PartyWndOption.OnShow
struct UPartyWndOption_OnShow_Params
{
};

// Function Interface.PartyWndOption.OnLoad
struct UPartyWndOption_OnLoad_Params
{
};

// Function Interface.SystemTutorialBtnWnd.OnClickButton
struct USystemTutorialBtnWnd_OnClickButton_Params
{
	struct FString                                     btnName;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.SystemTutorialBtnWnd.OnEnterState
struct USystemTutorialBtnWnd_OnEnterState_Params
{
	struct FName                                       a_PrevStateName;                                          // (Parm)
};

// Function Interface.SystemTutorialBtnWnd.OnShow
struct USystemTutorialBtnWnd_OnShow_Params
{
};

// Function Interface.SystemTutorialBtnWnd.OnLoad
struct USystemTutorialBtnWnd_OnLoad_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.InitializeUI
struct UTeleportBookMarkDrawerWnd_InitializeUI_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.UpdateIcon
struct UTeleportBookMarkDrawerWnd_UpdateIcon_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnbtnCancelClick
struct UTeleportBookMarkDrawerWnd_OnbtnCancelClick_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnbtnSaveClick
struct UTeleportBookMarkDrawerWnd_OnbtnSaveClick_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnbtnIconNextClick
struct UTeleportBookMarkDrawerWnd_OnbtnIconNextClick_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnbtnIconPrevClick
struct UTeleportBookMarkDrawerWnd_OnbtnIconPrevClick_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnClickButton
struct UTeleportBookMarkDrawerWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkDrawerWnd.UpdateCurrentLocation
struct UTeleportBookMarkDrawerWnd_UpdateCurrentLocation_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnShow
struct UTeleportBookMarkDrawerWnd_OnShow_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.UpdateIconName
struct UTeleportBookMarkDrawerWnd_UpdateIconName_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnChangeEditBox
struct UTeleportBookMarkDrawerWnd_OnChangeEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkDrawerWnd.OnEvent
struct UTeleportBookMarkDrawerWnd_OnEvent_Params
{
	int                                                EventID;                                                  // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TeleportBookMarkDrawerWnd.Load
struct UTeleportBookMarkDrawerWnd_Load_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.InitializeCOD
struct UTeleportBookMarkDrawerWnd_InitializeCOD_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.Initialize
struct UTeleportBookMarkDrawerWnd_Initialize_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnRegisterEvent
struct UTeleportBookMarkDrawerWnd_OnRegisterEvent_Params
{
};

// Function Interface.TeleportBookMarkDrawerWnd.OnLoad
struct UTeleportBookMarkDrawerWnd_OnLoad_Params
{
};

// Function Interface.MoviePlayerWnd.FullScreenMoviePlayer
struct UMoviePlayerWnd_FullScreenMoviePlayer_Params
{
};

// Function Interface.MoviePlayerWnd.ResizeMoviePlayer
struct UMoviePlayerWnd_ResizeMoviePlayer_Params
{
};

// Function Interface.MoviePlayerWnd.HideMoviePlayer
struct UMoviePlayerWnd_HideMoviePlayer_Params
{
};

// Function Interface.MoviePlayerWnd.ShowMoviePlayer
struct UMoviePlayerWnd_ShowMoviePlayer_Params
{
};

// Function Interface.MoviePlayerWnd.OnEvent
struct UMoviePlayerWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MoviePlayerWnd.OnLoad
struct UMoviePlayerWnd_OnLoad_Params
{
};

// Function Interface.MoviePlayerWnd.OnRegisterEvent
struct UMoviePlayerWnd_OnRegisterEvent_Params
{
};

// Function Interface.OlympiadBuffWnd.HandleBuffInfo
struct UOlympiadBuffWnd_HandleBuffInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadBuffWnd.HandleBuffShow
struct UOlympiadBuffWnd_HandleBuffShow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadBuffWnd.Clear
struct UOlympiadBuffWnd_Clear_Params
{
};

// Function Interface.OlympiadBuffWnd.OnEvent
struct UOlympiadBuffWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadBuffWnd.OnEnterState
struct UOlympiadBuffWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.OlympiadBuffWnd.OnLoad
struct UOlympiadBuffWnd_OnLoad_Params
{
};

// Function Interface.OlympiadBuffWnd.OnRegisterEvent
struct UOlympiadBuffWnd_OnRegisterEvent_Params
{
};

// Function Interface.OlympiadBuffWnd.SetPlayerNum
struct UOlympiadBuffWnd_SetPlayerNum_Params
{
	int                                                PlayerNum;                                                // (Parm)
};

// Function Interface.DeliverWnd.HandleOKButton
struct UDeliverWnd_HandleOKButton_Params
{
};

// Function Interface.DeliverWnd.AdjustPrice
struct UDeliverWnd_AdjustPrice_Params
{
};

// Function Interface.DeliverWnd.HandleAddItem
struct UDeliverWnd_HandleAddItem_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DeliverWnd.HandleOpenWindow
struct UDeliverWnd_HandleOpenWindow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DeliverWnd.ItemBottomToTop
struct UDeliverWnd_ItemBottomToTop_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
};

// Function Interface.DeliverWnd.ItemTopToBottom
struct UDeliverWnd_ItemTopToBottom_Params
{
	struct FItemID                                     cID;                                                      // (Parm)
	struct FINT64                                      Num;                                                      // (Parm)
};

// Function Interface.DeliverWnd.HandleDialogOK
struct UDeliverWnd_HandleDialogOK_Params
{
};

// Function Interface.DeliverWnd.MoveItemBottomToTop
struct UDeliverWnd_MoveItemBottomToTop_Params
{
	int                                                Index;                                                    // (Parm)
	struct FINT64                                      AllItemCount;                                             // (Parm)
};

// Function Interface.DeliverWnd.MoveItemTopToBottom
struct UDeliverWnd_MoveItemTopToBottom_Params
{
	int                                                Index;                                                    // (Parm)
	struct FINT64                                      AllItemCount;                                             // (Parm)
};

// Function Interface.DeliverWnd.OnDropItem
struct UDeliverWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   Info;                                                     // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.DeliverWnd.OnClickItem
struct UDeliverWnd_OnClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.DeliverWnd.OnDBClickItem
struct UDeliverWnd_OnDBClickItem_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.DeliverWnd.OnClickButton
struct UDeliverWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.DeliverWnd.OnEvent
struct UDeliverWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.DeliverWnd.Clear
struct UDeliverWnd_Clear_Params
{
};

// Function Interface.DeliverWnd.OnLoad
struct UDeliverWnd_OnLoad_Params
{
};

// Function Interface.DeliverWnd.OnRegisterEvent
struct UDeliverWnd_OnRegisterEvent_Params
{
};

// Function Interface.PCCafeEventWnd.HandleToggleShowPCCafeEventWnd
struct UPCCafeEventWnd_HandleToggleShowPCCafeEventWnd_Params
{
};

// Function Interface.PCCafeEventWnd.SetTooltip
struct UPCCafeEventWnd_SetTooltip_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FCustomTooltip                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.PCCafeEventWnd.GetHelpButtonTooltipText
struct UPCCafeEventWnd_GetHelpButtonTooltipText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.PCCafeEventWnd.Refresh
struct UPCCafeEventWnd_Refresh_Params
{
	int                                                nShow;                                                    // (Parm)
};

// Function Interface.PCCafeEventWnd.OnExitState
struct UPCCafeEventWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.PCCafeEventWnd.OnEnterState
struct UPCCafeEventWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.PCCafeEventWnd.IsPCCafeEventOpened
struct UPCCafeEventWnd_IsPCCafeEventOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.PCCafeEventWnd.HandlePCCafePointInfo
struct UPCCafeEventWnd_HandlePCCafePointInfo_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PCCafeEventWnd.OnClickHelpButton
struct UPCCafeEventWnd_OnClickHelpButton_Params
{
};

// Function Interface.PCCafeEventWnd.OnEvent
struct UPCCafeEventWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PCCafeEventWnd.OnClickButton
struct UPCCafeEventWnd_OnClickButton_Params
{
	struct FString                                     a_ButtonID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.PCCafeEventWnd.OnLoad
struct UPCCafeEventWnd_OnLoad_Params
{
};

// Function Interface.PCCafeEventWnd.OnRegisterEvent
struct UPCCafeEventWnd_OnRegisterEvent_Params
{
};

// Function Interface.CleftCounter.HandleHide
struct UCleftCounter_HandleHide_Params
{
};

// Function Interface.CleftCounter.ResetCurrentStat
struct UCleftCounter_ResetCurrentStat_Params
{
};

// Function Interface.CleftCounter.TimerReset
struct UCleftCounter_TimerReset_Params
{
	int                                                RemainTime;                                               // (Parm)
};

// Function Interface.CleftCounter.UpdateTimerCount
struct UCleftCounter_UpdateTimerCount_Params
{
};

// Function Interface.CleftCounter.DrawTimerCount
struct UCleftCounter_DrawTimerCount_Params
{
};

// Function Interface.CleftCounter.OnTimer
struct UCleftCounter_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.CleftCounter.OnClickButton
struct UCleftCounter_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.CleftCounter.HandleCleftStatePlayer
struct UCleftCounter_HandleCleftStatePlayer_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCounter.HandleCleftStateTeam
struct UCleftCounter_HandleCleftStateTeam_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.CleftCounter.OnShow
struct UCleftCounter_OnShow_Params
{
};

// Function Interface.CleftCounter.OnHide
struct UCleftCounter_OnHide_Params
{
};

// Function Interface.CleftCounter.OnEvent
struct UCleftCounter_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.CleftCounter.InitializeCOD
struct UCleftCounter_InitializeCOD_Params
{
};

// Function Interface.CleftCounter.Initialize
struct UCleftCounter_Initialize_Params
{
};

// Function Interface.CleftCounter.OnLoad
struct UCleftCounter_OnLoad_Params
{
};

// Function Interface.CleftCounter.OnRegisterEvent
struct UCleftCounter_OnRegisterEvent_Params
{
};

// Function Interface.EventMatchSpecialMsgWnd.HandleEventMatchGMMessage
struct UEventMatchSpecialMsgWnd_HandleEventMatchGMMessage_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchSpecialMsgWnd.OnTimer
struct UEventMatchSpecialMsgWnd_OnTimer_Params
{
	int                                                a_TimerID;                                                // (Parm)
};

// Function Interface.EventMatchSpecialMsgWnd.OnEvent
struct UEventMatchSpecialMsgWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchSpecialMsgWnd.OnLoad
struct UEventMatchSpecialMsgWnd_OnLoad_Params
{
};

// Function Interface.EventMatchSpecialMsgWnd.OnRegisterEvent
struct UEventMatchSpecialMsgWnd_OnRegisterEvent_Params
{
};

// Function Interface.KillpointCounterWnd.OnHide
struct UKillpointCounterWnd_OnHide_Params
{
};

// Function Interface.KillpointCounterWnd.TimerReset
struct UKillpointCounterWnd_TimerReset_Params
{
};

// Function Interface.KillpointCounterWnd.UpdateTimerCount
struct UKillpointCounterWnd_UpdateTimerCount_Params
{
};

// Function Interface.KillpointCounterWnd.OnTimer
struct UKillpointCounterWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.KillpointCounterWnd.LaunchTimer
struct UKillpointCounterWnd_LaunchTimer_Params
{
};

// Function Interface.KillpointCounterWnd.UpdateMyKillPoint
struct UKillpointCounterWnd_UpdateMyKillPoint_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.KillpointCounterWnd.OnEvent
struct UKillpointCounterWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.KillpointCounterWnd.OnLoad
struct UKillpointCounterWnd_OnLoad_Params
{
};

// Function Interface.KillpointCounterWnd.OnRegisterEvent
struct UKillpointCounterWnd_OnRegisterEvent_Params
{
};

// Function Interface.UnrefineryWnd.OnProgressTimeUp
struct UUnrefineryWnd_OnProgressTimeUp_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.OnUnRefineDoneResult
struct UUnrefineryWnd_OnUnRefineDoneResult_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.OnUnRefineRequest
struct UUnrefineryWnd_OnUnRefineRequest_Params
{
};

// Function Interface.UnrefineryWnd.PlayProgressiveBar
struct UUnrefineryWnd_PlayProgressiveBar_Params
{
};

// Function Interface.UnrefineryWnd.CheckAdena
struct UUnrefineryWnd_CheckAdena_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UnrefineryWnd.OnClickUnRefineButton
struct UUnrefineryWnd_OnClickUnRefineButton_Params
{
};

// Function Interface.UnrefineryWnd.OnClickButton
struct UUnrefineryWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.SetAdenaText
struct UUnrefineryWnd_SetAdenaText_Params
{
	struct FString                                     a_AdenaText;                                              // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.OnTargetItemValidationResult
struct UUnrefineryWnd_OnTargetItemValidationResult_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.ValidateItem
struct UUnrefineryWnd_ValidateItem_Params
{
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.OnDropItem
struct UUnrefineryWnd_OnDropItem_Params
{
	struct FString                                     a_WindowID;                                               // (Parm, NeedCtorLink)
	struct FItemInfo                                   a_ItemInfo;                                               // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.UnrefineryWnd.OnEvent
struct UUnrefineryWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UnrefineryWnd.ResetReady
struct UUnrefineryWnd_ResetReady_Params
{
};

// Function Interface.UnrefineryWnd.OnShow
struct UUnrefineryWnd_OnShow_Params
{
};

// Function Interface.UnrefineryWnd.OnLoad
struct UUnrefineryWnd_OnLoad_Params
{
};

// Function Interface.UnrefineryWnd.OnRegisterEvent
struct UUnrefineryWnd_OnRegisterEvent_Params
{
};

// Function Interface.OlympiadTargetWnd.UpdateStatus
struct UOlympiadTargetWnd_UpdateStatus_Params
{
};

// Function Interface.OlympiadTargetWnd.HandleUserInfo
struct UOlympiadTargetWnd_HandleUserInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadTargetWnd.Clear
struct UOlympiadTargetWnd_Clear_Params
{
};

// Function Interface.OlympiadTargetWnd.OnEnterState
struct UOlympiadTargetWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.OlympiadTargetWnd.OnEvent
struct UOlympiadTargetWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadTargetWnd.OnLoad
struct UOlympiadTargetWnd_OnLoad_Params
{
};

// Function Interface.OlympiadTargetWnd.OnRegisterEvent
struct UOlympiadTargetWnd_OnRegisterEvent_Params
{
};

// Function Interface.FlightShipCtrlWnd.OnClickButton
struct UFlightShipCtrlWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.OnReserveShortCut
struct UFlightShipCtrlWnd_OnReserveShortCut_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.ExecuteShortcutCommandBySlot
struct UFlightShipCtrlWnd_ExecuteShortcutCommandBySlot_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.HandleShortcutClear
struct UFlightShipCtrlWnd_HandleShortcutClear_Params
{
};

// Function Interface.FlightShipCtrlWnd.HandleShortcutUpdate
struct UFlightShipCtrlWnd_HandleShortcutUpdate_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.ShortCutUpdateAll
struct UFlightShipCtrlWnd_ShortCutUpdateAll_Params
{
};

// Function Interface.FlightShipCtrlWnd.OnAirShipAltitude
struct UFlightShipCtrlWnd_OnAirShipAltitude_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.OnAirShipState
struct UFlightShipCtrlWnd_OnAirShipState_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.OnEvent
struct UFlightShipCtrlWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.FlightShipCtrlWnd.updateLockButton
struct UFlightShipCtrlWnd_updateLockButton_Params
{
};

// Function Interface.FlightShipCtrlWnd.OnExitState
struct UFlightShipCtrlWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.FlightShipCtrlWnd.OnEnterState
struct UFlightShipCtrlWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.FlightShipCtrlWnd.OnLoad
struct UFlightShipCtrlWnd_OnLoad_Params
{
};

// Function Interface.FlightShipCtrlWnd.OnRegisterEvent
struct UFlightShipCtrlWnd_OnRegisterEvent_Params
{
};

// Function Interface.PVPCounter.ResetCurrentStat
struct UPVPCounter_ResetCurrentStat_Params
{
};

// Function Interface.PVPCounter.UpdateCurrentStat
struct UPVPCounter_UpdateCurrentStat_Params
{
	int                                                BlueCountInt;                                             // (Parm)
	int                                                RedCountInt;                                              // (Parm)
};

// Function Interface.PVPCounter.TimerReset
struct UPVPCounter_TimerReset_Params
{
};

// Function Interface.PVPCounter.ResetWnd
struct UPVPCounter_ResetWnd_Params
{
};

// Function Interface.PVPCounter.UpdateTimerCount
struct UPVPCounter_UpdateTimerCount_Params
{
};

// Function Interface.PVPCounter.OnTimer
struct UPVPCounter_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.PVPCounter.OnClickButton
struct UPVPCounter_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounter.HandlePVPMatchUserDie
struct UPVPCounter_HandlePVPMatchUserDie_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounter.HandlePVPMatchRecordEachUserInfo
struct UPVPCounter_HandlePVPMatchRecordEachUserInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounter.HandlePVPMatchRecord
struct UPVPCounter_HandlePVPMatchRecord_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounter.OnShow
struct UPVPCounter_OnShow_Params
{
};

// Function Interface.PVPCounter.OnHide
struct UPVPCounter_OnHide_Params
{
};

// Function Interface.PVPCounter.OnEvent
struct UPVPCounter_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounter.InitializeCOD
struct UPVPCounter_InitializeCOD_Params
{
};

// Function Interface.PVPCounter.Initialize
struct UPVPCounter_Initialize_Params
{
};

// Function Interface.PVPCounter.OnLoad
struct UPVPCounter_OnLoad_Params
{
};

// Function Interface.PVPCounter.OnRegisterEvent
struct UPVPCounter_OnRegisterEvent_Params
{
};

// Function Interface.AgeWnd.OnEvent
struct UAgeWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.AgeWnd.OnTimer
struct UAgeWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.AgeWnd.startAge
struct UAgeWnd_startAge_Params
{
};

// Function Interface.AgeWnd.OnEnterState
struct UAgeWnd_OnEnterState_Params
{
	struct FName                                       a_PrevStateName;                                          // (Parm)
};

// Function Interface.AgeWnd.Load
struct UAgeWnd_Load_Params
{
};

// Function Interface.AgeWnd.Initialize
struct UAgeWnd_Initialize_Params
{
};

// Function Interface.AgeWnd.OnLoad
struct UAgeWnd_OnLoad_Params
{
};

// Function Interface.AgeWnd.OnRegisterEvent
struct UAgeWnd_OnRegisterEvent_Params
{
};

// Function Interface.MacroListWnd.EditMacro
struct UMacroListWnd_EditMacro_Params
{
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MacroListWnd.DeleteMacro
struct UMacroListWnd_DeleteMacro_Params
{
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MacroListWnd.OnDropItem
struct UMacroListWnd_OnDropItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	struct FItemInfo                                   infItem;                                                  // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Interface.MacroListWnd.HandleMacroList
struct UMacroListWnd_HandleMacroList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroListWnd.Clear
struct UMacroListWnd_Clear_Params
{
};

// Function Interface.MacroListWnd.HandleMacroShowListWnd
struct UMacroListWnd_HandleMacroShowListWnd_Params
{
};

// Function Interface.MacroListWnd.HandleMacroUpdate
struct UMacroListWnd_HandleMacroUpdate_Params
{
};

// Function Interface.MacroListWnd.OnClickAdd
struct UMacroListWnd_OnClickAdd_Params
{
};

// Function Interface.MacroListWnd.OnClickHelp
struct UMacroListWnd_OnClickHelp_Params
{
};

// Function Interface.MacroListWnd.OnClickItem
struct UMacroListWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.MacroListWnd.OnEvent
struct UMacroListWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroListWnd.OnClickButton
struct UMacroListWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroListWnd.OnHide
struct UMacroListWnd_OnHide_Params
{
};

// Function Interface.MacroListWnd.OnShow
struct UMacroListWnd_OnShow_Params
{
};

// Function Interface.MacroListWnd.OnEnterState
struct UMacroListWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.MacroListWnd.OnLoad
struct UMacroListWnd_OnLoad_Params
{
};

// Function Interface.MacroListWnd.OnRegisterEvent
struct UMacroListWnd_OnRegisterEvent_Params
{
};

// Function Interface.AttributeEnchantWnd.HandleAttributeEnchantResult
struct UAttributeEnchantWnd_HandleAttributeEnchantResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeEnchantWnd.HandleAttributeEnchantItemList
struct UAttributeEnchantWnd_HandleAttributeEnchantItemList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeEnchantWnd.HandleAttributeEnchantHide
struct UAttributeEnchantWnd_HandleAttributeEnchantHide_Params
{
};

// Function Interface.AttributeEnchantWnd.HandleAttributeEnchantShow
struct UAttributeEnchantWnd_HandleAttributeEnchantShow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeEnchantWnd.Clear
struct UAttributeEnchantWnd_Clear_Params
{
};

// Function Interface.AttributeEnchantWnd.OnCancelClick
struct UAttributeEnchantWnd_OnCancelClick_Params
{
};

// Function Interface.AttributeEnchantWnd.OnOKClick
struct UAttributeEnchantWnd_OnOKClick_Params
{
};

// Function Interface.AttributeEnchantWnd.OnOkClickProgress
struct UAttributeEnchantWnd_OnOkClickProgress_Params
{
};

// Function Interface.AttributeEnchantWnd.OnClickButton
struct UAttributeEnchantWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeEnchantWnd.OnClickItem
struct UAttributeEnchantWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.AttributeEnchantWnd.OnEvent
struct UAttributeEnchantWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeEnchantWnd.OnLoad
struct UAttributeEnchantWnd_OnLoad_Params
{
};

// Function Interface.AttributeEnchantWnd.OnRegisterEvent
struct UAttributeEnchantWnd_OnRegisterEvent_Params
{
};

// Function Interface.RadarOptionWnd.OnClickCheckBox
struct URadarOptionWnd_OnClickCheckBox_Params
{
	struct FString                                     CheckBoxID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.RadarOptionWnd.HandleBtnClose
struct URadarOptionWnd_HandleBtnClose_Params
{
};

// Function Interface.RadarOptionWnd.OnClickButton
struct URadarOptionWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.RadarOptionWnd.Load
struct URadarOptionWnd_Load_Params
{
};

// Function Interface.RadarOptionWnd.InitializeCOD
struct URadarOptionWnd_InitializeCOD_Params
{
};

// Function Interface.RadarOptionWnd.Initialize
struct URadarOptionWnd_Initialize_Params
{
};

// Function Interface.RadarOptionWnd.OnLoad
struct URadarOptionWnd_OnLoad_Params
{
};

// Function Interface.AttributeRemoveWnd.HandleAttributeRemoveResult
struct UAttributeRemoveWnd_HandleAttributeRemoveResult_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeRemoveWnd.HandleAttributeRemoveItemData
struct UAttributeRemoveWnd_HandleAttributeRemoveItemData_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeRemoveWnd.HandleAttributeRemoveShow
struct UAttributeRemoveWnd_HandleAttributeRemoveShow_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeRemoveWnd.OnClickItem
struct UAttributeRemoveWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.AttributeRemoveWnd.OnbtnCancelClick
struct UAttributeRemoveWnd_OnbtnCancelClick_Params
{
};

// Function Interface.AttributeRemoveWnd.OnbtnOKClick
struct UAttributeRemoveWnd_OnbtnOKClick_Params
{
};

// Function Interface.AttributeRemoveWnd.OnClickButton
struct UAttributeRemoveWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.AttributeRemoveWnd.OnEvent
struct UAttributeRemoveWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.AttributeRemoveWnd.Load
struct UAttributeRemoveWnd_Load_Params
{
};

// Function Interface.AttributeRemoveWnd.Initialize
struct UAttributeRemoveWnd_Initialize_Params
{
};

// Function Interface.AttributeRemoveWnd.OnLoad
struct UAttributeRemoveWnd_OnLoad_Params
{
};

// Function Interface.AttributeRemoveWnd.OnRegisterEvent
struct UAttributeRemoveWnd_OnRegisterEvent_Params
{
};

// Function Interface.PVPDetailedWnd.UpdateCurrentStat
struct UPVPDetailedWnd_UpdateCurrentStat_Params
{
	int                                                BlueCountInt;                                             // (Parm)
	int                                                RedCountInt;                                              // (Parm)
};

// Function Interface.PVPDetailedWnd.FinalCount
struct UPVPDetailedWnd_FinalCount_Params
{
	int                                                WinnerIndex;                                              // (Parm)
	int                                                LoserIndex;                                               // (Parm)
};

// Function Interface.PVPDetailedWnd.ResetUI
struct UPVPDetailedWnd_ResetUI_Params
{
};

// Function Interface.PVPDetailedWnd.OnClickButton
struct UPVPDetailedWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.PVPDetailedWnd.HandlePVPMatchUserDie
struct UPVPDetailedWnd_HandlePVPMatchUserDie_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPDetailedWnd.HandlePVPMatchRecordEachUserInfo
struct UPVPDetailedWnd_HandlePVPMatchRecordEachUserInfo_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPDetailedWnd.HandlePVPMatchRecord
struct UPVPDetailedWnd_HandlePVPMatchRecord_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPDetailedWnd.OnEvent
struct UPVPDetailedWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PVPDetailedWnd.InitializeCOD
struct UPVPDetailedWnd_InitializeCOD_Params
{
};

// Function Interface.PVPDetailedWnd.Initialize
struct UPVPDetailedWnd_Initialize_Params
{
};

// Function Interface.PVPDetailedWnd.OnShow
struct UPVPDetailedWnd_OnShow_Params
{
};

// Function Interface.PVPDetailedWnd.OnLoad
struct UPVPDetailedWnd_OnLoad_Params
{
};

// Function Interface.PVPDetailedWnd.OnRegisterEvent
struct UPVPDetailedWnd_OnRegisterEvent_Params
{
};

// Function Interface.NPCDialogWnd.HandleLoadHtmlFromString
struct UNPCDialogWnd_HandleLoadHtmlFromString_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.NPCDialogWnd.OnHtmlMsgHideWindow
struct UNPCDialogWnd_OnHtmlMsgHideWindow_Params
{
	class UHtmlHandle*                                 a_HtmlHandle;                                             // (Parm)
};

// Function Interface.NPCDialogWnd.ShowNPCDialogWindow
struct UNPCDialogWnd_ShowNPCDialogWindow_Params
{
};

// Function Interface.NPCDialogWnd.OnEvent
struct UNPCDialogWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.NPCDialogWnd.OnLoad
struct UNPCDialogWnd_OnLoad_Params
{
};

// Function Interface.NPCDialogWnd.OnRegisterEvent
struct UNPCDialogWnd_OnRegisterEvent_Params
{
};

// Function Interface.LoadingAniWnd.CheckResolution
struct ULoadingAniWnd_CheckResolution_Params
{
};

// Function Interface.LoadingAniWnd.OnEvent
struct ULoadingAniWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.LoadingAniWnd.OnLoad
struct ULoadingAniWnd_OnLoad_Params
{
};

// Function Interface.LoadingAniWnd.OnRegisterEvent
struct ULoadingAniWnd_OnRegisterEvent_Params
{
};

// Function Interface.TutorialViewerWnd.OnEvent
struct UTutorialViewerWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TutorialViewerWnd.OnLoad
struct UTutorialViewerWnd_OnLoad_Params
{
};

// Function Interface.TutorialViewerWnd.OnRegisterEvent
struct UTutorialViewerWnd_OnRegisterEvent_Params
{
};

// Function Interface.UnionDetailWnd.HandleCommandChannelPartyMember
struct UUnionDetailWnd_HandleCommandChannelPartyMember_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionDetailWnd.OnDBClickListCtrlRecord
struct UUnionDetailWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionDetailWnd.OnCloseClick
struct UUnionDetailWnd_OnCloseClick_Params
{
};

// Function Interface.UnionDetailWnd.OnClickButton
struct UUnionDetailWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionDetailWnd.Clear
struct UUnionDetailWnd_Clear_Params
{
};

// Function Interface.UnionDetailWnd.GetMasterID
struct UUnionDetailWnd_GetMasterID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.UnionDetailWnd.SetMasterInfo
struct UUnionDetailWnd_SetMasterInfo_Params
{
	struct FString                                     masterName;                                               // (Parm, NeedCtorLink)
	int                                                MasterID;                                                 // (Parm)
};

// Function Interface.UnionDetailWnd.OnEvent
struct UUnionDetailWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UnionDetailWnd.OnLoad
struct UUnionDetailWnd_OnLoad_Params
{
};

// Function Interface.UnionDetailWnd.OnRegisterEvent
struct UUnionDetailWnd_OnRegisterEvent_Params
{
};

// Function Interface.ZoneTitleWnd.OnTimer
struct UZoneTitleWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.ZoneTitleWnd.BeginShowZoneName
struct UZoneTitleWnd_BeginShowZoneName_Params
{
	struct FString                                     ZoneName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SubZoneName1;                                             // (Parm, NeedCtorLink)
	struct FString                                     SubZoneName2;                                             // (Parm, NeedCtorLink)
};

// Function Interface.ZoneTitleWnd.OnEvent
struct UZoneTitleWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ZoneTitleWnd.OnLoad
struct UZoneTitleWnd_OnLoad_Params
{
};

// Function Interface.ZoneTitleWnd.OnRegisterEvent
struct UZoneTitleWnd_OnRegisterEvent_Params
{
};

// Function Interface.UIEditor_PropertyController.HandleEditorUpdateProperty
struct UUIEditor_PropertyController_HandleEditorUpdateProperty_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_PropertyController.HandleTrackerDetach
struct UUIEditor_PropertyController_HandleTrackerDetach_Params
{
};

// Function Interface.UIEditor_PropertyController.HandleTrackerAttach
struct UUIEditor_PropertyController_HandleTrackerAttach_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_PropertyController.Clear
struct UUIEditor_PropertyController_Clear_Params
{
};

// Function Interface.UIEditor_PropertyController.OnPropertyControllerResize
struct UUIEditor_PropertyController_OnPropertyControllerResize_Params
{
	int                                                a_Height;                                                 // (Parm)
};

// Function Interface.UIEditor_PropertyController.OnEvent
struct UUIEditor_PropertyController_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_PropertyController.InitControlItem
struct UUIEditor_PropertyController_InitControlItem_Params
{
};

// Function Interface.UIEditor_PropertyController.InitHandle
struct UUIEditor_PropertyController_InitHandle_Params
{
};

// Function Interface.UIEditor_PropertyController.OnLoad
struct UUIEditor_PropertyController_OnLoad_Params
{
};

// Function Interface.UIEditor_PropertyController.OnRegisterEvent
struct UUIEditor_PropertyController_OnRegisterEvent_Params
{
};

// Function Interface.BirthdayAlarmBtn.OnExitState
struct UBirthdayAlarmBtn_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.BirthdayAlarmBtn.OnEvent
struct UBirthdayAlarmBtn_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.BirthdayAlarmBtn.OnClickButton
struct UBirthdayAlarmBtn_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BirthdayAlarmBtn.InitializeCOD
struct UBirthdayAlarmBtn_InitializeCOD_Params
{
};

// Function Interface.BirthdayAlarmBtn.Initialize
struct UBirthdayAlarmBtn_Initialize_Params
{
};

// Function Interface.BirthdayAlarmBtn.OnLoad
struct UBirthdayAlarmBtn_OnLoad_Params
{
};

// Function Interface.BirthdayAlarmBtn.OnRegisterEvent
struct UBirthdayAlarmBtn_OnRegisterEvent_Params
{
};

// Function Interface.PremiumItemBtnWnd.OnExitState
struct UPremiumItemBtnWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.PremiumItemBtnWnd.OnEvent
struct UPremiumItemBtnWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemBtnWnd.OnClickButton
struct UPremiumItemBtnWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemBtnWnd.Clear
struct UPremiumItemBtnWnd_Clear_Params
{
};

// Function Interface.PremiumItemBtnWnd.Initialize
struct UPremiumItemBtnWnd_Initialize_Params
{
};

// Function Interface.PremiumItemBtnWnd.OnLoad
struct UPremiumItemBtnWnd_OnLoad_Params
{
};

// Function Interface.PremiumItemBtnWnd.OnRegisterEvent
struct UPremiumItemBtnWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorCropInfoChangeWnd.ShowErrorDialog
struct UManorCropInfoChangeWnd_ShowErrorDialog_Params
{
	struct FINT64                                      MinValue;                                                 // (Parm)
	struct FINT64                                      MaxValue;                                                 // (Parm)
	int                                                SystemStringIdx;                                          // (Parm)
};

// Function Interface.ManorCropInfoChangeWnd.OnClickBtnOk
struct UManorCropInfoChangeWnd_OnClickBtnOk_Params
{
};

// Function Interface.ManorCropInfoChangeWnd.OnClickButton
struct UManorCropInfoChangeWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoChangeWnd.HandleShow
struct UManorCropInfoChangeWnd_HandleShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoChangeWnd.OnEvent
struct UManorCropInfoChangeWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropInfoChangeWnd.OnLoad
struct UManorCropInfoChangeWnd_OnLoad_Params
{
};

// Function Interface.ManorCropInfoChangeWnd.OnRegisterEvent
struct UManorCropInfoChangeWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorCropSellChangeWnd.GetMyCropCnt
struct UManorCropSellChangeWnd_GetMyCropCnt_Params
{
	int                                                ManorID;                                                  // (Parm)
	struct FINT64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ManorCropSellChangeWnd.GetComboBoxSelectedRecord
struct UManorCropSellChangeWnd_GetComboBoxSelectedRecord_Params
{
	struct FLVDataRecord                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ManorCropSellChangeWnd.GetComboBoxSelectedManorID
struct UManorCropSellChangeWnd_GetComboBoxSelectedManorID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Interface.ManorCropSellChangeWnd.HandleOkBtn
struct UManorCropSellChangeWnd_HandleOkBtn_Params
{
};

// Function Interface.ManorCropSellChangeWnd.HandleMaxButton
struct UManorCropSellChangeWnd_HandleMaxButton_Params
{
};

// Function Interface.ManorCropSellChangeWnd.OnClickButton
struct UManorCropSellChangeWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellChangeWnd.HandleAddItem
struct UManorCropSellChangeWnd_HandleAddItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellChangeWnd.HandleSetCropNameAndRewardType
struct UManorCropSellChangeWnd_HandleSetCropNameAndRewardType_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellChangeWnd.Clear
struct UManorCropSellChangeWnd_Clear_Params
{
};

// Function Interface.ManorCropSellChangeWnd.OnEvent
struct UManorCropSellChangeWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorCropSellChangeWnd.OnLoad
struct UManorCropSellChangeWnd_OnLoad_Params
{
};

// Function Interface.ManorCropSellChangeWnd.OnRegisterEvent
struct UManorCropSellChangeWnd_OnRegisterEvent_Params
{
};

// Function Interface.MenuWnd.ToggleOpenSystemMenuWnd
struct UMenuWnd_ToggleOpenSystemMenuWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenMinimapWnd
struct UMenuWnd_ToggleOpenMinimapWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenInventoryWnd
struct UMenuWnd_ToggleOpenInventoryWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenCharInfoWnd
struct UMenuWnd_ToggleOpenCharInfoWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenQuestWnd
struct UMenuWnd_ToggleOpenQuestWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenClanWnd
struct UMenuWnd_ToggleOpenClanWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenActionWnd
struct UMenuWnd_ToggleOpenActionWnd_Params
{
};

// Function Interface.MenuWnd.ToggleOpenSkillWnd
struct UMenuWnd_ToggleOpenSkillWnd_Params
{
};

// Function Interface.MenuWnd.OnTimer
struct UMenuWnd_OnTimer_Params
{
	int                                                TimerID;                                                  // (Parm)
};

// Function Interface.MenuWnd.OnRotate2
struct UMenuWnd_OnRotate2_Params
{
};

// Function Interface.MenuWnd.OnRotate1
struct UMenuWnd_OnRotate1_Params
{
};

// Function Interface.MenuWnd.OnShowProcess
struct UMenuWnd_OnShowProcess_Params
{
};

// Function Interface.MenuWnd.OnClickButton
struct UMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MenuWnd.OnLoad
struct UMenuWnd_OnLoad_Params
{
};

// Function Interface.MenuWnd.OnRegisterEvent
struct UMenuWnd_OnRegisterEvent_Params
{
};

// Function Interface.ManorSeedInfoChangeWnd.ShowErrorDialog
struct UManorSeedInfoChangeWnd_ShowErrorDialog_Params
{
	struct FINT64                                      MinValue;                                                 // (Parm)
	struct FINT64                                      MaxValue;                                                 // (Parm)
	int                                                SystemStringIdx;                                          // (Parm)
};

// Function Interface.ManorSeedInfoChangeWnd.OnClickBtnOk
struct UManorSeedInfoChangeWnd_OnClickBtnOk_Params
{
};

// Function Interface.ManorSeedInfoChangeWnd.OnClickButton
struct UManorSeedInfoChangeWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoChangeWnd.HandleShow
struct UManorSeedInfoChangeWnd_HandleShow_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoChangeWnd.OnEvent
struct UManorSeedInfoChangeWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ManorSeedInfoChangeWnd.OnLoad
struct UManorSeedInfoChangeWnd_OnLoad_Params
{
};

// Function Interface.ManorSeedInfoChangeWnd.OnRegisterEvent
struct UManorSeedInfoChangeWnd_OnRegisterEvent_Params
{
};

// Function Interface.ActionWnd.HandleActionListNew
struct UActionWnd_HandleActionListNew_Params
{
};

// Function Interface.ActionWnd.HandleActionList
struct UActionWnd_HandleActionList_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ActionWnd.Clear
struct UActionWnd_Clear_Params
{
};

// Function Interface.ActionWnd.HandleActionListStart
struct UActionWnd_HandleActionListStart_Params
{
};

// Function Interface.ActionWnd.HandleLanguageChanged
struct UActionWnd_HandleLanguageChanged_Params
{
};

// Function Interface.ActionWnd.HideScrollBar
struct UActionWnd_HideScrollBar_Params
{
};

// Function Interface.ActionWnd.OnClickItem
struct UActionWnd_OnClickItem_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
};

// Function Interface.ActionWnd.OnEvent
struct UActionWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ActionWnd.OnHide
struct UActionWnd_OnHide_Params
{
};

// Function Interface.ActionWnd.OnShow
struct UActionWnd_OnShow_Params
{
};

// Function Interface.ActionWnd.OnLoad
struct UActionWnd_OnLoad_Params
{
};

// Function Interface.ActionWnd.OnRegisterEvent
struct UActionWnd_OnRegisterEvent_Params
{
};

// Function Interface.SystemMenuWnd.SetMenuString
struct USystemMenuWnd_SetMenuString_Params
{
};

// Function Interface.SystemMenuWnd.HandleShowOptionWnd
struct USystemMenuWnd_HandleShowOptionWnd_Params
{
};

// Function Interface.SystemMenuWnd.HandleShowPetitionBegin
struct USystemMenuWnd_HandleShowPetitionBegin_Params
{
};

// Function Interface.SystemMenuWnd.HandleShowMacroListWnd
struct USystemMenuWnd_HandleShowMacroListWnd_Params
{
};

// Function Interface.SystemMenuWnd.HandleShowHelpHtmlWnd
struct USystemMenuWnd_HandleShowHelpHtmlWnd_Params
{
};

// Function Interface.SystemMenuWnd.HandleShowBoardWnd
struct USystemMenuWnd_HandleShowBoardWnd_Params
{
};

// Function Interface.SystemMenuWnd.OnEvent
struct USystemMenuWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SystemMenuWnd.OnClickButton
struct USystemMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SystemMenuWnd.OnLoad
struct USystemMenuWnd_OnLoad_Params
{
};

// Function Interface.SystemMenuWnd.OnRegisterEvent
struct USystemMenuWnd_OnRegisterEvent_Params
{
};

// Function Interface.MiniMapDrawerWnd.OnClickListCtrlRecord
struct UMiniMapDrawerWnd_OnClickListCtrlRecord_Params
{
	struct FString                                     Id;                                                       // (Parm, NeedCtorLink)
};

// Function Interface.MiniMapDrawerWnd.InsertQuestTrackList
struct UMiniMapDrawerWnd_InsertQuestTrackList_Params
{
};

// Function Interface.MiniMapDrawerWnd.OnShow
struct UMiniMapDrawerWnd_OnShow_Params
{
};

// Function Interface.MiniMapDrawerWnd.OnClickButton
struct UMiniMapDrawerWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MiniMapDrawerWnd.OnLoad
struct UMiniMapDrawerWnd_OnLoad_Params
{
};

// Function Interface.MiniMapDrawerWnd.OnRegisterEvent
struct UMiniMapDrawerWnd_OnRegisterEvent_Params
{
};

// Function Interface.SystemMsgWnd.ChangeAnchorEffectButton
struct USystemMsgWnd_ChangeAnchorEffectButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SystemMsgWnd.OnHide
struct USystemMsgWnd_OnHide_Params
{
};

// Function Interface.SystemMsgWnd.OnShow
struct USystemMsgWnd_OnShow_Params
{
};

// Function Interface.SystemMsgWnd.OnEvent
struct USystemMsgWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.SystemMsgWnd.OnLoad
struct USystemMsgWnd_OnLoad_Params
{
};

// Function Interface.SystemMsgWnd.OnRegisterEvent
struct USystemMsgWnd_OnRegisterEvent_Params
{
};

// Function Interface.MacroInfoWnd.Clear
struct UMacroInfoWnd_Clear_Params
{
};

// Function Interface.MacroInfoWnd.OnClickCancel
struct UMacroInfoWnd_OnClickCancel_Params
{
};

// Function Interface.MacroInfoWnd.OnClickOk
struct UMacroInfoWnd_OnClickOk_Params
{
};

// Function Interface.MacroInfoWnd.GetInfoText
struct UMacroInfoWnd_GetInfoText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.MacroInfoWnd.SetInfoText
struct UMacroInfoWnd_SetInfoText_Params
{
	struct FString                                     strInfo;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.MacroInfoWnd.OnClickButton
struct UMacroInfoWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MacroInfoWnd.OnHide
struct UMacroInfoWnd_OnHide_Params
{
};

// Function Interface.MacroInfoWnd.OnShow
struct UMacroInfoWnd_OnShow_Params
{
};

// Function Interface.MacroInfoWnd.OnLoad
struct UMacroInfoWnd_OnLoad_Params
{
};

// Function Interface.LoginMenuWnd.ShowOptionWnd
struct ULoginMenuWnd_ShowOptionWnd_Params
{
};

// Function Interface.LoginMenuWnd.OnClickButton
struct ULoginMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.LoginMenuWnd.OnLoad
struct ULoginMenuWnd_OnLoad_Params
{
};

// Function Interface.ReplayListWnd.OnDelete
struct UReplayListWnd_OnDelete_Params
{
};

// Function Interface.ReplayListWnd.OnOk
struct UReplayListWnd_OnOk_Params
{
};

// Function Interface.ReplayListWnd.OnClickButton
struct UReplayListWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ReplayListWnd.OnDBClickListCtrlRecord
struct UReplayListWnd_OnDBClickListCtrlRecord_Params
{
	struct FString                                     ListCtrlID;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ReplayListWnd.GetSelectedFileName
struct UReplayListWnd_GetSelectedFileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.ReplayListWnd.AddItem
struct UReplayListWnd_AddItem_Params
{
	int                                                iNum;                                                     // (Parm)
	struct FString                                     strFileName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.ReplayListWnd.OnEvent
struct UReplayListWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ReplayListWnd.InitReplayList
struct UReplayListWnd_InitReplayList_Params
{
};

// Function Interface.ReplayListWnd.OnShow
struct UReplayListWnd_OnShow_Params
{
};

// Function Interface.ReplayListWnd.OnLoad
struct UReplayListWnd_OnLoad_Params
{
};

// Function Interface.RestartMenuWnd.HideMe
struct URestartMenuWnd_HideMe_Params
{
};

// Function Interface.RestartMenuWnd.showMe
struct URestartMenuWnd_showMe_Params
{
};

// Function Interface.RestartMenuWnd.HandleRestart
struct URestartMenuWnd_HandleRestart_Params
{
};

// Function Interface.RestartMenuWnd.HandleRestartMenuHide
struct URestartMenuWnd_HandleRestartMenuHide_Params
{
};

// Function Interface.RestartMenuWnd.HandleRestartMenuShow
struct URestartMenuWnd_HandleRestartMenuShow_Params
{
};

// Function Interface.RestartMenuWnd.HandleDie
struct URestartMenuWnd_HandleDie_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RestartMenuWnd.OnFortressClick
struct URestartMenuWnd_OnFortressClick_Params
{
};

// Function Interface.RestartMenuWnd.OnOriginalClick
struct URestartMenuWnd_OnOriginalClick_Params
{
};

// Function Interface.RestartMenuWnd.OnBattleCampClick
struct URestartMenuWnd_OnBattleCampClick_Params
{
};

// Function Interface.RestartMenuWnd.OnCastleClick
struct URestartMenuWnd_OnCastleClick_Params
{
};

// Function Interface.RestartMenuWnd.OnAgitClick
struct URestartMenuWnd_OnAgitClick_Params
{
};

// Function Interface.RestartMenuWnd.OnVillageClick
struct URestartMenuWnd_OnVillageClick_Params
{
};

// Function Interface.RestartMenuWnd.OnClickButton
struct URestartMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RestartMenuWnd.OnEvent
struct URestartMenuWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.RestartMenuWnd.OnEnterState
struct URestartMenuWnd_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.RestartMenuWnd.OnHide
struct URestartMenuWnd_OnHide_Params
{
};

// Function Interface.RestartMenuWnd.OnShow
struct URestartMenuWnd_OnShow_Params
{
};

// Function Interface.RestartMenuWnd.OnLoad
struct URestartMenuWnd_OnLoad_Params
{
};

// Function Interface.RestartMenuWnd.OnRegisterEvent
struct URestartMenuWnd_OnRegisterEvent_Params
{
};

// Function Interface.ShaderBuild.OnEvent
struct UShaderBuild_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ShaderBuild.OnTick
struct UShaderBuild_OnTick_Params
{
};

// Function Interface.ShaderBuild.OnEnterState
struct UShaderBuild_OnEnterState_Params
{
	struct FName                                       a_PreStateName;                                           // (Parm)
};

// Function Interface.ShaderBuild.OnLoad
struct UShaderBuild_OnLoad_Params
{
};

// Function Interface.ShaderBuild.OnRegisterEvent
struct UShaderBuild_OnRegisterEvent_Params
{
};

// Function Interface.ProgressBox.OnEvent
struct UProgressBox_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.ProgressBox.SetMessage
struct UProgressBox_SetMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, NeedCtorLink)
};

// Function Interface.ProgressBox.OnProgressTimeUp
struct UProgressBox_OnProgressTimeUp_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ProgressBox.ShowDialog
struct UProgressBox_ShowDialog_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Target;                                                   // (Parm, NeedCtorLink)
	int                                                Time;                                                     // (Parm)
};

// Function Interface.ProgressBox.OnbtnCancleClick
struct UProgressBox_OnbtnCancleClick_Params
{
};

// Function Interface.ProgressBox.OnClickButton
struct UProgressBox_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.ProgressBox.Load
struct UProgressBox_Load_Params
{
};

// Function Interface.ProgressBox.Initialize
struct UProgressBox_Initialize_Params
{
};

// Function Interface.ProgressBox.OnLoad
struct UProgressBox_OnLoad_Params
{
};

// Function Interface.ProgressBox.OnRegisterEvent
struct UProgressBox_OnRegisterEvent_Params
{
};

// Function Interface.UserPetitionWnd.Clear
struct UUserPetitionWnd_Clear_Params
{
};

// Function Interface.UserPetitionWnd.OnClickCancelButton
struct UUserPetitionWnd_OnClickCancelButton_Params
{
};

// Function Interface.UserPetitionWnd.OnClickOKButton
struct UUserPetitionWnd_OnClickOKButton_Params
{
};

// Function Interface.UserPetitionWnd.OnClickButton
struct UUserPetitionWnd_OnClickButton_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function Interface.UserPetitionWnd.OnComboBoxItemSelected
struct UUserPetitionWnd_OnComboBoxItemSelected_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
	int                                                a_SelectedIndex;                                          // (Parm)
};

// Function Interface.UserPetitionWnd.HandleLoadPetitionHtml
struct UUserPetitionWnd_HandleLoadPetitionHtml_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UserPetitionWnd.HandleShowUserPetitionWnd
struct UUserPetitionWnd_HandleShowUserPetitionWnd_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UserPetitionWnd.OnEvent
struct UUserPetitionWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.UserPetitionWnd.OnLoad
struct UUserPetitionWnd_OnLoad_Params
{
};

// Function Interface.UserPetitionWnd.OnRegisterEvent
struct UUserPetitionWnd_OnRegisterEvent_Params
{
};

// Function Interface.XMasSealWnd.HandleToggleXMasSealWndShowHide
struct UXMasSealWnd_HandleToggleXMasSealWndShowHide_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.XMasSealWnd.OnEvent
struct UXMasSealWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.XMasSealWnd.OnLoad
struct UXMasSealWnd_OnLoad_Params
{
};

// Function Interface.XMasSealWnd.OnRegisterEvent
struct UXMasSealWnd_OnRegisterEvent_Params
{
};

// Function Interface.KillpointRankTrigger.OnClickButton
struct UKillpointRankTrigger_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.KillpointRankTrigger.OnEvent
struct UKillpointRankTrigger_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.KillpointRankTrigger.OnLoad
struct UKillpointRankTrigger_OnLoad_Params
{
};

// Function Interface.KillpointRankTrigger.OnRegisterEvent
struct UKillpointRankTrigger_OnRegisterEvent_Params
{
};

// Function Interface.PetitionFeedBackWnd.OnClickOKButton
struct UPetitionFeedBackWnd_OnClickOKButton_Params
{
};

// Function Interface.PetitionFeedBackWnd.OnClickButton
struct UPetitionFeedBackWnd_OnClickButton_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function Interface.PetitionFeedBackWnd.OnHide
struct UPetitionFeedBackWnd_OnHide_Params
{
};

// Function Interface.PetitionFeedBackWnd.OnEvent
struct UPetitionFeedBackWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PetitionFeedBackWnd.OnLoad
struct UPetitionFeedBackWnd_OnLoad_Params
{
};

// Function Interface.PVPCounterTrigger.OnClickButton
struct UPVPCounterTrigger_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounterTrigger.HandlePVPMatchRecord
struct UPVPCounterTrigger_HandlePVPMatchRecord_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounterTrigger.OnEvent
struct UPVPCounterTrigger_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PVPCounterTrigger.InitializeCOD
struct UPVPCounterTrigger_InitializeCOD_Params
{
};

// Function Interface.PVPCounterTrigger.Initialize
struct UPVPCounterTrigger_Initialize_Params
{
};

// Function Interface.PVPCounterTrigger.OnLoad
struct UPVPCounterTrigger_OnLoad_Params
{
};

// Function Interface.PVPCounterTrigger.OnRegisterEvent
struct UPVPCounterTrigger_OnRegisterEvent_Params
{
};

// Function Interface.ItemDescWnd.HandleLoadHtmlFromString
struct UItemDescWnd_HandleLoadHtmlFromString_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemDescWnd.HandleWindowTitle
struct UItemDescWnd_HandleWindowTitle_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemDescWnd.OnEvent
struct UItemDescWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ItemDescWnd.OnLoad
struct UItemDescWnd_OnLoad_Params
{
};

// Function Interface.ItemDescWnd.OnRegisterEvent
struct UItemDescWnd_OnRegisterEvent_Params
{
};

// Function Interface.UIEditor_DocumentInfo.Clear
struct UUIEditor_DocumentInfo_Clear_Params
{
};

// Function Interface.UIEditor_DocumentInfo.HandleTrackerDetach
struct UUIEditor_DocumentInfo_HandleTrackerDetach_Params
{
};

// Function Interface.UIEditor_DocumentInfo.UpdateDocumentInfo
struct UUIEditor_DocumentInfo_UpdateDocumentInfo_Params
{
};

// Function Interface.UIEditor_DocumentInfo.HandleTrackerAttach
struct UUIEditor_DocumentInfo_HandleTrackerAttach_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_DocumentInfo.OnCompleteEditBox
struct UUIEditor_DocumentInfo_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_DocumentInfo.OnEvent
struct UUIEditor_DocumentInfo_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.UIEditor_DocumentInfo.InitControlItem
struct UUIEditor_DocumentInfo_InitControlItem_Params
{
};

// Function Interface.UIEditor_DocumentInfo.InitHandle
struct UUIEditor_DocumentInfo_InitHandle_Params
{
};

// Function Interface.UIEditor_DocumentInfo.OnLoad
struct UUIEditor_DocumentInfo_OnLoad_Params
{
};

// Function Interface.UIEditor_DocumentInfo.OnRegisterEvent
struct UUIEditor_DocumentInfo_OnRegisterEvent_Params
{
};

// Function Interface.CleftCurTriggerWnd.OnClickButton
struct UCleftCurTriggerWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurTriggerWnd.OnEvent
struct UCleftCurTriggerWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.CleftCurTriggerWnd.InitializeCOD
struct UCleftCurTriggerWnd_InitializeCOD_Params
{
};

// Function Interface.CleftCurTriggerWnd.Initialize
struct UCleftCurTriggerWnd_Initialize_Params
{
};

// Function Interface.CleftCurTriggerWnd.OnLoad
struct UCleftCurTriggerWnd_OnLoad_Params
{
};

// Function Interface.CleftCurTriggerWnd.OnRegisterEvent
struct UCleftCurTriggerWnd_OnRegisterEvent_Params
{
};

// Function Interface.BlockCurTriggerWnd.OnClickButton
struct UBlockCurTriggerWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurTriggerWnd.OnEvent
struct UBlockCurTriggerWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.BlockCurTriggerWnd.InitializeCOD
struct UBlockCurTriggerWnd_InitializeCOD_Params
{
};

// Function Interface.BlockCurTriggerWnd.Initialize
struct UBlockCurTriggerWnd_Initialize_Params
{
};

// Function Interface.BlockCurTriggerWnd.OnLoad
struct UBlockCurTriggerWnd_OnLoad_Params
{
};

// Function Interface.BlockCurTriggerWnd.OnRegisterEvent
struct UBlockCurTriggerWnd_OnRegisterEvent_Params
{
};

// Function Interface.EventMatchGMFenceWnd.OnClickMyLocationButton
struct UEventMatchGMFenceWnd_OnClickMyLocationButton_Params
{
};

// Function Interface.EventMatchGMFenceWnd.OnClickCancelButton
struct UEventMatchGMFenceWnd_OnClickCancelButton_Params
{
};

// Function Interface.EventMatchGMFenceWnd.OnClickOKButton
struct UEventMatchGMFenceWnd_OnClickOKButton_Params
{
};

// Function Interface.EventMatchGMFenceWnd.OnClickButtonWithHandle
struct UEventMatchGMFenceWnd_OnClickButtonWithHandle_Params
{
	class UButtonHandle*                               a_ButtonHandle;                                           // (Parm)
};

// Function Interface.EventMatchGMFenceWnd.OnLoad
struct UEventMatchGMFenceWnd_OnLoad_Params
{
};

// Function Interface.EventMatchGMFenceWnd.OnRegisterEvent
struct UEventMatchGMFenceWnd_OnRegisterEvent_Params
{
};

// Function Interface.EventMatchGMMsgWnd.HandleEventMatchGMMessage
struct UEventMatchGMMsgWnd_HandleEventMatchGMMessage_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMMsgWnd.OnTimer
struct UEventMatchGMMsgWnd_OnTimer_Params
{
	int                                                a_TimerID;                                                // (Parm)
};

// Function Interface.EventMatchGMMsgWnd.OnEvent
struct UEventMatchGMMsgWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.EventMatchGMMsgWnd.OnLoad
struct UEventMatchGMMsgWnd_OnLoad_Params
{
};

// Function Interface.EventMatchGMMsgWnd.OnRegisterEvent
struct UEventMatchGMMsgWnd_OnRegisterEvent_Params
{
};

// Function Interface.HelpHtmlWnd.HandleLoadHelpHtml
struct UHelpHtmlWnd_HandleLoadHelpHtml_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HelpHtmlWnd.HandleShowHelp
struct UHelpHtmlWnd_HandleShowHelp_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HelpHtmlWnd.OnEvent
struct UHelpHtmlWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.HelpHtmlWnd.OnHide
struct UHelpHtmlWnd_OnHide_Params
{
};

// Function Interface.HelpHtmlWnd.OnShow
struct UHelpHtmlWnd_OnShow_Params
{
};

// Function Interface.HelpHtmlWnd.OnLoad
struct UHelpHtmlWnd_OnLoad_Params
{
};

// Function Interface.HelpHtmlWnd.OnRegisterEvent
struct UHelpHtmlWnd_OnRegisterEvent_Params
{
};

// Function Interface.BirthdayAlarmWnd.OnExitState
struct UBirthdayAlarmWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.BirthdayAlarmWnd.OnClickButton
struct UBirthdayAlarmWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BirthdayAlarmWnd.OnEvent
struct UBirthdayAlarmWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BirthdayAlarmWnd.Load
struct UBirthdayAlarmWnd_Load_Params
{
};

// Function Interface.BirthdayAlarmWnd.InitializeCOD
struct UBirthdayAlarmWnd_InitializeCOD_Params
{
};

// Function Interface.BirthdayAlarmWnd.Initialize
struct UBirthdayAlarmWnd_Initialize_Params
{
};

// Function Interface.BirthdayAlarmWnd.OnShow
struct UBirthdayAlarmWnd_OnShow_Params
{
};

// Function Interface.BirthdayAlarmWnd.OnLoad
struct UBirthdayAlarmWnd_OnLoad_Params
{
};

// Function Interface.BirthdayAlarmWnd.OnRegisterEvent
struct UBirthdayAlarmWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMClanWnd.HandleGMObservingClanMember
struct UGMClanWnd_HandleGMObservingClanMember_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMClanWnd.HandleGMObservingClanMemberStart
struct UGMClanWnd_HandleGMObservingClanMemberStart_Params
{
};

// Function Interface.GMClanWnd.HandleGMObservingClan
struct UGMClanWnd_HandleGMObservingClan_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMClanWnd.OnEvent
struct UGMClanWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMClanWnd.ShowClan
struct UGMClanWnd_ShowClan_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMClanWnd.OnHide
struct UGMClanWnd_OnHide_Params
{
};

// Function Interface.GMClanWnd.OnShow
struct UGMClanWnd_OnShow_Params
{
};

// Function Interface.GMClanWnd.Load
struct UGMClanWnd_Load_Params
{
};

// Function Interface.GMClanWnd.OnRegisterEvent
struct UGMClanWnd_OnRegisterEvent_Params
{
};

// Function Interface.PetitionWnd.Clear
struct UPetitionWnd_Clear_Params
{
};

// Function Interface.PetitionWnd.OnClickCancelButton
struct UPetitionWnd_OnClickCancelButton_Params
{
};

// Function Interface.PetitionWnd.OnClickFeedBackButton
struct UPetitionWnd_OnClickFeedBackButton_Params
{
};

// Function Interface.PetitionWnd.OnClickButton
struct UPetitionWnd_OnClickButton_Params
{
	struct FString                                     a_ControlID;                                              // (Parm, NeedCtorLink)
};

// Function Interface.PetitionWnd.HandleEnablePetitionFeedback
struct UPetitionWnd_HandleEnablePetitionFeedback_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PetitionWnd.HandlePetitionChatMessage
struct UPetitionWnd_HandlePetitionChatMessage_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PetitionWnd.HandleShowPetitionWnd
struct UPetitionWnd_HandleShowPetitionWnd_Params
{
};

// Function Interface.PetitionWnd.OnCompleteEditBox
struct UPetitionWnd_OnCompleteEditBox_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PetitionWnd.OnEvent
struct UPetitionWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.PetitionWnd.SetFeedBackEnable
struct UPetitionWnd_SetFeedBackEnable_Params
{
	bool                                               a_IsEnabled;                                              // (Parm)
};

// Function Interface.PetitionWnd.OnHide
struct UPetitionWnd_OnHide_Params
{
};

// Function Interface.PetitionWnd.OnLoad
struct UPetitionWnd_OnLoad_Params
{
};

// Function Interface.PetitionWnd.OnRegisterEvent
struct UPetitionWnd_OnRegisterEvent_Params
{
};

// Function Interface.BR_CashShopBtnWnd.OnShow
struct UBR_CashShopBtnWnd_OnShow_Params
{
};

// Function Interface.BR_CashShopBtnWnd.OnBtnShowCashShopClick
struct UBR_CashShopBtnWnd_OnBtnShowCashShopClick_Params
{
};

// Function Interface.BR_CashShopBtnWnd.OnClickButton
struct UBR_CashShopBtnWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BR_CashShopBtnWnd.Load
struct UBR_CashShopBtnWnd_Load_Params
{
};

// Function Interface.BR_CashShopBtnWnd.InitHandle
struct UBR_CashShopBtnWnd_InitHandle_Params
{
};

// Function Interface.BR_CashShopBtnWnd.OnLoad
struct UBR_CashShopBtnWnd_OnLoad_Params
{
};

// Function Interface.ObserverWnd.OnClickButton
struct UObserverWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ObserverWnd.OnEvent
struct UObserverWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ObserverWnd.OnLoad
struct UObserverWnd_OnLoad_Params
{
};

// Function Interface.ObserverWnd.OnRegisterEvent
struct UObserverWnd_OnRegisterEvent_Params
{
};

// Function Interface.GMWarehouseWnd.MoveItemBottomToTop
struct UGMWarehouseWnd_MoveItemBottomToTop_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.GMWarehouseWnd.MoveItemTopToBottom
struct UGMWarehouseWnd_MoveItemTopToBottom_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bAllItem;                                                 // (Parm)
};

// Function Interface.GMWarehouseWnd.HandleGMObservingWarehouseItemList
struct UGMWarehouseWnd_HandleGMObservingWarehouseItemList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMWarehouseWnd.HandleGMObservingWarehouseItemListStart
struct UGMWarehouseWnd_HandleGMObservingWarehouseItemListStart_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMWarehouseWnd.OnEvent
struct UGMWarehouseWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMWarehouseWnd.OnClickButton
struct UGMWarehouseWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GMWarehouseWnd.ShowWarehouse
struct UGMWarehouseWnd_ShowWarehouse_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMWarehouseWnd.OnShow
struct UGMWarehouseWnd_OnShow_Params
{
};

// Function Interface.GMWarehouseWnd.OnLoad
struct UGMWarehouseWnd_OnLoad_Params
{
};

// Function Interface.GMWarehouseWnd.OnRegisterEvent
struct UGMWarehouseWnd_OnRegisterEvent_Params
{
};

// Function Interface.PremiumItemAlarmWnd.OnExitState
struct UPremiumItemAlarmWnd_OnExitState_Params
{
	struct FName                                       a_NextStateName;                                          // (Parm)
};

// Function Interface.PremiumItemAlarmWnd.OnClickButton
struct UPremiumItemAlarmWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemAlarmWnd.OnEvent
struct UPremiumItemAlarmWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.PremiumItemAlarmWnd.Load
struct UPremiumItemAlarmWnd_Load_Params
{
};

// Function Interface.PremiumItemAlarmWnd.Initialize
struct UPremiumItemAlarmWnd_Initialize_Params
{
};

// Function Interface.PremiumItemAlarmWnd.OnLoad
struct UPremiumItemAlarmWnd_OnLoad_Params
{
};

// Function Interface.GMQuestWnd.HandleGMObservingQuestItem
struct UGMQuestWnd_HandleGMObservingQuestItem_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMQuestWnd.HandleGMObservingQuestListEnd
struct UGMQuestWnd_HandleGMObservingQuestListEnd_Params
{
};

// Function Interface.GMQuestWnd.HandleGMObservingQuestList
struct UGMQuestWnd_HandleGMObservingQuestList_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMQuestWnd.HandleGMObservingQuestListStart
struct UGMQuestWnd_HandleGMObservingQuestListStart_Params
{
};

// Function Interface.GMQuestWnd.OnEvent
struct UGMQuestWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMQuestWnd.OnClickButton
struct UGMQuestWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.GMQuestWnd.ShowQuest
struct UGMQuestWnd_ShowQuest_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.GMQuestWnd.OnShow
struct UGMQuestWnd_OnShow_Params
{
};

// Function Interface.GMQuestWnd.OnLoad
struct UGMQuestWnd_OnLoad_Params
{
};

// Function Interface.GMQuestWnd.OnRegisterEvent
struct UGMQuestWnd_OnRegisterEvent_Params
{
};

// Function Interface.SelectDeliverWnd.HandleOKButtonClick
struct USelectDeliverWnd_HandleOKButtonClick_Params
{
};

// Function Interface.SelectDeliverWnd.OnClickButton
struct USelectDeliverWnd_OnClickButton_Params
{
	struct FString                                     ControlName;                                              // (Parm, NeedCtorLink)
};

// Function Interface.SelectDeliverWnd.HandleAddName
struct USelectDeliverWnd_HandleAddName_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SelectDeliverWnd.OnEvent
struct USelectDeliverWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.SelectDeliverWnd.OnLoad
struct USelectDeliverWnd_OnLoad_Params
{
};

// Function Interface.SelectDeliverWnd.OnRegisterEvent
struct USelectDeliverWnd_OnRegisterEvent_Params
{
};

// Function Interface.ConsoleWnd.HandleDlgOk
struct UConsoleWnd_HandleDlgOk_Params
{
};

// Function Interface.ConsoleWnd.OnEvent
struct UConsoleWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.ConsoleWnd.OnLoad
struct UConsoleWnd_OnLoad_Params
{
};

// Function Interface.ConsoleWnd.OnRegisterEvent
struct UConsoleWnd_OnRegisterEvent_Params
{
};

// Function Interface.QuestTreeDrawerWnd.OnShow
struct UQuestTreeDrawerWnd_OnShow_Params
{
};

// Function Interface.QuestTreeDrawerWnd.OnbtnCloseClick
struct UQuestTreeDrawerWnd_OnbtnCloseClick_Params
{
};

// Function Interface.QuestTreeDrawerWnd.OnbtnGiveUpCurrentQuestClick
struct UQuestTreeDrawerWnd_OnbtnGiveUpCurrentQuestClick_Params
{
};

// Function Interface.QuestTreeDrawerWnd.OnClickButton
struct UQuestTreeDrawerWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.QuestTreeDrawerWnd.Load
struct UQuestTreeDrawerWnd_Load_Params
{
};

// Function Interface.QuestTreeDrawerWnd.InitializeCOD
struct UQuestTreeDrawerWnd_InitializeCOD_Params
{
};

// Function Interface.QuestTreeDrawerWnd.Initialize
struct UQuestTreeDrawerWnd_Initialize_Params
{
};

// Function Interface.QuestTreeDrawerWnd.OnLoad
struct UQuestTreeDrawerWnd_OnLoad_Params
{
};

// Function Interface.TownMapWnd.HandleShowTownMap
struct UTownMapWnd_HandleShowTownMap_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.TownMapWnd.OnEvent
struct UTownMapWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.TownMapWnd.OnLoad
struct UTownMapWnd_OnLoad_Params
{
};

// Function Interface.TownMapWnd.OnRegisterEvent
struct UTownMapWnd_OnRegisterEvent_Params
{
};

// Function Interface.MailBtnWnd.OnClickButton
struct UMailBtnWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MailBtnWnd.OnEvent
struct UMailBtnWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.MailBtnWnd.OnLoad
struct UMailBtnWnd_OnLoad_Params
{
};

// Function Interface.MailBtnWnd.OnRegisterEvent
struct UMailBtnWnd_OnRegisterEvent_Params
{
};

// Function Interface.TutorialBtnWnd.OnClickButton
struct UTutorialBtnWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TutorialBtnWnd.OnEvent
struct UTutorialBtnWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.TutorialBtnWnd.OnLoad
struct UTutorialBtnWnd_OnLoad_Params
{
};

// Function Interface.TutorialBtnWnd.OnRegisterEvent
struct UTutorialBtnWnd_OnRegisterEvent_Params
{
};

// Function Interface.DepthOfField.OnEvent
struct UDepthOfField_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.DepthOfField.HandleCharacterSelectionChanged
struct UDepthOfField_HandleCharacterSelectionChanged_Params
{
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.DepthOfField.HandleStateChanged
struct UDepthOfField_HandleStateChanged_Params
{
	struct FString                                     a_NewState;                                               // (Parm, NeedCtorLink)
};

// Function Interface.DepthOfField.OnLoad
struct UDepthOfField_OnLoad_Params
{
};

// Function Interface.DepthOfField.OnRegisterEvent
struct UDepthOfField_OnRegisterEvent_Params
{
};

// Function Interface.QuestBtnWnd.OnClickButton
struct UQuestBtnWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestBtnWnd.OnEvent
struct UQuestBtnWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.QuestBtnWnd.OnLoad
struct UQuestBtnWnd_OnLoad_Params
{
};

// Function Interface.QuestBtnWnd.OnRegisterEvent
struct UQuestBtnWnd_OnRegisterEvent_Params
{
};

// Function Interface.OlympiadControlWnd.OnClickButton
struct UOlympiadControlWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.OlympiadControlWnd.OnLoad
struct UOlympiadControlWnd_OnLoad_Params
{
};

// Function Interface.BenchMarkMenuWnd.ShowOptionWnd
struct UBenchMarkMenuWnd_ShowOptionWnd_Params
{
};

// Function Interface.BenchMarkMenuWnd.OnClickButton
struct UBenchMarkMenuWnd_OnClickButton_Params
{
	struct FString                                     strID;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BenchMarkMenuWnd.OnLoad
struct UBenchMarkMenuWnd_OnLoad_Params
{
};

// Function Interface.OlympiadBuff1Wnd.OnLoad
struct UOlympiadBuff1Wnd_OnLoad_Params
{
};

// Function Interface.OlympiadBuff2Wnd.OnLoad
struct UOlympiadBuff2Wnd_OnLoad_Params
{
};

// Function Interface.UniversalToolTip.OnLoad
struct UUniversalToolTip_OnLoad_Params
{
};

// Function Interface.OlympiadPlayer1Wnd.UpdateUsersInfo
struct UOlympiadPlayer1Wnd_UpdateUsersInfo_Params
{
};

// Function Interface.OlympiadPlayer1Wnd.OnLoad
struct UOlympiadPlayer1Wnd_OnLoad_Params
{
};

// Function Interface.OlympiadPlayer2Wnd.UpdateUsersInfo
struct UOlympiadPlayer2Wnd_UpdateUsersInfo_Params
{
};

// Function Interface.OlympiadPlayer2Wnd.OnLoad
struct UOlympiadPlayer2Wnd_OnLoad_Params
{
};

// Function Interface.BR_EventFireWnd.OnEventFireBtn2Click
struct UBR_EventFireWnd_OnEventFireBtn2Click_Params
{
};

// Function Interface.BR_EventFireWnd.OnEventFireBtn1Click
struct UBR_EventFireWnd_OnEventFireBtn1Click_Params
{
};

// Function Interface.BR_EventFireWnd.OnClickButton
struct UBR_EventFireWnd_OnClickButton_Params
{
	struct FString                                     Name;                                                     // (Parm, NeedCtorLink)
};

// Function Interface.BR_EventFireWnd.SetTooltip
struct UBR_EventFireWnd_SetTooltip_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	struct FCustomTooltip                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Interface.BR_EventFireWnd.FireEventGauge
struct UBR_EventFireWnd_FireEventGauge_Params
{
	int                                                Percent;                                                  // (Parm)
};

// Function Interface.BR_EventFireWnd.FireEventButton
struct UBR_EventFireWnd_FireEventButton_Params
{
};

// Function Interface.BR_EventFireWnd.FireEventWndShow
struct UBR_EventFireWnd_FireEventWndShow_Params
{
	int                                                eState;                                                   // (Parm)
	int                                                Day;                                                      // (Parm)
	int                                                Percent;                                                  // (Parm)
};

// Function Interface.BR_EventFireWnd.FireEventBuff
struct UBR_EventFireWnd_FireEventBuff_Params
{
	int                                                type;                                                     // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                bstate;                                                   // (Parm)
	int                                                endtime;                                                  // (Parm)
};

// Function Interface.BR_EventFireWnd.OnEvent
struct UBR_EventFireWnd_OnEvent_Params
{
	int                                                a_EventID;                                                // (Parm)
	struct FString                                     a_Param;                                                  // (Parm, NeedCtorLink)
};

// Function Interface.BR_EventFireWnd.Load
struct UBR_EventFireWnd_Load_Params
{
};

// Function Interface.BR_EventFireWnd.Initialize
struct UBR_EventFireWnd_Initialize_Params
{
};

// Function Interface.BR_EventFireWnd.OnLoad
struct UBR_EventFireWnd_OnLoad_Params
{
};

// Function Interface.BR_EventFireWnd.OnRegisterEvent
struct UBR_EventFireWnd_OnRegisterEvent_Params
{
};

// Function Interface.BR_EventFireHelpWnd.FireEventShowHelp
struct UBR_EventFireHelpWnd_FireEventShowHelp_Params
{
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BR_EventFireHelpWnd.OnEvent
struct UBR_EventFireHelpWnd_OnEvent_Params
{
	int                                                Event_ID;                                                 // (Parm)
	struct FString                                     param;                                                    // (Parm, NeedCtorLink)
};

// Function Interface.BR_EventFireHelpWnd.Load
struct UBR_EventFireHelpWnd_Load_Params
{
};

// Function Interface.BR_EventFireHelpWnd.Initialize
struct UBR_EventFireHelpWnd_Initialize_Params
{
};

// Function Interface.BR_EventFireHelpWnd.OnLoad
struct UBR_EventFireHelpWnd_OnLoad_Params
{
};

// Function Interface.BR_EventFireHelpWnd.OnRegisterEvent
struct UBR_EventFireHelpWnd_OnRegisterEvent_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

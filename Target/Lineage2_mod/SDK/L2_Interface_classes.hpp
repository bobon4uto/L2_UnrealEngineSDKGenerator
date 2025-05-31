#pragma once

// Lineage 2 (Gracia Final) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace L2_SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Interface.UICommonAPI
// 0x0000 (0x003C - 0x003C)
class UUICommonAPI : public UUIScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UICommonAPI");
		return ptr;
	}


	struct FString STATIC_GetPrimeItemSymbolName();
	bool STATIC_IsAdena(const struct FItemID& Id);
	bool STATIC_IsSameServerID(const struct FItemID& src, const struct FItemID& des);
	bool STATIC_IsSameClassID(const struct FItemID& src, const struct FItemID& des);
	bool STATIC_IsSameItemID(const struct FItemID& src, const struct FItemID& des);
	void STATIC_ClearItemID(struct FItemID* Id);
	void STATIC_ParamAddItemIDWithIndex(const struct FItemID& Id, int idx, struct FString* param);
	void STATIC_ParamAddItemID(const struct FItemID& Id, struct FString* param);
	bool STATIC_ParseItemIDWithIndex(const struct FString& param, int idx, struct FItemID* Id);
	bool STATIC_ParseItemID(const struct FString& param, struct FItemID* Id);
	struct FItemID STATIC_GetItemID(int Id);
	bool STATIC_IsValidItemID(const struct FItemID& Id);
	struct FCustomTooltip STATIC_MakeTooltipSimpleText(const struct FString& Text);
	void STATIC_ParamToRecord(const struct FString& param, struct FLVDataRecord* Record);
	void STATIC_ParamToItemInfo(const struct FString& param, struct FItemInfo* Info);
	bool STATIC_IsShowWindow(const struct FString& a_ControlID);
	void STATIC_HideWindow(const struct FString& a_ControlID);
	void STATIC_ShowWindowWithFocus(const struct FString& a_ControlID);
	void STATIC_ShowWindow(const struct FString& a_ControlID);
	int STATIC_Split(const struct FString& strInput, const struct FString& delim, TArray<struct FString>* arrToken);
	void STATIC_DialogSetEditBoxMaxLength(int maxLength);
	void STATIC_DialogGetReservedItemInfo(struct FItemInfo* Info);
	struct FItemID STATIC_DialogGetReservedItemID();
	int STATIC_DialogGetReservedInt3();
	struct FINT64 STATIC_DialogGetReservedInt2();
	int STATIC_DialogGetReservedInt();
	void STATIC_DialogSetReservedItemInfo(const struct FItemInfo& Info);
	void STATIC_DialogSetReservedItemID(const struct FItemID& Id);
	void STATIC_DialogSetReservedInt3(int Value);
	void STATIC_DialogSetReservedInt2(const struct FINT64& Value);
	void STATIC_DialogSetReservedInt(int Value);
	void STATIC_DialogSetParamInt64(const struct FINT64& param);
	int STATIC_DialogGetID();
	void STATIC_DialogSetString(const struct FString& strInput);
	struct FString STATIC_DialogGetString();
	void STATIC_DialogSetEditType(const struct FString& strType);
	void STATIC_DialogSetID(int Id);
	bool STATIC_DialogIsMine();
	void STATIC_DialogSetDefaultOK();
	void STATIC_DialogHide();
	void STATIC_DialogShow(TEnumAsByte<EDialogType> dialogType, const struct FString& strMessage);
};


// Class Interface.ToolTip
// 0x007C (0x00B8 - 0x003C)
class UToolTip : public UUICommonAPI
{
public:
	struct FCustomTooltip                              m_Tooltip;                                                // 0x003C(0x0014) (NeedCtorLink)
	struct FDrawItemInfo                               m_Info;                                                   // 0x0050(0x0058) (NeedCtorLink)
	int                                                NowAttrLv;                                                // 0x00A8(0x0004)
	int                                                NowMaxValue;                                              // 0x00AC(0x0004)
	int                                                NowValue;                                                 // 0x00B0(0x0004)
	int                                                NowType;                                                  // 0x00B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ToolTip");
		return ptr;
	}


	void STATIC_AddPrimeItemSymbol(const struct FItemInfo& item);
	void STATIC_GetDefAttrLv(int DefValue);
	void STATIC_GetAttAttrLv(int AttValue);
	void STATIC_AddTooltipItemQuestList(const struct FItemInfo& item);
	void STATIC_AddTooltipItemAttributeGage(const struct FItemInfo& item);
	void STATIC_GetRefineryColor(int Quality, int* R, int* G, int* B);
	void STATIC_AddTooltipItemCount(const struct FItemInfo& item);
	void STATIC_AddTooltipItemGrade(const struct FItemInfo& item);
	void STATIC_AddTooltipItemName(const struct FString& Name, const struct FItemInfo& item, int AddTooltipItemName);
	void STATIC_AddTooltipItemEnchant(const struct FItemInfo& item);
	void STATIC_AddTooltipItemBlank(int Height);
	void STATIC_SetTooltipItemColor(int R, int G, int B, int offset);
	void STATIC_AddTooltipItemOption2(int TitleID, int ContentID, bool bTitle, bool bContent, bool IamFirst);
	void STATIC_AddTooltipItemOption(int TitleID, const struct FString& Content, bool bTitle, bool bContent, bool IamFirst);
	void STATIC_ReturnTooltip_NTT_MANOR(const struct FString& param, const struct FString& TooltipType, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_QUESTINFO(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_RAIDLIST(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_QUESTLIST(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_PARTYMATCH(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_CLANINFO(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_RECIPE_MANUFACTURE(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_SHORTCUT(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_RECIPE(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType, bool bShowPrice);
	void STATIC_ReturnTooltip_NTT_NORMALITEM(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_ABNORMALSTATUS(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_SKILL(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_ACTION(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_ITEM(const struct FString& param, const struct FString& TooltipType, TEnumAsByte<ETooltipSourceType> eSourceType);
	void STATIC_ReturnTooltip_NTT_TEXT(const struct FString& param, TEnumAsByte<ETooltipSourceType> eSourceType, bool bDesc);
	void STATIC_EndItem();
	void STATIC_StartItem();
	void STATIC_ClearTooltip();
	bool STATIC_IsEnchantableItem(TEnumAsByte<EItemParamType> type);
	void STATIC_HandleRequestTooltipInfo(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MiniGame1Wnd
// 0x0D88 (0x0DC4 - 0x003C)
class UMiniGame1Wnd : public UUIScript
{
public:
	struct FMG1CellData                                CellGridData[0x40];                                       // 0x003C(0x0028) (NeedCtorLink)
	class UWindowHandle*                               Me;                                                       // 0x0A3C(0x0004)
	class UTextureHandle*                              MGTex0[0x8];                                              // 0x0A40(0x0004)
	class UTextureHandle*                              MGTex1[0x8];                                              // 0x0A60(0x0004)
	class UTextureHandle*                              MGTex2[0x8];                                              // 0x0A80(0x0004)
	class UTextureHandle*                              MGTex3[0x8];                                              // 0x0AA0(0x0004)
	class UTextureHandle*                              MGTex4[0x8];                                              // 0x0AC0(0x0004)
	class UTextureHandle*                              MGTex5[0x8];                                              // 0x0AE0(0x0004)
	class UTextureHandle*                              MGTex6[0x8];                                              // 0x0B00(0x0004)
	class UTextureHandle*                              MGTex7[0x8];                                              // 0x0B20(0x0004)
	class UButtonHandle*                               MGBtn0[0x8];                                              // 0x0B40(0x0004)
	class UButtonHandle*                               MGBtn1[0x8];                                              // 0x0B60(0x0004)
	class UButtonHandle*                               MGBtn2[0x8];                                              // 0x0B80(0x0004)
	class UButtonHandle*                               MGBtn3[0x8];                                              // 0x0BA0(0x0004)
	class UButtonHandle*                               MGBtn4[0x8];                                              // 0x0BC0(0x0004)
	class UButtonHandle*                               MGBtn5[0x8];                                              // 0x0BE0(0x0004)
	class UButtonHandle*                               MGBtn6[0x8];                                              // 0x0C00(0x0004)
	class UButtonHandle*                               MGBtn7[0x8];                                              // 0x0C20(0x0004)
	class UAnimTextureHandle*                          MGAnim0[0x8];                                             // 0x0C40(0x0004)
	class UAnimTextureHandle*                          MGAnim1[0x8];                                             // 0x0C60(0x0004)
	class UAnimTextureHandle*                          MGAnim2[0x8];                                             // 0x0C80(0x0004)
	class UAnimTextureHandle*                          MGAnim3[0x8];                                             // 0x0CA0(0x0004)
	class UAnimTextureHandle*                          MGAnim4[0x8];                                             // 0x0CC0(0x0004)
	class UAnimTextureHandle*                          MGAnim5[0x8];                                             // 0x0CE0(0x0004)
	class UAnimTextureHandle*                          MGAnim6[0x8];                                             // 0x0D00(0x0004)
	class UAnimTextureHandle*                          MGAnim7[0x8];                                             // 0x0D20(0x0004)
	class UButtonHandle*                               MG_BTNChallenge;                                          // 0x0D40(0x0004)
	class UButtonHandle*                               MG_BTNClose;                                              // 0x0D44(0x0004)
	class UProgressCtrlHandle*                         ProgressBar;                                              // 0x0D48(0x0004)
	class UTextureHandle*                              ResultTex;                                                // 0x0D4C(0x0004)
	struct FString                                     tX[0x6];                                                  // 0x0D50(0x000C) (NeedCtorLink)
	unsigned long                                      m_InGamingBool : 1;                                       // 0x0D98(0x0004)
	unsigned long                                      m_IsNewGamingBool : 1;                                    // 0x0D98(0x0004)
	unsigned long                                      m_PauseBool : 1;                                          // 0x0D98(0x0004)
	int                                                m_MatchCount;                                             // 0x0D9C(0x0004)
	int                                                m_CellBtnStatus;                                          // 0x0DA0(0x0004)
	int                                                m_CellBtnID1;                                             // 0x0DA4(0x0004)
	int                                                m_CellBtnID2;                                             // 0x0DA8(0x0004)
	int                                                m_CurrentLevel;                                           // 0x0DAC(0x0004)
	int                                                m_CurrentTimer;                                           // 0x0DB0(0x0004)
	int                                                m_CurrentScore;                                           // 0x0DB4(0x0004)
	int                                                m_TargetScore;                                            // 0x0DB8(0x0004)
	int                                                m_CountNumberofChains;                                    // 0x0DBC(0x0004)
	int                                                m_CurrentAnimID;                                          // 0x0DC0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MiniGame1Wnd");
		return ptr;
	}


	struct FString STATIC_TrimRight(const struct FString& S);
	void STATIC_PutNumberScore(int LevelNo);
	void STATIC_PutNumberLevel(int LevelNo);
	void STATIC_ProcEndGameDefaultSetting(const struct FString& SetTextureName);
	void STATIC_EndGamewithTimeOut();
	void EndGame();
	void STATIC_StartLevelUp();
	void STATIC_EndGameRemoveBlock(int Id);
	int STATIC_GetTargetScore(int CurrentLevel);
	int STATIC_GetCurrentTimeLimit(int CurrentLevel);
	void STATIC_OnTextureAnimEnd(class UAnimTextureHandle* a_WindowHandle);
	void STATIC_OnProgressTimeUp(const struct FString& strID);
	int STATIC_GetCellGridID(int X, int Y);
	bool STATIC_CheckSwappable(int ID1, int ID2);
	bool STATIC_CheckMovesOnTimer();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnClickCellIcon(int X, int Y);
	void STATIC_OnTimeOver();
	void STATIC_RestartCurrentGame();
	void STATIC_StartNewGameProc();
	void STATIC_StartNewGame();
	void STATIC_OnHide();
	void STATIC_PauseGame();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_CheckMatches(bool ClearButton);
	void STATIC_Randomize(int Id);
	void Initialize();
	void STATIC_PushDownRow(int Id);
	void STATIC_CheckMoves();
	void STATIC_CountMatches();
	void STATIC_ClearCellGridDataFlag();
	void STATIC_MoveTillnoMatches();
	void STATIC_ReadyCells();
	void STATIC_OnShow();
	void STATIC_ClearCellGridData();
	void STATIC_ClearScoreData();
	void STATIC_OnEvent(int EvID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SSQMainBoard
// 0x0090 (0x00CC - 0x003C)
class USSQMainBoard : public UUIScript
{
public:
	struct FSSQStatusInfo                              g_sinfo;                                                  // 0x003C(0x0060)
	struct FSSQPreStatusInfo                           g_sinfopre;                                               // 0x009C(0x002C) (NeedCtorLink)
	unsigned long                                      m_bShowPreInfo : 1;                                       // 0x00C8(0x0004)
	unsigned long                                      m_bRequest_SealStatus : 1;                                // 0x00C8(0x0004)
	unsigned long                                      m_bRequest_MainEvent : 1;                                 // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SSQMainBoard");
		return ptr;
	}


	struct FString STATIC_GetSSQTimeAttackEventRoomName(int nID);
	struct FString STATIC_GetSSQSealDesc(int nID);
	struct FString STATIC_GetSSQTeamName(int nID);
	struct FString STATIC_GetSSQSealName(int nID);
	void STATIC_AddSSQSealStatus(int m_nSSQStatus, int m_nNeedPoint1, int m_nNeedPoint2, int m_nSealID, int m_nOwnerTeamID, int m_nTeam1Mark, int m_nTeam2Mark);
	void STATIC_ShowSSQSealStatus();
	void STATIC_AddSSQMainEvent(const struct FSSQMainEventInfo& Info);
	void STATIC_ShowSSQMainEvent();
	void STATIC_ClearSSQMainEventInfo(struct FSSQMainEventInfo* Info);
	void STATIC_AddSSQPreInfoSealStatus();
	void STATIC_SetSSQPreInfo();
	void STATIC_ClearSSQPreInfo();
	void STATIC_SetSSQStatusInfo();
	void STATIC_SetSSQStatus();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ChatWnd
// 0x0110 (0x014C - 0x003C)
class UChatWnd : public UUICommonAPI
{
public:
	int                                                m_NoUnionCommanderMessage;                                // 0x003C(0x0004)
	int                                                m_KeywordFilterSound;                                     // 0x0040(0x0004)
	int                                                m_KeywordFilterActivate;                                  // 0x0044(0x0004)
	struct FString                                     m_Keyword0;                                               // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     m_Keyword1;                                               // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     m_Keyword2;                                               // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FChatFilterInfo>                     m_filterInfo;                                             // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FString>                             m_sectionName;                                            // 0x0078(0x000C) (NeedCtorLink)
	struct FChatUIType                                 m_ChatUI[0x8];                                            // 0x0084(0x0008)
	struct FChatUIType                                 m_chatType;                                               // 0x00C4(0x0008)
	class UChatWindowHandle*                           NormalChat;                                               // 0x00CC(0x0004)
	class UChatWindowHandle*                           TradeChat;                                                // 0x00D0(0x0004)
	class UChatWindowHandle*                           PartyChat;                                                // 0x00D4(0x0004)
	class UChatWindowHandle*                           ClanChat;                                                 // 0x00D8(0x0004)
	class UChatWindowHandle*                           AllyChat;                                                 // 0x00DC(0x0004)
	class UChatWindowHandle*                           SystemMsg;                                                // 0x00E0(0x0004)
	class UTabHandle*                                  ChatTabCtrl;                                              // 0x00E4(0x0004)
	class UEditBoxHandle*                              ChatEditBox;                                              // 0x00E8(0x0004)
	class UWindowHandle*                               m_hChatWnd;                                               // 0x00EC(0x0004)
	class UWindowHandle*                               m_hSystemMsgWnd;                                          // 0x00F0(0x0004)
	class UWindowHandle*                               m_hChatFilterWnd;                                         // 0x00F4(0x0004)
	class UTextureHandle*                              m_hChatWndLanguageTexture;                                // 0x00F8(0x0004)
	class UCheckBoxHandle*                             m_hChatFilterWndSystemMsgBox;                             // 0x00FC(0x0004)
	class UCheckBoxHandle*                             m_hChatFilterWndDamageBox;                                // 0x0100(0x0004)
	class UCheckBoxHandle*                             m_hChatFilterWndItemBox;                                  // 0x0104(0x0004)
	class UTextBoxHandle*                              m_hChatFilterWndCurrentText;                              // 0x0108(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxCommand;                       // 0x010C(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndKeywordSoundBox;                       // 0x0110(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndKeywordFilterBox;                      // 0x0114(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxSystem;                        // 0x0118(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxNormal;                        // 0x011C(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxShout;                         // 0x0120(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxPledge;                        // 0x0124(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxParty;                         // 0x0128(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxTrade;                         // 0x012C(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxWhisper;                       // 0x0130(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxDamage;                        // 0x0134(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxAlly;                          // 0x0138(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxItem;                          // 0x013C(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxHero;                          // 0x0140(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxUnion;                         // 0x0144(0x0004)
	class UCheckBoxHandle*                             m_hChkChatFilterWndCheckBoxBattleField;                   // 0x0148(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ChatWnd");
		return ptr;
	}


	int STATIC_GetCurrentChatTypeID(int ChatTypeUI);
	void STATIC_AssignCurrentChatTypeID(int ChatTypeID, int ChatTypeUI);
	void STATIC_GetAllcurrentAssignedChatTypeID();
	void STATIC_SetCurrentAssignedChatType2Ini(int ChannelIndex, int ChatType);
	void STATIC_ChangeTabChannel(int ChannelIndex);
	void STATIC_HandleDominionWarChannelSet(const struct FString& param);
	void STATIC_HandleTextLinkLButtonClick(const struct FString& param);
	TEnumAsByte<EChatType> STATIC_GetChatTypeByTabIndex(int Index);
	void STATIC_HandleMsnStatus(const struct FString& param);
	void STATIC_Print(int Index);
	void STATIC_HandleSetFocus();
	void STATIC_HandleSetString(const struct FString& a_Param);
	void STATIC_HandleChatWndStatusChange();
	void STATIC_SetChatFilterButton();
	void STATIC_SetDefaultFilterValue();
	void STATIC_SetDefaultFilterOn();
	void STATIC_InitFilterInfo();
	bool STATIC_CheckFilter(TEnumAsByte<EChatType> type, int WindowType, TEnumAsByte<ESystemMsgType> systemType);
	void STATIC_HandleIMEStatusChange();
	void STATIC_ShowAnnounceMessgage(const struct FString& Msg);
	void STATIC_ShowUnionCommanderMessgage(const struct FString& Msg);
	void STATIC_HandleChatmessage(const struct FString& param);
	void STATIC_HandleChatWndMacroCommand(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PrevStateName);
	void STATIC_HandleTabClick(const struct FString& strID);
	void STATIC_OnTabMerge(const struct FString& sTabButton);
	void STATIC_OnTabSplit(const struct FString& sTabButton);
	void STATIC_OnTimer(int TimerID);
	void STATIC_ClosePartyMatchingWnd();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnShow();
	void Clear();
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_InitScrollBarPosition();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_InitGlobalSetting();
	void STATIC_OnDefaultPosition();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ClanWnd
// 0x00D0 (0x010C - 0x003C)
class UClanWnd : public UUIScript
{
public:
	int                                                m_clanID;                                                 // 0x003C(0x0004)
	struct FString                                     m_clanName;                                               // 0x0040(0x000C) (NeedCtorLink)
	int                                                m_clanRank;                                               // 0x004C(0x0004)
	int                                                m_clanLevel;                                              // 0x0050(0x0004)
	int                                                m_clanNameValue;                                          // 0x0054(0x0004)
	int                                                m_bMoreInfo;                                              // 0x0058(0x0004)
	int                                                m_currentShowIndex;                                       // 0x005C(0x0004)
	int                                                G_CurrentRecord;                                          // 0x0060(0x0004)
	struct FString                                     G_CurrentSzData;                                          // 0x0064(0x000C) (NeedCtorLink)
	unsigned long                                      G_CurrentAlias : 1;                                       // 0x0070(0x0004)
	unsigned long                                      G_IamNobless : 1;                                         // 0x0070(0x0004)
	unsigned long                                      G_IamHero : 1;                                            // 0x0070(0x0004)
	int                                                G_ClanMember;                                             // 0x0074(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0078(0x000C) (NeedCtorLink)
	int                                                m_myClanType;                                             // 0x0084(0x0004)
	struct FString                                     m_myName;                                                 // 0x0088(0x000C) (NeedCtorLink)
	struct FString                                     m_myClanName;                                             // 0x0094(0x000C) (NeedCtorLink)
	int                                                m_indexNum;                                               // 0x00A0(0x0004)
	unsigned long                                      m_currentactivestatus1 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus2 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus3 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus4 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus5 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus6 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus7 : 1;                               // 0x00A4(0x0004)
	unsigned long                                      m_currentactivestatus8 : 1;                               // 0x00A4(0x0004)
	int                                                m_bClanMaster;                                            // 0x00A8(0x0004)
	int                                                m_bJoin;                                                  // 0x00AC(0x0004)
	int                                                m_bNickName;                                              // 0x00B0(0x0004)
	int                                                m_bCrest;                                                 // 0x00B4(0x0004)
	int                                                m_bWar;                                                   // 0x00B8(0x0004)
	int                                                m_bGrade;                                                 // 0x00BC(0x0004)
	int                                                m_bManageMaster;                                          // 0x00C0(0x0004)
	int                                                m_bOustMember;                                            // 0x00C4(0x0004)
	class UTextBoxHandle*                              txtDominionWarTitle;                                      // 0x00C8(0x0004)
	class UTextBoxHandle*                              txtDominionWarStatus;                                     // 0x00CC(0x0004)
	class UTextBoxHandle*                              TxtDominionWar_Title;                                     // 0x00D0(0x0004)
	class UTextBoxHandle*                              TxtDominion;                                              // 0x00D4(0x0004)
	class UTextBoxHandle*                              TxtDominionWarStatusTitle;                                // 0x00D8(0x0004)
	class UTextBoxHandle*                              TxtClanWar_Title;                                         // 0x00DC(0x0004)
	class UListCtrlHandle*                             m_hClanMemberList;                                        // 0x00E0(0x0004)
	struct FString                                     m_CurrentclanMasterName;                                  // 0x00E4(0x000C) (NeedCtorLink)
	struct FString                                     m_CurrentclanMasterReal;                                  // 0x00F0(0x000C) (NeedCtorLink)
	int                                                m_CurrentNHType;                                          // 0x00FC(0x0004)
	TArray<struct FClanInfo>                           m_memberList;                                             // 0x0100(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ClanWnd");
		return ptr;
	}


	void STATIC_ResetOpeningVariables();
	void STATIC_HandleClanMyAuth(const struct FString& a_Param);
	void STATIC_AskJoin();
	void STATIC_HandleSubClanUpdated(const struct FString& a_Param);
	void STATIC_RefreshCombobox();
	void STATIC_HandleDeleteMember(const struct FString& a_Param);
	int STATIC_GetIndexFromType(int type);
	void STATIC_HandleAddClanMember(const struct FString& a_Param);
	void STATIC_RefreshCombobox1(int ClanT);
	void STATIC_HandleMemberInfoUpdate(const struct FString& a_Param);
	bool STATIC_GetSelectedListCtrlItem(struct FLVDataRecord* Record);
	void STATIC_AddToList(int idx);
	int STATIC_getClanKnighthoodMasterInfo(const struct FString& NameVal);
	void STATIC_ShowList(int clanType);
	void STATIC_ClearList();
	void STATIC_HandleAddClanMemberMultiple(const struct FString& a_Param);
	void STATIC_HandleClanInfoUpdate(const struct FString& a_Param);
	void STATIC_HandleClanInfo(const struct FString& a_Param);
	void STATIC_HandleEV_ResultJoinDominionWar();
	void Clear();
	void STATIC_resetBtnShowHide();
	void STATIC_OnDBClickListCtrlRecord(const struct FString& ListCtrlID);
	void STATIC_OnClickListCtrlRecord(const struct FString& ListCtrlID);
	void STATIC_OnComboBoxItemSelected(const struct FString& sName, int Index);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_NoblessMenuValidate();
	void STATIC_OnShow();
	struct FString STATIC_GetClanTypeNameFromIndex(int Index);
	int STATIC_GetClanTypeFromIndex(int Index);
	void STATIC_OnRegisterEvent();
	void STATIC_Load();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	int STATIC_findmyClanData(const struct FString& C_Name);
	void STATIC_getmyClanInfo();
};


// Class Interface.InventoryWnd
// 0x010C (0x0148 - 0x003C)
class UInventoryWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_hInventoryWnd;                                          // 0x003C(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0040(0x000C) (NeedCtorLink)
	class UItemWindowHandle*                           m_invenItem;                                              // 0x004C(0x0004)
	class UItemWindowHandle*                           m_questItem;                                              // 0x0050(0x0004)
	class UItemWindowHandle*                           m_equipItem[0x19];                                        // 0x0054(0x0004)
	class UItemWindowHandle*                           m_hHennaItemWindow;                                       // 0x00B8(0x0004)
	class UTextBoxHandle*                              m_hAdenaTextBox;                                          // 0x00BC(0x0004)
	class UTabHandle*                                  m_invenTab;                                               // 0x00C0(0x0004)
	class UButtonHandle*                               m_sortBtn;                                                // 0x00C4(0x0004)
	class UButtonHandle*                               m_BtnRotateLeft;                                          // 0x00C8(0x0004)
	class UButtonHandle*                               m_BtnRotateRight;                                         // 0x00CC(0x0004)
	class UTextureHandle*                              m_CloakSlot_Disable;                                      // 0x00D0(0x0004)
	class UTextureHandle*                              m_Talisman_Disable[0x6];                                  // 0x00D4(0x0004)
	class UCharacterViewportWindowHandle*              m_ObjectViewport;                                         // 0x00EC(0x0004)
	TArray<struct FItemID>                             m_itemOrder;                                              // 0x00F0(0x000C) (NeedCtorLink)
	struct FVector                                     m_clickLocation;                                          // 0x00FC(0x000C)
	TArray<struct FItemInfo>                           m_EarItemList;                                            // 0x0108(0x000C) (NeedCtorLink)
	TArray<struct FItemInfo>                           m_FingerItemLIst;                                         // 0x0114(0x000C) (NeedCtorLink)
	TArray<struct FItemInfo>                           m_DecoItemList;                                           // 0x0120(0x000C) (NeedCtorLink)
	int                                                m_invenCount;                                             // 0x012C(0x0004)
	unsigned long                                      m_bCurrentState : 1;                                      // 0x0130(0x0004)
	int                                                m_MaxInvenCount;                                          // 0x0134(0x0004)
	int                                                m_MeshType;                                               // 0x0138(0x0004)
	int                                                m_NpcID;                                                  // 0x013C(0x0004)
	class UButtonHandle*                               m_hBtnCrystallize;                                        // 0x0140(0x0004)
	class UWindowHandle*                               ColorNickNameWnd;                                         // 0x0144(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.InventoryWnd");
		return ptr;
	}


	void STATIC_HandleChangeCharacterPawn(const struct FString& param);
	void STATIC_HandleSetMaxCount(const struct FString& param);
	void STATIC_UpdateCloakSlotActivation();
	void STATIC_UpdateTalismanSlotActivation();
	void STATIC_SortItem(class UItemWindowHandle* ItemWnd);
	void STATIC_OnLButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_SaveInventoryOrder();
	void STATIC_InvenClear();
	void STATIC_InvenDelete(const struct FItemInfo& item);
	void STATIC_InvenAddItem(const struct FItemInfo& NewItem, int ORDER);
	void STATIC_InvenLimitUpdate();
	bool STATIC_IsArrow(const struct FItemInfo& a_Info);
	int STATIC_IsDecoItem(const struct FItemInfo& a_Info);
	bool STATIC_IsBowOrFishingRod(const struct FItemInfo& a_Info);
	int STATIC_IsLOrRFinger(const struct FItemID& sID);
	int STATIC_IsLOrREar(const struct FItemID& sID);
	bool STATIC_IsShowInventoryWndUponEvent();
	void STATIC_HandleToggleWindow();
	void STATIC_HandleUpdateUserInfo();
	void STATIC_HandleDialogOK();
	void STATIC_SetItemCount();
	int STATIC_GetMyInventoryLimit();
	void STATIC_UseItem(class UItemWindowHandle* a_hItemWindow, int Index);
	void STATIC_SetAdenaText();
	void STATIC_UpdateHennaInfo();
	void STATIC_HandleUpdateHennaInfo(const struct FString& param);
	void STATIC_HandleAddHennaInfo(const struct FString& param);
	void STATIC_HandleItemListEnd();
	void STATIC_HandleUpdateItem(const struct FString& param);
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleHideWindow();
	void STATIC_OpenWindow();
	void STATIC_HandleOpenWindow(const struct FString& param);
	void STATIC_EquipItemUpdate(const struct FItemInfo& a_Info);
	void STATIC_FingerItemUpdate();
	void STATIC_EarItemUpdate();
	void STATIC_EquipItemDelete(const struct FItemID& sID);
	bool STATIC_EquipItemFind(const struct FItemID& sID);
	void STATIC_EquipItemClear();
	int STATIC_EquipItemGetItemNum();
	void STATIC_HandleClear();
	bool STATIC_IsQuestItem(struct FItemInfo* Info);
	bool STATIC_IsEquipItem(struct FItemInfo* Info);
	void STATIC_OnDropItemSource(const struct FString& strTarget, const struct FItemInfo& Info);
	void STATIC_OnDropItem(const struct FString& strTarget, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnSelectItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index);
	void STATIC_OnRClickItemWithHandle(class UItemWindowHandle* a_hItemWindow, int Index);
	void STATIC_OnDBClickItemWithHandle(class UItemWindowHandle* a_hItemWindow, int Index);
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEnterState(const struct FName& a_PrevStateName);
	void STATIC_HandleRestart();
	void STATIC_OnHide();
	void STATIC_CheckShowCrystallizeButton();
	void STATIC_OnShow();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitScrollBar();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.QuestTreeWnd
// 0x0124 (0x0160 - 0x003C)
class UQuestTreeWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	int                                                m_QuestNum;                                               // 0x0048(0x0004)
	int                                                m_OldQuestID;                                             // 0x004C(0x0004)
	struct FString                                     m_CurNodeName;                                            // 0x0050(0x000C) (NeedCtorLink)
	int                                                m_DeleteQuestID;                                          // 0x005C(0x0004)
	struct FString                                     m_DeleteNodeName;                                         // 0x0060(0x000C) (NeedCtorLink)
	struct FString                                     m_CurTab;                                                 // 0x006C(0x000C) (NeedCtorLink)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x0078(0x0004)
	unsigned long                                      m_bDrawBg2 : 1;                                           // 0x0078(0x0004)
	unsigned long                                      m_bDrawBg3 : 1;                                           // 0x0078(0x0004)
	TArray<struct FString>                             m_arrItemNodeName;                                        // 0x007C(0x000C) (NeedCtorLink)
	TArray<struct FString>                             m_arrItemString;                                          // 0x0088(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrItemID;                                              // 0x0094(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrItemQuestID;                                         // 0x00A0(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrItemLevel;                                           // 0x00AC(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrItemNumList;                                         // 0x00B8(0x000C) (NeedCtorLink)
	TArray<struct FLVDataRecord>                       m_QuestTrackData;                                         // 0x00C4(0x000C) (NeedCtorLink)
	int                                                m_TrackID;                                                // 0x00D0(0x0004)
	class UTextBoxHandle*                              m_txtQuestNum;                                            // 0x00D4(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x00D8(0x0004)
	class UWindowHandle*                               Drawer;                                                   // 0x00DC(0x0004)
	class UTextureHandle*                              m_QuestTooltip;                                           // 0x00E0(0x0004)
	class UQuestAlarmWnd*                              m_scriptAlarm;                                            // 0x00E4(0x0004)
	class UTreeHandle*                                 MainTree0;                                                // 0x00E8(0x0004)
	class UTreeHandle*                                 MainTree1;                                                // 0x00EC(0x0004)
	class UTreeHandle*                                 MainTree2;                                                // 0x00F0(0x0004)
	class UTreeHandle*                                 MainTree3;                                                // 0x00F4(0x0004)
	class UTreeHandle*                                 MainTree4;                                                // 0x00F8(0x0004)
	class UTreeHandle*                                 CurTree;                                                  // 0x00FC(0x0004)
	class UTabHandle*                                  QuestTabCtrl;                                             // 0x0100(0x0004)
	class UButtonHandle*                               m_btnAddAlarm;                                            // 0x0104(0x0004)
	class UButtonHandle*                               m_btnDeleteAlarm;                                         // 0x0108(0x0004)
	class UCheckBoxHandle*                             CheckAssignNotifier;                                      // 0x010C(0x0004)
	class UCheckBoxHandle*                             checkNpcPosBox;                                           // 0x0110(0x0004)
	class UTextBoxHandle*                              Drawer_txtQuestTitle;                                     // 0x0114(0x0004)
	class UTextBoxHandle*                              Drawer_txtQuestRecommandedLevel;                          // 0x0118(0x0004)
	class UTextBoxHandle*                              Drawer_txtQuestType;                                      // 0x011C(0x0004)
	class UTreeHandle*                                 Drawer_QuestDescriptionTree;                              // 0x0120(0x0004)
	class UTreeHandle*                                 Drawer_QuestDescriptionLargeTree;                         // 0x0124(0x0004)
	class UTreeHandle*                                 Drawer_QuestItemTree;                                     // 0x0128(0x0004)
	class UTreeHandle*                                 Drawer_QuestRewardItemTree;                               // 0x012C(0x0004)
	class UButtonHandle*                               Drawer_btnGiveUpCurrentQuest;                             // 0x0130(0x0004)
	class UButtonHandle*                               Drawer_btnClose;                                          // 0x0134(0x0004)
	class UTextBoxHandle*                              Drawer_txtQuestItemTitle;                                 // 0x0138(0x0004)
	class UTextBoxHandle*                              Drawer_txtQuestRewardItemTreeTitle;                       // 0x013C(0x0004)
	class UTextureHandle*                              Drawer_GroupBox_DescriptionTree;                          // 0x0140(0x0004)
	class UTextureHandle*                              Drawer_GroupBox_ItemTree;                                 // 0x0144(0x0004)
	class UTextBoxHandle*                              Drawer_txtRecommandedLevelText;                           // 0x0148(0x0004)
	class UListCtrlHandle*                             ListTrackItem1;                                           // 0x014C(0x0004)
	int                                                QuestID_Alarm;                                            // 0x0150(0x0004)
	int                                                QuestLevel_Alarm;                                         // 0x0154(0x0004)
	int                                                QuestEnd_Alarm;                                           // 0x0158(0x0004)
	unsigned long                                      QuestAutoAlarm : 1;                                       // 0x015C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.QuestTreeWnd");
		return ptr;
	}


	int STATIC_GetSelectedJournalLevelID(const struct FString& CurrentSelectedNodeID);
	int STATIC_GetSelectedJournalQuestID(const struct FString& CurrentSelectedNodeID);
	void STATIC_SetCurrentQuestJournalOnDrawerWnd(int QuestID, int QuestLevel, int Completed);
	void STATIC_InsertQuestTrackList();
	struct FString STATIC_ProcInsertNode(int QuestID, int Level, const struct FString& strParentName, const struct FXMLTreeNodeInfo& infNode);
	void STATIC_InsertNodeItem(int QuestID, int Level, const struct FString& strRetName, const struct FXMLTreeNodeItemInfo& infNodeItem);
	void STATIC_GetNodeInfo_Alarm();
	void STATIC_ButtonEnableCheck();
	void STATIC_HandleDeleteAlarm();
	void STATIC_HandleAddAlarm();
	void STATIC_HandleLanguageChanged();
	void STATIC_InitQuestTooltip();
	void STATIC_AddQuestInfo(const struct FString& strParentName, int QuestID, int Level, int Completed);
	void STATIC_HandleQuestCancel();
	struct FString STATIC_GetExpandedNode();
	void STATIC_SetQuestOff();
	void STATIC_UpdateTargetInfo();
	void STATIC_UpdateQuestCount();
	void STATIC_UpdateItemCountWhenAdd(int ClassID);
	void STATIC_UpdateItemCount(int ClassID, const struct FINT64& a_ItemCount);
	void STATIC_HandleQuestSetCurrentIDfromMiniMap(int QuestID, int Level);
	void STATIC_HandleQuestSetCurrentID(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_HandleQuestListEnd();
	void STATIC_HandleQuestList(const struct FString& a_Param);
	void STATIC_HandleQuestListStart();
	void STATIC_InitTree();
	void STATIC_ShowQuestList();
	void Clear();
	void STATIC_OnClickCheckBox(const struct FString& strID);
	void STATIC_GetCurrentJournalID(const struct FString& strID);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnDefaultPosition();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.QuestAlarmWnd
// 0x0258 (0x0294 - 0x003C)
class UQuestAlarmWnd : public UUICommonAPI
{
public:
	unsigned long                                      isWaitExpand : 1;                                         // 0x003C(0x0004)
	unsigned long                                      isWaitContract : 1;                                       // 0x003C(0x0004)
	unsigned long                                      isExpand : 1;                                             // 0x003C(0x0004)
	unsigned long                                      isClickedAdd : 1;                                         // 0x003C(0x0004)
	int                                                m_NumOfQuest;                                             // 0x0040(0x0004)
	int                                                i;                                                        // 0x0044(0x0004)
	int                                                j;                                                        // 0x0048(0x0004)
	struct FColor                                      Gold;                                                     // 0x004C(0x0004)
	struct FColor                                      White;                                                    // 0x0050(0x0004)
	struct FColor                                      Gray;                                                     // 0x0054(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0058(0x0004)
	class UWindowHandle*                               QuestWndOverCheck;                                        // 0x005C(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0060(0x0004)
	class UWindowHandle*                               QuestWnd[0x5];                                            // 0x0064(0x0004)
	class UNameCtrlHandle*                             QuestAlarmName[0x5];                                      // 0x0078(0x0004)
	int                                                QuestAlarmNameID[0x5];                                    // 0x008C(0x0004)
	class UNameCtrlHandle*                             QuestItemName[0x19];                                      // 0x00A0(0x0004)
	int                                                QuestItemNameID[0x19];                                    // 0x0104(0x0004)
	class UTextBoxHandle*                              QuestItemNum[0x19];                                       // 0x0168(0x0004)
	struct FINT64                                      QuestItemNumInt[0x19];                                    // 0x01CC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.QuestAlarmWnd");
		return ptr;
	}


	int STATIC_QuestItemSlotIdx(int QuestIdx, int ItemID);
	int STATIC_FindEmptyItemSlot(int QuestIdx);
	int STATIC_QuestSlotIdx(int QuestID);
	int STATIC_FindEmptyQuestSlot();
	void STATIC_UpdateAlarmItem(int ItemID, const struct FINT64& Count);
	void STATIC_DeleteQuestAlarm(int QuestID);
	void STATIC_AddQuestAlarm(int QuestID, int Level, int ItemID, const struct FINT64& ItemNum);
	void STATIC_FitWindowSize();
	void STATIC_ContractWindowSize();
	void STATIC_ExpendWindowSize();
	void STATIC_OnbtnCloseClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitData();
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MinimapWnd
// 0x0184 (0x01C0 - 0x003C)
class UMinimapWnd : public UUICommonAPI
{
public:
	int                                                m_PartyMemberCount;                                       // 0x003C(0x0004)
	int                                                m_PartyLocIndex;                                          // 0x0040(0x0004)
	int                                                b_IsShowGuideWnd;                                         // 0x0044(0x0004)
	unsigned long                                      m_AdjustCursedLoc : 1;                                    // 0x0048(0x0004)
	int                                                m_SSQStatus;                                              // 0x004C(0x0004)
	unsigned long                                      m_bShowSSQType : 1;                                       // 0x0050(0x0004)
	unsigned long                                      m_bShowCurrentLocation : 1;                               // 0x0050(0x0004)
	unsigned long                                      m_bShowGameTime : 1;                                      // 0x0050(0x0004)
	unsigned long                                      bHaveItem : 1;                                            // 0x0050(0x0004)
	unsigned long                                      bMiniMapDisabled : 1;                                     // 0x0050(0x0004)
	unsigned long                                      m_bExpandState : 1;                                       // 0x0050(0x0004)
	struct FVector                                     BlockedLoc1;                                              // 0x0054(0x000C)
	struct FVector                                     BlockedLoc2;                                              // 0x0060(0x000C)
	int                                                FortressID;                                               // 0x006C(0x0004)
	int                                                SiegeStatus;                                              // 0x0070(0x0004)
	int                                                TotalBarrackCnt;                                          // 0x0074(0x0004)
	int                                                GlobalCurFortressID;                                      // 0x0078(0x0004)
	int                                                G_ZoneID;                                                 // 0x007C(0x0004)
	int                                                G_ZoneID2;                                                // 0x0080(0x0004)
	unsigned long                                      GlobalCurFortressStatus : 1;                              // 0x0084(0x0004)
	struct FString                                     m_combocursedName;                                        // 0x0088(0x000C) (NeedCtorLink)
	unsigned long                                      m_Dominion : 1;                                           // 0x0094(0x0004)
	int                                                m_CurContinent;                                           // 0x0098(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x009C(0x0004)
	class UWindowHandle*                               m_hExpandWnd;                                             // 0x00A0(0x0004)
	class UWindowHandle*                               m_hGuideWnd;                                              // 0x00A4(0x0004)
	class UItemWindowHandle*                           m_questItem;                                              // 0x00A8(0x0004)
	class UMinimapCtrlHandle*                          m_MiniMap;                                                // 0x00AC(0x0004)
	class UButtonHandle*                               Btn_Refresh;                                              // 0x00B0(0x0004)
	class UButtonHandle*                               Btn_Refresh_Expand;                                       // 0x00B4(0x0004)
	class UButtonHandle*                               ReduceButton;                                             // 0x00B8(0x0004)
	class UButtonHandle*                               ReduceButton_Expand;                                      // 0x00BC(0x0004)
	class UTextBoxHandle*                              m_textSSQ;                                                // 0x00C0(0x0004)
	class UTextBoxHandle*                              m_textSSQStatus;                                          // 0x00C4(0x0004)
	class UTextBoxHandle*                              m_textSSQ_Expand;                                         // 0x00C8(0x0004)
	class UTextBoxHandle*                              m_textSSQStatus_Expand;                                   // 0x00CC(0x0004)
	class UTabHandle*                                  m_MapSelectTab;                                           // 0x00D0(0x0004)
	class UWindowHandle*                               CleftCurTriggerWnd;                                       // 0x00D4(0x0004)
	class UListCtrlHandle*                             ListTrackItem3;                                           // 0x00D8(0x0004)
	class UListCtrlHandle*                             ListTrackItem2;                                           // 0x00DC(0x0004)
	TArray<int>                                        loc_fortress;                                             // 0x00E0(0x000C) (NeedCtorLink)
	TArray<int>                                        loc_component;                                            // 0x00EC(0x000C) (NeedCtorLink)
	TArray<int>                                        loc_sysstr;                                               // 0x00F8(0x000C) (NeedCtorLink)
	TArray<int>                                        loc_xloc;                                                 // 0x0104(0x000C) (NeedCtorLink)
	TArray<int>                                        loc_yloc;                                                 // 0x0110(0x000C) (NeedCtorLink)
	int                                                loc_cleftx[0x5];                                          // 0x011C(0x0004)
	int                                                loc_clefty[0x5];                                          // 0x0130(0x0004)
	struct FString                                     loc_cleftName[0x5];                                       // 0x0144(0x000C) (NeedCtorLink)
	struct FString                                     loc_cleftIcon[0x5];                                       // 0x0180(0x000C) (NeedCtorLink)
	class UWindowHandle*                               MiniMapDrawerWnd;                                         // 0x01BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MinimapWnd");
		return ptr;
	}


	int STATIC_GetContinent(const struct FVector& Loc);
	void STATIC_SetLocContinent(const struct FVector& Loc);
	void STATIC_SetContinent(int Continent);
	void STATIC_DrawCleftStatus();
	void STATIC_HandleDominionsOwnPos(const struct FString& param);
	void STATIC_InitializeLocation();
	void STATIC_DrawMapMainInfo(int ReturnInt);
	void STATIC_DrawMapAfterBarrack(int ReturnInt);
	void STATIC_DrawMapBasicInfo(int ReturnInt);
	int STATIC_BarrackID2Int(int FortressID, int BarrackID);
	struct FString STATIC_BarrackID2Text(int FortressID, int BarrackID);
	struct FString STATIC_BarrackID2YLoc(int FortressID, int BarrackID);
	struct FString STATIC_BarrackID2XLoc(int FortressID, int BarrackID);
	void STATIC_HandleFortressMapBarrackInfo(const struct FString& param);
	void STATIC_HandleShowFortressMapInfo(const struct FString& param);
	void STATIC_DrawPeaceStatusFortressSiegeStatus(const struct FString& param);
	void STATIC_SelectSunOrMoon(int GameHour);
	void STATIC_HandleMinimapTravel(const struct FString& a_Param);
	void STATIC_HandleUpdateGameTime(const struct FString& a_Param);
	void STATIC_DrawCursedWeapon(const struct FString& WindowName, int ItemID, const struct FString& cursedName, const struct FVector& vecLoc, bool bDropped, bool bRefresh);
	void STATIC_HandleCursedWeaponLoctaion(const struct FString& param);
	void STATIC_HandleCursedWeaponList(const struct FString& param);
	void STATIC_OnClickPartyLocButton();
	void STATIC_AdjustMapToPlayerPosition(bool a_ZoomToTownMap);
	void STATIC_OnClickMyLocButton();
	void STATIC_OnClickTargetButton();
	void STATIC_OnClickReduceButton();
	void STATIC_OnClickButton(const struct FString& a_ButtonID);
	void STATIC_HandleMinimapHideQuest();
	void STATIC_HandleMinimapShowQuest();
	void STATIC_HandleMinimapDeleteAllTarget();
	void STATIC_HandleMinimapDeleteTarget(const struct FString& a_Param);
	void STATIC_HandleMinimapAddTarget(const struct FString& a_Param);
	void STATIC_HandleShowMinimap(const struct FString& a_Param);
	bool STATIC_IsExpandState();
	void STATIC_SetExpandState(bool bExpandState);
	void STATIC_HandlePartyMemberChanged(const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_SetCurrentLocation();
	void STATIC_SetSSQTypeText();
	void STATIC_ContinentLoc();
	void STATIC_OnShow();
	void STATIC_FilterDungeonMap();
	void STATIC_HandleDungeonMapRefresh(const struct FString& param);
	void STATIC_HandleZoneTitle();
	void STATIC_HandleChatmessage(const struct FString& param);
	void STATIC_HandleSeedMapInfo(const struct FString& param);
	void STATIC_DrawDominionTarget();
	void STATIC_HandleDominionWarEnd();
	void STATIC_HandleDominionWarStart();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
	void STATIC_GetLocData();
	bool STATIC_IsHideMinimapZone_new(int nZoneID);
	bool STATIC_IsHideMinimapZone(int nZoneID);
	void STATIC_ExecuteFortressSiegeStatus(const struct FString& param);
	int STATIC_FortressID2ZoneNameID(int LocalID);
};


// Class Interface.ShopWnd
// 0x0020 (0x005C - 0x003C)
class UShopWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	TEnumAsByte<EShopType>                             m_shopType;                                               // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                m_merchantID;                                             // 0x004C(0x0004)
	int                                                m_NpcID;                                                  // 0x0050(0x0004)
	struct FINT64                                      m_currentPrice;                                           // 0x0054(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ShopWnd");
		return ptr;
	}


	void STATIC_HandleOKButton();
	void STATIC_AddPrice(const struct FINT64& Price);
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleOpenWindow(const struct FString& param);
	void STATIC_HandleDialogOK();
	void STATIC_MoveItemBottomToTop(int Index, bool bAllItem);
	void STATIC_MoveItemTopToBottom(int Index, bool bAllItem);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnDBClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Clear();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.EventMatchObserverWnd
// 0x0878 (0x08B4 - 0x003C)
class UEventMatchObserverWnd : public UUICommonAPI
{
public:
	int                                                m_Score1;                                                 // 0x003C(0x0004)
	int                                                m_Score2;                                                 // 0x0040(0x0004)
	struct FString                                     m_TeamName1;                                              // 0x0044(0x000C) (NeedCtorLink)
	struct FString                                     m_TeamName2;                                              // 0x0050(0x000C) (NeedCtorLink)
	int                                                m_SelectedUserID[0x2];                                    // 0x005C(0x0004)
	unsigned long                                      m_ClassOrName : 1;                                        // 0x0064(0x0004)
	class UWindowHandle*                               m_hTopWnd;                                                // 0x0068(0x0004)
	class UWindowHandle*                               m_hPlayerWnd[0x2];                                        // 0x006C(0x0004)
	class UBarHandle*                                  m_hPlayerCPBar[0x2];                                      // 0x0074(0x0004)
	class UBarHandle*                                  m_hPlayerHPBar[0x2];                                      // 0x007C(0x0004)
	class UBarHandle*                                  m_hPlayerMPBar[0x2];                                      // 0x0084(0x0004)
	class UTextureHandle*                              m_hplayerback1_[0x2];                                     // 0x008C(0x0004)
	class UTextureHandle*                              m_hplayerback2_[0x2];                                     // 0x0094(0x0004)
	class UTextureHandle*                              m_hplayerback3_[0x2];                                     // 0x009C(0x0004)
	class UTextBoxHandle*                              m_hPlayerLvClassTextBox[0x2];                             // 0x00A4(0x0004)
	class UTextBoxHandle*                              m_hPlayerNameTextBox[0x2];                                // 0x00AC(0x0004)
	class UWindowHandle*                               m_hPlayerBuffCoverWnd[0x2];                               // 0x00B4(0x0004)
	class UStatusIconHandle*                           m_hPlayerBuffWnd[0x2];                                    // 0x00BC(0x0004)
	class UWindowHandle*                               m_hParty1Wnd;                                             // 0x00C4(0x0004)
	class UWindowHandle*                               m_hParty1MemberWnd[0x9];                                  // 0x00C8(0x0004)
	class UTextBoxHandle*                              m_hParty1MemberNameTextBox[0x9];                          // 0x00EC(0x0004)
	class UTextBoxHandle*                              m_hParty1MemberClassTextBox[0x9];                         // 0x0110(0x0004)
	class UBarHandle*                                  m_hParty1MemberHPBar[0x9];                                // 0x0134(0x0004)
	class UBarHandle*                                  m_hParty1MemberCPBar[0x9];                                // 0x0158(0x0004)
	class UBarHandle*                                  m_hParty1MemberMPBar[0x9];                                // 0x017C(0x0004)
	class UWindowHandle*                               m_hParty1MemberSelectedTex[0x9];                          // 0x01A0(0x0004)
	class UTextureHandle*                              m_hParty1NumberTex[0x9];                                  // 0x01C4(0x0004)
	class UTextureHandle*                              m_hparty1back1_[0x9];                                     // 0x01E8(0x0004)
	class UTextureHandle*                              m_hparty1back2_[0x9];                                     // 0x020C(0x0004)
	class UTextureHandle*                              m_hparty1back3_[0x9];                                     // 0x0230(0x0004)
	class UWindowHandle*                               m_hParty2Wnd;                                             // 0x0254(0x0004)
	class UWindowHandle*                               m_hParty2MemberWnd[0x9];                                  // 0x0258(0x0004)
	class UTextBoxHandle*                              m_hParty2MemberNameTextBox[0x9];                          // 0x027C(0x0004)
	class UTextBoxHandle*                              m_hParty2MemberClassTextBox[0x9];                         // 0x02A0(0x0004)
	class UBarHandle*                                  m_hParty2MemberHPBar[0x9];                                // 0x02C4(0x0004)
	class UBarHandle*                                  m_hParty2MemberCPBar[0x9];                                // 0x02E8(0x0004)
	class UBarHandle*                                  m_hParty2MemberMPBar[0x9];                                // 0x030C(0x0004)
	class UWindowHandle*                               m_hParty2MemberSelectedTex[0x9];                          // 0x0330(0x0004)
	class UTextureHandle*                              m_hParty2NumberTex[0x9];                                  // 0x0354(0x0004)
	class UTextureHandle*                              m_hparty2back1_[0x9];                                     // 0x0378(0x0004)
	class UTextureHandle*                              m_hparty2back2_[0x9];                                     // 0x039C(0x0004)
	class UTextureHandle*                              m_hparty2back3_[0x9];                                     // 0x03C0(0x0004)
	class UTextBoxHandle*                              m_hTeamName1TextBox;                                      // 0x03E4(0x0004)
	class UTextBoxHandle*                              m_hTeamName2TextBox;                                      // 0x03E8(0x0004)
	class UTextureHandle*                              m_hScore1Tex;                                             // 0x03EC(0x0004)
	class UTextureHandle*                              m_hScore2Tex;                                             // 0x03F0(0x0004)
	class UWindowHandle*                               m_hMsgLeftWnd[0x6];                                       // 0x03F4(0x0004)
	class UTextBoxHandle*                              m_hMsgLeftAttackerTextBox[0x6];                           // 0x040C(0x0004)
	class UTextBoxHandle*                              m_hMsgLeftDefenderTextBox[0x6];                           // 0x0424(0x0004)
	class UTextBoxHandle*                              m_hMsgLeftSkillTextBox[0x6];                              // 0x043C(0x0004)
	class UWindowHandle*                               m_hMsgRightWnd[0x6];                                      // 0x0454(0x0004)
	class UTextBoxHandle*                              m_hMsgRightAttackerTextBox[0x6];                          // 0x046C(0x0004)
	class UTextBoxHandle*                              m_hMsgRightDefenderTextBox[0x6];                          // 0x0484(0x0004)
	class UTextBoxHandle*                              m_hMsgRightSkillTextBox[0x6];                             // 0x049C(0x0004)
	int                                                m_Party1UserIDList[0x9];                                  // 0x04B4(0x0004)
	int                                                m_Party2UserIDList[0x9];                                  // 0x04D8(0x0004)
	int                                                m_MsgStartIndex;                                          // 0x04FC(0x0004)
	int                                                m_Team1MsgStartIndex;                                     // 0x0500(0x0004)
	int                                                m_Team2MsgStartIndex;                                     // 0x0504(0x0004)
	struct FSkillMsgInfo                               m_MsgList[0x6];                                           // 0x0508(0x0034) (NeedCtorLink)
	struct FSkillMsgInfo                               m_Team1MsgList[0x6];                                      // 0x0640(0x0034) (NeedCtorLink)
	struct FSkillMsgInfo                               m_Team2MsgList[0x6];                                      // 0x0778(0x0034) (NeedCtorLink)
	TEnumAsByte<EMessageMode>                          m_MsgMode;                                                // 0x08B0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08B1(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.EventMatchObserverWnd");
		return ptr;
	}


	void STATIC_UpdateSkillMsg();
	void STATIC_AddSkillMsg(int a_AttackerTeamID, int a_AttackerUserID, const struct FString& a_AttackerName, int a_DefenderTeamID, int a_DefenderUserID, const struct FString& a_DefenderName, const struct FString& a_SkillName);
	bool STATIC_GetTeamUserID(int a_UserClassID, int* a_TeamID, int* a_UserID);
	void STATIC_ClearMsg();
	bool STATIC_IsSelectedUser(int a_TeamID, int a_UserID);
	void STATIC_SetSelectedUser(int a_TeamID, int a_UserID);
	void STATIC_UpdateUserInfo(int a_TeamID, int a_UserID);
	void STATIC_UpdateScore();
	void STATIC_UpdateTeamInfo(int a_TeamID);
	void STATIC_UpdateTeamName();
	void STATIC_RefreshClassOrName();
	void STATIC_HandleShortcutCommand(const struct FString& a_Param);
	void STATIC_HandleReceiveMagicSkillUse(const struct FString& a_Param);
	void STATIC_HandleEventMatchUpdateUserInfo(const struct FString& a_Param);
	void STATIC_HandleEventMatchUpdateTeamInfo(const struct FString& a_Param);
	void STATIC_HandleStartEventMatchObserver(const struct FString& a_Param);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnTimer(int a_TimerID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.DetailStatusWnd
// 0x0110 (0x014C - 0x003C)
class UDetailStatusWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	int                                                m_UserID;                                                 // 0x0048(0x0004)
	struct FHennaInfo                                  m_HennaInfo;                                              // 0x004C(0x0044)
	class UTextBoxHandle*                              txtSP;                                                    // 0x0090(0x0004)
	class UTextBoxHandle*                              txtName1;                                                 // 0x0094(0x0004)
	class UTextBoxHandle*                              txtName2;                                                 // 0x0098(0x0004)
	class UTextBoxHandle*                              txtHeadPledge;                                            // 0x009C(0x0004)
	class UTextBoxHandle*                              txtPledge;                                                // 0x00A0(0x0004)
	class UTextBoxHandle*                              txtLvHead;                                                // 0x00A4(0x0004)
	class UTextBoxHandle*                              txtLvName;                                                // 0x00A8(0x0004)
	class UTextBoxHandle*                              txtHeadRank;                                              // 0x00AC(0x0004)
	class UTextBoxHandle*                              txtRank;                                                  // 0x00B0(0x0004)
	class UStatusBarHandle*                            texHP;                                                    // 0x00B4(0x0004)
	class UStatusBarHandle*                            texMP;                                                    // 0x00B8(0x0004)
	class UStatusBarHandle*                            texExp;                                                   // 0x00BC(0x0004)
	class UStatusBarHandle*                            texCP;                                                    // 0x00C0(0x0004)
	class UTextBoxHandle*                              txtPhysicalAttack;                                        // 0x00C4(0x0004)
	class UTextBoxHandle*                              txtPhysicalDefense;                                       // 0x00C8(0x0004)
	class UTextBoxHandle*                              txtHitRate;                                               // 0x00CC(0x0004)
	class UTextBoxHandle*                              txtCriticalRate;                                          // 0x00D0(0x0004)
	class UTextBoxHandle*                              txtPhysicalAttackSpeed;                                   // 0x00D4(0x0004)
	class UTextBoxHandle*                              txtMagicalAttack;                                         // 0x00D8(0x0004)
	class UTextBoxHandle*                              txtMagicDefense;                                          // 0x00DC(0x0004)
	class UTextBoxHandle*                              txtPhysicalAvoid;                                         // 0x00E0(0x0004)
	class UTextBoxHandle*                              txtGmMoving;                                              // 0x00E4(0x0004)
	class UTextBoxHandle*                              txtHeadMovingSpeed;                                       // 0x00E8(0x0004)
	class UTextBoxHandle*                              txtMovingSpeed;                                           // 0x00EC(0x0004)
	class UTextBoxHandle*                              txtHeadMagicCastingSpeed;                                 // 0x00F0(0x0004)
	class UTextBoxHandle*                              txtMagicCastingSpeed;                                     // 0x00F4(0x0004)
	class UTextBoxHandle*                              txtSTR;                                                   // 0x00F8(0x0004)
	class UTextBoxHandle*                              txtDEX;                                                   // 0x00FC(0x0004)
	class UTextBoxHandle*                              txtCON;                                                   // 0x0100(0x0004)
	class UTextBoxHandle*                              txtINT;                                                   // 0x0104(0x0004)
	class UTextBoxHandle*                              txtWIT;                                                   // 0x0108(0x0004)
	class UTextBoxHandle*                              txtMEN;                                                   // 0x010C(0x0004)
	class UTextBoxHandle*                              txtCriminalRate;                                          // 0x0110(0x0004)
	class UTextBoxHandle*                              txtPVP;                                                   // 0x0114(0x0004)
	class UTextBoxHandle*                              txtSociality;                                             // 0x0118(0x0004)
	class UTextBoxHandle*                              txtRemainSulffrage;                                       // 0x011C(0x0004)
	class UTextureHandle*                              texHero;                                                  // 0x0120(0x0004)
	class UTextureHandle*                              texPledgeCrest;                                           // 0x0124(0x0004)
	class UTextureHandle*                              VitalityTex;                                              // 0x0128(0x0004)
	class UTextBoxHandle*                              txtAttrAttackType;                                        // 0x012C(0x0004)
	class UTextBoxHandle*                              txtAttrAttackValue;                                       // 0x0130(0x0004)
	class UTextBoxHandle*                              txtAttrDefenseValFire;                                    // 0x0134(0x0004)
	class UTextBoxHandle*                              txtAttrDefenseValWater;                                   // 0x0138(0x0004)
	class UTextBoxHandle*                              txtAttrDefenseValWind;                                    // 0x013C(0x0004)
	class UTextBoxHandle*                              txtAttrDefenseValEarth;                                   // 0x0140(0x0004)
	class UTextBoxHandle*                              txtAttrDefenseValHoly;                                    // 0x0144(0x0004)
	class UTextBoxHandle*                              txtAttrDefenseValUnholy;                                  // 0x0148(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.DetailStatusWnd");
		return ptr;
	}


	void STATIC_RunUnTransformManage();
	void STATIC_RunTransformManage();
	void STATIC_UpdateVp(int Vitality);
	void STATIC_HandleVitalityPointInfo(const struct FString& param);
	void STATIC_OnKeyDown(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> nKey);
	void STATIC_ToggleOpenCharInfoWnd();
	void STATIC_UpdateCPBar(int Value, int MaxValue);
	void STATIC_UpdateEXPBar(const struct FINT64& Value, int Level);
	void STATIC_UpdateMPBar(int Value, int MaxValue);
	void STATIC_UpdateHPBar(int Value, int MaxValue);
	void STATIC_UpdateInterface();
	void STATIC_HandleUpdateUserInfo();
	void STATIC_HandleUpdateUserGauge(int type);
	float STATIC_GetMyExpRate();
	struct FString STATIC_GetMovingSpeed(const struct FUserInfo& a_UserInfo);
	bool STATIC_GetMyUserInfo(struct FUserInfo* a_MyUserInfo);
	void STATIC_HandleUpdateHennaInfo(const struct FString& param);
	void STATIC_HandleUpdateStatusGauge(const struct FString& param, int type);
	void STATIC_HandleToggle();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SkillEnchantInfoWnd
// 0x0370 (0x03AC - 0x003C)
class USkillEnchantInfoWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_wndTop;                                                 // 0x003C(0x0004)
	class UButtonHandle*                               m_btnLearn;                                               // 0x0040(0x0004)
	int                                                m_iType;                                                  // 0x0044(0x0004)
	int                                                m_iID;                                                    // 0x0048(0x0004)
	int                                                m_iLevel;                                                 // 0x004C(0x0004)
	int                                                m_iRootNameLength;                                        // 0x0050(0x0004)
	int                                                m_iID_clicked;                                            // 0x0054(0x0004)
	int                                                m_iLevel_clicked;                                         // 0x0058(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x005C(0x0004)
	class USkillEnchantWnd*                            skillEnchantWndScript;                                    // 0x0060(0x0004)
	struct FSkillDetailItem                            mySkillDetailItem[0x8];                                   // 0x0064(0x0068) (NeedCtorLink)
	int                                                m_skillDetailIndex;                                       // 0x03A4(0x0004)
	int                                                m_ClickedlIndex;                                          // 0x03A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SkillEnchantInfoWnd");
		return ptr;
	}


	void STATIC_AddSkillEnchantInfoExtend(const struct FString& strIconName, const struct FString& strName, const struct FINT64& iNumOfItem);
	void STATIC_InsertNodeItem(const struct FString& strNodeName, const struct FXMLTreeNodeItemInfo& infNodeItemName);
	void STATIC_ClearDetailInfo();
	void STATIC_AddSkillEnchantInfoListItem(const struct FString& strIconName, const struct FString& strName, int iID, int iLevel, int iSPConsume, const struct FString& strEnchantName);
	void STATIC_ShowSkillEnchantInfoWnd(int iType);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLearn();
	void STATIC_OnClickButton(const struct FString& strItemID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MagicSkillWnd
// 0x01F0 (0x022C - 0x003C)
class UMagicSkillWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_wndTop;                                                 // 0x003C(0x0004)
	class UWindowHandle*                               m_wndName[0x8];                                           // 0x0040(0x0004)
	class UTextBoxHandle*                              m_NameStr[0x8];                                           // 0x0060(0x0004)
	class UTextureHandle*                              m_NameBtn[0x8];                                           // 0x0080(0x0004)
	class UTextureHandle*                              m_ItemBg[0x8];                                            // 0x00A0(0x0004)
	class UWindowHandle*                               m_wnd[0x8];                                               // 0x00C0(0x0004)
	class UItemWindowHandle*                           m_Item[0x8];                                              // 0x00E0(0x0004)
	class UButtonHandle*                               m_HiddenBtn[0x8];                                         // 0x0100(0x0004)
	class UWindowHandle*                               areaScroll;                                               // 0x0120(0x0004)
	class UWindowHandle*                               m_wndName_p[0x6];                                         // 0x0124(0x0004)
	class UTextBoxHandle*                              m_NameStr_p[0x6];                                         // 0x013C(0x0004)
	class UTextureHandle*                              m_NameBtn_p[0x6];                                         // 0x0154(0x0004)
	class UTextureHandle*                              m_ItemBg_p[0x6];                                          // 0x016C(0x0004)
	class UWindowHandle*                               m_wnd_p[0x6];                                             // 0x0184(0x0004)
	class UItemWindowHandle*                           m_Item_p[0x6];                                            // 0x019C(0x0004)
	class UButtonHandle*                               m_HiddenBtn_p[0x6];                                       // 0x01B4(0x0004)
	class UWindowHandle*                               areaScroll_p;                                             // 0x01CC(0x0004)
	unsigned long                                      m_bShow : 1;                                              // 0x01D0(0x0004)
	struct FString                                     m_WindowName;                                             // 0x01D4(0x000C) (NeedCtorLink)
	int                                                m_bExistSkill[0x8];                                       // 0x01E0(0x0004)
	int                                                nScrollHeight;                                            // 0x0200(0x0004)
	int                                                m_bExistSkill_p[0x6];                                     // 0x0204(0x0004)
	int                                                nScrollHeight_p;                                          // 0x021C(0x0004)
	struct FString                                     WndName;                                                  // 0x0220(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MagicSkillWnd");
		return ptr;
	}


	bool STATIC_IsChangeSkillID(int SkillID);
	bool STATIC_IsItemSkillID(int SkillID);
	bool STATIC_IsHeroSkillID(int SkillID);
	void STATIC_GroupingSkill(int SkillID, int SkillLevel);
	void STATIC_ComputeItemWndAnchor();
	void STATIC_ComputeItemWndHeight();
	void STATIC_HandleSkillList(const struct FString& param);
	void Clear();
	void STATIC_HandleSkillListStart();
	void STATIC_HandleLanguageChanged();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMMagicSkillWnd
// 0x0004 (0x0230 - 0x022C)
class UGMMagicSkillWnd : public UMagicSkillWnd
{
public:
	unsigned long                                      bShow : 1;                                                // 0x022C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMMagicSkillWnd");
		return ptr;
	}


	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_HadleGMObservingSkillList(const struct FString& a_Param);
	void STATIC_HadleGMObservingSkillListStart();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_ShowMagicSkill(const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RecipeBuyListWnd
// 0x000C (0x0048 - 0x003C)
class URecipeBuyListWnd : public UUICommonAPI
{
public:
	int                                                m_merchantID;                                             // 0x003C(0x0004)
	int                                                m_MaxMP;                                                  // 0x0040(0x0004)
	class UBarHandle*                                  MPBar;                                                    // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RecipeBuyListWnd");
		return ptr;
	}


	struct FCustomTooltip STATIC_SetTooltip(const struct FString& Name, const struct FString& Description, const struct FINT64& MakingFee);
	void STATIC_AddRecipeShopSellItem(int RecipeID, int CanbeMade, const struct FINT64& MakingFee);
	void STATIC_SetMPBar(int currentMP);
	void STATIC_ReceiveRecipeShopSellList(int ServerID, int currentMP, int MaxMP, const struct FINT64& Adena);
	void Clear();
	void STATIC_CloseWindow();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RecipeTreeWnd
// 0x0000 (0x003C - 0x003C)
class URecipeTreeWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RecipeTreeWnd");
		return ptr;
	}


	void STATIC_AddRecipeItem(int ProductID, int SuccessRate, const struct FINT64& NeedCount, const struct FString& NodeName);
	void STATIC_SetRecipeInfo(int RecipeID, int SuccessRate);
	void STATIC_StartRecipeTreeWnd(int RecipeID, int SuccessRate);
	void Clear();
	void STATIC_CloseWindow();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SkillTrainListWnd
// 0x0014 (0x0050 - 0x003C)
class USkillTrainListWnd : public UUICommonAPI
{
public:
	int                                                m_iType;                                                  // 0x003C(0x0004)
	int                                                m_iState;                                                 // 0x0040(0x0004)
	int                                                m_iRootNameLength;                                        // 0x0044(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x0048(0x0004)
	class UWindowHandle*                               m_SkillTrainListWnd;                                      // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SkillTrainListWnd");
		return ptr;
	}


	void STATIC_InsertNodeItem(const struct FString& strNodeName, const struct FXMLTreeNodeItemInfo& infNodeItemName);
	void STATIC_AddSkillTrainListItem(const struct FString& strIconName, const struct FString& strName, int iID, int iLevel, int iSPConsume, const struct FString& strEnchantName);
	void STATIC_ShowSkillTrainListWnd(int iType);
	void STATIC_OnShow();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Clear();
	void STATIC_OnClickButton(const struct FString& strItemID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.HennaListWnd
// 0x000C (0x0048 - 0x003C)
class UHennaListWnd : public UUICommonAPI
{
public:
	int                                                m_iState;                                                 // 0x003C(0x0004)
	int                                                m_iRootNameLength;                                        // 0x0040(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.HennaListWnd");
		return ptr;
	}


	void STATIC_AddHennaListItem(const struct FString& strName, const struct FString& strIconName, const struct FString& strDescription, const struct FINT64& iFee, int iHennaID);
	void STATIC_ShowHennaListWnd(const struct FINT64& iAdena);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Clear();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CharacterCreateMenuWnd
// 0x00B8 (0x00F4 - 0x003C)
class UCharacterCreateMenuWnd : public UUICommonAPI
{
public:
	struct FString                                     RACE_STR[0x6];                                            // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     JOB_STR[0x2];                                             // 0x0084(0x000C) (NeedCtorLink)
	struct FString                                     SEX_STR[0x2];                                             // 0x009C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hBtnRequestCreateCharacter;                             // 0x00B4(0x0004)
	class UWindowHandle*                               m_hBtnPrev;                                               // 0x00B8(0x0004)
	class UTextBoxHandle*                              m_hTbClassDescription;                                    // 0x00BC(0x0004)
	class UEditBoxHandle*                              m_hEbName;                                                // 0x00C0(0x0004)
	class UComboBoxHandle*                             m_hCbRace;                                                // 0x00C4(0x0004)
	class UComboBoxHandle*                             m_hCbJob;                                                 // 0x00C8(0x0004)
	class UComboBoxHandle*                             m_hCbSex;                                                 // 0x00CC(0x0004)
	class UComboBoxHandle*                             m_hCbHairType;                                            // 0x00D0(0x0004)
	class UComboBoxHandle*                             m_hCbHairColor;                                           // 0x00D4(0x0004)
	class UComboBoxHandle*                             m_hCbFaceType;                                            // 0x00D8(0x0004)
	class UButtonHandle*                               m_hBtnRotateLeft;                                         // 0x00DC(0x0004)
	class UButtonHandle*                               m_hBtnRotateRight;                                        // 0x00E0(0x0004)
	class UButtonHandle*                               m_hBtnZoomIn;                                             // 0x00E4(0x0004)
	class UButtonHandle*                               m_hBtnZoomOut;                                            // 0x00E8(0x0004)
	int                                                m_CameraState;                                            // 0x00EC(0x0004)
	unsigned long                                      m_bZoomed : 1;                                            // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CharacterCreateMenuWnd");
		return ptr;
	}


	void STATIC_SetCameraChar(int a_CharIndex);
	void STATIC_EnableRotate(bool bRotate);
	void STATIC_CameraMoveBackward(int State, int Race, int Job, int gender);
	void STATIC_CameraMoveParallelTransference(int State, int Race, int Job, int gender);
	void STATIC_CameraMoveForward(int Race, int Job, int gender);
	void STATIC_CameraMove(int State);
	int STATIC_GetIndex(int Race, int Job, int gender);
	int STATIC_GetDefaultCharacterIndex(int Race, int Job, int Sex);
	void STATIC_ErrorInSex();
	void STATIC_ErrorInJob();
	void STATIC_ErrorInRace();
	void STATIC_OnFaceType(int Index);
	void STATIC_OnHairColor(int Index);
	void STATIC_OnHairType(int Index);
	void STATIC_OnSexSelect(int Index);
	void STATIC_OnJobSelect(int Index);
	void STATIC_OnRaceSelect(int Index);
	void STATIC_OnComboBoxItemSelected(const struct FString& strID, int Index);
	void STATIC_HandleSetClassDescription(const struct FString& a_Param);
	void STATIC_HandleClearSetupWnd();
	void STATIC_HandleClear();
	void STATIC_HandleEnableRotate(const struct FString& a_Param);
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_HandleZoom();
	bool STATIC_IsValidData();
	void STATIC_HandleBtnCreateCharacter();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnShow();
	void STATIC_InitString();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.Shortcut
// 0x0004 (0x0040 - 0x003C)
class UShortcut : public UUIScript
{
public:
	unsigned long                                      m_chatstateok : 1;                                        // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.Shortcut");
		return ptr;
	}


	void STATIC_HandleStateChange(const struct FString& State);
	void STATIC_HandleCloseAllWindow();
	void STATIC_HandleSetNextChatType();
	void STATIC_HandleSetPrevChatType();
	void STATIC_HandleShowChatWindow();
	void STATIC_HandleShortcutTest();
	void STATIC_HandlePrintShortcut();
	void STATIC_HandleShortcutCommand(const struct FString& a_Param);
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnTimer(int TimerID);
	void STATIC_HandlePartyMatchingOnOff();
	void STATIC_HandleShowHelpHtmlWnd();
	void STATIC_ClosePartyMatchingWnd();
	void STATIC_HandleShortcutKeyEvent(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SkillEnchantWnd
// 0x0010 (0x004C - 0x003C)
class USkillEnchantWnd : public UUICommonAPI
{
public:
	int                                                m_iType;                                                  // 0x003C(0x0004)
	int                                                m_iRootNameLength;                                        // 0x0040(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x0044(0x0004)
	class UWindowHandle*                               m_wndTop;                                                 // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SkillEnchantWnd");
		return ptr;
	}


	void STATIC_InsertNodeItem(const struct FString& strNodeName, const struct FXMLTreeNodeItemInfo& infNodeItemName);
	void STATIC_AddSkillEnchantListItem(const struct FString& strIconName, const struct FString& strName, int iID, int iLevel, int iSPConsume, const struct FString& strEnchantName);
	void STATIC_ShowSkillEnchantWnd(int iType);
	void STATIC_OnShow();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& strItemID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.QuestHTMLWnd
// 0x0010 (0x004C - 0x003C)
class UQuestHTMLWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UHtmlHandle*                                 m_hHtmlViewer;                                            // 0x0040(0x0004)
	class UTreeHandle*                                 QuestRewardItemTree;                                      // 0x0044(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.QuestHTMLWnd");
		return ptr;
	}


	void STATIC_HandleLoadHtmlFromString(const struct FString& param);
	void STATIC_OnHtmlMsgHideWindow(class UHtmlHandle* a_HtmlHandle);
	void STATIC_HandleQuestIDLoadHtmlFromString(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BR_CashShopWnd
// 0x00D8 (0x0114 - 0x003C)
class UBR_CashShopWnd : public UUICommonAPI
{
public:
	TArray<int>                                        m_arrTabType;                                             // 0x003C(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrTabIndex;                                            // 0x0048(0x000C) (NeedCtorLink)
	int                                                m_iCurrentHeight;                                         // 0x0054(0x0004)
	struct FDrawItemInfo                               m_kDrawInfoClear;                                         // 0x0058(0x0058) (NeedCtorLink)
	TArray<struct FProductInfo>                        m_ProductList;                                            // 0x00B0(0x000C) (NeedCtorLink)
	int                                                m_nSelectedProduct;                                       // 0x00BC(0x0004)
	int                                                m_iRootNameLength;                                        // 0x00C0(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x00C4(0x0004)
	int                                                m_iCurrentTab;                                            // 0x00C8(0x0004)
	unsigned long                                      m_bInConfirm : 1;                                         // 0x00CC(0x0004)
	class UDrawPanelHandle*                            m_hDrawPanel;                                             // 0x00D0(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x00D4(0x0004)
	class UEditBoxHandle*                              EditBuyCount;                                             // 0x00D8(0x0004)
	class UButtonHandle*                               BtnBuy;                                                   // 0x00DC(0x0004)
	class UButtonHandle*                               btnCancel;                                                // 0x00E0(0x0004)
	class UButtonHandle*                               BtnInputQuantity;                                         // 0x00E4(0x0004)
	class UTreeHandle*                                 TreeItemList;                                             // 0x00E8(0x0004)
	class UTabHandle*                                  TabCategory;                                              // 0x00EC(0x0004)
	class UTextBoxHandle*                              TextTotalPrice;                                           // 0x00F0(0x0004)
	class UButtonHandle*                               BtnCashCharge;                                            // 0x00F4(0x0004)
	class UTextBoxHandle*                              TextCurrentCash;                                          // 0x00F8(0x0004)
	class UTextureHandle*                              TexCategoryUpper;                                         // 0x00FC(0x0004)
	class UTextureHandle*                              TexBackItemList;                                          // 0x0100(0x0004)
	class UTextureHandle*                              ItemInfoBg;                                               // 0x0104(0x0004)
	class UTextureHandle*                              TexBgCategory;                                            // 0x0108(0x0004)
	class UWindowHandle*                               ScrollItemInfo;                                           // 0x010C(0x0004)
	class UWindowHandle*                               WndItemInfo;                                              // 0x0110(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BR_CashShopWnd");
		return ptr;
	}


	void STATIC_MakeDrawInfo_Blank(int Height, struct FDrawItemInfo* Info);
	bool STATIC_MakeDrawInfo_Image(const struct FString& TextureName, int Width, int Height, struct FDrawItemInfo* Info);
	void STATIC_MakeDrawInfo_Desc(const struct FString& Str, int R, int G, int B, struct FDrawItemInfo* Info);
	void STATIC_MakeDrawInfo_Text(const struct FString& Str, int R, int G, int B, struct FDrawItemInfo* Info);
	void STATIC_MakeText(const struct FString& Str, struct FDrawItemInfo* Info);
	bool STATIC_MakeCashItemIcon(struct FDrawItemInfo* Info);
	void STATIC_ResetScrollHeight();
	int STATIC_CalcTextHeight(const struct FString& tempStr);
	void STATIC_AddEachProductInfo(int iID, int iAmount, const struct FString& ItemName, const struct FString& IconName, const struct FString& Desc, int Weight, int trade);
	void STATIC_SetNewProductInfo(int iID, int Price, const struct FString& ItemName, const struct FString& Desc);
	void STATIC_AddProductItem(int iID, int category, int showtab, int Price, const struct FString& ItemName, const struct FString& IconName);
	void STATIC_AddFilteredProductList(int iID, int category, int showtab, int Price, const struct FString& ItemName, const struct FString& IconName);
	void STATIC_AddFilteredProductListAll();
	bool STATIC_CheckTabIndex(int category, int showtab);
	void STATIC_ShowCashShopWnd();
	void STATIC_InitProductList();
	void STATIC_OnBtnInputQuantity();
	void STATIC_OnBtnCashChargeClick();
	void STATIC_OnbtnCancelClick();
	struct FProductInfo STATIC_GetProductItem(int Id);
	void STATIC_OnBtnBuyClick();
	void STATIC_OnTabCategory(int tabindex);
	void STATIC_PrepareProductList(int iOption);
	void STATIC_HandleDialogOK();
	void STATIC_HandleToggleWindow();
	void STATIC_ClearItemInfo();
	void STATIC_ClearItemList(int allclear);
	void STATIC_SetGamePoint(const struct FINT64& iGamePoint);
	void STATIC_OnChangeEditBox(const struct FString& strID);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Initialize();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BR_BuyingWnd
// 0x0060 (0x009C - 0x003C)
class UBR_BuyingWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bDrawBg : 1;                                            // 0x003C(0x0004)
	int                                                m_iRootNameLength;                                        // 0x0040(0x0004)
	unsigned long                                      m_bInConfirm : 1;                                         // 0x0044(0x0004)
	int                                                m_iProductID;                                             // 0x0048(0x0004)
	int                                                m_iPrice;                                                 // 0x004C(0x0004)
	int                                                m_iAmount;                                                // 0x0050(0x0004)
	struct FString                                     m_strName;                                                // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     m_strIconName;                                            // 0x0060(0x000C) (NeedCtorLink)
	struct FINT64                                      m_iGamePoint;                                             // 0x006C(0x0008)
	class UWindowHandle*                               Me;                                                       // 0x0074(0x0004)
	class UTextBoxHandle*                              TextCurCash;                                              // 0x0078(0x0004)
	class UTextBoxHandle*                              TextBalance;                                              // 0x007C(0x0004)
	class UTextBoxHandle*                              TextPrice;                                                // 0x0080(0x0004)
	class UTreeHandle*                                 TreeItemList;                                             // 0x0084(0x0004)
	class UButtonHandle*                               btnCancel;                                                // 0x0088(0x0004)
	class UButtonHandle*                               BtnBuy;                                                   // 0x008C(0x0004)
	class UButtonHandle*                               BtnCharge;                                                // 0x0090(0x0004)
	class UTextureHandle*                              TexPriceInfoBG;                                           // 0x0094(0x0004)
	class UTextureHandle*                              TexItemInfoBG;                                            // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BR_BuyingWnd");
		return ptr;
	}


	void STATIC_AddProductList(int iID, int iAmount, int Price, const struct FString& ItemName, const struct FString& IconName);
	void STATIC_InitProductList();
	void STATIC_ShowBuyWindow(bool bShow);
	void STATIC_ResultBuy(int iResult, const struct FINT64& iGamePoint);
	void STATIC_CalculateBalance();
	void STATIC_OnBtnChargeClick();
	void STATIC_OnBtnBuyClick();
	void STATIC_OnbtnCancelClick();
	void STATIC_OnShow();
	void STATIC_OnHide();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnRegisterEvent();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
};


// Class Interface.PrivateShopWnd
// 0x001C (0x0058 - 0x003C)
class UPrivateShopWnd : public UUICommonAPI
{
public:
	int                                                m_merchantID;                                             // 0x003C(0x0004)
	TEnumAsByte<EPrivateShopType>                      m_type;                                                   // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                m_buyMaxCount;                                            // 0x0044(0x0004)
	int                                                m_sellMaxCount;                                           // 0x0048(0x0004)
	unsigned long                                      m_bBulk : 1;                                              // 0x004C(0x0004)
	class UItemWindowHandle*                           m_hPrivateShopWndTopList;                                 // 0x0050(0x0004)
	class UItemWindowHandle*                           m_hPrivateShopWndBottomList;                              // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PrivateShopWnd");
		return ptr;
	}


	void STATIC_ResetBulkOnlyShop();
	void STATIC_SwithBulkOnlyShop();
	bool STATIC_IsProperPrice(const struct FINT64& Price, struct FItemInfo* Info);
	void STATIC_HandleSetMaxCount(const struct FString& param);
	void STATIC_HandleOKButton(bool bPriceCheck);
	void STATIC_AdjustWeight();
	void STATIC_AdjustCount();
	void STATIC_AdjustPrice();
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleOpenWindow(const struct FString& param);
	void STATIC_HandleDialogOK();
	void STATIC_MoveItemBottomToTop(int Index, bool bAllItem);
	void STATIC_MoveItemTopToBottom(int Index, bool bAllItem);
	void STATIC_RequestQuit();
	void Clear();
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnDBClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnSendPacketWhenHiding();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ShortcutAssignWnd
// 0x0110 (0x014C - 0x003C)
class UShortcutAssignWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               DisableBox;                                               // 0x0040(0x0004)
	class UWindowHandle*                               GeneralKeyWnd;                                            // 0x0044(0x0004)
	class UWindowHandle*                               GeneralKeySetting;                                        // 0x0048(0x0004)
	class UWindowHandle*                               EnterKeySetting;                                          // 0x004C(0x0004)
	class UWindowHandle*                               CFrameWnd386;                                             // 0x0050(0x0004)
	class UWindowHandle*                               CFrameWnd385;                                             // 0x0054(0x0004)
	class UWindowHandle*                               EnterkeyWnd;                                              // 0x0058(0x0004)
	class UWindowHandle*                               OptionWnd;                                                // 0x005C(0x0004)
	class UListCtrlHandle*                             GeneralKeyList;                                           // 0x0060(0x0004)
	class UListCtrlHandle*                             EnterKeyList;                                             // 0x0064(0x0004)
	class UEditBoxHandle*                              InputKey;                                                 // 0x0068(0x0004)
	class UEditBoxHandle*                              KeySettingInput;                                          // 0x006C(0x0004)
	class UCheckBoxHandle*                             Chk_EnterChatting;                                        // 0x0070(0x0004)
	class UCheckBoxHandle*                             Chk_NewKeySystem;                                         // 0x0074(0x0004)
	class UCheckBoxHandle*                             AltCheck;                                                 // 0x0078(0x0004)
	class UCheckBoxHandle*                             CtrlCheck;                                                // 0x007C(0x0004)
	class UCheckBoxHandle*                             ShiftCheck;                                               // 0x0080(0x0004)
	class UButtonHandle*                               ResetAllBtn;                                              // 0x0084(0x0004)
	class UButtonHandle*                               Btn_AssignCurrent;                                        // 0x0088(0x0004)
	class UButtonHandle*                               Btn_OK;                                                   // 0x008C(0x0004)
	class UButtonHandle*                               Btn_Cancel;                                               // 0x0090(0x0004)
	class UButtonHandle*                               Btn_Apply;                                                // 0x0094(0x0004)
	class UButtonHandle*                               Btn_SaveCurrentKey;                                       // 0x0098(0x0004)
	class UButtonHandle*                               Btn_CancelCurrentKey;                                     // 0x009C(0x0004)
	class UTextBoxHandle*                              assignShortKeyText;                                       // 0x00A0(0x0004)
	class UTextBoxHandle*                              selectedkeygrouptext;                                     // 0x00A4(0x0004)
	class UTextBoxHandle*                              TextCurrent;                                              // 0x00A8(0x0004)
	class UTabHandle*                                  Tab_KeyGroup;                                             // 0x00AC(0x0004)
	class UWindowHandle*                               AirKeySetting;                                            // 0x00B0(0x0004)
	class UWindowHandle*                               AirkeyWnd;                                                // 0x00B4(0x0004)
	class UListCtrlHandle*                             AirKeyList;                                               // 0x00B8(0x0004)
	class UWindowHandle*                               AirTransKeySetting;                                       // 0x00BC(0x0004)
	class UWindowHandle*                               AirTranskeyWnd;                                           // 0x00C0(0x0004)
	class UListCtrlHandle*                             AirTransKeyList;                                          // 0x00C4(0x0004)
	class UFlightShipCtrlWnd*                          scriptShip;                                               // 0x00C8(0x0004)
	class UFlightTransformCtrlWnd*                     scriptTrans;                                              // 0x00CC(0x0004)
	TArray<struct FShortcutCommandItem>                m_DefaultGeneralKeyShortcutList;                          // 0x00D0(0x000C) (NeedCtorLink)
	TArray<struct FShortcutCommandItem>                m_DefaultEnterKeyShortcutList;                            // 0x00DC(0x000C) (NeedCtorLink)
	TArray<struct FShortcutCommandItem>                m_DefaultFlightShortcutList;                              // 0x00E8(0x000C) (NeedCtorLink)
	TArray<struct FShortcutCommandItem>                m_DefaultFlightTransShortcutList;                         // 0x00F4(0x000C) (NeedCtorLink)
	TArray<struct FString>                             m_datasheetKeyReplace;                                    // 0x0100(0x000C) (NeedCtorLink)
	TArray<struct FString>                             m_datasheetKeyReplaced;                                   // 0x010C(0x000C) (NeedCtorLink)
	struct FString                                     m_mainkey;                                                // 0x0118(0x000C) (NeedCtorLink)
	struct FString                                     m_subkey1;                                                // 0x0124(0x000C) (NeedCtorLink)
	struct FString                                     m_subkey2;                                                // 0x0130(0x000C) (NeedCtorLink)
	int                                                m_currentListCtrlIndex;                                   // 0x013C(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0140(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ShortcutAssignWnd");
		return ptr;
	}


	void STATIC_ActiveFlightShort();
	void STATIC_SwapReduntedShortcutItemwithCurrentShortcutItem();
	struct FString STATIC_CheckShortcutItemRedundency();
	void STATIC_DeleteCurrentShortcutItem();
	void STATIC_SetCurrentKeyAsShortKey();
	void STATIC_Switch2KeyBrowsingMode();
	void STATIC_Switch2KeyInputMode();
	void STATIC_AssignCurrentSelectedKeyfromtheListCtrl();
	void STATIC_OnResetAllBtnClickPopUpMessage();
	void STATIC_HandleUpdateAirTransKeyListControl();
	void STATIC_HandleUpdateAirKeyListControl();
	void STATIC_HandleUpdateEnterKeyListControl();
	void STATIC_HandleUpdateGeneralKeyListControl();
	void STATIC_HandleResetUI2Default();
	void STATIC_HandleSwitchEnterchatting();
	void STATIC_ResetGMKeyActivate();
	void STATIC_UIActivationUponStateChanges(bool bTurnOff);
	void STATIC_OnRegisterEvent();
	void STATIC_InitializeWindowHandlesCOD();
	void STATIC_InitializeWindowHandles();
	void STATIC_HandleDialogCancel();
	void STATIC_HandleDialogOK();
	void STATIC_OnKeyDown(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnClickCheckBox(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& Id);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnClickListCtrlRecord(const struct FString& Id);
	void STATIC_OnLoad();
	struct FString STATIC_GetUserReadableKeyName(const struct FString& Input);
	struct FString STATIC_GetKeySettingDescriptionWithID(int Id);
	struct FString STATIC_MakeFullShortcutKeyCombinationName(const struct FString& MainKey, const struct FString& subkey1, const struct FString& subkey2);
	struct FString STATIC_GetShortcutItemNameWithID(int Id);
	void STATIC_MakeSystemUserInputKeyCombination(const struct FString& MainKey, bool subkeybool1, bool subkeybool2, bool subkeybool3);
	struct FString STATIC_MakeUserInputKeyCombinationName(const struct FString& MainKey, bool subkeybool1, bool subkeybool2, bool subkeybool3);
	bool STATIC_IsReleaseActionItems(const struct FString& ActionName);
	bool STATIC_IsValidKey(const struct FString& KeyName);
	bool STATIC_IsStandAloneKey(const struct FString& KeyName);
	void STATIC_DataSheetAssignKeyReplacement();
};


// Class Interface.DialogBox
// 0x0210 (0x024C - 0x003C)
class UDialogBox : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_dialogHandle;                                           // 0x003C(0x0004)
	class UButtonHandle*                               m_okHandle;                                               // 0x0040(0x0004)
	class UButtonHandle*                               m_cancelHandle;                                           // 0x0044(0x0004)
	class UButtonHandle*                               m_centerHandle;                                           // 0x0048(0x0004)
	class UEditBoxHandle*                              m_editHandle;                                             // 0x004C(0x0004)
	class UTextBoxHandle*                              m_textHandle;                                             // 0x0050(0x0004)
	struct FString                                     m_strTargetScript;                                        // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     m_strEditMessage;                                         // 0x0060(0x000C) (NeedCtorLink)
	TEnumAsByte<EDialogType>                           m_type;                                                   // 0x006C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                m_id;                                                     // 0x0070(0x0004)
	unsigned long                                      m_bInUse : 1;                                             // 0x0074(0x0004)
	struct FINT64                                      m_paramInt;                                               // 0x0078(0x0008)
	int                                                m_reservedInt;                                            // 0x0080(0x0004)
	struct FINT64                                      m_reservedInt2;                                           // 0x0084(0x0008)
	int                                                m_reservedInt3;                                           // 0x008C(0x0004)
	struct FItemID                                     m_reservedItemID;                                         // 0x0090(0x0008)
	struct FItemInfo                                   m_reservedItemInfo;                                       // 0x0098(0x01A8) (NeedCtorLink)
	int                                                m_editMaxLength;                                          // 0x0240(0x0004)
	int                                                m_editMaxLength_prev;                                     // 0x0244(0x0004)
	TEnumAsByte<EDialogDefaultAction>                  m_defaultAction;                                          // 0x0248(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.DialogBox");
		return ptr;
	}


	void STATIC_DoDefaultAction();
	void STATIC_OnProgressTimeUp(const struct FString& strID);
	void STATIC_HandleNumberClick(const struct FString& strID);
	void STATIC_HandleCancel();
	void STATIC_HandleOK();
	void STATIC_SetButtonName(int indexOK, int indexCancel);
	void STATIC_SetMessage(const struct FString& strMessage);
	void STATIC_SetWindowStyle(TEnumAsByte<EDialogType> Style);
	void STATIC_HideAll();
	void Initialize();
	void STATIC_OnChangeEditBox(const struct FString& strID);
	void STATIC_OnHide();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_SetEditBoxMaxLength(int maxLength);
	void STATIC_GetReservedItemInfo(struct FItemInfo* Info);
	struct FItemID STATIC_GetReservedItemID();
	int STATIC_GetReservedInt3();
	struct FINT64 STATIC_GetReservedInt2();
	int STATIC_GetReservedInt();
	void STATIC_SetReservedItemInfo(const struct FItemInfo& Info);
	void STATIC_SetReservedItemID(const struct FItemID& Id);
	void STATIC_SetReservedInt3(int Value);
	void STATIC_SetReservedInt2(const struct FINT64& Value);
	void STATIC_SetReservedInt(int Value);
	void STATIC_SetParamInt64(const struct FINT64& param);
	void STATIC_SetEditType(const struct FString& strType);
	void STATIC_setId(int Id);
	int STATIC_GetID();
	void STATIC_SetEditMessage(const struct FString& strMsg);
	struct FString STATIC_GetEditMessage();
	struct FString STATIC_GetTarget();
	void STATIC_SetDefaultAction(TEnumAsByte<EDialogDefaultAction> defaultAction);
	void STATIC_HideDialog();
	void STATIC_ShowDialog(TEnumAsByte<EDialogType> Style, const struct FString& Message, const struct FString& Target);
};


// Class Interface.GuideWnd
// 0x00D4 (0x0110 - 0x003C)
class UGuideWnd : public UUIScript
{
public:
	unsigned long                                      tabLoc : 1;                                               // 0x003C(0x0004)
	struct FString                                     serverMaxRecord;                                          // 0x0040(0x000C) (NeedCtorLink)
	int                                                global_i;                                                 // 0x004C(0x0004)
	int                                                g_modedID;                                                // 0x0050(0x0004)
	unsigned long                                      bLock : 1;                                                // 0x0054(0x0004)
	TArray<int>                                        agitid1;                                                  // 0x0058(0x000C) (NeedCtorLink)
	TArray<int>                                        agitid2;                                                  // 0x0064(0x000C) (NeedCtorLink)
	TArray<int>                                        agitid3;                                                  // 0x0070(0x000C) (NeedCtorLink)
	struct FString                                     m_WindowName;                                             // 0x007C(0x000C) (NeedCtorLink)
	TArray<struct FRAIDRECORD>                         RaidRecordList;                                           // 0x0088(0x000C) (NeedCtorLink)
	TArray<struct FString>                             currentmaprecord;                                         // 0x0094(0x000C) (NeedCtorLink)
	TArray<int>                                        g_CastleID;                                               // 0x00A0(0x000C) (NeedCtorLink)
	class UWindowHandle*                               MiniMapDrawerWnd;                                         // 0x00AC(0x0004)
	class UListCtrlHandle*                             m_hQuestListCtrl;                                         // 0x00B0(0x0004)
	class UListCtrlHandle*                             m_hHuntingZoneListCtrl;                                   // 0x00B4(0x0004)
	class UListCtrlHandle*                             m_hRaidListCtrl;                                          // 0x00B8(0x0004)
	class UListCtrlHandle*                             m_hAreaInfoListCtrl;                                      // 0x00BC(0x0004)
	class UListCtrlHandle*                             m_CastleListCtrl;                                         // 0x00C0(0x0004)
	class UListCtrlHandle*                             m_FortressListCtrl;                                       // 0x00C4(0x0004)
	class UListCtrlHandle*                             m_AgitListCtrl;                                           // 0x00C8(0x0004)
	class UListCtrlHandle*                             m_TerritoryListCtrl;                                      // 0x00CC(0x0004)
	class UTabHandle*                                  m_hTabCtrl;                                               // 0x00D0(0x0004)
	class UTabHandle*                                  m_hTabCtrl_Exp;                                           // 0x00D4(0x0004)
	class UComboBoxHandle*                             m_hQuestComboBox;                                         // 0x00D8(0x0004)
	class UWindowHandle*                               m_QuestTab;                                               // 0x00DC(0x0004)
	class UWindowHandle*                               m_HuntTab;                                                // 0x00E0(0x0004)
	class UWindowHandle*                               m_RaidTab;                                                // 0x00E4(0x0004)
	class UWindowHandle*                               m_AreaTab;                                                // 0x00E8(0x0004)
	class UWindowHandle*                               m_SiegeCastleTab;                                         // 0x00EC(0x0004)
	class UWindowHandle*                               m_SiegeFortressTab;                                       // 0x00F0(0x0004)
	class UWindowHandle*                               m_AgitTab;                                                // 0x00F4(0x0004)
	class UWindowHandle*                               m_TerritoryWarTab;                                        // 0x00F8(0x0004)
	class UMinimapCtrlHandle*                          m_MiniMap;                                                // 0x00FC(0x0004)
	class UButtonHandle*                               ReduceButton;                                             // 0x0100(0x0004)
	class UButtonHandle*                               ReduceButton_Expand;                                      // 0x0104(0x0004)
	int                                                m_DominionInfoCnt;                                        // 0x0108(0x0004)
	class UMinimapWnd*                                 m_MiniMapWndScript;                                       // 0x010C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GuideWnd");
		return ptr;
	}


	void STATIC_HandleDominionInfo(const struct FString& param);
	void STATIC_HandleDominionInfoCnt(const struct FString& param);
	void STATIC_SetCastleLocData();
	void STATIC_LoadFortressSeigeInfo(const struct FString& param);
	void STATIC_LoadAgitInfo(const struct FString& param);
	void STATIC_LoadFortressInfo(const struct FString& param);
	void STATIC_LoadCastleInfo(const struct FString& param);
	int STATIC_GetMapCastleID(const struct FString& CastleName);
	void STATIC_FortressSeigeInfoReq();
	void STATIC_AgitInfo();
	void STATIC_FortressInfo();
	void STATIC_CastleInfo();
	struct FString STATIC_conv_zoneName(int search_zoneid);
	struct FString STATIC_conv_zoneType(int ZoneTypeNum);
	struct FString STATIC_conv_dom(int ZoneNameNum);
	void STATIC_proc_combox(const struct FString& ComboboxName);
	void STATIC_comboxFiller(const struct FString& ComboboxName);
	void STATIC_LoadAreaInfoListSearchResult(int SearchZone);
	void STATIC_ResetArray();
	void STATIC_LoadAreaInfoList();
	void STATIC_LoadQuestSearchResult(int SearchZone);
	void STATIC_JustdisplayCurrentDataOnTheMap();
	void STATIC_displayCurrentDataOnTheMap(const struct FVector& currentloc, int txtureint);
	void STATIC_LoadQuestList();
	void STATIC_LoadRaidSearchResult(int SearchZone);
	void STATIC_LoadRaidList2();
	void STATIC_LoadRaidList3();
	void STATIC_LoadRaidList(const struct FString& a_Param);
	void STATIC_LoadRaidRanking();
	void STATIC_LoadHuntingZoneListSearchResult(int SearchZone);
	void STATIC_LoadHuntingZoneList();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickListCtrlRecord(const struct FString& Id);
	void STATIC_OnComboBoxItemSelected(const struct FString& sName, int Index);
	void STATIC_swapReset();
	void STATIC_swaptab2();
	void STATIC_swaptab1();
	void STATIC_OnClickButton(const struct FString& Id);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_DisableTabBtn();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ChatFilterWnd
// 0x002C (0x0068 - 0x003C)
class UChatFilterWnd : public UUIScript
{
public:
	class UTabHandle*                                  m_ChatFilterTab;                                          // 0x003C(0x0004)
	class UEditBoxHandle*                              EditBox_KeyWord0;                                         // 0x0040(0x0004)
	class UEditBoxHandle*                              EditBox_KeyWord1;                                         // 0x0044(0x0004)
	class UEditBoxHandle*                              EditBox_KeyWord2;                                         // 0x0048(0x0004)
	class UButtonHandle*                               Keyword_Reset0;                                           // 0x004C(0x0004)
	class UButtonHandle*                               Keyword_Reset1;                                           // 0x0050(0x0004)
	class UButtonHandle*                               Keyword_Reset2;                                           // 0x0054(0x0004)
	class UCheckBoxHandle*                             KeywordFilterBox;                                         // 0x0058(0x0004)
	class UCheckBoxHandle*                             KeywordSoundBox;                                          // 0x005C(0x0004)
	class UComboBoxHandle*                             m_ChannelAssignComboBox;                                  // 0x0060(0x0004)
	class UTextBoxHandle*                              m_txtSelectAssignChatTitle;                               // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ChatFilterWnd");
		return ptr;
	}


	void STATIC_SetComboxIDSelect(int Index, int Id);
	void STATIC_OnComboBoxItemSelected(const struct FString& strID, int IndexID);
	void STATIC_SaveChatFilterOption();
	void STATIC_OnClickCheckBox(const struct FString& strID);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_FillOutComboBoxHandle();
	void STATIC_OnShow();
	void STATIC_InitTabOrder();
	void STATIC_OnLoad();
};


// Class Interface.OptionWnd
// 0x0068 (0x00A4 - 0x003C)
class UOptionWnd : public UUICommonAPI
{
public:
	int                                                g_CurrentMaxWidth;                                        // 0x003C(0x0004)
	int                                                g_CurrentMaxHeight;                                       // 0x0040(0x0004)
	int                                                nPixelShaderVersion;                                      // 0x0044(0x0004)
	int                                                nVertexShaderVersion;                                     // 0x0048(0x0004)
	float                                              gSoundVolume;                                             // 0x004C(0x0004)
	float                                              gMusicVolume;                                             // 0x0050(0x0004)
	float                                              gWavVoiceVolume;                                          // 0x0054(0x0004)
	float                                              gOggVoiceVolume;                                          // 0x0058(0x0004)
	TArray<struct FResolutionInfo>                     ResolutionList;                                           // 0x005C(0x000C) (NeedCtorLink)
	TArray<int>                                        RefreshRateList;                                          // 0x0068(0x000C) (NeedCtorLink)
	unsigned long                                      bShow : 1;                                                // 0x0074(0x0004)
	unsigned long                                      m_bL2Shader : 1;                                          // 0x0074(0x0004)
	unsigned long                                      m_bDepthBufferShadow : 1;                                 // 0x0074(0x0004)
	unsigned long                                      m_bDOF : 1;                                               // 0x0074(0x0004)
	unsigned long                                      m_bShaderWater : 1;                                       // 0x0074(0x0004)
	int                                                m_iPrevSoundTick;                                         // 0x0078(0x0004)
	int                                                m_iPrevMusicTick;                                         // 0x007C(0x0004)
	int                                                m_iPrevSystemTick;                                        // 0x0080(0x0004)
	int                                                m_iPrevTutorialTick;                                      // 0x0084(0x0004)
	unsigned long                                      bg_Temp : 1;                                              // 0x0088(0x0004)
	unsigned long                                      m_bPartyMatchRoomState : 1;                               // 0x0088(0x0004)
	unsigned long                                      m_bAirState : 1;                                          // 0x0088(0x0004)
	class UWindowHandle*                               TargetStatusWnd;                                          // 0x008C(0x0004)
	class UWindowHandle*                               StatusWnd;                                                // 0x0090(0x0004)
	class UWindowHandle*                               SystemMenuWnd;                                            // 0x0094(0x0004)
	class UEditBoxHandle*                              KeySettingInput;                                          // 0x0098(0x0004)
	class UButtonHandle*                               Btn_SaveCurrentKey;                                       // 0x009C(0x0004)
	class UButtonHandle*                               Btn_CancelCurrentKey;                                     // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OptionWnd");
		return ptr;
	}


	void STATIC_LoadGameOption();
	void STATIC_LoadAudioOption();
	void STATIC_LoadVideoOption();
	void STATIC_SetTutorialData(bool bOption);
	void STATIC_OnTimer(int TimerID);
	void STATIC_SetStuck(bool A);
	void STATIC_OnDefaultPosition();
	void STATIC_OnModifyCurrentTickSliderCtrl(const struct FString& strID, int iCurrentTick);
	void STATIC_OnComboBoxItemSelected(const struct FString& sName, int Index);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_MinFrameRateOff();
	void STATIC_MinFrameRateOn();
	void STATIC_AirStateOff();
	void STATIC_AirStateOn();
	float STATIC_GetVolumeFromSliderTick(int iTick);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_ApplyGameOption();
	void STATIC_ApplyAudioOption();
	void STATIC_ApplyVideoOption();
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnClickCheckBox(const struct FString& strID);
	void STATIC_InitGameOption();
	void STATIC_InitAudioOption();
	void STATIC_InitVideoOption();
	int STATIC_GetPawnValue(int iNumTick, int Min, int Max, int* iCurrTick);
	void STATIC_RefreshLootingBox();
	void STATIC_OnLoad();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnRegisterEvent();
	void STATIC_ResetRefreshRate(int a_nWidth, int a_nHeight);
};


// Class Interface.PremiumItemGetWnd
// 0x0028 (0x0064 - 0x003C)
class UPremiumItemGetWnd : public UUICommonAPI
{
public:
	int                                                m_iItemNameLength;                                        // 0x003C(0x0004)
	int                                                m_clickedID;                                              // 0x0040(0x0004)
	int                                                m_clickedItemNum;                                         // 0x0044(0x0004)
	int                                                m_maxCount;                                               // 0x0048(0x0004)
	unsigned long                                      m_bDrawBg : 1;                                            // 0x004C(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0050(0x0004)
	class UButtonHandle*                               btnRecieve;                                               // 0x0054(0x0004)
	class UButtonHandle*                               btnCancle;                                                // 0x0058(0x0004)
	class UTreeHandle*                                 PremiumItemListTree;                                      // 0x005C(0x0004)
	class UEditBoxHandle*                              GetnumEdit;                                               // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PremiumItemGetWnd");
		return ptr;
	}


	void STATIC_clearInfo();
	void STATIC_AddPremiumListItem(int iGift, int iItemClassID, const struct FINT64& iItemAmount, const struct FString& senderCharacter, int iIndexID);
	void STATIC_HandlePremiumItemList(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_createTreeRoot();
	void Clear();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PARTYWND
// 0x0458 (0x0494 - 0x003C)
class UPARTYWND : public UUICommonAPI
{
public:
	unsigned long                                      m_bCompact : 1;                                           // 0x003C(0x0004)
	unsigned long                                      m_bBuff : 1;                                              // 0x003C(0x0004)
	int                                                m_arrID[0x9];                                             // 0x0040(0x0004)
	int                                                m_arrPetID[0x9];                                          // 0x0064(0x0004)
	int                                                m_arrPetIDOpen[0x9];                                      // 0x0088(0x0004)
	int                                                m_CurCount;                                               // 0x00AC(0x0004)
	int                                                m_CurBf;                                                  // 0x00B0(0x0004)
	int                                                m_targetID;                                               // 0x00B4(0x0004)
	int                                                m_LastChangeColor;                                        // 0x00B8(0x0004)
	struct UPARTYWND_FVnameData                        m_Vname[0x8];                                             // 0x00BC(0x0024) (NeedCtorLink)
	class UWindowHandle*                               m_wndTop;                                                 // 0x01DC(0x0004)
	class UWindowHandle*                               m_PartyStatus[0x9];                                       // 0x01E0(0x0004)
	class UWindowHandle*                               m_PartyOption;                                            // 0x0204(0x0004)
	class UNameCtrlHandle*                             m_PlayerName[0x9];                                        // 0x0208(0x0004)
	class UTextureHandle*                              m_ClassIcon[0x9];                                         // 0x022C(0x0004)
	class UTextureHandle*                              m_LeaderIcon[0x9];                                        // 0x0250(0x0004)
	class UStatusIconHandle*                           m_StatusIconBuff[0x9];                                    // 0x0274(0x0004)
	class UStatusIconHandle*                           m_StatusIconDeBuff[0x9];                                  // 0x0298(0x0004)
	class UStatusIconHandle*                           m_StatusIconSongDance[0x9];                               // 0x02BC(0x0004)
	class UBarHandle*                                  m_BarCP[0x9];                                             // 0x02E0(0x0004)
	class UBarHandle*                                  m_BarHP[0x9];                                             // 0x0304(0x0004)
	class UBarHandle*                                  m_BarMP[0x9];                                             // 0x0328(0x0004)
	class UButtonHandle*                               btnBuff;                                                  // 0x034C(0x0004)
	class UButtonHandle*                               m_petButton[0x9];                                         // 0x0350(0x0004)
	class UButtonHandle*                               m_petButtonTrash[0x9];                                    // 0x0374(0x0004)
	class UWindowHandle*                               m_PetPartyStatus[0x9];                                    // 0x0398(0x0004)
	class UStatusIconHandle*                           m_PetStatusIconBuff[0x9];                                 // 0x03BC(0x0004)
	class UStatusIconHandle*                           m_PetStatusIconDeBuff[0x9];                               // 0x03E0(0x0004)
	class UStatusIconHandle*                           m_PetStatusIconSongDance[0x9];                            // 0x0404(0x0004)
	class UTextureHandle*                              m_PetClassIcon[0x9];                                      // 0x0428(0x0004)
	class UBarHandle*                                  m_PetBarHP[0x9];                                          // 0x044C(0x0004)
	class UBarHandle*                                  m_PetBarMP[0x9];                                          // 0x0470(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PARTYWND");
		return ptr;
	}


	void STATIC_ResetVName();
	void STATIC_OnDropWnd(class UWindowHandle* hTarget, class UWindowHandle* hDropWnd, int X, int Y);
	void STATIC_SetBuffButtonTooltip();
	int STATIC_GetIdx(int Y);
	void STATIC_OnRButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_UpdateMPBar(int idx, int Value, int MaxValue);
	void STATIC_UpdateHPBar(int idx, int Value, int MaxValue);
	void STATIC_UpdateCPBar(int idx, int Value, int MaxValue);
	void STATIC_UpdateBuff();
	void STATIC_OnBuffButton();
	void STATIC_OnOpenPartyWndOption();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleShowBuffIcon(const struct FString& param);
	void STATIC_HandlePartySpelledList(const struct FString& param);
	void STATIC_UpdatePetStatus(int idx, const struct FString& param);
	void STATIC_HandlePartySummonDelete(const struct FString& param);
	void STATIC_HandlePartySummonUpdate(const struct FString& param);
	void STATIC_HandlePartySummonAdd(const struct FString& param);
	void STATIC_UpdateStatus(int idx, const struct FString& param);
	void STATIC_HandlePartyDeleteAllParty();
	void STATIC_HandlePartyDeleteParty(const struct FString& param);
	void STATIC_HandlePartyUpdateParty(const struct FString& param);
	void STATIC_HandlePartyAddParty(const struct FString& param);
	int STATIC_FindPetID(int Id);
	int STATIC_FindPartyID(int Id);
	void STATIC_ResizeWnd();
	void STATIC_CopyStatus(int DesIndex, int SrcIndex);
	void STATIC_ClearPetStatus(int idx);
	void STATIC_ClearStatus(int idx);
	void Clear();
	void STATIC_HandleRestart();
	void STATIC_HandleCheckTarget();
	void STATIC_HandlePartyRenameMember(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ColorNickNameWnd
// 0x0048 (0x0084 - 0x003C)
class UColorNickNameWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UEditBoxHandle*                              NickNameEditBox;                                          // 0x0040(0x0004)
	class UComboBoxHandle*                             ColorComboBox;                                            // 0x0044(0x0004)
	struct FColor                                      ColorTable[0xB];                                          // 0x0048(0x0004)
	class UButtonHandle*                               btnOK;                                                    // 0x0074(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0078(0x0004)
	struct FItemID                                     m_ClickedItemID;                                          // 0x007C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ColorNickNameWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& ButtonName);
	void STATIC_OnComboBoxItemSelected(const struct FString& ComboboxName, int Id);
	void STATIC_OnOpenWnd(const struct FString& param);
	void STATIC_OnEvent(int EventID, const struct FString& param);
	void STATIC_OnChangeEditBox(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ItemEnchantWnd
// 0x03B8 (0x03F4 - 0x003C)
class UItemEnchantWnd : public UUICommonAPI
{
public:
	unsigned long                                      bEnchantbool : 1;                                         // 0x003C(0x0004)
	unsigned long                                      bEnchantedbool : 1;                                       // 0x003C(0x0004)
	int                                                mEnchantLevel;                                            // 0x0040(0x0004)
	int                                                mEnchantItemType;                                         // 0x0044(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0048(0x0004)
	class UTextureHandle*                              BackPattern;                                              // 0x004C(0x0004)
	class UTextBoxHandle*                              InstructionTxt;                                           // 0x0050(0x0004)
	class UItemWindowHandle*                           EnchantScriptSlot;                                        // 0x0054(0x0004)
	class UItemWindowHandle*                           EnchantItemSlot;                                          // 0x0058(0x0004)
	class UItemWindowHandle*                           CloverItemSlot;                                           // 0x005C(0x0004)
	class UItemWindowHandle*                           EnchantedItemSlot;                                        // 0x0060(0x0004)
	class UButtonHandle*                               EnchantBtn;                                               // 0x0064(0x0004)
	class UButtonHandle*                               ExitBtn;                                                  // 0x0068(0x0004)
	class UTextureHandle*                              Groupbox2;                                                // 0x006C(0x0004)
	class UTextureHandle*                              Groupbox1;                                                // 0x0070(0x0004)
	class UTextureHandle*                              EnchantScriptSlotBackTex;                                 // 0x0074(0x0004)
	class UTextureHandle*                              EnchantItemSlotBackTex;                                   // 0x0078(0x0004)
	class UTextureHandle*                              CloverItemSlotBackTex;                                    // 0x007C(0x0004)
	class UTextureHandle*                              EnchantedItemSlotBackTex;                                 // 0x0080(0x0004)
	class UTextureHandle*                              DropHighlight_enchantitem;                                // 0x0084(0x0004)
	class UTextureHandle*                              DropHighlight_enchantscript;                              // 0x0088(0x0004)
	class UTextureHandle*                              DropHighlight_CloverItem;                                 // 0x008C(0x0004)
	class UAnimTextureHandle*                          EnchantProgressAnim;                                      // 0x0090(0x0004)
	struct FItemInfo                                   SelectItemInfo;                                           // 0x0094(0x01A8) (NeedCtorLink)
	struct FItemInfo                                   SelectHelperItemInfo;                                     // 0x023C(0x01A8) (NeedCtorLink)
	struct FItemID                                     SupportID;                                                // 0x03E4(0x0008)
	int                                                ScrollCID;                                                // 0x03EC(0x0004)
	int                                                mEnchantScrollID;                                         // 0x03F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ItemEnchantWnd");
		return ptr;
	}


	void STATIC_HandleEnchantResult(const struct FString& param);
	void STATIC_HandletPutSupportItemResult(const struct FString& param);
	bool STATIC_CheckScrollType(int Id);
	void STATIC_HandlePutTargetItemResult(const struct FString& param);
	void STATIC_OnDropItem(const struct FString& a_WindowID, const struct FItemInfo& a_ItemInfo, int X, int Y);
	void STATIC_OnHide();
	void STATIC_EnableCloverSlot();
	void STATIC_ResetUI();
	void STATIC_HandleEnchantShow(const struct FString& param);
	void STATIC_OnTextureAnimEnd(class UAnimTextureHandle* a_WindowHandle);
	void STATIC_ProcCancel();
	void STATIC_OnEnchantBtnClick();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_OnRegisterEvent();
	void Initialize();
	void STATIC_OnLoad();
};


// Class Interface.MultiSellWnd
// 0x0020 (0x005C - 0x003C)
class UMultiSellWnd : public UUICommonAPI
{
public:
	class UTextBoxHandle*                              PointItemName;                                            // 0x003C(0x0004)
	class UTextBoxHandle*                              txtPointItemDescription;                                  // 0x0040(0x0004)
	TArray<struct FMultiSellInfo>                      m_MultiSellInfoList;                                      // 0x0044(0x000C) (NeedCtorLink)
	int                                                m_MultiSellGroupID;                                       // 0x0050(0x0004)
	int                                                m_nSelectedMultiSellInfoIndex;                            // 0x0054(0x0004)
	int                                                m_nCurrentMultiSellInfoIndex;                             // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MultiSellWnd");
		return ptr;
	}


	void STATIC_HandleDialogOK();
	void STATIC_HandleOKButton();
	void STATIC_ShowItemList();
	void STATIC_HandleMultiSellInfoListEnd(const struct FString& param);
	void STATIC_HandelMultiSellInputItemInfo(const struct FString& param);
	void STATIC_HandelMultiSellOutputItemInfo(const struct FString& param);
	void STATIC_HandleMultiSellResultItemInfo(const struct FString& param);
	void STATIC_HandleMultiSellInfoListBegin(const struct FString& param);
	void Clear();
	void STATIC_Print();
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.TargetStatusWnd
// 0x006C (0x00A8 - 0x003C)
class UTargetStatusWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bExpand : 1;                                            // 0x003C(0x0004)
	int                                                m_TargetLevel;                                            // 0x0040(0x0004)
	int                                                m_targetID;                                               // 0x0044(0x0004)
	unsigned long                                      m_rotated : 1;                                            // 0x0048(0x0004)
	unsigned long                                      m_bShow : 1;                                              // 0x0048(0x0004)
	struct FString                                     g_NameStr;                                                // 0x004C(0x000C) (NeedCtorLink)
	struct FVector                                     targetLoc;                                                // 0x0058(0x000C)
	class UWindowHandle*                               Me1;                                                      // 0x0064(0x0004)
	class UWindowHandle*                               Me2;                                                      // 0x0068(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x006C(0x0004)
	class UBarHandle*                                  barMP;                                                    // 0x0070(0x0004)
	class UBarHandle*                                  barHP;                                                    // 0x0074(0x0004)
	class UTextBoxHandle*                              txtPledgeAllianceName;                                    // 0x0078(0x0004)
	class UTextureHandle*                              texPledgeAllianceCrest;                                   // 0x007C(0x0004)
	class UTextBoxHandle*                              txtAlliance;                                              // 0x0080(0x0004)
	class UTextBoxHandle*                              txtPledgeName;                                            // 0x0084(0x0004)
	class UTextureHandle*                              texPledgeCrest;                                           // 0x0088(0x0004)
	class UTextBoxHandle*                              txtPledge;                                                // 0x008C(0x0004)
	class UNameCtrlHandle*                             RankName;                                                 // 0x0090(0x0004)
	class UNameCtrlHandle*                             UserName;                                                 // 0x0094(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0098(0x0004)
	class UTreeHandle*                                 NpcInfo;                                                  // 0x009C(0x0004)
	class UButtonHandle*                               btnExpand;                                                // 0x00A0(0x0004)
	class UButtonHandle*                               btnContract;                                              // 0x00A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TargetStatusWnd");
		return ptr;
	}


	bool STATIC_IsNoBarID(int m_targetID);
	bool STATIC_IsAllWhiteID(int m_targetID);
	struct FCustomTooltip STATIC_SetNpcInfoTooltip(int Id, int Level);
	void STATIC_UpdateNpcInfoTree(TArray<int> arrNpcInfo);
	void STATIC_UpdateMPBar(int MP, int MaxMP);
	void STATIC_UpdateHPBar(int HP, int MaxHP);
	void STATIC_SetExpandMode(bool bExpand);
	struct FColor STATIC_GetTargetNameColor(int TargetLevelDiff);
	void STATIC_HandleTargetUpdate();
	void STATIC_HandleTargetUpdateGauge(int type);
	void STATIC_HandleReceiveTargetLevelDiff(const struct FString& param);
	void STATIC_HandleUpdateGauge(const struct FString& param, int type);
	void STATIC_OnCloseButton();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnRotateReset();
	void STATIC_OnRotateClose();
	void STATIC_OnRotate2();
	void STATIC_OnRotate1();
	void STATIC_OnShowProcess();
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyMatchMakeRoomWnd
// 0x0020 (0x005C - 0x003C)
class UPartyMatchMakeRoomWnd : public UUIScript
{
public:
	int                                                InviteState;                                              // 0x003C(0x0004)
	int                                                RoomNumber;                                               // 0x0040(0x0004)
	struct FString                                     InvitedName;                                              // 0x0044(0x000C) (NeedCtorLink)
	class UEditBoxHandle*                              MinLevelEditBox;                                          // 0x0050(0x0004)
	class UEditBoxHandle*                              MaxLevelEditBox;                                          // 0x0054(0x0004)
	int                                                MAX_Level;                                                // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyMatchMakeRoomWnd");
		return ptr;
	}


	void STATIC_SetMaxPartyMemberCount(int a_MaxPartyMemberCount);
	void STATIC_SetMaxLevel(int a_MaxLevel);
	void STATIC_SetMinLevel(int a_MinLevel);
	void STATIC_SetTitle(const struct FString& a_Title);
	void STATIC_SetRoomNumber(int a_RoomNumber);
	void STATIC_OnCancelButtonClick();
	void STATIC_OnOKButtonClick();
	void STATIC_OnClickButton(const struct FString& a_strButtonName);
	void STATIC_OnShow();
	void STATIC_OnLoad();
};


// Class Interface.ClanDrawerWnd
// 0x00A4 (0x00E0 - 0x003C)
class UClanDrawerWnd : public UUICommonAPI
{
public:
	struct FString                                     m_state;                                                  // 0x003C(0x000C) (NeedCtorLink)
	int                                                m_clanType;                                               // 0x0048(0x0004)
	int                                                m_clanWarListPage;                                        // 0x004C(0x0004)
	int                                                m_currentEditGradeID;                                     // 0x0050(0x0004)
	struct FString                                     m_currentName;                                            // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     m_myName;                                                 // 0x0060(0x000C) (NeedCtorLink)
	int                                                m_currentMaster;                                          // 0x006C(0x0004)
	struct FString                                     currentMasterName;                                        // 0x0070(0x000C) (NeedCtorLink)
	struct FString                                     m_WindowName;                                             // 0x007C(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hClanDrawerWndClan1_AssignApprenticeList;               // 0x0088(0x0004)
	class UListCtrlHandle*                             m_hClanDrawerWndClan8_DeclaredListCtrl;                   // 0x008C(0x0004)
	class UListCtrlHandle*                             m_hClanDrawerWndClan8_GotDeclaredListCtrl;                // 0x0090(0x0004)
	class UListCtrlHandle*                             m_hClanDrawerWndClan5_AuthListCtrl;                       // 0x0094(0x0004)
	class UListCtrlHandle*                             m_hClanDrawerWndClan5_AuthListCtrl2;                      // 0x0098(0x0004)
	int                                                ClanClickedID;                                            // 0x009C(0x0004)
	class UWindowHandle*                               Clan3_OrgIcon[0x8];                                       // 0x00A0(0x0004)
	class UTextureHandle*                              Clan3_OrgHighLight[0x8];                                  // 0x00C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ClanDrawerWnd");
		return ptr;
	}


	int STATIC_GetClanTypeFromIndex(int Index);
	struct FCustomTooltip STATIC_SetTooltip(const struct FString& Text);
	int STATIC_getCurrentGradebyClanType();
	void STATIC_resetAcademyAuth();
	void STATIC_disableAcademyAuth();
	void STATIC_reset_clan_org();
	struct FString STATIC_getClanOrderString(int gradeID);
	void STATIC_ReplaceSkill(int Index, const struct FItemID& cID, int Level);
	void STATIC_AddSkill(const struct FItemID& cID, int Level);
	struct FString STATIC_GetWarStateString(int State);
	void STATIC_EditAuthGrade2();
	void STATIC_EditAuthGrade();
	void STATIC_ApplyEditGrade();
	void STATIC_HideClanWindow();
	void STATIC_OnComboBoxItemSelected(const struct FString& strID, int Index);
	void STATIC_proc_swapmember();
	void STATIC_swapTargetSelect(int clanNo);
	void STATIC_KnighthoodCombobox();
	void STATIC_InitializeGradeComboBox();
	void STATIC_InitializeClanInfoWnd();
	void STATIC_InitializeClan1_AssignApprenticeList();
	void STATIC_InitializeAcademyList();
	struct FString STATIC_GetStringByGradeID(int gradeID);
	void STATIC_HandleClearWarList(const struct FString& a_Param);
	void STATIC_HandleClanAuthMember(const struct FString& a_Param);
	void STATIC_HandleClanAuth(const struct FString& a_Param);
	void STATIC_HandleCancelWar2();
	void STATIC_HandleDeclareWar();
	void STATIC_HandleCancelWar1();
	void STATIC_HandleSkillList(const struct FString& a_Param);
	void STATIC_HandleCrestChange(const struct FString& param);
	void STATIC_Proc_AuthValidation();
	void STATIC_CheckandCompareMyNameandDisableThings();
	void STATIC_HandleClanMemberInfo(const struct FString& a_Param);
	void STATIC_HandleClanWarList(const struct FString& a_Param);
	void STATIC_HandleClanAuthGradeList(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	bool STATIC_count_all_check2(const struct FString& numString, int TotalNum);
	bool STATIC_count_all_check(const struct FString& numString, int TotalNum);
	void STATIC_OnClickCheckBox(const struct FString& CheckBoxID);
	void STATIC_RecallCurrentMemberInfo();
	void STATIC_OnDBClickListCtrlRecord(const struct FString& ListCtrlID);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HideAll();
	void STATIC_SetStateAndShow(const struct FString& State);
	void Clear();
	void STATIC_OnShow();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyWndCompact
// 0x03C4 (0x0400 - 0x003C)
class UPartyWndCompact : public UUICommonAPI
{
public:
	unsigned long                                      m_bCompact : 1;                                           // 0x003C(0x0004)
	unsigned long                                      m_bBuff : 1;                                              // 0x003C(0x0004)
	unsigned long                                      m_partyleader : 1;                                        // 0x003C(0x0004)
	int                                                m_arrID[0x9];                                             // 0x0040(0x0004)
	int                                                m_arrPetID[0x9];                                          // 0x0064(0x0004)
	int                                                m_arrPetIDOpen[0x9];                                      // 0x0088(0x0004)
	int                                                m_CurCount;                                               // 0x00AC(0x0004)
	int                                                m_CurBf;                                                  // 0x00B0(0x0004)
	int                                                m_MasterID;                                               // 0x00B4(0x0004)
	struct UPartyWndCompact_FVnameData                 m_Vname[0x8];                                             // 0x00B8(0x0024) (NeedCtorLink)
	class UWindowHandle*                               m_wndTop;                                                 // 0x01D8(0x0004)
	class UWindowHandle*                               m_PartyOption;                                            // 0x01DC(0x0004)
	class UWindowHandle*                               m_PartyStatus[0x9];                                       // 0x01E0(0x0004)
	class UTextureHandle*                              m_ClassIcon[0x9];                                         // 0x0204(0x0004)
	class UStatusIconHandle*                           m_StatusIconBuff[0x9];                                    // 0x0228(0x0004)
	class UStatusIconHandle*                           m_StatusIconDeBuff[0x9];                                  // 0x024C(0x0004)
	class UBarHandle*                                  m_BarCP[0x9];                                             // 0x0270(0x0004)
	class UBarHandle*                                  m_BarHP[0x9];                                             // 0x0294(0x0004)
	class UBarHandle*                                  m_BarMP[0x9];                                             // 0x02B8(0x0004)
	class UButtonHandle*                               btnBuff;                                                  // 0x02DC(0x0004)
	class UButtonHandle*                               m_petButton[0x9];                                         // 0x02E0(0x0004)
	class UButtonHandle*                               m_petButtonTrash[0x9];                                    // 0x0304(0x0004)
	class UWindowHandle*                               m_PetPartyStatus[0x9];                                    // 0x0328(0x0004)
	class UStatusIconHandle*                           m_PetStatusIconBuff[0x9];                                 // 0x034C(0x0004)
	class UStatusIconHandle*                           m_PetStatusIconDeBuff[0x9];                               // 0x0370(0x0004)
	class UTextureHandle*                              m_PetClassIcon[0x9];                                      // 0x0394(0x0004)
	class UBarHandle*                                  m_PetBarHP[0x9];                                          // 0x03B8(0x0004)
	class UBarHandle*                                  m_PetBarMP[0x9];                                          // 0x03DC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyWndCompact");
		return ptr;
	}


	void STATIC_ResetVName();
	void STATIC_OnDropWnd(class UWindowHandle* hTarget, class UWindowHandle* hDropWnd, int X, int Y);
	void STATIC_SetBuffButtonTooltip();
	int STATIC_GetIdx(int Y);
	void STATIC_OnRButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_UpdateMPBar(int idx, int Value, int MaxValue);
	void STATIC_UpdateHPBar(int idx, int Value, int MaxValue);
	void STATIC_UpdateCPBar(int idx, int Value, int MaxValue);
	void STATIC_UpdateBuff();
	void STATIC_OnBuffButton();
	void STATIC_OnOpenPartyWndOption();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleShowBuffIcon(const struct FString& param);
	void STATIC_HandlePartySpelledList(const struct FString& param);
	void STATIC_UpdatePetStatus(int idx, const struct FString& param);
	void STATIC_HandlePartySummonDelete(const struct FString& param);
	void STATIC_HandlePartySummonUpdate(const struct FString& param);
	void STATIC_HandlePartySummonAdd(const struct FString& param);
	void STATIC_UpdateStatus(int idx, const struct FString& param);
	void STATIC_HandlePartyDeleteAllParty();
	void STATIC_HandlePartyDeleteParty(const struct FString& param);
	void STATIC_HandlePartyUpdateParty(const struct FString& param);
	void STATIC_HandlePartyAddParty(const struct FString& param);
	int STATIC_FindPetID(int Id);
	int STATIC_FindPartyID(int Id);
	void STATIC_ResizeWnd();
	void STATIC_CopyStatus(int DesIndex, int SrcIndex);
	void STATIC_ClearPetStatus(int idx);
	void STATIC_ClearStatus(int idx);
	void Clear();
	void STATIC_HandleRestart();
	void STATIC_HandlePartyRenameMember(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnShow();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnHide();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.HeroTowerWnd
// 0x0008 (0x0044 - 0x003C)
class UHeroTowerWnd : public UUIScript
{
public:
	int                                                m_IDofHero;                                               // 0x003C(0x0004)
	class UListCtrlHandle*                             m_hLstHero;                                               // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.HeroTowerWnd");
		return ptr;
	}


	void STATIC_HandleHeroShowList(const struct FString& param);
	void Clear();
	void STATIC_HandleCheckAmIHero();
	void STATIC_HandleShowHistory();
	void STATIC_HandleShowDiary();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ShortcutWnd
// 0x0020 (0x005C - 0x003C)
class UShortcutWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	int                                                CurrentShortcutPage;                                      // 0x0040(0x0004)
	int                                                CurrentShortcutPage2;                                     // 0x0044(0x0004)
	int                                                CurrentShortcutPage3;                                     // 0x0048(0x0004)
	unsigned long                                      m_IsLocked : 1;                                           // 0x004C(0x0004)
	unsigned long                                      m_IsVertical : 1;                                         // 0x004C(0x0004)
	unsigned long                                      m_IsJoypad : 1;                                           // 0x004C(0x0004)
	unsigned long                                      m_IsJoypadExpand : 1;                                     // 0x004C(0x0004)
	unsigned long                                      m_IsJoypadOn : 1;                                         // 0x004C(0x0004)
	unsigned long                                      m_IsExpand1 : 1;                                          // 0x004C(0x0004)
	unsigned long                                      m_IsExpand2 : 1;                                          // 0x004C(0x0004)
	unsigned long                                      m_IsShortcutExpand : 1;                                   // 0x004C(0x0004)
	struct FString                                     m_ShortcutWndName;                                        // 0x0050(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ShortcutWnd");
		return ptr;
	}


	void STATIC_HandleExpandButton();
	void STATIC_ExecuteShortcutCommandBySlot(const struct FString& param);
	void STATIC_OnClickExpandShortcutButton();
	void STATIC_Reduce();
	void STATIC_Expand2();
	void STATIC_Expand1();
	void STATIC_ExpandWnd();
	void STATIC_ArrangeWnd();
	void STATIC_SetJoypadExpand(bool a_IsJoypadExpand);
	void STATIC_SetJoypad(bool a_IsJoypad);
	void STATIC_SetVertical(bool a_IsVertical);
	void STATIC_UnLock();
	void Lock();
	bool STATIC_IsShortcutIDInCurPage(int PageNum, int a_nShortcutID);
	void STATIC_SetCurPage3(int a_nCurPage);
	void STATIC_SetCurPage2(int a_nCurPage);
	void STATIC_SetCurPage(int a_nCurPage);
	void STATIC_OnExpandBtn();
	void STATIC_OnJoypadBtn();
	void STATIC_OnRotateBtn();
	void STATIC_OnClickUnlockBtn();
	void STATIC_OnClickLockBtn();
	void STATIC_OnNextBtn3();
	void STATIC_OnNextBtn2();
	void STATIC_OnNextBtn();
	void STATIC_OnPrevBtn3();
	void STATIC_OnPrevBtn2();
	void STATIC_OnPrevBtn();
	void STATIC_OnClickButton(const struct FString& a_strID);
	void STATIC_SetJoypadShortcut(TEnumAsByte<EJoyShortcut> a_JoyShortcut);
	void STATIC_HandleJoypadRButtonDown(const struct FString& a_Param);
	void STATIC_HandleJoypadRButtonUp(const struct FString& a_Param);
	void STATIC_HandleJoypadLButtonDown(const struct FString& a_Param);
	void STATIC_HandleJoypadLButtonUp(const struct FString& a_Param);
	void STATIC_HandleShortcutJoypad(const struct FString& a_Param);
	void STATIC_HandleShortcutClear();
	void STATIC_HandleShortcutUpdate(const struct FString& param);
	void STATIC_HandleShortcutPageUpdate(const struct FString& param);
	void STATIC_InitShortPageNum();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnDefaultPosition();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SiegeInfoWnd
// 0x0094 (0x00D0 - 0x003C)
class USiegeInfoWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	int                                                m_CastleID;                                               // 0x0040(0x0004)
	struct FString                                     m_CastleName;                                             // 0x0044(0x000C) (NeedCtorLink)
	int                                                m_PlayerClanID;                                           // 0x0050(0x0004)
	unsigned long                                      m_IsCastleOwner : 1;                                      // 0x0054(0x0004)
	int                                                m_SiegeTime;                                              // 0x0058(0x0004)
	TArray<int>                                        m_SelectableTimeArray;                                    // 0x005C(0x000C) (NeedCtorLink)
	unsigned long                                      m_IsExistMyClanIDinAttackSide : 1;                        // 0x0068(0x0004)
	unsigned long                                      m_IsExistMyClanIDinDefenseSide : 1;                       // 0x0068(0x0004)
	int                                                m_AcceptedClan;                                           // 0x006C(0x0004)
	int                                                m_WaitingClan;                                            // 0x0070(0x0004)
	int                                                m_DialogClanID;                                           // 0x0074(0x0004)
	int                                                m_DialogSelectedTimeID;                                   // 0x0078(0x0004)
	class UWindowHandle*                               m_wndTop;                                                 // 0x007C(0x0004)
	class UTabHandle*                                  TabCtrl;                                                  // 0x0080(0x0004)
	class UTextBoxHandle*                              txtCastleName;                                            // 0x0084(0x0004)
	class UTextBoxHandle*                              txtOwnerName;                                             // 0x0088(0x0004)
	class UTextBoxHandle*                              txtClanName;                                              // 0x008C(0x0004)
	class UTextBoxHandle*                              txtAllianceName;                                          // 0x0090(0x0004)
	class UTextureHandle*                              texClan;                                                  // 0x0094(0x0004)
	class UTextureHandle*                              texAlliance;                                              // 0x0098(0x0004)
	class UTextBoxHandle*                              txtCurTime;                                               // 0x009C(0x0004)
	class UTextBoxHandle*                              txtSiegeTime;                                             // 0x00A0(0x0004)
	class UComboBoxHandle*                             cboTime;                                                  // 0x00A4(0x0004)
	class UListCtrlHandle*                             lstAttackClan;                                            // 0x00A8(0x0004)
	class UTextBoxHandle*                              txtAttackCount;                                           // 0x00AC(0x0004)
	class UButtonHandle*                               btnAttackApply;                                           // 0x00B0(0x0004)
	class UButtonHandle*                               btnAttackCancel;                                          // 0x00B4(0x0004)
	class UListCtrlHandle*                             lstDefenseClan;                                           // 0x00B8(0x0004)
	class UTextBoxHandle*                              txtDefenseCount;                                          // 0x00BC(0x0004)
	class UButtonHandle*                               btnDefenseApply;                                          // 0x00C0(0x0004)
	class UButtonHandle*                               btnDefenseCancel;                                         // 0x00C4(0x0004)
	class UButtonHandle*                               btnDefenseReject;                                         // 0x00C8(0x0004)
	class UButtonHandle*                               btnDefenseConfirm;                                        // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SiegeInfoWnd");
		return ptr;
	}


	void STATIC_ClearDefenseButton();
	void STATIC_ClearAttackButton();
	void STATIC_ClearTimeCombo();
	void STATIC_UpdateDefenseButton();
	void STATIC_UpdateAttackButton();
	void STATIC_UpdateTimeCombo();
	void STATIC_UpdateDefenseCount();
	void STATIC_UpdateAttackCount();
	void STATIC_HandleSiegeInfoSelectableTime(const struct FString& param);
	void STATIC_HandleSiegeInfoClanListEnd(const struct FString& param);
	void STATIC_HandleSiegeInfoClanList(const struct FString& param);
	void STATIC_HandleSiegeInfoClanListStart(const struct FString& param);
	void STATIC_HandleSiegeInfo(const struct FString& param);
	void STATIC_OnTabCtrl2Click();
	void STATIC_OnTabCtrl1Click();
	void STATIC_OnTabCtrl0Click();
	void STATIC_OnDefenseConfirmClick();
	void STATIC_OnDefenseRejectClick();
	void STATIC_OnDefenseCancelClick();
	void STATIC_OnDefenseApplyClick();
	void STATIC_OnAttackCancelClick();
	void STATIC_OnAttackApplyClick();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_clearInfo();
	void STATIC_OnComboBoxItemSelected(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyMatchWnd
// 0x0014 (0x0050 - 0x003C)
class UPartyMatchWnd : public UUIScript
{
public:
	int                                                m_CurrentPageNum;                                         // 0x003C(0x0004)
	int                                                CompletelyQuitPartyMatching;                              // 0x0040(0x0004)
	unsigned long                                      bOpenStateLobby : 1;                                      // 0x0044(0x0004)
	int                                                MAX_Level;                                                // 0x0048(0x0004)
	class UListCtrlHandle*                             PartyMatchListCtrl;                                       // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyMatchWnd");
		return ptr;
	}


	bool STATIC_IsShowWaitListWnd();
	void STATIC_ToggleWaitListWnd();
	void STATIC_UpdateWaitListWnd();
	void STATIC_ShowHideWaitListWnd();
	void STATIC_SetWaitListWnd(bool bShow);
	int STATIC_GetLevelFilter();
	int STATIC_GetLocationFilter();
	void STATIC_OnAutoJoinBtnClick();
	void STATIC_OnDBClickListCtrlRecord(const struct FString& a_ListCtrlName);
	void STATIC_OnMakeRoomBtnClick();
	void STATIC_RequestPartyRoomListLocal(int a_Page);
	void STATIC_OnNextBtnClick();
	void STATIC_OnPrevBtnClick();
	void STATIC_OnRefreshBtnClick();
	void STATIC_OnWaitListButton();
	void STATIC_OnClickButton(const struct FString& a_strButtonName);
	void STATIC_HandlePartyMatchList(const struct FString& param);
	void STATIC_OnButtonTimer(bool bExpired);
	void STATIC_OnEvent(int a_EventID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnSendPacketWhenHiding();
	void STATIC_OnShow();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RadarMapWnd
// 0x0220 (0x025C - 0x003C)
class URadarMapWnd : public UUICommonAPI
{
public:
	unsigned long                                      isRotating : 1;                                           // 0x003C(0x0004)
	class UWindowHandle*                               m_hRadarMapWnd;                                           // 0x0040(0x0004)
	class URadarMapCtrlHandle*                         m_hRadarMapCtrl;                                          // 0x0044(0x0004)
	class UWindowHandle*                               m_radarOptionWnd;                                         // 0x0048(0x0004)
	class UWindowHandle*                               m_hRadarMapRotationWnd;                                   // 0x004C(0x0004)
	class UWindowHandle*                               m_RadarMapForWnd;                                         // 0x0050(0x0004)
	class UWindowHandle*                               m_RadarMapBackWnd;                                        // 0x0054(0x0004)
	class UWindowHandle*                               m_raderBack;                                              // 0x0058(0x0004)
	class UTextureHandle*                              m_seaBg;                                                  // 0x005C(0x0004)
	class UTextureHandle*                              m_compas;                                                 // 0x0060(0x0004)
	class UTextureHandle*                              m_TexMyPosition;                                          // 0x0064(0x0004)
	class UButtonHandle*                               m_optionWnd;                                              // 0x0068(0x0004)
	class UCheckBoxHandle*                             checkPartyView;                                           // 0x006C(0x0004)
	class UCheckBoxHandle*                             checkMonsterView;                                         // 0x0070(0x0004)
	class UCheckBoxHandle*                             checkMyPos;                                               // 0x0074(0x0004)
	class UCheckBoxHandle*                             checkFixView;                                             // 0x0078(0x0004)
	class UWindowHandle*                               FlightStatusGauges;                                       // 0x007C(0x0004)
	class UStatusBarHandle*                            barFuel;                                                  // 0x0080(0x0004)
	class UBarHandle*                                  barMP;                                                    // 0x0084(0x0004)
	class UBarHandle*                                  barHP;                                                    // 0x0088(0x0004)
	class UTextBoxHandle*                              ShipNameTxt;                                              // 0x008C(0x0004)
	class UWindowHandle*                               FlightStatusAltitude;                                     // 0x0090(0x0004)
	class UTextureHandle*                              FlightAltitudeGaugeTex;                                   // 0x0094(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0098(0x000C) (NeedCtorLink)
	struct FVector                                     MyPosition;                                               // 0x00A4(0x000C)
	struct FString                                     m_TargetName;                                             // 0x00B0(0x000C) (NeedCtorLink)
	struct FVector                                     m_TargetPosition;                                         // 0x00BC(0x000C)
	int                                                m_targetID;                                               // 0x00C8(0x0004)
	int                                                m_MyID;                                                   // 0x00CC(0x0004)
	int                                                arr_MonsterID[0x14];                                      // 0x00D0(0x0004)
	int                                                arr_PartyID[0x8];                                         // 0x0120(0x0004)
	int                                                arr_PartyLocX[0x8];                                       // 0x0140(0x0004)
	int                                                arr_PartyLocY[0x8];                                       // 0x0160(0x0004)
	int                                                arr_PartyLocZ[0x8];                                       // 0x0180(0x0004)
	struct FString                                     arr_PartyName[0x8];                                       // 0x01A0(0x000C) (NeedCtorLink)
	float                                              mag;                                                      // 0x0200(0x0004)
	float                                              arrMag[0x6];                                              // 0x0204(0x0004)
	int                                                magStep;                                                  // 0x021C(0x0004)
	int                                                arrPartyDistWithMag[0x6];                                 // 0x0220(0x0004)
	unsigned long                                      bFront : 1;                                               // 0x0238(0x0004)
	unsigned long                                      bLockClick : 1;                                           // 0x0238(0x0004)
	unsigned long                                      onshowstat1 : 1;                                          // 0x0238(0x0004)
	unsigned long                                      onshowstat2 : 1;                                          // 0x0238(0x0004)
	int                                                globalAlphavalue1;                                        // 0x023C(0x0004)
	int                                                globalyloc;                                               // 0x0240(0x0004)
	float                                              numberstrange;                                            // 0x0244(0x0004)
	int                                                global_move_val;                                          // 0x0248(0x0004)
	unsigned long                                      showMonster : 1;                                          // 0x024C(0x0004)
	unsigned long                                      hideParty : 1;                                            // 0x024C(0x0004)
	unsigned long                                      inParty : 1;                                              // 0x024C(0x0004)
	unsigned long                                      inGamingState : 1;                                        // 0x024C(0x0004)
	unsigned long                                      showMe : 1;                                               // 0x024C(0x0004)
	unsigned long                                      fixRadar : 1;                                             // 0x024C(0x0004)
	unsigned long                                      isFrontSide : 1;                                          // 0x024C(0x0004)
	unsigned long                                      isOnFSTimer : 1;                                          // 0x024C(0x0004)
	unsigned long                                      isFreeShip : 1;                                           // 0x024C(0x0004)
	class UTextBoxHandle*                              m_textboxmove;                                            // 0x0250(0x0004)
	class UTextBoxHandle*                              m_textNoMap;                                              // 0x0254(0x0004)
	class UTextureHandle*                              m_texZone;                                                // 0x0258(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RadarMapWnd");
		return ptr;
	}


	bool STATIC_IsHidePositionZone(int nZoneID);
	bool STATIC_IsHideRadarZone(int nZoneID);
	int STATIC_LayerOfAltitude(int altitude);
	void STATIC_updateAltitudeTex(int altitude);
	void STATIC_ShowAirShipTutorial(int SystemMsgID);
	void STATIC_OnAirShipAltitude(const struct FString& a_Param);
	void STATIC_OnAirShipUpdate(const struct FString& a_Param);
	void STATIC_OnAirShipState(const struct FString& a_Param);
	void STATIC_FlightGaugesClear();
	void STATIC_HandleZoneTitle();
	int STATIC_FindMonsterIDX(int Id);
	int STATIC_FindPartyIDX(int Id);
	void STATIC_init_textboxmove();
	void STATIC_resetanimloc();
	int STATIC_move_value();
	void FadeOut();
	void FadeIn();
	void STATIC_OnTick();
	void STATIC_SetRadarColor(const struct FColor& a_RadarColor, float a_Seconds);
	void STATIC_HandleRadarZoneCode(int type);
	void STATIC_HandleFinishRotate(const struct FString& param);
	void STATIC_clickRotateButton();
	void STATIC_RotateProcess();
	void STATIC_OnClickCheckBox(const struct FString& CheckBoxID);
	void STATIC_OnClickButton(const struct FString& a_ButtonID);
	void STATIC_OnTimer(int TimerID);
	int STATIC_findEmptyPartySlot();
	int STATIC_findEmptyMonsterSlot();
	void STATIC_ClearObject();
	void STATIC_HandleNotifyObject(const struct FString& a_Param);
	void STATIC_OptionApply();
	int STATIC_GetDistanceFromMe(int X, int Y, int Z);
	void STATIC_GetPartyLocation();
	void STATIC_AddPartyObject();
	void STATIC_HandleOntimer();
	void STATIC_OnRButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_HandleNotifyPartyMemberPosition(const struct FString& param);
	void STATIC_HandlePartyDeleteAllParty();
	void STATIC_HandlePartyDeleteParty(const struct FString& param);
	void STATIC_HandlePartyAddParty(const struct FString& param);
	void STATIC_HandleTargetHideWindow();
	void STATIC_HandleTargetUpdate();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_CheckTimer();
	void STATIC_OnShow();
	void STATIC_InitDatas();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.OlympiadPlayerWnd
// 0x01B4 (0x01F0 - 0x003C)
class UOlympiadPlayerWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               btnExpand;                                                // 0x0040(0x0004)
	class UButtonHandle*                               btnContract;                                              // 0x0044(0x0004)
	class UWindowHandle*                               m_StatusWnd[0x3];                                         // 0x0048(0x0004)
	class UNameCtrlHandle*                             m_PlayerName[0x3];                                        // 0x0054(0x0004)
	class UTextureHandle*                              m_ClassIcon[0x3];                                         // 0x0060(0x0004)
	class UBarHandle*                                  m_BarCP[0x3];                                             // 0x006C(0x0004)
	class UBarHandle*                                  m_BarHP[0x3];                                             // 0x0078(0x0004)
	int                                                m_PlayerNum;                                              // 0x0084(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0088(0x000C) (NeedCtorLink)
	struct FString                                     m_BuffWindowName;                                         // 0x0094(0x000C) (NeedCtorLink)
	unsigned long                                      m_Expand : 1;                                             // 0x00A0(0x0004)
	int                                                m_TotalCount;                                             // 0x00A4(0x0004)
	struct FString                                     m_Msg[0x6];                                               // 0x00A8(0x000C) (NeedCtorLink)
	int                                                m_MsgStartLine;                                           // 0x00F0(0x0004)
	int                                                m_MyTeamNum;                                              // 0x00F4(0x0004)
	int                                                m_IsPlayer;                                               // 0x00F8(0x0004)
	unsigned long                                      mFound : 1;                                               // 0x00FC(0x0004)
	struct FOlympiadUserInfo                           UserInfo[0x6];                                            // 0x0100(0x0028) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadPlayerWnd");
		return ptr;
	}


	void STATIC_Resize(int Count);
	void STATIC_SetExpandMode(bool bExpand);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_UpdateUserInfo(int where, int Index);
	void STATIC_UpdateUsersInfo();
	void STATIC_UpdateMsg(const struct FString& strMsg);
	void STATIC_HandleAttack(const struct FString& param);
	void STATIC_HandleMagicSkillUse(const struct FString& param);
	void STATIC_HandleUserInfo(const struct FString& param);
	void Clear();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
	void STATIC_SetPlayerNum(int PlayerNum);
};


// Class Interface.WarehouseWnd
// 0x0020 (0x005C - 0x003C)
class UWarehouseWnd : public UUICommonAPI
{
public:
	TEnumAsByte<EWarehouseCategory>                    m_category;                                               // 0x003C(0x0001)
	TEnumAsByte<EWarehouseType>                        m_type;                                                   // 0x003D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	int                                                m_maxPrivateCount;                                        // 0x0040(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0044(0x000C) (NeedCtorLink)
	class UItemWindowHandle*                           m_topList;                                                // 0x0050(0x0004)
	class UItemWindowHandle*                           m_bottomList;                                             // 0x0054(0x0004)
	class UWindowHandle*                               m_dialogWnd;                                              // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.WarehouseWnd");
		return ptr;
	}


	void STATIC_HandleSetMaxCount(const struct FString& param);
	void STATIC_HandleOKButton();
	void STATIC_AdjustCount();
	void STATIC_AdjustPrice();
	void STATIC_HandleDeleteItem(const struct FString& param);
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleOpenWindow(const struct FString& param);
	void STATIC_HandleDialogOK();
	void STATIC_MoveItemBottomToTop(int Index, bool bAllItem);
	void STATIC_MoveItemTopToBottom(int Index, bool bAllItem);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnDBClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Clear();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.EventMatchGMWnd
// 0x00A8 (0x00E4 - 0x003C)
class UEventMatchGMWnd : public UUICommonAPI
{
public:
	class UHtmlHandle*                                 m_hCommandHtml;                                           // 0x003C(0x0004)
	class UWindowHandle*                               m_hEventMatchGMCommandWnd;                                // 0x0040(0x0004)
	class UWindowHandle*                               m_hEventMatchGMFenceWnd;                                  // 0x0044(0x0004)
	class UButtonHandle*                               m_hCreateEventMatchButton;                                // 0x0048(0x0004)
	class UButtonHandle*                               m_hSetTeam1LeaderButton;                                  // 0x004C(0x0004)
	class UButtonHandle*                               m_hLockTeam1Button;                                       // 0x0050(0x0004)
	class UButtonHandle*                               m_hSetTeam2LeaderButton;                                  // 0x0054(0x0004)
	class UButtonHandle*                               m_hLockTeam2Button;                                       // 0x0058(0x0004)
	class UButtonHandle*                               m_hPauseButton;                                           // 0x005C(0x0004)
	class UButtonHandle*                               m_hStartButton;                                           // 0x0060(0x0004)
	class UButtonHandle*                               m_hSetScoreButton;                                        // 0x0064(0x0004)
	class UButtonHandle*                               m_hSendAnnounceButton;                                    // 0x0068(0x0004)
	class UButtonHandle*                               m_hShowCommandWndButton;                                  // 0x006C(0x0004)
	class UButtonHandle*                               m_hSendGameEndMsgButton;                                  // 0x0070(0x0004)
	class UButtonHandle*                               m_hSetFenceButton;                                        // 0x0074(0x0004)
	class UButtonHandle*                               m_hTeam1FirecrackerButton;                                // 0x0078(0x0004)
	class UButtonHandle*                               m_hTeam2FirecrackerButton;                                // 0x007C(0x0004)
	class UButtonHandle*                               Summon2Team;                                              // 0x0080(0x0004)
	class UButtonHandle*                               SetAllHeal;                                               // 0x0084(0x0004)
	class UButtonHandle*                               DelayReset;                                               // 0x0088(0x0004)
	class UButtonHandle*                               Summon1Team;                                              // 0x008C(0x0004)
	class UEditBoxHandle*                              m_hTeam1NameEditBox;                                      // 0x0090(0x0004)
	class UEditBoxHandle*                              m_hTeam2NameEditBox;                                      // 0x0094(0x0004)
	class UEditBoxHandle*                              m_hTeam1LeaderNameEditBox;                                // 0x0098(0x0004)
	class UEditBoxHandle*                              m_hTeam2LeaderNameEditBox;                                // 0x009C(0x0004)
	class UEditBoxHandle*                              m_hOptionFileEditBox;                                     // 0x00A0(0x0004)
	class UEditBoxHandle*                              m_hCommandFileEditBox;                                    // 0x00A4(0x0004)
	class UEditBoxHandle*                              m_hTeam1ScoreEditBox;                                     // 0x00A8(0x0004)
	class UEditBoxHandle*                              m_hTeam2ScoreEditBox;                                     // 0x00AC(0x0004)
	class UEditBoxHandle*                              m_hAnnounceEditBox;                                       // 0x00B0(0x0004)
	class UTextBoxHandle*                              m_hMatchIDTextBox;                                        // 0x00B4(0x0004)
	class UListCtrlHandle*                             m_hTeam1ListCtrl;                                         // 0x00B8(0x0004)
	class UListCtrlHandle*                             m_hTeam2ListCtrl;                                         // 0x00BC(0x0004)
	int                                                m_CountDown;                                              // 0x00C0(0x0004)
	int                                                m_MatchID;                                                // 0x00C4(0x0004)
	unsigned long                                      m_Team1Locked : 1;                                        // 0x00C8(0x0004)
	unsigned long                                      m_Team2Locked : 1;                                        // 0x00C8(0x0004)
	unsigned long                                      m_Paused : 1;                                             // 0x00C8(0x0004)
	struct FString                                     m_Team1Name;                                              // 0x00CC(0x000C) (NeedCtorLink)
	struct FString                                     m_Team2Name;                                              // 0x00D8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.EventMatchGMWnd");
		return ptr;
	}


	void STATIC_OnClickSummon1Team();
	void STATIC_OnClickDelayReset();
	void STATIC_OnClickSetAllHeal();
	void STATIC_OnClickSummon2Team();
	void STATIC_SetMatchID(int a_MatchID);
	void SetPause(bool a_Pause, bool a_SendToServer);
	void STATIC_HandleEventMatchManage(const struct FString& a_Param);
	void STATIC_HandleEventMatchPartyLeader(const struct FString& a_Param);
	void STATIC_Firecracker(int a_TeamID);
	void STATIC_SendGameEndMsg();
	void STATIC_SendAnnounce();
	void STATIC_SetScore();
	void STATIC_RemoveEventMatch();
	void STATIC_SetFence();
	bool STATIC_CheckBuffRule(const struct FString& a_OptionFile);
	bool STATIC_ApplyBuffRule();
	bool STATIC_ApplyItemRule(const struct FString& a_OptionFile);
	bool STATIC_ApplySkillRule(const struct FString& a_OptionFile);
	void STATIC_StartCountDown();
	void STATIC_RefreshLockStatus();
	void STATIC_HandleEventMatchUpdateTeamInfo(const struct FString& a_Param);
	void STATIC_HandleEventMatchCreated(const struct FString& a_Param);
	void STATIC_HandleShowEventMatchGMWnd();
	void STATIC_NotifyFenceInfo(const struct FVector& a_Position, int a_XLength, int a_YLength);
	void STATIC_OnClickTeam2FirecrackerButton();
	void STATIC_OnClickTeam1FirecrackerButton();
	void STATIC_OnClickSetFenceButton();
	void STATIC_OnClickSendGameEngMsgButton();
	void STATIC_OnClickShowCommandWndButton();
	void STATIC_OnClickSendAnnounceButton();
	void STATIC_OnClickSetScoreButton();
	void STATIC_OnClickStartButton();
	void STATIC_OnClickPauseButton();
	void STATIC_OnClickLockTeam2Button();
	void STATIC_OnClickSetTeam2LeaderButton();
	void STATIC_OnClickLockTeam1Button();
	void STATIC_OnClickSetTeam1LeaderButton();
	void STATIC_OnClickCreateEventMatchButton();
	void STATIC_OnHide();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickButtonWithHandle(class UButtonHandle* a_ButtonHandle);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.DuelManager
// 0x0104 (0x0140 - 0x003C)
class UDuelManager : public UUICommonAPI
{
public:
	int                                                m_memberInfo[0x9];                                        // 0x003C(0x0004)
	class UWindowHandle*                               m_TopWnd;                                                 // 0x0060(0x0004)
	class UWindowHandle*                               m_StatusWnd[0x9];                                         // 0x0064(0x0004)
	class UNameCtrlHandle*                             m_PlayerName[0x9];                                        // 0x0088(0x0004)
	class UTextureHandle*                              m_ClassIcon[0x9];                                         // 0x00AC(0x0004)
	class UBarHandle*                                  m_BarCP[0x9];                                             // 0x00D0(0x0004)
	class UBarHandle*                                  m_BarHP[0x9];                                             // 0x00F4(0x0004)
	class UBarHandle*                                  m_BarMP[0x9];                                             // 0x0118(0x0004)
	unsigned long                                      m_bDuelState : 1;                                         // 0x013C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.DuelManager");
		return ptr;
	}


	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_Resize(int Count);
	void Clear();
	void STATIC_HandleUpdateUserInfo(const struct FString& param);
	void STATIC_HandleDialogCancel();
	void STATIC_HandleDialogOK();
	void STATIC_HandleOlympiadEnd();
	void STATIC_HandleOlympiadUserInfo(const struct FString& param);
	void STATIC_HandleDuelAskStart(const struct FString& param);
	void STATIC_OnEvent(int EventID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.AITimerWnd
// 0x00AC (0x00E8 - 0x003C)
class UAITimerWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               MEBtn;                                                    // 0x0040(0x0004)
	class UTextBoxHandle*                              txtAITimerObject;                                         // 0x0044(0x0004)
	class UTextBoxHandle*                              MinTxt;                                                   // 0x0048(0x0004)
	class UTextBoxHandle*                              SecTxt;                                                   // 0x004C(0x0004)
	class UTextBoxHandle*                              DividerTxt;                                               // 0x0050(0x0004)
	int                                                UserID;                                                   // 0x0054(0x0004)
	int                                                EventID;                                                  // 0x0058(0x0004)
	int                                                ask;                                                      // 0x005C(0x0004)
	int                                                Reply;                                                    // 0x0060(0x0004)
	int                                                Min;                                                      // 0x0064(0x0004)
	int                                                Sec;                                                      // 0x0068(0x0004)
	int                                                CurMin;                                                   // 0x006C(0x0004)
	int                                                CurSec;                                                   // 0x0070(0x0004)
	int                                                TargetMin;                                                // 0x0074(0x0004)
	int                                                TargetSec;                                                // 0x0078(0x0004)
	int                                                TempMin;                                                  // 0x007C(0x0004)
	int                                                TempSec;                                                  // 0x0080(0x0004)
	struct FString                                     Param1;                                                   // 0x0084(0x000C) (NeedCtorLink)
	struct FString                                     Param2;                                                   // 0x0090(0x000C) (NeedCtorLink)
	struct FString                                     param3;                                                   // 0x009C(0x000C) (NeedCtorLink)
	struct FString                                     param4;                                                   // 0x00A8(0x000C) (NeedCtorLink)
	struct FString                                     param5;                                                   // 0x00B4(0x000C) (NeedCtorLink)
	struct FString                                     param6;                                                   // 0x00C0(0x000C) (NeedCtorLink)
	struct FString                                     MinStr;                                                   // 0x00CC(0x000C) (NeedCtorLink)
	struct FString                                     SecStr;                                                   // 0x00D8(0x000C) (NeedCtorLink)
	unsigned long                                      m_InGameBool : 1;                                         // 0x00E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AITimerWnd");
		return ptr;
	}


	void STATIC_OnHide();
	void STATIC_StartCountUp(int CurMin, int CurSec, const struct FString& strDisplayTxt, int TMin, int TSec);
	void STATIC_StartCountDown(int CurMin, int CurSec, const struct FString& strDisplayTxt, int TMin, int TSec);
	void STATIC_TimerReset(int CurMin, int CurSec);
	void STATIC_UpdateTimerCountUp();
	void STATIC_UpdateTimerCountDown();
	void STATIC_OnTimer(int TimerID);
	void STATIC_HandleAIController(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnRegisterEvent();
	void STATIC_OnLoad();
};


// Class Interface.AbnormalStatusWnd
// 0x0020 (0x005C - 0x003C)
class UAbnormalStatusWnd : public UUICommonAPI
{
public:
	int                                                m_NormalStatusRow;                                        // 0x003C(0x0004)
	int                                                m_DebuffRow;                                              // 0x0040(0x0004)
	int                                                m_EtcStatusRow;                                           // 0x0044(0x0004)
	int                                                m_ShortStatusRow;                                         // 0x0048(0x0004)
	int                                                m_SongDanceStatusRow;                                     // 0x004C(0x0004)
	unsigned long                                      m_bOnCurState : 1;                                        // 0x0050(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0054(0x0004)
	class UStatusIconHandle*                           StatusIcon;                                               // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AbnormalStatusWnd");
		return ptr;
	}


	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_HandleLanguageChanged();
	void STATIC_UpdateWindowSize();
	void STATIC_HandleAddShortStatus(const struct FString& param);
	void STATIC_HandleAddEtcStatus(const struct FString& param);
	void STATIC_HandleAddNormalStatus(const struct FString& param);
	void STATIC_ClearAll();
	void STATIC_ClearStatus(bool bEtcItem, bool bShortItem);
	void STATIC_OnShow();
	void STATIC_HandleShowReplayQuitDialogBox();
	void STATIC_HandleDie();
	void STATIC_HandleRestart();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.KillPointRankWnd
// 0x01AC (0x01E8 - 0x003C)
class UKillPointRankWnd : public UUIScript
{
public:
	struct FKillPointWndData                           m_KillPointData[0x19];                                    // 0x003C(0x0010) (NeedCtorLink)
	class UWindowHandle*                               Me;                                                       // 0x01CC(0x0004)
	class UTextBoxHandle*                              TopRatedPCName;                                           // 0x01D0(0x0004)
	class UTextBoxHandle*                              TopRatedKillPC;                                           // 0x01D4(0x0004)
	class UListCtrlHandle*                             RankingListLeft;                                          // 0x01D8(0x0004)
	class UListCtrlHandle*                             RankingListRight;                                         // 0x01DC(0x0004)
	class UNameCtrlHandle*                             NameCtrl;                                                 // 0x01E0(0x0004)
	int                                                m_Count;                                                  // 0x01E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.KillPointRankWnd");
		return ptr;
	}


	void STATIC_InsertKillPoint();
	void STATIC_OnHide();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PetWnd
// 0x0070 (0x00AC - 0x003C)
class UPetWnd : public UUICommonAPI
{
public:
	int                                                m_PetID;                                                  // 0x003C(0x0004)
	unsigned long                                      m_bShowNameBtn : 1;                                       // 0x0040(0x0004)
	struct FString                                     m_LastInputPetName;                                       // 0x0044(0x000C) (NeedCtorLink)
	int                                                EvolutionizedAction;                                      // 0x0050(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0054(0x0004)
	class UStatusBarHandle*                            texPetHP;                                                 // 0x0058(0x0004)
	class UStatusBarHandle*                            texPetMP;                                                 // 0x005C(0x0004)
	class UStatusBarHandle*                            texPetExp;                                                // 0x0060(0x0004)
	class UStatusBarHandle*                            texPetFatigue;                                            // 0x0064(0x0004)
	class UButtonHandle*                               btnName;                                                  // 0x0068(0x0004)
	class UTextBoxHandle*                              txtPetSP;                                                 // 0x006C(0x0004)
	class UTextBoxHandle*                              txtLvName;                                                // 0x0070(0x0004)
	class UTextBoxHandle*                              txtPhysicalAttack;                                        // 0x0074(0x0004)
	class UTextBoxHandle*                              txtPhysicalDefense;                                       // 0x0078(0x0004)
	class UTextBoxHandle*                              txtHitRate;                                               // 0x007C(0x0004)
	class UTextBoxHandle*                              txtCriticalRate;                                          // 0x0080(0x0004)
	class UTextBoxHandle*                              txtPhysicalAttackSpeed;                                   // 0x0084(0x0004)
	class UTextBoxHandle*                              txtSoulShotCosume;                                        // 0x0088(0x0004)
	class UTextBoxHandle*                              txtMagicalAttack;                                         // 0x008C(0x0004)
	class UTextBoxHandle*                              txtMagicDefense;                                          // 0x0090(0x0004)
	class UTextBoxHandle*                              txtPhysicalAvoid;                                         // 0x0094(0x0004)
	class UTextBoxHandle*                              txtMovingSpeed;                                           // 0x0098(0x0004)
	class UTextBoxHandle*                              txtMagicCastingSpeed;                                     // 0x009C(0x0004)
	class UTextBoxHandle*                              txtSpiritShotConsume;                                     // 0x00A0(0x0004)
	class UItemWindowHandle*                           PetActionWnd;                                             // 0x00A4(0x0004)
	class UItemWindowHandle*                           PetInvenWnd;                                              // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PetWnd");
		return ptr;
	}


	void STATIC_HandlePetInventoryItemUpdate(const struct FString& param);
	void STATIC_HandlePetInventoryItemList(const struct FString& param);
	void STATIC_HandlePetInventoryItemStart();
	void STATIC_HandleActionPetList(const struct FString& param);
	void STATIC_HandleActionPetListStart();
	void STATIC_HandlePetShow();
	void STATIC_HandlePetInfoUpdate();
	void STATIC_HandlePetSummonedStatusClose();
	void STATIC_SetVisibleNameBtn(bool bShow);
	void STATIC_HandlePetShowNameBtn(const struct FString& param);
	void STATIC_HandleRegPetName(const struct FString& param);
	void STATIC_ClearInvenWnd();
	void STATIC_ClearActionWnd();
	void Clear();
	void STATIC_OnRClickItem(const struct FString& strID, int Index);
	void STATIC_OnDBClickItem(const struct FString& strID, int Index);
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnNameClick();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleDialogOK();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_HandleLanguageChanged();
	void STATIC_OnDropItem(const struct FString& strTarget, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnShow();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SystemTutorialWnd
// 0x0060 (0x009C - 0x003C)
class USystemTutorialWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	TArray<class UButtonHandle*>                       TutorialBtnWnd;                                           // 0x0040(0x000C) (NeedCtorLink)
	class UWindowHandle*                               SystemTutorialBtnWnd;                                     // 0x004C(0x0004)
	class UTextBoxHandle*                              TutorialTitle;                                            // 0x0050(0x0004)
	class UTextBoxHandle*                              TutorialContent;                                          // 0x0054(0x0004)
	class UButtonHandle*                               BtnClear;                                                 // 0x0058(0x0004)
	int                                                g_nCurrentViewedID;                                       // 0x005C(0x0004)
	TArray<int>                                        G_TutorialStr;                                            // 0x0060(0x000C) (NeedCtorLink)
	TArray<int>                                        G_TutorialText;                                           // 0x006C(0x000C) (NeedCtorLink)
	TArray<int>                                        iconID;                                                   // 0x0078(0x000C) (NeedCtorLink)
	TArray<int>                                        iconTitle;                                                // 0x0084(0x000C) (NeedCtorLink)
	TArray<int>                                        iconText;                                                 // 0x0090(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SystemTutorialWnd");
		return ptr;
	}


	void STATIC_FillTutorialList();
	void STATIC_BubbleData(int A);
	void STATIC_ShowTutorialIcon(int A, int B, int C);
	void STATIC_OnTutorialCondition(int CurrentEvent);
	void STATIC_ClearCurrentID();
	void STATIC_OnClickButton(const struct FString& btnName);
	void STATIC_LaunchTutorial(int Id, int Title, int Msg);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void Initialize();
	void STATIC_OnLoad();
	void OnStart();
	void STATIC_OnEnterState(const struct FName& a_PrevStateName);
};


// Class Interface.AuctionWnd
// 0x0238 (0x0274 - 0x003C)
class UAuctionWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              txtRemainStr;                                             // 0x0040(0x0004)
	class UTextBoxHandle*                              txtTimeHour;                                              // 0x0044(0x0004)
	class UTextBoxHandle*                              txtTimeMin;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              txtTimeSec;                                               // 0x004C(0x0004)
	class UTextBoxHandle*                              txtHighBid;                                               // 0x0050(0x0004)
	class UTextBoxHandle*                              txtMyAdenaStr;                                            // 0x0054(0x0004)
	class UTextBoxHandle*                              txtMyAdena;                                               // 0x0058(0x0004)
	class UTextBoxHandle*                              txtItemInfoStr;                                           // 0x005C(0x0004)
	class UButtonHandle*                               BtnBid1;                                                  // 0x0060(0x0004)
	class UButtonHandle*                               BtnBid2;                                                  // 0x0064(0x0004)
	class UButtonHandle*                               BtnBid3;                                                  // 0x0068(0x0004)
	class UButtonHandle*                               BtnBid4;                                                  // 0x006C(0x0004)
	class UButtonHandle*                               BtnBidInput;                                              // 0x0070(0x0004)
	class UTextBoxHandle*                              txtHighBidStr;                                            // 0x0074(0x0004)
	class UTextureHandle*                              txtRemainTimeBg;                                          // 0x0078(0x0004)
	class UTextureHandle*                              ItemInfoBg;                                               // 0x007C(0x0004)
	class UTextureHandle*                              txtHighBidBg;                                             // 0x0080(0x0004)
	class UTextureHandle*                              txtMyAdenaBg;                                             // 0x0084(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0088(0x0004)
	class UItemWindowHandle*                           AuctionItem;                                              // 0x008C(0x0004)
	class UTextBoxHandle*                              txtItemDesc;                                              // 0x0090(0x0004)
	class UTextBoxHandle*                              txtItemName;                                              // 0x0094(0x0004)
	class UWindowHandle*                               areaScroll;                                               // 0x0098(0x0004)
	struct FINT64                                      m_myLastBidPrice;                                         // 0x009C(0x0008)
	struct FINT64                                      m_myBidPrice;                                             // 0x00A4(0x0008)
	struct FINT64                                      m_currentPrice;                                           // 0x00AC(0x0008)
	int                                                m_auctionID;                                              // 0x00B4(0x0004)
	struct FItemInfo                                   m_auctionItem;                                            // 0x00B8(0x01A8) (NeedCtorLink)
	int                                                bShowUI;                                                  // 0x0260(0x0004)
	int                                                iAuctionID;                                               // 0x0264(0x0004)
	struct FINT64                                      iCurrentPrice;                                            // 0x0268(0x0008)
	int                                                iRemainSecond;                                            // 0x0270(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AuctionWnd");
		return ptr;
	}


	void STATIC_HandleDialogOK();
	void STATIC_OnBtnBidInputClick();
	void STATIC_UpdateAuctionWnd();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnHide();
	void STATIC_ComputeScrollHeight(const struct FString& tempStr);
	void STATIC_InsertAuctionItem();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorShopWnd
// 0x0000 (0x005C - 0x005C)
class UManorShopWnd : public UShopWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorShopWnd");
		return ptr;
	}


	void STATIC_HandleOKButton();
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleOpenWindow(const struct FString& param);
	void STATIC_MoveItemTopToBottom(int Index, bool bAllItem);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.HennaInfoWnd
// 0x0008 (0x0044 - 0x003C)
class UHennaInfoWnd : public UUIScript
{
public:
	int                                                m_iState;                                                 // 0x003C(0x0004)
	int                                                m_iHennaID;                                               // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.HennaInfoWnd");
		return ptr;
	}


	void STATIC_ShowHennaInfoWnd(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.QuestListWnd
// 0x000C (0x0048 - 0x003C)
class UQuestListWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UListCtrlHandle*                             lstQuest;                                                 // 0x0040(0x0004)
	class UTextureHandle*                              QuestTooltip;                                             // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.QuestListWnd");
		return ptr;
	}


	void STATIC_InitQuestTooltip();
	void STATIC_ShowQuestTarget();
	void STATIC_HandleQuestInfo(const struct FString& param);
	void STATIC_HandleQuestInfoStart();
	void STATIC_OnClickListCtrlRecord(const struct FString& Id);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SummonedWnd
// 0x0048 (0x0084 - 0x003C)
class USummonedWnd : public UUICommonAPI
{
public:
	int                                                m_PetID;                                                  // 0x003C(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0040(0x0004)
	class UStatusBarHandle*                            HPBar;                                                    // 0x0044(0x0004)
	class UStatusBarHandle*                            MPBar;                                                    // 0x0048(0x0004)
	class UTextBoxHandle*                              txtLvName;                                                // 0x004C(0x0004)
	class UTextBoxHandle*                              txtPhysicalAttack;                                        // 0x0050(0x0004)
	class UTextBoxHandle*                              txtPhysicalDefense;                                       // 0x0054(0x0004)
	class UTextBoxHandle*                              txtHitRate;                                               // 0x0058(0x0004)
	class UTextBoxHandle*                              txtCriticalRate;                                          // 0x005C(0x0004)
	class UTextBoxHandle*                              txtPhysicalAttackSpeed;                                   // 0x0060(0x0004)
	class UTextBoxHandle*                              txtMagicalAttack;                                         // 0x0064(0x0004)
	class UTextBoxHandle*                              txtMagicDefense;                                          // 0x0068(0x0004)
	class UTextBoxHandle*                              txtPhysicalAvoid;                                         // 0x006C(0x0004)
	class UTextBoxHandle*                              txtMovingSpeed;                                           // 0x0070(0x0004)
	class UTextBoxHandle*                              txtMagicCastingSpeed;                                     // 0x0074(0x0004)
	class UTextBoxHandle*                              txtSoulShotCosume;                                        // 0x0078(0x0004)
	class UTextBoxHandle*                              txtSpiritShotConsume;                                     // 0x007C(0x0004)
	class UItemWindowHandle*                           SummonedActionWnd;                                        // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SummonedWnd");
		return ptr;
	}


	void STATIC_HandleActionSummonedList(const struct FString& param);
	void STATIC_HandlePetShow();
	void STATIC_HandlePetInfoUpdate();
	void STATIC_HandlePetSummonedStatusClose();
	void STATIC_ClearActionWnd();
	void Clear();
	void STATIC_HandleActionSummonedListStart();
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_HandleLanguageChanged();
	void STATIC_OnShow();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.StatusWnd
// 0x0060 (0x009C - 0x003C)
class UStatusWnd : public UUICommonAPI
{
public:
	int                                                m_UserID;                                                 // 0x003C(0x0004)
	unsigned long                                      m_bReceivedUserInfo : 1;                                  // 0x0040(0x0004)
	int                                                GlobalAlpha;                                              // 0x0044(0x0004)
	unsigned long                                      GlobalAlphaBool : 1;                                      // 0x0048(0x0004)
	unsigned long                                      AnimTexKill : 1;                                          // 0x0048(0x0004)
	int                                                m_Vitality;                                               // 0x004C(0x0004)
	unsigned long                                      AnimTexKillPremium : 1;                                   // 0x0050(0x0004)
	int                                                m_CurPremiumState;                                        // 0x0054(0x0004)
	unsigned long                                      m_AlphaIncrese : 1;                                       // 0x0058(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x005C(0x0004)
	class UStatusBarHandle*                            CPBar;                                                    // 0x0060(0x0004)
	class UStatusBarHandle*                            HPBar;                                                    // 0x0064(0x0004)
	class UStatusBarHandle*                            MPBar;                                                    // 0x0068(0x0004)
	class UStatusBarHandle*                            EXPBar;                                                   // 0x006C(0x0004)
	class UNameCtrlHandle*                             UserName;                                                 // 0x0070(0x0004)
	class UTextBoxHandle*                              StatusWnd_LevelTextBox;                                   // 0x0074(0x0004)
	class UTextureHandle*                              VitalityTex;                                              // 0x0078(0x0004)
	class UTextureHandle*                              LifeForceAnimTex_Left;                                    // 0x007C(0x0004)
	class UTextureHandle*                              LifeForceAnimTex_Center;                                  // 0x0080(0x0004)
	class UTextureHandle*                              LifeForceAnimTex_Right;                                   // 0x0084(0x0004)
	class UWindowHandle*                               Statustooltipwnd;                                         // 0x0088(0x0004)
	class UBarHandle*                                  VpDetailBar;                                              // 0x008C(0x0004)
	class UBarHandle*                                  barFATIGUE;                                               // 0x0090(0x0004)
	class UWindowHandle*                               LevelBoxTex;                                              // 0x0094(0x0004)
	class UWindowHandle*                               LevelBoxTexPremium;                                       // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.StatusWnd");
		return ptr;
	}


	void STATIC_HandlePremiumState(const struct FString& a_Param);
	void STATIC_HandleRegenStatus(const struct FString& a_Param);
	void STATIC_HandleUpdateInfo(const struct FString& param);
	void STATIC_HandleUpdateGauge(const struct FString& param, int type);
	void STATIC_HandleVitalityPointInfo(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	int STATIC_LevelOfVitality(int Vitality);
	void STATIC_UpdateVp(int Vitality);
	void STATIC_UpdateUserInfo();
	void STATIC_UpdateUserGauge(int type);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_InitAnimation();
	void STATIC_PlayAnimationPrem();
	void STATIC_PlayAnimation();
	void STATIC_OnTimer(int TimerID);
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMWnd
// 0x0030 (0x006C - 0x003C)
class UGMWnd : public UUICommonAPI
{
public:
	struct FColor                                      m_WhiteColor;                                             // 0x003C(0x0004)
	class UEditBoxHandle*                              m_hEditBox;                                               // 0x0040(0x0004)
	class UWindowHandle*                               m_hGMwnd;                                                 // 0x0044(0x0004)
	class UWindowHandle*                               m_hGMDetailStatusWnd;                                     // 0x0048(0x0004)
	class UWindowHandle*                               m_hGMInventoryWnd;                                        // 0x004C(0x0004)
	class UWindowHandle*                               m_hGMMagicSkillWnd;                                       // 0x0050(0x0004)
	class UWindowHandle*                               m_hGMQuestWnd;                                            // 0x0054(0x0004)
	class UWindowHandle*                               m_hGMWarehouseWnd;                                        // 0x0058(0x0004)
	class UWindowHandle*                               m_hGMClanWnd;                                             // 0x005C(0x0004)
	class UWindowHandle*                               m_hGMFindTreeWnd;                                         // 0x0060(0x0004)
	int                                                m_targetID;                                               // 0x0064(0x0004)
	class UWindowHandle*                               m_dialogWnd;                                              // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMWnd");
		return ptr;
	}


	void STATIC_OnClickChangeServerButton();
	void STATIC_OnClickForcePetitionButton();
	void STATIC_OnClickSkillListButton();
	void STATIC_OnClickItemListButton();
	void STATIC_OnClickNPCListButton();
	void STATIC_SendHome();
	void STATIC_OnClickSendHomeButton();
	void STATIC_OnClickPetitionButton();
	void STATIC_OnClickClanButton();
	void STATIC_OnClickStoreButton();
	void STATIC_OnClickInfoButton();
	void STATIC_OnClickQuestButton();
	void STATIC_OnClickMagicSkillButton();
	void STATIC_OnClickInventoryButton();
	void STATIC_OnClickDetailStatusButton();
	void STATIC_Recall();
	void STATIC_OnClickRecallButton();
	void STATIC_OnClickMoveButton();
	void STATIC_OnClickTeleButton();
	void STATIC_OnClickButton(const struct FString& a_ButtonID);
	void STATIC_HandleDialogCancel();
	void STATIC_HandleTargetUpdate();
	void STATIC_HandleDialogOK();
	void STATIC_HandleShowGMWnd();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UIEditor_FileManager
// 0x002C (0x0068 - 0x003C)
class UUIEditor_FileManager : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UListBoxHandle*                              lstDirs;                                                  // 0x0040(0x0004)
	class UListBoxHandle*                              lstFiles;                                                 // 0x0044(0x0004)
	class UButtonHandle*                               btnLoad;                                                  // 0x0048(0x0004)
	class UButtonHandle*                               btnSave;                                                  // 0x004C(0x0004)
	class UButtonHandle*                               btnMakeUC;                                                // 0x0050(0x0004)
	class UEditBoxHandle*                              txtPath;                                                  // 0x0054(0x0004)
	class UWindowHandle*                               WorkSheet;                                                // 0x0058(0x0004)
	struct FString                                     m_CurPath;                                                // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UIEditor_FileManager");
		return ptr;
	}


	void STATIC_MakeUC(const struct FString& Filename);
	void STATIC_SaveXMLFile(const struct FString& Filename);
	void STATIC_OnMakeClick();
	void STATIC_OnSaveClick();
	void STATIC_OnLoadClick();
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_OnClickButton(const struct FString& Name);
	struct FString STATIC_GetParentDirectory(const struct FString& Path);
	void STATIC_Update();
	void STATIC_OnDBClickListBoxItem(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitControlItem();
	void STATIC_InitHandle();
	void STATIC_UpdateFileList();
	void STATIC_UpdateDirectory();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyMatchWndCommon
// 0x0000 (0x003C - 0x003C)
class UPartyMatchWndCommon : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyMatchWndCommon");
		return ptr;
	}


	struct FString STATIC_GetAmbiguousLevelString(int a_Level, bool a_HasSpace);
};


// Class Interface.UnionMatchingWnd
// 0x009C (0x00D8 - 0x003C)
class UUnionMatchingWnd : public UPartyMatchWndCommon
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               PartyMatchWnd;                                            // 0x0040(0x0004)
	class UWindowHandle*                               PartyMatchMakeRoomWnd;                                    // 0x0044(0x0004)
	class UTextureHandle*                              ListDeco;                                                 // 0x0048(0x0004)
	class UTextBoxHandle*                              RoomNumberTitle;                                          // 0x004C(0x0004)
	class UTextBoxHandle*                              RoomNumber;                                               // 0x0050(0x0004)
	class UTextBoxHandle*                              RoomTitleTitle;                                           // 0x0054(0x0004)
	class UTextBoxHandle*                              RoomTitle;                                                // 0x0058(0x0004)
	class UTextBoxHandle*                              LocationTitle;                                            // 0x005C(0x0004)
	class UTextBoxHandle*                              Location;                                                 // 0x0060(0x0004)
	class UTextBoxHandle*                              LootingMethodTitle;                                       // 0x0064(0x0004)
	class UTextBoxHandle*                              LootingMethod;                                            // 0x0068(0x0004)
	class UTextBoxHandle*                              PartyMemberCountTitle;                                    // 0x006C(0x0004)
	class UTextBoxHandle*                              PartyMemberCount;                                         // 0x0070(0x0004)
	class UTextBoxHandle*                              LevelLimitTitle;                                          // 0x0074(0x0004)
	class UTextBoxHandle*                              LevelLimit;                                               // 0x0078(0x0004)
	class UListCtrlHandle*                             PartyMemberListCtrl;                                      // 0x007C(0x0004)
	class UTextListBoxHandle*                          PartyRoomChatWindow;                                      // 0x0080(0x0004)
	class UEditBoxHandle*                              PartyRoomChatEditBox;                                     // 0x0084(0x0004)
	class UButtonHandle*                               RoomSettingButton;                                        // 0x0088(0x0004)
	class UButtonHandle*                               btnUnionInfo;                                             // 0x008C(0x0004)
	class UButtonHandle*                               BanButton;                                                // 0x0090(0x0004)
	class UButtonHandle*                               InviteButton;                                             // 0x0094(0x0004)
	class UButtonHandle*                               btnUnionInvite;                                           // 0x0098(0x0004)
	class UButtonHandle*                               ExitButton;                                               // 0x009C(0x0004)
	class UTextureHandle*                              TitleBg;                                                  // 0x00A0(0x0004)
	class UTextureHandle*                              ListBg;                                                   // 0x00A4(0x0004)
	class UTextureHandle*                              ChatWndBg;                                                // 0x00A8(0x0004)
	int                                                RoomNumberNum;                                            // 0x00AC(0x0004)
	int                                                CurPartyMemberCount;                                      // 0x00B0(0x0004)
	int                                                MaxPartyMemberCount;                                      // 0x00B4(0x0004)
	int                                                minLevel;                                                 // 0x00B8(0x0004)
	int                                                maxLevel;                                                 // 0x00BC(0x0004)
	int                                                LootingMethodID;                                          // 0x00C0(0x0004)
	int                                                RoomZoneID;                                               // 0x00C4(0x0004)
	int                                                MyMembershipType;                                         // 0x00C8(0x0004)
	struct FString                                     strRoomTitle;                                             // 0x00CC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UnionMatchingWnd");
		return ptr;
	}


	void STATIC_OnSendPacketWhenHiding();
	void STATIC_UpdateMyMembershipType();
	void STATIC_ExitPartyRoom();
	void STATIC_OnExitButtonClick();
	void STATIC_OnbtnUnionInviteClick();
	void STATIC_OnInviteButtonClick();
	void STATIC_OnBanButtonClick();
	void STATIC_OnbtnUnionInfoClick();
	void STATIC_OnRoomSettingButtonClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandleMpccRoomMemberInfo(const struct FString& param);
	void STATIC_HandleMpccRoomMemberStart(const struct FString& param);
	void STATIC_UpdateData(bool a_ToControl);
	void STATIC_RemoveMember(int a_MemberID);
	void STATIC_AddMember(int a_MemberID, const struct FString& a_MemberName, int a_ClassID, int a_Level, int a_ZoneID, int a_MembershipType);
	void STATIC_HandleManageMpccRoomMember(const struct FString& param);
	void STATIC_HandleDismissMpccRoom(const struct FString& param);
	void STATIC_HandleMpccRoomInfo(const struct FString& param);
	void STATIC_HandleMpccRoomChatMessage(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& param);
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.FishViewportWnd
// 0x003C (0x0078 - 0x003C)
class UFishViewportWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hFishViewportWnd;                                       // 0x0048(0x0004)
	class UWindowHandle*                               m_hFishHPBarEffect;                                       // 0x004C(0x0004)
	class UBarHandle*                                  m_hFishHPBar;                                             // 0x0050(0x0004)
	class UBarHandle*                                  m_hFishHPBarFake;                                         // 0x0054(0x0004)
	class UTextBoxHandle*                              m_hTbSec;                                                 // 0x0058(0x0004)
	class UWindowHandle*                               m_hTexClock;                                              // 0x005C(0x0004)
	class UWindowHandle*                               m_hWndStatus;                                             // 0x0060(0x0004)
	class UTextBoxHandle*                              m_hTbStatus;                                              // 0x0064(0x0004)
	class UTextBoxHandle*                              m_hTbDeltaHP;                                             // 0x0068(0x0004)
	int                                                m_OriginalFishHP;                                         // 0x006C(0x0004)
	int                                                m_OriginalFishTime;                                       // 0x0070(0x0004)
	int                                                m_CurrentFishHP;                                          // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.FishViewportWnd");
		return ptr;
	}


	void STATIC_OnTimer(int TimerID);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_ShowFishStringWithPenalty(int strID, int DeltaHP, int Penalty);
	void STATIC_ShowFishString(int strID, int DeltaHP);
	void showeffect();
	void STATIC_HandleSetFishStatus(const struct FString& param);
	void STATIC_HandleInitFishStatus(const struct FString& param);
	void STATIC_HideHPBarNEtc();
	void STATIC_ShowHPBarNEtc();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.FlightTransformCtrlWnd
// 0x0030 (0x006C - 0x003C)
class UFlightTransformCtrlWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               ShortcutWnd;                                              // 0x0040(0x0004)
	class URadarMapWnd*                                scriptRadarMapWnd;                                        // 0x0044(0x0004)
	class UCheckBoxHandle*                             Chk_EnterChatting;                                        // 0x0048(0x0004)
	class UButtonHandle*                               LockBtn;                                                  // 0x004C(0x0004)
	class UButtonHandle*                               UnlockBtn;                                                // 0x0050(0x0004)
	class UButtonHandle*                               JoypadBtn;                                                // 0x0054(0x0004)
	class UTextureHandle*                              SelectTex;                                                // 0x0058(0x0004)
	class UShortcutWnd*                                scriptShortcutWnd;                                        // 0x005C(0x0004)
	int                                                i;                                                        // 0x0060(0x0004)
	unsigned long                                      preEnterChattingOption : 1;                               // 0x0064(0x0004)
	unsigned long                                      isNowActiveFlightTransShortcut : 1;                       // 0x0064(0x0004)
	unsigned long                                      m_IsLocked : 1;                                           // 0x0064(0x0004)
	int                                                preSlot;                                                  // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.FlightTransformCtrlWnd");
		return ptr;
	}


	void STATIC_ShowAirTutorial(int SystemMsgID);
	void STATIC_OnReserveShortCut(const struct FString& a_Param);
	void STATIC_ExecuteShortcutCommandBySlot(const struct FString& a_Param);
	void STATIC_HandleShortcutPageUpdate(const struct FString& param);
	void STATIC_HandleShortcutClear();
	void STATIC_HandleShortcutUpdate(const struct FString& param);
	void STATIC_ShortCutUpdateAll();
	void STATIC_OnFlightTransformState(const struct FString& a_Param);
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_updateLockButton();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ReplayLogoWnd
// 0x0018 (0x0054 - 0x003C)
class UReplayLogoWnd : public UUIScript
{
public:
	struct FString                                     m_strLineage2LogoTexture;                                 // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     m_strMiniLogoTexture;                                     // 0x0048(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd");
		return ptr;
	}


	void STATIC_OnLoad();
};


// Class Interface.LoadingWnd
// 0x002C (0x0068 - 0x003C)
class ULoadingWnd : public UUIScript
{
public:
	struct FString                                     LoadingTexture15;                                         // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     LoadingTexture18;                                         // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     LoadingTextureFree;                                       // 0x0054(0x000C) (NeedCtorLink)
	class UTextureHandle*                              blackbillboard;                                           // 0x0060(0x0004)
	class UTextureHandle*                              loadingtexture;                                           // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd");
		return ptr;
	}


	void STATIC_CheckResolution();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CalculatorWnd
// 0x000C (0x0048 - 0x003C)
class UCalculatorWnd : public UUICommonAPI
{
public:
	int                                                m_Operand1;                                               // 0x003C(0x0004)
	TEnumAsByte<EOperator>                             m_Operator;                                               // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	class UEditBoxHandle*                              m_ResultEditBox;                                          // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CalculatorWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnKeyUp(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key);
	void STATIC_ProcessBtn(TEnumAsByte<EInputKey> iValue);
	void STATIC_ProcessEqual();
	void STATIC_ProcessOperator(TEnumAsByte<EOperator> a_Operator);
	void STATIC_ProcessNumeric(int a_Number);
	void STATIC_SetNumeric(int a_Number);
	void STATIC_AddNumeric(int a_Number);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_Backspace();
	int STATIC_Calc(int A, int B, TEnumAsByte<EOperator> Op);
	int STATIC_GetOperand();
	struct FString GetString();
	void STATIC_SetString(const struct FString& Str);
	void STATIC_AddString(const struct FString& Str);
	void STATIC_SetOperator(TEnumAsByte<EOperator> Op);
	void STATIC_SetOperand1(int a_Operand);
	void STATIC_CE();
	void STATIC_InitCalculator();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RecipeBuyManufactureWnd
// 0x001C (0x0058 - 0x003C)
class URecipeBuyManufactureWnd : public UUICommonAPI
{
public:
	int                                                m_merchantID;                                             // 0x003C(0x0004)
	int                                                m_RecipeID;                                               // 0x0040(0x0004)
	int                                                m_SuccessRate;                                            // 0x0044(0x0004)
	struct FINT64                                      m_Adena;                                                  // 0x0048(0x0008)
	int                                                m_MaxMP;                                                  // 0x0050(0x0004)
	class UBarHandle*                                  MPBar;                                                    // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RecipeBuyManufactureWnd");
		return ptr;
	}


	void STATIC_HandleInventoryItem(const struct FString& param);
	void STATIC_SetMPBar(int currentMP);
	void STATIC_ReceiveRecipeShopSellList(int MerchantID, int RecipeID, int currentMP, int MaxMP, int MakingResult, const struct FINT64& Adena);
	void Clear();
	void STATIC_CloseWindow();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RecipeManufactureWnd
// 0x001C (0x0058 - 0x003C)
class URecipeManufactureWnd : public UUICommonAPI
{
public:
	int                                                m_RecipeID;                                               // 0x003C(0x0004)
	int                                                m_SuccessRate;                                            // 0x0040(0x0004)
	int                                                m_RecipeBookClass;                                        // 0x0044(0x0004)
	unsigned long                                      m_MultipleProduct : 1;                                    // 0x0048(0x0004)
	int                                                m_MaxMP;                                                  // 0x004C(0x0004)
	int                                                m_PlayerID;                                               // 0x0050(0x0004)
	class UBarHandle*                                  MPBar;                                                    // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RecipeManufactureWnd");
		return ptr;
	}


	void STATIC_HandleInventoryItem(const struct FString& param);
	void STATIC_SetMPBar(int currentMP);
	void STATIC_ReceiveRecipeItemMakeInfo(int RecipeID, int currentMP, int MaxMP, int MakingResult, int type);
	void Clear();
	void STATIC_CloseWindow();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.FlightTeleportWnd
// 0x0074 (0x00B0 - 0x003C)
class UFlightTeleportWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               FlightShipCtrlWnd;                                        // 0x0040(0x0004)
	class UMinimapCtrlHandle*                          FlightMap;                                                // 0x0044(0x0004)
	class UButtonHandle*                               btnMyPos;                                                 // 0x0048(0x0004)
	class UButtonHandle*                               btnGo;                                                    // 0x004C(0x0004)
	class UButtonHandle*                               btnCancle;                                                // 0x0050(0x0004)
	class UTextBoxHandle*                              TargetTxt;                                                // 0x0054(0x0004)
	class UTextBoxHandle*                              CostTxt;                                                  // 0x0058(0x0004)
	int                                                i;                                                        // 0x005C(0x0004)
	int                                                selectID;                                                 // 0x0060(0x0004)
	int                                                m_airportID;                                              // 0x0064(0x0004)
	TArray<int>                                        m_arrTelID;                                               // 0x0068(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrAirportID;                                           // 0x0074(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrFuel;                                                // 0x0080(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrX;                                                   // 0x008C(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrY;                                                   // 0x0098(0x000C) (NeedCtorLink)
	TArray<int>                                        m_arrZ;                                                   // 0x00A4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.FlightTeleportWnd");
		return ptr;
	}


	int STATIC_FindArrIdxByID(int Id);
	void STATIC_SetLoc(int Id);
	void STATIC_UnSelectLoc(int Id);
	void STATIC_SelectLoc(int Id, bool isUpdate);
	void STATIC_SetMeCenter();
	void STATIC_OnBtnGo();
	void STATIC_OnBtnMyPos();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnMinimapRegionInfoBtnClick(const struct FString& a_Param);
	void STATIC_OnAirShipTeleportList(const struct FString& a_Param);
	void STATIC_OnAirShipTeleportListStart(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void Clear();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
	int STATIC_FindSystemStrByID(int Id, int AirportID);
};


// Class Interface.ScenePlayerWnd
// 0x004C (0x0088 - 0x003C)
class UScenePlayerWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               wndFileManager;                                           // 0x0040(0x0004)
	class UListBoxHandle*                              lstDirs;                                                  // 0x0044(0x0004)
	class UListBoxHandle*                              lstFiles;                                                 // 0x0048(0x0004)
	class UButtonHandle*                               btnNew;                                                   // 0x004C(0x0004)
	class UButtonHandle*                               btnLoad;                                                  // 0x0050(0x0004)
	class UEditBoxHandle*                              txtPath;                                                  // 0x0054(0x0004)
	class UButtonHandle*                               btnSave;                                                  // 0x0058(0x0004)
	class UTextureHandle*                              backTex2;                                                 // 0x005C(0x0004)
	class UTextureHandle*                              backTex1;                                                 // 0x0060(0x0004)
	class UButtonHandle*                               btnPlay;                                                  // 0x0064(0x0004)
	class UPropertyControllerHandle*                   ctlProperty;                                              // 0x0068(0x0004)
	class UWindowHandle*                               areaScroll;                                               // 0x006C(0x0004)
	class UEditBoxHandle*                              txtEnd;                                                   // 0x0070(0x0004)
	struct FString                                     m_CurPath;                                                // 0x0074(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_CurScenePlayerWnd;                                      // 0x0080(0x0004)
	class UScenePlayerCtrlHandle*                      m_ScenePlayCtrl;                                          // 0x0084(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ScenePlayerWnd");
		return ptr;
	}


	void STATIC_OnbtnPlayClick();
	void STATIC_OnbtnSaveClick();
	void STATIC_OnbtnLoadClick();
	void STATIC_OnbtnNewClick();
	void STATIC_LoadFromFile(const struct FString& Filename);
	void STATIC_SaveToFile(const struct FString& Filename);
	void STATIC_OnPropertyControllerResize(int a_Height);
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_OnDBClickListBoxItem(const struct FString& strID);
	struct FString STATIC_GetParentDirectory(const struct FString& Path);
	void STATIC_Update();
	void STATIC_UpdateFileList();
	void STATIC_UpdateDirectory();
	void STATIC_SetProperty(class UWindowHandle* a_hWnd);
	void STATIC_DeleteCurrentScenePlayer();
	void STATIC_InitControlItem();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SkillTrainClanTreeWnd
// 0x00C8 (0x0104 - 0x003C)
class USkillTrainClanTreeWnd : public UUICommonAPI
{
public:
	int                                                m_iType;                                                  // 0x003C(0x0004)
	int                                                m_iID;                                                    // 0x0040(0x0004)
	int                                                m_iLevel;                                                 // 0x0044(0x0004)
	int                                                ClanClickedID;                                            // 0x0048(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x004C(0x0004)
	class UTextureHandle*                              texIcon;                                                  // 0x0050(0x0004)
	class UTextBoxHandle*                              txtSkillDesc;                                             // 0x0054(0x0004)
	class UTextBoxHandle*                              txtName;                                                  // 0x0058(0x0004)
	class UTextBoxHandle*                              txtLvString;                                              // 0x005C(0x0004)
	class UTextBoxHandle*                              txtLevel;                                                 // 0x0060(0x0004)
	class UTextBoxHandle*                              txtOperateType;                                           // 0x0064(0x0004)
	class UTextBoxHandle*                              txtMPString;                                              // 0x0068(0x0004)
	class UTextBoxHandle*                              txtColone1;                                               // 0x006C(0x0004)
	class UTextBoxHandle*                              txtMP;                                                    // 0x0070(0x0004)
	class UTextBoxHandle*                              txtCastRangeString;                                       // 0x0074(0x0004)
	class UTextBoxHandle*                              txtColoneCastRange;                                       // 0x0078(0x0004)
	class UTextBoxHandle*                              txtCastRange;                                             // 0x007C(0x0004)
	class UTextBoxHandle*                              txtNeedSPString;                                          // 0x0080(0x0004)
	class UTextBoxHandle*                              txtColone3;                                               // 0x0084(0x0004)
	class UTextBoxHandle*                              txtNeedSP;                                                // 0x0088(0x0004)
	class UTextBoxHandle*                              txtNeedItemName;                                          // 0x008C(0x0004)
	class UTextBoxHandle*                              txtSPString;                                              // 0x0090(0x0004)
	class UTextBoxHandle*                              txtSP;                                                    // 0x0094(0x0004)
	class UButtonHandle*                               btnLearn;                                                 // 0x0098(0x0004)
	class UButtonHandle*                               btnGoBackList;                                            // 0x009C(0x0004)
	class UTextBoxHandle*                              txtCondition;                                             // 0x00A0(0x0004)
	class UTextBoxHandle*                              txtSelectTree;                                            // 0x00A4(0x0004)
	class UTextBoxHandle*                              txtDescription;                                           // 0x00A8(0x0004)
	class UTextureHandle*                              nowSpBg;                                                  // 0x00AC(0x0004)
	class UTextureHandle*                              texNeedItemIcon;                                          // 0x00B0(0x0004)
	class UTextureHandle*                              requestBg;                                                // 0x00B4(0x0004)
	class UTextureHandle*                              texSelectTree;                                            // 0x00B8(0x0004)
	class UTextureHandle*                              texOutlineDown;                                           // 0x00BC(0x0004)
	class UTextureHandle*                              texOutlineTopUp;                                          // 0x00C0(0x0004)
	class UButtonHandle*                               Clan_OrgIcon[0x8];                                        // 0x00C4(0x0004)
	class UTextureHandle*                              Clan_OrgHighLight[0x8];                                   // 0x00E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SkillTrainClanTreeWnd");
		return ptr;
	}


	int STATIC_GetClanTypeFromIndex(int Index);
	void STATIC_ShowNeedItems();
	void STATIC_OnShow();
	void STATIC_AddSkillTrainInfoExtend(const struct FString& strIconName, const struct FString& strName, const struct FINT64& iNumOfItem);
	void STATIC_AddSkillTrainInfo(const struct FString& strIconName, const struct FString& strName, int iID, int iLevel, const struct FString& strOperateType, int iMPConsume, int iCastRange, const struct FString& strDescription, int iSPConsume, const struct FINT64& iEXPConsume, const struct FString& strEnchantName, const struct FString& strEnchantDesc, int iPercent);
	void STATIC_ShowSkillTrainClanTreeWnd();
	void STATIC_EnableProperClanSubWnd(int iID, int iLevel);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnbtnLearnClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_DisableAllClanTreeWnd();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SkillTrainInfoWnd
// 0x000C (0x0048 - 0x003C)
class USkillTrainInfoWnd : public UUICommonAPI
{
public:
	int                                                m_iType;                                                  // 0x003C(0x0004)
	int                                                m_iID;                                                    // 0x0040(0x0004)
	int                                                m_iLevel;                                                 // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SkillTrainInfoWnd");
		return ptr;
	}


	void STATIC_ShowNeedItems();
	void STATIC_OnShow();
	void STATIC_AddSkillTrainInfoExtend(const struct FString& strIconName, const struct FString& strName, const struct FINT64& iNumOfItem);
	void STATIC_AddSkillTrainInfo(const struct FString& strIconName, const struct FString& strName, int iID, int iLevel, const struct FString& strOperateType, int iMPConsume, int iCastRange, const struct FString& strDescription, int iSPConsume, const struct FINT64& iEXPConsume, const struct FString& strEnchantName, const struct FString& strEnchantDesc, int iPercent);
	void STATIC_ShowSkillTrainInfoWnd();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLearn();
	void STATIC_OnClickButton(const struct FString& strBtnID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.OnScreenMessageWnd
// 0x0060 (0x009C - 0x003C)
class UOnScreenMessageWnd : public UUIScript
{
public:
	struct FString                                     currentwnd1;                                              // 0x003C(0x000C) (NeedCtorLink)
	unsigned long                                      onshowstat1 : 1;                                          // 0x0048(0x0004)
	unsigned long                                      onshowstat2 : 1;                                          // 0x0048(0x0004)
	int                                                timerset1;                                                // 0x004C(0x0004)
	int                                                globalAlphavalue1;                                        // 0x0050(0x0004)
	int                                                globalAlphavalue2;                                        // 0x0054(0x0004)
	int                                                globalDuration;                                           // 0x0058(0x0004)
	int                                                droprate;                                                 // 0x005C(0x0004)
	int                                                moveval;                                                  // 0x0060(0x0004)
	int                                                moveval2;                                                 // 0x0064(0x0004)
	struct FString                                     MovedWndName;                                             // 0x0068(0x000C) (NeedCtorLink)
	int                                                m_TimerCount;                                             // 0x0074(0x0004)
	unsigned long                                      linedivided : 1;                                          // 0x0078(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd1;                                      // 0x007C(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd2;                                      // 0x0080(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd3;                                      // 0x0084(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd4;                                      // 0x0088(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd5;                                      // 0x008C(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd6;                                      // 0x0090(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd7;                                      // 0x0094(0x0004)
	class UWindowHandle*                               OnScreenMessageWnd8;                                      // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OnScreenMessageWnd");
		return ptr;
	}


	void STATIC_ValidateSystemMsg(int Index, const struct FString& StringTxt1, const struct FString& StringTxt2);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void FadeOut(const struct FString& WndName);
	void FadeIn(const struct FString& WndName);
	void STATIC_ShowMsg(int WndNum, const struct FString& TextValue, int Duration, int Animation, int FontType, int BackgroundType, int ColorR, int ColorG, int ColorB);
	void STATIC_ResetAllMessage();
	void STATIC_OnHide();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnTick();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorCropInfoSettingWnd
// 0x001C (0x0058 - 0x003C)
class UManorCropInfoSettingWnd : public UUICommonAPI
{
public:
	int                                                m_ManorID;                                                // 0x003C(0x0004)
	struct FINT64                                      m_SumOfDefaultPrice;                                      // 0x0040(0x0008)
	struct FString                                     m_WindowName;                                             // 0x0048(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hManorCropInfoSettingWndManorCropInfoSettingListCtrl;   // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorCropInfoSettingWnd");
		return ptr;
	}


	void STATIC_HandleChangeValue(const struct FString& a_Param);
	void STATIC_OnChangeBtn();
	void STATIC_CalculateSumOfDefaultPrice();
	void STATIC_HandleAddItem(const struct FString& a_Param);
	void STATIC_OnOk();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_DeleteAll();
	void STATIC_HandleShow(const struct FString& a_Param);
	void STATIC_HandleSetToday();
	void STATIC_HandleStop();
	void STATIC_HandleDialogOK();
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UnionWnd
// 0x003C (0x0078 - 0x003C)
class UUnionWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bChOpened : 1;                                          // 0x003C(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0040(0x0004)
	class UWindowHandle*                               PartyMemberWnd;                                           // 0x0044(0x0004)
	class UTextBoxHandle*                              txtOwner;                                                 // 0x0048(0x0004)
	class UTextBoxHandle*                              txtRoutingType;                                           // 0x004C(0x0004)
	class UTextBoxHandle*                              txtCountInfo;                                             // 0x0050(0x0004)
	class UButtonHandle*                               banBtn;                                                   // 0x0054(0x0004)
	class UButtonHandle*                               quitBtn;                                                  // 0x0058(0x0004)
	class UListCtrlHandle*                             lstParty;                                                 // 0x005C(0x0004)
	struct FString                                     m_UserName;                                               // 0x0060(0x000C) (NeedCtorLink)
	int                                                m_PartyNum;                                               // 0x006C(0x0004)
	int                                                m_PartyMemberNum;                                         // 0x0070(0x0004)
	int                                                m_SearchedMasterID;                                       // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UnionWnd");
		return ptr;
	}


	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_UpdatePartyMemberCount(int MasterID, int MemberCount);
	void STATIC_UpdateCountInfo();
	int STATIC_FindMasterID(int MasterID);
	void STATIC_UpdateRoutingType(int type);
	void STATIC_HandleCommandChannelRoutingType(const struct FString& param);
	void STATIC_HandleCommandChannelPartyUpdate(const struct FString& param);
	void STATIC_HandleCommandChannelPartyList(const struct FString& param);
	void STATIC_HandleCommandChannelInfo(const struct FString& param);
	void STATIC_HandleCommandChannelEnd();
	void STATIC_HandleCommandChannelStart();
	void STATIC_RequestPartyMember(bool bShowWindow);
	void STATIC_OnMemberInfoClick();
	void STATIC_OnOutClick();
	void STATIC_OnBanClick();
	void STATIC_RequestNewInfo();
	void STATIC_OnRefreshClick();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_MemberClear();
	void Clear();
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorSeedInfoSettingWnd
// 0x001C (0x0058 - 0x003C)
class UManorSeedInfoSettingWnd : public UUICommonAPI
{
public:
	int                                                m_ManorID;                                                // 0x003C(0x0004)
	struct FINT64                                      m_SumOfDefaultPrice;                                      // 0x0040(0x0008)
	struct FString                                     m_WindowName;                                             // 0x0048(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hManorSeedInfoSettingWndManorSeedInfoSettingListCtrl;   // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorSeedInfoSettingWnd");
		return ptr;
	}


	void STATIC_CalculateSumOfDefaultPrice();
	void STATIC_HandleAddItem(const struct FString& a_Param);
	void STATIC_OnChangeBtn();
	void STATIC_OnOk();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_DeleteAll();
	void STATIC_HandleChangeValue(const struct FString& a_Param);
	void STATIC_HandleShow(const struct FString& a_Param);
	void STATIC_HandleSetToday();
	void STATIC_HandleStop();
	void STATIC_HandleDialogOK();
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorInfoWnd
// 0x0010 (0x004C - 0x003C)
class UManorInfoWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bTime : 1;                                              // 0x003C(0x0004)
	int                                                m_MerchantOrChamberlain;                                  // 0x0040(0x0004)
	int                                                m_ManorID;                                                // 0x0044(0x0004)
	int                                                m_MyManorID;                                              // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorInfoWnd");
		return ptr;
	}


	void STATIC_RequestSelectedData(const struct FString& WindowName, int Index);
	void STATIC_OnComboBoxItemSelected(const struct FString& sName, int Index);
	void STATIC_OnClickInfoTab(const struct FString& TabName);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleDefaultAdd(const struct FString& a_Param);
	void STATIC_HandleDefaultInfoShow(const struct FString& a_Param);
	void STATIC_HandleCropAdd(const struct FString& a_Param);
	void STATIC_HandleCropInfoShow(const struct FString& a_Param);
	void STATIC_HandleSeedAdd(const struct FString& a_Param);
	void STATIC_HandleSeedInfoShow(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorCropSellWnd
// 0x0010 (0x004C - 0x003C)
class UManorCropSellWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hManorCropSellWndManorCropSellListCtrl;                 // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorCropSellWnd");
		return ptr;
	}


	void STATIC_HandleSetCropSell(const struct FString& a_Param);
	void STATIC_HandleAddItem(const struct FString& a_Param);
	void STATIC_OnChangeBtn();
	void STATIC_OnSellBtn();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_DeleteAll();
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.DominionWarInfoWnd
// 0x0150 (0x018C - 0x003C)
class UDominionWarInfoWnd : public UUICommonAPI
{
public:
	struct FString                                     ClanTexList[0x11];                                        // 0x003C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               Me;                                                       // 0x0108(0x0004)
	class UWindowHandle*                               DeclaredWarInfo;                                          // 0x010C(0x0004)
	class UListCtrlHandle*                             ListCtrlTerritoryWarList;                                 // 0x0110(0x0004)
	class UTextBoxHandle*                              txtCurrentTerritory;                                      // 0x0114(0x0004)
	class UTextBoxHandle*                              txtLordNameTitle;                                         // 0x0118(0x0004)
	class UTextBoxHandle*                              txtLordName;                                              // 0x011C(0x0004)
	class UTextBoxHandle*                              txtClanNameTitle;                                         // 0x0120(0x0004)
	class UTextBoxHandle*                              txtClanName;                                              // 0x0124(0x0004)
	class UTextBoxHandle*                              txtAlleyNameTitle;                                        // 0x0128(0x0004)
	class UTextBoxHandle*                              txtAlleyName;                                             // 0x012C(0x0004)
	class UTabHandle*                                  TabCtrl;                                                  // 0x0130(0x0004)
	class UTextBoxHandle*                              txtTerritoryWarTimeTitle;                                 // 0x0134(0x0004)
	class UTextBoxHandle*                              txtCurrentTimeTitle;                                      // 0x0138(0x0004)
	class UTextBoxHandle*                              txtTerritoryWarTime;                                      // 0x013C(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0140(0x0004)
	class UTextBoxHandle*                              txtCurrentTime;                                           // 0x0144(0x0004)
	class UButtonHandle*                               btnApplyMachinery;                                        // 0x0148(0x0004)
	class UButtonHandle*                               btnClanApplyBtn;                                          // 0x014C(0x0004)
	class UWindowHandle*                               AttendeeInfo;                                             // 0x0150(0x0004)
	class UListCtrlHandle*                             ListCtrlClanList;                                         // 0x0154(0x0004)
	class UButtonHandle*                               btnAcceptClan;                                            // 0x0158(0x0004)
	class UTextBoxHandle*                              txtTotalClanCountHead;                                    // 0x015C(0x0004)
	class UTextBoxHandle*                              txtTotalMachineryCountHead;                               // 0x0160(0x0004)
	class UTextBoxHandle*                              txtTotalClanCount;                                        // 0x0164(0x0004)
	class UTextBoxHandle*                              txtTotalMachineryCount;                                   // 0x0168(0x0004)
	class UTextureHandle*                              GroupBoxBg3;                                              // 0x016C(0x0004)
	class UTextureHandle*                              GroupBoxBg1;                                              // 0x0170(0x0004)
	class UTextureHandle*                              GroupBoxBg2;                                              // 0x0174(0x0004)
	int                                                m_DominionID;                                             // 0x0178(0x0004)
	struct FString                                     m_DominionName;                                           // 0x017C(0x000C) (NeedCtorLink)
	unsigned long                                      m_ClanBtnBool : 1;                                        // 0x0188(0x0004)
	unsigned long                                      m_MachineryBtnBool : 1;                                   // 0x0188(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.DominionWarInfoWnd");
		return ptr;
	}


	void STATIC_HandleDominionWarJoinList(const struct FString& param);
	void STATIC_HandleDominionInfo(const struct FString& param);
	void STATIC_HandleDominionInfoCnt(const struct FString& param);
	void STATIC_HandleResultJoinDominionWar(const struct FString& param);
	void STATIC_HandleShowDominionWarJoinList(const struct FString& param);
	void STATIC_HandleShowDominionWarJoisnListEnd();
	void STATIC_HandleShowDominionWarJoinListEnemyDominionInfo(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnbtnAcceptClanClick();
	void STATIC_OnbtnClanApplyBtnClick();
	void STATIC_OnbtnApplyMachineryClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnRegisterEvent();
	void STATIC_OnLoad();
	void STATIC_InitClanTexName();
};


// Class Interface.RefineryWnd
// 0x0754 (0x0790 - 0x003C)
class URefineryWnd : public UUICommonAPI
{
public:
	unsigned long                                      procedure1stat : 1;                                       // 0x003C(0x0004)
	unsigned long                                      procedure2stat : 1;                                       // 0x003C(0x0004)
	unsigned long                                      procedure3stat : 1;                                       // 0x003C(0x0004)
	unsigned long                                      procedure4stat : 1;                                       // 0x003C(0x0004)
	struct FItemInfo                                   RefineItemInfo;                                           // 0x0040(0x01A8) (NeedCtorLink)
	struct FItemInfo                                   RefinerItemInfo;                                          // 0x01E8(0x01A8) (NeedCtorLink)
	struct FItemInfo                                   GemstoneItemInfo;                                         // 0x0390(0x01A8) (NeedCtorLink)
	struct FItemInfo                                   RefinedITemInfo;                                          // 0x0538(0x01A8) (NeedCtorLink)
	class UWindowHandle*                               m_RefineryWnd_Main;                                       // 0x06E0(0x0004)
	class UWindowHandle*                               m_RefineResultBackPattern;                                // 0x06E4(0x0004)
	class UWindowHandle*                               m_Highlight1;                                             // 0x06E8(0x0004)
	class UWindowHandle*                               m_Highlight2;                                             // 0x06EC(0x0004)
	class UWindowHandle*                               m_Highlight3;                                             // 0x06F0(0x0004)
	class UWindowHandle*                               m_SeletedItemHighlight1;                                  // 0x06F4(0x0004)
	class UWindowHandle*                               m_SeletedItemHighlight2;                                  // 0x06F8(0x0004)
	class UWindowHandle*                               m_SeletedItemHighlight3;                                  // 0x06FC(0x0004)
	class UWindowHandle*                               m_DragBox1;                                               // 0x0700(0x0004)
	class UWindowHandle*                               m_DragBox2;                                               // 0x0704(0x0004)
	class UWindowHandle*                               m_DragBox3;                                               // 0x0708(0x0004)
	class UWindowHandle*                               m_DragBoxResult;                                          // 0x070C(0x0004)
	class UWindowHandle*                               m_RefineAnimation;                                        // 0x0710(0x0004)
	class UWindowHandle*                               m_ResultAnimation1;                                       // 0x0714(0x0004)
	class UWindowHandle*                               m_ResultAnimation2;                                       // 0x0718(0x0004)
	class UWindowHandle*                               m_ResultAnimation3;                                       // 0x071C(0x0004)
	class UAnimTextureHandle*                          m_RefineAnim;                                             // 0x0720(0x0004)
	class UAnimTextureHandle*                          m_ResultAnim1;                                            // 0x0724(0x0004)
	class UAnimTextureHandle*                          m_ResultAnim2;                                            // 0x0728(0x0004)
	class UAnimTextureHandle*                          m_ResultAnim3;                                            // 0x072C(0x0004)
	class UButtonHandle*                               m_OkBtn;                                                  // 0x0730(0x0004)
	class UButtonHandle*                               m_RefineryBtn;                                            // 0x0734(0x0004)
	class UItemWindowHandle*                           m_DragboxItem1;                                           // 0x0738(0x0004)
	class UItemWindowHandle*                           m_DragBoxItem2;                                           // 0x073C(0x0004)
	class UItemWindowHandle*                           m_DragBoxItem3;                                           // 0x0740(0x0004)
	class UItemWindowHandle*                           m_ResultBoxItem;                                          // 0x0744(0x0004)
	class UTextBoxHandle*                              m_InstructionText;                                        // 0x0748(0x0004)
	class UTextBoxHandle*                              m_hGemstoneNameTextBox;                                   // 0x074C(0x0004)
	class UTextBoxHandle*                              m_hGemstoneCountTextBox;                                  // 0x0750(0x0004)
	struct FItemID                                     m_TargetItemID;                                           // 0x0754(0x0008)
	struct FItemID                                     m_RefineItemID;                                           // 0x075C(0x0008)
	struct FItemID                                     m_GemStoneItemID;                                         // 0x0764(0x0008)
	struct FINT64                                      m_NecessaryGemstoneCount;                                 // 0x076C(0x0008)
	struct FINT64                                      m_GemstoneCount;                                          // 0x0774(0x0008)
	struct FString                                     m_GemstoneName;                                           // 0x077C(0x000C) (NeedCtorLink)
	class UInventoryWnd*                               InventoryWndScript;                                       // 0x0788(0x0004)
	class UWindowHandle*                               InventoryWnd;                                             // 0x078C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RefineryWnd");
		return ptr;
	}


	void STATIC_MoveItemBoxes(bool a_Origin);
	void STATIC_PlayResultAnimation(int grade);
	void STATIC_HandleDialogOK();
	void STATIC_OnRefineDoneResult(const struct FString& a_Param);
	void STATIC_OnRefineRequest();
	void STATIC_OnResultAnimEnd();
	void STATIC_OnTextureAnimEnd(class UAnimTextureHandle* a_WindowHandle);
	void STATIC_PlayRefineAnimation();
	void STATIC_OnClickRefineButton();
	void STATIC_OnClickCancelButton();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnGemstoneValidationResult(const struct FString& a_Param);
	void STATIC_ValidateGemstoneItem(const struct FItemInfo& a_ItemInfo);
	void STATIC_OnRefinerItemValidationResult(const struct FString& a_Param);
	void STATIC_ValidateSecondItem(const struct FItemInfo& a_ItemInfo);
	void STATIC_OnTargetItemValidationResult(const struct FString& a_Param);
	void STATIC_ValidateFirstItem(const struct FItemInfo& a_ItemInfo);
	void STATIC_OnDropItem(const struct FString& a_WindowID, const struct FItemInfo& a_ItemInfo, int X, int Y);
	void STATIC_ShowRefineryInterface();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnRefineryRefineResult();
	void STATIC_OnRefineryConfirmGemStoneResult();
	void STATIC_OnRefineryConfirmRefinerItemResult();
	void STATIC_OnRefineryConfirmTargetItemResult();
	void STATIC_ResetReady();
	void STATIC_ResetBools();
	void STATIC_OnShow();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UIEditor_Worksheet
// 0x0000 (0x003C - 0x003C)
class UUIEditor_Worksheet : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UIEditor_Worksheet");
		return ptr;
	}


	void STATIC_SetDefaultValue(class UWindowHandle* NewWnd, TEnumAsByte<EXMLControlType> type, const struct FString& strTarget, int X, int Y);
	void STATIC_OnDropItemWithHandle(class UWindowHandle* hTarget, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnDropWnd(class UWindowHandle* hTarget, class UWindowHandle* hDropWnd, int X, int Y);
	void STATIC_DeleteWindow();
	void STATIC_ClearAllTracker();
	void STATIC_OnKeyDown(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key);
};


// Class Interface.PetStatusWnd
// 0x0038 (0x0074 - 0x003C)
class UPetStatusWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bBuff : 1;                                              // 0x003C(0x0004)
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	int                                                m_PetID;                                                  // 0x0040(0x0004)
	int                                                m_CurBf;                                                  // 0x0044(0x0004)
	unsigned long                                      m_bPetload : 1;                                           // 0x0048(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x004C(0x0004)
	class UBarHandle*                                  barFATIGUE;                                               // 0x0050(0x0004)
	class UBarHandle*                                  barMP;                                                    // 0x0054(0x0004)
	class UBarHandle*                                  barHP;                                                    // 0x0058(0x0004)
	class UNameCtrlHandle*                             PetName;                                                  // 0x005C(0x0004)
	class UButtonHandle*                               btnBuff;                                                  // 0x0060(0x0004)
	class UWindowHandle*                               BackTex;                                                  // 0x0064(0x0004)
	class UStatusIconHandle*                           m_StatusIconBuff;                                         // 0x0068(0x0004)
	class UStatusIconHandle*                           m_StatusIconDeBuff;                                       // 0x006C(0x0004)
	class UStatusIconHandle*                           m_StatusIconSongDance;                                    // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PetStatusWnd");
		return ptr;
	}


	void STATIC_SetBuffButtonTooltip();
	void STATIC_OnBuffButton();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_UpdateBuff();
	void STATIC_HandleShowBuffIcon(const struct FString& param);
	void STATIC_HandlePetStatusSpelledList(const struct FString& param);
	void STATIC_HandlePetStatusShow();
	void STATIC_HandlePetInfoUpdate();
	void STATIC_HandlePetStatusClose();
	void Clear();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SummonedStatusWnd
// 0x0038 (0x0074 - 0x003C)
class USummonedStatusWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bBuff : 1;                                              // 0x003C(0x0004)
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	int                                                m_PetID;                                                  // 0x0040(0x0004)
	unsigned long                                      m_bSummonedStarted : 1;                                   // 0x0044(0x0004)
	int                                                m_CurBf;                                                  // 0x0048(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x004C(0x0004)
	class UBarHandle*                                  barMP;                                                    // 0x0050(0x0004)
	class UBarHandle*                                  barHP;                                                    // 0x0054(0x0004)
	class UProgressCtrlHandle*                         progFATIGUE;                                              // 0x0058(0x0004)
	class UNameCtrlHandle*                             PetName;                                                  // 0x005C(0x0004)
	class UButtonHandle*                               btnBuff;                                                  // 0x0060(0x0004)
	class UWindowHandle*                               BackTex;                                                  // 0x0064(0x0004)
	class UStatusIconHandle*                           m_StatusIconBuff;                                         // 0x0068(0x0004)
	class UStatusIconHandle*                           m_StatusIconDeBuff;                                       // 0x006C(0x0004)
	class UStatusIconHandle*                           m_StatusIconSongDance;                                    // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SummonedStatusWnd");
		return ptr;
	}


	void STATIC_InitFATIGUEBar();
	void STATIC_SetBuffButtonTooltip();
	void STATIC_OnBuffButton();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_UpdateBuff();
	void STATIC_HandleShowBuffIcon(const struct FString& param);
	void STATIC_HandleSummonedStatusSpelledList(const struct FString& param);
	void STATIC_HandleSummonedStatusShow();
	void STATIC_HandlePetInfoUpdate();
	void STATIC_HandlePetSummonedStatusClose();
	void STATIC_HandleSummonedStatusRemainTime(const struct FString& param);
	void STATIC_ClearBuff();
	void Clear();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BlockCounter
// 0x003C (0x0078 - 0x003C)
class UBlockCounter : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              TeamRedCount;                                             // 0x0040(0x0004)
	class UTextBoxHandle*                              TeamBlueCount;                                            // 0x0044(0x0004)
	class UTextBoxHandle*                              TimerCount;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              TimerCountTitle;                                          // 0x004C(0x0004)
	class UTextBoxHandle*                              CountCenter;                                              // 0x0050(0x0004)
	class UTextBoxHandle*                              CountCen;                                                 // 0x0054(0x0004)
	int                                                Min;                                                      // 0x0058(0x0004)
	int                                                Sec;                                                      // 0x005C(0x0004)
	struct FString                                     MinStr;                                                   // 0x0060(0x000C) (NeedCtorLink)
	struct FString                                     SecStr;                                                   // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BlockCounter");
		return ptr;
	}


	void STATIC_HandleHide();
	void STATIC_ResetCurrentStat();
	void STATIC_TimerReset(int RemainTime);
	void STATIC_UpdateTimerCount();
	void STATIC_DrawTimerCount();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandleBlockStatePlayer(const struct FString& param);
	void STATIC_HandleBlockStateTeam(const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnHide();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RecipeBookWnd
// 0x0024 (0x0060 - 0x003C)
class URecipeBookWnd : public UUICommonAPI
{
public:
	int                                                m_ItemCount;                                              // 0x003C(0x0004)
	TArray<struct FItemID>                             m_arrItemID;                                              // 0x0040(0x000C) (NeedCtorLink)
	int                                                m_BookType;                                               // 0x004C(0x0004)
	int                                                m_ItemMaxCount_Dwarf;                                     // 0x0050(0x0004)
	int                                                m_ItemMaxCount_Normal;                                    // 0x0054(0x0004)
	struct FItemID                                     m_DeleteItemID;                                           // 0x0058(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RecipeBookWnd");
		return ptr;
	}


	void STATIC_DeleteItem(const struct FItemInfo& infItem);
	void STATIC_SetItemCount(int MaxCount);
	void STATIC_AddRecipeBookItem(int RecipeID);
	void Clear();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_OnDBClickItem(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BlockCurWnd
// 0x0064 (0x00A0 - 0x003C)
class UBlockCurWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              TeamRedPoint;                                             // 0x0040(0x0004)
	class UTextBoxHandle*                              TeamBluePoint;                                            // 0x0044(0x0004)
	class UTextBoxHandle*                              TeamRed;                                                  // 0x0048(0x0004)
	class UTextBoxHandle*                              TeamBlue;                                                 // 0x004C(0x0004)
	class UTextBoxHandle*                              RemainSecTitle;                                           // 0x0050(0x0004)
	class UTextBoxHandle*                              RemainSec;                                                // 0x0054(0x0004)
	class UTextBoxHandle*                              TeamRedTotal;                                             // 0x0058(0x0004)
	class UTextBoxHandle*                              TeamBlueTotal;                                            // 0x005C(0x0004)
	class UListCtrlHandle*                             TeamRedList;                                              // 0x0060(0x0004)
	class UListCtrlHandle*                             TeamBlueList;                                             // 0x0064(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0068(0x0004)
	class UTextureHandle*                              TeamRedResult;                                            // 0x006C(0x0004)
	class UTextureHandle*                              TeamBlueResult;                                           // 0x0070(0x0004)
	class UTextureHandle*                              TeamBlueWin;                                              // 0x0074(0x0004)
	class UTextureHandle*                              TeamRedListGroupBox;                                      // 0x0078(0x0004)
	class UTextureHandle*                              TeamBlueListGroupBox;                                     // 0x007C(0x0004)
	class UTextureHandle*                              CountGroupBox;                                            // 0x0080(0x0004)
	class UTextureHandle*                              TeamRedListDeco;                                          // 0x0084(0x0004)
	class UTextureHandle*                              TeamBlueListDeco;                                         // 0x0088(0x0004)
	int                                                TotalCountA;                                              // 0x008C(0x0004)
	int                                                TotalCountB;                                              // 0x0090(0x0004)
	int                                                RoomNumber;                                               // 0x0094(0x0004)
	class UWindowHandle*                               BlockCurTriggerWnd;                                       // 0x0098(0x0004)
	class UWindowHandle*                               BlockCounter;                                             // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BlockCurWnd");
		return ptr;
	}


	void STATIC_ResetUI();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandleBlockListRemove(const struct FString& param);
	void STATIC_HandleBlockListAdd(const struct FString& param);
	void STATIC_HandleBlockStateResult(const struct FString& param);
	void STATIC_HandleBlockStatePlayer(const struct FString& param);
	void STATIC_HandleBlockStateTeam(const struct FString& param);
	void STATIC_HandleBlockListStart(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RecipeShopWnd
// 0x01B4 (0x01F0 - 0x003C)
class URecipeShopWnd : public UUICommonAPI
{
public:
	int                                                m_BookItemCount;                                          // 0x003C(0x0004)
	int                                                m_ShopItemCount;                                          // 0x0040(0x0004)
	int                                                m_BookType;                                               // 0x0044(0x0004)
	struct FItemInfo                                   m_HandleItem;                                             // 0x0048(0x01A8) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RecipeShopWnd");
		return ptr;
	}


	void STATIC_HandleMoveDownItem();
	void STATIC_HandleMoveUpItem();
	void STATIC_StartRecipeShop();
	void STATIC_UpdateShopItemCount(int Count);
	void STATIC_DeleteShopItem(const struct FItemInfo& DeleteItem);
	void STATIC_UpdateShopItem(const struct FItemInfo& AddItem);
	void STATIC_ShowShopItemAddDialog(const struct FItemInfo& AddItem);
	void STATIC_AddRecipeShopItem(int RecipeID, int CanbeMade, const struct FINT64& MakingFee);
	void STATIC_AddRecipeBookItem(int RecipeID);
	void STATIC_ClearHandleItem();
	void Clear();
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_OnDBClickItem(const struct FString& strID, int Index);
	void STATIC_CloseWindow();
	void STATIC_OnSendPacketWhenHiding();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MacroEditWnd
// 0x0014 (0x0050 - 0x003C)
class UMacroEditWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	int                                                m_CurIconNum;                                             // 0x0040(0x0004)
	struct FItemID                                     m_CurMacroItemID;                                         // 0x0044(0x0008)
	class UWindowHandle*                               m_MacroEditWnd;                                           // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MacroEditWnd");
		return ptr;
	}


	void STATIC_SaveMacro();
	void STATIC_SetMacroID(const struct FItemID& cID);
	void STATIC_HandleMacroShowEditWnd(const struct FString& param);
	void STATIC_HandleMacroDeleted(const struct FString& param);
	void Clear();
	void STATIC_UpdateIconName();
	void STATIC_UpdateIcon();
	void STATIC_OnClickRight();
	void STATIC_OnClickLeft();
	void STATIC_OnChangeEditBox(const struct FString& strID);
	void STATIC_OnDragItemEnd(const struct FString& strID);
	void STATIC_OnDragItemStart(const struct FString& strID, const struct FItemInfo& infItem);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_OnClickSave();
	void STATIC_OnClickCancel();
	void STATIC_OnClickHelp();
	void STATIC_OnClickInfo();
	void STATIC_InitTabOrder();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.LobbyMenuWnd
// 0x0030 (0x006C - 0x003C)
class ULobbyMenuWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_hBtnCreateCharacter;                                    // 0x003C(0x0004)
	class UWindowHandle*                               m_hBtnDeleteCharacter;                                    // 0x0040(0x0004)
	class UWindowHandle*                               m_hBtnStartGame;                                          // 0x0044(0x0004)
	class UComboBoxHandle*                             m_hCbCharacterName;                                       // 0x0048(0x0004)
	class UTextBoxHandle*                              m_hTbLevel;                                               // 0x004C(0x0004)
	class UTextBoxHandle*                              m_hTbClassName;                                           // 0x0050(0x0004)
	class UTextBoxHandle*                              m_hTbSP;                                                  // 0x0054(0x0004)
	class UTextBoxHandle*                              m_hTbPropensity;                                          // 0x0058(0x0004)
	class UTextBoxHandle*                              m_sbtxtPropensity;                                        // 0x005C(0x0004)
	class UStatusBarHandle*                            m_hSbHP;                                                  // 0x0060(0x0004)
	class UStatusBarHandle*                            m_hSbMP;                                                  // 0x0064(0x0004)
	class UStatusBarHandle*                            m_hSbEXP;                                                 // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LobbyMenuWnd");
		return ptr;
	}


	void STATIC_OnComboBoxItemSelected(const struct FString& strID, int Index);
	void STATIC_ResetCharacterSelectWindow();
	void STATIC_HandleDialogDelete(bool bOK, int SelectedCharacter);
	void STATIC_HandleDialogRestore(bool bOK, int SelectedCharacter);
	void STATIC_HandleDialogResult(bool bOK);
	void STATIC_ShowRestoreDialog(int SelectedCharacter);
	void STATIC_HandleShowDialog(const struct FString& param);
	void STATIC_HandleCharacterSelect(const struct FString& param);
	void STATIC_HandleAddCharacterName(const struct FString& param);
	void STATIC_HandleMenuButtonEnable(const struct FString& a_Param);
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_ShowDeleteDialog(int Index);
	void STATIC_OnClickDeleteCharacter();
	void STATIC_OnClickStartButton();
	void STATIC_OnKeyUp(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyMatchRoomWnd
// 0x0040 (0x007C - 0x003C)
class UPartyMatchRoomWnd : public UPartyMatchWndCommon
{
public:
	int                                                RoomNumber;                                               // 0x003C(0x0004)
	int                                                CurPartyMemberCount;                                      // 0x0040(0x0004)
	int                                                MaxPartyMemberCount;                                      // 0x0044(0x0004)
	int                                                minLevel;                                                 // 0x0048(0x0004)
	int                                                maxLevel;                                                 // 0x004C(0x0004)
	int                                                LootingMethodID;                                          // 0x0050(0x0004)
	int                                                RoomZoneID;                                               // 0x0054(0x0004)
	int                                                MyMembershipType;                                         // 0x0058(0x0004)
	struct FString                                     RoomTitle;                                                // 0x005C(0x000C) (NeedCtorLink)
	unsigned long                                      m_bPartyMatchRoomStart : 1;                               // 0x0068(0x0004)
	unsigned long                                      m_bRequestExitPartyRoom : 1;                              // 0x0068(0x0004)
	struct FString                                     m_WindowName;                                             // 0x006C(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hPartyMatchRoomWndPartyMemberListCtrl;                  // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyMatchRoomWnd");
		return ptr;
	}


	void STATIC_OnChatMarkedEditBox(const struct FString& strID);
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_OnExitButtonClick();
	void STATIC_OnInviteButtonClick();
	void STATIC_OnBanButtonClick();
	void STATIC_OnRoomSettingButtonClick();
	void STATIC_OnWaitListButtonClick();
	void STATIC_OnClickButton(const struct FString& a_strButtonName);
	void STATIC_UpdateData(bool a_ToControl);
	void STATIC_HandlePartyMatchChatMessage(const struct FString& param);
	void STATIC_HandlePartyMatchRoomMemberUpdate(const struct FString& param);
	void STATIC_RemoveMember(int a_MemberID);
	void STATIC_AddMember(int a_MemberID, const struct FString& a_MemberName, int a_ClassID, int a_Level, int a_ZoneID, int a_MembershipType);
	void STATIC_HandlePartyMatchRoomMember(const struct FString& param);
	void STATIC_UpdateMyMembershipType();
	void STATIC_HandlePartyMatchRoomClose();
	void STATIC_OnHide();
	void STATIC_UpdateWaitListWnd();
	void STATIC_HandlePartyMatchRoomStart(const struct FString& param);
	void STATIC_ExitPartyRoom();
	void STATIC_HandleRestart();
	void STATIC_OnEvent(int a_EventID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnSendPacketWhenHiding();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.TeleportBookMarkWnd
// 0x0054 (0x0090 - 0x003C)
class UTeleportBookMarkWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               BookMarkEditWnd;                                          // 0x0040(0x0004)
	class UTextBoxHandle*                              txtTeleportLoc;                                           // 0x0044(0x0004)
	class UItemWindowHandle*                           ItemBookMarkItem;                                         // 0x0048(0x0004)
	class UTextBoxHandle*                              txtSlotAvailability;                                      // 0x004C(0x0004)
	class UTextBoxHandle*                              txtSavedTeleportList;                                     // 0x0050(0x0004)
	class UTextBoxHandle*                              txtRequiredItemCount;                                     // 0x0054(0x0004)
	class UMinimapCtrlHandle*                          Minimap;                                                  // 0x0058(0x0004)
	class UButtonHandle*                               ItemDelete;                                               // 0x005C(0x0004)
	class UButtonHandle*                               ItemEdit;                                                 // 0x0060(0x0004)
	class UButtonHandle*                               btnSaveMyLoc;                                             // 0x0064(0x0004)
	class UTeleportBookMarkDrawerWnd*                  m_Script;                                                 // 0x0068(0x0004)
	class UButtonHandle*                               btnReduce;                                                // 0x006C(0x0004)
	class UTextBoxHandle*                              txtNoticeMessage;                                         // 0x0070(0x0004)
	class UTextBoxHandle*                              txtNoticeMessage2;                                        // 0x0074(0x0004)
	class UTextureHandle*                              TexDeactivated;                                           // 0x0078(0x0004)
	struct FItemID                                     m_CurBookMarkItemID;                                      // 0x007C(0x0008)
	struct FItemID                                     m_DeleteBookMarkItemID;                                   // 0x0084(0x0008)
	int                                                m_totalableSlotNum;                                       // 0x008C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TeleportBookMarkWnd");
		return ptr;
	}


	void STATIC_OnMyLocBtnClick();
	void STATIC_SetBookMarkCount(int ableSlotNum, int curSlotNum);
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnDBClickItem(const struct FString& strID, int Index);
	void Clear();
	void STATIC_SetLocatorOnMiniMap2();
	void STATIC_SetLocatorOnMiniMap(const struct FVector& Loc);
	void STATIC_SetCurrentLocOnMinimap();
	void STATIC_OnbtnSaveMyLocClick();
	void STATIC_OnModifyBookMarkSlot(const struct FItemInfo& infItem);
	void STATIC_OnDeleteBookMarkSlot(const struct FItemInfo& infItem);
	void STATIC_HandleBookMarkList(const struct FString& param);
	void STATIC_SetUnActiveSlots();
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_OpenWindow();
	void STATIC_HandleUpdateItemCountSystemMessage(int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnRegisterEvent();
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_GetTeleportItemCnt();
	void STATIC_OnShow();
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
};


// Class Interface.InviteClanPopWnd
// 0x0018 (0x0054 - 0x003C)
class UInviteClanPopWnd : public UUIScript
{
public:
	struct FString                                     m_UserName;                                               // 0x003C(0x000C) (NeedCtorLink)
	TArray<int>                                        m_knighthoodIndex;                                        // 0x0048(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.InviteClanPopWnd");
		return ptr;
	}


	void STATIC_InitializeComboBox();
	void STATIC_AskJoin();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMInventoryWnd
// 0x0020 (0x0168 - 0x0148)
class UGMInventoryWnd : public UInventoryWnd
{
public:
	unsigned long                                      bShow : 1;                                                // 0x0148(0x0004)
	int                                                m_ObservingUserInvenLimit;                                // 0x014C(0x0004)
	struct FINT64                                      m_Adena;                                                  // 0x0150(0x0008)
	unsigned long                                      m_HasLEar : 1;                                            // 0x0158(0x0004)
	unsigned long                                      m_HasLFinger : 1;                                         // 0x0158(0x0004)
	TArray<struct FGMHennaInfo>                        m_HennaInfoList;                                          // 0x015C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMInventoryWnd");
		return ptr;
	}


	void STATIC_UpdateHennaInfo();
	int STATIC_IsLOrRFinger(const struct FItemID& sID);
	int STATIC_IsLOrREar(const struct FItemID& sID);
	void STATIC_EquipItemUpdate(const struct FItemInfo& a_Info);
	void STATIC_OnRClickItem(const struct FString& strID, int Index);
	void STATIC_OnDBClickItem(const struct FString& strID, int Index);
	void STATIC_OnDropItemSource(const struct FString& strTarget, const struct FItemInfo& Info);
	void STATIC_OnDropItem(const struct FString& strTarget, const struct FItemInfo& Info, int X, int Y);
	void STATIC_HandleGMUpdateHennaInfo(const struct FString& a_Param);
	void STATIC_HandleGMAddHennaInfo(const struct FString& a_Param);
	void STATIC_HandleGMObservingInventoryClear(const struct FString& a_Param);
	int STATIC_GetMyInventoryLimit();
	void STATIC_SetAdenaText();
	void STATIC_SetAdena(const struct FINT64& a_Adena);
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleGMObservingInventoryAddItem(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_ShowInventory(const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CouponEventWnd
// 0x001C (0x0058 - 0x003C)
class UCouponEventWnd : public UUIScript
{
public:
	struct FString                                     CurrentInput;                                             // 0x003C(0x000C) (NeedCtorLink)
	unsigned long                                      completeEditbox : 1;                                      // 0x0048(0x0004)
	TArray<int>                                        completebox;                                              // 0x004C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CouponEventWnd");
		return ptr;
	}


	void STATIC_count_editBox(const struct FString& currentboxnum);
	void STATIC_OnChangeEditBox(const struct FString& EditBoxID);
	void STATIC_Proc_Delivery();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnShow();
	void STATIC_resetEditBox();
	void STATIC_initValue();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UIEditor_ControlManager
// 0x0044 (0x0080 - 0x003C)
class UUIEditor_ControlManager : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              txtNewControl;                                            // 0x0040(0x0004)
	class UListBoxHandle*                              lstControls;                                              // 0x0044(0x0004)
	class UItemWindowHandle*                           ControlItem;                                              // 0x0048(0x0004)
	class UTextBoxHandle*                              txtControlAlign;                                          // 0x004C(0x0004)
	class UCheckBoxHandle*                             chkShowWindowBox;                                         // 0x0050(0x0004)
	class UCheckBoxHandle*                             chkVirtualBack;                                           // 0x0054(0x0004)
	class UCheckBoxHandle*                             chkExampleAni;                                            // 0x0058(0x0004)
	class UButtonHandle*                               btnLeft;                                                  // 0x005C(0x0004)
	class UButtonHandle*                               btnCenter;                                                // 0x0060(0x0004)
	class UButtonHandle*                               btnRight;                                                 // 0x0064(0x0004)
	class UButtonHandle*                               btnWidth;                                                 // 0x0068(0x0004)
	class UButtonHandle*                               btnHeight;                                                // 0x006C(0x0004)
	class UButtonHandle*                               btnUp;                                                    // 0x0070(0x0004)
	class UButtonHandle*                               btnDown;                                                  // 0x0074(0x0004)
	class UListCtrlHandle*                             lstCurrentControl;                                        // 0x0078(0x0004)
	class UWindowHandle*                               m_CurTopWnd;                                              // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UIEditor_ControlManager");
		return ptr;
	}


	void STATIC_OnOrderClick(const struct FString& Name);
	struct FString STATIC_GetFullName(class UWindowHandle* hWnd);
	void STATIC_SelectControlList(const struct FString& FullName);
	class UWindowHandle* STATIC_FindWindowHandle(const struct FString& a_FullName);
	struct FString STATIC_ReverseParentName(const struct FString& Name);
	void STATIC_SelectControl(const struct FString& ControlName);
	void STATIC_AddChildWIndowToList(class UWindowHandle* hWnd, const struct FString& ParentName, int Depth);
	void STATIC_HandleEditorSetProperty(const struct FString& param);
	void STATIC_HandleTrackerDetach();
	void STATIC_HandleTrackerAttach();
	void STATIC_RefreshControlList();
	void STATIC_UpdateControlList();
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnAlignClick(const struct FString& Name);
	struct FString STATIC_GetCurrentControlTypeString();
	TEnumAsByte<EXMLControlType> STATIC_GetCurrentControlType();
	void STATIC_OnClickCheckBox(const struct FString& Name);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitNewControlList();
	void STATIC_InitControlItem();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CleftCurWnd
// 0x0078 (0x00B4 - 0x003C)
class UCleftCurWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              CountA;                                                   // 0x0040(0x0004)
	class UTextBoxHandle*                              CountB;                                                   // 0x0044(0x0004)
	class UTextBoxHandle*                              TeamATitle;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              TeamBTitle;                                               // 0x004C(0x0004)
	class UTextBoxHandle*                              CATATitle;                                                // 0x0050(0x0004)
	class UTextBoxHandle*                              CATBTitle;                                                // 0x0054(0x0004)
	class UTextBoxHandle*                              CATA;                                                     // 0x0058(0x0004)
	class UTextBoxHandle*                              CATB;                                                     // 0x005C(0x0004)
	class UTextBoxHandle*                              TeamATotalTitle;                                          // 0x0060(0x0004)
	class UTextBoxHandle*                              TeamBTotalTitle;                                          // 0x0064(0x0004)
	class UTextBoxHandle*                              TeamATotal;                                               // 0x0068(0x0004)
	class UTextBoxHandle*                              TeamBTotal;                                               // 0x006C(0x0004)
	class UListCtrlHandle*                             TeamAList;                                                // 0x0070(0x0004)
	class UListCtrlHandle*                             TeamBList;                                                // 0x0074(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0078(0x0004)
	class UButtonHandle*                               btnExit;                                                  // 0x007C(0x0004)
	class UTextureHandle*                              ResultA;                                                  // 0x0080(0x0004)
	class UTextureHandle*                              ResultB;                                                  // 0x0084(0x0004)
	class UTextureHandle*                              ResultBWin;                                               // 0x0088(0x0004)
	class UTextureHandle*                              TeamAListGroupBox;                                        // 0x008C(0x0004)
	class UTextureHandle*                              TeamBListGroupBox;                                        // 0x0090(0x0004)
	class UTextBoxHandle*                              RemainSecTitle;                                           // 0x0094(0x0004)
	class UTextBoxHandle*                              RemainSec;                                                // 0x0098(0x0004)
	int                                                TotalCountA;                                              // 0x009C(0x0004)
	int                                                TotalCountB;                                              // 0x00A0(0x0004)
	class UWindowHandle*                               CleftCurTriggerWnd;                                       // 0x00A4(0x0004)
	class UWindowHandle*                               CleftCounter;                                             // 0x00A8(0x0004)
	int                                                CurCATAID;                                                // 0x00AC(0x0004)
	int                                                CurCATBID;                                                // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CleftCurWnd");
		return ptr;
	}


	void STATIC_ResetUI();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandleCleftListRemove(const struct FString& param);
	void STATIC_HandleCleftListAdd(const struct FString& param);
	void STATIC_HandleCleftStateResult(const struct FString& param);
	void STATIC_HandleCleftStatePlayer(const struct FString& param);
	void STATIC_HandleCleftStateTeam(const struct FString& param);
	void STATIC_HandleCleftListStart();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMDetailStatusWnd
// 0x0150 (0x029C - 0x014C)
class UGMDetailStatusWnd : public UDetailStatusWnd
{
public:
	struct FString                                     temp1;                                                    // 0x014C(0x000C) (NeedCtorLink)
	unsigned long                                      bShow : 1;                                                // 0x0158(0x0004)
	struct FUserInfo                                   m_ObservingUserInfo;                                      // 0x015C(0x0140) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMDetailStatusWnd");
		return ptr;
	}


	float STATIC_GetMyExpRate();
	struct FString STATIC_GetMovingSpeed(const struct FUserInfo& a_UserInfo);
	bool STATIC_GetMyUserInfo(struct FUserInfo* a_MyUserInfo);
	void STATIC_HandleGMUpdateHennaInfo(const struct FString& a_Param);
	bool STATIC_HandleGMObservingUserInfoUpdate();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_ShowStatus(const struct FString& a_Param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CleftEnterWnd
// 0x003C (0x0078 - 0x003C)
class UCleftEnterWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              ARemainStaff;                                             // 0x0040(0x0004)
	class UTextBoxHandle*                              BRemainStaff;                                             // 0x0044(0x0004)
	class UTextBoxHandle*                              TeamATitle;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              TeamBTitle;                                               // 0x004C(0x0004)
	class UTextBoxHandle*                              TeamATotalStaff;                                          // 0x0050(0x0004)
	class UTextBoxHandle*                              TeamBTotalStaff;                                          // 0x0054(0x0004)
	class UListCtrlHandle*                             TeamAList;                                                // 0x0058(0x0004)
	class UListCtrlHandle*                             TeamBList;                                                // 0x005C(0x0004)
	class UTextureHandle*                              TeamAGroupBox;                                            // 0x0060(0x0004)
	class UTextureHandle*                              TeamBGroupBox;                                            // 0x0064(0x0004)
	class UButtonHandle*                               btnExit;                                                  // 0x0068(0x0004)
	int                                                m_MinMember;                                              // 0x006C(0x0004)
	unsigned long                                      m_exitbool : 1;                                           // 0x0070(0x0004)
	int                                                m_UserID;                                                 // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CleftEnterWnd");
		return ptr;
	}


	bool STATIC_GetMyUserInfo(struct FUserInfo* a_MyUserInfo);
	void STATIC_OnHide();
	void STATIC_OnClickButton(const struct FString& ButtonID);
	void STATIC_OnLButtonUp(class UWindowHandle* WindowHandle, int X, int Y);
	void STATIC_UpdateNeedMember();
	void STATIC_HandleCleftListInfo(const struct FString& param);
	void STATIC_HandleCleftListClose();
	void STATIC_HandleCleftListRemove(const struct FString& param);
	void STATIC_HandleCleftListAdd(const struct FString& param);
	void STATIC_HandleCleftListStart();
	void STATIC_ResetUI();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MinimapWnd_Expand
// 0x003C (0x0078 - 0x003C)
class UMinimapWnd_Expand : public UUICommonAPI
{
public:
	int                                                m_PartyMemberCount;                                       // 0x003C(0x0004)
	int                                                m_PartyLocIndex;                                          // 0x0040(0x0004)
	unsigned long                                      m_AdjustCursedLoc : 1;                                    // 0x0044(0x0004)
	int                                                m_SSQStatus;                                              // 0x0048(0x0004)
	unsigned long                                      m_bShowSSQType : 1;                                       // 0x004C(0x0004)
	unsigned long                                      m_bShowCurrentLocation : 1;                               // 0x004C(0x0004)
	unsigned long                                      m_bShowGameTime : 1;                                      // 0x004C(0x0004)
	int                                                m_ContinentOffset;                                        // 0x0050(0x0004)
	TArray<struct FResolutionInfo>                     ResolutionList;                                           // 0x0054(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hMinimapWnd;                                            // 0x0060(0x0004)
	class UMinimapCtrlHandle*                          MiniMapCtrLarge;                                          // 0x0064(0x0004)
	class UTextureHandle*                              TexMapStroke;                                             // 0x0068(0x0004)
	class UTabHandle*                                  m_MapSelectTab;                                           // 0x006C(0x0004)
	class UWindowHandle*                               MiniMapDrawerWnd;                                         // 0x0070(0x0004)
	class UMinimapWnd*                                 m_MiniMapWndScript;                                       // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MinimapWnd_Expand");
		return ptr;
	}


	void STATIC_InitializeLocation();
	int STATIC_GetContinent(const struct FVector& Loc);
	void STATIC_SetLocContinent(const struct FVector& Loc);
	void STATIC_SetContinent(int Continent);
	void STATIC_SelectSunOrMoon(int GameHour);
	void STATIC_HandleUpdateGameTime(const struct FString& a_Param);
	void STATIC_DrawCursedWeapon(const struct FString& WindowName, int ItemID, const struct FString& cursedName, const struct FVector& vecLoc, bool bDropped, bool bRefresh);
	void STATIC_HandleCursedWeaponLoctaion(const struct FString& param);
	void STATIC_HandleCursedWeaponList(const struct FString& param);
	void STATIC_OnClickPartyLocButton();
	void STATIC_AdjustMapToPlayerPosition(bool a_ZoomToTownMap);
	void STATIC_OnClickMyLocButton();
	void STATIC_OnClickTargetButton();
	void STATIC_OnClickCollapseButton();
	void STATIC_OnClickButton(const struct FString& a_ButtonID);
	void STATIC_OnComboBoxItemSelected(const struct FString& sName, int Index);
	void STATIC_RequestCursedWeaponLocation();
	void STATIC_HandleMinimapHideQuest();
	void STATIC_HandleMinimapShowQuest();
	void STATIC_HandleMinimapDeleteAllTarget();
	void STATIC_HandleMinimapDeleteTarget(const struct FString& a_Param);
	void STATIC_HandleMinimapAddTarget(const struct FString& a_Param);
	void STATIC_HandlePartyMemberChanged(const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_ResetMiniMapSize(int CurrentWidth, int CurrentHeight);
	void STATIC_CheckResolution();
	void STATIC_SetCurrentLocation();
	void STATIC_SetSSQTypeText();
	void STATIC_HandleResolutionChanged(const struct FString& aParam);
	void STATIC_OnShow();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_FilterDungeonMapExpand();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GametipWnd
// 0x0160 (0x019C - 0x003C)
class UGametipWnd : public UUIScript
{
public:
	TArray<struct FGameTipData>                        TipData;                                                  // 0x003C(0x000C) (NeedCtorLink)
	int                                                CountRecord;                                              // 0x0048(0x0004)
	struct FUserInfo                                   userinfofortip;                                           // 0x004C(0x0140) (NeedCtorLink)
	struct FString                                     CurrentTip;                                               // 0x018C(0x000C) (NeedCtorLink)
	int                                                numb;                                                     // 0x0198(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GametipWnd");
		return ptr;
	}


	void STATIC_OnShow();
	void STATIC_LoadGameTipData();
	void STATIC_OnEventWithStr(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyMatchWaitListWnd
// 0x0024 (0x0060 - 0x003C)
class UPartyMatchWaitListWnd : public UPartyMatchWndCommon
{
public:
	int                                                entire_page;                                              // 0x003C(0x0004)
	int                                                current_page;                                             // 0x0040(0x0004)
	int                                                RoomNumber;                                               // 0x0044(0x0004)
	int                                                MaxPartyMemberCount;                                      // 0x0048(0x0004)
	int                                                minLevel;                                                 // 0x004C(0x0004)
	int                                                maxLevel;                                                 // 0x0050(0x0004)
	int                                                LootingMethodID;                                          // 0x0054(0x0004)
	int                                                RoomZoneID;                                               // 0x0058(0x0004)
	class UListCtrlHandle*                             WaitListCtrl;                                             // 0x005C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyMatchWaitListWnd");
		return ptr;
	}


	void STATIC_CheckButtonAlive();
	void STATIC_OnDBClickListCtrlRecord(const struct FString& a_ListCtrlName);
	void STATIC_OnCloseButtonClick();
	void STATIC_OnInviteButtonClick();
	void STATIC_OnWhisperButtonClick();
	void STATIC_OnPrevbuttonClick();
	void STATIC_OnNextbuttonClick();
	void STATIC_OnRefreshButtonClick();
	void STATIC_OnClickButton(const struct FString& a_strButtonName);
	void STATIC_HandlePartyMatchWaitList(const struct FString& param);
	void STATIC_HandlePartyMatchWaitListStart(const struct FString& param);
	void STATIC_HandlePartyMatchRoomStart(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& param);
	void STATIC_OnShow();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BlockEnterWnd
// 0x0050 (0x008C - 0x003C)
class UBlockEnterWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              TeamRed;                                                  // 0x0040(0x0004)
	class UTextBoxHandle*                              TeamBlue;                                                 // 0x0044(0x0004)
	class UTextBoxHandle*                              TeamRedTotal;                                             // 0x0048(0x0004)
	class UTextBoxHandle*                              TeamBlueTotal;                                            // 0x004C(0x0004)
	class UTextBoxHandle*                              RemainSecTitle;                                           // 0x0050(0x0004)
	class UTextBoxHandle*                              RemainSec;                                                // 0x0054(0x0004)
	class UTextBoxHandle*                              TeamRedTotalTitle;                                        // 0x0058(0x0004)
	class UTextBoxHandle*                              TeamBlueTotalTitle;                                       // 0x005C(0x0004)
	class UListCtrlHandle*                             TeamRedList;                                              // 0x0060(0x0004)
	class UListCtrlHandle*                             TeamBlueList;                                             // 0x0064(0x0004)
	class UTextureHandle*                              CountGroupBox;                                            // 0x0068(0x0004)
	class UTextureHandle*                              TeamRedListGroupBox;                                      // 0x006C(0x0004)
	class UTextureHandle*                              TeamBlueListGroupBox;                                     // 0x0070(0x0004)
	class UTextureHandle*                              TeamRedListBDECO;                                         // 0x0074(0x0004)
	class UTextureHandle*                              TeamBlueListBDECO;                                        // 0x0078(0x0004)
	class UButtonHandle*                               btnExit;                                                  // 0x007C(0x0004)
	int                                                RoomNumber;                                               // 0x0080(0x0004)
	int                                                RemainStartSec;                                           // 0x0084(0x0004)
	unsigned long                                      ShowTime : 1;                                             // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BlockEnterWnd");
		return ptr;
	}


	void STATIC_UpdateTimerCount();
	void STATIC_HandleDialogCancel();
	void STATIC_HandleDialogOK();
	void STATIC_HandleStartVote();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnClickButton(const struct FString& ButtonID);
	void STATIC_OnLButtonUp(class UWindowHandle* WindowHandle, int X, int Y);
	void STATIC_HandleBlockRemainTime(const struct FString& param);
	void STATIC_HandleBlockListClose();
	void STATIC_HandleBlockListRemove(const struct FString& param);
	void STATIC_HandleBlockListAdd(const struct FString& param);
	void STATIC_HandleBlockListStart(const struct FString& param);
	void STATIC_ResetUI();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyMatchOutWaitListWnd
// 0x0020 (0x005C - 0x003C)
class UPartyMatchOutWaitListWnd : public UPartyMatchWndCommon
{
public:
	int                                                entire_page;                                              // 0x003C(0x0004)
	int                                                current_page;                                             // 0x0040(0x0004)
	int                                                minLevel;                                                 // 0x0044(0x0004)
	int                                                maxLevel;                                                 // 0x0048(0x0004)
	struct FString                                     m_WindowName;                                             // 0x004C(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hPartyMatchOutWaitListWndWaitListCtrl;                  // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyMatchOutWaitListWnd");
		return ptr;
	}


	void STATIC_CheckButtonAlive();
	void STATIC_MakeRoomFirst(int TargetLevel, const struct FString& InviteTargetName);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& a_ListCtrlName);
	void STATIC_OnCloseButtonClick();
	void STATIC_OnInviteButtonClick();
	void STATIC_OnWhisperButtonClick();
	void STATIC_OnSearchBtnClick();
	void STATIC_OnPrevbuttonClick();
	void STATIC_OnNextbuttonClick();
	void STATIC_OnRefreshButtonClick();
	void STATIC_OnClickButton(const struct FString& a_strButtonName);
	void STATIC_HandlePartyMatchWaitList(const struct FString& param);
	void STATIC_HandlePartyMatchWaitListStart(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.AuctionBtnWnd
// 0x001C (0x0058 - 0x003C)
class UAuctionBtnWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               btnAuction[0x3];                                          // 0x0040(0x0004)
	int                                                ButtonOn[0x3];                                            // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AuctionBtnWnd");
		return ptr;
	}


	void STATIC_ComputeWidth();
	void STATIC_DeleteAuctionTooltip();
	void STATIC_SetAuctionTooltip();
	void STATIC_HandleAuctionSystemMessage(int SystemMsgIndex);
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Clear();
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BoardWnd
// 0x0064 (0x00A0 - 0x003C)
class UBoardWnd : public UUIScript
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	unsigned long                                      m_bBtnLock : 1;                                           // 0x003C(0x0004)
	struct FString                                     m_Command[0x8];                                           // 0x0040(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BoardWnd");
		return ptr;
	}


	void STATIC_OnClickBookmark();
	void STATIC_ShowBBSTab(int Index);
	void STATIC_HandleShowBoardPacket(const struct FString& param);
	void STATIC_HandleShowBBS(const struct FString& param);
	void Clear();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMFindTreeWnd
// 0x0028 (0x0064 - 0x003C)
class UGMFindTreeWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	TArray<struct FString>                             m_ComboList;                                              // 0x0040(0x000C) (NeedCtorLink)
	struct FString                                     m_WindowName;                                             // 0x004C(0x000C) (NeedCtorLink)
	unsigned long                                      bSummon : 1;                                              // 0x0058(0x0004)
	unsigned long                                      bShow : 1;                                                // 0x0058(0x0004)
	struct FColor                                      Gold;                                                     // 0x005C(0x0004)
	class UListCtrlHandle*                             m_hFindTreeList;                                          // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMFindTreeWnd");
		return ptr;
	}


	void STATIC_ClearList();
	bool STATIC_GetSelectedListCtrlItem(struct FLVDataRecord* Record);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& ListCtrlID);
	void STATIC_FindAllItem(const struct FString& a_Param);
	void STATIC_FindAllNPC(const struct FString& a_Param);
	void STATIC_FindAllSkill(const struct FString& a_Param);
	void STATIC_ShowItemList(const struct FString& a_Param);
	void STATIC_ShowNPCList(const struct FString& a_Param);
	void STATIC_ShowSkillList(const struct FString& a_Param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
};


// Class Interface.TradeWnd
// 0x0000 (0x003C - 0x003C)
class UTradeWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TradeWnd");
		return ptr;
	}


	void Clear();
	void STATIC_HandleDialogCancel();
	void STATIC_HandleDialogOK();
	void STATIC_HandleReceiveStartTrade(const struct FString& param);
	void STATIC_HandleTradeUpdateInventoryItem(const struct FString& param);
	void STATIC_HandleTradeOtherOK(const struct FString& param);
	void STATIC_HandleTradeDone(const struct FString& param);
	void STATIC_HandleTradeAddItem(const struct FString& param);
	void STATIC_HandleStartTrade(const struct FString& param);
	void STATIC_HandleMoveButton();
	void STATIC_MoveToMyList(int Index, const struct FINT64& Num);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnDBClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_OnEvent(int EventID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnSendPacketWhenHiding();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMSnoopWnd
// 0x00B0 (0x00EC - 0x003C)
class UGMSnoopWnd : public UUICommonAPI
{
public:
	int                                                m_SnoopIDList[0x4];                                       // 0x003C(0x0004)
	class UWindowHandle*                               m_hSnoopWndList[0x4];                                     // 0x004C(0x0004)
	class UTextListBoxHandle*                          m_hSnoopChatWndList[0x4];                                 // 0x005C(0x0004)
	class UButtonHandle*                               m_hCancelButtonList[0x4];                                 // 0x006C(0x0004)
	class UCheckBoxHandle*                             m_hCheckBox[0x1C];                                        // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMSnoopWnd");
		return ptr;
	}


	bool STATIC_IsFiltered(TEnumAsByte<EChatType> a_Type, int a_SnoopIndex);
	int STATIC_GetSnoopIndexByID(int a_SnoopID);
	bool STATIC_GetSnoopWnd(int a_SnoopID, const struct FString& a_CharacterName, class UWindowHandle** a_hSnoopWnd, class UTextListBoxHandle** a_hSnoopChatWnd, int* a_SnoopIndex);
	void STATIC_ClearSnoop(int a_SnoopIndex);
	void STATIC_ClearAllSnoop();
	void STATIC_HandleGMSnoop(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickButtonWithHandle(class UButtonHandle* a_ButtonHandle);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_InitHandleCOD();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PartyWndOption
// 0x003C (0x0078 - 0x003C)
class UPartyWndOption : public UUIScript
{
public:
	unsigned long                                      m_OptionShow : 1;                                         // 0x003C(0x0004)
	int                                                m_arrPetIDOpen[0x9];                                      // 0x0040(0x0004)
	class UWindowHandle*                               m_PartyOption;                                            // 0x0064(0x0004)
	class UWindowHandle*                               m_PartyWndBig;                                            // 0x0068(0x0004)
	class UWindowHandle*                               m_PartyWndSmall;                                          // 0x006C(0x0004)
	class UCheckBoxHandle*                             m_CheckShowAllPet;                                        // 0x0070(0x0004)
	class UCheckBoxHandle*                             m_CheckHideAllPet;                                        // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PartyWndOption");
		return ptr;
	}


	void STATIC_ShowPartyWndOption();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_SwapBigandSmall();
	void STATIC_OnClickCheckBox(const struct FString& CheckBoxID);
	void STATIC_OnShow();
	void STATIC_OnLoad();
};


// Class Interface.SystemTutorialBtnWnd
// 0x0004 (0x0040 - 0x003C)
class USystemTutorialBtnWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               SystemTutorialBtnWnd;                                     // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SystemTutorialBtnWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& btnName);
	void STATIC_OnEnterState(const struct FName& a_PrevStateName);
	void STATIC_OnShow();
	void STATIC_OnLoad();
};


// Class Interface.TeleportBookMarkDrawerWnd
// 0x0048 (0x0084 - 0x003C)
class UTeleportBookMarkDrawerWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              txtHead;                                                  // 0x0040(0x0004)
	class UTextBoxHandle*                              txtSaveSlotHead;                                          // 0x0044(0x0004)
	class UEditBoxHandle*                              EditCurrentSaveBookMarkName;                              // 0x0048(0x0004)
	class UTextBoxHandle*                              txtIconName;                                              // 0x004C(0x0004)
	class UTextBoxHandle*                              txtTeleportBookMarkDrawerWndNameHead;                     // 0x0050(0x0004)
	class UEditBoxHandle*                              EditCurrentSaveBookMarkIcn;                               // 0x0054(0x0004)
	class UTextureHandle*                              TexItemTemplate;                                          // 0x0058(0x0004)
	class UButtonHandle*                               btnIconPrev;                                              // 0x005C(0x0004)
	class UButtonHandle*                               btnIconNext;                                              // 0x0060(0x0004)
	class UButtonHandle*                               btnSave;                                                  // 0x0064(0x0004)
	class UButtonHandle*                               btnCancel;                                                // 0x0068(0x0004)
	class UTextBoxHandle*                              txtSaveLocHead;                                           // 0x006C(0x0004)
	class UTextBoxHandle*                              txtSaveName;                                              // 0x0070(0x0004)
	class UTextBoxHandle*                              txtSaveSlotID;                                            // 0x0074(0x0004)
	class UTextureHandle*                              IconBack;                                                 // 0x0078(0x0004)
	class UTextBoxHandle*                              txtTeleportFlagCount;                                     // 0x007C(0x0004)
	int                                                m_CurIconNum;                                             // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TeleportBookMarkDrawerWnd");
		return ptr;
	}


	void STATIC_InitializeUI();
	void STATIC_UpdateIcon();
	void STATIC_OnbtnCancelClick();
	void STATIC_OnbtnSaveClick();
	void STATIC_OnbtnIconNextClick();
	void STATIC_OnbtnIconPrevClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_UpdateCurrentLocation();
	void STATIC_OnShow();
	void STATIC_UpdateIconName();
	void STATIC_OnChangeEditBox(const struct FString& strID);
	void STATIC_OnEvent(int EventID, const struct FString& param);
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnRegisterEvent();
	void STATIC_OnLoad();
};


// Class Interface.MoviePlayerWnd
// 0x0008 (0x0044 - 0x003C)
class UMoviePlayerWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_hMoviePlayerWnd;                                        // 0x003C(0x0004)
	class UVideoPlayerCtrlHandle*                      MoviePlayerCtrl;                                          // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MoviePlayerWnd");
		return ptr;
	}


	void STATIC_FullScreenMoviePlayer();
	void STATIC_ResizeMoviePlayer();
	void STATIC_HideMoviePlayer();
	void STATIC_ShowMoviePlayer();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.OlympiadBuffWnd
// 0x0014 (0x0050 - 0x003C)
class UOlympiadBuffWnd : public UUICommonAPI
{
public:
	int                                                m_PlayerNum;                                              // 0x003C(0x0004)
	int                                                m_PlayerID;                                               // 0x0040(0x0004)
	struct FString                                     m_WindowName;                                             // 0x0044(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadBuffWnd");
		return ptr;
	}


	void STATIC_HandleBuffInfo(const struct FString& param);
	void STATIC_HandleBuffShow(const struct FString& param);
	void Clear();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
	void STATIC_SetPlayerNum(int PlayerNum);
};


// Class Interface.DeliverWnd
// 0x0004 (0x0040 - 0x003C)
class UDeliverWnd : public UUICommonAPI
{
public:
	int                                                m_targetID;                                               // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.DeliverWnd");
		return ptr;
	}


	void STATIC_HandleOKButton();
	void STATIC_AdjustPrice();
	void STATIC_HandleAddItem(const struct FString& param);
	void STATIC_HandleOpenWindow(const struct FString& param);
	void STATIC_ItemBottomToTop(const struct FItemID& cID, const struct FINT64& Num);
	void STATIC_ItemTopToBottom(const struct FItemID& cID, const struct FINT64& Num);
	void STATIC_HandleDialogOK();
	void STATIC_MoveItemBottomToTop(int Index, const struct FINT64& AllItemCount);
	void STATIC_MoveItemTopToBottom(int Index, const struct FINT64& AllItemCount);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& Info, int X, int Y);
	void STATIC_OnClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnDBClickItem(const struct FString& ControlName, int Index);
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void Clear();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PCCafeEventWnd
// 0x0020 (0x005C - 0x003C)
class UPCCafeEventWnd : public UUICommonAPI
{
public:
	int                                                m_TotalPoint;                                             // 0x003C(0x0004)
	int                                                m_AddPoint;                                               // 0x0040(0x0004)
	int                                                m_PeriodType;                                             // 0x0044(0x0004)
	int                                                m_RemainTime;                                             // 0x0048(0x0004)
	int                                                m_PointType;                                              // 0x004C(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0050(0x0004)
	class UWindowHandle*                               HelpButton;                                               // 0x0054(0x0004)
	unsigned long                                      m_showMeTheMoney : 1;                                     // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PCCafeEventWnd");
		return ptr;
	}


	void STATIC_HandleToggleShowPCCafeEventWnd();
	struct FCustomTooltip STATIC_SetTooltip(const struct FString& Text);
	struct FString STATIC_GetHelpButtonTooltipText();
	void STATIC_Refresh(int nShow);
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	bool STATIC_IsPCCafeEventOpened();
	void STATIC_HandlePCCafePointInfo(const struct FString& a_Param);
	void STATIC_OnClickHelpButton();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickButton(const struct FString& a_ButtonID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CleftCounter
// 0x0038 (0x0074 - 0x003C)
class UCleftCounter : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              TeamACount;                                               // 0x0040(0x0004)
	class UTextBoxHandle*                              TeamBCount;                                               // 0x0044(0x0004)
	class UTextBoxHandle*                              TimerCount;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              TimerCountTitle;                                          // 0x004C(0x0004)
	class UTextBoxHandle*                              CountCenter;                                              // 0x0050(0x0004)
	int                                                Min;                                                      // 0x0054(0x0004)
	int                                                Sec;                                                      // 0x0058(0x0004)
	struct FString                                     MinStr;                                                   // 0x005C(0x000C) (NeedCtorLink)
	struct FString                                     SecStr;                                                   // 0x0068(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CleftCounter");
		return ptr;
	}


	void STATIC_HandleHide();
	void STATIC_ResetCurrentStat();
	void STATIC_TimerReset(int RemainTime);
	void STATIC_UpdateTimerCount();
	void STATIC_DrawTimerCount();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandleCleftStatePlayer(const struct FString& param);
	void STATIC_HandleCleftStateTeam(const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnHide();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.EventMatchSpecialMsgWnd
// 0x0004 (0x0040 - 0x003C)
class UEventMatchSpecialMsgWnd : public UUICommonAPI
{
public:
	class UTextureHandle*                              MessageTex;                                               // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.EventMatchSpecialMsgWnd");
		return ptr;
	}


	void STATIC_HandleEventMatchGMMessage(const struct FString& a_Param);
	void STATIC_OnTimer(int a_TimerID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.KillpointCounterWnd
// 0x003C (0x0078 - 0x003C)
class UKillpointCounterWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               MEBtn;                                                    // 0x0040(0x0004)
	class UTextBoxHandle*                              KillPointTxt;                                             // 0x0044(0x0004)
	class UTextBoxHandle*                              MinTxt;                                                   // 0x0048(0x0004)
	class UTextBoxHandle*                              SecTxt;                                                   // 0x004C(0x0004)
	class UTextBoxHandle*                              DividerTxt;                                               // 0x0050(0x0004)
	int                                                Min;                                                      // 0x0054(0x0004)
	int                                                Sec;                                                      // 0x0058(0x0004)
	struct FString                                     MinStr;                                                   // 0x005C(0x000C) (NeedCtorLink)
	struct FString                                     SecStr;                                                   // 0x0068(0x000C) (NeedCtorLink)
	unsigned long                                      m_InGameBool : 1;                                         // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.KillpointCounterWnd");
		return ptr;
	}


	void STATIC_OnHide();
	void STATIC_TimerReset();
	void STATIC_UpdateTimerCount();
	void STATIC_OnTimer(int TimerID);
	void STATIC_LaunchTimer();
	void STATIC_UpdateMyKillPoint(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UnrefineryWnd
// 0x01DC (0x0218 - 0x003C)
class UUnrefineryWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_UnRefineryWnd_Main;                                     // 0x003C(0x0004)
	class UWindowHandle*                               m_ItemtoUnRefineWnd;                                      // 0x0040(0x0004)
	class UWindowHandle*                               m_ItemtoUnRefineAnim;                                     // 0x0044(0x0004)
	class UWindowHandle*                               m_hSelectedItemHighlight;                                 // 0x0048(0x0004)
	class UWindowHandle*                               m_ResultAnimation1;                                       // 0x004C(0x0004)
	class UTextBoxHandle*                              m_InstructionText;                                        // 0x0050(0x0004)
	class UTextBoxHandle*                              m_AdenaText;                                              // 0x0054(0x0004)
	class UButtonHandle*                               m_hUnrefineButton;                                        // 0x0058(0x0004)
	class UButtonHandle*                               m_OkBtn;                                                  // 0x005C(0x0004)
	class UItemWindowHandle*                           m_ItemDragBox;                                            // 0x0060(0x0004)
	class UProgressCtrlHandle*                         m_UnRefineryProgress;                                     // 0x0064(0x0004)
	struct FItemInfo                                   CurrentItem;                                              // 0x0068(0x01A8) (NeedCtorLink)
	struct FINT64                                      m_Adena;                                                  // 0x0210(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UnrefineryWnd");
		return ptr;
	}


	void STATIC_OnProgressTimeUp(const struct FString& strID);
	void STATIC_OnUnRefineDoneResult(const struct FString& a_Param);
	void STATIC_OnUnRefineRequest();
	void STATIC_PlayProgressiveBar();
	bool STATIC_CheckAdena();
	void STATIC_OnClickUnRefineButton();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_SetAdenaText(const struct FString& a_AdenaText);
	void STATIC_OnTargetItemValidationResult(const struct FString& a_Param);
	void STATIC_ValidateItem(const struct FItemInfo& a_ItemInfo);
	void STATIC_OnDropItem(const struct FString& a_WindowID, const struct FItemInfo& a_ItemInfo, int X, int Y);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_ResetReady();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.OlympiadTargetWnd
// 0x0030 (0x006C - 0x003C)
class UOlympiadTargetWnd : public UUIScript
{
public:
	class UBarHandle*                                  m_BarCP;                                                  // 0x003C(0x0004)
	class UBarHandle*                                  m_BarHP;                                                  // 0x0040(0x0004)
	int                                                m_PlayerNum;                                              // 0x0044(0x0004)
	int                                                m_id;                                                     // 0x0048(0x0004)
	struct FString                                     m_Name;                                                   // 0x004C(0x000C) (NeedCtorLink)
	int                                                m_ClassID;                                                // 0x0058(0x0004)
	int                                                m_MaxHP;                                                  // 0x005C(0x0004)
	int                                                m_CurHP;                                                  // 0x0060(0x0004)
	int                                                m_MaxCP;                                                  // 0x0064(0x0004)
	int                                                m_CurCP;                                                  // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadTargetWnd");
		return ptr;
	}


	void STATIC_UpdateStatus();
	void STATIC_HandleUserInfo(const struct FString& param);
	void Clear();
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.FlightShipCtrlWnd
// 0x003C (0x0078 - 0x003C)
class UFlightShipCtrlWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               ShortcutWnd;                                              // 0x0040(0x0004)
	class UCheckBoxHandle*                             Chk_EnterChatting;                                        // 0x0044(0x0004)
	class UTextBoxHandle*                              AltitudeTxt;                                              // 0x0048(0x0004)
	class UTextureHandle*                              SelectTex;                                                // 0x004C(0x0004)
	class UButtonHandle*                               UpButton;                                                 // 0x0050(0x0004)
	class UButtonHandle*                               DownButton;                                               // 0x0054(0x0004)
	class UButtonHandle*                               LockBtn;                                                  // 0x0058(0x0004)
	class UButtonHandle*                               UnlockBtn;                                                // 0x005C(0x0004)
	class UButtonHandle*                               JoypadBtn;                                                // 0x0060(0x0004)
	class UEditBoxHandle*                              ChatEditBox;                                              // 0x0064(0x0004)
	class UShortcutWnd*                                scriptShortcutWnd;                                        // 0x0068(0x0004)
	int                                                i;                                                        // 0x006C(0x0004)
	unsigned long                                      preEnterChattingOption : 1;                               // 0x0070(0x0004)
	unsigned long                                      m_IsLocked : 1;                                           // 0x0070(0x0004)
	unsigned long                                      m_preDriver : 1;                                          // 0x0070(0x0004)
	unsigned long                                      isNowActiveFlightShipShortcut : 1;                        // 0x0070(0x0004)
	int                                                preSlot;                                                  // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.FlightShipCtrlWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnReserveShortCut(const struct FString& a_Param);
	void STATIC_ExecuteShortcutCommandBySlot(const struct FString& a_Param);
	void STATIC_HandleShortcutClear();
	void STATIC_HandleShortcutUpdate(const struct FString& param);
	void STATIC_ShortCutUpdateAll();
	void STATIC_OnAirShipAltitude(const struct FString& a_Param);
	void STATIC_OnAirShipState(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_updateLockButton();
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PVPCounter
// 0x003C (0x0078 - 0x003C)
class UPVPCounter : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              CountA;                                                   // 0x0040(0x0004)
	class UTextBoxHandle*                              CountB;                                                   // 0x0044(0x0004)
	class UTextBoxHandle*                              TimerCount;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              TimerCountDetail;                                         // 0x004C(0x0004)
	class UTextBoxHandle*                              TimerCountTitle;                                          // 0x0050(0x0004)
	class UTextBoxHandle*                              TimerCountTitleDetail;                                    // 0x0054(0x0004)
	int                                                Min;                                                      // 0x0058(0x0004)
	int                                                Sec;                                                      // 0x005C(0x0004)
	struct FString                                     MinStr;                                                   // 0x0060(0x000C) (NeedCtorLink)
	struct FString                                     SecStr;                                                   // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PVPCounter");
		return ptr;
	}


	void STATIC_ResetCurrentStat();
	void STATIC_UpdateCurrentStat(int BlueCountInt, int RedCountInt);
	void STATIC_TimerReset();
	void STATIC_ResetWnd();
	void STATIC_UpdateTimerCount();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandlePVPMatchUserDie(const struct FString& param);
	void STATIC_HandlePVPMatchRecordEachUserInfo(const struct FString& param);
	void STATIC_HandlePVPMatchRecord(const struct FString& param);
	void STATIC_OnShow();
	void STATIC_OnHide();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.AgeWnd
// 0x0060 (0x009C - 0x003C)
class UAgeWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextureHandle*                              AgeTex;                                                   // 0x0040(0x0004)
	class UWindowHandle*                               HelpHtmlWnd;                                              // 0x0044(0x0004)
	class UWindowHandle*                               m_hHelpHtmlWndAgeHelpWnd;                                 // 0x0048(0x0004)
	class UTextureHandle*                              m_hHelpHtmlWndAgeHelpWndAgeTex;                           // 0x004C(0x0004)
	struct FString                                     Texture15;                                                // 0x0050(0x000C) (NeedCtorLink)
	struct FString                                     Texture18;                                                // 0x005C(0x000C) (NeedCtorLink)
	struct FString                                     TextureFree;                                              // 0x0068(0x000C) (NeedCtorLink)
	struct FString                                     HelpTexture15;                                            // 0x0074(0x000C) (NeedCtorLink)
	struct FString                                     HelpTexture18;                                            // 0x0080(0x000C) (NeedCtorLink)
	struct FString                                     HelpTextureFree;                                          // 0x008C(0x000C) (NeedCtorLink)
	unsigned long                                      bBlock : 1;                                               // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AgeWnd");
		return ptr;
	}


	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnTimer(int TimerID);
	void STATIC_startAge();
	void STATIC_OnEnterState(const struct FName& a_PrevStateName);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MacroListWnd
// 0x0010 (0x004C - 0x003C)
class UMacroListWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	struct FItemID                                     m_DeleteItemID;                                           // 0x0040(0x0008)
	int                                                m_Max;                                                    // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MacroListWnd");
		return ptr;
	}


	void STATIC_EditMacro(const struct FItemInfo& infItem);
	void STATIC_DeleteMacro(const struct FItemInfo& infItem);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_HandleMacroList(const struct FString& param);
	void Clear();
	void STATIC_HandleMacroShowListWnd();
	void STATIC_HandleMacroUpdate();
	void STATIC_OnClickAdd();
	void STATIC_OnClickHelp();
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.AttributeEnchantWnd
// 0x01BC (0x01F8 - 0x003C)
class UAttributeEnchantWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UItemWindowHandle*                           ItemWnd;                                                  // 0x0040(0x0004)
	class UTextBoxHandle*                              TextBox;                                                  // 0x0044(0x0004)
	class UButtonHandle*                               OKButton;                                                 // 0x0048(0x0004)
	struct FItemInfo                                   SelectItemInfo;                                           // 0x004C(0x01A8) (NeedCtorLink)
	int                                                ScrollCID;                                                // 0x01F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AttributeEnchantWnd");
		return ptr;
	}


	void STATIC_HandleAttributeEnchantResult(const struct FString& param);
	void STATIC_HandleAttributeEnchantItemList(const struct FString& param);
	void STATIC_HandleAttributeEnchantHide();
	void STATIC_HandleAttributeEnchantShow(const struct FString& param);
	void Clear();
	void STATIC_OnCancelClick();
	void STATIC_OnOKClick();
	void STATIC_OnOkClickProgress();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.RadarOptionWnd
// 0x0028 (0x0064 - 0x003C)
class URadarOptionWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              txtRadarOption;                                           // 0x0040(0x0004)
	class UCheckBoxHandle*                             checkPartyView;                                           // 0x0044(0x0004)
	class UCheckBoxHandle*                             checkMonsterView;                                         // 0x0048(0x0004)
	class UCheckBoxHandle*                             checkMyPos;                                               // 0x004C(0x0004)
	class UCheckBoxHandle*                             checkFixView;                                             // 0x0050(0x0004)
	class UTextureHandle*                              checkBg;                                                  // 0x0054(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0058(0x0004)
	class UWindowHandle*                               m_RadarMapWnd;                                            // 0x005C(0x0004)
	unsigned long                                      showMonster : 1;                                          // 0x0060(0x0004)
	unsigned long                                      hideParty : 1;                                            // 0x0060(0x0004)
	unsigned long                                      showMe : 1;                                               // 0x0060(0x0004)
	unsigned long                                      fixRadar : 1;                                             // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RadarOptionWnd");
		return ptr;
	}


	void STATIC_OnClickCheckBox(const struct FString& CheckBoxID);
	void STATIC_HandleBtnClose();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
};


// Class Interface.AttributeRemoveWnd
// 0x01D4 (0x0210 - 0x003C)
class UAttributeRemoveWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              txtRemoveAdenaStr;                                        // 0x0040(0x0004)
	class UTextBoxHandle*                              txtRemoveAdena;                                           // 0x0044(0x0004)
	class UTextBoxHandle*                              txtItemSelectStr;                                         // 0x0048(0x0004)
	class UItemWindowHandle*                           ItemWnd;                                                  // 0x004C(0x0004)
	class UTextureHandle*                              ItemWndBg;                                                // 0x0050(0x0004)
	class UTextureHandle*                              txtRemoveAdenaBg;                                         // 0x0054(0x0004)
	class UTextureHandle*                              ItemWndScrollBg;                                          // 0x0058(0x0004)
	class UButtonHandle*                               btnOK;                                                    // 0x005C(0x0004)
	class UButtonHandle*                               btnCancel;                                                // 0x0060(0x0004)
	struct FItemInfo                                   SelectItemInfo;                                           // 0x0064(0x01A8) (NeedCtorLink)
	class UInventoryWnd*                               script;                                                   // 0x020C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.AttributeRemoveWnd");
		return ptr;
	}


	void STATIC_HandleAttributeRemoveResult(const struct FString& param);
	void STATIC_HandleAttributeRemoveItemData(const struct FString& param);
	void STATIC_HandleAttributeRemoveShow(const struct FString& param);
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnbtnCancelClick();
	void STATIC_OnbtnOKClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PVPDetailedWnd
// 0x004C (0x0088 - 0x003C)
class UPVPDetailedWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              CountA;                                                   // 0x0040(0x0004)
	class UTextBoxHandle*                              CountB;                                                   // 0x0044(0x0004)
	class UTextBoxHandle*                              PartyNameA;                                               // 0x0048(0x0004)
	class UTextBoxHandle*                              PartyNameB;                                               // 0x004C(0x0004)
	class UTextBoxHandle*                              PartyNameADesktop;                                        // 0x0050(0x0004)
	class UTextBoxHandle*                              PartyNameBDesktop;                                        // 0x0054(0x0004)
	class UListCtrlHandle*                             PKListA;                                                  // 0x0058(0x0004)
	class UListCtrlHandle*                             PKListB;                                                  // 0x005C(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0060(0x0004)
	class UTextureHandle*                              ResultA;                                                  // 0x0064(0x0004)
	class UTextureHandle*                              ResultB;                                                  // 0x0068(0x0004)
	class UTextureHandle*                              ResultBWin;                                               // 0x006C(0x0004)
	class UTextureHandle*                              PKListAGroupBox;                                          // 0x0070(0x0004)
	class UTextureHandle*                              PKListBGroupBox;                                          // 0x0074(0x0004)
	class UTextBoxHandle*                              TimerCountTitle;                                          // 0x0078(0x0004)
	class UTextBoxHandle*                              TimerCount;                                               // 0x007C(0x0004)
	int                                                TotalCountA;                                              // 0x0080(0x0004)
	int                                                TotalCountB;                                              // 0x0084(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PVPDetailedWnd");
		return ptr;
	}


	void STATIC_UpdateCurrentStat(int BlueCountInt, int RedCountInt);
	void STATIC_FinalCount(int WinnerIndex, int LoserIndex);
	void STATIC_ResetUI();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandlePVPMatchUserDie(const struct FString& param);
	void STATIC_HandlePVPMatchRecordEachUserInfo(const struct FString& param);
	void STATIC_HandlePVPMatchRecord(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.NPCDialogWnd
// 0x0014 (0x0050 - 0x003C)
class UNPCDialogWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hNPCDialogWnd;                                          // 0x0048(0x0004)
	class UHtmlHandle*                                 m_hHtmlViewer;                                            // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.NPCDialogWnd");
		return ptr;
	}


	void STATIC_HandleLoadHtmlFromString(const struct FString& param);
	void STATIC_OnHtmlMsgHideWindow(class UHtmlHandle* a_HtmlHandle);
	void STATIC_ShowNPCDialogWindow();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.LoadingAniWnd
// 0x0004 (0x0040 - 0x003C)
class ULoadingAniWnd : public UUIScript
{
public:
	class UTextureHandle*                              LoadingAniTexture;                                        // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingAniWnd");
		return ptr;
	}


	void STATIC_CheckResolution();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.TutorialViewerWnd
// 0x0000 (0x003C - 0x003C)
class UTutorialViewerWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TutorialViewerWnd");
		return ptr;
	}


	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UnionDetailWnd
// 0x0010 (0x004C - 0x003C)
class UUnionDetailWnd : public UUICommonAPI
{
public:
	int                                                m_MasterID;                                               // 0x003C(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0040(0x0004)
	class UTextBoxHandle*                              txtMasterName;                                            // 0x0044(0x0004)
	class UListCtrlHandle*                             lstPartyMember;                                           // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UnionDetailWnd");
		return ptr;
	}


	void STATIC_HandleCommandChannelPartyMember(const struct FString& param);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnCloseClick();
	void STATIC_OnClickButton(const struct FString& strID);
	void Clear();
	int STATIC_GetMasterID();
	void STATIC_SetMasterInfo(const struct FString& masterName, int MasterID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ZoneTitleWnd
// 0x0018 (0x0054 - 0x003C)
class UZoneTitleWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hZoneTitleWnd;                                          // 0x0048(0x0004)
	class UTextBoxHandle*                              m_hTbZoneNameBack;                                        // 0x004C(0x0004)
	class UTextBoxHandle*                              m_hTbZoneNameFront;                                       // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ZoneTitleWnd");
		return ptr;
	}


	void STATIC_OnTimer(int TimerID);
	void STATIC_BeginShowZoneName(const struct FString& ZoneName, const struct FString& SubZoneName1, const struct FString& SubZoneName2);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UIEditor_PropertyController
// 0x0010 (0x004C - 0x003C)
class UUIEditor_PropertyController : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               m_CurPropertyWnd;                                         // 0x0040(0x0004)
	class UPropertyControllerHandle*                   ctlProperty;                                              // 0x0044(0x0004)
	class UWindowHandle*                               areaScroll;                                               // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UIEditor_PropertyController");
		return ptr;
	}


	void STATIC_HandleEditorUpdateProperty(const struct FString& param);
	void STATIC_HandleTrackerDetach();
	void STATIC_HandleTrackerAttach(const struct FString& param);
	void Clear();
	void STATIC_OnPropertyControllerResize(int a_Height);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitControlItem();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BirthdayAlarmBtn
// 0x000C (0x0048 - 0x003C)
class UBirthdayAlarmBtn : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               BirthdayAlarmWnd;                                         // 0x0040(0x0004)
	class UButtonHandle*                               btnItemPop;                                               // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BirthdayAlarmBtn");
		return ptr;
	}


	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PremiumItemBtnWnd
// 0x000C (0x0048 - 0x003C)
class UPremiumItemBtnWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               AlarmWnd;                                                 // 0x0040(0x0004)
	class UButtonHandle*                               btnItemPop;                                               // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PremiumItemBtnWnd");
		return ptr;
	}


	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& Name);
	void Clear();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorCropInfoChangeWnd
// 0x0018 (0x0054 - 0x003C)
class UManorCropInfoChangeWnd : public UUICommonAPI
{
public:
	struct FINT64                                      m_MinCropPrice;                                           // 0x003C(0x0008)
	struct FINT64                                      m_MaxCropPrice;                                           // 0x0044(0x0008)
	struct FINT64                                      m_TomorrowLimit;                                          // 0x004C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorCropInfoChangeWnd");
		return ptr;
	}


	void STATIC_ShowErrorDialog(const struct FINT64& MinValue, const struct FINT64& MaxValue, int SystemStringIdx);
	void STATIC_OnClickBtnOk();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleShow(const struct FString& a_Param);
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorCropSellChangeWnd
// 0x0014 (0x0050 - 0x003C)
class UManorCropSellChangeWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hManorCropSellChangeWndManorCropSellChangeListCtrl;     // 0x0048(0x0004)
	class UListCtrlHandle*                             m_hManorCropSellWndManorCropSellListCtrl;                 // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorCropSellChangeWnd");
		return ptr;
	}


	struct FINT64 STATIC_GetMyCropCnt(int ManorID);
	struct FLVDataRecord STATIC_GetComboBoxSelectedRecord();
	int STATIC_GetComboBoxSelectedManorID();
	void STATIC_HandleOkBtn();
	void STATIC_HandleMaxButton();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleAddItem(const struct FString& a_Param);
	void STATIC_HandleSetCropNameAndRewardType(const struct FString& a_Param);
	void Clear();
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MenuWnd
// 0x0014 (0x0050 - 0x003C)
class UMenuWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me1;                                                      // 0x003C(0x0004)
	class UWindowHandle*                               Me2;                                                      // 0x0040(0x0004)
	class UButtonHandle*                               btnRotate1;                                               // 0x0044(0x0004)
	class UButtonHandle*                               btnRotate2;                                               // 0x0048(0x0004)
	class UWindowHandle*                               m_hSystemMenuWnd;                                         // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MenuWnd");
		return ptr;
	}


	void STATIC_ToggleOpenSystemMenuWnd();
	void STATIC_ToggleOpenMinimapWnd();
	void STATIC_ToggleOpenInventoryWnd();
	void STATIC_ToggleOpenCharInfoWnd();
	void STATIC_ToggleOpenQuestWnd();
	void STATIC_ToggleOpenClanWnd();
	void STATIC_ToggleOpenActionWnd();
	void STATIC_ToggleOpenSkillWnd();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnRotate2();
	void STATIC_OnRotate1();
	void STATIC_OnShowProcess();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ManorSeedInfoChangeWnd
// 0x0018 (0x0054 - 0x003C)
class UManorSeedInfoChangeWnd : public UUICommonAPI
{
public:
	struct FINT64                                      m_MinCropPrice;                                           // 0x003C(0x0008)
	struct FINT64                                      m_MaxCropPrice;                                           // 0x0044(0x0008)
	struct FINT64                                      m_TomorrowLimit;                                          // 0x004C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ManorSeedInfoChangeWnd");
		return ptr;
	}


	void STATIC_ShowErrorDialog(const struct FINT64& MinValue, const struct FINT64& MaxValue, int SystemStringIdx);
	void STATIC_OnClickBtnOk();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_HandleShow(const struct FString& a_Param);
	void STATIC_OnEvent(int Event_ID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ActionWnd
// 0x0004 (0x0040 - 0x003C)
class UActionWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ActionWnd");
		return ptr;
	}


	void STATIC_HandleActionListNew();
	void STATIC_HandleActionList(const struct FString& param);
	void Clear();
	void STATIC_HandleActionListStart();
	void STATIC_HandleLanguageChanged();
	void STATIC_HideScrollBar();
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SystemMenuWnd
// 0x0010 (0x004C - 0x003C)
class USystemMenuWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_hOptionWnd;                                             // 0x003C(0x0004)
	class UWindowHandle*                               m_hUserPetitionWnd;                                       // 0x0040(0x0004)
	class UTextBoxHandle*                              m_hTbBBS;                                                 // 0x0044(0x0004)
	class UTextBoxHandle*                              m_hTbMacro;                                               // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SystemMenuWnd");
		return ptr;
	}


	void STATIC_SetMenuString();
	void STATIC_HandleShowOptionWnd();
	void STATIC_HandleShowPetitionBegin();
	void STATIC_HandleShowMacroListWnd();
	void STATIC_HandleShowHelpHtmlWnd();
	void STATIC_HandleShowBoardWnd();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MiniMapDrawerWnd
// 0x0028 (0x0064 - 0x003C)
class UMiniMapDrawerWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               GuideWnd;                                                 // 0x0040(0x0004)
	class UTabHandle*                                  TrackItemTab;                                             // 0x0044(0x0004)
	class UListCtrlHandle*                             ListTrackItem1;                                           // 0x0048(0x0004)
	class UListCtrlHandle*                             ListTrackItem2;                                           // 0x004C(0x0004)
	class UListCtrlHandle*                             ListTrackItem3;                                           // 0x0050(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0054(0x0004)
	class UMinimapCtrlHandle*                          Minimap;                                                  // 0x0058(0x0004)
	class UWindowHandle*                               m_hSystemMenuWnd;                                         // 0x005C(0x0004)
	class UMinimapWnd*                                 m_MiniMapWndScript;                                       // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MiniMapDrawerWnd");
		return ptr;
	}


	void STATIC_OnClickListCtrlRecord(const struct FString& Id);
	void STATIC_InsertQuestTrackList();
	void STATIC_OnShow();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SystemMsgWnd
// 0x0000 (0x003C - 0x003C)
class USystemMsgWnd : public UUIScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SystemMsgWnd");
		return ptr;
	}


	void STATIC_ChangeAnchorEffectButton(const struct FString& strID);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MacroInfoWnd
// 0x0010 (0x004C - 0x003C)
class UMacroInfoWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	struct FString                                     m_strInfo;                                                // 0x0040(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MacroInfoWnd");
		return ptr;
	}


	void Clear();
	void STATIC_OnClickCancel();
	void STATIC_OnClickOk();
	struct FString STATIC_GetInfoText();
	void STATIC_SetInfoText(const struct FString& strInfo);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
};


// Class Interface.LoginMenuWnd
// 0x0004 (0x0040 - 0x003C)
class ULoginMenuWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_hOptionWnd;                                             // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoginMenuWnd");
		return ptr;
	}


	void STATIC_ShowOptionWnd();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
};


// Class Interface.ReplayListWnd
// 0x0018 (0x0054 - 0x003C)
class UReplayListWnd : public UUIScript
{
public:
	TArray<struct FString>                             m_StrFileList;                                            // 0x003C(0x000C) (NeedCtorLink)
	class UListCtrlHandle*                             m_hRecordList;                                            // 0x0048(0x0004)
	class UCheckBoxHandle*                             m_hChkCameraInst;                                         // 0x004C(0x0004)
	class UCheckBoxHandle*                             m_hChkChatData;                                           // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayListWnd");
		return ptr;
	}


	void STATIC_OnDelete();
	void STATIC_OnOk();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& ListCtrlID);
	struct FString STATIC_GetSelectedFileName();
	void STATIC_AddItem(int iNum, const struct FString& strFileName);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitReplayList();
	void STATIC_OnShow();
	void STATIC_OnLoad();
};


// Class Interface.RestartMenuWnd
// 0x0020 (0x005C - 0x003C)
class URestartMenuWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)
	unsigned long                                      m_bRestartON : 1;                                         // 0x003C(0x0004)
	unsigned long                                      m_bVillage : 1;                                           // 0x003C(0x0004)
	unsigned long                                      m_bAgit : 1;                                              // 0x003C(0x0004)
	unsigned long                                      m_bCastle : 1;                                            // 0x003C(0x0004)
	unsigned long                                      m_bBattleCamp : 1;                                        // 0x003C(0x0004)
	unsigned long                                      m_bOriginal : 1;                                          // 0x003C(0x0004)
	unsigned long                                      m_bFotress : 1;                                           // 0x003C(0x0004)
	class UWindowHandle*                               m_wndTop;                                                 // 0x0040(0x0004)
	class UButtonHandle*                               m_btnVillage;                                             // 0x0044(0x0004)
	class UButtonHandle*                               m_btnAgit;                                                // 0x0048(0x0004)
	class UButtonHandle*                               m_btnCastle;                                              // 0x004C(0x0004)
	class UButtonHandle*                               m_btnBattleCamp;                                          // 0x0050(0x0004)
	class UButtonHandle*                               m_btnOriginal;                                            // 0x0054(0x0004)
	class UButtonHandle*                               m_btnFortress;                                            // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.RestartMenuWnd");
		return ptr;
	}


	void STATIC_HideMe();
	void STATIC_showMe();
	void STATIC_HandleRestart();
	void STATIC_HandleRestartMenuHide();
	void STATIC_HandleRestartMenuShow();
	void STATIC_HandleDie(const struct FString& param);
	void STATIC_OnFortressClick();
	void STATIC_OnOriginalClick();
	void STATIC_OnBattleCampClick();
	void STATIC_OnCastleClick();
	void STATIC_OnAgitClick();
	void STATIC_OnVillageClick();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ShaderBuild
// 0x0020 (0x005C - 0x003C)
class UShaderBuild : public UUIScript
{
public:
	class UOptionWnd*                                  m_OptionWndScript;                                        // 0x003C(0x0004)
	struct FString                                     m_PreStateName;                                           // 0x0040(0x000C) (NeedCtorLink)
	int                                                m_StartBuild;                                             // 0x004C(0x0004)
	int                                                m_OrgAntialiasing;                                        // 0x0050(0x0004)
	class UWindowHandle*                               GametipWnd;                                               // 0x0054(0x0004)
	class UWindowHandle*                               LoadingWnd;                                               // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ShaderBuild");
		return ptr;
	}


	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnTick();
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ProgressBox
// 0x0028 (0x0064 - 0x003C)
class UProgressBox : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               btnCancle;                                                // 0x0040(0x0004)
	class UTextBoxHandle*                              txtProgress;                                              // 0x0044(0x0004)
	unsigned long                                      m_bInUse : 1;                                             // 0x0048(0x0004)
	struct FString                                     m_strTargetScript;                                        // 0x004C(0x000C) (NeedCtorLink)
	struct FString                                     m_strEditMessage;                                         // 0x0058(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ProgressBox");
		return ptr;
	}


	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_SetMessage(const struct FString& strMessage);
	void STATIC_OnProgressTimeUp(const struct FString& strID);
	void STATIC_ShowDialog(const struct FString& Message, const struct FString& Target, int Time);
	void STATIC_OnbtnCancleClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UserPetitionWnd
// 0x0204 (0x0240 - 0x003C)
class UUserPetitionWnd : public UUICommonAPI
{
public:
	int                                                PetitionCategoryCount;                                    // 0x003C(0x0004)
	int                                                PetitionCategoryTitle[0x20];                              // 0x0040(0x0004)
	struct FString                                     PetitionCategoryLink[0x20];                               // 0x00C0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UserPetitionWnd");
		return ptr;
	}


	void Clear();
	void STATIC_OnClickCancelButton();
	void STATIC_OnClickOKButton();
	void STATIC_OnClickButton(const struct FString& a_ControlID);
	void STATIC_OnComboBoxItemSelected(const struct FString& a_ControlID, int a_SelectedIndex);
	void STATIC_HandleLoadPetitionHtml(const struct FString& a_Param);
	void STATIC_HandleShowUserPetitionWnd(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.XMasSealWnd
// 0x0014 (0x0050 - 0x003C)
class UXMasSealWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hXMasSealWnd;                                           // 0x0048(0x0004)
	class UTextureHandle*                              m_hTexItem;                                               // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.XMasSealWnd");
		return ptr;
	}


	void STATIC_HandleToggleXMasSealWndShowHide(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.KillpointRankTrigger
// 0x0008 (0x0044 - 0x003C)
class UKillpointRankTrigger : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UWindowHandle*                               KillPointRankWnd;                                         // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.KillpointRankTrigger");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PetitionFeedBackWnd
// 0x0000 (0x003C - 0x003C)
class UPetitionFeedBackWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PetitionFeedBackWnd");
		return ptr;
	}


	void STATIC_OnClickOKButton();
	void STATIC_OnClickButton(const struct FString& a_ControlID);
	void STATIC_OnHide();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
};


// Class Interface.PVPCounterTrigger
// 0x000C (0x0048 - 0x003C)
class UPVPCounterTrigger : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               Btn_PVPWnd;                                               // 0x0040(0x0004)
	class UWindowHandle*                               PVPDetailedWnd;                                           // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PVPCounterTrigger");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_HandlePVPMatchRecord(const struct FString& param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ItemDescWnd
// 0x0014 (0x0050 - 0x003C)
class UItemDescWnd : public UUICommonAPI
{
public:
	struct FString                                     m_WindowName;                                             // 0x003C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_hItemDescWnd;                                           // 0x0048(0x0004)
	class UHtmlHandle*                                 m_hHtmlViewer;                                            // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ItemDescWnd");
		return ptr;
	}


	void STATIC_HandleLoadHtmlFromString(const struct FString& param);
	void STATIC_HandleWindowTitle(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.UIEditor_DocumentInfo
// 0x0030 (0x006C - 0x003C)
class UUIEditor_DocumentInfo : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UEditBoxHandle*                              txtCommentInput;                                          // 0x0040(0x0004)
	struct FString                                     m_xmlnsInput;                                             // 0x0044(0x000C) (NeedCtorLink)
	struct FString                                     m_xsiInput;                                               // 0x0050(0x000C) (NeedCtorLink)
	struct FString                                     m_schemaLocationInput;                                    // 0x005C(0x000C) (NeedCtorLink)
	class UWindowHandle*                               m_CurTopWnd;                                              // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UIEditor_DocumentInfo");
		return ptr;
	}


	void Clear();
	void STATIC_HandleTrackerDetach();
	void STATIC_UpdateDocumentInfo();
	void STATIC_HandleTrackerAttach(const struct FString& param);
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_InitControlItem();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.CleftCurTriggerWnd
// 0x000C (0x0048 - 0x003C)
class UCleftCurTriggerWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               CleftCurTriggerBtn;                                       // 0x0040(0x0004)
	class UWindowHandle*                               CleftCurWnd;                                              // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.CleftCurTriggerWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BlockCurTriggerWnd
// 0x000C (0x0048 - 0x003C)
class UBlockCurTriggerWnd : public UUIScript
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               BlockCurTriggerBtn;                                       // 0x0040(0x0004)
	class UWindowHandle*                               BlockCurWnd;                                              // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BlockCurTriggerWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.EventMatchGMFenceWnd
// 0x0020 (0x005C - 0x003C)
class UEventMatchGMFenceWnd : public UUICommonAPI
{
public:
	class UButtonHandle*                               m_hOKButton;                                              // 0x003C(0x0004)
	class UButtonHandle*                               m_hCancelButton;                                          // 0x0040(0x0004)
	class UButtonHandle*                               m_hMyLocationButton;                                      // 0x0044(0x0004)
	class UEditBoxHandle*                              m_hXEditBox;                                              // 0x0048(0x0004)
	class UEditBoxHandle*                              m_hYEditBox;                                              // 0x004C(0x0004)
	class UEditBoxHandle*                              m_hZEditBox;                                              // 0x0050(0x0004)
	class UEditBoxHandle*                              m_hXLengthEditBox;                                        // 0x0054(0x0004)
	class UEditBoxHandle*                              m_hYLengthEditBox;                                        // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.EventMatchGMFenceWnd");
		return ptr;
	}


	void STATIC_OnClickMyLocationButton();
	void STATIC_OnClickCancelButton();
	void STATIC_OnClickOKButton();
	void STATIC_OnClickButtonWithHandle(class UButtonHandle* a_ButtonHandle);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.EventMatchGMMsgWnd
// 0x0004 (0x0040 - 0x003C)
class UEventMatchGMMsgWnd : public UUICommonAPI
{
public:
	class UTextBoxHandle*                              MessageTextBox;                                           // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.EventMatchGMMsgWnd");
		return ptr;
	}


	void STATIC_HandleEventMatchGMMessage(const struct FString& a_Param);
	void STATIC_OnTimer(int a_TimerID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.HelpHtmlWnd
// 0x0004 (0x0040 - 0x003C)
class UHelpHtmlWnd : public UUIScript
{
public:
	unsigned long                                      m_bShow : 1;                                              // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.HelpHtmlWnd");
		return ptr;
	}


	void STATIC_HandleLoadHelpHtml(const struct FString& param);
	void STATIC_HandleShowHelp(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BirthdayAlarmWnd
// 0x0010 (0x004C - 0x003C)
class UBirthdayAlarmWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextureHandle*                              BirthDayItem;                                             // 0x0040(0x0004)
	class UTextBoxHandle*                              itemAlarmTxt;                                             // 0x0044(0x0004)
	class UButtonHandle*                               btnOK;                                                    // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BirthdayAlarmWnd");
		return ptr;
	}


	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMClanWnd
// 0x0004 (0x0110 - 0x010C)
class UGMClanWnd : public UClanWnd
{
public:
	unsigned long                                      bShow : 1;                                                // 0x010C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMClanWnd");
		return ptr;
	}


	void STATIC_HandleGMObservingClanMember(const struct FString& a_Param);
	void STATIC_HandleGMObservingClanMemberStart();
	void STATIC_HandleGMObservingClan(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_ShowClan(const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_Load();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PetitionWnd
// 0x0000 (0x003C - 0x003C)
class UPetitionWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PetitionWnd");
		return ptr;
	}


	void Clear();
	void STATIC_OnClickCancelButton();
	void STATIC_OnClickFeedBackButton();
	void STATIC_OnClickButton(const struct FString& a_ControlID);
	void STATIC_HandleEnablePetitionFeedback(const struct FString& a_Param);
	void STATIC_HandlePetitionChatMessage(const struct FString& a_Param);
	void STATIC_HandleShowPetitionWnd();
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_SetFeedBackEnable(bool a_IsEnabled);
	void STATIC_OnHide();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BR_CashShopBtnWnd
// 0x0008 (0x0044 - 0x003C)
class UBR_CashShopBtnWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UButtonHandle*                               BtnShowCashShop;                                          // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BR_CashShopBtnWnd");
		return ptr;
	}


	void STATIC_OnShow();
	void STATIC_OnBtnShowCashShopClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_InitHandle();
	void STATIC_OnLoad();
};


// Class Interface.ObserverWnd
// 0x0004 (0x0040 - 0x003C)
class UObserverWnd : public UUICommonAPI
{
public:
	unsigned long                                      m_bObserverMode : 1;                                      // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ObserverWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.GMWarehouseWnd
// 0x0004 (0x0060 - 0x005C)
class UGMWarehouseWnd : public UWarehouseWnd
{
public:
	unsigned long                                      bShow : 1;                                                // 0x005C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMWarehouseWnd");
		return ptr;
	}


	void STATIC_MoveItemBottomToTop(int Index, bool bAllItem);
	void STATIC_MoveItemTopToBottom(int Index, bool bAllItem);
	void STATIC_HandleGMObservingWarehouseItemList(const struct FString& a_Param);
	void STATIC_HandleGMObservingWarehouseItemListStart(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_ShowWarehouse(const struct FString& a_Param);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.PremiumItemAlarmWnd
// 0x0010 (0x004C - 0x003C)
class UPremiumItemAlarmWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextureHandle*                              CTextureCtrl1038;                                         // 0x0040(0x0004)
	class UTextBoxHandle*                              CTextBox1039;                                             // 0x0044(0x0004)
	class UButtonHandle*                               btnOK;                                                    // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.PremiumItemAlarmWnd");
		return ptr;
	}


	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
};


// Class Interface.GMQuestWnd
// 0x0004 (0x0164 - 0x0160)
class UGMQuestWnd : public UQuestTreeWnd
{
public:
	unsigned long                                      bShow : 1;                                                // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.GMQuestWnd");
		return ptr;
	}


	void STATIC_HandleGMObservingQuestItem(const struct FString& a_Param);
	void STATIC_HandleGMObservingQuestListEnd();
	void STATIC_HandleGMObservingQuestList(const struct FString& a_Param);
	void STATIC_HandleGMObservingQuestListStart();
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_ShowQuest(const struct FString& a_Param);
	void STATIC_OnShow();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.SelectDeliverWnd
// 0x0000 (0x003C - 0x003C)
class USelectDeliverWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.SelectDeliverWnd");
		return ptr;
	}


	void STATIC_HandleOKButtonClick();
	void STATIC_OnClickButton(const struct FString& ControlName);
	void STATIC_HandleAddName(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.ConsoleWnd
// 0x0004 (0x0040 - 0x003C)
class NUConsoleWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               m_hSystemMenuWnd;                                         // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ConsoleWnd");
		return ptr;
	}


	void STATIC_HandleDlgOk();
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.QuestTreeDrawerWnd
// 0x0038 (0x0074 - 0x003C)
class UQuestTreeDrawerWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UTextBoxHandle*                              txtQuestTitle;                                            // 0x0040(0x0004)
	class UTextBoxHandle*                              txtQuestRecommandedLevel;                                 // 0x0044(0x0004)
	class UTextBoxHandle*                              txtQuestType;                                             // 0x0048(0x0004)
	class UTreeHandle*                                 QuestDescriptionTree;                                     // 0x004C(0x0004)
	class UTreeHandle*                                 QuestDescriptionLargeTree;                                // 0x0050(0x0004)
	class UTreeHandle*                                 QuestItemTree;                                            // 0x0054(0x0004)
	class UTreeHandle*                                 QuestRewardItemTree;                                      // 0x0058(0x0004)
	class UButtonHandle*                               btnGiveUpCurrentQuest;                                    // 0x005C(0x0004)
	class UButtonHandle*                               BtnClose;                                                 // 0x0060(0x0004)
	class UButtonHandle*                               m_btnAddAlarm;                                            // 0x0064(0x0004)
	class UButtonHandle*                               m_btnDeleteAlarm;                                         // 0x0068(0x0004)
	unsigned long                                      IsCheckAssignNotifier : 1;                                // 0x006C(0x0004)
	class UQuestTreeWnd*                               m_scriptQuestTreeWnd;                                     // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.QuestTreeDrawerWnd");
		return ptr;
	}


	void STATIC_OnShow();
	void STATIC_OnbtnCloseClick();
	void STATIC_OnbtnGiveUpCurrentQuestClick();
	void STATIC_OnClickButton(const struct FString& Name);
	void STATIC_Load();
	void STATIC_InitializeCOD();
	void Initialize();
	void STATIC_OnLoad();
};


// Class Interface.TownMapWnd
// 0x0000 (0x003C - 0x003C)
class UTownMapWnd : public UUIScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TownMapWnd");
		return ptr;
	}


	void STATIC_HandleShowTownMap(const struct FString& a_Param);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.MailBtnWnd
// 0x0000 (0x003C - 0x003C)
class UMailBtnWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.MailBtnWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.TutorialBtnWnd
// 0x0000 (0x003C - 0x003C)
class UTutorialBtnWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.TutorialBtnWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.DepthOfField
// 0x0000 (0x003C - 0x003C)
class UDepthOfField : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.DepthOfField");
		return ptr;
	}


	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_HandleCharacterSelectionChanged(const struct FString& a_Param);
	void STATIC_HandleStateChanged(const struct FString& a_NewState);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.QuestBtnWnd
// 0x0000 (0x003C - 0x003C)
class UQuestBtnWnd : public UUICommonAPI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.QuestBtnWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.OlympiadControlWnd
// 0x0000 (0x003C - 0x003C)
class UOlympiadControlWnd : public UUIScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadControlWnd");
		return ptr;
	}


	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
};


// Class Interface.BenchMarkMenuWnd
// 0x0000 (0x003C - 0x003C)
class UBenchMarkMenuWnd : public UUIScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BenchMarkMenuWnd");
		return ptr;
	}


	void STATIC_ShowOptionWnd();
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnLoad();
};


// Class Interface.OlympiadBuff1Wnd
// 0x0000 (0x0050 - 0x0050)
class UOlympiadBuff1Wnd : public UOlympiadBuffWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadBuff1Wnd");
		return ptr;
	}


	void STATIC_OnLoad();
};


// Class Interface.OlympiadBuff2Wnd
// 0x0000 (0x0050 - 0x0050)
class UOlympiadBuff2Wnd : public UOlympiadBuffWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadBuff2Wnd");
		return ptr;
	}


	void STATIC_OnLoad();
};


// Class Interface.UniversalToolTip
// 0x003C (0x0078 - 0x003C)
class UUniversalToolTip : public UUICommonAPI
{
public:
	TArray<struct FString>                             G_CompName_List;                                          // 0x003C(0x000C) (NeedCtorLink)
	TArray<int>                                        G_ToolTipTitle_Str;                                       // 0x0048(0x000C) (NeedCtorLink)
	TArray<int>                                        G_ToolTip_Text;                                           // 0x0054(0x000C) (NeedCtorLink)
	int                                                maxLength;                                                // 0x0060(0x0004)
	class UWindowHandle*                               UniversalToolTip;                                         // 0x0064(0x0004)
	class UTextBoxHandle*                              ToolTipText;                                              // 0x0068(0x0004)
	class UTextBoxHandle*                              TitleText;                                                // 0x006C(0x0004)
	unsigned long                                      g_Enable : 1;                                             // 0x0070(0x0004)
	int                                                g_Position;                                               // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.UniversalToolTip");
		return ptr;
	}


	void STATIC_OnLoad();
};


// Class Interface.OlympiadPlayer1Wnd
// 0x0000 (0x01F0 - 0x01F0)
class UOlympiadPlayer1Wnd : public UOlympiadPlayerWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadPlayer1Wnd");
		return ptr;
	}


	void STATIC_UpdateUsersInfo();
	void STATIC_OnLoad();
};


// Class Interface.OlympiadPlayer2Wnd
// 0x0000 (0x01F0 - 0x01F0)
class UOlympiadPlayer2Wnd : public UOlympiadPlayerWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.OlympiadPlayer2Wnd");
		return ptr;
	}


	void STATIC_UpdateUsersInfo();
	void STATIC_OnLoad();
};


// Class Interface.ReplayLogoWnd_tw
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_tw : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_tw");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_th
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_th : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_th");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_ru
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_ru : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_ru");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_ph
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_ph : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_ph");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_k
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_k : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_k");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_j
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_j : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_j");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_id
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_id : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_id");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_e
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_e : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_e");
		return ptr;
	}

};


// Class Interface.ReplayLogoWnd_cn
// 0x0000 (0x0054 - 0x0054)
class UReplayLogoWnd_cn : public UReplayLogoWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.ReplayLogoWnd_cn");
		return ptr;
	}

};


// Class Interface.LoadingWnd_tw
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_tw : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_tw");
		return ptr;
	}

};


// Class Interface.LoadingWnd_th
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_th : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_th");
		return ptr;
	}

};


// Class Interface.LoadingWnd_ru
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_ru : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_ru");
		return ptr;
	}

};


// Class Interface.LoadingWnd_ph
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_ph : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_ph");
		return ptr;
	}

};


// Class Interface.LoadingWnd_k
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_k : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_k");
		return ptr;
	}

};


// Class Interface.LoadingWnd_j
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_j : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_j");
		return ptr;
	}

};


// Class Interface.LoadingWnd_id
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_id : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_id");
		return ptr;
	}

};


// Class Interface.LoadingWnd_e
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_e : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_e");
		return ptr;
	}

};


// Class Interface.LoadingWnd_cn
// 0x0000 (0x0068 - 0x0068)
class ULoadingWnd_cn : public ULoadingWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.LoadingWnd_cn");
		return ptr;
	}

};


// Class Interface.BR_EventFireWnd
// 0x0028 (0x0064 - 0x003C)
class UBR_EventFireWnd : public UUICommonAPI
{
public:
	int                                                BuffOnOff;                                                // 0x003C(0x0004)
	int                                                Today;                                                    // 0x0040(0x0004)
	int                                                Per;                                                      // 0x0044(0x0004)
	class UWindowHandle*                               Me;                                                       // 0x0048(0x0004)
	class UButtonHandle*                               EventFireBtn1;                                            // 0x004C(0x0004)
	class UButtonHandle*                               EventFireBtn2;                                            // 0x0050(0x0004)
	class UTextureHandle*                              NCTextureRed;                                             // 0x0054(0x0004)
	class UTextureHandle*                              NCTextureBack;                                            // 0x0058(0x0004)
	class UWindowHandle*                               GaugeToolTip;                                             // 0x005C(0x0004)
	class UTextBoxHandle*                              EventFireTitle;                                           // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BR_EventFireWnd");
		return ptr;
	}


	void OnEventFireBtn2Click();
	void OnEventFireBtn1Click();
	void STATIC_OnClickButton(const struct FString& Name);
	struct FCustomTooltip STATIC_SetTooltip(const struct FString& Text);
	void FireEventGauge(int Percent);
	void FireEventButton();
	void FireEventWndShow(int eState, int Day, int Percent);
	void FireEventBuff(int type, int Value, int bstate, int endtime);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


// Class Interface.BR_EventFireHelpWnd
// 0x0008 (0x0044 - 0x003C)
class UBR_EventFireHelpWnd : public UUICommonAPI
{
public:
	class UWindowHandle*                               Me;                                                       // 0x003C(0x0004)
	class UHtmlHandle*                                 HtmlViewerEventFire;                                      // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interface.BR_EventFireHelpWnd");
		return ptr;
	}


	void FireEventShowHelp(const struct FString& param);
	void STATIC_OnEvent(int Event_ID, const struct FString& param);
	void STATIC_Load();
	void Initialize();
	void STATIC_OnLoad();
	void STATIC_OnRegisterEvent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

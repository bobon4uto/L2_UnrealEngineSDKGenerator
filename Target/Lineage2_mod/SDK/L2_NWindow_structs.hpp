#pragma once

// Lineage 2 (Gracia Final) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace L2_SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_EV_BlockListAdd                                     3840
#define CONST_CLAN_AUTH_GRADE9                                   9
#define CONST_EV_GMObservingQuestItem                             2350
#define CONST_CLAN_AUTH_GRADE8                                   8
#define CONST_EV_BlockStatePlayer                                 3900
#define CONST_MAX_RELATED_QUEST                                   10
#define CONST_CLAN_AUTH_GRADE7                                   7
#define CONST_EV_PawnViewerWndUpdateHairAccCoord                  4340
#define CONST_CLAN_AUTH_EDIT                                      2
#define CONST_CLAN_AUTH_GRADE6                                   6
#define CONST_EV_MacroShowEditWnd                                 1260
#define CONST_EV_BR_EventFireHelp                                 9092
#define CONST_CLAN_AUTH_GRADE5                                   5
#define CONST_EV_MinimapShowReduceBtn                             1870
#define CONST_CLAN_AUTH_GRADE4                                    4
#define CONST_EV_GMObservingQuestList                             2330
#define CONST_EV_BlockStateTeam                                   3890
#define CONST_EV_MpccRoomChatMessage                              4070
#define CONST_EV_ListMpccWaitingRoomInfo                          4020
#define CONST_ESTT_FISHING                                       1
#define CONST_EV_PetSummonedStatusClose                           1130
#define CONST_CLAN_AUTH_GRADE3                                    3
#define CONST_EV_ManageMpccRoomMember                             4040
#define CONST_EV_RaidRecord                                       120
#define CONST_EV_AbnormalStatusEtcItem                            960
#define CONST_EV_ShortcutPageDown                                 670
#define CONST_CLAN_AUTH_GRADE2                                    2
#define CONST_CLAN_AUTH_GRADE1                                    1
#define CONST_EV_ShowRefineryInteface                             2760
#define CONST_CLAN_KNIGHTHOOD_COUNT                               8
#define CONST_CLAN_ACADEMY                                        -1
#define CONST_EV_DeliverAddItem                                   2170
#define CONST_EV_BR_CashShopToggleWindow                          9010
#define CONST_EV_ShowDominionWarJoinListStart                     3570
#define CONST_CLAN_KNIGHT6                                        2002
#define CONST_ESTT_CLAN                                          2
#define CONST_EV_PrivateShopAddItem                               2130
#define CONST_CLAN_KNIGHT5                                        2001
#define CONST_CLAN_KNIGHT4                                        1002
#define CONST_CLAN_KNIGHT3                                        1001
#define CONST_EV_ManorCropSellChangeWndSetCropNameAndRewardType   2649
#define CONST_EV_AirShipTeleportList                              3543
#define CONST_EV_FullScreenMoviePlayer                            3100
#define CONST_CLAN_KNIGHT2                                        200
#define CONST_EV_CleftListClose                                   3730
#define CONST_CLAN_KNIGHT1                                        100
#define CONST_EV_DominionWarStart                                 3630
#define CONST_EV_ClanSubClanUpdated                               480
#define CONST_EV_MpccRoomInfo                                     4000
#define CONST_EV_PetInventoryItemList                             1070
#define CONST_CLAN_MAIN                                           0
#define CONST_EV_MinFrameRateChanged                              510
#define CONST_EV_BlockListVote                                    3870
#define CONST_EV_MSViewerWndAddSkill                              4400
#define CONST_EV_GMObservingUserInfoUpdate                        2290
#define CONST_EV_MinimapHideReduceBtn                             1880
#define CONST_EV_HennaListWndShowHideUnEquip                      1670
#define CONST_EV_FishViewportWndInit                              2490
#define CONST_EV_BlockListTimeUpset                               3880
#define CONST_EV_RefineryConfirmGemStoneResult                    2790
#define CONST_CLAN_AUTH_VIEW                                      1
#define CONST_ESTT_TRANSFORM                                     4
#define CONST_ESTT_SUB_CLAN                                      3
#define CONST_EV_MpccRoomMemberInfo                               4060
#define CONST_EV_LobbyMenuButtonEnable                            3020
#define CONST_EV_BR_CashShopAddItem                               9020
#define CONST_ESTT_NORMAL                                        0
#define CONST_EV_CommandChannelPartyList                          1390
#define CONST_EV_ListMpccWaitingStart                             4010
#define CONST_EV_BR_FireEventTimeInfo                             9091
#define CONST_EV_ClanMemberInfo                                   430
#define CONST_EV_ShowGMWnd                                        2280
#define CONST_EV_BR_AddEachProductInfo                            9040
#define CONST_EV_BR_FireEventStateInfo                            9090
#define CONST_EV_BR_PREMIUM_STATE                                 9080
#define CONST_EV_ShowSeedMapInfo                                  4200
#define CONST_EV_BR_HIDE_CONFIRM                                  9071
#define CONST_EV_BR_SHOW_CONFIRM                                  9070
#define CONST_EV_ShowPCCafeCouponUI                               530
#define CONST_EV_BR_RESULT_BUY_PRODUCT                            9060
#define CONST_EV_CrataeCubeRecordItem                             3480
#define CONST_EV_CharacterCreateEnableRotate                      3260
#define CONST_EV_CrataeCubeRecordMyItem                           3500
#define CONST_EV_MinimapUpdateGameTime                            1890
#define CONST_EV_BR_SETGAMEPOINT                                  9050
#define CONST_EV_BR_SetNewProductInfo                             9030
#define CONST_EV_BR_SetNewList                                    9021
#define CONST_EV_EventMatchDestroyed                              2200
#define CONST_EV_MSViewerWndAddSkillEnd                           4410
#define CONST_EV_PawnViewerWndAddFaceTextureName                  4330
#define CONST_EV_FishViewportWndFinalAction                      2522
#define CONST_EV_BlockListRemove                                  3850
#define CONST_EV_AirShipTeleportListStart                         3542
#define CONST_EV_PawnCharacterSelectWndAddAnimation               4310
#define CONST_EV_PawnViewerWndAddHairMeshName                     4320
#define CONST_EV_RefineryRefineResult                             2800
#define CONST_EV_ManorShopWndOpen                                 2680
#define CONST_EV_PawnViewerWndAddItem                             4300
#define CONST_EV_SummonedStatusRemainTime                         1120
#define CONST_EV_ManorCropInfoSettingWndChangeValue               2668
#define CONST_EV_ResultJoinDominionWar                            3580
#define CONST_EV_VitalityPointInfo                                4100
#define CONST_EV_TrackerDetach                                    2930
#define CONST_EV_MpccPartyMasterList                              4080
#define CONST_EV_GamingStateExit                                  160
#define CONST_EV_MpccRoomMemberStart                              4050
#define CONST_EV_MultiSellInfoListEnd                             2560
#define CONST_EV_DismissMpccRoom                                  4030
#define CONST_EV_SkillTrainListWndShow                            2010
#define CONST_EV_OlympiadBuffShow                                 930
#define CONST_EV_BlockStateResult                                 3910
#define CONST_EV_SkillEnchantListWndAddItem                       2063
#define CONST_EV_BlockListClose                                   3860
#define CONST_EV_ItemDescWndLoadHtmlFromString                    3310
#define CONST_EV_BlockListStart                                   3830
#define CONST_EV_DialogCancel                                     1720
#define CONST_EV_BlockRemainTime                                  3820
#define CONST_EV_ChangeCharacterPawn                              3810
#define CONST_EV_ResetDevice                                      3510
#define CONST_EV_ReceiveAttack                                    280
#define CONST_EV_ReserveShortCut                                  3801
#define CONST_EV_PVPMatchRecordEachUserInfo                       3380
#define CONST_EV_FlightTransform                                  3800
#define CONST_EV_CleftStateResult                                 3760
#define CONST_EV_SiegeInfoClanListEnd                             1480
#define CONST_EV_LobbyGetSelectedCharacterIndex                   3026
#define CONST_EV_EventMatchPartyLeader                            2211
#define CONST_EV_CommandChannelRoutingType                        1400
#define CONST_EV_CleftStatePlayer                                 3750
#define CONST_EV_CleftStateTeam                                   3740
#define CONST_EV_CleftListRemove                                  3720
#define CONST_EV_ArriveNewMail                                    1530
#define CONST_EV_CleftListAdd                                     3710
#define CONST_EV_CleftListStart                                   3700
#define CONST_EV_CleftListInfo                                    3690
#define CONST_EV_DominionWarEnd                                   3640
#define CONST_EV_DominionWarChannelSet                            3620
#define CONST_EV_DuelUpdateUserInfo                               2740
#define CONST_EV_DominionsOwnPos                                  3610
#define CONST_EV_DominionInfo                                     3600
#define CONST_EV_QuestList                                        710
#define CONST_EV_DominionInfoCnt                                  3590
#define CONST_EV_FishViewportWndHide                              2480
#define CONST_EV_ShowDominionWarJoinListEnd                       3572
#define CONST_EV_CrataeCubeRecordRetire                           3501
#define CONST_EV_EnchantPutTargetItemResult                       2891
#define CONST_EV_ShowDominionWarJoinListEnemyDominionInfo         3571
#define CONST_EV_BirthdayItemAlarm                                3560
#define CONST_EV_ClanCrestChange                                  360
#define CONST_EV_AITimer                                          3550
#define CONST_EV_EventMatchUpdateTeamInfo                         2250
#define CONST_EV_PartyMatchRoomMemberUpdate                       1590
#define CONST_EV_AirShipAltitude                                  3541
#define CONST_EV_CardKeyLogin                                     60
#define CONST_EV_PartySummonAdd                                   3110
#define CONST_EV_AirShipState                                     3540
#define CONST_EV_ClanMemberInfoUpdate                             440
#define CONST_EV_PrivateShopOpenWindow                            2120
#define CONST_EV_ShowBoardPacket                                  1200
#define CONST_EV_AirShipUpdate                                    3530
#define CONST_EV_ShowMiniGame1                                    3520
#define CONST_EV_EventMatchCreated                                2190
#define CONST_EV_CrataeCubeRecordEnd                              3490
#define CONST_EV_CrataeCubeRecordBegin                            3470
#define CONST_EV_GMObservingInventoryClear                        2402
#define CONST_EV_UpdatePetInfo                                    250
#define CONST_MAX_PartyMemberCount                                9
#define CONST_EV_PremiumItemList                                  3461
#define CONST_EV_PremiumItemAlarm                                 3460
#define CONST_EV_QuestHtmlWndShow                                 3323
#define CONST_EV_RecipeShopSellItem                               790
#define CONST_EV_BookMarkShow                                     3451
#define CONST_EV_BookMarkList                                     3450
#define CONST_EV_ShowChangeNicknameNColor                         3440
#define CONST_EV_ActionSummonedList                               1350
#define CONST_EV_ClanWarList                                      460
#define CONST_EV_AirStateOff                                      3430
#define CONST_EV_ShowFortressSiegeInfo                            3200
#define CONST_EV_AirStateOn                                       3420
#define CONST_EV_ClanSetAcademyMaster                             390
#define CONST_EV_PartyMatchRoomStart                              1550
#define CONST_EV_ManorCropSellChangeWndShow                       2647
#define CONST_EV_StateChanged                                     3410
#define CONST_EV_PartyMatchCommand                                1630
#define CONST_EV_ToggleDetailStatusWnd                            3400
#define CONST_EV_PVPMatchUserDie                                  3390
#define CONST_EV_PVPMatchRecord                                   3370
#define CONST_EV_TradeStart                                       1950
#define CONST_EV_ActionSummonedListStart                          1340
#define CONST_EV_FinishRotate                                     3360
#define CONST_EV_BeginShowZoneTitleWnd                            2420
#define CONST_EV_PetWndShow                                       1010
#define CONST_EV_OpenDialogRestart                                3350
#define CONST_EV_EnchantPutSupportItemResult                      2892
#define CONST_EV_ManorInfoWndCropShow                             2652
#define CONST_EV_OpenDialogQuit                                   3340
#define CONST_EV_CharacterCreateClearClassDesc                    3220
#define CONST_EV_ManorCropInfoSettingWndAddItemEnd                2667
#define CONST_EV_ToggleXMasSealWndShowHide                        3330
#define CONST_EV_EnchantShow                                      2860
#define CONST_EV_QuestHtmlWndHide                                 3324
#define CONST_EV_UpdateCP                                         230
#define CONST_EV_QuestHtmlWndLoadHtmlFromString                   3322
#define CONST_EV_RefineryRefineCancelResult                       2830
#define CONST_EV_ShopAddItem                                      2090
#define CONST_EV_QuestIDWndLoadHtmlFromString                     3321
#define CONST_EV_ItemDescWndSetWindowTitle                        3320
#define CONST_EV_ItemDescWndShow                                  3300
#define CONST_EV_NPCDialogWndLoadHtmlFromString                   3290
#define CONST_EV_HennaListWndShowHideEquip                        1640
#define CONST_EV_AbnormalStatusNormalItem                         950
#define CONST_EV_NPCDialogWndHide                                 3280
#define CONST_EV_NPCDialogWndShow                                 3270
#define CONST_EV_CharacterCreateClearName                         3250
#define CONST_EV_CharacterCreateClearWnd                          3240
#define CONST_EV_CharacterCreateClearSetupWnd                     3230
#define CONST_EV_CharacterCreateSetClassDesc                      3210
#define CONST_EV_SkillEnchantInfoWndAddExtendInfo                 2067
#define CONST_EV_FortressMapBarrackInfo                           3202
#define CONST_EV_AttributeEnchantItemList                         2894
#define CONST_EV_InventoryOpenWindow                              2580
#define CONST_EV_SSQPreInfo                                       770
#define CONST_EV_ShowFortressMapInfo                              3201
#define CONST_EV_HennaListWndAddHennaUnEquip                      1680
#define CONST_CREATE_ON_DEMAND                                    1
#define CONST_EV_AddAgitInfo                                      3190
#define CONST_EV_FishViewportWndShow                              2470
#define CONST_EV_ShowAgitInfo                                     3180
#define CONST_EV_AddFortressInfo                                  3170
#define CONST_EV_ShowFortressInfo                                 3160
#define CONST_EV_AddCastleInfo                                    3150
#define CONST_EV_SummonedStatusShow                               1100
#define CONST_EV_Restart                                          40
#define CONST_EV_ShowCastleInfo                                   3140
#define CONST_EV_SSQStatus                                        740
#define CONST_EV_PartySummonDelete                                3130
#define CONST_EV_SummonedWndShow                                  1090
#define CONST_EV_PartySummonUpdate                                3120
#define CONST_EV_ResizeMoviePlayer                                3090
#define CONST_EV_TargetHideWindow                                 990
#define CONST_EV_ShowWindow                                       3080
#define CONST_EV_MouseOut                                         3070
#define CONST_EV_MouseOver                                        3060
#define CONST_EV_RemoveAttributeEnchantWndShow                    2896
#define CONST_EV_ITEM_AUCTION_INFO                                3050
#define CONST_EV_ManorCropSellChangeWndAddItem                    2648
#define CONST_EV_ShowScreenMessage                                140
#define CONST_EV_EndMoviePlayer                                   3040
#define CONST_EV_EventMatchManage                                 2210
#define CONST_EV_SystemMessage                                    580
#define CONST_EV_ShowMoviePlayer                                  3030
#define CONST_EV_LobbyShowDialog                                  3025
#define CONST_EV_RecipeItemMakeInfo                               840
#define CONST_EV_LobbyStartButtonClick                            3024
#define CONST_EV_LobbyClearCharacterName                          3023
#define CONST_EV_LobbyCharacterSelect                             3022
#define CONST_EV_LobbyAddCharacterName                            3021
#define CONST_EV_TextLinkRButtonClick                             3010
#define CONST_EV_TextLinkLButtonClick                             3000
#define CONST_EV_MinimapRegionInfoBtnClick                        2990
#define CONST_EV_ShortcutJoypad                                   660
#define CONST_EV_MinimapTravel                                    2980
#define CONST_EV_SiegeInfo                                        1450
#define CONST_EV_MultiSellInputItemInfo                           2550
#define CONST_EV_NotifyPartyMemberPosition                        2971
#define CONST_EV_NotifyObject                                     2970
#define CONST_EV_RequestTooltipInfo                               2960
#define CONST_EV_EditorUpdateProperty                             2950
#define CONST_EV_EditorSetProperty                                2940
#define CONST_EV_PartyMatchRoomMember                             1580
#define CONST_EV_TrackerAttach                                    2920
#define CONST_EV_SkillEnchantListWndHide                          2062
#define CONST_EV_ResolutionChanged                                2900
#define CONST_EV_RemoveAttributeEnchantResult                     2898
#define CONST_EV_RemoveAttributeEnchantItemData                   2897
#define CONST_EV_AttributeEnchantResult                           2895
#define CONST_EV_ShowShortcutWnd                                  690
#define CONST_EV_AttributeEnchantItemShow                         2893
#define CONST_EV_JoypadLButtonDown                                590
#define CONST_EV_OlympiadBuffInfo                                 940
#define CONST_EV_EnchantResult                                    2890
#define CONST_EV_EnchantItemList                                  2880
#define CONST_EV_EnchantHide                                      2870
#define CONST_EV_ClanAddMember                                    400
#define CONST_EV_QuestInfo                                        2850
#define CONST_EV_QuestInfoStart                                   2840
#define CONST_EV_InventoryToggleWindow                            2631
#define CONST_EV_RefineryConfirmCancelItemResult                  2820
#define CONST_EV_ShowRefineryCancelInteface                       2810
#define CONST_EV_RefineryConfirmRefinerItemResult                 2780
#define CONST_EV_StartEventMatchObserver                          2220
#define CONST_EV_RefineryConfirmTargetItemResult                  2770
#define CONST_EV_DuelEnemyRelation                                2750
#define CONST_EV_ManorSeedInfoSettingWndAddItemEnd                2658
#define CONST_EV_DuelEnd                                          2730
#define CONST_EV_InventoryUpdateItem                              2610
#define CONST_EV_LanguageChanged                                  1900
#define CONST_EV_DuelStart                                        2720
#define CONST_EV_PartyUpdateParty                                 1150
#define CONST_EV_DuelReady                                        2710
#define CONST_EV_PetWndRegPetNameFailed                           1030
#define CONST_EV_ClanInfoUpdate                                   330
#define CONST_EV_DuelAskStart                                     2700
#define CONST_EV_ShowPlaySceneInterface                          3000
#define CONST_EV_PartyMatchRoomClose                              1560
#define CONST_EV_InventoryAddItem                                 2600
#define CONST_EV_ShowHelp                                         1210
#define CONST_EV_ManorShopWndAddItem                              2690
#define CONST_EV_SkillTrainListWndHide                            2020
#define CONST_EV_ManorCropInfoChangeWndShow                       2670
#define CONST_EV_UpdateMaxCP                                      240
#define CONST_EV_ManorCropInfoSettingWndAddItem                   2666
#define CONST_EV_ManorCropInfoSettingWndShow                      2665
#define CONST_EV_GMSnoop                                          2410
#define CONST_EV_ManorSeedInfoChangeWndShow                       2660
#define CONST_EV_PartyRenameMember                                1181
#define CONST_EV_ManorSeedInfoSettingWndChangeValue               2659
#define CONST_EV_EventMatchUpdateScore                            2240
#define CONST_EV_MacroShowListWnd                                 1230
#define CONST_EV_ManorSeedInfoSettingWndAddItem                   2657
#define CONST_EV_ShortcutInit                                     691
#define CONST_EV_ManorSeedInfoSettingWndShow                      2656
#define CONST_EV_ManorInfoWndDefaultAdd                           2655
#define CONST_EV_CommandChannelPartyMember                        1420
#define CONST_EV_ManorInfoWndDefaultShow                          2654
#define CONST_EV_ManorCropSellWndSetCropSell                      2646
#define CONST_EV_ClanAddMemberMultiple                            410
#define CONST_EV_ManorInfoWndCropAdd                              2653
#define CONST_EV_ManorInfoWndSeedAdd                              2651
#define CONST_EV_ManorInfoWndSeedShow                             2650
#define CONST_EV_ManorCropSellWndAddItem                          2645
#define CONST_EV_ClanAuthMember                                   380
#define CONST_EV_SetRadarZoneCode                                 110
#define CONST_EV_ManorCropSellWndShow                             2640
#define CONST_EV_InventoryAddHennaInfo                            2630
#define CONST_EV_ShowUserPetitionWnd                              1921
#define CONST_EV_InventoryItemListEnd                             2620
#define CONST_EV_InventoryHideWindow                              2590
#define CONST_EV_InventoryClear                                   2570
#define CONST_EV_MultiSellOutputItemInfo                          2540
#define CONST_EV_MultiSellResultItemInfo                          2535
#define CONST_EV_MultiSellInfoListBegin                           2530
#define CONST_EV_FishViewportWndSetFishStatus                    2521
#define CONST_EV_FishViewportWndInitFishStatus                   2520
#define CONST_EV_FishRankEventButtonHide                          2510
#define CONST_EV_ClanSkillListRenew                               500
#define CONST_EV_FishRankEventButtonShow                          250
#define CONST_EV_ObserverWndHide                                  2460
#define CONST_EV_DeliverOpenWindow                                2160
#define CONST_EV_ObserverWndShow                                  2450
#define CONST_EV_TutorialViewerWndHide                            2440
#define CONST_EV_ClanClearWarList                                 470
#define CONST_EV_TutorialViewerWndShow                            2430
#define CONST_EV_GMUpdateHennaInfo                                2404
#define CONST_EV_EventMatchUpdateUserInfo                         2260
#define CONST_EV_GMAddHennaInfo                                   2403
#define CONST_EV_ClanDeleteMember                                 450
#define CONST_EV_ShortcutCommandSlot                              91
#define CONST_EV_GMObservingInventoryAddItem                      2401
#define CONST_EV_GMObservingClanMember                            2400
#define CONST_EV_GMObservingClanMemberStart                       2390
#define CONST_EV_GMObservingClan                                  2380
#define CONST_EV_GMObservingWarehouseItemList                     2370
#define CONST_EV_GMObservingWarehouseItemListStart                2360
#define CONST_EV_GMObservingQuestListEnd                          2340
#define CONST_EV_RadarAddTarget                                   1730
#define CONST_EV_SelectDeliverClear                               2140
#define CONST_EV_GMObservingQuestListStart                        2320
#define CONST_EV_GMObservingSkillList                             2310
#define CONST_EV_GMObservingSkillListStart                        2300
#define CONST_EV_EventMatchGMMessage                              2270
#define CONST_EV_EventMatchUpdateTeamName                         2230
#define CONST_EV_DialogOK                                         1710
#define CONST_EV_ShowEventMatchGMWnd                              2180
#define CONST_EV_SummonedStatusSpelledList                        1110
#define CONST_EV_SelectDeliverAddName                             2150
#define CONST_EV_ShowTownMap                                      1770
#define CONST_EV_PartyMatchList                                   1570
#define CONST_EV_WarehouseDeleteItem                              2111
#define CONST_EV_WarehouseAddItem                                 2110
#define CONST_EV_ShortcutClear                                    650
#define CONST_EV_WarehouseOpenWindow                              2100
#define CONST_EV_TradeDone                                        1970
#define CONST_EV_ShopOpenWindow                                   2080
#define CONST_EV_SetMaxCount                                      2070
#define CONST_EV_SkillEnchantInfoWndHide                          2066
#define CONST_EV_ClanSkillList                                    490
#define CONST_EV_SkillEnchantInfoWndAddSkill                      2065
#define CONST_EV_SkillList                                        1290
#define CONST_EV_SkillEnchantInfoWndShow                          2064
#define CONST_EV_ActionList                                       1310
#define CONST_EV_SkillEnchantListWndShow                          2061
#define CONST_EV_SkillTrainInfoWndAddExtendInfo                   2060
#define CONST_EV_SkillTrainInfoWndHide                            2050
#define CONST_EV_SkillTrainInfoWndShow                            2040
#define CONST_EV_SkillTrainListWndAddSkill                        2030
#define CONST_EV_TradeRequestStartExchange                        2000
#define CONST_EV_TradeUpdateInventoryItem                         1990
#define CONST_EV_TradeOtherOK                                     1980
#define CONST_EV_TradeAddItem                                     1960
#define CONST_EV_EnablePetitionFeedback                           1940
#define CONST_EV_PetitionChatMessage                              1930
#define CONST_EV_ShowPetitionWnd                                  1920
#define CONST_EV_ActionListStart                                  1300
#define CONST_EV_PCCafePointInfo                                  1910
#define CONST_EV_HennaListWndAddHennaEquip                        1650
#define CONST_EV_MinimapCursedWeaponLocation                      1860
#define CONST_EV_MinimapCursedWeaponList                          1850
#define CONST_EV_UpdateMaxHP                                      200
#define CONST_EV_MinimapChangeOnTick                              1840
#define CONST_EV_MinimapHideQuest                                 1830
#define CONST_EV_MinimapShowQuest                                 1820
#define CONST_EV_MinimapDeleteAllTarget                           1810
#define CONST_EV_MinimapDeleteTarget                              1800
#define CONST_EV_MinimapAddTarget                                 1790
#define CONST_EV_ShowMinimap                                      1780
#define CONST_EV_RadarColor                                       1760
#define CONST_EV_ChatMessage                                      540
#define CONST_EV_RadarDeleteAllTarget                             1750
#define CONST_EV_RadarDeleteTarget                                1740
#define CONST_EV_GamingStateEnter                                 150
#define CONST_EV_CalculatorWndShowHide                            1700
#define CONST_EV_HennaInfoWndShowHideUnEquip                      1690
#define CONST_EV_ChatWndSetFocus                                  570
#define CONST_EV_ActionListNew                                    1311
#define CONST_EV_HennaInfoWndShowHideEquip                        1660
#define CONST_EV_PartyMatchWaitList                               1620
#define CONST_EV_PartyMatchWaitListStart                          1610
#define CONST_EV_PartyMatchChatMessage                            1600
#define CONST_EV_SSQMainEvent                                     750
#define CONST_EV_OlympiadUserInfo                                 920
#define CONST_EV_PartyMatchStart                                  1540
#define CONST_EV_ArriveShowQuest                                  1520
#define CONST_EV_LoginFail                                        30
#define CONST_EV_ArriveNewTutorialQuestion                        1510
#define CONST_EV_IMEStatusChange                                  1500
#define CONST_EV_SiegeInfoSelectableTime                          1490
#define CONST_EV_ReceiveMagicSkillUse                             290
#define CONST_EV_SiegeInfoClanList                                1470
#define CONST_EV_SiegeInfoClanListStart                           1460
#define CONST_EV_RestartMenuHide                                  1440
#define CONST_EV_RestartMenuShow                                  1430
#define CONST_EV_CommandChannelPartyUpdate                        1395
#define CONST_EV_CommandChannelInfo                               1380
#define CONST_EV_MacroUpdate                                      1240
#define CONST_EV_CommandChannelEnd                                1370
#define CONST_EV_CommandChannelStart                              1360
#define CONST_EV_ActionPetList                                    1330
#define CONST_EV_ActionPetListStart                               1320
#define CONST_EV_PartyDeleteParty                                 1160
#define CONST_EV_SkillListStart                                   1280
#define CONST_EV_MacroDeleted                                     1270
#define CONST_EV_MacroList                                        1250
#define CONST_EV_LoadPetitionHtml                                 1221
#define CONST_EV_LoadHelpHtml                                     1220
#define CONST_EV_ShowBBS                                          1190
#define CONST_EV_PartySpelledList                                 1180
#define CONST_EV_PartyDeleteAllParty                              1170
#define CONST_EV_PartyAddParty                                    1140
#define CONST_EV_PetInventoryItemUpdate                           1080
#define CONST_EV_PetInventoryItemStart                            1060
#define CONST_EV_PetStatusSpelledList                             1050
#define CONST_EV_PetStatusShow                                    1040
#define CONST_EV_PetWndShowNameBtn                                1020
#define CONST_EV_ShowBuffIcon                                     1000
#define CONST_EV_TargetUpdate                                     980
#define CONST_EV_AbnormalStatusShortItem                          970
#define CONST_EV_OlympiadMatchEnd                                 910
#define CONST_EV_OlympiadTargetShow                               900
#define CONST_EV_HeroRecord                                       890
#define CONST_EV_HeroShowList                                     880
#define CONST_EV_RecipeShopAddShopItem                            870
#define CONST_EV_RecipeShopAddBookItem                            860
#define CONST_EV_RecipeShopShowWnd                                850
#define CONST_EV_RecipeAddBookItem                                830
#define CONST_EV_RecipeShowBookWnd                                820
#define CONST_EV_QuestListEnd                                     720
#define CONST_EV_RecipeShowRecipeTreeWnd                          810
#define CONST_EV_UpdateHP                                         190
#define CONST_EV_ServerAgeLimitChange                             170
#define CONST_EV_RecipeShopItemInfo                               800
#define CONST_EV_RecipeShowBuyListWnd                             780
#define CONST_EV_SSQSealStatus                                    760
#define CONST_EV_QuestSetCurrentID                                730
#define CONST_EV_Die                                              50
#define CONST_EV_ChatWndMacroCommand                              572
#define CONST_EV_ToggleShowPCCafeEventWnd                         531
#define CONST_EV_QuestListStart                                   700
#define CONST_EV_ShortcutDataReceived                             692
#define CONST_EV_ShortcutPageUp                                   680
#define CONST_EV_ShortcutPageUpdate                               640
#define CONST_EV_ShortcutUpdate                                   630
#define CONST_EV_JoypadRButtonUp                                  620
#define CONST_EV_JoypadRButtonDown                                610
#define CONST_EV_JoypadLButtonUp                                  600
#define CONST_EV_ChatWndMsnStatus                                 571
#define CONST_EV_ChatWndSetString                                 560
#define CONST_EV_ChatWndStatusChange                              550
#define CONST_EV_PartyMemberChanged                               520
#define CONST_EV_ClanDeleteAllMember                              420
#define CONST_EV_ClanAuth                                         370
#define CONST_EV_ClanAuthGradeList                                350
#define CONST_EV_ClanMyAuth                                       340
#define CONST_EV_ClanInfo                                         320
#define CONST_EV_ShowReplayQuitDialogBox                          310
#define CONST_EV_ReceiveTargetLevelDiff                           300
#define CONST_EV_UpdateHennaInfo                                  260
#define CONST_EV_UpdateMaxMP                                      220
#define CONST_EV_UpdateMP                                         210
#define CONST_EV_UpdateUserInfo                                   180
#define CONST_EV_ShowGuideWnd                                     130
#define CONST_EV_MagicSkillList                                   100
#define CONST_EV_ShortcutCommand                                  90
#define CONST_EV_RadarTransitionFinished                          80
#define CONST_EV_RegenStatus                                      70
#define CONST_EV_LoginOK                                          20
#define CONST_EV_Test                                             10

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NWindow.UIEventManager.EDrawItemType
enum class EDrawItemType : uint8_t
{
	DIT_BLANK                      = 0,
	DIT_TEXT                       = 1,
	DIT_TEXTURE                    = 2
};


// Enum NWindow.UIEventManager.EXMLTreeNodeItemType
enum class EXMLTreeNodeItemType : uint8_t
{
	XTNITEM_BLANK                  = 0,
	XTNITEM_TEXT                   = 1,
	XTNITEM_TEXTURE                = 2
};


// Enum NWindow.UIEventManager.ETooltipSourceType
enum class ETooltipSourceType : uint8_t
{
	NTST_TEXT                      = 0,
	NTST_ITEM                      = 1,
	NTST_LIST                      = 2
};


// Enum NWindow.UIEventManager.ECastleSiegeDefenderType
enum class ECastleSiegeDefenderType : uint8_t
{
	CSDT_NOT_DEFENDER              = 0,
	CSDT_CASTLE_OWNER              = 1,
	CSDT_WAITING_CONFIRM           = 2,
	CSDT_APPROVED                  = 3,
	CSDT_REJECTED                  = 4
};


// Enum NWindow.UIEventManager.ERestartPointType
enum class ERestartPointType : uint8_t
{
	RPT_VILLAGE                    = 0,
	RPT_AGIT                       = 1,
	RPT_CASTLE                     = 2,
	RPT_FORTRESS                   = 3,
	RPT_BATTLE_CAMP                = 4,
	RPT_ORIGINAL_PLACE             = 5
};


// Enum NWindow.UIEventManager.EInventoryUpdateType
enum class EInventoryUpdateType : uint8_t
{
	IVUT_NONE                      = 0,
	IVUT_ADD                       = 1,
	IVUT_UPDATE                    = 2,
	IVUT_DELETE                    = 3
};


// Enum NWindow.UIEventManager.EShortCutItemType
enum class EShortCutItemType : uint8_t
{
	SCIT_NONE                      = 0,
	SCIT_ITEM                      = 1,
	SCIT_SKILL                     = 2,
	SCIT_ACTION                    = 3,
	SCIT_MACRO                     = 4,
	SCIT_RECIPE                    = 5,
	SCIT_BOOKMARK                  = 6
};


// Enum NWindow.UIEventManager.EControlReturnType
enum class EControlReturnType : uint8_t
{
	CRTT_NO_CONTROL_USE            = 0,
	CRTT_CONTROL_USE               = 1,
	CRTT_USE_AND_HIDE              = 2
};


// Enum NWindow.UIEventManager.EEnvType
enum class EEnvType : uint8_t
{
	ET_NONE                        = 0,
	ET_GROUND                      = 1,
	ET_UNDERWATER                  = 2,
	ET_AIR                         = 3,
	ET_HOVER                       = 4
};


// Enum NWindow.UIEventManager.EMoveType
enum class EMoveType : uint8_t
{
	MVT_NONE                       = 0,
	MVT_SLOW                       = 1,
	MVT_FAST                       = 2
};


// Enum NWindow.UIEventManager.ESystemMsgParamType
enum class ESystemMsgParamType : uint8_t
{
	SMPT_STRING                    = 0,
	SMPT_NUMBER                    = 1,
	SMPT_NPCID                     = 2,
	SMPT_ITEMID                    = 3,
	SMPT_SKILLID                   = 4,
	SMPT_CASTLEID                  = 5,
	SMPT_BIGNUMBER                 = 6,
	SMPT_ZONENAME                  = 7
};


// Enum NWindow.UIEventManager.ESystemMsgType
enum class ESystemMsgType : uint8_t
{
	SYSTEM_NONE                    = 0,
	SYSTEM_BATTLE                  = 1,
	SYSTEM_SERVER                  = 2,
	SYSTEM_DAMAGE                  = 3,
	SYSTEM_POPUP                   = 4,
	SYSTEM_ERROR                   = 5,
	SYSTEM_PETITION                = 6,
	SYSTEM_USEITEMS                = 7
};


// Enum NWindow.UIEventManager.EChatType
enum class EChatType : uint8_t
{
	CHAT_NORMAL                    = 0,
	CHAT_SHOUT                     = 1,
	CHAT_TELL                      = 2,
	CHAT_PARTY                     = 3,
	CHAT_CLAN                      = 4,
	CHAT_SYSTEM                    = 5,
	CHAT_USER_PET                  = 6,
	CHAT_GM_PET                    = 7,
	CHAT_MARKET                    = 8,
	CHAT_ALLIANCE                  = 9,
	CHAT_ANNOUNCE                  = 10,
	CHAT_CUSTOM                    = 11,
	CHAT_L2_FRIEND                 = 12,
	CHAT_MSN_CHAT                  = 13,
	CHAT_PARTY_ROOM_CHAT           = 14,
	CHAT_COMMANDER_CHAT            = 15,
	CHAT_INTER_PARTYMASTER_CHAT    = 16,
	CHAT_HERO                      = 17,
	CHAT_CRITICAL_ANNOUNCE         = 18,
	CHAT_SCREEN_ANNOUNCE           = 19,
	CHAT_DOMINIONWAR               = 20,
	CHAT_MPCC_ROOM                 = 21
};


// Enum NWindow.UIEventManager.EInterfaceSoundType
enum class EInterfaceSoundType : uint8_t
{
	IFST_CLICK1                    = 0,
	IFST_CLICK2                    = 1,
	IFST_CLICK_FAILED              = 2,
	IFST_PICKUP                    = 3,
	IFST_TRASH_BASKET              = 4,
	IFST_WINDOW_OPEN               = 5,
	IFST_WINDOW_CLOSE              = 6,
	IFST_QUEST_TUTORIAL            = 7,
	IFST_MINIMAP_OPEN_CLOSE        = 8,
	IFST_COOLTIME_END              = 9,
	IFST_PETITION                  = 10,
	IFST_STATUSWND_OPEN            = 11,
	IFST_STATUSWND_CLOSE           = 12,
	IFST_INVENWND_OPEN             = 13,
	IFST_INVENWND_CLOSE            = 14,
	IFST_MAPWND_OPEN               = 15,
	IFST_MAPWND_CLOSE              = 16,
	IFST_SYSTEMWND_OPEN            = 17,
	IFST_SYSTEMWND_CLOSE           = 18
};


// Enum NWindow.UIEventManager.EServerAgeLimit
enum class EServerAgeLimit : uint8_t
{
	SERVER_AGE_LIMIT_15            = 0,
	SERVER_AGE_LIMIT_18            = 1,
	SERVER_AGE_LIMIT_Free          = 2
};


// Enum NWindow.UIEventManager.EActionCategory
enum class EActionCategory : uint8_t
{
	ACTION_NONE                    = 0,
	ACTION_BASIC                   = 1,
	ACTION_PARTY                   = 2,
	ACTION_SOCIAL                  = 3,
	ACTION_PET                     = 4,
	ACTION_SUMMON                  = 5
};


// Enum NWindow.UIEventManager.ESkillCategory
enum class ESkillCategory : uint8_t
{
	SKILL_Active                   = 0,
	SKILL_Passive                  = 1
};


// Enum NWindow.UIEventManager.EEtcItemType
enum class EEtcItemType : uint8_t
{
	ITEME_NONE                     = 0,
	ITEME_SCROLL                   = 1,
	ITEME_ARROW                    = 2,
	ITEME_POTION                   = 3,
	ITEME_SPELLBOOK                = 4,
	ITEME_RECIPE                   = 5,
	ITEME_MATERIAL                 = 6,
	ITEME_PET_COLLAR               = 7,
	ITEME_CASTLE_GUARD             = 8,
	ITEME_DYE                      = 9,
	ITEME_SEED                     = 10,
	ITEME_SEED2                    = 11,
	ITEME_HARVEST                  = 12,
	ITEME_LOTTO                    = 13,
	ITEME_RACE_TICKET              = 14,
	ITEME_TICKET_OF_LORD           = 15,
	ITEME_LURE                     = 16,
	ITEME_CROP                     = 17,
	ITEME_MATURECROP               = 18,
	ITEME_ENCHT_WP                 = 19,
	ITEME_ENCHT_AM                 = 20,
	ITEME_BLESS_ENCHT_WP           = 21,
	ITEME_BLESS_ENCHT_AM           = 22,
	ITEME_COUPON                   = 23,
	ITEME_ELIXIR                   = 24,
	ITEME_BOLT                     = 25
};


// Enum NWindow.UIEventManager.EItemParamType
enum class EItemParamType : uint8_t
{
	ITEMP_WEAPON                   = 0,
	ITEMP_ARMOR                    = 1,
	ITEMP_SHIELD                   = 2,
	ITEMP_ACCESSARY                = 3,
	ITEMP_ETC                      = 4
};


// Enum NWindow.UIEventManager.EItemType
enum class EItemType : uint8_t
{
	ITEM_WEAPON                    = 0,
	ITEM_ARMOR                     = 1,
	ITEM_ACCESSARY                 = 2,
	ITEM_QUESTITEM                 = 3,
	ITEM_ASSET                     = 4,
	ITEM_ETCITEM                   = 5
};


// Enum NWindow.UIEventManager.ENameCtrlType
enum class ENameCtrlType : uint8_t
{
	NCT_Normal                     = 0,
	NCT_Item                       = 1
};


// Enum NWindow.UIEventManager.ETextureLayer
enum class ETextureLayer : uint8_t
{
	TL_None                        = 0,
	TL_Normal                      = 1,
	TL_Background                  = 2
};


// Enum NWindow.UIEventManager.ETextureCtrlType
enum class ETextureCtrlType : uint8_t
{
	TCT_Stretch                    = 0,
	TCT_Normal                     = 1,
	TCT_Tile                       = 2,
	TCT_Draggable                  = 3,
	TCT_Control                    = 4,
	TCT_Mask                       = 5
};


// Enum NWindow.UIEventManager.ETextVAlign
enum class ETextVAlign : uint8_t
{
	TVA_Undefined                  = 0,
	TVA_Top                        = 1,
	TVA_Middle                     = 2,
	TVA_Bottom                     = 3
};


// Enum NWindow.UIEventManager.ETextAlign
enum class ETextAlign : uint8_t
{
	TA_Undefined                   = 0,
	TA_Left                        = 1,
	TA_Center                      = 2,
	TA_Right                       = 3,
	TA_MacroIcon                   = 4
};


// Enum NWindow.UIEventManager.EEventMatchObsMsgType
enum class EEventMatchObsMsgType : uint8_t
{
	MESSAGE_GM                     = 0,
	MESSAGE_Finish                 = 1,
	MESSAGE_Start                  = 2,
	MESSAGE_GameOver               = 3,
	MESSAGE_1                      = 4,
	MESSAGE_2                      = 5,
	MESSAGE_3                      = 6,
	MESSAGE_4                      = 7,
	MESSAGE_5                      = 8
};


// Enum NWindow.UIEventManager.ETextureAutoRotateType
enum class ETextureAutoRotateType : uint8_t
{
	ETART_None                     = 0,
	ETART_Camera                   = 1,
	ETART_Pawn                     = 2
};


// Enum NWindow.UIEventManager.EProgressBarType
enum class EProgressBarType : uint8_t
{
	PBT_None                       = 0,
	PBT_RightLeft                  = 1,
	PBT_LeftRight                  = 2,
	PBT_TopBottom                  = 3,
	PBT_BottomTop                  = 4
};


// Enum NWindow.UIEventManager.EControlOrderWay
enum class EControlOrderWay : uint8_t
{
	COW_None                       = 0,
	COW_Top                        = 1,
	COW_Up                         = 2,
	COW_Down                       = 3,
	COW_Bottom                     = 4
};


// Enum NWindow.UIEventManager.ETextLinkType
enum class ETextLinkType : uint8_t
{
	TLT_None                       = 0,
	TLT_ServerItem                 = 1,
	TLT_LocalItem                  = 2,
	TLT_User                       = 3,
	TLT_SKill                      = 4
};


// Enum NWindow.UIEventManager.EControlPropertyRestrictionType
enum class EControlPropertyRestrictionType : uint8_t
{
	CPRT_None                      = 0,
	CPRT_Integer                   = 1,
	CPRT_String                    = 2
};


// Enum NWindow.UIEventManager.EControlPropertyItemType
enum class EControlPropertyItemType : uint8_t
{
	CPIT_None                      = 0,
	CPIT_Boolean                   = 1,
	CPIT_Integer                   = 2,
	CPIT_String                    = 3
};


// Enum NWindow.UIEventManager.EControlPropertyGroupType
enum class EControlPropertyGroupType : uint8_t
{
	CPGT_None                      = 0,
	CPGT_Single                    = 1,
	CPGT_SingleRequired            = 2,
	CPGT_Multiple                  = 3,
	CPGT_MultipleRequired          = 4,
	CPGT_Choice                    = 5
};


// Enum NWindow.UIEventManager.ETrackerAlignType
enum class ETrackerAlignType : uint8_t
{
	TAT_Left                       = 0,
	TAT_Center                     = 1,
	TAT_Right                      = 2,
	TAT_Width                      = 3,
	TAT_Height                     = 4
};


// Enum NWindow.UIEventManager.EXMLControlType
enum class EXMLControlType : uint8_t
{
	XCT_None                       = 0,
	XCT_FrameWnd                   = 1,
	XCT_Button                     = 2,
	XCT_TextBox                    = 3,
	XCT_EditBox                    = 4,
	XCT_TextureCtrl                = 5,
	XCT_ChatListBox                = 6,
	XCT_TabControl                 = 7,
	XCT_ItemWnd                    = 8,
	XCT_CheckBox                   = 9,
	XCT_ComboBox                   = 10,
	XCT_ProgressCtrl               = 11,
	XCT_MultiEdit                  = 12,
	XCT_ListCtrl                   = 13,
	XCT_ListBox                    = 14,
	XCT_StatusBarCtrl              = 15,
	XCT_NameCtrl                   = 16,
	XCT_MinimapWnd                 = 17,
	XCT_ShortcutItemWnd            = 18,
	XCT_XMLTreeCtrl                = 19,
	XCT_SliderCtrl                 = 20,
	XCT_EffectButton               = 21,
	XCT_TextListBox                = 22,
	XCT_RadarWnd                   = 23,
	XCT_HtmlViewer                 = 24,
	XCT_RadioButton                = 25,
	XCT_InvenWeightWnd             = 26,
	XCT_StatusIconCtrl             = 27,
	XCT_BarCtrl                    = 28,
	XCT_ScrollWnd                  = 29,
	XCT_FishViewportWnd            = 30,
	XCT_VIPShopItemInfoWnd         = 31,
	XCT_VIPShopNeededItemWnd       = 32,
	XCT_DrawPanel                  = 33,
	XCT_RadarMapCtrl               = 34,
	XCT_PropertyController         = 35,
	XCT_ScenePlayerCtrl            = 36,
	XCT_FlashCtrl                  = 37,
	XCT_CharacterViewportWnd       = 38
};


// Enum NWindow.UIEventManager.EIMEType
enum class EIMEType : uint8_t
{
	IME_NONE                       = 0,
	IME_KOR                        = 1,
	IME_ENG                        = 2,
	IME_JPN                        = 3,
	IME_CHN                        = 4,
	IME_TAIWAN_CHANGJIE            = 5,
	IME_TAIWAN_DAYI                = 6,
	IME_TAIWAN_NEWPHONETIC         = 7,
	IME_TAIWAN_BOSHAMY             = 8,
	IME_CHN_MS                     = 9,
	IME_CHN_JB                     = 10,
	IME_CHN_ABC                    = 11,
	IME_CHN_WUBI                   = 12,
	IME_CHN_WUBI2                  = 13,
	IME_THAI                       = 14,
	IME_RUSSIA                     = 15
};


// Enum NWindow.UIEventManager.ELanguageType
enum class ELanguageType : uint8_t
{
	LANG_None                      = 0,
	LANG_Korean                    = 1,
	LANG_English                   = 2,
	LANG_Japanese                  = 3,
	LANG_Taiwan                    = 4,
	LANG_Chinese                   = 5,
	LANG_Thai                      = 6,
	LANG_Philippine                = 7,
	LANG_Indonesia                 = 8,
	LANG_Russia                    = 9
};


// Enum NWindow.UIEventManager.EGMCommandType
enum class EGMCommandType : uint8_t
{
	GMCOMMAND_None                 = 0,
	GMCOMMAND_StatusInfo           = 1,
	GMCOMMAND_ClanInfo             = 2,
	GMCOMMAND_SkillInfo            = 3,
	GMCOMMAND_QuestInfo            = 4,
	GMCOMMAND_InventoryInfo        = 5,
	GMCOMMAND_WarehouseInfo        = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// Struct NWindow.UIEventManager.DrawItemInfo
// 0x0058
struct FDrawItemInfo
{
	TEnumAsByte<EDrawItemType>                         eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nOffSetX;                                                 // 0x0004(0x0004)
	int                                                nOffSetY;                                                 // 0x0008(0x0004)
	unsigned long                                      bLineBreak : 1;                                           // 0x000C(0x0004)
	int                                                b_nHeight;                                                // 0x0010(0x0004)
	int                                                t_ID;                                                     // 0x0014(0x0004)
	struct FString                                     t_strText;                                                // 0x0018(0x000C) (NeedCtorLink)
	struct FColor                                      t_color;                                                  // 0x0024(0x0004)
	unsigned long                                      t_bDrawOneLine : 1;                                       // 0x0028(0x0004)
	int                                                t_MaxWidth;                                               // 0x002C(0x0004)
	int                                                u_nTextureWidth;                                          // 0x0030(0x0004)
	int                                                u_nTextureHeight;                                         // 0x0034(0x0004)
	int                                                u_nTextureUWidth;                                         // 0x0038(0x0004)
	int                                                u_nTextureUHeight;                                        // 0x003C(0x0004)
	struct FString                                     u_strTexture;                                             // 0x0040(0x000C) (NeedCtorLink)
	struct FString                                     Condition;                                                // 0x004C(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.CustomTooltip
// 0x0014
struct FCustomTooltip
{
	int                                                MinimumWidth;                                             // 0x0000(0x0004)
	int                                                SimpleLineCount;                                          // 0x0004(0x0004)
	TArray<struct FDrawItemInfo>                       DrawList;                                                 // 0x0008(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.Rect
// 0x0010
struct FRect
{
	int                                                nX;                                                       // 0x0000(0x0004)
	int                                                nY;                                                       // 0x0004(0x0004)
	int                                                nWidth;                                                   // 0x0008(0x0004)
	int                                                nHeight;                                                  // 0x000C(0x0004)
};

// Struct NWindow.UIEventManager.XMLTreeNodeItemInfo
// 0x0060
struct FXMLTreeNodeItemInfo
{
	TEnumAsByte<EXMLTreeNodeItemType>                  eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nOffSetX;                                                 // 0x0004(0x0004)
	int                                                nOffSetY;                                                 // 0x0008(0x0004)
	unsigned long                                      bLineBreak : 1;                                           // 0x000C(0x0004)
	unsigned long                                      bStopMouseFocus : 1;                                      // 0x000C(0x0004)
	int                                                b_nHeight;                                                // 0x0010(0x0004)
	int                                                t_nTextID;                                                // 0x0014(0x0004)
	struct FString                                     t_strText;                                                // 0x0018(0x000C) (NeedCtorLink)
	struct FColor                                      t_color;                                                  // 0x0024(0x0004)
	unsigned long                                      t_bDrawOneLine : 1;                                       // 0x0028(0x0004)
	int                                                u_nTextureWidth;                                          // 0x002C(0x0004)
	int                                                u_nTextureHeight;                                         // 0x0030(0x0004)
	int                                                u_nTextureUWidth;                                         // 0x0034(0x0004)
	int                                                u_nTextureUHeight;                                        // 0x0038(0x0004)
	struct FString                                     u_strTexture;                                             // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     u_strTextureMouseOn;                                      // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     u_strTextureExpanded;                                     // 0x0054(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.XMLTreeNodeInfo
// 0x00C8
struct FXMLTreeNodeInfo
{
	struct FString                                     strName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	int                                                nOffSetX;                                                 // 0x000C(0x0004)
	int                                                nOffSetY;                                                 // 0x0010(0x0004)
	int                                                bDrawBackground;                                          // 0x0014(0x0004)
	int                                                bTexBackHighlight;                                        // 0x0018(0x0004)
	int                                                nTexBackHighlightHeight;                                  // 0x001C(0x0004)
	int                                                nTexBackWidth;                                            // 0x0020(0x0004)
	int                                                nTexBackUWidth;                                           // 0x0024(0x0004)
	int                                                nTexBackOffSetX;                                          // 0x0028(0x0004)
	int                                                nTexBackOffSetY;                                          // 0x002C(0x0004)
	int                                                nTexBackOffSetBottom;                                     // 0x0030(0x0004)
	struct FString                                     strTexExpandedLeft;                                       // 0x0034(0x000C) (NeedCtorLink)
	struct FString                                     strTexExpandedRight;                                      // 0x0040(0x000C) (NeedCtorLink)
	int                                                nTexExpandedOffSetX;                                      // 0x004C(0x0004)
	int                                                nTexExpandedOffSetY;                                      // 0x0050(0x0004)
	int                                                nTexExpandedHeight;                                       // 0x0054(0x0004)
	int                                                nTexExpandedRightWidth;                                   // 0x0058(0x0004)
	int                                                nTexExpandedLeftUWidth;                                   // 0x005C(0x0004)
	int                                                nTexExpandedLeftUHeight;                                  // 0x0060(0x0004)
	int                                                nTexExpandedRightUWidth;                                  // 0x0064(0x0004)
	int                                                nTexExpandedRightUHeight;                                 // 0x0068(0x0004)
	int                                                bShowButton;                                              // 0x006C(0x0004)
	int                                                nTexBtnWidth;                                             // 0x0070(0x0004)
	int                                                nTexBtnHeight;                                            // 0x0074(0x0004)
	int                                                nTexBtnOffSetX;                                           // 0x0078(0x0004)
	int                                                nTexBtnOffSetY;                                           // 0x007C(0x0004)
	struct FString                                     strTexBtnExpand;                                          // 0x0080(0x000C) (NeedCtorLink)
	struct FString                                     strTexBtnCollapse;                                        // 0x008C(0x000C) (NeedCtorLink)
	struct FString                                     strTexBtnExpand_Over;                                     // 0x0098(0x000C) (NeedCtorLink)
	struct FString                                     strTexBtnCollapse_Over;                                   // 0x00A4(0x000C) (NeedCtorLink)
	struct FCustomTooltip                              ToolTip;                                                  // 0x00B0(0x0014) (NeedCtorLink)
	unsigned long                                      bFollowCursor : 1;                                        // 0x00C4(0x0004)
};

// Struct NWindow.UIEventManager.ItemID
// 0x0008
struct FItemID
{
	int                                                ClassID;                                                  // 0x0000(0x0004)
	int                                                ServerID;                                                 // 0x0004(0x0004)
};

// Struct NWindow.UIEventManager.StatusIconInfo
// 0x0048
struct FStatusIconInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     IconName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	int                                                Size;                                                     // 0x0018(0x0004)
	struct FString                                     Description;                                              // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     BackTex;                                                  // 0x0028(0x000C) (NeedCtorLink)
	int                                                RemainTime;                                               // 0x0034(0x0004)
	struct FItemID                                     Id;                                                       // 0x0038(0x0008)
	int                                                Level;                                                    // 0x0040(0x0004)
	unsigned long                                      bShow : 1;                                                // 0x0044(0x0004)
	unsigned long                                      bShortItem : 1;                                           // 0x0044(0x0004)
	unsigned long                                      bEtcItem : 1;                                             // 0x0044(0x0004)
	unsigned long                                      bDeBuff : 1;                                              // 0x0044(0x0004)
};

// Struct NWindow.UIEventManager.LVTexture
// 0x0024
struct FLVTexture
{
	class UTexture*                                    objTex;                                                   // 0x0000(0x0004)
	int                                                X;                                                        // 0x0004(0x0004)
	int                                                Y;                                                        // 0x0008(0x0004)
	int                                                Width;                                                    // 0x000C(0x0004)
	int                                                Height;                                                   // 0x0010(0x0004)
	int                                                U;                                                        // 0x0014(0x0004)
	int                                                V;                                                        // 0x0018(0x0004)
	int                                                UL;                                                       // 0x001C(0x0004)
	int                                                VL;                                                       // 0x0020(0x0004)
};

// Struct NWindow.UIEventManager.LVData
// 0x004C
struct FLVData
{
	struct FString                                     szData;                                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     szReserved;                                               // 0x000C(0x000C) (NeedCtorLink)
	unsigned long                                      bUseTextColor : 1;                                        // 0x0018(0x0004)
	struct FColor                                      TextColor;                                                // 0x001C(0x0004)
	int                                                nReserved1;                                               // 0x0020(0x0004)
	int                                                nReserved2;                                               // 0x0024(0x0004)
	int                                                nReserved3;                                               // 0x0028(0x0004)
	struct FString                                     szTexture;                                                // 0x002C(0x000C) (NeedCtorLink)
	int                                                nTextureWidth;                                            // 0x0038(0x0004)
	int                                                nTextureHeight;                                           // 0x003C(0x0004)
	TArray<struct FLVTexture>                          arrTexture;                                               // 0x0040(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.LVDataRecord
// 0x0030
struct FLVDataRecord
{
	TArray<struct FLVData>                             LVDataList;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     szReserved;                                               // 0x000C(0x000C) (NeedCtorLink)
	struct FINT64                                      nReserved1;                                               // 0x0018(0x0008)
	struct FINT64                                      nReserved2;                                               // 0x0020(0x0008)
	struct FINT64                                      nReserved3;                                               // 0x0028(0x0008)
};

// Struct NWindow.UIEventManager.ItemInfo
// 0x01A8
struct FItemInfo
{
	struct FItemID                                     Id;                                                       // 0x0000(0x0008)
	struct FString                                     Name;                                                     // 0x0008(0x000C) (NeedCtorLink)
	struct FString                                     AdditionalName;                                           // 0x0014(0x000C) (NeedCtorLink)
	struct FString                                     IconName;                                                 // 0x0020(0x000C) (NeedCtorLink)
	struct FString                                     IconNameEx1;                                              // 0x002C(0x000C) (NeedCtorLink)
	struct FString                                     IconNameEx2;                                              // 0x0038(0x000C) (NeedCtorLink)
	struct FString                                     IconNameEx3;                                              // 0x0044(0x000C) (NeedCtorLink)
	struct FString                                     IconNameEx4;                                              // 0x0050(0x000C) (NeedCtorLink)
	struct FString                                     ForeTexture;                                              // 0x005C(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x0068(0x000C) (NeedCtorLink)
	struct FString                                     DragSrcName;                                              // 0x0074(0x000C) (NeedCtorLink)
	struct FString                                     IconPanel;                                                // 0x0080(0x000C) (NeedCtorLink)
	int                                                DragSrcReserved;                                          // 0x008C(0x0004)
	struct FString                                     MacroCommand;                                             // 0x0090(0x000C) (NeedCtorLink)
	int                                                ItemType;                                                 // 0x009C(0x0004)
	int                                                ItemSubType;                                              // 0x00A0(0x0004)
	struct FINT64                                      ItemNum;                                                  // 0x00A4(0x0008)
	struct FINT64                                      Price;                                                    // 0x00AC(0x0008)
	int                                                Level;                                                    // 0x00B4(0x0004)
	int                                                SlotBitType;                                              // 0x00B8(0x0004)
	int                                                Weight;                                                   // 0x00BC(0x0004)
	int                                                MaterialType;                                             // 0x00C0(0x0004)
	int                                                WeaponType;                                               // 0x00C4(0x0004)
	int                                                PhysicalDamage;                                           // 0x00C8(0x0004)
	int                                                MagicalDamage;                                            // 0x00CC(0x0004)
	int                                                PhysicalDefense;                                          // 0x00D0(0x0004)
	int                                                MagicalDefense;                                           // 0x00D4(0x0004)
	int                                                ShieldDefense;                                            // 0x00D8(0x0004)
	int                                                ShieldDefenseRate;                                        // 0x00DC(0x0004)
	int                                                Durability;                                               // 0x00E0(0x0004)
	int                                                CrystalType;                                              // 0x00E4(0x0004)
	int                                                RandomDamage;                                             // 0x00E8(0x0004)
	int                                                Critical;                                                 // 0x00EC(0x0004)
	int                                                HitModify;                                                // 0x00F0(0x0004)
	int                                                AttackSpeed;                                              // 0x00F4(0x0004)
	int                                                MpConsume;                                                // 0x00F8(0x0004)
	int                                                ArmorType;                                                // 0x00FC(0x0004)
	int                                                AvoidModify;                                              // 0x0100(0x0004)
	int                                                Damaged;                                                  // 0x0104(0x0004)
	int                                                Enchanted;                                                // 0x0108(0x0004)
	int                                                MpBonus;                                                  // 0x010C(0x0004)
	int                                                SoulshotCount;                                            // 0x0110(0x0004)
	int                                                SpiritshotCount;                                          // 0x0114(0x0004)
	int                                                PopMsgNum;                                                // 0x0118(0x0004)
	int                                                BodyPart;                                                 // 0x011C(0x0004)
	int                                                RefineryOp1;                                              // 0x0120(0x0004)
	int                                                RefineryOp2;                                              // 0x0124(0x0004)
	int                                                CurrentDurability;                                        // 0x0128(0x0004)
	int                                                CurrentPeriod;                                            // 0x012C(0x0004)
	int                                                Reserved;                                                 // 0x0130(0x0004)
	struct FINT64                                      Reserved64;                                               // 0x0134(0x0008)
	struct FINT64                                      DefaultPrice;                                             // 0x013C(0x0008)
	int                                                ConsumeType;                                              // 0x0144(0x0004)
	int                                                Blessed;                                                  // 0x0148(0x0004)
	struct FINT64                                      AllItemCount;                                             // 0x014C(0x0008)
	int                                                IconIndex;                                                // 0x0154(0x0004)
	unsigned long                                      bEquipped : 1;                                            // 0x0158(0x0004)
	unsigned long                                      bRecipe : 1;                                              // 0x0158(0x0004)
	unsigned long                                      bArrow : 1;                                               // 0x0158(0x0004)
	unsigned long                                      bShowCount : 1;                                           // 0x0158(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x0158(0x0004)
	unsigned long                                      bIsLock : 1;                                              // 0x0158(0x0004)
	int                                                AttackAttributeType;                                      // 0x015C(0x0004)
	int                                                AttackAttributeValue;                                     // 0x0160(0x0004)
	int                                                DefenseAttributeValueFire;                                // 0x0164(0x0004)
	int                                                DefenseAttributeValueWater;                               // 0x0168(0x0004)
	int                                                DefenseAttributeValueWind;                                // 0x016C(0x0004)
	int                                                DefenseAttributeValueEarth;                               // 0x0170(0x0004)
	int                                                DefenseAttributeValueHoly;                                // 0x0174(0x0004)
	int                                                DefenseAttributeValueUnholy;                              // 0x0178(0x0004)
	int                                                RelatedQuestID[0xA];                                      // 0x017C(0x0004)
	int                                                IsBRPremium;                                              // 0x01A4(0x0004)
};

// Struct NWindow.UIEventManager.MacroInfo
// 0x00C4
struct FMacroInfo
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     IconName;                                                 // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     IconTextureName;                                          // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x0028(0x000C) (NeedCtorLink)
	struct FString                                     CommandList[0xC];                                         // 0x0034(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.GameTipData
// 0x001C
struct FGameTipData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	int                                                Priority;                                                 // 0x0004(0x0004)
	int                                                TargetLevel;                                              // 0x0008(0x0004)
	unsigned long                                      Validity : 1;                                             // 0x000C(0x0004)
	struct FString                                     TipMsg;                                                   // 0x0010(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.ShortcutScriptData
// 0x0018
struct FShortcutScriptData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     sCommand;                                                 // 0x0004(0x000C) (NeedCtorLink)
	int                                                sysString;                                                // 0x0010(0x0004)
	int                                                SysMsg;                                                   // 0x0014(0x0004)
};

// Struct NWindow.UIEventManager.ShortcutCommandItem
// 0x0058
struct FShortcutCommandItem
{
	struct FString                                     sCommand;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Key;                                                      // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     subkey1;                                                  // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     subkey2;                                                  // 0x0024(0x000C) (NeedCtorLink)
	struct FString                                     sState;                                                   // 0x0030(0x000C) (NeedCtorLink)
	struct FString                                     sCategory;                                                // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     sAction;                                                  // 0x0048(0x000C) (NeedCtorLink)
	int                                                Id;                                                       // 0x0054(0x0004)
};

// Struct NWindow.UIEventManager.UserInfo
// 0x0140
struct FUserInfo
{
	int                                                nID;                                                      // 0x0000(0x0004)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     strNickName;                                              // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     RealName;                                                 // 0x001C(0x000C) (NeedCtorLink)
	int                                                nSex;                                                     // 0x0028(0x0004)
	int                                                nLevel;                                                   // 0x002C(0x0004)
	int                                                nClassID;                                                 // 0x0030(0x0004)
	int                                                nSubClass;                                                // 0x0034(0x0004)
	int                                                nSP;                                                      // 0x0038(0x0004)
	int                                                nCurHP;                                                   // 0x003C(0x0004)
	int                                                nMaxHP;                                                   // 0x0040(0x0004)
	int                                                nCurMP;                                                   // 0x0044(0x0004)
	int                                                nMaxMP;                                                   // 0x0048(0x0004)
	int                                                nCurCP;                                                   // 0x004C(0x0004)
	int                                                nMaxCP;                                                   // 0x0050(0x0004)
	struct FINT64                                      nCurExp;                                                  // 0x0054(0x0008)
	int                                                nUserRank;                                                // 0x005C(0x0004)
	int                                                nClanID;                                                  // 0x0060(0x0004)
	int                                                nAllianceID;                                              // 0x0064(0x0004)
	int                                                nCarryWeight;                                             // 0x0068(0x0004)
	int                                                nCarringWeight;                                           // 0x006C(0x0004)
	int                                                nPhysicalAttack;                                          // 0x0070(0x0004)
	int                                                nPhysicalDefense;                                         // 0x0074(0x0004)
	int                                                nHitRate;                                                 // 0x0078(0x0004)
	int                                                nCriticalRate;                                            // 0x007C(0x0004)
	int                                                nPhysicalAttackSpeed;                                     // 0x0080(0x0004)
	int                                                nMagicalAttack;                                           // 0x0084(0x0004)
	int                                                nMagicDefense;                                            // 0x0088(0x0004)
	int                                                nPhysicalAvoid;                                           // 0x008C(0x0004)
	int                                                nWaterMaxSpeed;                                           // 0x0090(0x0004)
	int                                                nWaterMinSpeed;                                           // 0x0094(0x0004)
	int                                                nAirMaxSpeed;                                             // 0x0098(0x0004)
	int                                                nAirMinSpeed;                                             // 0x009C(0x0004)
	int                                                nGroundMaxSpeed;                                          // 0x00A0(0x0004)
	int                                                nGroundMinSpeed;                                          // 0x00A4(0x0004)
	float                                              fNonAttackSpeedModifier;                                  // 0x00A8(0x0004)
	int                                                nMagicCastingSpeed;                                       // 0x00AC(0x0004)
	int                                                nStr;                                                     // 0x00B0(0x0004)
	int                                                nDex;                                                     // 0x00B4(0x0004)
	int                                                nCon;                                                     // 0x00B8(0x0004)
	int                                                nInt;                                                     // 0x00BC(0x0004)
	int                                                nWit;                                                     // 0x00C0(0x0004)
	int                                                nMen;                                                     // 0x00C4(0x0004)
	int                                                nCriminalRate;                                            // 0x00C8(0x0004)
	int                                                nDualCount;                                               // 0x00CC(0x0004)
	int                                                nPKCount;                                                 // 0x00D0(0x0004)
	int                                                nSociality;                                               // 0x00D4(0x0004)
	int                                                nRemainSulffrage;                                         // 0x00D8(0x0004)
	unsigned long                                      bHero : 1;                                                // 0x00DC(0x0004)
	unsigned long                                      bNobless : 1;                                             // 0x00DC(0x0004)
	unsigned long                                      bNpc : 1;                                                 // 0x00DC(0x0004)
	unsigned long                                      bPet : 1;                                                 // 0x00DC(0x0004)
	unsigned long                                      bCanBeAttacked : 1;                                       // 0x00DC(0x0004)
	struct FVector                                     Loc;                                                      // 0x00E0(0x000C)
	int                                                AttrAttackType;                                           // 0x00EC(0x0004)
	int                                                AttrAttackValue;                                          // 0x00F0(0x0004)
	int                                                AttrDefenseValFire;                                       // 0x00F4(0x0004)
	int                                                AttrDefenseValWater;                                      // 0x00F8(0x0004)
	int                                                AttrDefenseValWind;                                       // 0x00FC(0x0004)
	int                                                AttrDefenseValEarth;                                      // 0x0100(0x0004)
	int                                                AttrDefenseValHoly;                                       // 0x0104(0x0004)
	int                                                AttrDefenseValUnholy;                                     // 0x0108(0x0004)
	int                                                nTransformID;                                             // 0x010C(0x0004)
	unsigned long                                      m_bPawnChanged : 1;                                       // 0x0110(0x0004)
	int                                                nInvenLimit;                                              // 0x0114(0x0004)
	int                                                PvPPointRestrain;                                         // 0x0118(0x0004)
	int                                                PvPPoint;                                                 // 0x011C(0x0004)
	struct FColor                                      NicknameColor;                                            // 0x0120(0x0004)
	int                                                nVitality;                                                // 0x0124(0x0004)
	int                                                nMasterID;                                                // 0x0128(0x0004)
	int                                                nTalismanNum;                                             // 0x012C(0x0004)
	int                                                nFullArmor;                                               // 0x0130(0x0004)
	int                                                JoinedDominionID;                                         // 0x0134(0x0004)
	unsigned long                                      WantHideName : 1;                                         // 0x0138(0x0004)
	int                                                DominionIDForVirtualName;                                 // 0x013C(0x0004)
};

// Struct NWindow.UIEventManager.EventMatchUserData
// 0x0050
struct FEventMatchUserData
{
	int                                                UserID;                                                   // 0x0000(0x0004)
	struct FString                                     UserName;                                                 // 0x0004(0x000C) (NeedCtorLink)
	int                                                HPNow;                                                    // 0x0010(0x0004)
	int                                                HPMax;                                                    // 0x0014(0x0004)
	int                                                MPNow;                                                    // 0x0018(0x0004)
	int                                                MPMax;                                                    // 0x001C(0x0004)
	int                                                CPNow;                                                    // 0x0020(0x0004)
	int                                                CPMax;                                                    // 0x0024(0x0004)
	int                                                UserLv;                                                   // 0x0028(0x0004)
	int                                                UserClass;                                                // 0x002C(0x0004)
	int                                                UserGender;                                               // 0x0030(0x0004)
	int                                                UserRace;                                                 // 0x0034(0x0004)
	TArray<int>                                        BuffIDList;                                               // 0x0038(0x000C) (NeedCtorLink)
	TArray<int>                                        BuffRemainList;                                           // 0x0044(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.EventMatchTeamData
// 0x02E4
struct FEventMatchTeamData
{
	int                                                Score;                                                    // 0x0000(0x0004)
	struct FString                                     TeamName;                                                 // 0x0004(0x000C) (NeedCtorLink)
	int                                                PartyMemberCount;                                         // 0x0010(0x0004)
	struct FEventMatchUserData                         User[0x9];                                                // 0x0014(0x0050) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.EventMatchData
// 0x05C8
struct FEventMatchData
{
	struct FEventMatchTeamData                         Team[0x2];                                                // 0x0000(0x02E4) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.ResolutionInfo
// 0x000C
struct FResolutionInfo
{
	int                                                nWidth;                                                   // 0x0000(0x0004)
	int                                                nHeight;                                                  // 0x0004(0x0004)
	int                                                nColorBit;                                                // 0x0008(0x0004)
};

// Struct NWindow.UIEventManager.SystemMsgData
// 0x0054
struct FSystemMsgData
{
	struct FString                                     Group;                                                    // 0x0000(0x000C) (NeedCtorLink)
	struct FColor                                      FontColor;                                                // 0x000C(0x0004)
	struct FString                                     Sound;                                                    // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     Voice;                                                    // 0x001C(0x000C) (NeedCtorLink)
	int                                                WindowType;                                               // 0x0028(0x0004)
	int                                                FontType;                                                 // 0x002C(0x0004)
	int                                                LifeTime;                                                 // 0x0030(0x0004)
	int                                                AnimationType;                                            // 0x0034(0x0004)
	int                                                BackgroundType;                                           // 0x0038(0x0004)
	struct FString                                     SysMsg;                                                   // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     OnScrMsg;                                                 // 0x0048(0x000C) (NeedCtorLink)
};

// Struct NWindow.UIEventManager.SkillInfo
// 0x00A0
struct FSkillInfo
{
	struct FString                                     SkillName;                                                // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     SkillDesc;                                                // 0x000C(0x000C) (NeedCtorLink)
	int                                                SkillID;                                                  // 0x0018(0x0004)
	int                                                SkillLevel;                                               // 0x001C(0x0004)
	int                                                OperateType;                                              // 0x0020(0x0004)
	int                                                MpConsume;                                                // 0x0024(0x0004)
	int                                                HpConsume;                                                // 0x0028(0x0004)
	int                                                CastRange;                                                // 0x002C(0x0004)
	int                                                CastStyle;                                                // 0x0030(0x0004)
	float                                              HitTime;                                                  // 0x0034(0x0004)
	unsigned long                                      IsUsed : 1;                                               // 0x0038(0x0004)
	int                                                IsMagic;                                                  // 0x003C(0x0004)
	struct FString                                     AnimName;                                                 // 0x0040(0x000C) (NeedCtorLink)
	struct FString                                     SkillPresetName;                                          // 0x004C(0x000C) (NeedCtorLink)
	struct FString                                     TexName;                                                  // 0x0058(0x000C) (NeedCtorLink)
	struct FString                                     IconPanel;                                                // 0x0064(0x000C) (NeedCtorLink)
	int                                                IconType;                                                 // 0x0070(0x0004)
	unsigned long                                      IsDebuff : 1;                                             // 0x0074(0x0004)
	struct FString                                     EnchantName;                                              // 0x0078(0x000C) (NeedCtorLink)
	struct FString                                     EnchantDesc;                                              // 0x0084(0x000C) (NeedCtorLink)
	int                                                Enchanted;                                                // 0x0090(0x0004)
	int                                                EnchantSkillLevel;                                        // 0x0094(0x0004)
	int                                                RumbleSelf;                                               // 0x0098(0x0004)
	int                                                RumbleTarget;                                             // 0x009C(0x0004)
};

// Struct NWindow.UIEventManager.PetInfo
// 0x0088
struct FPetInfo
{
	int                                                nID;                                                      // 0x0000(0x0004)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (NeedCtorLink)
	int                                                nLevel;                                                   // 0x0010(0x0004)
	int                                                nSP;                                                      // 0x0014(0x0004)
	int                                                nCurHP;                                                   // 0x0018(0x0004)
	int                                                nMaxHP;                                                   // 0x001C(0x0004)
	int                                                nCurMP;                                                   // 0x0020(0x0004)
	int                                                nMaxMP;                                                   // 0x0024(0x0004)
	struct FINT64                                      nCurExp;                                                  // 0x0028(0x0008)
	struct FINT64                                      nMaxExp;                                                  // 0x0030(0x0008)
	struct FINT64                                      nMinExp;                                                  // 0x0038(0x0008)
	int                                                nCarryWeight;                                             // 0x0040(0x0004)
	int                                                nCarringWeight;                                           // 0x0044(0x0004)
	int                                                nPhysicalAttack;                                          // 0x0048(0x0004)
	int                                                nPhysicalDefense;                                         // 0x004C(0x0004)
	int                                                nHitRate;                                                 // 0x0050(0x0004)
	int                                                nCriticalRate;                                            // 0x0054(0x0004)
	int                                                nPhysicalAttackSpeed;                                     // 0x0058(0x0004)
	int                                                nMagicalAttack;                                           // 0x005C(0x0004)
	int                                                nMagicDefense;                                            // 0x0060(0x0004)
	int                                                nPhysicalAvoid;                                           // 0x0064(0x0004)
	int                                                nMovingSpeed;                                             // 0x0068(0x0004)
	int                                                nMagicCastingSpeed;                                       // 0x006C(0x0004)
	int                                                nSoulShotCosume;                                          // 0x0070(0x0004)
	int                                                nSpiritShotConsume;                                       // 0x0074(0x0004)
	int                                                nFatigue;                                                 // 0x0078(0x0004)
	int                                                nMaxFatigue;                                              // 0x007C(0x0004)
	unsigned long                                      bIsPetOrSummoned : 1;                                     // 0x0080(0x0004)
	int                                                nEvolutionID;                                             // 0x0084(0x0004)
};

// Struct NWindow.UIEventManager.HennaInfo
// 0x0044
struct FHennaInfo
{
	int                                                HennaID;                                                  // 0x0000(0x0004)
	int                                                ClassID;                                                  // 0x0004(0x0004)
	int                                                Num;                                                      // 0x0008(0x0004)
	int                                                Fee;                                                      // 0x000C(0x0004)
	int                                                CanUse;                                                   // 0x0010(0x0004)
	int                                                INTnow;                                                   // 0x0014(0x0004)
	int                                                INTchange;                                                // 0x0018(0x0004)
	int                                                STRnow;                                                   // 0x001C(0x0004)
	int                                                STRchange;                                                // 0x0020(0x0004)
	int                                                CONnow;                                                   // 0x0024(0x0004)
	int                                                CONchange;                                                // 0x0028(0x0004)
	int                                                MENnow;                                                   // 0x002C(0x0004)
	int                                                MENchange;                                                // 0x0030(0x0004)
	int                                                DEXnow;                                                   // 0x0034(0x0004)
	int                                                DEXchange;                                                // 0x0038(0x0004)
	int                                                WITnow;                                                   // 0x003C(0x0004)
	int                                                WITchange;                                                // 0x0040(0x0004)
};

// Struct NWindow.UIEventManager.ClanMemberInfo
// 0x0028
struct FClanMemberInfo
{
	int                                                clanType;                                                 // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x000C) (NeedCtorLink)
	int                                                Level;                                                    // 0x0010(0x0004)
	int                                                ClassID;                                                  // 0x0014(0x0004)
	int                                                gender;                                                   // 0x0018(0x0004)
	int                                                Race;                                                     // 0x001C(0x0004)
	int                                                Id;                                                       // 0x0020(0x0004)
	int                                                bHaveMaster;                                              // 0x0024(0x0004)
};

// Struct NWindow.UIEventManager.ClanInfo
// 0x0024
struct FClanInfo
{
	TArray<struct FClanMemberInfo>                     m_array;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     m_sName;                                                  // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     m_sMasterName;                                            // 0x0018(0x000C) (NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

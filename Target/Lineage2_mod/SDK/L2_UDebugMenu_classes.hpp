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

// Class UDebugMenu.UDebugRootWindow
// 0x0008 (0x0240 - 0x0238)
class UUDebugRootWindow : public UUWindowRootWindow
{
public:
	class UClass*                                      MenuBarClass;                                             // 0x0238(0x0004)
	class UUDebugMenuBar*                              MenuBar;                                                  // 0x023C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugRootWindow");
		return ptr;
	}


	bool KeyEvent(float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action);
	void DoQuitGame();
	void Resized();
	void Created();
};


// Class UDebugMenu.UDebugMenuBar
// 0x0044 (0x016C - 0x0128)
class UUDebugMenuBar : public UUWindowMenuBar
{
public:
	class UUWindowPulldownMenu*                        Game;                                                     // 0x0128(0x0004)
	class UUWindowPulldownMenu*                        RModes;                                                   // 0x012C(0x0004)
	class UUWindowPulldownMenu*                        Rend;                                                     // 0x0130(0x0004)
	class UUWindowPulldownMenu*                        KDraw;                                                    // 0x0134(0x0004)
	class UUWindowPulldownMenu*                        Stats;                                                    // 0x0138(0x0004)
	class UUWindowPulldownMenu*                        Show;                                                     // 0x013C(0x0004)
	class UUWindowPulldownMenu*                        Player;                                                   // 0x0140(0x0004)
	class UUWindowPulldownMenu*                        Options;                                                  // 0x0144(0x0004)
	class UUWindowMenuBarItem*                         GameItem;                                                 // 0x0148(0x0004)
	class UUWindowMenuBarItem*                         RModesItem;                                               // 0x014C(0x0004)
	class UUWindowMenuBarItem*                         RendItem;                                                 // 0x0150(0x0004)
	class UUWindowMenuBarItem*                         KDrawItem;                                                // 0x0154(0x0004)
	class UUWindowMenuBarItem*                         StatsItem;                                                // 0x0158(0x0004)
	class UUWindowMenuBarItem*                         ShowItem;                                                 // 0x015C(0x0004)
	class UUWindowMenuBarItem*                         PlayerItem;                                               // 0x0160(0x0004)
	class UUWindowMenuBarItem*                         OptionsItem;                                              // 0x0164(0x0004)
	unsigned long                                      bShowMenu : 1;                                            // 0x0168(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugMenuBar");
		return ptr;
	}


	void MenuItemSelected(class UUWindowBase* Sender, class UUWindowBase* item);
	void Paint(class UCanvas* C, float MouseX, float MouseY);
	void WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
	void MenuCmd(int Menu, int item);
	void NotifyAfterLevelChange();
	void NotifyBeforeLevelChange();
	void NotifyQuitUnreal();
	void LMouseDown(float X, float Y);
	void DrawMenuBar(class UCanvas* C);
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void ShowHelpItem(class UUWindowMenuBarItem* i);
	void SetHelp(const struct FString& NewHelpText);
	void Created();
};


// Class UDebugMenu.UDebugMapListWindow
// 0x0000 (0x00F8 - 0x00F8)
class UUDebugMapListWindow : public UUWindowFramedWindow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugMapListWindow");
		return ptr;
	}


	void Created();
};


// Class UDebugMenu.UDebugOpenWindow
// 0x0014 (0x010C - 0x00F8)
class UUDebugOpenWindow : public UUWindowFramedWindow
{
public:
	class UUWindowSmallCloseButton*                    CloseButton;                                              // 0x00F8(0x0004)
	class UUWindowSmallButton*                         OKButton;                                                 // 0x00FC(0x0004)
	struct FString                                     OKText;                                                   // 0x0100(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugOpenWindow");
		return ptr;
	}


	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Resized();
	void Created();
};


// Class UDebugMenu.UDebugVideoWindow
// 0x0000 (0x00F8 - 0x00F8)
class UUDebugVideoWindow : public UUWindowFramedWindow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugVideoWindow");
		return ptr;
	}

};


// Class UDebugMenu.UDebugMapListCW
// 0x0020 (0x00EC - 0x00CC)
class UUDebugMapListCW : public UUWindowDialogClientWindow
{
public:
	class UUDebugMapListBox*                           MapList;                                                  // 0x00CC(0x0004)
	class UUWindowSmallCloseButton*                    CloseButton;                                              // 0x00D0(0x0004)
	class UUDebugSmallLoadMapButton*                   OKButton;                                                 // 0x00D4(0x0004)
	class UUWindowComboControl*                        GameCombo;                                                // 0x00D8(0x0004)
	class UUWindowComboControl*                        NetworkCombo;                                             // 0x00DC(0x0004)
	struct FString                                     LastGameType;                                             // 0x00E0(0x000C) (Config, GlobalConfig, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugMapListCW");
		return ptr;
	}


	void WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
	void Notify(class UUWindowDialogControl* C, unsigned char E);
	void LoadMapList();
	void Resized();
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UDebugMenu.UDebugOpenCW
// 0x0094 (0x0160 - 0x00CC)
class UUDebugOpenCW : public UUWindowDialogClientWindow
{
public:
	class UUWindowComboControl*                        OpenCombo;                                                // 0x00CC(0x0004)
	struct FString                                     OpenText;                                                 // 0x00D0(0x000C) (Localized, NeedCtorLink)
	struct FString                                     OpenHelp;                                                 // 0x00DC(0x000C) (Localized, NeedCtorLink)
	struct FString                                     OpenHistory[0xA];                                         // 0x00E8(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugOpenCW");
		return ptr;
	}


	void OpenURL();
	void Notify(class UUWindowDialogControl* C, unsigned char E);
	void Created();
};


// Class UDebugMenu.UDebugVideoClient
// 0x00BC (0x0188 - 0x00CC)
class UUDebugVideoClient : public UUWindowDialogClientWindow
{
public:
	class UUWindowComboControl*                        ResolutionCombo;                                          // 0x00CC(0x0004)
	struct FString                                     ResolutionText;                                           // 0x00D0(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ResolutionHelp;                                           // 0x00DC(0x000C) (Localized, NeedCtorLink)
	class UUWindowHSliderControl*                      BrightnessSlider;                                         // 0x00E8(0x0004)
	struct FString                                     BrightnessText;                                           // 0x00EC(0x000C) (Localized, NeedCtorLink)
	struct FString                                     BrightnessHelp;                                           // 0x00F8(0x000C) (Localized, NeedCtorLink)
	class UUWindowMessageBox*                          ConfirmSettings;                                          // 0x0104(0x0004)
	class UUWindowMessageBox*                          ConfirmDriver;                                            // 0x0108(0x0004)
	class UUWindowMessageBox*                          ConfirmWorldTextureDetail;                                // 0x010C(0x0004)
	class UUWindowMessageBox*                          ConfirmSkinTextureDetail;                                 // 0x0110(0x0004)
	struct FString                                     ConfirmSettingsTitle;                                     // 0x0114(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmSettingsText;                                      // 0x0120(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmSettingsCancelTitle;                               // 0x012C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmSettingsCancelText;                                // 0x0138(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmTextureDetailTitle;                                // 0x0144(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmTextureDetailText;                                 // 0x0150(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmDriverTitle;                                       // 0x015C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     ConfirmDriverText;                                        // 0x0168(0x000C) (Localized, NeedCtorLink)
	struct FString                                     OldSettings;                                              // 0x0174(0x000C) (NeedCtorLink)
	unsigned long                                      bInitialized : 1;                                         // 0x0180(0x0004)
	float                                              ControlOffset;                                            // 0x0184(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugVideoClient");
		return ptr;
	}


	void BrightnessChanged();
	void MessageBoxDone(class UUWindowMessageBox* W, TEnumAsByte<EMessageBoxResult> Result);
	void SettingsChanged();
	void Notify(class UUWindowDialogControl* C, unsigned char E);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void ResolutionChanged(float W, float H);
	void LoadAvailableSettings();
	void AfterCreate();
	void Created();
};


// Class UDebugMenu.UDebugMapList
// 0x0018 (0x00AC - 0x0094)
class UUDebugMapList : public UUWindowListBoxItem
{
public:
	struct FString                                     MapName;                                                  // 0x0094(0x000C) (NeedCtorLink)
	struct FString                                     DisplayName;                                              // 0x00A0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugMapList");
		return ptr;
	}


	class UUDebugMapList* FindMap(const struct FString& FindMapName);
	int Compare(class UUWindowList* t, class UUWindowList* B);
};


// Class UDebugMenu.UDebugMapListBox
// 0x0000 (0x0144 - 0x0144)
class UUDebugMapListBox : public UUWindowListBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugMapListBox");
		return ptr;
	}


	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
};


// Class UDebugMenu.UDebugSmallLoadMapButton
// 0x0000 (0x0194 - 0x0194)
class UUDebugSmallLoadMapButton : public UUWindowSmallOKButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugSmallLoadMapButton");
		return ptr;
	}


	void Click(float X, float Y);
	void Created();
};


// Class UDebugMenu.UDebugBlueLookAndFeel
// 0x0128 (0x05CC - 0x04A4)
class UUDebugBlueLookAndFeel : public UUWindowLookAndFeel
{
public:
	struct FRegion                                     SBUpUp;                                                   // 0x04A4(0x0010) (Edit)
	struct FRegion                                     SBUpDown;                                                 // 0x04B4(0x0010) (Edit)
	struct FRegion                                     SBUpDisabled;                                             // 0x04C4(0x0010) (Edit)
	struct FRegion                                     SBDownUp;                                                 // 0x04D4(0x0010) (Edit)
	struct FRegion                                     SBDownDown;                                               // 0x04E4(0x0010) (Edit)
	struct FRegion                                     SBDownDisabled;                                           // 0x04F4(0x0010) (Edit)
	struct FRegion                                     SBLeftUp;                                                 // 0x0504(0x0010) (Edit)
	struct FRegion                                     SBLeftDown;                                               // 0x0514(0x0010) (Edit)
	struct FRegion                                     SBLeftDisabled;                                           // 0x0524(0x0010) (Edit)
	struct FRegion                                     SBRightUp;                                                // 0x0534(0x0010) (Edit)
	struct FRegion                                     SBRightDown;                                              // 0x0544(0x0010) (Edit)
	struct FRegion                                     SBRightDisabled;                                          // 0x0554(0x0010) (Edit)
	struct FRegion                                     SBBackground;                                             // 0x0564(0x0010) (Edit)
	struct FRegion                                     FrameSBL;                                                 // 0x0574(0x0010) (Edit)
	struct FRegion                                     FrameSB;                                                  // 0x0584(0x0010) (Edit)
	struct FRegion                                     FrameSBR;                                                 // 0x0594(0x0010) (Edit)
	struct FRegion                                     CloseBoxUp;                                               // 0x05A4(0x0010) (Edit)
	struct FRegion                                     CloseBoxDown;                                             // 0x05B4(0x0010) (Edit)
	int                                                CloseBoxOffsetX;                                          // 0x05C4(0x0004) (Edit)
	int                                                CloseBoxOffsetY;                                          // 0x05C8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UDebugMenu.UDebugBlueLookAndFeel");
		return ptr;
	}


	void PlayMenuSound(class UUWindowWindow* W, TEnumAsByte<EMenuSound> S);
	void Button_DrawSmallButton(class UUWindowSmallButton* B, class UCanvas* C);
	void Menu_DrawPulldownMenuItem(class UUWindowPulldownMenu* M, class UUWindowPulldownMenuItem* item, class UCanvas* C, float X, float Y, float W, float H, bool bSelected);
	void Menu_DrawPulldownMenuBackground(class UUWindowPulldownMenu* W, class UCanvas* C);
	void Menu_DrawMenuBarItem(class UUWindowMenuBar* B, class UUWindowMenuBarItem* i, float X, float Y, float W, float H, class UCanvas* C);
	void Menu_DrawMenuBar(class UUWindowMenuBar* W, class UCanvas* C);
	void Tab_GetTabSize(class UUWindowTabControlTabArea* tab, class UCanvas* C, const struct FString& Text, float* W, float* H);
	void Tab_DrawTabPageArea(class UUWindowPageControl* W, class UCanvas* C, class UUWindowPageWindow* P);
	void Tab_SetTabPageSize(class UUWindowPageControl* W, class UUWindowPageWindow* P);
	void Tab_SetupRightButton(class UUWindowTabControlRightButton* W);
	void Tab_SetupLeftButton(class UUWindowTabControlLeftButton* W);
	void SB_HDraw(class UUWindowHScrollbar* W, class UCanvas* C);
	void SB_VDraw(class UUWindowVScrollbar* W, class UCanvas* C);
	void SB_SetupRightButton(class UUWindowSBRightButton* W);
	void SB_SetupLeftButton(class UUWindowSBLeftButton* W);
	void SB_SetupDownButton(class UUWindowSBDownButton* W);
	void SB_SetupUpButton(class UUWindowSBUpButton* W);
	void Tab_DrawTab(class UUWindowTabControlTabArea* tab, class UCanvas* C, bool bActiveTab, bool bLeftmostTab, float X, float Y, float W, float H, const struct FString& Text, bool bShowText);
	void ControlFrame_Draw(class UUWindowControlFrame* W, class UCanvas* C);
	void ControlFrame_SetupSizes(class UUWindowControlFrame* W, class UCanvas* C);
	void Editbox_Draw(class UUWindowEditControl* W, class UCanvas* C);
	void Editbox_SetupSizes(class UUWindowEditControl* W, class UCanvas* C);
	void Combo_SetupRightButton(class UUWindowComboRightButton* W);
	void Combo_SetupLeftButton(class UUWindowComboLeftButton* W);
	void Combo_GetButtonBitmaps(class UUWindowComboButton* W);
	void Checkbox_SetupSizes(class UUWindowCheckbox* W, class UCanvas* C);
	void ComboList_DrawItem(class UUWindowComboList* Combo, class UCanvas* C, float X, float Y, float W, float H, const struct FString& Text, bool bSelected);
	void ComboList_DrawBackground(class UUWindowComboList* W, class UCanvas* C);
	void Combo_Draw(class UUWindowComboControl* W, class UCanvas* C);
	void Combo_SetupSizes(class UUWindowComboControl* W, class UCanvas* C);
	void DrawClientArea(class UUWindowClientWindow* W, class UCanvas* C);
	TEnumAsByte<EFrameHitTest> FW_HitTest(class UUWindowFramedWindow* W, float X, float Y);
	struct FRegion FW_GetClientArea(class UUWindowFramedWindow* W);
	void FW_SetupFrameButtons(class UUWindowFramedWindow* W, class UCanvas* C);
	void FW_DrawWindowFrame(class UUWindowFramedWindow* W, class UCanvas* C);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

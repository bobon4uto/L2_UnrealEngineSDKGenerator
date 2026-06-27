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

// Class UWindow.UWindowBase
// 0x0000 (0x0040 - 0x0040)
class UUWindowBase : public UInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowBase");
		return ptr;
	}


	class UObject* BuildObjectWithProperties(const struct FString& Text);
	int InStrAfter(const struct FString& Text, const struct FString& Match, int pos);
	struct FRegion GetRegion(const struct FTexRegion& t);
	struct FTexRegion NewTexRegion(float X, float Y, float W, float H, class UTexture* t);
	struct FRegion NewRegion(float X, float Y, float W, float H);
};


// Class UWindow.UWindowWindow
// 0x0080 (0x00C0 - 0x0040)
class UUWindowWindow : public UUWindowBase
{
public:
	float                                              WinLeft;                                                  // 0x0040(0x0004)
	float                                              WinTop;                                                   // 0x0044(0x0004)
	float                                              WinWidth;                                                 // 0x0048(0x0004)
	float                                              WinHeight;                                                // 0x004C(0x0004)
	class UUWindowWindow*                              ParentWindow;                                             // 0x0050(0x0004)
	class UUWindowWindow*                              FirstChildWindow;                                         // 0x0054(0x0004)
	class UUWindowWindow*                              LastChildWindow;                                          // 0x0058(0x0004)
	class UUWindowWindow*                              NextSiblingWindow;                                        // 0x005C(0x0004)
	class UUWindowWindow*                              PrevSiblingWindow;                                        // 0x0060(0x0004)
	class UUWindowWindow*                              ActiveWindow;                                             // 0x0064(0x0004)
	class UUWindowRootWindow*                          Root;                                                     // 0x0068(0x0004)
	class UUWindowWindow*                              OwnerWindow;                                              // 0x006C(0x0004)
	class UUWindowWindow*                              ModalWindow;                                              // 0x0070(0x0004)
	unsigned long                                      bWindowVisible : 1;                                       // 0x0074(0x0004)
	unsigned long                                      bNoClip : 1;                                              // 0x0074(0x0004)
	unsigned long                                      bMouseDown : 1;                                           // 0x0074(0x0004)
	unsigned long                                      bRMouseDown : 1;                                          // 0x0074(0x0004)
	unsigned long                                      bMMouseDown : 1;                                          // 0x0074(0x0004)
	unsigned long                                      bAlwaysBehind : 1;                                        // 0x0074(0x0004)
	unsigned long                                      bAcceptsFocus : 1;                                        // 0x0074(0x0004)
	unsigned long                                      bAlwaysOnTop : 1;                                         // 0x0074(0x0004)
	unsigned long                                      bLeaveOnscreen : 1;                                       // 0x0074(0x0004)
	unsigned long                                      bUWindowActive : 1;                                       // 0x0074(0x0004)
	unsigned long                                      bTransient : 1;                                           // 0x0074(0x0004)
	unsigned long                                      bAcceptsHotKeys : 1;                                      // 0x0074(0x0004)
	unsigned long                                      bIgnoreLDoubleClick : 1;                                  // 0x0074(0x0004)
	unsigned long                                      bIgnoreMDoubleClick : 1;                                  // 0x0074(0x0004)
	unsigned long                                      bIgnoreRDoubleClick : 1;                                  // 0x0074(0x0004)
	float                                              ClickTime;                                                // 0x0078(0x0004)
	float                                              MClickTime;                                               // 0x007C(0x0004)
	float                                              RClickTime;                                               // 0x0080(0x0004)
	float                                              ClickX;                                                   // 0x0084(0x0004)
	float                                              ClickY;                                                   // 0x0088(0x0004)
	float                                              MClickX;                                                  // 0x008C(0x0004)
	float                                              MClickY;                                                  // 0x0090(0x0004)
	float                                              RClickX;                                                  // 0x0094(0x0004)
	float                                              RClickY;                                                  // 0x0098(0x0004)
	class UUWindowLookAndFeel*                         LookAndFeel;                                              // 0x009C(0x0004)
	struct FRegion                                     ClippingRegion;                                           // 0x00A0(0x0010)
	struct FMouseCursor                                Cursor;                                                   // 0x00B0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowWindow");
		return ptr;
	}


	void StripCRLF(struct FString* Text);
	void ReplaceText(const struct FString& Replace, const struct FString& With, struct FString* Text);
	void NotifyAfterLevelChange();
	void SetCursor(const struct FMouseCursor& C);
	void NotifyBeforeLevelChange();
	void NotifyQuitUnreal();
	void MessageBoxDone(class UUWindowMessageBox* W, TEnumAsByte<EMessageBoxResult> Result);
	class UUWindowMessageBox* STATIC_MessageBox(const struct FString& Title, const struct FString& Message, TEnumAsByte<EMessageBoxButtons> Buttons, TEnumAsByte<EMessageBoxResult> ESCResult, TEnumAsByte<EMessageBoxResult> EnterResult, int TimeOut);
	void SetParent(class UUWindowWindow* NewParent);
	bool WindowIsVisible();
	bool CheckMousePassThrough(float X, float Y);
	void WindowShown();
	void WindowHidden();
	bool WaitModal();
	void ShowModal(class UUWindowWindow* W);
	void ResolutionChanged(float W, float H);
	void TextSize(class UCanvas* C, const struct FString& Text, float* W, float* H);
	void GetDesiredDimensions(float* W, float* H);
	class UUWindowWindow* FindChildWindow(class UClass* ChildClass, bool bExactClass);
	class UUWindowWindow* GetParent(class UClass* ParentClass, bool bExactClass);
	void SetAcceptsHotKeys(bool bNewAccpetsHotKeys);
	bool IsActive();
	class UTexture* GetLookAndFeelTexture();
	void SetMouseWindow();
	void STATIC_ToolTip(const struct FString& strTip);
	bool MouseIsOver();
	unsigned char ParseAmpersand(const struct FString& S, bool bCalcUnderline, struct FString* Result, struct FString* Underline);
	struct FString RemoveAmpersand(const struct FString& S);
	void DrawMiscBevel(class UCanvas* C, float X, float Y, float W, float H, class UTexture* t, int BevelType);
	void DrawUpBevel(class UCanvas* C, float X, float Y, float W, float H, class UTexture* t);
	void DrawClippedActor(class UCanvas* C, float X, float Y, class AActor* A, bool Wireframe, const struct FRotator& RotOffset, const struct FVector& LocOffset);
	void ClipTextWidth(class UCanvas* C, float X, float Y, const struct FString& S, float W);
	int WrapClipText(class UCanvas* C, float X, float Y, const struct FString& S, bool bCheckHotKey, int Length, int PaddingLength, bool bNoDraw);
	void ClipText(class UCanvas* C, float X, float Y, const struct FString& S, bool bCheckHotKey);
	void DrawStretchedTextureSegment(class UCanvas* C, float X, float Y, float W, float H, float tX, float tY, float tW, float tH, class UTexture* Tex);
	void DrawStretchedTexture(class UCanvas* C, float X, float Y, float W, float H, class UTexture* Tex);
	void DrawClippedTexture(class UCanvas* C, float X, float Y, class UTexture* Tex);
	void DrawVertTiledPieces(class UCanvas* C, float DestX, float DestY, float DestW, float DestH, const struct FTexRegion& T1, const struct FTexRegion& T2, const struct FTexRegion& T3, const struct FTexRegion& T4, const struct FTexRegion& T5, float Scale);
	void DrawHorizTiledPieces(class UCanvas* C, float DestX, float DestY, float DestW, float DestH, const struct FTexRegion& T1, const struct FTexRegion& T2, const struct FTexRegion& T3, const struct FTexRegion& T4, const struct FTexRegion& T5, float Scale);
	void Tile(class UCanvas* C, class UTexture* t);
#pragma push_macro("CreateWindow")
#undef CreateWindow
	class UUWindowWindow* CreateWindow(class UClass* WndClass, float X, float Y, float W, float H, class UUWindowWindow* OwnerW, bool bUnique, const struct FName& ObjectName);
#pragma pop_macro("CreateWindow")

	void STATIC_HideWindow();
	void STATIC_ShowWindow();
	void ShowChildWindow(class UUWindowWindow* Child, bool bAtBack);
	void WindowToGlobal(float WinX, float WinY, float* GlobalX, float* GlobalY);
	void GlobalToWindow(float GlobalX, float GlobalY, float* WinX, float* WinY);
	void GetMouseXY(float* X, float* Y);
	void CancelAcceptsFocus();
	void SetAcceptsFocus();
	void HideChildWindow(class UUWindowWindow* Child);
	void SendToBack();
	void BringToFront();
	void ActivateWindow(int Depth, bool bTransientNoDeactivate);
	bool MessageClients(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
	class UUWindowWindow* CheckKeyFocusWindow();
	bool PropagateMessage(const struct FString& Msg, float MsgLife);
	bool PropagateKey(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
	class UUWindowWindow* FindWindowUnder(float X, float Y);
	void PaintClients(class UCanvas* C, float X, float Y);
	void DoTick(float Delta);
	void Tick(float Delta);
	void SetSize(float W, float H);
	void Close(bool bByParent);
	void EscClose();
	void FocusOtherWindow(class UUWindowWindow* W);
	void FocusWindow();
	void LMouseUp(float X, float Y);
	void LMouseDown(float X, float Y);
	void MMouseUp(float X, float Y);
	void MMouseDown(float X, float Y);
	void RMouseUp(float X, float Y);
	void RMouseDown(float X, float Y);
	void KeyFocusExit();
	void KeyFocusEnter();
	void ProcessMenuKey(int Key, const struct FString& KeyName);
	void KeyPressed(int Key, float X, float Y);
	bool HotKeyUp(int Key, float X, float Y);
	bool HotKeyDown(int Key, float X, float Y);
	void KeyDown(int Key, float X, float Y);
	void KeyUp(int Key, float X, float Y);
	void MouseMove(float X, float Y);
	void MouseLeave();
	void Deactivated();
	void Activated();
	void MouseEnter();
	void AfterCreate();
	void Created();
	void BeforeCreate();
	void BeginPlay();
	void RDoubleClick(float X, float Y);
	void MDoubleClick(float X, float Y);
	void DoubleClick(float X, float Y);
	void RClick(float X, float Y);
	void MClick(float X, float Y);
	void Click(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void AfterPaint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Resized();
	class ALevelInfo* GetEntryLevel();
	class ALevelInfo* GetLevel();
	class APlayerController* GetPlayerOwner();
	void SaveConfigs();
	void WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
};


// Class UWindow.UWindowRootWindow
// 0x0178 (0x0238 - 0x00C0)
class UUWindowRootWindow : public UUWindowWindow
{
public:
	class UUWindowWindow*                              MouseWindow;                                              // 0x00C0(0x0004)
	unsigned long                                      bMouseCapture : 1;                                        // 0x00C4(0x0004)
	float                                              OldMouseX;                                                // 0x00C8(0x0004)
	float                                              OldMouseY;                                                // 0x00CC(0x0004)
	class UUWindowWindow*                              FocusedWindow;                                            // 0x00D0(0x0004)
	class UUWindowWindow*                              KeyFocusWindow;                                           // 0x00D4(0x0004)
	struct FMouseCursor                                NormalCursor;                                             // 0x00D8(0x0010)
	struct FMouseCursor                                MoveCursor;                                               // 0x00E8(0x0010)
	struct FMouseCursor                                DiagCursor1;                                              // 0x00F8(0x0010)
	struct FMouseCursor                                HandCursor;                                               // 0x0108(0x0010)
	struct FMouseCursor                                HSplitCursor;                                             // 0x0118(0x0010)
	struct FMouseCursor                                VSplitCursor;                                             // 0x0128(0x0010)
	struct FMouseCursor                                DiagCursor2;                                              // 0x0138(0x0010)
	struct FMouseCursor                                NSCursor;                                                 // 0x0148(0x0010)
	struct FMouseCursor                                WECursor;                                                 // 0x0158(0x0010)
	struct FMouseCursor                                WaitCursor;                                               // 0x0168(0x0010)
	unsigned long                                      bQuickKeyEnable : 1;                                      // 0x0178(0x0004)
	class UUWindowHotkeyWindowList*                    HotkeyWindows;                                            // 0x017C(0x0004)
	float                                              GUIScale;                                                 // 0x0180(0x0004) (Config)
	float                                              RealWidth;                                                // 0x0184(0x0004)
	float                                              RealHeight;                                               // 0x0188(0x0004)
	class UFont*                                       Fonts[0xA];                                               // 0x018C(0x0004)
	class UUWindowLookAndFeel*                         LooksAndFeels[0x14];                                      // 0x01B4(0x0004)
	struct FString                                     LookAndFeelClass;                                         // 0x0204(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bRequestQuit : 1;                                         // 0x0210(0x0004)
	float                                              QuitTime;                                                 // 0x0214(0x0004)
	unsigned long                                      bAllowConsole : 1;                                        // 0x0218(0x0004)
	float                                              MouseScale;                                               // 0x021C(0x0004) (Config)
	float                                              MouseX;                                                   // 0x0220(0x0004)
	float                                              MouseY;                                                   // 0x0224(0x0004)
	float                                              OldClipX;                                                 // 0x0228(0x0004)
	float                                              OldClipY;                                                 // 0x022C(0x0004)
	class UClass*                                      ConsoleClass;                                             // 0x0230(0x0004)
	class UUWindowConsoleWindow*                       ConsoleWindow;                                            // 0x0234(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowRootWindow");
		return ptr;
	}


	void Message(const struct FString& Msg, float MsgLife);
	void PostRender(class UCanvas* Canvas);
	bool KeyEvent(float Delta, TEnumAsByte<EInputKey>* Key, TEnumAsByte<EInputAction>* Action);
	void Initialized();
	void Tick(float Delta);
	void DoQuitGame();
	void QuitGame();
	void SetMousePos(float X, float Y);
	void STATIC_HideWindow();
	void ChangeLookAndFeel(const struct FString& NewLookAndFeel);
	void SetupFonts();
	void SetScale(float NewScale);
	void Resized();
	void CloseActiveWindow();
	bool HotKeyUp(int Key, float X, float Y);
	bool HotKeyDown(int Key, float X, float Y);
	void WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
	void RemoveHotkeyWindow(class UUWindowWindow* W);
	void AddHotkeyWindow(class UUWindowWindow* W);
	bool IsActive();
	class UTexture* GetLookAndFeelTexture();
	void CaptureMouse(class UUWindowWindow* W);
	void CancelCapture();
	bool CheckCaptureMouseDown();
	bool CheckCaptureMouseUp();
	void DrawMouse(class UCanvas* C);
	void MoveMouse(float X, float Y);
	void Created();
	class UUWindowLookAndFeel* GetLookAndFeel(const struct FString& LFClassName);
	void BeginPlay();
};


// Class UWindow.UWindowFramedWindow
// 0x0038 (0x00F8 - 0x00C0)
class UUWindowFramedWindow : public UUWindowWindow
{
public:
	class UClass*                                      ClientClass;                                              // 0x00C0(0x0004)
	class UUWindowWindow*                              ClientArea;                                               // 0x00C4(0x0004)
	struct FString                                     WindowTitle;                                              // 0x00C8(0x000C) (Localized, NeedCtorLink)
	struct FString                                     StatusBarText;                                            // 0x00D4(0x000C) (NeedCtorLink)
	float                                              MoveX;                                                    // 0x00E0(0x0004)
	float                                              MoveY;                                                    // 0x00E4(0x0004)
	float                                              MinWinWidth;                                              // 0x00E8(0x0004)
	float                                              MinWinHeight;                                             // 0x00EC(0x0004)
	unsigned long                                      bTLSizing : 1;                                            // 0x00F0(0x0004)
	unsigned long                                      bTSizing : 1;                                             // 0x00F0(0x0004)
	unsigned long                                      bTRSizing : 1;                                            // 0x00F0(0x0004)
	unsigned long                                      bLSizing : 1;                                             // 0x00F0(0x0004)
	unsigned long                                      bRSizing : 1;                                             // 0x00F0(0x0004)
	unsigned long                                      bBLSizing : 1;                                            // 0x00F0(0x0004)
	unsigned long                                      bBSizing : 1;                                             // 0x00F0(0x0004)
	unsigned long                                      bBRSizing : 1;                                            // 0x00F0(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x00F0(0x0004)
	unsigned long                                      bSizable : 1;                                             // 0x00F0(0x0004)
	unsigned long                                      bStatusBar : 1;                                           // 0x00F0(0x0004)
	class UUWindowFrameCloseBox*                       CloseBox;                                                 // 0x00F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowFramedWindow");
		return ptr;
	}


	void WindowHidden();
	void WindowEvent(TEnumAsByte<EWinMessage> Msg, class UCanvas* C, float X, float Y, int Key);
	void STATIC_ToolTip(const struct FString& strTip);
	void MouseMove(float X, float Y);
	void Resized();
	void LMouseDown(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	bool IsActive();
	class UTexture* GetLookAndFeelTexture();
	void Created();
};


// Class UWindow.UWindowMessageBox
// 0x0014 (0x010C - 0x00F8)
class UUWindowMessageBox : public UUWindowFramedWindow
{
public:
	TEnumAsByte<EMessageBoxResult>                     Result;                                                   // 0x00F8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              TimeOutTime;                                              // 0x00FC(0x0004)
	int                                                TimeOut;                                                  // 0x0100(0x0004)
	unsigned long                                      bSetupSize : 1;                                           // 0x0104(0x0004)
	int                                                FrameCount;                                               // 0x0108(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowMessageBox");
		return ptr;
	}


	void Close(bool bByParent);
	void AfterPaint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void SetupMessageBox(const struct FString& Title, const struct FString& Message, TEnumAsByte<EMessageBoxButtons> Buttons, TEnumAsByte<EMessageBoxResult> InESCResult, TEnumAsByte<EMessageBoxResult> InEnterResult, int InTimeOut);
};


// Class UWindow.UWindowLookAndFeel
// 0x0464 (0x04A4 - 0x0040)
class UUWindowLookAndFeel : public UUWindowBase
{
public:
	class UTexture*                                    active;                                                   // 0x0040(0x0004) (Edit)
	class UTexture*                                    Inactive;                                                 // 0x0044(0x0004) (Edit)
	class UTexture*                                    ActiveS;                                                  // 0x0048(0x0004) (Edit)
	class UTexture*                                    InactiveS;                                                // 0x004C(0x0004) (Edit)
	class UTexture*                                    Misc;                                                     // 0x0050(0x0004) (Edit)
	struct FRegion                                     FrameTL;                                                  // 0x0054(0x0010) (Edit)
	struct FRegion                                     FrameT;                                                   // 0x0064(0x0010) (Edit)
	struct FRegion                                     FrameTR;                                                  // 0x0074(0x0010) (Edit)
	struct FRegion                                     FrameL;                                                   // 0x0084(0x0010) (Edit)
	struct FRegion                                     FrameR;                                                   // 0x0094(0x0010) (Edit)
	struct FRegion                                     FrameBL;                                                  // 0x00A4(0x0010) (Edit)
	struct FRegion                                     FrameB;                                                   // 0x00B4(0x0010) (Edit)
	struct FRegion                                     FrameBR;                                                  // 0x00C4(0x0010) (Edit)
	struct FColor                                      FrameActiveTitleColor;                                    // 0x00D4(0x0004) (Edit)
	struct FColor                                      FrameInactiveTitleColor;                                  // 0x00D8(0x0004) (Edit)
	struct FColor                                      HeadingActiveTitleColor;                                  // 0x00DC(0x0004) (Edit)
	struct FColor                                      HeadingInActiveTitleColor;                                // 0x00E0(0x0004) (Edit)
	int                                                FrameTitleX;                                              // 0x00E4(0x0004) (Edit)
	int                                                FrameTitleY;                                              // 0x00E8(0x0004) (Edit)
	struct FRegion                                     BevelUpTL;                                                // 0x00EC(0x0010) (Edit)
	struct FRegion                                     BevelUpT;                                                 // 0x00FC(0x0010) (Edit)
	struct FRegion                                     BevelUpTR;                                                // 0x010C(0x0010) (Edit)
	struct FRegion                                     BevelUpL;                                                 // 0x011C(0x0010) (Edit)
	struct FRegion                                     BevelUpR;                                                 // 0x012C(0x0010) (Edit)
	struct FRegion                                     BevelUpBL;                                                // 0x013C(0x0010) (Edit)
	struct FRegion                                     BevelUpB;                                                 // 0x014C(0x0010) (Edit)
	struct FRegion                                     BevelUpBR;                                                // 0x015C(0x0010) (Edit)
	struct FRegion                                     BevelUpArea;                                              // 0x016C(0x0010) (Edit)
	struct FRegion                                     MiscBevelTL[0x4];                                         // 0x017C(0x0010) (Edit)
	struct FRegion                                     MiscBevelT[0x4];                                          // 0x01BC(0x0010) (Edit)
	struct FRegion                                     MiscBevelTR[0x4];                                         // 0x01FC(0x0010) (Edit)
	struct FRegion                                     MiscBevelL[0x4];                                          // 0x023C(0x0010) (Edit)
	struct FRegion                                     MiscBevelR[0x4];                                          // 0x027C(0x0010) (Edit)
	struct FRegion                                     MiscBevelBL[0x4];                                         // 0x02BC(0x0010) (Edit)
	struct FRegion                                     MiscBevelB[0x4];                                          // 0x02FC(0x0010) (Edit)
	struct FRegion                                     MiscBevelBR[0x4];                                         // 0x033C(0x0010) (Edit)
	struct FRegion                                     MiscBevelArea[0x4];                                       // 0x037C(0x0010) (Edit)
	struct FRegion                                     ComboBtnUp;                                               // 0x03BC(0x0010) (Edit)
	struct FRegion                                     ComboBtnDown;                                             // 0x03CC(0x0010) (Edit)
	struct FRegion                                     ComboBtnDisabled;                                         // 0x03DC(0x0010) (Edit)
	int                                                ColumnHeadingHeight;                                      // 0x03EC(0x0004) (Edit)
	struct FRegion                                     HLine;                                                    // 0x03F0(0x0010) (Edit)
	struct FColor                                      EditBoxTextColor;                                         // 0x0400(0x0004) (Edit)
	int                                                EditBoxBevel;                                             // 0x0404(0x0004) (Edit)
	struct FRegion                                     TabSelectedL;                                             // 0x0408(0x0010) (Edit)
	struct FRegion                                     TabSelectedM;                                             // 0x0418(0x0010) (Edit)
	struct FRegion                                     TabSelectedR;                                             // 0x0428(0x0010) (Edit)
	struct FRegion                                     TabUnselectedL;                                           // 0x0438(0x0010) (Edit)
	struct FRegion                                     TabUnselectedM;                                           // 0x0448(0x0010) (Edit)
	struct FRegion                                     TabUnselectedR;                                           // 0x0458(0x0010) (Edit)
	struct FRegion                                     TabBackground;                                            // 0x0468(0x0010) (Edit)
	float                                              Size_ScrollbarWidth;                                      // 0x0478(0x0004) (Edit)
	float                                              Size_ScrollbarButtonHeight;                               // 0x047C(0x0004) (Edit)
	float                                              Size_MinScrollbarHeight;                                  // 0x0480(0x0004) (Edit)
	float                                              Size_TabAreaHeight;                                       // 0x0484(0x0004) (Edit)
	float                                              Size_TabAreaOverhangHeight;                               // 0x0488(0x0004) (Edit)
	float                                              Size_TabSpacing;                                          // 0x048C(0x0004) (Edit)
	float                                              Size_TabXOffset;                                          // 0x0490(0x0004) (Edit)
	float                                              Pulldown_ItemHeight;                                      // 0x0494(0x0004) (Edit)
	float                                              Pulldown_VBorder;                                         // 0x0498(0x0004) (Edit)
	float                                              Pulldown_HBorder;                                         // 0x049C(0x0004) (Edit)
	float                                              Pulldown_TextBorder;                                      // 0x04A0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowLookAndFeel");
		return ptr;
	}


	void ControlFrame_Draw(class UUWindowControlFrame* W, class UCanvas* C);
	void ControlFrame_SetupSizes(class UUWindowControlFrame* W, class UCanvas* C);
	void PlayMenuSound(class UUWindowWindow* W, TEnumAsByte<EMenuSound> S);
	void Button_DrawSmallButton(class UUWindowSmallButton* B, class UCanvas* C);
	void Menu_DrawPulldownMenuItem(class UUWindowPulldownMenu* M, class UUWindowPulldownMenuItem* item, class UCanvas* C, float X, float Y, float W, float H, bool bSelected);
	void Menu_DrawPulldownMenuBackground(class UUWindowPulldownMenu* W, class UCanvas* C);
	void Menu_DrawMenuBarItem(class UUWindowMenuBar* B, class UUWindowMenuBarItem* i, float X, float Y, float W, float H, class UCanvas* C);
	void Menu_DrawMenuBar(class UUWindowMenuBar* W, class UCanvas* C);
	void Tab_DrawTabPageArea(class UUWindowPageControl* W, class UCanvas* C, class UUWindowPageWindow* P);
	void Tab_SetTabPageSize(class UUWindowPageControl* W, class UUWindowPageWindow* P);
	void Tab_SetupRightButton(class UUWindowTabControlRightButton* W);
	void Tab_SetupLeftButton(class UUWindowTabControlLeftButton* W);
	void Tab_GetTabSize(class UUWindowTabControlTabArea* tab, class UCanvas* C, const struct FString& Text, float* W, float* H);
	void Tab_DrawTab(class UUWindowTabControlTabArea* tab, class UCanvas* C, bool bActiveTab, bool bLeftmostTab, float X, float Y, float W, float H, const struct FString& Text, bool bShowText);
	void SB_HDraw(class UUWindowHScrollbar* W, class UCanvas* C);
	void SB_VDraw(class UUWindowVScrollbar* W, class UCanvas* C);
	void SB_SetupRightButton(class UUWindowSBRightButton* W);
	void SB_SetupLeftButton(class UUWindowSBLeftButton* W);
	void SB_SetupDownButton(class UUWindowSBDownButton* W);
	void SB_SetupUpButton(class UUWindowSBUpButton* W);
	void Editbox_Draw(class UUWindowEditControl* W, class UCanvas* C);
	void Editbox_SetupSizes(class UUWindowEditControl* W, class UCanvas* C);
	void ComboList_DrawItem(class UUWindowComboList* Combo, class UCanvas* C, float X, float Y, float W, float H, const struct FString& Text, bool bSelected);
	void ComboList_DrawBackground(class UUWindowComboList* W, class UCanvas* C);
	void Checkbox_Draw(class UUWindowCheckbox* W, class UCanvas* C);
	void Checkbox_SetupSizes(class UUWindowCheckbox* W, class UCanvas* C);
	void Combo_SetupRightButton(class UUWindowComboRightButton* W);
	void Combo_SetupLeftButton(class UUWindowComboLeftButton* W);
	void Combo_GetButtonBitmaps(class UUWindowComboButton* W);
	void Combo_Draw(class UUWindowComboControl* W, class UCanvas* C);
	void Combo_SetupSizes(class UUWindowComboControl* W, class UCanvas* C);
	void DrawClientArea(class UUWindowClientWindow* W, class UCanvas* C);
	void FW_SetupFrameButtons(class UUWindowFramedWindow* W, class UCanvas* C);
	TEnumAsByte<EFrameHitTest> FW_HitTest(class UUWindowFramedWindow* W, float X, float Y);
	struct FRegion FW_GetClientArea(class UUWindowFramedWindow* W);
	void FW_DrawWindowFrame(class UUWindowFramedWindow* W, class UCanvas* C);
	void Setup();
	class UTexture* GetTexture(class UUWindowFramedWindow* W);
};


// Class UWindow.UWindowList
// 0x0038 (0x0078 - 0x0040)
class UUWindowList : public UUWindowBase
{
public:
	class UUWindowList*                                Next;                                                     // 0x0040(0x0004)
	class UUWindowList*                                Last;                                                     // 0x0044(0x0004)
	class UUWindowList*                                Prev;                                                     // 0x0048(0x0004)
	class UUWindowList*                                Sentinel;                                                 // 0x004C(0x0004)
	int                                                InternalCount;                                            // 0x0050(0x0004)
	unsigned long                                      bItemOrderChanged : 1;                                    // 0x0054(0x0004)
	unsigned long                                      bSuspendableSort : 1;                                     // 0x0054(0x0004)
	int                                                CompareCount;                                             // 0x0058(0x0004)
	unsigned long                                      bSortSuspended : 1;                                       // 0x005C(0x0004)
	class UUWindowList*                                CurrentSortItem;                                          // 0x0060(0x0004)
	unsigned long                                      bTreeSort : 1;                                            // 0x0064(0x0004)
	class UUWindowList*                                BranchLeft;                                               // 0x0068(0x0004)
	class UUWindowList*                                BranchRight;                                              // 0x006C(0x0004)
	class UUWindowList*                                ParentNode;                                               // 0x0070(0x0004)
	int                                                Tag;                                                      // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowList");
		return ptr;
	}


	void Clear();
	void AppendListCopy(class UUWindowList* L);
	class UUWindowList* FindEntry(int Index);
	void InsertItem(class UUWindowList* NewElement);
	class UUWindowList* Insert(class UClass* C);
	void DoAppendItem(class UUWindowList* NewElement);
	void AppendItem(class UUWindowList* NewElement);
	class UUWindowList* Append(class UClass* C);
	void Validate();
	void SetupSentinel(bool bInTreeSort);
	void MoveItemSorted(class UUWindowList* item);
	int STATIC_Count();
	bool ShowThisItem();
	class UUWindowList* CopyExistingListItem(class UClass* ItemClass, class UUWindowList* SourceItem);
	int CountShown();
	void DestroyListItem();
	void DestroyList();
	void DisconnectList();
	class UUWindowList* Sort();
	void Tick(float Delta);
	void ContinueSort();
	void InsertItemAfter(class UUWindowList* NewElement, bool bCheckShowItem);
	void InsertItemBefore(class UUWindowList* NewElement);
	class UUWindowList* InsertAfter(class UClass* C);
	class UUWindowList* InsertBefore(class UClass* C);
	int Compare(class UUWindowList* t, class UUWindowList* B);
	void Remove();
	class UUWindowList* LeftMost();
	class UUWindowList* RightMost();
	void GraftRight(class UUWindowList* NewRight);
	void GraftLeft(class UUWindowList* NewLeft);
	class UUWindowList* CreateItem(class UClass* C);
};


// Class UWindow.UWindowHotkeyWindowList
// 0x0004 (0x007C - 0x0078)
class UUWindowHotkeyWindowList : public UUWindowList
{
public:
	class UUWindowWindow*                              Window;                                                   // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowHotkeyWindowList");
		return ptr;
	}


	class UUWindowHotkeyWindowList* FindWindow(class UUWindowWindow* W);
};


// Class UWindow.UWindowConsoleWindow
// 0x0008 (0x0100 - 0x00F8)
class UUWindowConsoleWindow : public UUWindowFramedWindow
{
public:
	float                                              OldParentWidth;                                           // 0x00F8(0x0004)
	float                                              OldParentHeight;                                          // 0x00FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowConsoleWindow");
		return ptr;
	}


	void Close(bool bByParent);
	void SetDimensions();
	void ResolutionChanged(float W, float H);
	void STATIC_ShowWindow();
	void Created();
};


// Class UWindow.UWindowDialogControl
// 0x0044 (0x0104 - 0x00C0)
class UUWindowDialogControl : public UUWindowWindow
{
public:
	class UUWindowDialogClientWindow*                  NotifyWindow;                                             // 0x00C0(0x0004)
	struct FString                                     Text;                                                     // 0x00C4(0x000C) (NeedCtorLink)
	int                                                Font;                                                     // 0x00D0(0x0004)
	struct FColor                                      TextColor;                                                // 0x00D4(0x0004)
	TEnumAsByte<ETextAlign>                            Align;                                                    // 0x00D8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              TextX;                                                    // 0x00DC(0x0004)
	float                                              TextY;                                                    // 0x00E0(0x0004)
	unsigned long                                      bHasKeyboardFocus : 1;                                    // 0x00E4(0x0004)
	unsigned long                                      bNoKeyboard : 1;                                          // 0x00E4(0x0004)
	unsigned long                                      bAcceptExternalDragDrop : 1;                              // 0x00E4(0x0004)
	struct FString                                     HelpText;                                                 // 0x00E8(0x000C) (NeedCtorLink)
	float                                              MinWidth;                                                 // 0x00F4(0x0004)
	float                                              MinHeight;                                                // 0x00F8(0x0004)
	class UUWindowDialogControl*                       TabNext;                                                  // 0x00FC(0x0004)
	class UUWindowDialogControl*                       TabPrev;                                                  // 0x0100(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowDialogControl");
		return ptr;
	}


	void MouseLeave();
	void MouseEnter();
	void MouseMove(float X, float Y);
	void KeyDown(int Key, float X, float Y);
	class UUWindowDialogControl* CheckExternalDrag(float X, float Y);
	bool ExternalDragOver(class UUWindowDialogControl* ExternalControl, float X, float Y);
	void Notify(unsigned char E);
	void Register(class UUWindowDialogClientWindow* W);
	void STATIC_SetTextColor(const struct FColor& NewColor);
	void SetFont(int NewFont);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void STATIC_SetText(const struct FString& NewText);
	void SetHelpText(const struct FString& NewHelpText);
	void KeyFocusExit();
	void KeyFocusEnter();
	void Created();
};


// Class UWindow.UWindowListControl
// 0x0014 (0x0118 - 0x0104)
class UUWindowListControl : public UUWindowDialogControl
{
public:
	class UClass*                                      ListClass;                                                // 0x0104(0x0004)
	class UUWindowList*                                Items;                                                    // 0x0108(0x0004)
	struct FColor                                      SelectionBkgColor;                                        // 0x010C(0x0004)
	struct FColor                                      SelectionColor;                                           // 0x0110(0x0004)
	unsigned long                                      bNoSelectionBox : 1;                                      // 0x0114(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowListControl");
		return ptr;
	}


	void Created();
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
};


// Class UWindow.UWindowMenuBar
// 0x0010 (0x0128 - 0x0118)
class UUWindowMenuBar : public UUWindowListControl
{
public:
	class UUWindowMenuBarItem*                         Selected;                                                 // 0x0118(0x0004)
	class UUWindowMenuBarItem*                         Over;                                                     // 0x011C(0x0004)
	unsigned long                                      bAltDown : 1;                                             // 0x0120(0x0004)
	int                                                Spacing;                                                  // 0x0124(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowMenuBar");
		return ptr;
	}


	void MenuItemSelected(class UUWindowBase* Sender, class UUWindowBase* item);
	void MenuCmd(int Menu, int item);
	void KeyDown(int Key, float X, float Y);
	bool HotKeyUp(int Key, float X, float Y);
	bool HotKeyDown(int Key, float X, float Y);
	class UUWindowMenuBar* GetMenuBar();
	void Close(bool bByParent);
	void CloseUp();
	void DrawMenuBar(class UCanvas* C);
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
	void LMouseDown(float X, float Y);
	void Select(class UUWindowMenuBarItem* i);
	void MouseLeave();
	void MouseMove(float X, float Y);
	void Paint(class UCanvas* C, float MouseX, float MouseY);
	void ResolutionChanged(float W, float H);
	class UUWindowMenuBarItem* STATIC_AddItem(const struct FString& Caption);
	class UUWindowMenuBarItem* AddHelpItem(const struct FString& Caption);
	void Created();
};


// Class UWindow.UWindowButton
// 0x0078 (0x017C - 0x0104)
class UUWindowButton : public UUWindowDialogControl
{
public:
	unsigned long                                      bDisabled : 1;                                            // 0x0104(0x0004)
	unsigned long                                      bStretched : 1;                                           // 0x0104(0x0004)
	class UTexture*                                    UpTexture;                                                // 0x0108(0x0004)
	class UTexture*                                    DownTexture;                                              // 0x010C(0x0004)
	class UTexture*                                    DisabledTexture;                                          // 0x0110(0x0004)
	class UTexture*                                    OverTexture;                                              // 0x0114(0x0004)
	struct FRegion                                     UpRegion;                                                 // 0x0118(0x0010)
	struct FRegion                                     DownRegion;                                               // 0x0128(0x0010)
	struct FRegion                                     DisabledRegion;                                           // 0x0138(0x0010)
	struct FRegion                                     OverRegion;                                               // 0x0148(0x0010)
	unsigned long                                      bUseRegion : 1;                                           // 0x0158(0x0004)
	float                                              RegionScale;                                              // 0x015C(0x0004)
	struct FString                                     TooltipString;                                            // 0x0160(0x000C) (NeedCtorLink)
	float                                              ImageX;                                                   // 0x016C(0x0004)
	float                                              ImageY;                                                   // 0x0170(0x0004)
	class USound*                                      OverSound;                                                // 0x0174(0x0004)
	class USound*                                      DownSound;                                                // 0x0178(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowButton");
		return ptr;
	}


	void KeyDown(int Key, float X, float Y);
	void MClick(float X, float Y);
	void RClick(float X, float Y);
	void DoubleClick(float X, float Y);
	void Click(float X, float Y);
	void MouseEnter();
	void MouseLeave();
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UWindow.UWindowFrameCloseBox
// 0x0000 (0x017C - 0x017C)
class UUWindowFrameCloseBox : public UUWindowButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowFrameCloseBox");
		return ptr;
	}


	void KeyDown(int Key, float X, float Y);
	void Click(float X, float Y);
	void Created();
};


// Class UWindow.UWindowClientWindow
// 0x0000 (0x00C0 - 0x00C0)
class UUWindowClientWindow : public UUWindowWindow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowClientWindow");
		return ptr;
	}


	void Close(bool bByParent);
};


// Class UWindow.UWindowDialogClientWindow
// 0x000C (0x00CC - 0x00C0)
class UUWindowDialogClientWindow : public UUWindowClientWindow
{
public:
	float                                              DesiredWidth;                                             // 0x00C0(0x0004)
	float                                              DesiredHeight;                                            // 0x00C4(0x0004)
	class UUWindowDialogControl*                       TabLast;                                                  // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowDialogClientWindow");
		return ptr;
	}


	void GetDesiredDimensions(float* W, float* H);
	void Paint(class UCanvas* C, float X, float Y);
	class UUWindowDialogControl* CreateControl(class UClass* ControlClass, float X, float Y, float W, float H, class UUWindowWindow* OwnerWindow);
	void Notify(class UUWindowDialogControl* C, unsigned char E);
	void OKPressed();
};


// Class UWindow.UWindowMessageBoxCW
// 0x0048 (0x0114 - 0x00CC)
class UUWindowMessageBoxCW : public UUWindowDialogClientWindow
{
public:
	TEnumAsByte<EMessageBoxButtons>                    Buttons;                                                  // 0x00CC(0x0001)
	TEnumAsByte<EMessageBoxResult>                     EnterResult;                                              // 0x00CD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	class UUWindowSmallButton*                         YesButton;                                                // 0x00D0(0x0004)
	class UUWindowSmallButton*                         NoButton;                                                 // 0x00D4(0x0004)
	class UUWindowSmallButton*                         OKButton;                                                 // 0x00D8(0x0004)
	class UUWindowSmallButton*                         CancelButton;                                             // 0x00DC(0x0004)
	struct FString                                     YesText;                                                  // 0x00E0(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NoText;                                                   // 0x00EC(0x000C) (Localized, NeedCtorLink)
	struct FString                                     OKText;                                                   // 0x00F8(0x000C) (Localized, NeedCtorLink)
	struct FString                                     CancelText;                                               // 0x0104(0x000C) (Localized, NeedCtorLink)
	class UUWindowMessageBoxArea*                      MessageArea;                                              // 0x0110(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowMessageBoxCW");
		return ptr;
	}


	void Notify(class UUWindowDialogControl* C, unsigned char E);
	void SetupMessageBoxClient(const struct FString& InMessage, TEnumAsByte<EMessageBoxButtons> InButtons, TEnumAsByte<EMessageBoxResult> InEnterResult);
	void Paint(class UCanvas* C, float X, float Y);
	float GetHeight(class UCanvas* C);
	void Resized();
	void BeforePaint(class UCanvas* C, float X, float Y);
	void KeyDown(int Key, float X, float Y);
	void Created();
};


// Class UWindow.UWindowControlFrame
// 0x0004 (0x00C4 - 0x00C0)
class UUWindowControlFrame : public UUWindowWindow
{
public:
	class UUWindowWindow*                              Framed;                                                   // 0x00C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowControlFrame");
		return ptr;
	}


	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void SetFrame(class UUWindowWindow* W);
};


// Class UWindow.UWindowSmallButton
// 0x0000 (0x017C - 0x017C)
class UUWindowSmallButton : public UUWindowButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSmallButton");
		return ptr;
	}


	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void AutoWidth(class UCanvas* C);
	void Created();
};


// Class UWindow.UWindowPulldownMenu
// 0x001C (0x0134 - 0x0118)
class UUWindowPulldownMenu : public UUWindowListControl
{
public:
	class UUWindowPulldownMenuItem*                    Selected;                                                 // 0x0118(0x0004)
	class UUWindowList*                                Owner;                                                    // 0x011C(0x0004)
	int                                                ItemHeight;                                               // 0x0120(0x0004)
	int                                                VBorder;                                                  // 0x0124(0x0004)
	int                                                HBorder;                                                  // 0x0128(0x0004)
	int                                                TextBorder;                                               // 0x012C(0x0004)
	class UUWindowMenuBar*                             MyMenuBar;                                                // 0x0130(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowPulldownMenu");
		return ptr;
	}


	void MenuCmd(int item);
	void KeyUp(int Key, float X, float Y);
	void KeyDown(int Key, float X, float Y);
	void FocusOtherWindow(class UUWindowWindow* W);
	class UUWindowMenuBar* GetMenuBar();
	void CloseUp(bool bByOwner);
	void ExecuteItem(class UUWindowPulldownMenuItem* i);
	void BeforeExecuteItem(class UUWindowPulldownMenuItem* i);
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
	void DrawMenuBackground(class UCanvas* C);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void LMouseDown(float X, float Y);
	void LMouseUp(float X, float Y);
	void MouseMove(float X, float Y);
	void STATIC_ShowWindow();
	void SetSelected(float X, float Y);
	void PerformSelect(class UUWindowPulldownMenuItem* NewSelected);
	void Select(class UUWindowPulldownMenuItem* i);
	void DeSelect();
	void Clear();
	void Created();
	class UUWindowPulldownMenuItem* AddMenuItem(const struct FString& C, class UTexture* G);
};


// Class UWindow.UWindowPulldownMenuItem
// 0x0024 (0x009C - 0x0078)
class UUWindowPulldownMenuItem : public UUWindowList
{
public:
	struct FString                                     Caption;                                                  // 0x0078(0x000C) (NeedCtorLink)
	class UTexture*                                    Graphic;                                                  // 0x0084(0x0004)
	unsigned char                                      HotKey;                                                   // 0x0088(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	class UUWindowPulldownMenu*                        SubMenu;                                                  // 0x008C(0x0004)
	unsigned long                                      bChecked : 1;                                             // 0x0090(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x0090(0x0004)
	class UUWindowPulldownMenu*                        Owner;                                                    // 0x0094(0x0004)
	float                                              ItemTop;                                                  // 0x0098(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowPulldownMenuItem");
		return ptr;
	}


	class UUWindowMenuBar* GetMenuBar();
	void CloseUp();
	void DeSelect();
	void SetCaption(const struct FString& C);
	void Select();
	class UUWindowPulldownMenu* CreateSubMenu(class UClass* MenuClass, class UUWindowWindow* InOwnerWindow);
};


// Class UWindow.UWindowMenuBarItem
// 0x0024 (0x009C - 0x0078)
class UUWindowMenuBarItem : public UUWindowList
{
public:
	struct FString                                     Caption;                                                  // 0x0078(0x000C) (NeedCtorLink)
	class UUWindowMenuBar*                             Owner;                                                    // 0x0084(0x0004)
	class UUWindowPulldownMenu*                        Menu;                                                     // 0x0088(0x0004)
	float                                              ItemLeft;                                                 // 0x008C(0x0004)
	float                                              ItemWidth;                                                // 0x0090(0x0004)
	unsigned long                                      bHelp : 1;                                                // 0x0094(0x0004)
	unsigned char                                      HotKey;                                                   // 0x0098(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowMenuBarItem");
		return ptr;
	}


	class UUWindowMenuBar* GetMenuBar();
	void CloseUp();
	void Select();
	void DeSelect();
	class UUWindowPulldownMenu* CreateMenu(class UClass* MenuClass);
	void SetCaption(const struct FString& C);
	void SetHelp(bool B);
};


// Class UWindow.UWindowTabControl
// 0x0014 (0x012C - 0x0118)
class UUWindowTabControl : public UUWindowListControl
{
public:
	class UUWindowTabControlLeftButton*                LeftButton;                                               // 0x0118(0x0004)
	class UUWindowTabControlRightButton*               RightButton;                                              // 0x011C(0x0004)
	class UUWindowTabControlTabArea*                   TabArea;                                                  // 0x0120(0x0004)
	class UUWindowTabControlItem*                      SelectedTab;                                              // 0x0124(0x0004)
	unsigned long                                      bMultiLine : 1;                                           // 0x0128(0x0004)
	unsigned long                                      bSelectNearestTabOnRemove : 1;                            // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowTabControl");
		return ptr;
	}


	void DeleteTab(class UUWindowTabControlItem* tab);
	class UUWindowTabControlItem* GetTab(const struct FString& Caption);
	void GotoTab(class UUWindowTabControlItem* NewSelected, bool bByUser);
	class UUWindowTabControlItem* InsertTab(class UUWindowTabControlItem* BeforeTab, const struct FString& Caption);
	class UUWindowTabControlItem* AddTab(const struct FString& Caption);
	void Paint(class UCanvas* C, float X, float Y);
	void SetMultiLine(bool InMultiLine);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UWindow.UWindowPageControl
// 0x0000 (0x012C - 0x012C)
class UUWindowPageControl : public UUWindowTabControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowPageControl");
		return ptr;
	}


	class UUWindowPageControlPage* FirstPage();
	void GotoTab(class UUWindowTabControlItem* NewSelected, bool bByUser);
	void Close(bool bByParent);
	void DeletePage(class UUWindowPageControlPage* P);
	class UUWindowPageControlPage* GetPage(const struct FString& Caption);
	class UUWindowPageControlPage* InsertPage(class UUWindowPageControlPage* BeforePage, const struct FString& Caption, class UClass* PageClass, const struct FName& ObjectName);
	class UUWindowPageControlPage* AddPage(const struct FString& Caption, class UClass* PageClass, const struct FName& ObjectName);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void GetDesiredDimensions(float* W, float* H);
	void NotifyAfterLevelChange();
	void NotifyBeforeLevelChange();
	void NotifyQuitUnreal();
	void ResolutionChanged(float W, float H);
};


// Class UWindow.UWindowPageWindow
// 0x0004 (0x00D0 - 0x00CC)
class UUWindowPageWindow : public UUWindowDialogClientWindow
{
public:
	class UUWindowPageControlPage*                     OwnerTab;                                                 // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowPageWindow");
		return ptr;
	}


	void RightClickTab();
};


// Class UWindow.UWindowTabControlRightButton
// 0x0000 (0x017C - 0x017C)
class UUWindowTabControlRightButton : public UUWindowButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowTabControlRightButton");
		return ptr;
	}


	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
};


// Class UWindow.UWindowTabControlLeftButton
// 0x0000 (0x017C - 0x017C)
class UUWindowTabControlLeftButton : public UUWindowButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowTabControlLeftButton");
		return ptr;
	}


	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
};


// Class UWindow.UWindowTabControlTabArea
// 0x0024 (0x00E4 - 0x00C0)
class UUWindowTabControlTabArea : public UUWindowWindow
{
public:
	int                                                TabOffset;                                                // 0x00C0(0x0004)
	unsigned long                                      bShowSelected : 1;                                        // 0x00C4(0x0004)
	class UUWindowTabControlItem*                      FirstShown;                                               // 0x00C8(0x0004)
	unsigned long                                      bDragging : 1;                                            // 0x00CC(0x0004)
	class UUWindowTabControlItem*                      DragTab;                                                  // 0x00D0(0x0004)
	int                                                TabRows;                                                  // 0x00D4(0x0004)
	unsigned long                                      bArrangeRowsLikeTimHates : 1;                             // 0x00D8(0x0004) (Config, GlobalConfig)
	float                                              UnFlashTime;                                              // 0x00DC(0x0004)
	unsigned long                                      bFlashShown : 1;                                          // 0x00E0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowTabControlTabArea");
		return ptr;
	}


	bool CheckMousePassThrough(float X, float Y);
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H, bool bShowText);
	void RMouseDown(float X, float Y);
	void MouseMove(float X, float Y);
	void LMouseDown(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void LayoutTabs(class UCanvas* C);
	void SizeTabsMultiLine(class UCanvas* C);
	void SizeTabsSingleLine(class UCanvas* C);
	void Created();
};


// Class UWindow.UWindowHScrollbar
// 0x0034 (0x00F4 - 0x00C0)
class UUWindowHScrollbar : public UUWindowWindow
{
public:
	class UUWindowSBLeftButton*                        LeftButton;                                               // 0x00C0(0x0004)
	class UUWindowSBRightButton*                       RightButton;                                              // 0x00C4(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x00C8(0x0004)
	float                                              MinPos;                                                   // 0x00CC(0x0004)
	float                                              MaxPos;                                                   // 0x00D0(0x0004)
	float                                              MaxVisible;                                               // 0x00D4(0x0004)
	float                                              pos;                                                      // 0x00D8(0x0004)
	float                                              ThumbStart;                                               // 0x00DC(0x0004)
	float                                              ThumbWidth;                                               // 0x00E0(0x0004)
	float                                              NextClickTime;                                            // 0x00E4(0x0004)
	float                                              DragX;                                                    // 0x00E8(0x0004)
	unsigned long                                      bDragging : 1;                                            // 0x00EC(0x0004)
	float                                              ScrollAmount;                                             // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowHScrollbar");
		return ptr;
	}


	void MouseMove(float X, float Y);
	void Tick(float Delta);
	void LMouseDown(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
	void CheckRange();
	void SetRange(float NewMinPos, float NewMaxPos, float NewMaxVisible, float NewScrollAmount);
	bool Scroll(float Delta);
	void Show(float P);
};


// Class UWindow.UWindowVScrollbar
// 0x0034 (0x00F4 - 0x00C0)
class UUWindowVScrollbar : public UUWindowWindow
{
public:
	class UUWindowSBUpButton*                          UpButton;                                                 // 0x00C0(0x0004)
	class UUWindowSBDownButton*                        DownButton;                                               // 0x00C4(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x00C8(0x0004)
	float                                              MinPos;                                                   // 0x00CC(0x0004)
	float                                              MaxPos;                                                   // 0x00D0(0x0004)
	float                                              MaxVisible;                                               // 0x00D4(0x0004)
	float                                              pos;                                                      // 0x00D8(0x0004)
	float                                              ThumbStart;                                               // 0x00DC(0x0004)
	float                                              ThumbHeight;                                              // 0x00E0(0x0004)
	float                                              NextClickTime;                                            // 0x00E4(0x0004)
	float                                              DragY;                                                    // 0x00E8(0x0004)
	unsigned long                                      bDragging : 1;                                            // 0x00EC(0x0004)
	float                                              ScrollAmount;                                             // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowVScrollbar");
		return ptr;
	}


	void MouseMove(float X, float Y);
	void Tick(float Delta);
	void LMouseDown(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
	void CheckRange();
	void SetRange(float NewMinPos, float NewMaxPos, float NewMaxVisible, float NewScrollAmount);
	bool Scroll(float Delta);
	void Show(float P);
};


// Class UWindow.UWindowSBRightButton
// 0x0004 (0x0180 - 0x017C)
class UUWindowSBRightButton : public UUWindowButton
{
public:
	float                                              NextClickTime;                                            // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSBRightButton");
		return ptr;
	}


	void Tick(float Delta);
	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UWindow.UWindowSBLeftButton
// 0x0004 (0x0180 - 0x017C)
class UUWindowSBLeftButton : public UUWindowButton
{
public:
	float                                              NextClickTime;                                            // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSBLeftButton");
		return ptr;
	}


	void Tick(float Delta);
	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UWindow.UWindowSBDownButton
// 0x0004 (0x0180 - 0x017C)
class UUWindowSBDownButton : public UUWindowButton
{
public:
	float                                              NextClickTime;                                            // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSBDownButton");
		return ptr;
	}


	void Tick(float Delta);
	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UWindow.UWindowSBUpButton
// 0x0004 (0x0180 - 0x017C)
class UUWindowSBUpButton : public UUWindowButton
{
public:
	float                                              NextClickTime;                                            // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSBUpButton");
		return ptr;
	}


	void Tick(float Delta);
	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Created();
};


// Class UWindow.UWindowEditControl
// 0x0010 (0x0114 - 0x0104)
class UUWindowEditControl : public UUWindowDialogControl
{
public:
	float                                              EditBoxWidth;                                             // 0x0104(0x0004)
	float                                              EditAreaDrawX;                                            // 0x0108(0x0004)
	float                                              EditAreaDrawY;                                            // 0x010C(0x0004)
	class UUWindowEditBox*                             EditBox;                                                  // 0x0110(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowEditControl");
		return ptr;
	}


	void SetDelayedNotify(bool bDelayedNotify);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void STATIC_SetMaxLength(int maxLength);
	void STATIC_SetValue(const struct FString& NewValue);
	struct FString STATIC_GetValue();
	void Clear();
	void SetEditTextColor(const struct FColor& NewColor);
	void SetHistory(bool bInHistory);
	void SetFont(int NewFont);
	void SetNumericFloat(bool bNumericFloat);
	void SetNumericOnly(bool bNumericOnly);
	void Created();
};


// Class UWindow.UWindowComboList
// 0x0020 (0x0138 - 0x0118)
class UUWindowComboList : public UUWindowListControl
{
public:
	class UUWindowComboControl*                        Owner;                                                    // 0x0118(0x0004)
	class UUWindowVScrollbar*                          VertSB;                                                   // 0x011C(0x0004)
	class UUWindowComboListItem*                       Selected;                                                 // 0x0120(0x0004)
	int                                                ItemHeight;                                               // 0x0124(0x0004)
	int                                                VBorder;                                                  // 0x0128(0x0004)
	int                                                HBorder;                                                  // 0x012C(0x0004)
	int                                                TextBorder;                                               // 0x0130(0x0004)
	int                                                MaxVisible;                                               // 0x0134(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowComboList");
		return ptr;
	}


	void FocusOtherWindow(class UUWindowWindow* W);
	void CloseUp();
	void ExecuteItem(class UUWindowComboListItem* i);
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
	void DrawMenuBackground(class UCanvas* C);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void LMouseDown(float X, float Y);
	void LMouseUp(float X, float Y);
	void MouseMove(float X, float Y);
	void SetSelected(float X, float Y);
	void InsertItem(const struct FString& Value, const struct FString& Value2, int SortWeight);
	void STATIC_AddItem(const struct FString& Value, const struct FString& Value2, int SortWeight);
	struct FString GetItemValue2(int Index);
	void RemoveItem(int Index);
	struct FString GetItemValue(int Index);
	int FindItemIndex2(const struct FString& Value2, bool bIgnoreCase);
	int FindItemIndex(const struct FString& Value, bool bIgnoreCase);
	void Created();
	void Setup();
	class UTexture* GetLookAndFeelTexture();
	void Clear();
	void WindowShown();
	void Sort();
};


// Class UWindow.UWindowCheckbox
// 0x0004 (0x0180 - 0x017C)
class UUWindowCheckbox : public UUWindowButton
{
public:
	unsigned long                                      bChecked : 1;                                             // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowCheckbox");
		return ptr;
	}


	void LMouseUp(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
};


// Class UWindow.UWindowComboRightButton
// 0x0000 (0x017C - 0x017C)
class UUWindowComboRightButton : public UUWindowButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowComboRightButton");
		return ptr;
	}


	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
};


// Class UWindow.UWindowComboLeftButton
// 0x0000 (0x017C - 0x017C)
class UUWindowComboLeftButton : public UUWindowButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowComboLeftButton");
		return ptr;
	}


	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
};


// Class UWindow.UWindowComboButton
// 0x0004 (0x0180 - 0x017C)
class UUWindowComboButton : public UUWindowButton
{
public:
	class UUWindowComboControl*                        Owner;                                                    // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowComboButton");
		return ptr;
	}


	void FocusOtherWindow(class UUWindowWindow* W);
	void Click(float X, float Y);
	void LMouseDown(float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
};


// Class UWindow.UWindowComboControl
// 0x0028 (0x012C - 0x0104)
class UUWindowComboControl : public UUWindowDialogControl
{
public:
	float                                              EditBoxWidth;                                             // 0x0104(0x0004)
	float                                              EditAreaDrawX;                                            // 0x0108(0x0004)
	float                                              EditAreaDrawY;                                            // 0x010C(0x0004)
	class UUWindowEditBox*                             EditBox;                                                  // 0x0110(0x0004)
	class UUWindowComboButton*                         Button;                                                   // 0x0114(0x0004)
	class UUWindowComboLeftButton*                     LeftButton;                                               // 0x0118(0x0004)
	class UUWindowComboRightButton*                    RightButton;                                              // 0x011C(0x0004)
	class UClass*                                      ListClass;                                                // 0x0120(0x0004)
	class UUWindowComboList*                           List;                                                     // 0x0124(0x0004)
	unsigned long                                      bListVisible : 1;                                         // 0x0128(0x0004)
	unsigned long                                      bCanEdit : 1;                                             // 0x0128(0x0004)
	unsigned long                                      bButtons : 1;                                             // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowComboControl");
		return ptr;
	}


	void FocusOtherWindow(class UUWindowWindow* W);
	void Clear();
	void STATIC_ClearValue();
	void Sort();
	void DropDown();
	void CloseUp();
	void BeforePaint(class UCanvas* C, float X, float Y);
	void InsertItem(const struct FString& S, const struct FString& S2, int SortWeight);
	void STATIC_AddItem(const struct FString& S, const struct FString& S2, int SortWeight);
	void Paint(class UCanvas* C, float X, float Y);
	void STATIC_SetMaxLength(int maxLength);
	void STATIC_SetValue(const struct FString& NewValue, const struct FString& NewValue2);
	struct FString GetValue2();
	struct FString STATIC_GetValue();
	void STATIC_SetSelectedIndex(int Index);
	int STATIC_GetSelectedIndex();
	void STATIC_SetEditable(bool bNewCanEdit);
	void SetEditTextColor(const struct FColor& NewColor);
	void SetFont(int NewFont);
	void SetNumericFloat(bool bNumericFloat);
	void SetNumericOnly(bool bNumericOnly);
	void Close(bool bByParent);
	int FindItemIndex2(const struct FString& v2, bool bIgnoreCase);
	void RemoveItem(int Index);
	int FindItemIndex(const struct FString& V, bool bIgnoreCase);
	void Notify(unsigned char E);
	void SetButtons(bool bInButtons);
	void Created();
};


// Class UWindow.UWindowConsoleClientWindow
// 0x0008 (0x00D4 - 0x00CC)
class UUWindowConsoleClientWindow : public UUWindowDialogClientWindow
{
public:
	class UUWindowConsoleTextAreaControl*              TextArea;                                                 // 0x00CC(0x0004)
	class UUWindowEditControl*                         EditControl;                                              // 0x00D0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowConsoleClientWindow");
		return ptr;
	}


	void Message(const struct FString& Msg, float MsgLife);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void Notify(class UUWindowDialogControl* C, unsigned char E);
	void Created();
};


// Class UWindow.UWindowMessageBoxArea
// 0x000C (0x00CC - 0x00C0)
class UUWindowMessageBoxArea : public UUWindowWindow
{
public:
	struct FString                                     Message;                                                  // 0x00C0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowMessageBoxArea");
		return ptr;
	}


	void Paint(class UCanvas* C, float X, float Y);
	float GetHeight(class UCanvas* C);
};


// Class UWindow.UWindowTabControlItem
// 0x0034 (0x00AC - 0x0078)
class UUWindowTabControlItem : public UUWindowList
{
public:
	struct FString                                     Caption;                                                  // 0x0078(0x000C) (NeedCtorLink)
	struct FString                                     HelpText;                                                 // 0x0084(0x000C) (NeedCtorLink)
	class UUWindowTabControl*                          Owner;                                                    // 0x0090(0x0004)
	float                                              TabTop;                                                   // 0x0094(0x0004)
	float                                              TabLeft;                                                  // 0x0098(0x0004)
	float                                              TabWidth;                                                 // 0x009C(0x0004)
	float                                              TabHeight;                                                // 0x00A0(0x0004)
	int                                                RowNumber;                                                // 0x00A4(0x0004)
	unsigned long                                      bFlash : 1;                                               // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowTabControlItem");
		return ptr;
	}


	void RightClickTab();
	void SetCaption(const struct FString& NewCaption);
};


// Class UWindow.UWindowPageControlPage
// 0x0004 (0x00B0 - 0x00AC)
class UUWindowPageControlPage : public UUWindowTabControlItem
{
public:
	class UUWindowPageWindow*                          page;                                                     // 0x00AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowPageControlPage");
		return ptr;
	}


	class UUWindowPageControlPage* NextPage();
	void RightClickTab();
};


// Class UWindow.UWindowEditBox
// 0x003C (0x0140 - 0x0104)
class UUWindowEditBox : public UUWindowDialogControl
{
public:
	struct FString                                     Value;                                                    // 0x0104(0x000C) (NeedCtorLink)
	struct FString                                     Value2;                                                   // 0x0110(0x000C) (NeedCtorLink)
	int                                                CaretOffset;                                              // 0x011C(0x0004)
	int                                                maxLength;                                                // 0x0120(0x0004)
	float                                              LastDrawTime;                                             // 0x0124(0x0004)
	unsigned long                                      bShowCaret : 1;                                           // 0x0128(0x0004)
	float                                              offset;                                                   // 0x012C(0x0004)
	class UUWindowDialogControl*                       NotifyOwner;                                              // 0x0130(0x0004)
	unsigned long                                      bNumericOnly : 1;                                         // 0x0134(0x0004)
	unsigned long                                      bNumericFloat : 1;                                        // 0x0134(0x0004)
	unsigned long                                      bCanEdit : 1;                                             // 0x0134(0x0004)
	unsigned long                                      bAllSelected : 1;                                         // 0x0134(0x0004)
	unsigned long                                      bSelectOnFocus : 1;                                       // 0x0134(0x0004)
	unsigned long                                      bDelayedNotify : 1;                                       // 0x0134(0x0004)
	unsigned long                                      bChangePending : 1;                                       // 0x0134(0x0004)
	unsigned long                                      bControlDown : 1;                                         // 0x0134(0x0004)
	unsigned long                                      bShiftDown : 1;                                           // 0x0134(0x0004)
	unsigned long                                      bHistory : 1;                                             // 0x0134(0x0004)
	unsigned long                                      bKeyDown : 1;                                             // 0x0134(0x0004)
	class UUWindowEditBoxHistory*                      HistoryList;                                              // 0x0138(0x0004)
	class UUWindowEditBoxHistory*                      CurrentHistory;                                           // 0x013C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowEditBox");
		return ptr;
	}


	void KeyFocusExit();
	void DoubleClick(float X, float Y);
	void KeyFocusEnter();
	void FocusOtherWindow(class UUWindowWindow* W);
	void Close(bool bByParent);
	void Paint(class UCanvas* C, float X, float Y);
	void LMouseDown(float X, float Y);
	void Click(float X, float Y);
	void KeyDown(int Key, float X, float Y);
	void KeyUp(int Key, float X, float Y);
	void KeyPressed(int Key, float MouseX, float MouseY);
	void EditCut();
	void EditPaste();
	void EditCopy();
	bool MoveEnd();
	bool MoveHome();
	bool WordRight();
	bool MoveRight();
	bool MoveLeft();
	bool WordLeft();
	bool STATIC_Delete();
	bool STATIC_Backspace();
	bool Insert(unsigned char C);
	void InsertText(const struct FString& Text);
	void Notify(unsigned char E);
	struct FString GetValue2();
	struct FString STATIC_GetValue();
	void SelectAll();
	void Clear();
	void STATIC_SetValue(const struct FString& NewValue, const struct FString& NewValue2);
	void STATIC_SetEditable(bool bEditable);
	void SetHistory(bool bInHistory);
	void Created();
};


// Class UWindow.UWindowComboListItem
// 0x0020 (0x0098 - 0x0078)
class UUWindowComboListItem : public UUWindowList
{
public:
	struct FString                                     Value;                                                    // 0x0078(0x000C) (NeedCtorLink)
	struct FString                                     Value2;                                                   // 0x0084(0x000C) (NeedCtorLink)
	int                                                SortWeight;                                               // 0x0090(0x0004)
	float                                              ItemTop;                                                  // 0x0094(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowComboListItem");
		return ptr;
	}


	int Compare(class UUWindowList* t, class UUWindowList* B);
};


// Class UWindow.UWindowDynamicTextArea
// 0x0040 (0x0144 - 0x0104)
class UUWindowDynamicTextArea : public UUWindowDialogControl
{
public:
	int                                                MaxLines;                                                 // 0x0104(0x0004) (Config)
	unsigned long                                      bTopCentric : 1;                                          // 0x0108(0x0004)
	float                                              DefaultTextHeight;                                        // 0x010C(0x0004)
	unsigned long                                      bScrollOnResize : 1;                                      // 0x0110(0x0004)
	unsigned long                                      bVCenter : 1;                                             // 0x0110(0x0004)
	unsigned long                                      bHCenter : 1;                                             // 0x0110(0x0004)
	unsigned long                                      bAutoScrollbar : 1;                                       // 0x0110(0x0004)
	unsigned long                                      bVariableRowHeight : 1;                                   // 0x0110(0x0004)
	float                                              WrapWidth;                                                // 0x0114(0x0004)
	class UUWindowDynamicTextRow*                      List;                                                     // 0x0118(0x0004)
	class UUWindowVScrollbar*                          VertSB;                                                   // 0x011C(0x0004)
	float                                              OldW;                                                     // 0x0120(0x0004)
	float                                              OldH;                                                     // 0x0124(0x0004)
	unsigned long                                      bDirty : 1;                                               // 0x0128(0x0004)
	int                                                Count;                                                    // 0x012C(0x0004)
	int                                                VisibleRows;                                              // 0x0130(0x0004)
	int                                                Font;                                                     // 0x0134(0x0004)
	class UFont*                                       AbsoluteFont;                                             // 0x0138(0x0004)
	struct FColor                                      TextColor;                                                // 0x013C(0x0004)
	class UClass*                                      RowClass;                                                 // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowDynamicTextArea");
		return ptr;
	}


	void RemoveWrap(class UUWindowDynamicTextRow* L);
	void RemoveNextWord(struct FString* Text, struct FString* NextWord);
	class UUWindowDynamicTextRow* SplitRowAt(class UUWindowDynamicTextRow* L, int SplitPos);
	int GetWrapPos(class UCanvas* C, class UUWindowDynamicTextRow* L, float MaxWidth);
	float DrawTextLine(class UCanvas* C, class UUWindowDynamicTextRow* L, float Y);
	void WrapRow(class UCanvas* C, class UUWindowDynamicTextRow* L);
	void WordWrap(class UCanvas* C, bool bForce);
	class UUWindowDynamicTextRow* CheckMaxRows();
	class UUWindowDynamicTextRow* AddText(const struct FString& NewLine);
	void Paint(class UCanvas* C, float MouseX, float MouseY);
	void BeforePaint(class UCanvas* C, float X, float Y);
	void TextAreaTextSize(class UCanvas* C, const struct FString& Text, float* W, float* H);
	void TextAreaClipText(class UCanvas* C, float DrawX, float DrawY, const struct FString& S, bool bCheckHotKey);
	void STATIC_SetTextColor(const struct FColor& C);
	void SetFont(int f);
	void SetAbsoluteFont(class UFont* f);
	void Clear();
	void Created();
};


// Class UWindow.UWindowConsoleTextAreaControl
// 0x0000 (0x0144 - 0x0144)
class UUWindowConsoleTextAreaControl : public UUWindowDynamicTextArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowConsoleTextAreaControl");
		return ptr;
	}

};


// Class UWindow.UWindowSmallCloseButton
// 0x000C (0x0188 - 0x017C)
class UUWindowSmallCloseButton : public UUWindowSmallButton
{
public:
	struct FString                                     CloseText;                                                // 0x017C(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSmallCloseButton");
		return ptr;
	}


	void Click(float X, float Y);
	void Created();
};


// Class UWindow.UWindowEditBoxHistory
// 0x000C (0x0084 - 0x0078)
class UUWindowEditBoxHistory : public UUWindowList
{
public:
	struct FString                                     HistoryText;                                              // 0x0078(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowEditBoxHistory");
		return ptr;
	}

};


// Class UWindow.UWindowDynamicTextRow
// 0x0014 (0x008C - 0x0078)
class UUWindowDynamicTextRow : public UUWindowList
{
public:
	struct FString                                     Text;                                                     // 0x0078(0x000C) (NeedCtorLink)
	class UUWindowDynamicTextRow*                      WrapParent;                                               // 0x0084(0x0004)
	unsigned long                                      bRowDirty : 1;                                            // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowDynamicTextRow");
		return ptr;
	}

};


// Class UWindow.UWindowListBox
// 0x002C (0x0144 - 0x0118)
class UUWindowListBox : public UUWindowListControl
{
public:
	float                                              ItemHeight;                                               // 0x0118(0x0004)
	class UUWindowVScrollbar*                          VertSB;                                                   // 0x011C(0x0004)
	class UUWindowListBoxItem*                         SelectedItem;                                             // 0x0120(0x0004)
	unsigned long                                      bCanDrag : 1;                                             // 0x0124(0x0004)
	unsigned long                                      bCanDragExternal : 1;                                     // 0x0124(0x0004)
	struct FString                                     DefaultHelpText;                                          // 0x0128(0x000C) (NeedCtorLink)
	unsigned long                                      bDragging : 1;                                            // 0x0134(0x0004)
	float                                              DragY;                                                    // 0x0138(0x0004)
	class UUWindowListBox*                             DoubleClickList;                                          // 0x013C(0x0004)
	unsigned long                                      bHotTrack : 1;                                            // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowListBox");
		return ptr;
	}


	void KeyUp(int Key, float X, float Y);
	void DrawItem(class UCanvas* C, class UUWindowList* item, float X, float Y, float W, float H);
	bool ExternalDragOver(class UUWindowDialogControl* ExternalControl, float X, float Y);
	void MouseMove(float X, float Y);
	void DoubleClickItem(class UUWindowListBoxItem* i);
	void ReceiveDoubleClickItem(class UUWindowListBox* L, class UUWindowListBoxItem* i);
	void DoubleClick(float X, float Y);
	void LMouseDown(float X, float Y);
	void SetSelected(float X, float Y);
	void SetSelectedItem(class UUWindowListBoxItem* NewSelected);
	void MakeSelectedVisible();
	class UUWindowListBoxItem* GetItemAt(float MouseX, float MouseY);
	void Resized();
	void Paint(class UCanvas* C, float MouseX, float MouseY);
	void Sort();
	void SetHelpText(const struct FString& t);
	void BeforePaint(class UCanvas* C, float MouseX, float MouseY);
	class UUWindowListBoxItem* STATIC_AddItem(const struct FString& C);
	void Created();
};


// Class UWindow.UWindowListBoxItem
// 0x001C (0x0094 - 0x0078)
class UUWindowListBoxItem : public UUWindowList
{
public:
	struct FString                                     Caption;                                                  // 0x0078(0x000C) (NeedCtorLink)
	unsigned long                                      bSelected : 1;                                            // 0x0084(0x0004)
	struct FString                                     HelpText;                                                 // 0x0088(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowListBoxItem");
		return ptr;
	}

};


// Class UWindow.UWindowSmallOKButton
// 0x000C (0x0194 - 0x0188)
class UUWindowSmallOKButton : public UUWindowSmallCloseButton
{
public:
	struct FString                                     OKText;                                                   // 0x0188(0x000C) (Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowSmallOKButton");
		return ptr;
	}


	void Created();
};


// Class UWindow.UWindowHSliderControl
// 0x0028 (0x012C - 0x0104)
class UUWindowHSliderControl : public UUWindowDialogControl
{
public:
	float                                              MinValue;                                                 // 0x0104(0x0004)
	float                                              MaxValue;                                                 // 0x0108(0x0004)
	float                                              Value;                                                    // 0x010C(0x0004)
	int                                                Step;                                                     // 0x0110(0x0004)
	float                                              SliderWidth;                                              // 0x0114(0x0004)
	float                                              SliderDrawX;                                              // 0x0118(0x0004)
	float                                              SliderDrawY;                                              // 0x011C(0x0004)
	float                                              TrackStart;                                               // 0x0120(0x0004)
	float                                              TrackWidth;                                               // 0x0124(0x0004)
	unsigned long                                      bSliding : 1;                                             // 0x0128(0x0004)
	unsigned long                                      bNoSlidingNotify : 1;                                     // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UWindow.UWindowHSliderControl");
		return ptr;
	}


	void KeyDown(int Key, float X, float Y);
	void MouseMove(float X, float Y);
	void LMouseDown(float X, float Y);
	void LMouseUp(float X, float Y);
	void Paint(class UCanvas* C, float X, float Y);
	void BeforePaint(class UCanvas* C, float X, float Y);
	float CheckValue(float test);
	void STATIC_SetValue(float NewValue, bool bNoNotify);
	float STATIC_GetValue();
	void SetRange(float Min, float Max, int NewStep);
	void Created();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

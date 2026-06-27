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

#define CONST_F_LargeBold                                         3
#define CONST_F_Bold                                              1
#define CONST_F_Large                                             2
#define CONST_F_Normal                                            0
#define CONST_DE_MouseEnter                                       12
#define CONST_DE_WheelDownPressed                                 15
#define CONST_DE_WheelUpPressed                                   14
#define CONST_DE_HelpChanged                                      13
#define CONST_DE_DoubleClick                                      11
#define CONST_DE_LMouseDown                                       10
#define CONST_DE_Click                                            2
#define CONST_DE_MouseLeave                                       9
#define CONST_DE_MouseMove                                        8
#define CONST_DE_EnterPressed                                     7
#define CONST_DE_Created                                          0
#define CONST_DE_RClick                                           6
#define CONST_DE_MClick                                           5
#define CONST_DE_Exit                                             4
#define CONST_DE_Enter                                            3
#define CONST_DE_Change                                           1

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UWindow.UWindowBase.PropertyCondition
enum class EPropertyCondition : uint8_t
{
	PC_None                        = 0,
	PC_LessThan                    = 1,
	PC_Equal                       = 2,
	PC_GreaterThan                 = 3,
	PC_NotEqual                    = 4,
	PC_Contains                    = 5,
	PC_NotContains                 = 6
};


// Enum UWindow.UWindowBase.MessageBoxResult
enum class EMessageBoxResult : uint8_t
{
	MR_None                        = 0,
	MR_Yes                         = 1,
	MR_No                          = 2,
	MR_OK                          = 3,
	MR_Cancel                      = 4
};

#pragma push_macro("MB_OK")
#undef MB_OK
// Enum UWindow.UWindowBase.MessageBoxButtons
enum class EMessageBoxButtons : uint8_t
{
	MB_YesNo                       = 0,
	MB_OKCancel                    = 1,
	MB_OK                          = 2,
	MB_YesNoCancel                 = 3
};
#pragma pop_macro("MB_OK")

// Enum UWindow.UWindowBase.MenuSound
enum class EMenuSound : uint8_t
{
	MS_MenuPullDown                = 0,
	MS_MenuCloseUp                 = 1,
	MS_MenuItem                    = 2,
	MS_WindowOpen                  = 3,
	MS_WindowClose                 = 4,
	MS_ChangeTab                   = 5
};


// Enum UWindow.UWindowBase.FrameHitTest
enum class EFrameHitTest : uint8_t
{
	HT_NW                          = 0,
	HT_N                           = 1,
	HT_NE                          = 2,
	HT_W                           = 3,
	HT_E                           = 4,
	HT_SW                          = 5,
	HT_S                           = 6,
	HT_SE                          = 7,
	HT_TitleBar                    = 8,
	HT_DragHandle                  = 9,
	HT_None                        = 10
};


// Enum UWindow.UWindowBase.TextAlign
enum class NETextAlign : uint8_t
{
	TA_Left                        = 0,
	TA_Right                       = 1,
	TA_Center                      = 2
};


// Enum UWindow.UWindowWindow.WinMessage
enum class EWinMessage : uint8_t
{
	WM_LMouseDown                  = 0,
	WM_LMouseUp                    = 1,
	WM_MMouseDown                  = 2,
	WM_MMouseUp                    = 3,
	WM_RMouseDown                  = 4,
	WM_RMouseUp                    = 5,
	WM_KeyUp                       = 6,
	WM_KeyDown                     = 7,
	WM_KeyType                     = 8,
	WM_Paint                       = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// Struct UWindow.UWindowBase.TexRegion
// 0x0014
struct FTexRegion
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit)
	int                                                W;                                                        // 0x0008(0x0004) (Edit)
	int                                                H;                                                        // 0x000C(0x0004) (Edit)
	class UTexture*                                    t;                                                        // 0x0010(0x0004) (Edit)
};

// Struct UWindow.UWindowBase.Region
// 0x0010
struct FRegion
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit)
	int                                                W;                                                        // 0x0008(0x0004) (Edit)
	int                                                H;                                                        // 0x000C(0x0004) (Edit)
};

// Struct UWindow.UWindowWindow.MouseCursor
// 0x0010
struct FMouseCursor
{
	class UTexture*                                    Tex;                                                      // 0x0000(0x0004)
	int                                                HotX;                                                     // 0x0004(0x0004)
	int                                                HotY;                                                     // 0x0008(0x0004)
	unsigned char                                      WindowsCursor;                                            // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// Struct UWindow.UWindowBase.HTMLStyle
// 0x001C
struct FHTMLStyle
{
	int                                                BulletLevel;                                              // 0x0000(0x0004)
	struct FString                                     LinkDestination;                                          // 0x0004(0x000C) (NeedCtorLink)
	struct FColor                                      TextColor;                                                // 0x0010(0x0004)
	struct FColor                                      BGColor;                                                  // 0x0014(0x0004)
	unsigned long                                      bCenter : 1;                                              // 0x0018(0x0004)
	unsigned long                                      bLink : 1;                                                // 0x0018(0x0004)
	unsigned long                                      bUnderline : 1;                                           // 0x0018(0x0004)
	unsigned long                                      bNoBR : 1;                                                // 0x0018(0x0004)
	unsigned long                                      bHeading : 1;                                             // 0x0018(0x0004)
	unsigned long                                      bBold : 1;                                                // 0x0018(0x0004)
	unsigned long                                      bBlink : 1;                                               // 0x0018(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

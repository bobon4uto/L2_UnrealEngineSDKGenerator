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

// Class NWindow.CObject
// 0x0000 (0x0034 - 0x0034)
class UCObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CObject");
		return ptr;
	}

};


// Class NWindow.CWnd
// 0x01A4 (0x01D8 - 0x0034)
class UCWnd : public UCObject
{
public:
	unsigned char                                      UnknownData00[0x1A4];                                     // 0x0034(0x01A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CWnd");
		return ptr;
	}

};


// Class NWindow.CScrollWnd
// 0x0058 (0x0230 - 0x01D8)
class UCScrollWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x01D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CScrollWnd");
		return ptr;
	}

};


// Class NWindow.CXMLTreeCtrl
// 0x000C (0x023C - 0x0230)
class UCXMLTreeCtrl : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0230(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CXMLTreeCtrl");
		return ptr;
	}

};


// Class NWindow.Control
// 0x0018 (0x01F0 - 0x01D8)
class UControl : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.Control");
		return ptr;
	}

};


// Class NWindow.CXMLTree
// 0x005C (0x024C - 0x01F0)
class UCXMLTree : public UControl
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x01F0(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CXMLTree");
		return ptr;
	}

};


// Class NWindow.CPositionInfo
// 0x0018 (0x004C - 0x0034)
class UCPositionInfo : public UCObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0034(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPositionInfo");
		return ptr;
	}

};


// Class NWindow.CVIPShopItemInfoWnd
// 0x019C (0x03CC - 0x0230)
class UCVIPShopItemInfoWnd : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0x19C];                                     // 0x0230(0x019C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CVIPShopItemInfoWnd");
		return ptr;
	}

};


// Class NWindow.CVIPShopNeededItemWnd
// 0x00E4 (0x0314 - 0x0230)
class UCVIPShopNeededItemWnd : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0230(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CVIPShopNeededItemWnd");
		return ptr;
	}

};


// Class NWindow.CVideoPlayer
// 0x0040 (0x0218 - 0x01D8)
class UCVideoPlayer : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01D8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CVideoPlayer");
		return ptr;
	}

};


// Class NWindow.CTreeCtrl
// 0x0014 (0x0244 - 0x0230)
class UCTreeCtrl : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0230(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTreeCtrl");
		return ptr;
	}

};


// Class NWindow.CTree
// 0x0028 (0x0218 - 0x01F0)
class UCTree : public UControl
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTree");
		return ptr;
	}

};


// Class NWindow.CTracker
// 0x0048 (0x0238 - 0x01F0)
class UCTracker : public UControl
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTracker");
		return ptr;
	}

};


// Class NWindow.CTrackerMoveBox
// 0x0008 (0x01F8 - 0x01F0)
class UCTrackerMoveBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTrackerMoveBox");
		return ptr;
	}

};


// Class NWindow.CTrackerPoint
// 0x0018 (0x0208 - 0x01F0)
class UCTrackerPoint : public UControl
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTrackerPoint");
		return ptr;
	}

};


// Class NWindow.CTextureCtrl
// 0x003C (0x022C - 0x01F0)
class UCTextureCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01F0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTextureCtrl");
		return ptr;
	}

};


// Class NWindow.CTextBox
// 0x0078 (0x0268 - 0x01F0)
class UCTextBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x01F0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTextBox");
		return ptr;
	}

};


// Class NWindow.CTextLinkBox
// 0x003C (0x02A4 - 0x0268)
class UCTextLinkBox : public UCTextBox
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0268(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTextLinkBox");
		return ptr;
	}

};


// Class NWindow.CTabControl
// 0x0044 (0x0234 - 0x01F0)
class UCTabControl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x01F0(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTabControl");
		return ptr;
	}

};


// Class NWindow.CStatusIconCtrl
// 0x003C (0x022C - 0x01F0)
class UCStatusIconCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01F0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CStatusIconCtrl");
		return ptr;
	}

};


// Class NWindow.CItem
// 0x01F0 (0x0224 - 0x0034)
class UCItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0034(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CItem");
		return ptr;
	}

};


// Class NWindow.CStatusIconItem
// 0x0038 (0x025C - 0x0224)
class UCStatusIconItem : public UCItem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0224(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CStatusIconItem");
		return ptr;
	}

};


// Class NWindow.CStatusBarCtrl
// 0x00B4 (0x02A4 - 0x01F0)
class UCStatusBarCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x01F0(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CStatusBarCtrl");
		return ptr;
	}

};


// Class NWindow.CNameCtrl
// 0x006C (0x025C - 0x01F0)
class UCNameCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x01F0(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNameCtrl");
		return ptr;
	}

};


// Class NWindow.CSliderCtrl
// 0x003C (0x022C - 0x01F0)
class UCSliderCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01F0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CSliderCtrl");
		return ptr;
	}

};


// Class NWindow.CSliderBar
// 0x002C (0x021C - 0x01F0)
class UCSliderBar : public UControl
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x01F0(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CSliderBar");
		return ptr;
	}

};


// Class NWindow.CButton
// 0x005C (0x024C - 0x01F0)
class UCButton : public UControl
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x01F0(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CButton");
		return ptr;
	}

};


// Class NWindow.CShortcutItemWnd
// 0x0020 (0x026C - 0x024C)
class UCShortcutItemWnd : public UCButton
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x024C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CShortcutItemWnd");
		return ptr;
	}

};


// Class NWindow.CScenePlayerCtrl
// 0x000C (0x01FC - 0x01F0)
class UCScenePlayerCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01F0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CScenePlayerCtrl");
		return ptr;
	}

};


// Class NWindow.CCheckBox
// 0x003C (0x022C - 0x01F0)
class UCCheckBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01F0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCheckBox");
		return ptr;
	}

};


// Class NWindow.CRadioButton
// 0x0004 (0x0230 - 0x022C)
class UCRadioButton : public UCCheckBox
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CRadioButton");
		return ptr;
	}

};


// Class NWindow.CRadarWnd
// 0x0038 (0x0210 - 0x01D8)
class UCRadarWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CRadarWnd");
		return ptr;
	}

};


// Class NWindow.CFrameWnd
// 0x00A4 (0x027C - 0x01D8)
class UCFrameWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x01D8(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CFrameWnd");
		return ptr;
	}

};


// Class NWindow.CRadarMapCtrl
// 0x008C (0x0308 - 0x027C)
class UCRadarMapCtrl : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x027C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CRadarMapCtrl");
		return ptr;
	}

};


// Class NWindow.CRadarObjectCtrl
// 0x0044 (0x0234 - 0x01F0)
class UCRadarObjectCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x01F0(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CRadarObjectCtrl");
		return ptr;
	}

};


// Class NWindow.CPropertyController
// 0x00B4 (0x02A4 - 0x01F0)
class UCPropertyController : public UControl
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x01F0(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPropertyController");
		return ptr;
	}

};


// Class NWindow.CPropertyGroupCtrl
// 0x0044 (0x0234 - 0x01F0)
class UCPropertyGroupCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x01F0(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPropertyGroupCtrl");
		return ptr;
	}

};


// Class NWindow.CPropertyItemCtrl
// 0x000C (0x01FC - 0x01F0)
class UCPropertyItemCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01F0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPropertyItemCtrl");
		return ptr;
	}

};


// Class NWindow.CMultiEdit
// 0x0110 (0x0300 - 0x01F0)
class UCMultiEdit : public UControl
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x01F0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CMultiEdit");
		return ptr;
	}

};


// Class NWindow.CMinimapWnd
// 0x0128 (0x0300 - 0x01D8)
class UCMinimapWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x01D8(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CMinimapWnd");
		return ptr;
	}

};


// Class NWindow.CRegionInfoCtrl
// 0x001C (0x020C - 0x01F0)
class UCRegionInfoCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01F0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CRegionInfoCtrl");
		return ptr;
	}

};


// Class NWindow.CListCtrl
// 0x0084 (0x0274 - 0x01F0)
class UCListCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x01F0(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CListCtrl");
		return ptr;
	}

};


// Class NWindow.CHeaderCtrl
// 0x004C (0x023C - 0x01F0)
class UCHeaderCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x01F0(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHeaderCtrl");
		return ptr;
	}

};


// Class NWindow.CListBox
// 0x005C (0x024C - 0x01F0)
class UCListBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x01F0(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CListBox");
		return ptr;
	}

};


// Class NWindow.CTextListBox
// 0x0000 (0x024C - 0x024C)
class UCTextListBox : public UCListBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTextListBox");
		return ptr;
	}

};


// Class NWindow.CItemWnd
// 0x00CC (0x02FC - 0x0230)
class UCItemWnd : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0xCC];                                      // 0x0230(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CItemWnd");
		return ptr;
	}

};


// Class NWindow.CIcon
// 0x0040 (0x0230 - 0x01F0)
class UCIcon : public UControl
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CIcon");
		return ptr;
	}

};


// Class NWindow.CHtmlSliderBar
// 0x0000 (0x021C - 0x021C)
class UCHtmlSliderBar : public UCSliderBar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlSliderBar");
		return ptr;
	}

};


// Class NWindow.CEditBox
// 0x0174 (0x0364 - 0x01F0)
class UCEditBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x174];                                     // 0x01F0(0x0174) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CEditBox");
		return ptr;
	}

};


// Class NWindow.CHtmlEdit
// 0x0004 (0x0368 - 0x0364)
class UCHtmlEdit : public UCEditBox
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlEdit");
		return ptr;
	}

};


// Class NWindow.CHtmlMultiEdit
// 0x000C (0x030C - 0x0300)
class UCHtmlMultiEdit : public UCMultiEdit
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0300(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlMultiEdit");
		return ptr;
	}

};


// Class NWindow.CPushButton
// 0x000C (0x0258 - 0x024C)
class UCPushButton : public UCButton
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x024C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPushButton");
		return ptr;
	}

};


// Class NWindow.CHtmlPushButton
// 0x0000 (0x0258 - 0x0258)
class UCHtmlPushButton : public UCPushButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlPushButton");
		return ptr;
	}

};


// Class NWindow.CHtmlButton
// 0x0004 (0x0250 - 0x024C)
class UCHtmlButton : public UCButton
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlButton");
		return ptr;
	}

};


// Class NWindow.CDynamicLinker
// 0x0060 (0x0250 - 0x01F0)
class UCDynamicLinker : public UControl
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x01F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDynamicLinker");
		return ptr;
	}

};


// Class NWindow.CHtmlAction
// 0x0000 (0x0250 - 0x0250)
class UCHtmlAction : public UCDynamicLinker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlAction");
		return ptr;
	}

};


// Class NWindow.CHtmlLinker
// 0x0000 (0x0250 - 0x0250)
class UCHtmlLinker : public UCDynamicLinker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlLinker");
		return ptr;
	}

};


// Class NWindow.CActionLinker
// 0x080C (0x09FC - 0x01F0)
class UCActionLinker : public UControl
{
public:
	unsigned char                                      UnknownData00[0x80C];                                     // 0x01F0(0x080C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CActionLinker");
		return ptr;
	}

};


// Class NWindow.CFileLinker
// 0x0018 (0x0208 - 0x01F0)
class UCFileLinker : public UControl
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CFileLinker");
		return ptr;
	}

};


// Class NWindow.CComboBox
// 0x0068 (0x0258 - 0x01F0)
class UCComboBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x01F0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CComboBox");
		return ptr;
	}

};


// Class NWindow.CHtmlComboBox
// 0x0000 (0x0258 - 0x0258)
class UCHtmlComboBox : public UCComboBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlComboBox");
		return ptr;
	}

};


// Class NWindow.CDrawerWindowInfo
// 0x0028 (0x005C - 0x0034)
class UCDrawerWindowInfo : public UCObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0034(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDrawerWindowInfo");
		return ptr;
	}

};


// Class NWindow.CFrameCtrl
// 0x0094 (0x0284 - 0x01F0)
class UCFrameCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x01F0(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CFrameCtrl");
		return ptr;
	}

};


// Class NWindow.CResizeFrame
// 0x0040 (0x02C4 - 0x0284)
class UCResizeFrame : public UCFrameCtrl
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0284(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CResizeFrame");
		return ptr;
	}

};


// Class NWindow.CSmallLeftsideFrameCtrl
// 0x0000 (0x0284 - 0x0284)
class UCSmallLeftsideFrameCtrl : public UCFrameCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CSmallLeftsideFrameCtrl");
		return ptr;
	}

};


// Class NWindow.CSmallTopFrameCtrl
// 0x0000 (0x0284 - 0x0284)
class UCSmallTopFrameCtrl : public UCFrameCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CSmallTopFrameCtrl");
		return ptr;
	}

};


// Class NWindow.CBigTopFrameCtrl
// 0x0000 (0x0284 - 0x0284)
class UCBigTopFrameCtrl : public UCFrameCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CBigTopFrameCtrl");
		return ptr;
	}

};


// Class NWindow.CFlashCtrl
// 0x001C (0x01F4 - 0x01D8)
class UCFlashCtrl : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01D8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CFlashCtrl");
		return ptr;
	}

};


// Class NWindow.CEquipItemWnd
// 0x01C0 (0x0398 - 0x01D8)
class UCEquipItemWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x01D8(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CEquipItemWnd");
		return ptr;
	}

};


// Class NWindow.CHennaItem
// 0x0010 (0x0234 - 0x0224)
class UCHennaItem : public UCItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0224(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHennaItem");
		return ptr;
	}

};


// Class NWindow.CDrawPanel
// 0x0010 (0x0200 - 0x01F0)
class UCDrawPanel : public UControl
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDrawPanel");
		return ptr;
	}

};


// Class NWindow.CDialogBox
// 0x0000 (0x01F0 - 0x01F0)
class UCDialogBox : public UControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDialogBox");
		return ptr;
	}

};


// Class NWindow.CWarningDialogBox
// 0x001C (0x020C - 0x01F0)
class UCWarningDialogBox : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01F0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CWarningDialogBox");
		return ptr;
	}

};


// Class NWindow.CModalessDialogBox
// 0x0098 (0x0288 - 0x01F0)
class UCModalessDialogBox : public UControl
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x01F0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CModalessDialogBox");
		return ptr;
	}

};


// Class NWindow.CProgressCtrl
// 0x003C (0x022C - 0x01F0)
class UCProgressCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01F0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CProgressCtrl");
		return ptr;
	}

};


// Class NWindow.CComboEditBox
// 0x0004 (0x025C - 0x0258)
class UCComboEditBox : public UCComboBox
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0258(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CComboEditBox");
		return ptr;
	}

};


// Class NWindow.CCompositeBox
// 0x001C (0x01F4 - 0x01D8)
class UCCompositeBox : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01D8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCompositeBox");
		return ptr;
	}

};


// Class NWindow.CCandidateBox
// 0x005C (0x0234 - 0x01D8)
class UCCandidateBox : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x01D8(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCandidateBox");
		return ptr;
	}

};


// Class NWindow.CEffectButton
// 0x0030 (0x027C - 0x024C)
class UCEffectButton : public UCButton
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x024C(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CEffectButton");
		return ptr;
	}

};


// Class NWindow.CTabButton
// 0x001C (0x0268 - 0x024C)
class UCTabButton : public UCButton
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x024C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTabButton");
		return ptr;
	}

};


// Class NWindow.CThumbButton
// 0x0000 (0x024C - 0x024C)
class UCThumbButton : public UCButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CThumbButton");
		return ptr;
	}

};


// Class NWindow.CBarCtrl
// 0x0028 (0x0218 - 0x01F0)
class UCBarCtrl : public UControl
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CBarCtrl");
		return ptr;
	}

};


// Class NWindow.CAnimTextureCtrl
// 0x0010 (0x023C - 0x022C)
class UCAnimTextureCtrl : public UCTextureCtrl
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x022C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CAnimTextureCtrl");
		return ptr;
	}

};


// Class NWindow.CAnimTexture
// 0x0020 (0x0130 - 0x0110)
class UCAnimTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CAnimTexture");
		return ptr;
	}

};


// Class NWindow.2WordWrapperWnd
// 0x0030 (0x0208 - 0x01D8)
class U2WordWrapperWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2WordWrapperWnd");
		return ptr;
	}

};


// Class NWindow.CNPCHtmlViewer
// 0x0008 (0x0284 - 0x027C)
class UCNPCHtmlViewer : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x027C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNPCHtmlViewer");
		return ptr;
	}

};


// Class NWindow.CHtmlViewer
// 0x0044 (0x0274 - 0x0230)
class UCHtmlViewer : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0230(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHtmlViewer");
		return ptr;
	}

};


// Class NWindow.CBBSHtmlViewer
// 0x48018 (0x4828C - 0x0274)
class UCBBSHtmlViewer : public UCHtmlViewer
{
public:
	unsigned char                                      UnknownData00[0x48018];                                   // 0x0274(0x48018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CBBSHtmlViewer");
		return ptr;
	}

};


// Class NWindow.CTutorialHtmlViewer
// 0x0000 (0x0274 - 0x0274)
class UCTutorialHtmlViewer : public UCHtmlViewer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTutorialHtmlViewer");
		return ptr;
	}

};


// Class NWindow.2FriendTreeCtrl
// 0x0008 (0x024C - 0x0244)
class U2FriendTreeCtrl : public UCTreeCtrl
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0244(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2FriendTreeCtrl");
		return ptr;
	}

};


// Class NWindow.2FriendTree
// 0x0000 (0x0218 - 0x0218)
class U2FriendTree : public UCTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2FriendTree");
		return ptr;
	}

};


// Class NWindow.snTreeCtrl
// 0x0014 (0x0258 - 0x0244)
class UsnTreeCtrl : public UCTreeCtrl
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0244(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.snTreeCtrl");
		return ptr;
	}

};


// Class NWindow.essengerWnd
// 0x0010 (0x028C - 0x027C)
class UessengerWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x027C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.essengerWnd");
		return ptr;
	}

};


// Class NWindow.2FriendWnd
// 0x003C (0x0214 - 0x01D8)
class U2FriendWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01D8(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2FriendWnd");
		return ptr;
	}

};


// Class NWindow.snWnd
// 0x00EC (0x02C4 - 0x01D8)
class UsnWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xEC];                                      // 0x01D8(0x00EC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.snWnd");
		return ptr;
	}

};


// Class NWindow.ptionWnd
// 0x003C (0x02B8 - 0x027C)
class UptionWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x027C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ptionWnd");
		return ptr;
	}

};


// Class NWindow.tatusWnd
// 0x0044 (0x021C - 0x01D8)
class UtatusWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x01D8(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.tatusWnd");
		return ptr;
	}

};


// Class NWindow.larmWnd
// 0x00C8 (0x02A0 - 0x01D8)
class UlarmWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x01D8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.larmWnd");
		return ptr;
	}

};


// Class NWindow.oadingWnd
// 0x0010 (0x01E8 - 0x01D8)
class UoadingWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.oadingWnd");
		return ptr;
	}

};


// Class NWindow.ersionWnd
// 0x0010 (0x01E8 - 0x01D8)
class UersionWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ersionWnd");
		return ptr;
	}

};


// Class NWindow.oginWnd
// 0x0020 (0x01F8 - 0x01D8)
class UoginWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.oginWnd");
		return ptr;
	}

};


// Class NWindow.snTree
// 0x0014 (0x022C - 0x0218)
class UsnTree : public UCTree
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0218(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.snTree");
		return ptr;
	}

};


// Class NWindow.2TaskWnd
// 0x0024 (0x02A0 - 0x027C)
class U2TaskWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x027C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2TaskWnd");
		return ptr;
	}

};


// Class NWindow.2TaskBox
// 0x000C (0x0258 - 0x024C)
class U2TaskBox : public UCListBox
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x024C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2TaskBox");
		return ptr;
	}

};


// Class NWindow.2Task
// 0x001C (0x01F4 - 0x01D8)
class U2Task : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01D8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2Task");
		return ptr;
	}

};


// Class NWindow.2ChatWnd
// 0x0024 (0x02A0 - 0x027C)
class U2ChatWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x027C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2ChatWnd");
		return ptr;
	}

};


// Class NWindow.2ChatFrameCtrl
// 0x0000 (0x0284 - 0x0284)
class U2ChatFrameCtrl : public UCBigTopFrameCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2ChatFrameCtrl");
		return ptr;
	}

};


// Class NWindow.2ChatBox
// 0x0000 (0x024C - 0x024C)
class U2ChatBox : public UCListBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.2ChatBox");
		return ptr;
	}

};


// Class NWindow.essageDialog
// 0x0014 (0x0204 - 0x01F0)
class UessageDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01F0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.essageDialog");
		return ptr;
	}

};


// Class NWindow.emoveGroupDialog
// 0x0018 (0x0208 - 0x01F0)
class UemoveGroupDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.emoveGroupDialog");
		return ptr;
	}

};


// Class NWindow.enameGroupDialog
// 0x0018 (0x0208 - 0x01F0)
class UenameGroupDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.enameGroupDialog");
		return ptr;
	}

};


// Class NWindow.ddGroupDialog
// 0x0014 (0x0204 - 0x01F0)
class UddGroupDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01F0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ddGroupDialog");
		return ptr;
	}

};


// Class NWindow.oveGroupDialog
// 0x0060 (0x0250 - 0x01F0)
class UoveGroupDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x01F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.oveGroupDialog");
		return ptr;
	}

};


// Class NWindow.ddedConfirmDialog
// 0x0028 (0x0218 - 0x01F0)
class UddedConfirmDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ddedConfirmDialog");
		return ptr;
	}

};


// Class NWindow.emoveFriendDialog
// 0x0064 (0x0254 - 0x01F0)
class UemoveFriendDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x01F0(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.emoveFriendDialog");
		return ptr;
	}

};


// Class NWindow.ddFriendDialog
// 0x001C (0x020C - 0x01F0)
class UddFriendDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01F0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ddFriendDialog");
		return ptr;
	}

};


// Class NWindow.fflineConfirmDialog
// 0x0010 (0x0200 - 0x01F0)
class UfflineConfirmDialog : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.fflineConfirmDialog");
		return ptr;
	}

};


// Class NWindow.askWnd
// 0x0024 (0x02A0 - 0x027C)
class UaskWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x027C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.askWnd");
		return ptr;
	}

};


// Class NWindow.askBox
// 0x000C (0x0258 - 0x024C)
class UaskBox : public UCListBox
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x024C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.askBox");
		return ptr;
	}

};


// Class NWindow.ask
// 0x0014 (0x01EC - 0x01D8)
class Uask : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01D8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ask");
		return ptr;
	}

};


// Class NWindow.hatWnd
// 0x0928 (0x0BA4 - 0x027C)
class UhatWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x928];                                     // 0x027C(0x0928) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.hatWnd");
		return ptr;
	}

};


// Class NWindow.hatFrameCtrl
// 0x0000 (0x0284 - 0x0284)
class UhatFrameCtrl : public UCBigTopFrameCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.hatFrameCtrl");
		return ptr;
	}

};


// Class NWindow.hatBox
// 0x0000 (0x024C - 0x024C)
class UhatBox : public UCListBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.hatBox");
		return ptr;
	}

};


// Class NWindow.riendBox
// 0x0000 (0x024C - 0x024C)
class UriendBox : public UCListBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.riendBox");
		return ptr;
	}

};


// Class NWindow.nviteWnd
// 0x0018 (0x0294 - 0x027C)
class UnviteWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x027C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.nviteWnd");
		return ptr;
	}

};


// Class NWindow.nviteBox
// 0x0004 (0x0250 - 0x024C)
class UnviteBox : public UCListBox
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.nviteBox");
		return ptr;
	}

};


// Class NWindow.CXMLDebugWnd
// 0x0008 (0x0284 - 0x027C)
class UCXMLDebugWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x027C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CXMLDebugWnd");
		return ptr;
	}

};


// Class NWindow.CCharacterViewportWnd
// 0x0050 (0x0228 - 0x01D8)
class UCCharacterViewportWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x01D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCharacterViewportWnd");
		return ptr;
	}

};


// Class NWindow.CFishViewportWnd
// 0x008C (0x0264 - 0x01D8)
class UCFishViewportWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x01D8(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CFishViewportWnd");
		return ptr;
	}

};


// Class NWindow.CViewportWnd
// 0x0000 (0x01D8 - 0x01D8)
class UCViewportWnd : public UCWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CViewportWnd");
		return ptr;
	}

};


// Class NWindow.CServerInfoWnd
// 0x0008 (0x01E0 - 0x01D8)
class UCServerInfoWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CServerInfoWnd");
		return ptr;
	}

};


// Class NWindow.CServerFeatureWnd
// 0x0250 (0x0428 - 0x01D8)
class UCServerFeatureWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x01D8(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CServerFeatureWnd");
		return ptr;
	}

};


// Class NWindow.CServerSelectWnd
// 0x0048 (0x0220 - 0x01D8)
class UCServerSelectWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CServerSelectWnd");
		return ptr;
	}

};


// Class NWindow.CServerSelectListCtrl
// 0x0004 (0x0278 - 0x0274)
class UCServerSelectListCtrl : public UCListCtrl
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CServerSelectListCtrl");
		return ptr;
	}

};


// Class NWindow.CBenchMarkResultWnd
// 0x0018 (0x01F0 - 0x01D8)
class UCBenchMarkResultWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CBenchMarkResultWnd");
		return ptr;
	}

};


// Class NWindow.CPawnView_ShortCutWnd
// 0x0B44 (0x0D1C - 0x01D8)
class UCPawnView_ShortCutWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xB44];                                     // 0x01D8(0x0B44) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnView_ShortCutWnd");
		return ptr;
	}

};


// Class NWindow.CPawnViewer_SimulationMeshForce
// 0x0028 (0x0200 - 0x01D8)
class UCPawnViewer_SimulationMeshForce : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnViewer_SimulationMeshForce");
		return ptr;
	}

};


// Class NWindow.CPawnViewer_SimulationMesh
// 0x0098 (0x0270 - 0x01D8)
class UCPawnViewer_SimulationMesh : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x01D8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnViewer_SimulationMesh");
		return ptr;
	}

};


// Class NWindow.CPawnViewer_Simulator
// 0x1F94 (0x216C - 0x01D8)
class UCPawnViewer_Simulator : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1F94];                                    // 0x01D8(0x1F94) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnViewer_Simulator");
		return ptr;
	}

};


// Class NWindow.CPawnViewer_HairChangeWnd
// 0x04D4 (0x06AC - 0x01D8)
class UCPawnViewer_HairChangeWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x4D4];                                     // 0x01D8(0x04D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnViewer_HairChangeWnd");
		return ptr;
	}

};


// Class NWindow.CDebugWnd
// 0x0000 (0x024C - 0x024C)
class UCDebugWnd : public UCListBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDebugWnd");
		return ptr;
	}

};


// Class NWindow.CPawnView_CharacterSelect_List
// 0x0004 (0x0250 - 0x024C)
class UCPawnView_CharacterSelect_List : public UCDebugWnd
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnView_CharacterSelect_List");
		return ptr;
	}

};


// Class NWindow.CPawnViewer_MixAnimWnd
// 0x0048 (0x0220 - 0x01D8)
class UCPawnViewer_MixAnimWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnViewer_MixAnimWnd");
		return ptr;
	}

};


// Class NWindow.CPawnView_InvenTextWnd
// 0x0004 (0x01DC - 0x01D8)
class UCPawnView_InvenTextWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnView_InvenTextWnd");
		return ptr;
	}

};


// Class NWindow.CPawnView_CharacterSelectWnd
// 0x0040 (0x0218 - 0x01D8)
class UCPawnView_CharacterSelectWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01D8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnView_CharacterSelectWnd");
		return ptr;
	}

};


// Class NWindow.CPawnViewerWnd
// 0x5748 (0x5920 - 0x01D8)
class UCPawnViewerWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x5748];                                    // 0x01D8(0x5748) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnViewerWnd");
		return ptr;
	}

};


// Class NWindow.CInvenItemWnd
// 0x0018 (0x0314 - 0x02FC)
class UCInvenItemWnd : public UCItemWnd
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02FC(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CInvenItemWnd");
		return ptr;
	}

};


// Class NWindow.CPawnView_InvenItemWnd
// 0x0000 (0x0314 - 0x0314)
class UCPawnView_InvenItemWnd : public UCInvenItemWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnView_InvenItemWnd");
		return ptr;
	}

};


// Class NWindow.CPawnCreateWnd
// 0x0054 (0x022C - 0x01D8)
class UCPawnCreateWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x01D8(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CPawnCreateWnd");
		return ptr;
	}

};


// Class NWindow.CNpcView_CharacterSelectWnd
// 0x0A6C (0x0C44 - 0x01D8)
class UCNpcView_CharacterSelectWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xA6C];                                     // 0x01D8(0x0A6C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNpcView_CharacterSelectWnd");
		return ptr;
	}

};


// Class NWindow.CNpcView_CharacterSelect_List
// 0x0000 (0x024C - 0x024C)
class UCNpcView_CharacterSelect_List : public UCDebugWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNpcView_CharacterSelect_List");
		return ptr;
	}

};


// Class NWindow.CNpcViewerWnd
// 0x5078 (0x52F4 - 0x027C)
class UCNpcViewerWnd : public UCFrameWnd
{
public:
	unsigned char                                      UnknownData00[0x5078];                                    // 0x027C(0x5078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNpcViewerWnd");
		return ptr;
	}

};


// Class NWindow.CNpcView_InvenItemWnd
// 0x0000 (0x0314 - 0x0314)
class UCNpcView_InvenItemWnd : public UCInvenItemWnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNpcView_InvenItemWnd");
		return ptr;
	}

};


// Class NWindow.CAnnounceWnd
// 0x000C (0x01E4 - 0x01D8)
class UCAnnounceWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01D8(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CAnnounceWnd");
		return ptr;
	}

};


// Class NWindow.CEulaWnd
// 0x0020 (0x01F8 - 0x01D8)
class UCEulaWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CEulaWnd");
		return ptr;
	}

};


// Class NWindow.CWarningWnd
// 0x0014 (0x01EC - 0x01D8)
class UCWarningWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01D8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CWarningWnd");
		return ptr;
	}

};


// Class NWindow.CNoticeInfoWnd
// 0x20004 (0x20234 - 0x0230)
class UCNoticeInfoWnd : public UCScrollWnd
{
public:
	unsigned char                                      UnknownData00[0x20004];                                   // 0x0230(0x20004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CNoticeInfoWnd");
		return ptr;
	}

};


// Class NWindow.CMSViewerWnd
// 0x0040 (0x0218 - 0x01D8)
class UCMSViewerWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01D8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CMSViewerWnd");
		return ptr;
	}

};


// Class NWindow.CMSView_InvenItemWnd
// 0x0008 (0x031C - 0x0314)
class UCMSView_InvenItemWnd : public UCInvenItemWnd
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0314(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CMSView_InvenItemWnd");
		return ptr;
	}

};


// Class NWindow.CMessageWnd
// 0x0014 (0x01EC - 0x01D8)
class UCMessageWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x01D8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CMessageWnd");
		return ptr;
	}

};


// Class NWindow.CMagicSkillWnd
// 0x0008 (0x01E0 - 0x01D8)
class UCMagicSkillWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CMagicSkillWnd");
		return ptr;
	}

};


// Class NWindow.CSkillWnd
// 0x000C (0x01FC - 0x01F0)
class UCSkillWnd : public UControl
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01F0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CSkillWnd");
		return ptr;
	}

};


// Class NWindow.CSkillItemWnd
// 0x0020 (0x031C - 0x02FC)
class UCSkillItemWnd : public UCItemWnd
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02FC(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CSkillItemWnd");
		return ptr;
	}

};


// Class NWindow.CCardKeyLoginWnd
// 0x001C (0x01F4 - 0x01D8)
class UCCardKeyLoginWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01D8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCardKeyLoginWnd");
		return ptr;
	}

};


// Class NWindow.CAuthWnd
// 0x0024 (0x01FC - 0x01D8)
class UCAuthWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x01D8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CAuthWnd");
		return ptr;
	}

};


// Class NWindow.CAuthWaitWnd
// 0x0004 (0x01DC - 0x01D8)
class UCAuthWaitWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CAuthWaitWnd");
		return ptr;
	}

};


// Class NWindow.CKeyCryptWarningDialogBox
// 0x0008 (0x01F8 - 0x01F0)
class UCKeyCryptWarningDialogBox : public UCDialogBox
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CKeyCryptWarningDialogBox");
		return ptr;
	}

};


// Class NWindow.CLoginServerWnd
// 0x000C (0x01E4 - 0x01D8)
class UCLoginServerWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01D8(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CLoginServerWnd");
		return ptr;
	}

};


// Class NWindow.CLobbyWnd
// 0x1C30 (0x1E08 - 0x01D8)
class UCLobbyWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x1C30];                                    // 0x01D8(0x1C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CLobbyWnd");
		return ptr;
	}

};


// Class NWindow.CInventoryWnd
// 0x0170 (0x0348 - 0x01D8)
class UCInventoryWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x01D8(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CInventoryWnd");
		return ptr;
	}

};


// Class NWindow.CInvenWeightWnd
// 0x00B0 (0x0288 - 0x01D8)
class UCInvenWeightWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x01D8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CInvenWeightWnd");
		return ptr;
	}

};


// Class NWindow.CDebugConsole
// 0x0004 (0x01DC - 0x01D8)
class UCDebugConsole : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDebugConsole");
		return ptr;
	}

};


// Class NWindow.CCreditWnd
// 0x0A18 (0x0C08 - 0x01F0)
class UCCreditWnd : public UControl
{
public:
	unsigned char                                      UnknownData00[0xA18];                                     // 0x01F0(0x0A18) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCreditWnd");
		return ptr;
	}

};


// Class NWindow.CChatWnd
// 0x04AC (0x0684 - 0x01D8)
class UCChatWnd : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x4AC];                                     // 0x01D8(0x04AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CChatWnd");
		return ptr;
	}

};


// Class NWindow.CChatListBox
// 0x0048 (0x0294 - 0x024C)
class UCChatListBox : public UCTextListBox
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x024C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CChatListBox");
		return ptr;
	}

};


// Class NWindow.UIEventManager
// 0x0000 (0x0034 - 0x0034)
class UUIEventManager : public UInteractions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIEventManager");
		return ptr;
	}


	struct FString STATIC_GetUIState();
	void STATIC_SMessageBox(int SystemMsgNum);
	void STATIC_MessageBox(const struct FString& Msg);
	void STATIC_SetUIState(const struct FString& State);
	void STATIC_RegisterState(const struct FString& WindowName, const struct FString& State);
	void STATIC_RegisterEvent(int ev);
	bool STATIC_ParseFloat(const struct FString& a_strCmd, const struct FString& a_strMatch, float* a_Result);
	bool STATIC_ParseINT64(const struct FString& a_strCmd, const struct FString& a_strMatch, struct FINT64* a_Result);
	bool STATIC_ParseInt(const struct FString& a_strCmd, const struct FString& a_strMatch, int* a_Result);
	bool ParseString(const struct FString& a_strCmd, const struct FString& a_strMatch, struct FString* a_strResult);
	void STATIC_ParamAddINT64(const struct FString& strName, const struct FINT64& sValue, struct FString* strParam);
	void STATIC_ParamAdd(const struct FString& strName, const struct FString& strValue, struct FString* strParam);
	void STATIC_ExecuteEvent(int a_EventID, const struct FString& a_Param);
};


// Class NWindow.WindowHandle
// 0x0010 (0x0044 - 0x0034)
class UWindowHandle : public UUIEventManager
{
public:
	class UObject*                                     m_pTargetWnd;                                             // 0x0034(0x0004)
	struct FString                                     m_WindowNameWithFullPath;                                 // 0x0038(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.WindowHandle");
		return ptr;
	}


	bool STATIC_IsCurrentState();
	void STATIC_ExitState();
	void STATIC_EnterState();
	void STATIC_ChangeControlOrder(TEnumAsByte<EControlOrderWay> WayType);
	bool STATIC_MakeBaseUC(const struct FString& UCName, const struct FString& FilePathName);
	void STATIC_ConvertToEditable();
	void STATIC_SetXMLDocumentInfo(const struct FString& Comment, const struct FString& NameSpace, const struct FString& XSI, const struct FString& SchemaLocation);
	void STATIC_GetXMLDocumentInfo(struct FString* Comment, struct FString* NameSpace, struct FString* XSI, struct FString* SchemaLocation);
	bool STATIC_SaveXMLWindow(const struct FString& FilePathName);
	class UWindowHandle* STATIC_LoadXMLWindow(const struct FString& FilePathName);
	TEnumAsByte<EXMLControlType> STATIC_GetControlType();
	bool STATIC_IsControlContainer();
	void STATIC_SetScript(const struct FString& ScriptName);
	void STATIC_SetBackTexture(const struct FString& TextureName);
	void STATIC_DeleteChildWnd(const struct FString& ChildName);
	struct FString STATIC_GetClassName();
	class UWindowHandle* STATIC_AddChildWnd(TEnumAsByte<EXMLControlType> ChildType);
	void STATIC_SetEditable(bool bEnable);
	void STATIC_InitRotation();
	void STATIC_IsFront();
	void STATIC_ClearRotation();
	void STATIC_Rotate(bool bWithCapture, int RotationTime, const struct FVector& Direction, int BeginAlpha, int EndAlpha, bool bCW, float RotationConstant);
	void STATIC_SetSettledWnd(bool bFlag);
	void STATIC_SetScrollHeight(int Height);
	void STATIC_SetScrollPosition(int pos);
	void STATIC_SetScrollBarPosition(int X, int Y, int HeightOffset);
	void STATIC_SetResizeFrameSize(int nWidth, int nHeight);
	void STATIC_SetFrameSize(int nWidth, int nHeight);
	void STATIC_GetTooltipCustomType(struct FCustomTooltip* Info);
	void STATIC_SetTooltipCustomType(const struct FCustomTooltip& Info);
	void STATIC_SetTooltipType(const struct FString& TooltipType);
	struct FString STATIC_GetTooltipText();
	void STATIC_SetTooltipText(const struct FString& Text);
	void STATIC_NotifyAlarm();
	void STATIC_KillTimer(int a_TimerID);
	void SetTimer(int a_TimerID, int a_DelayMiliseconds);
	void STATIC_ReleaseFocus();
	bool STATIC_IsFocused();
	void SetFocus();
	bool STATIC_IsEnableWindow();
	void STATIC_DisableWindow();
	void STATIC_EnableWindow();
	void STATIC_SetDragOverTexture(const struct FString& a_TextureName);
	void STATIC_SetVirtualDrag(bool a_bFlag);
	bool STATIC_IsVirtualDrag();
	void STATIC_SetStuckable(bool a_Stuckable);
	void STATIC_SetDraggable(bool a_Draggable);
	bool STATIC_IsDraggable();
	bool STATIC_IsAnchored();
	void STATIC_ClearAnchor();
	void STATIC_SetAnchor(const struct FString& AnchorWindowName, const struct FString& RelativePoint, const struct FString& AnchorPoint, int OffsetX, int OffsetY);
	void STATIC_EnableTick();
	void STATIC_MoveShake(int a_nRange, int a_nSet, float a_Seconds);
	void STATIC_MoveEx(int a_nX, int a_nY);
	void MoveTo(int a_nX, int a_nY);
	void Move(int a_nDeltaX, int a_nDeltaY, float a_Seconds);
	bool STATIC_IsRelativeSize();
	void STATIC_SetWindowSizeRel43(float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight);
	void STATIC_GetWindowSizeRel(float* fWidthRate, float* fHeightRate, int* nOffsetWidth, int* nOffsetHeight);
	void STATIC_SetWindowSizeRel(float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight);
	void STATIC_GetWindowSize(int* a_Width, int* a_Height);
	void STATIC_SetWindowSize(int a_Width, int a_Height);
	void STATIC_AddWindowSize(int a_DeltaWidth, int a_DeltaHeight);
	struct FRect STATIC_GetRect();
	void STATIC_SetAlwaysFullAlpha(bool a_AlwaysFullAlpha);
	void STATIC_SetFontColor(const struct FColor& a_FontColor);
	bool STATIC_IsAlwaysOnBack();
	bool STATIC_IsAlwaysOnTop();
	bool STATIC_IsVirtual();
	struct FString STATIC_GetScriptName();
	class UUIScript* STATIC_GetScript();
	void STATIC_SetAlpha(int a_Alpha, float a_Seconds);
	int STATIC_GetAlpha();
	class UWindowHandle* STATIC_GetTopFrameWnd();
	bool STATIC_IsChildOf(class UWindowHandle* a_hParentWnd);
	void STATIC_GetChildWindowList(TArray<class UWindowHandle*> a_ChildList);
	class UWindowHandle* STATIC_GetParentWindowHandle();
	bool STATIC_ChangeParentWindow(class UWindowHandle* a_hNewParentWnd);
	struct FString STATIC_GetParentWindowName();
	struct FString STATIC_GetWindowName();
	bool STATIC_IsMinimizedWindow();
	bool STATIC_IsShowWindow();
	void STATIC_HideWindow();
	void STATIC_ShowWindow();
	void STATIC_SetTitlePosOffset(int OffsetX, int OffsetY);
	void STATIC_SetWindowTitle(const struct FString& a_Title);
};


// Class NWindow.VideoPlayerCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UVideoPlayerCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.VideoPlayerCtrlHandle");
		return ptr;
	}


	void STATIC_FullScreen();
	void STATIC_Resize();
	void STATIC_EndMovie();
	void STATIC_PlayMovie();
};


// Class NWindow.TreeHandle
// 0x0000 (0x0044 - 0x0044)
class UTreeHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TreeHandle");
		return ptr;
	}


	void STATIC_SetNodeItemText(const struct FString& NodeName, int nTextID, const struct FString& strText);
	void STATIC_ShowScrollBar(bool bShow);
	struct FString STATIC_GetParentNode(const struct FString& NodeName);
	struct FString STATIC_GetChildNode(const struct FString& NodeName);
	bool STATIC_IsExpandedNode(const struct FString& NodeName);
	bool STATIC_IsNodeNameExist(const struct FString& NodeName);
	bool STATIC_DeleteNode(const struct FString& NodeName);
	struct FString STATIC_GetExpandedNode(const struct FString& NodeName);
	void STATIC_SetExpandedNode(const struct FString& NodeName, bool bExpanded);
	void Clear();
	void STATIC_InsertNodeItem(const struct FString& NodeName, const struct FXMLTreeNodeItemInfo& infNodeItem);
	struct FString STATIC_InsertNode(const struct FString& strParentName, const struct FXMLTreeNodeInfo& infNode);
};


// Class NWindow.TextureHandle
// 0x0000 (0x0044 - 0x0044)
class UTextureHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TextureHandle");
		return ptr;
	}


	void STATIC_SetRotatingDirection(int Dir);
	void STATIC_SetAutoRotateType(TEnumAsByte<ETextureAutoRotateType> type);
	struct FString STATIC_GetTextureName();
	void STATIC_SetTextureWithObject(class UTexture* objTexture);
	void STATIC_SetTextureWithClanCrest(int clanID);
	void STATIC_SetTextureCtrlType(TEnumAsByte<ETextureCtrlType> type);
	void STATIC_SetTextureSize(int a_UL, int a_VL);
	void STATIC_SetUV(int a_U, int a_V);
	void STATIC_SetTexture(const struct FString& a_TextureName);
};


// Class NWindow.TextListBoxHandle
// 0x0000 (0x0044 - 0x0044)
class UTextListBoxHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TextListBoxHandle");
		return ptr;
	}


	void Clear();
	void STATIC_AddString(const struct FString& Text, const struct FColor& TextColor);
};


// Class NWindow.TextBoxHandle
// 0x0000 (0x0044 - 0x0044)
class UTextBoxHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TextBoxHandle");
		return ptr;
	}


	void STATIC_SetTooltipString(const struct FString& Text);
	void STATIC_SetInt(int Number);
	void STATIC_SetAlign(TEnumAsByte<ETextAlign> Align);
	struct FColor STATIC_GetTextColor();
	void STATIC_SetTextColor(const struct FColor& a_Color);
	void STATIC_SetText(const struct FString& a_Text);
	struct FString STATIC_GetText();
};


// Class NWindow.TabHandle
// 0x0000 (0x0044 - 0x0044)
class UTabHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TabHandle");
		return ptr;
	}


	void STATIC_SetButtonName(int Index, const struct FString& NewName);
	void STATIC_MergeTab(int Index);
	void STATIC_SetDisable(int Index, bool bDisable);
	int STATIC_GetTopIndex();
	void STATIC_SetTopOrder(int Index, bool bSendMessage);
	void STATIC_InitTabCtrl();
};


// Class NWindow.StatusIconHandle
// 0x0000 (0x0044 - 0x0044)
class UStatusIconHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.StatusIconHandle");
		return ptr;
	}


	void Clear();
	void STATIC_SetIconSize(int a_Size);
	void STATIC_DelItem(int a_Row, int a_Col);
	void STATIC_SetItem(int a_Row, int a_Col, const struct FStatusIconInfo& a_Info);
	void STATIC_GetItem(int a_Row, int a_Col, struct FStatusIconInfo* a_Info);
	int STATIC_GetColCount(int a_Row);
	int STATIC_GetRowCount();
	void STATIC_InsertCol(int a_Row, int a_Col, const struct FStatusIconInfo& a_Info);
	void STATIC_InsertRow(int a_Row);
	void STATIC_AddCol(int a_Row, const struct FStatusIconInfo& a_Info);
	void STATIC_AddRow();
};


// Class NWindow.StatusBarHandle
// 0x0000 (0x0044 - 0x0044)
class UStatusBarHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.StatusBarHandle");
		return ptr;
	}


	void STATIC_SetRegenInfo(int Duration, int ticks, float Amount);
	void STATIC_SetPointExp(const struct FINT64& CurrentValue, int Level);
	void STATIC_SetPointPercent(const struct FINT64& CurrentValue, const struct FINT64& MinValue, const struct FINT64& MaxValue);
	void STATIC_SetPoint(int CurrentValue, int MaxValue);
};


// Class NWindow.SliderCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class USliderCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.SliderCtrlHandle");
		return ptr;
	}


	bool STATIC_IsMouseScrolling();
	void STATIC_SetTotalTickCount(int a_TotalTickCount);
	int STATIC_GetTotalTickCount();
	void STATIC_SetCurrentTick(int iCurrTick);
	int STATIC_GetCurrentTick();
};


// Class NWindow.ScenePlayerCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UScenePlayerCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ScenePlayerCtrlHandle");
		return ptr;
	}


	void STATIC_LoadUCFile(const struct FString& Filename);
	void STATIC_SaveUCFile(const struct FString& Filename, const struct FString& CurPath);
	void Play(int EndSceneNo, bool bShowInfo);
};


// Class NWindow.RadarMapCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class URadarMapCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.RadarMapCtrlHandle");
		return ptr;
	}


	void STATIC_SetMapInvisible(bool bInvisible);
	void STATIC_SetEnableRotation(bool bEnable);
	void STATIC_SetMagnification(float newMag);
	void STATIC_RequestObjectAround(int ObjectType, int DistanceLimitXY, int DistanceLimitZ);
	void STATIC_UpdateObject(int Id, int WorldX, int WorldY, int WorldZ);
	void STATIC_DeleteObject(int ObjectID);
	void STATIC_AddObject(int Id, const struct FString& type, const struct FString& Name, int locX, int locY, int locZ);
};


// Class NWindow.PropertyControllerHandle
// 0x0000 (0x0044 - 0x0044)
class UPropertyControllerHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.PropertyControllerHandle");
		return ptr;
	}


	struct FString STATIC_GetItemStringValue(const struct FString& ItemName);
	int STATIC_GetItemIntegerValue(const struct FString& ItemName);
	bool STATIC_GetItemBooleanValue(const struct FString& ItemName);
	void STATIC_SetItemStringValue(const struct FString& ItemName, const struct FString& Value);
	void STATIC_SetItemIntegerValue(const struct FString& ItemName, int Value);
	void STATIC_SetItemBooleanValue(const struct FString& ItemName, bool Value);
	TEnumAsByte<EControlPropertyItemType> STATIC_GetItemType(const struct FString& ItemName);
	void STATIC_SetGroupVisible(const struct FString& GroupName, bool bShow);
	void STATIC_SetGroupExpandState(const struct FString& GroupName, bool bExpand);
	struct FString STATIC_AddGroup();
	void STATIC_DeleteGroup(const struct FString& GroupName);
	bool STATIC_GetGroupCheck(const struct FString& GroupName);
	void STATIC_SetGroupCheck(const struct FString& GroupName, bool Value);
	TEnumAsByte<EControlPropertyGroupType> STATIC_GetGroupType(const struct FString& GroupName);
	void STATIC_UpdatePropertyGroup(const struct FString& GroupName);
	int STATIC_GetPropertyHeight();
	void STATIC_ClearValue();
	void Clear();
	void STATIC_SetProperty(TEnumAsByte<EXMLControlType> a_Type, class UWindowHandle* a_WindowHandle);
};


// Class NWindow.ProgressCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UProgressCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ProgressCtrlHandle");
		return ptr;
	}


	void Start();
	void STATIC_Resume();
	void Stop();
	void Reset();
	void SetPos(int Millitime);
	void SetProgressTime(int Millitime);
};


// Class NWindow.NameCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UNameCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.NameCtrlHandle");
		return ptr;
	}


	struct FString STATIC_GetName();
	void STATIC_SetNameWithColor(const struct FString& Name, TEnumAsByte<ENameCtrlType> type, TEnumAsByte<ETextAlign> Align, const struct FColor& NameColor);
	void SetName(const struct FString& Name, TEnumAsByte<ENameCtrlType> type, TEnumAsByte<ETextAlign> Align);
};


// Class NWindow.MinimapCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UMinimapCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.MinimapCtrlHandle");
		return ptr;
	}


	void STATIC_SetContinent(int Continent);
	void STATIC_EraseRegionInfo(int Index);
	void STATIC_EraseAllRegionInfo();
	void STATIC_UpdateRegionInfo(int idx, const struct FString& RegionInfo);
	void STATIC_AddRegionInfo(const struct FString& RegionInfo);
	void STATIC_DeleteAllCursedWeaponIcon();
	bool STATIC_IsOverlapped(int FirstX, int FirstY, int SecondX, int SecondY);
	void STATIC_RequestReduceBtn();
	void STATIC_DrawGridIcon(const struct FString& a_IconName, const struct FString& a_DupIconName, const struct FVector& a_Loc, bool a_Refresh, int a_XOffset, int a_YOffset, const struct FString& TooltipString);
	void STATIC_SetSSQStatus(int a_SSQStatus);
	void STATIC_SetShowQuest(bool a_ShowQuest);
	void STATIC_DeleteAllTarget();
	void STATIC_DeleteTarget(const struct FVector& a_Loc);
	void STATIC_AddTarget(const struct FVector& a_Loc);
	void STATIC_AdjustMapView(const struct FVector& Loc, bool a_ZoomToTownMap, bool a_UseGridLocation);
};


// Class NWindow.ListCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UListCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ListCtrlHandle");
		return ptr;
	}


	void STATIC_GetRec(int Index, struct FLVDataRecord* Record);
	void STATIC_GetSelectedRec(struct FLVDataRecord* Record);
	bool STATIC_ModifyRecord(int Index, const struct FLVDataRecord& Record);
	void STATIC_ShowScrollBar(bool bShow);
	void STATIC_SetSelectedIndex(int Index, bool bMoveToRow);
	int STATIC_GetSelectedIndex();
	int STATIC_GetRecordCount();
	void STATIC_DeleteRecord(int Index);
	void STATIC_DeleteAllItem();
	void STATIC_InsertRecord(const struct FLVDataRecord& Record);
};


// Class NWindow.ListBoxHandle
// 0x0000 (0x0044 - 0x0044)
class UListBoxHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ListBoxHandle");
		return ptr;
	}


	struct FString STATIC_GetSelectedString();
	void STATIC_AddStringWithData(const struct FString& Text, int Color, int Data);
	void Clear();
	void STATIC_AddString(const struct FString& Text);
};


// Class NWindow.ItemWindowHandle
// 0x0000 (0x0044 - 0x0044)
class UItemWindowHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ItemWindowHandle");
		return ptr;
	}


	void STATIC_SetExpandItemNum(int Index, int Num);
	void STATIC_SetCol(int a_Col);
	void STATIC_SetRow(int a_Row);
	void STATIC_SetDisableTex(const struct FString& a_DisableTex);
	int STATIC_GetIndexAt(int X, int Y, int OffsetX, int OffsetY);
	void STATIC_SwapItems(int index1, int index2);
	void STATIC_ShowScrollBar(bool bShow);
	void STATIC_SetFaded(bool bOn);
	int STATIC_FindItemWithReserved(int Reserved);
	int STATIC_FindItemWithAllProperty(const struct FItemInfo& Info);
	int STATIC_FindItem(const struct FItemID& scID);
	void Clear();
	bool STATIC_GetItem(int Index, struct FItemInfo* Info);
	bool STATIC_GetSelectedItem(struct FItemInfo* Info);
	void STATIC_DeleteItem(int Index);
	bool STATIC_SetItem(int Index, const struct FItemInfo& Info);
	void STATIC_AddItem(const struct FItemInfo& Info);
	void STATIC_ClearSelect();
	int STATIC_GetItemNum();
	int STATIC_GetSelectedNum();
};


// Class NWindow.HtmlHandle
// 0x0000 (0x0044 - 0x0044)
class UHtmlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.HtmlHandle");
		return ptr;
	}


	bool STATIC_IsPageLock();
	void STATIC_SetPageLock(bool bLock);
	void STATIC_SetHtmlBuffData(const struct FString& strData);
	TEnumAsByte<EControlReturnType> STATIC_ControllerExecution(const struct FString& strBypass);
	int STATIC_GetFrameMaxHeight();
	void Clear();
	void STATIC_LoadHtmlFromString(const struct FString& HtmlString);
	void STATIC_LoadHtml(const struct FString& Filename);
};


// Class NWindow.FlashCtrlHandle
// 0x0000 (0x0044 - 0x0044)
class UFlashCtrlHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.FlashCtrlHandle");
		return ptr;
	}


	bool STATIC_Invoke(const struct FString& a_Command, const struct FParamMap& a_Param);
	bool STATIC_SetFlashFile(const struct FString& a_FlashFile);
	void STATIC_GotoFrame(int a_FrameNumber);
	int STATIC_GetCurrentFrame();
	int STATIC_GetTotalFrameCnt();
	void Stop();
	void Pause();
	void Play();
};


// Class NWindow.EditBoxHandle
// 0x0000 (0x0044 - 0x0044)
class UEditBoxHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.EditBoxHandle");
		return ptr;
	}


	void STATIC_SetEnableTextLink(bool bEnable);
	int STATIC_GetMaxLength();
	void STATIC_SetMaxLength(int maxLength);
	void STATIC_SetHighLight(bool bHighlight);
	void STATIC_SetEditType(const struct FString& type);
	void Clear();
	void STATIC_SimulateBackspace();
	void STATIC_AddString(const struct FString& Str);
	void STATIC_SetString(const struct FString& Str);
	struct FString GetString();
};


// Class NWindow.DrawPanelHandle
// 0x0000 (0x0044 - 0x0044)
class UDrawPanelHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.DrawPanelHandle");
		return ptr;
	}


	void STATIC_PreCheckPanelSize(int* Width, int* Height);
	void Clear();
	void STATIC_InsertDrawItem(const struct FDrawItemInfo& infNodeItem);
};


// Class NWindow.ComboBoxHandle
// 0x0000 (0x0044 - 0x0044)
class UComboBoxHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ComboBoxHandle");
		return ptr;
	}


	int STATIC_AddStringWithColor(const struct FString& Str, const struct FColor& Col);
	int STATIC_GetNumOfItems();
	void Clear();
	void STATIC_SetSelectedNum(int Num);
	int STATIC_GetSelectedNum();
	int STATIC_GetReserved(int Num);
	struct FString GetString(int Num);
	void STATIC_SYS_AddStringWithReserved(int Index, int Reserved);
	void STATIC_AddStringWithReserved(const struct FString& Str, int Reserved);
	void STATIC_SYS_AddString(int Index);
	void STATIC_AddString(const struct FString& Str);
};


// Class NWindow.CheckBoxHandle
// 0x0000 (0x0044 - 0x0044)
class UCheckBoxHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CheckBoxHandle");
		return ptr;
	}


	void STATIC_ToggleDisable();
	void STATIC_SetDisable(bool bDisable);
	bool STATIC_IsDisable();
	bool STATIC_IsChecked();
	void STATIC_SetCheck(bool bCheck);
	void STATIC_SetTitle(const struct FString& Title);
};


// Class NWindow.ChatWindowHandle
// 0x0000 (0x0044 - 0x0044)
class UChatWindowHandle : public UTextListBoxHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ChatWindowHandle");
		return ptr;
	}


	void STATIC_EnableTexture(bool bValue);
};


// Class NWindow.CharacterViewportWindowHandle
// 0x0000 (0x0044 - 0x0044)
class UCharacterViewportWindowHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CharacterViewportWindowHandle");
		return ptr;
	}


	void STATIC_SetCharacterOffsetY(int nOffSetY);
	void STATIC_SetCharacterOffsetX(int nOffSetX);
	void STATIC_SetCharacterScale(float fCharacterScale);
	void EndZoom();
	void StartZoom(bool bOut);
	void STATIC_EndRotation();
	void StartRotation(bool bRight);
};


// Class NWindow.ButtonHandle
// 0x0000 (0x0044 - 0x0044)
class UButtonHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ButtonHandle");
		return ptr;
	}


	void STATIC_SetTexture(const struct FString& sForeTexture, const struct FString& sBackTexture, const struct FString& sHighlightTexture);
	void STATIC_SetNameText(const struct FString& NameText);
	void STATIC_SetButtonName(int a_NameID);
	struct FString STATIC_GetButtonName();
};


// Class NWindow.BarHandle
// 0x0000 (0x0044 - 0x0044)
class UBarHandle : public UWindowHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.BarHandle");
		return ptr;
	}


	void Clear();
	void STATIC_GetValue(int* a_MaxValue, int* a_CurValue);
	void STATIC_SetValue(int a_MaxValue, int a_CurValue);
};


// Class NWindow.AnimTextureHandle
// 0x0000 (0x0044 - 0x0044)
class UAnimTextureHandle : public UTextureHandle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.AnimTextureHandle");
		return ptr;
	}


	void Stop();
	void Pause();
	void Play();
	void STATIC_SetLoopCount(int a_LoopCount);
};


// Class NWindow.UIDataManager
// 0x0000 (0x0034 - 0x0034)
class UUIDataManager : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDataManager");
		return ptr;
	}

};


// Class NWindow.UIDATA_USER
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_USER : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_USER");
		return ptr;
	}


	bool STATIC_GetClanType(int Id, int* type);
	struct FString STATIC_GetUserName(int ServerID);
};


// Class NWindow.UIDATA_TUTORIALLIST
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_TUTORIALLIST : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_TUTORIALLIST");
		return ptr;
	}


	bool STATIC_CheckTutorial(int TutorialIndex);
};


// Class NWindow.UIDATA_TRANSFORM
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_TRANSFORM : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_TRANSFORM");
		return ptr;
	}

};


// Class NWindow.UIDATA_TARGET
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_TARGET : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_TARGET");
		return ptr;
	}


	class AActor* STATIC_GetTargetActor();
	bool STATIC_IsVehicle();
	bool STATIC_IsHPShowableNPC();
	bool STATIC_IsCanBeAttacked();
	bool STATIC_IsPet();
	bool STATIC_IsNpc();
	bool STATIC_IsServerObject();
	int STATIC_GetTargetClassID();
	int STATIC_GetTargetPledgeID();
	struct FColor STATIC_GetTargetNameColor(int Level);
	struct FString STATIC_GetTargetName();
	int STATIC_GetTargetMP();
	int STATIC_GetTargetMaxMP();
	int STATIC_GetTargetHP();
	int STATIC_GetTargetMaxHP();
	int STATIC_GetTargetUserRank();
	int STATIC_GetTargetID();
};


// Class NWindow.UIDATA_STATICOBJECT
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_STATICOBJECT : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_STATICOBJECT");
		return ptr;
	}


	bool STATIC_GetStaticObjectShowHP(int a_ID);
	struct FString STATIC_GetStaticObjectName(int NameID);
	int STATIC_GetServerObjectHP(int Id);
	int STATIC_GetServerObjectMaxHP(int Id);
	TEnumAsByte<EL2ObjectType> STATIC_GetServerObjectType(int Id);
	int STATIC_GetServerObjectNameID(int Id);
};


// Class NWindow.UIDATA_SKILL
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_SKILL : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_SKILL");
		return ptr;
	}


	int STATIC_GetCastRange(const struct FItemID& Id, int Level);
	int STATIC_GetMpConsume(const struct FItemID& Id, int Level);
	int STATIC_GetHpConsume(const struct FItemID& Id, int Level);
	struct FString STATIC_GetOperateType(const struct FItemID& Id, int Level);
	int STATIC_GetEnchantSkillLevel(const struct FItemID& Id, int Level);
	struct FString STATIC_GetEnchantName(const struct FItemID& Id, int Level);
	struct FString STATIC_GetDescription(const struct FItemID& Id, int Level);
	struct FString STATIC_GetName(const struct FItemID& Id, int Level);
	struct FString STATIC_GetIconName(const struct FItemID& Id, int Level);
	int STATIC_GetDataCount();
	struct FItemID STATIC_GetNextID();
	struct FItemID STATIC_GetFirstID();
};


// Class NWindow.UIDATA_REFINERYOPTION
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_REFINERYOPTION : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_REFINERYOPTION");
		return ptr;
	}


	bool STATIC_GetOptionDescription(int a_ID, struct FString* a_Desc1, struct FString* a_Desc2, struct FString* a_Desc3);
	int STATIC_GetQuality(int a_ID);
};


// Class NWindow.UIDATA_RECIPE
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_RECIPE : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_RECIPE");
		return ptr;
	}


	int STATIC_GetRecipeIsMultipleProduct(int Id);
	struct FString STATIC_GetRecipeMaterialItemBy2Condition(int Id, int nSuccessRate);
	struct FString STATIC_GetRecipeDescriptionBy2Condition(int Id, int nSuccessRate);
	struct FString STATIC_GetRecipeIconNameBy2Condition(int Id, int nSuccessRate);
	struct FString STATIC_GetRecipeNameBy2Condition(int Id, int nSuccessRate);
	struct FString STATIC_GetRecipeMaterialItem(int Id);
	int STATIC_GetRecipeSuccessRate(int Id);
	struct FString STATIC_GetRecipeDescription(int Id);
	int STATIC_GetRecipeLevel(int Id);
	int STATIC_GetRecipeMpConsume(int Id);
	int STATIC_GetRecipeCrystalType(int Id);
	int STATIC_GetRecipeProductNum(int Id);
	int STATIC_GetRecipeProductID(int Id);
	struct FString STATIC_GetRecipeIconName(int Id);
	struct FItemID STATIC_GetRecipeItemID(int Id);
};


// Class NWindow.UIDATA_RAID
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_RAID : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_RAID");
		return ptr;
	}


	struct FVector STATIC_GetRaidLoc(int Id);
	struct FString STATIC_GetRaidDescription(int RaidID);
	int STATIC_GetRaidMonsterZone(int RaidID);
	int STATIC_GetRaidMonsterLevel(int RaidID);
	int STATIC_GetRaidMonsterID(int RaidID);
	bool STATIC_IsValidData(int Id);
};


// Class NWindow.UIDATA_QUEST
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_QUEST : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_QUEST");
		return ptr;
	}


	bool STATIC_GetQuestReward(int Id, int Level, TArray<int>* rewardIDList, TArray<int>* rewardNumList);
	int STATIC_GetQuestIscategory(int Id, int Level);
	bool STATIC_IsShowableItemNumQuest(int Id, int Level);
	bool STATIC_IsShowableJournalQuest(int Id, int Level);
	int STATIC_GetQuestZone(int Id, int Level);
	int STATIC_GetClearedQuest(int Id, int Level);
	int STATIC_GetQuestType(int Id, int Level);
	int STATIC_GetMaxLevel(int Id, int Level);
	int STATIC_GetMinLevel(int Id, int Level);
	struct FString STATIC_GetIntro(int Id, int Level);
	struct FString STATIC_GetRequirement(int Id, int Level);
	int STATIC_GetStartNPCID(int Id, int Level);
	struct FVector STATIC_GetStartNPCLoc(int Id, int Level);
	struct FString STATIC_GetTargetName(int Id, int Level);
	struct FVector STATIC_GetTargetLoc(int Id, int Level);
	struct FString STATIC_GetQuestItem(int Id, int Level);
	struct FString STATIC_GetQuestDescription(int Id, int Level);
	struct FString STATIC_GetQuestJournalName(int Id, int Level);
	struct FString STATIC_GetQuestName(int Id);
	bool STATIC_IsMinimapOnly(int Id, int Level);
	bool STATIC_IsValidData(int Id);
	int STATIC_GetNextID();
	int STATIC_GetFirstID();
};


// Class NWindow.UIDATA_PLAYER
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_PLAYER : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_PLAYER");
		return ptr;
	}


	int STATIC_GetInventoryCount();
	int STATIC_GetInventoryLimit();
	bool STATIC_HasCrystallizeAbility();
	TEnumAsByte<EEnvType> STATIC_GetPlayerEnvironment();
	TEnumAsByte<EMoveType> STATIC_GetPlayerMoveType();
	float STATIC_GetPlayerEXPRate();
	struct FString STATIC_GetRecipeShopMsg();
	int STATIC_GetPlayerID();
	bool STATIC_IsHero();
};


// Class NWindow.UIDATA_PET
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_PET : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_PET");
		return ptr;
	}


	float STATIC_GetPetEXPRate();
	int STATIC_GetIsPetOrSummoned();
	int STATIC_GetPetCarringWeight();
	int STATIC_GetPetCarryWeight();
	struct FINT64 STATIC_GetPetMaxEXP();
	struct FINT64 STATIC_GetPetMinEXP();
	int STATIC_GetPetMaxFatigue();
	int STATIC_GetPetMaxMP();
	int STATIC_GetPetMaxHP();
	struct FINT64 STATIC_GetPetEXP();
	int STATIC_GetPetFatigue();
	int STATIC_GetPetLevel();
	int STATIC_GetPetSP();
	int STATIC_GetPetMP();
	int STATIC_GetPetHP();
	int STATIC_GetPetID();
	struct FString STATIC_GetPetName();
};


// Class NWindow.UIDATA_PAWNVIEWER
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_PAWNVIEWER : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_PAWNVIEWER");
		return ptr;
	}

};


// Class NWindow.UIDATA_PARTY
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_PARTY : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_PARTY");
		return ptr;
	}


	struct FString STATIC_GetMemberVirtualName(int Id);
	struct FString STATIC_MovePartyMember(int SrcPos, int TarPos);
	struct FString STATIC_GetMemberName(int Id);
};


// Class NWindow.UIDATA_NPC
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_NPC : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_NPC");
		return ptr;
	}


	bool STATIC_GetNpcProperty(int Id, TArray<int>* arrProperty);
	struct FString STATIC_GetNPCName(int Id);
	bool STATIC_IsValidData(int Id);
	int STATIC_GetNextID();
	int STATIC_GetFirstID();
};


// Class NWindow.UIDATA_MACRO
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_MACRO : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_MACRO");
		return ptr;
	}


	int STATIC_GetMacroCount();
	bool STATIC_GetMacroInfo(const struct FItemID& cID, struct FMacroInfo* Info);
};


// Class NWindow.UIDATA_ITEM
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_ITEM : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_ITEM");
		return ptr;
	}


	int STATIC_GetItemNameClass(const struct FItemID& Id);
	struct FString STATIC_GetEtcItemTextureName(const struct FItemID& Id);
	struct FString STATIC_GetSetItemEnchantEffectDescription(const struct FItemID& Id);
	struct FString STATIC_GetSetItemEffectDescription(const struct FItemID& Id, int EffectID);
	int STATIC_GetSetItemEnchantValue(const struct FItemID& Id);
	bool STATIC_GetSetItemID(const struct FItemID& Id, int setId, int Index, TArray<struct FItemID>* arrID);
	int STATIC_GetSetItemFirstID(const struct FItemID& Id, int setId, int Index);
	bool STATIC_IsExistSetItem(const struct FItemID& Id, int setId, int Index);
	int STATIC_GetSetItemNum(const struct FItemID& Id, int setIdId);
	struct FString STATIC_GetRefineryItemName(const struct FString& strItemName, int RefineryOp1, int RefineryOp2);
	bool STATIC_IsCrystallizable(const struct FItemID& Id);
	bool STATIC_GetItemInfo(const struct FItemID& Id, struct FItemInfo* Info);
	int STATIC_GetItemCrystalType(const struct FItemID& Id);
	int STATIC_GetItemDataType(const struct FItemID& Id);
	int STATIC_GetItemWeight(const struct FItemID& Id);
	struct FString STATIC_GetItemDescription(const struct FItemID& Id);
	struct FString STATIC_GetItemTextureName(const struct FItemID& Id);
	struct FString STATIC_GetItemAdditionalName(const struct FItemID& Id);
	struct FString GetItemName(const struct FItemID& Id);
	int STATIC_GetDataCount();
	struct FItemID STATIC_GetNextID();
	struct FItemID STATIC_GetFirstID();
};


// Class NWindow.UIDATA_HUNTINGZONE
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_HUNTINGZONE : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_HUNTINGZONE");
		return ptr;
	}


	struct FString STATIC_GetHuntingDescription(int Id);
	int STATIC_GetHuntingZone(int Id);
	struct FVector STATIC_GetHuntingZoneLoc(int Id);
	int STATIC_GetMaxLevel(int Id);
	int STATIC_GetMinLevel(int Id);
	int STATIC_GetHuntingZoneType(int Id);
	struct FString STATIC_GetHuntingZoneName(int Id);
	bool STATIC_IsValidData(int Id);
};


// Class NWindow.UIDATA_HENNA
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_HENNA : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_HENNA");
		return ptr;
	}


	bool STATIC_GetIconTex(int a_ID, struct FString* a_IconTex);
	bool STATIC_GetDescription(int a_ID, struct FString* a_Description);
	bool GetItemName(int a_ID, struct FString* a_ItemName);
};


// Class NWindow.UIDATA_GAMETIP
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_GAMETIP : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_GAMETIP");
		return ptr;
	}


	bool STATIC_GetDataByIndex(int a_nIndex, struct FGameTipData* a_GameTipData);
	int STATIC_GetDataCount();
};


// Class NWindow.UIDATA_CLAN
// 0x0000 (0x0034 - 0x0034)
class UUIDATA_CLAN : public UUIDataManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIDATA_CLAN");
		return ptr;
	}


	int STATIC_GetSubClanSkillLevel(int SkillID, int subClanIndex);
	int STATIC_GetSkillLevel(int SkillID);
	void STATIC_RequestSubClanSkillList(int subClanIndex);
	void STATIC_RequestClanSkillList();
	void STATIC_RequestClanInfo();
	bool STATIC_GetNameValue(int Id, int* namevalue);
	bool STATIC_GetAllianceCrestTexture(int Id, class UTexture** texCrest);
	bool STATIC_GetEmblemTexture(int Id, class UTexture** emblemTexture);
	bool STATIC_GetCrestTexture(int Id, class UTexture** texCrest);
	struct FString STATIC_GetAllianceName(int Id);
	struct FString STATIC_GetName(int Id);
};


// Class NWindow.VehicleAPI
// 0x0000 (0x0034 - 0x0034)
class UVehicleAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.VehicleAPI");
		return ptr;
	}


	void STATIC_AirShipMoveDown();
	void STATIC_AirShipMoveUp();
	void STATIC_RequestExAirShipTeleport(int a_SpotID);
	class AVehicle* STATIC_GetVehicle(int a_VehicleID);
};


// Class NWindow.TutorialAPI
// 0x0000 (0x0034 - 0x0034)
class UTutorialAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TutorialAPI");
		return ptr;
	}


	void STATIC_RequestExSetTutorial(int TutorialIndex);
};


// Class NWindow.TeamMatchAPI
// 0x0000 (0x0034 - 0x0034)
class UTeamMatchAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TeamMatchAPI");
		return ptr;
	}


	void STATIC_RequestExBlockGameVote(int a_Stage, int a_Start);
	void STATIC_RequestExBlockGameEnter(int a_Stage, int a_TeamID);
	void STATIC_RequestBlockGameAllData();
	void STATIC_RequestExCleftEnter(int a_TeamID);
	void STATIC_RequestCleftAllData();
};


// Class NWindow.SSQAPI
// 0x0000 (0x0034 - 0x0034)
class USSQAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.SSQAPI");
		return ptr;
	}


	void STATIC_RequestSSQStatus(int nStatusID);
};


// Class NWindow.SiegeAPI
// 0x0000 (0x0034 - 0x0034)
class USiegeAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.SiegeAPI");
		return ptr;
	}


	void STATIC_RequestSetCastleSiegeTime(int castleID, int TimeID);
	void STATIC_RequestConfirmCastleSiegeWaitingList(int castleID, int clanID, int IsRegister);
	void STATIC_RequestJoinCastleSiege(int castleID, int IsAttacker, int IsRegister);
	void STATIC_RequestCastleSiegeDefenderList(int castleID);
	void STATIC_RequestCastleSiegeAttackerList(int castleID);
};


// Class NWindow.ShortcutAPI
// 0x0000 (0x0034 - 0x0034)
class UShortcutAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ShortcutAPI");
		return ptr;
	}


	void Clear();
	void STATIC_RestoreDefault();
	void STATIC_DeactivateAll();
	void STATIC_DeactivateGroup(const struct FString& GroupName);
	void STATIC_ActivateGroup(const struct FString& GroupName);
	void STATIC_ExecuteShortcutBySlot(int Slot);
	bool STATIC_RequestShortcutScriptData(int Id, struct FShortcutScriptData* Data);
	void STATIC_RequestList();
	void STATIC_Save();
	void STATIC_UnlockShortcut();
	void STATIC_LockShortcut();
	void STATIC_GetActiveGroupList(TArray<struct FString>* groups);
	void STATIC_GetGroupList(TArray<struct FString>* groups);
	void STATIC_GetGroupCommandList(const struct FString& GroupName, TArray<struct FShortcutCommandItem>* commands);
	bool STATIC_AssignCommand(const struct FString& GroupName, const struct FShortcutCommandItem& Command);
	bool STATIC_AssignSpecialKey(const struct FShortcutCommandItem& Command);
	void STATIC_SetShortcutPage(int a_ShortcutPage);
};


// Class NWindow.RefineryAPI
// 0x0000 (0x0034 - 0x0034)
class URefineryAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.RefineryAPI");
		return ptr;
	}


	void STATIC_RequestRefineCancel(const struct FItemID& a_CancelItemID);
	void STATIC_ConfirmCancelItem(const struct FItemID& a_CancelItemID);
	void STATIC_RequestRefine(const struct FItemID& a_TargetItemID, const struct FItemID& a_RefinerItemID, const struct FItemID& a_GemStoneID, const struct FINT64& a_GemStoneCount);
	void STATIC_ConfirmGemStone(const struct FItemID& a_TargetItemID, const struct FItemID& a_RefinerItemID, const struct FItemID& a_GemStoneID, const struct FINT64& a_GemStoneCount);
	void STATIC_ConfirmRefinerItem(const struct FItemID& a_TargetItemID, const struct FItemID& a_RefinerItemID);
	void STATIC_ConfirmTargetItem(const struct FItemID& sID);
};


// Class NWindow.RecipeAPI
// 0x0000 (0x0034 - 0x0034)
class URecipeAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.RecipeAPI");
		return ptr;
	}


	void STATIC_RequestRecipeShopListSet(const struct FString& param);
	void STATIC_RequestRecipeShopMessageSet(const struct FString& strMsg);
	void STATIC_RequestRecipeShopManageQuit();
	void STATIC_RequestRecipeItemDelete(const struct FItemID& sID);
	void STATIC_RequestRecipeBookOpen(int type);
	void STATIC_RequestRecipeItemMakeInfo(const struct FItemID& sID);
	void STATIC_RequestRecipeItemMakeSelf(int RecipeID);
	void STATIC_RequestRecipeShopMakeDo(int MerchantID, int RecipeID, const struct FINT64& Adena);
	void STATIC_RequestRecipeShopSellList(int nServerID);
	void STATIC_RequestRecipeShopMakeInfo(int nServerID, int nRecipeID);
};


// Class NWindow.QuestAPI
// 0x0000 (0x0034 - 0x0034)
class UQuestAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.QuestAPI");
		return ptr;
	}


	void STATIC_SetQuestTargetInfo(bool QuestOn, bool ShowTargetInRadar, bool ShowArrow, const struct FString& TargetName, const struct FVector& TargetPos, int QuestID);
	void STATIC_RequestDestroyQuest(int QuestID);
	void STATIC_RequestQuestList();
};


// Class NWindow.PetitionAPI
// 0x0000 (0x0034 - 0x0034)
class UPetitionAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.PetitionAPI");
		return ptr;
	}


	void STATIC_RequestPetitionFeedBack(int a_Rate, const struct FString& a_Message);
	void STATIC_RequestPetition(const struct FString& a_Message, int a_PetitionType);
	void STATIC_RequestPetitionCancel();
};


// Class NWindow.PetAPI
// 0x0000 (0x0034 - 0x0034)
class UPetAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.PetAPI");
		return ptr;
	}


	void STATIC_RequestGetItemFromPet(const struct FItemID& sID, const struct FINT64& Num, bool IsEquipItem);
	void STATIC_RequestGiveItemToPet(const struct FItemID& sID, const struct FINT64& Num);
	void STATIC_RequestPetUseItem(const struct FItemID& sID);
	void STATIC_RequestPetInventoryItemList();
};


// Class NWindow.PartyMatchAPI
// 0x0000 (0x0034 - 0x0034)
class UPartyMatchAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.PartyMatchAPI");
		return ptr;
	}


	void STATIC_RequestMpccPartymasterList();
	void STATIC_RequestWithdrawMpccRoom();
	void STATIC_RequestDismissMpccRoom();
	void STATIC_RequestOustFromMpccRoom(int Id);
	void STATIC_RequestJoinMpccRoom(int RoomNum, int Location);
	void STATIC_RequestManageMpccRoom(int RoomNum, int MaxMemberCount, int MinLevelLimit, int MaxLevelLimit, int PartyRoutingType, const struct FString& Title);
	void STATIC_RequestListMpccWaiting(int page, int Location, int LevelFilter);
	void STATIC_RequestAskJoinPartyRoom(const struct FString& a_Name);
	void STATIC_RequestExitPartyMatchingWaitingRoom();
	void STATIC_RequestPartyMatchWaitList(int a_Page, int a_MinLevel, int a_MaxLevel, int RoomType);
	void STATIC_RequestBanFromPartyRoom(int a_MemberID);
	void STATIC_RequestWithdrawPartyRoom(int a_RoomNumber);
	void STATIC_RequestDismissPartyRoom(int a_RoomNumber);
	void STATIC_RequestManagePartyRoom(int a_RoomNumber, int a_MaxPartyMemberCount, int a_MinLevel, int a_MaxLevel, const struct FString& a_RoomTitle);
	void STATIC_RequestJoinPartyRoomAuto(int a_Page, int a_LocationFilter, int a_LevelFilter);
	void STATIC_RequestJoinPartyRoom(int a_RoomNumber);
	void STATIC_RequestPartyRoomList(int a_Page, int a_LocationFilter, int a_LevelFilter);
	void STATIC_RequestOpenPartyMatch();
};


// Class NWindow.OlympiadAPI
// 0x0000 (0x0034 - 0x0034)
class UOlympiadAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.OlympiadAPI");
		return ptr;
	}


	void STATIC_RequestOlympiadMatchList();
	void STATIC_RequestOlympiadObserverEnd();
};


// Class NWindow.MiniMapAPI
// 0x0000 (0x0034 - 0x0034)
class UMiniMapAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.MiniMapAPI");
		return ptr;
	}


	void STATIC_RequestSeedPhase();
	void STATIC_RequestCursedWeaponLocation();
	void STATIC_RequestCursedWeaponList();
};


// Class NWindow.MacroAPI
// 0x0000 (0x0034 - 0x0034)
class UMacroAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.MacroAPI");
		return ptr;
	}


	bool STATIC_RequestMakeMacro(const struct FItemID& cID, const struct FString& Name, const struct FString& IconName, int IconNum, const struct FString& Description, TArray<struct FString> CommandList);
	void STATIC_RequestDeleteMacro(const struct FItemID& cID);
	void STATIC_RequestUseMacro(const struct FItemID& cID);
	void STATIC_RequestMacroList();
};


// Class NWindow.InputAPI
// 0x0000 (0x0034 - 0x0034)
class UInputAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.InputAPI");
		return ptr;
	}


	TEnumAsByte<EInputKey> STATIC_GetInputKey(const struct FString& keyString);
	struct FString STATIC_GetKeyString(TEnumAsByte<EInputKey> Key);
	bool STATIC_IsAltPressed();
	bool STATIC_IsCtrlPressed();
	bool STATIC_IsShiftPressed();
};


// Class NWindow.HeroTowerAPI
// 0x0000 (0x0034 - 0x0034)
class UHeroTowerAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.HeroTowerAPI");
		return ptr;
	}


	void STATIC_RequestHeroMatchRecord(int ClassID);
	void STATIC_RequestWriteHeroWords(const struct FString& strWord);
};


// Class NWindow.HennaAPI
// 0x0000 (0x0034 - 0x0034)
class UHennaAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.HennaAPI");
		return ptr;
	}


	bool STATIC_GetHennaInfo(int a_Index, int* a_HennaID, int* a_IsActive);
	int STATIC_GetHennaInfoCount();
};


// Class NWindow.GraphicAPI
// 0x0000 (0x0034 - 0x0034)
class UGraphicAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.GraphicAPI");
		return ptr;
	}


	void STATIC_DoFResume();
	void STATIC_DoFPause();
	void STATIC_DoFSetEndDistance(float a_EndDistance);
	void STATIC_DoFSetStartDistance(float a_StartDistance);
	void STATIC_DoFSetFocusDistance(float a_FocusDistance);
	void STATIC_DoFSetFocusLocation(const struct FVector& a_FocusLocation);
	void STATIC_DoFSetFocusPlayer();
	void STATIC_DoFSetFocusActor(class AActor* a_FocusActor);
};


// Class NWindow.GMAPI
// 0x0000 (0x0034 - 0x0034)
class UGMAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.GMAPI");
		return ptr;
	}


	void STATIC_RequestSnoopEnd(int a_SnoopID);
	bool STATIC_GetObservingUserInfo(struct FUserInfo* a_ObservingUserInfo);
	void STATIC_RequestGMCommand(TEnumAsByte<EGMCommandType> a_GMCommandType, const struct FString& a_Param);
	void STATIC_BeginGMChangeServer(int a_ServerID, const struct FVector& a_PlayerLocation);
};


// Class NWindow.EventMatchAPI
// 0x0000 (0x0034 - 0x0034)
class UEventMatchAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.EventMatchAPI");
		return ptr;
	}


	void STATIC_SetSelectedUser(int a_TeamID, int a_UserID);
	bool STATIC_GetUserData(int a_TeamID, int a_UserID, struct FEventMatchUserData* a_UserData);
	int STATIC_GetPartyMemberCount(int a_TeamID);
	struct FString STATIC_GetTeamName(int a_TeamID);
	int STATIC_GetScore(int a_TeamID);
	bool STATIC_GetEventMatchData(struct FEventMatchData* a_EventMatchData);
};


// Class NWindow.EnchantAPI
// 0x0000 (0x0034 - 0x0034)
class UEnchantAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.EnchantAPI");
		return ptr;
	}


	void STATIC_RequestExCancelEnchantItem();
	void STATIC_RequestExTryToPutEnchantSupportItem(const struct FItemID& a_sTargetID, const struct FItemID& a_sSupportID);
	void STATIC_RequestExTryToPutEnchantTargetItem(const struct FItemID& a_sTargetID);
	void STATIC_RequestRemoveAttribute(const struct FItemID& sID);
	void STATIC_RequestEnchantItemAttribute(const struct FItemID& sID);
	void STATIC_RequestEnchantItem(const struct FItemID& a_sTargetID, const struct FItemID& a_sSupportID);
};


// Class NWindow.CommandChannelAPI
// 0x0000 (0x0034 - 0x0034)
class UCommandChannelAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CommandChannelAPI");
		return ptr;
	}


	void STATIC_RequestCommandChannelPartyMembersInfo(int MasterID);
	void STATIC_RequestCommandChannelWithdraw();
	void STATIC_RequestCommandChannelBanParty(const struct FString& PartyMasterName);
	void STATIC_RequestCommandChannelInfo();
};


// Class NWindow.BookMarkAPI
// 0x0000 (0x0034 - 0x0034)
class UBookMarkAPI : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.BookMarkAPI");
		return ptr;
	}


	bool STATIC_RequestGetBookMarkPos(const struct FItemID& slotID, struct FVector* pos);
	bool STATIC_RequestChangeBookMarkSlot(const struct FItemID& slotID1, const struct FItemID& slotID2);
	bool STATIC_RequestTelePortBookMark(const struct FItemID& slotID);
	bool STATIC_RequestDeleteBookMarkSlot(const struct FItemID& slotID);
	bool STATIC_RequestModifyBookMarkSlot(const struct FItemID& slotID, const struct FString& slotTitle, int iconID, const struct FString& iconTitle);
	bool STATIC_RequestSaveBookMarkSlot(const struct FString& slotTitle, int iconID, const struct FString& iconTitle);
	bool STATIC_RequestShowBookMark();
	bool STATIC_RequestBookMarkSlotInfo();
};


// Class NWindow.AudioAPI
// 0x0000 (0x0034 - 0x0034)
class UAudioAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.AudioAPI");
		return ptr;
	}


	void StopMusic();
	void PlayMusic(const struct FString& a_MusicName, float a_FadeInTime);
	void PlaySound(const struct FString& a_SoundName);
};


// Class NWindow.AuctionAPI
// 0x0000 (0x0034 - 0x0034)
class UAuctionAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.AuctionAPI");
		return ptr;
	}


	void STATIC_RequestInfoItemAuction(int AuctionID);
	void STATIC_RequestBidItemAuction(int AuctionID, const struct FINT64& Adena);
};


// Class NWindow.ActionAPI
// 0x0000 (0x0034 - 0x0034)
class UActionAPI : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ActionAPI");
		return ptr;
	}


	void STATIC_RequestSummonedActionList();
	void STATIC_RequestPetActionList();
	void STATIC_RequestActionList();
};


// Class NWindow.UIAPI_WINDOW
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_WINDOW : public UUIEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_WINDOW");
		return ptr;
	}


	struct FString STATIC_GetSelectedRadioButtonName(const struct FString& a_ControlID, int a_RadioGroupID);
	void STATIC_ClearAnchor(const struct FString& ControlName);
	void STATIC_SetAnchor(const struct FString& ControlName, const struct FString& AnchorWindowName, const struct FString& RelativePoint, const struct FString& AnchorPoint, int OffsetX, int OffsetY);
	struct FString STATIC_GetTooltipText(const struct FString& ControlName);
	void STATIC_SetTooltipText(const struct FString& ControlName, const struct FString& Text);
	void STATIC_SetTooltipType(const struct FString& ControlName, const struct FString& TooltipType);
	void STATIC_SetTabOrder(const struct FString& ControlName, const struct FString& NextName, const struct FString& PreName);
	void STATIC_SetResizeFrameSize(const struct FString& ControlName, int nWidth, int nHeight);
	void STATIC_SetFrameSize(const struct FString& ControlName, int nWidth, int nHeight);
	void STATIC_SetWindowSizeRel43(const struct FString& ControlName, float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight);
	void STATIC_SetWindowSizeRel(const struct FString& ControlName, float fWidthRate, float fHeightRate, int nOffsetWidth, int nOffsetHeight);
	void STATIC_SetWindowSize(const struct FString& ControlName, int nWidth, int nHeight);
	bool STATIC_IsFocused(const struct FString& ControlName);
	void SetFocus(const struct FString& ControlName);
	void STATIC_NotifyAlarm(const struct FString& ControlName);
	void STATIC_Iconize(const struct FString& ControlName, const struct FString& Texture, int ToolTip);
	void STATIC_MoveShake(const struct FString& ContorlName, int a_nRange, int a_nSet, float a_Seconds);
	void STATIC_MoveEx(const struct FString& ControlName, int a_nX, int a_nY);
	void MoveTo(const struct FString& ControlName, int a_nX, int a_nY);
	void Move(const struct FString& ControlName, int a_nDeltaX, int a_nDeltaY, float a_Seconds);
	void STATIC_SetAlpha(const struct FString& ControlName, int a_nAlpha, float a_Seconds);
	void STATIC_SetAlwaysOnTop(const struct FString& ControlName, bool a_bAlwaysOnTop);
	bool STATIC_IsEnableWindow(const struct FString& ControlName);
	void STATIC_DisableWindow(const struct FString& ControlName);
	void STATIC_EnableWindow(const struct FString& ControlName);
	void STATIC_SetWindowTitleByText(const struct FString& ControlName, const struct FString& strText);
	void STATIC_SetWindowTitle(const struct FString& ControlName, int Index);
	void STATIC_KillUITimer(const struct FString& ControlName, int TimerID);
	void STATIC_SetUITimer(const struct FString& ControlName, int TimerID, int Delayms);
	struct FRect STATIC_GetRect(const struct FString& ControlName);
	void Clear(const struct FString& ControlName);
	void STATIC_HideWindow(const struct FString& ControlName);
	void STATIC_ShowWindow(const struct FString& ControlName);
	bool STATIC_IsMinimizedWindow(const struct FString& ControlName);
	bool STATIC_IsShowWindow(const struct FString& ControlName);
};


// Class NWindow.UIAPI_TEXTLISTBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_TEXTLISTBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_TEXTLISTBOX");
		return ptr;
	}


	void Clear(const struct FString& ControlName);
	void STATIC_AddString(const struct FString& ControlName, const struct FString& Text, const struct FColor& TextColor);
};


// Class NWindow.UIAPI_TABCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_TABCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_TABCTRL");
		return ptr;
	}


	void STATIC_SetDisable(const struct FString& ControlName, int Index, bool bDisable);
	int STATIC_GetTopIndex(const struct FString& ControlName);
	void STATIC_SetTopOrder(const struct FString& ControlName, int Index, bool bSendMessage);
	void STATIC_InitTabCtrl(const struct FString& ControlName);
};


// Class NWindow.UIAPI_NAMECTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_NAMECTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_NAMECTRL");
		return ptr;
	}

};


// Class NWindow.UIAPI_STATUSBARCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_STATUSBARCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_STATUSBARCTRL");
		return ptr;
	}

};


// Class NWindow.UIAPI_LISTCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_LISTCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_LISTCTRL");
		return ptr;
	}


	void STATIC_ShowScrollBar(const struct FString& ControlName, bool bShow);
	void STATIC_SetSelectedIndex(const struct FString& ControlName, int Index, bool bMoveToRow);
	int STATIC_GetSelectedIndex(const struct FString& ControlName);
	int STATIC_GetRecordCount(const struct FString& ControlName);
	void STATIC_DeleteRecord(const struct FString& ControlName, int Index);
	void STATIC_DeleteAllItem(const struct FString& ControlName);
	bool STATIC_ModifyRecord(const struct FString& ControlName, int Index, const struct FLVDataRecord& Record);
	void STATIC_InsertRecord(const struct FString& ControlName, const struct FLVDataRecord& Record);
};


// Class NWindow.UIAPI_MULTIEDITBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_MULTIEDITBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_MULTIEDITBOX");
		return ptr;
	}


	void STATIC_SetString(const struct FString& ControlName, const struct FString& Str);
	struct FString GetString(const struct FString& ControlName);
};


// Class NWindow.UIAPI_PROGRESSCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_PROGRESSCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_PROGRESSCTRL");
		return ptr;
	}


	void Start(const struct FString& ControlName);
	void STATIC_Resume(const struct FString& ControlName);
	void Stop(const struct FString& ControlName);
	void Reset(const struct FString& ControlName);
	void SetPos(const struct FString& ControlName, int Millitime);
	void SetProgressTime(const struct FString& ControlName, int Millitime);
};


// Class NWindow.UIAPI_CHECKBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_CHECKBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_CHECKBOX");
		return ptr;
	}


	void STATIC_ToggleDisable(const struct FString& ControlName);
	void STATIC_SetDisable(const struct FString& ControlName, bool bDisable);
	bool STATIC_IsDisable(const struct FString& ControlName);
	bool STATIC_IsChecked(const struct FString& ControlName);
	void STATIC_SetCheck(const struct FString& ControlName, bool bCheck);
	void STATIC_SetTitle(const struct FString& ControlName, const struct FString& Title);
};


// Class NWindow.UIAPI_COMBOBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_COMBOBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_COMBOBOX");
		return ptr;
	}


	int STATIC_AddStringWithColor(const struct FString& ControlName, const struct FString& Str, const struct FColor& Col);
	int STATIC_GetNumOfItems(const struct FString& ControlName);
	void Clear(const struct FString& ControlName);
	void STATIC_SetSelectedNum(const struct FString& ControlName, int Num);
	int STATIC_GetSelectedNum(const struct FString& ControlName);
	int STATIC_GetReserved(const struct FString& ControlName, int Num);
	struct FString GetString(const struct FString& ControlName, int Num);
	void STATIC_SYS_AddStringWithReserved(const struct FString& ControlName, int Index, int Reserved);
	void STATIC_AddStringWithReserved(const struct FString& ControlName, const struct FString& Str, int Reserved);
	void STATIC_SYS_AddString(const struct FString& ControlName, int Index);
	void STATIC_AddString(const struct FString& ControlName, const struct FString& Str);
};


// Class NWindow.UIAPI_EDITBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_EDITBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_EDITBOX");
		return ptr;
	}


	void STATIC_SetHighLight(const struct FString& CotrolName, bool bHighlight);
	void STATIC_SetEditType(const struct FString& CotrolName, const struct FString& type);
	void Clear(const struct FString& ControlName);
	void STATIC_SimulateBackspace(const struct FString& ControlName);
	void STATIC_AddString(const struct FString& ControlName, const struct FString& Str);
	void STATIC_SetString(const struct FString& ControlName, const struct FString& Str);
	struct FString GetString(const struct FString& ControlName);
};


// Class NWindow.UIAPI_BUTTON
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_BUTTON : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_BUTTON");
		return ptr;
	}


	void STATIC_SetButtonName(const struct FString& ControlName, int NameID);
};


// Class NWindow.UIAPI_TREECTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_TREECTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_TREECTRL");
		return ptr;
	}


	void STATIC_SetNodeItemText(const struct FString& ControlName, const struct FString& NodeName, int nTextID, const struct FString& strText);
	void STATIC_ShowScrollBar(const struct FString& ControlName, bool bShow);
	struct FString STATIC_GetParentNode(const struct FString& ControlName, const struct FString& NodeName);
	struct FString STATIC_GetChildNode(const struct FString& ControlName, const struct FString& NodeName);
	bool STATIC_IsExpandedNode(const struct FString& ControlName, const struct FString& NodeName);
	bool STATIC_IsNodeNameExist(const struct FString& ControlName, const struct FString& NodeName);
	bool STATIC_DeleteNode(const struct FString& ControlName, const struct FString& NodeName);
	struct FString STATIC_GetExpandedNode(const struct FString& ControlName, const struct FString& NodeName);
	void STATIC_SetExpandedNode(const struct FString& ControlName, const struct FString& NodeName, bool bExpanded);
	void Clear(const struct FString& ControlName);
	void STATIC_InsertNodeItem(const struct FString& ControlName, const struct FString& NodeName, const struct FXMLTreeNodeItemInfo& infNodeItem);
	struct FString STATIC_InsertNode(const struct FString& ControlName, const struct FString& strParentName, const struct FXMLTreeNodeInfo& infNode);
};


// Class NWindow.UIAPI_TEXTURECTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_TEXTURECTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_TEXTURECTRL");
		return ptr;
	}


	struct FString STATIC_GetTextureName(const struct FString& ControlName);
	void STATIC_SetTextureWithObject(const struct FString& ControlName, class UTexture* objTexture);
	void STATIC_SetTextureWithClanCrest(const struct FString& ControlName, int clanID);
	void STATIC_SetTextureCtrlType(const struct FString& ControlName, TEnumAsByte<ETextureCtrlType> type);
	void STATIC_SetTexture(const struct FString& ControlName, const struct FString& strTexture);
	void STATIC_SetUV(const struct FString& ControlName, int a_U, int a_V);
};


// Class NWindow.UIAPI_TEXTBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_TEXTBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_TEXTBOX");
		return ptr;
	}


	void STATIC_SetTooltipString(const struct FString& ControlName, const struct FString& Text);
	struct FString STATIC_GetText(const struct FString& ControlName);
	void STATIC_SetInt(const struct FString& ControlName, int Number);
	void STATIC_SetAlign(const struct FString& ControlName, TEnumAsByte<ETextAlign> Align);
	void STATIC_SetText(const struct FString& ControlName, const struct FString& Text);
	void STATIC_SetTextColor(const struct FString& ControlName, const struct FColor& a_Color);
};


// Class NWindow.UIAPI_STATUSICONCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_STATUSICONCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_STATUSICONCTRL");
		return ptr;
	}


	void Clear(const struct FString& ControlName);
	void STATIC_DelItem(const struct FString& ControlName, int row, int Col);
	void STATIC_GetItem(const struct FString& ControlName, int row, int Col, struct FStatusIconInfo* Info);
	int STATIC_GetColCount(const struct FString& ControlName, int row);
	int STATIC_GetRowCount(const struct FString& ControlName);
	void STATIC_InsertCol(const struct FString& ControlName, int row, int Col, const struct FStatusIconInfo& Info);
	void STATIC_InsertRow(const struct FString& ControlName, int row);
	void STATIC_AddCol(const struct FString& ControlName, int row, const struct FStatusIconInfo& Info);
	void STATIC_AddRow(const struct FString& ControlName);
};


// Class NWindow.UIAPI_SLIDERCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_SLIDERCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_SLIDERCTRL");
		return ptr;
	}


	int STATIC_GetTotalTickCount(const struct FString& ControlName);
	void STATIC_SetCurrentTick(const struct FString& ControlName, int iCurrTick);
	int STATIC_GetCurrentTick(const struct FString& ControlName);
};


// Class NWindow.UIAPI_SHORTCUTITEMWINDOW
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_SHORTCUTITEMWINDOW : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_SHORTCUTITEMWINDOW");
		return ptr;
	}


	void Clear(const struct FString& a_strWindowID);
	void STATIC_UpdateShortcut(const struct FString& a_strWindowID, int a_nShortcutID);
};


// Class NWindow.UIScript
// 0x0008 (0x003C - 0x0034)
class UUIScript : public UUIEventManager
{
public:
	class UWindowHandle*                               m_hOwnerWnd;                                              // 0x0034(0x0004)
	unsigned long                                      m_bCreated : 1;                                           // 0x0038(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIScript");
		return ptr;
	}


	void STATIC_IsUsingPrimeShop();
	void STATIC_ShowCashChargeWebSite();
	void STATIC_RequestBR_BuyProduct(int iProductID, int iAmount);
	void STATIC_RequestBR_ProductInfo(int iProductID);
	void STATIC_RequestBR_ProductList();
	void STATIC_RequestBR_GamePoint();
	struct FColor STATIC_GetChatColorByType(int type);
	class UTexture* STATIC_GetDominionFlagIconTex(int DominionID);
	void STATIC_RequestDominionInfo();
	void STATIC_RequestJoinDominionWar(int DominionID, int Clan, int Join, int JoinID);
	void STATIC_RequestStopShowCrataeCubeRank();
	void STATIC_RequestStartShowCrataeCubeRank();
	void STATIC_RequestWithDrawPremiumItem(int Index, const struct FINT64& Amount);
	struct FColor STATIC_GetNicknameColorWithIndex(int ColorIndex);
	int STATIC_GetMaxNicknameColorIndexCnt();
	void STATIC_RequestChangeNicknameNColor(int ColorIndex, const struct FString& nickname, const struct FItemID& Id);
	int STATIC_ChatNotificationFilter(const struct FString& keyword0, const struct FString& keyword1, const struct FString& keyword2, struct FString* Message);
	void STATIC_RequestPVPMatchRecord();
	void STATIC_RequestFortressMapInfo(int FortressID);
	void STATIC_RequestFortressSiegeInfo();
	void STATIC_RequestAllAgitInfo();
	void STATIC_RequestAllFortressInfo();
	void STATIC_RequestAllCastleInfo();
	int STATIC_CharacterCreateGetClassType(int Race, int Job, int Sex);
	bool STATIC_CheckValidName(const struct FString& Name);
	bool STATIC_CheckNameLength(const struct FString& Name);
	void STATIC_DefaultCharacterStop(int Index);
	void STATIC_DefaultCharacterTurn(int Index, float Ratio);
	void STATIC_SetCharacterStyle(int Index, int HairType, int HairColor, int FaceType);
	void STATIC_ShowOnlyOneDefaultCharacter(int Index);
	struct FString STATIC_GetClassDescription(int Index);
	void STATIC_ExecLobbyEvent(const struct FString& EventName, bool bReverse);
	void STATIC_SetCurrentMakingRace(int Race);
	void STATIC_ShowAllDefaultCharacter();
	void STATIC_SpawnDefaultCharacter(int Index);
	void STATIC_ClearDefaultCharacterInfo();
	void STATIC_SetDefaultCharacter();
	void STATIC_RequestPrevState();
	void STATIC_RequestCreateCharacter(const struct FString& Name, int Race, int Job, int Sex, int HairType, int HairColor, int FaceType);
	void STATIC_SetSelectedCharacter(int Index);
	bool STATIC_IsDisciplineCharacter(int Index);
	bool STATIC_IsScheduledToDeleteCharacter(int Index);
	void STATIC_ResetCharacterPosition();
	void STATIC_RequestDeleteCharacter(int Index);
	void STATIC_RequestRestoreCharacter(int Index);
	bool STATIC_GetSelectedCharacterInfo(int Index, struct FUserInfo* a_UserInfo);
	void STATIC_RequestCharacterSelect(int Index);
	void StartGame(int SelectedCharacter);
	void STATIC_GotoLogin();
	void STATIC_CreateNewCharacter();
	void STATIC_ShowEnableTrackerBox(bool bShow);
	void STATIC_ExecuteAlign(TEnumAsByte<ETrackerAlignType> type);
	void STATIC_DeleteAttachedWindow();
	void STATIC_ClearTracker();
	class UWindowHandle* STATIC_GetTrackerAttachedWindow();
	void STATIC_GetTrackerAttachedWindowList(TArray<class UWindowHandle*> a_WindowList);
	void STATIC_ShowExampleAnimation(bool bShow);
	void STATIC_ShowVirtualWindowBackground(bool bShow);
	TEnumAsByte<EXMLControlType> STATIC_GetXMLControlIndex(const struct FString& type);
	struct FString STATIC_GetXMLControlString(TEnumAsByte<EXMLControlType> type);
	struct FString STATIC_GetInterfaceDir();
	void STATIC_InitCreditState();
	void STATIC_ShowMessageInLogin(const struct FString& Message);
	bool STATIC_GetQuestLocation(const struct FVector& Location);
	void STATIC_ToggleMsnWindow();
	struct FString STATIC_GetManorNameInManorList(int Index);
	int STATIC_GetManorIDInManorList(int Index);
	int STATIC_GetManorCount();
	void STATIC_RequestProcureCropList(const struct FString& param);
	void STATIC_FishFinalAction();
	void STATIC_InitFishViewportWnd(bool Event);
	void STATIC_RequestFishRanking();
	class UScenePlayerCtrlHandle* STATIC_GetScenePlayerCtrlHandleWithWindowHandle(class UWindowHandle* a_WindowHandle);
	class UCharacterViewportWindowHandle* STATIC_GetCharacterViewportWindowHandle(const struct FString& a_ControlID);
	class UWindowHandle* STATIC_GetWindowHandle(const struct FString& a_ControlID);
	class UVideoPlayerCtrlHandle* STATIC_GetVideoPlayerCtrlHandle(const struct FString& a_ControlID);
	class UTreeHandle* STATIC_GetTreeHandle(const struct FString& a_ControlID);
	class UTextureHandle* STATIC_GetTextureHandle(const struct FString& a_ControlID);
	class UTextListBoxHandle* STATIC_GetTextListBoxHandle(const struct FString& a_ControlID);
	class UTextBoxHandle* STATIC_GetTextBoxHandle(const struct FString& a_ControlID);
	class UTabHandle* STATIC_GetTabHandle(const struct FString& a_ControlID);
	class UStatusIconHandle* STATIC_GetStatusIconHandle(const struct FString& a_ControlID);
	class UStatusBarHandle* STATIC_GetStatusBarHandle(const struct FString& a_ControlID);
	class USliderCtrlHandle* STATIC_GetSliderCtrlHandle(const struct FString& a_ControlID);
	class UScenePlayerCtrlHandle* STATIC_GetScenePlayerCtrlHandle(const struct FString& a_ControlID);
	class URadarMapCtrlHandle* STATIC_GetRadarMapCtrlHandle(const struct FString& a_ControlID);
	class UPropertyControllerHandle* STATIC_GetPropertyControllerHandle(const struct FString& a_ControlID);
	class UProgressCtrlHandle* STATIC_GetProgressCtrlHandle(const struct FString& a_ControlID);
	class UNameCtrlHandle* STATIC_GetNameCtrlHandle(const struct FString& a_ControlID);
	class UMinimapCtrlHandle* STATIC_GetMinimapCtrlHandle(const struct FString& a_ControlID);
	class UListCtrlHandle* STATIC_GetListCtrlHandle(const struct FString& a_ControlID);
	class UListBoxHandle* STATIC_GetListBoxHandle(const struct FString& a_ControlID);
	class UItemWindowHandle* STATIC_GetItemWindowHandle(const struct FString& a_ControlID);
	class UHtmlHandle* STATIC_GetHtmlHandle(const struct FString& a_ControlID);
	class UEditBoxHandle* STATIC_GetEditBoxHandle(const struct FString& a_ControlID);
	class UDrawPanelHandle* STATIC_GetDrawPanelHandle(const struct FString& a_ControlID);
	class UComboBoxHandle* STATIC_GetComboBoxHandle(const struct FString& a_ControlID);
	class UCheckBoxHandle* STATIC_GetCheckBoxHandle(const struct FString& a_ControlID);
	class UChatWindowHandle* STATIC_GetChatWindowHandle(const struct FString& a_ControlID);
	class UButtonHandle* STATIC_GetButtonHandle(const struct FString& a_ControlID);
	class UBarHandle* STATIC_GetBarHandle(const struct FString& a_ControlID);
	class UAnimTextureHandle* STATIC_GetAnimTextureHandle(const struct FString& a_ControlID);
	class UWindowHandle* STATIC_GetHandle(const struct FString& a_ControlID, class UWindowHandle* a_ParentWnd, int a_CloneID);
	void STATIC_RequestObserverModeEnd();
	void STATIC_RequestExEnchantSkill(int type, int iID, int iLevel);
	void STATIC_RequestExEnchantSkillInfoDetail(int type, int iID, int iLevel);
	void STATIC_RequestExEnchantSkillInfo(int type, int iID, int iLevel);
	void STATIC_RequestAcquireSkillSubClan(int iID, int iLevel, int iType, int iSubClan);
	void STATIC_RequestAcquireSkill(int iID, int iLevel, int iType);
	void STATIC_RequestAcquireSkillInfo(int iID, int iLevel, int iType);
	void STATIC_BeginBenchMark();
	void BeginPlay();
	void STATIC_EraseReplayFile(const struct FString& strFileName);
	void STATIC_BeginReplay(const struct FString& strFileName, bool bLoadCameraInst, bool bLoadChatData);
	void STATIC_GetDirList(const struct FString& strDir, TArray<struct FString>* DirList);
	void STATIC_GetFileList(const struct FString& strDir, const struct FString& strExtention, TArray<struct FString>* FileList);
	class AActor* STATIC_GetCharacterSelectionActor(int a_CharIndex);
	struct FVector STATIC_GetPlayerPosition();
	class AActor* STATIC_GetPlayerActor();
	void STATIC_SetChatMessage(const struct FString& a_Message, bool IsAppend);
	void STATIC_RequestHennaUnEquip(int iHennaID);
	void STATIC_RequestHennaUnEquipList();
	void STATIC_RequestHennaUnEquipInfo(int iHennaID);
	void STATIC_RequestHennaEquip(int iHennaID);
	void STATIC_RequestHennaItemList();
	void STATIC_RequestHennaItemInfo(int iHennaID);
	struct FString STATIC_GetLootingMethodName(int a_LootingMethodID);
	int STATIC_GetCurrentZoneID();
	struct FString STATIC_GetCurrentZoneName();
	struct FString STATIC_GetZoneNameWithZoneID(int a_ZoneID);
	void STATIC_OnModifyCurrentTickSliderCtrl(const struct FString& strID, int iCurrentTick);
	void STATIC_RequestOpenMinimap();
	void StopSound(const struct FString& a_SoundName);
	void PlaySound(const struct FString& strSoundName);
	void STATIC_ProcessCommandInterPartyChatMessage(const struct FString& a_strChatMsg);
	void STATIC_ProcessCommandChatMessage(const struct FString& a_strChatMsg);
	void STATIC_ProcessPartyMatchChatMessage(TEnumAsByte<EChatType> ChatType, const struct FString& a_strChatMsg);
	void STATIC_ProcessPetitionChatMessage(const struct FString& a_strChatMsg);
	void STATIC_ProcessChatMessage(const struct FString& chatMessage, int type, bool bStopMacro);
	void STATIC_OnFlashCtrlMsg(class UFlashCtrlHandle* a_FlashCtrlHandle, const struct FString& a_Param);
	void STATIC_OnHtmlMsgHideWindow(class UHtmlHandle* a_HtmlHandle);
	void STATIC_OnPropertyControllerResize(int a_Height);
	void STATIC_OnTextureAnimEnd(class UAnimTextureHandle* a_AnimTextureHandle);
	void STATIC_OnComboBoxItemSelected(const struct FString& strID, int Index);
	void STATIC_OnProgressTimeUp(const struct FString& strID);
	void STATIC_OnSelectItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index);
	void STATIC_OnDBClickItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index);
	void STATIC_OnRClickItemWithHandle(class UItemWindowHandle* a_hItemWindow, int a_Index);
	void STATIC_OnRDBClickItem(const struct FString& strID, int Index);
	void STATIC_OnRClickItem(const struct FString& strID, int Index);
	void STATIC_OnDBClickItem(const struct FString& strID, int Index);
	void STATIC_OnClickItem(const struct FString& strID, int Index);
	void STATIC_OnClickCheckBox(const struct FString& strID);
	void STATIC_OnDBClickListBoxItem(const struct FString& strID);
	void STATIC_OnDBClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnClickListCtrlRecord(const struct FString& strID);
	void STATIC_OnChatMarkedEditBox(const struct FString& strID);
	void STATIC_OnChangeEditBox(const struct FString& strID);
	void STATIC_OnCompleteEditBox(const struct FString& strID);
	void STATIC_OnTabMerge(const struct FString& sName);
	void STATIC_OnTabSplit(const struct FString& sName);
	void STATIC_OnButtonTimer(bool bExpired);
	void STATIC_OnClickButtonWithHandle(class UButtonHandle* a_ButtonHandle);
	void STATIC_OnClickButton(const struct FString& strID);
	void STATIC_OnDropWnd(class UWindowHandle* hTarget, class UWindowHandle* hDropWnd, int X, int Y);
	void STATIC_OnDropItemWithHandle(class UWindowHandle* hTarget, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_OnDropItemSource(const struct FString& strTarget, const struct FItemInfo& infItem);
	void STATIC_OnDragItemEnd(const struct FString& strID);
	void STATIC_OnDragItemStart(const struct FString& strID, const struct FItemInfo& infItem);
	void STATIC_OnDropItem(const struct FString& strID, const struct FItemInfo& infItem, int X, int Y);
	void STATIC_OnMouseOut(class UWindowHandle* a_WindowHandle);
	void STATIC_OnMouseOver(class UWindowHandle* a_WindowHandle);
	void STATIC_OnMButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnMButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnRButtonDblClick(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnRButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnRButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonDblClick(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonUp(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnLButtonDown(class UWindowHandle* a_WindowHandle, int X, int Y);
	void STATIC_OnKeyUp(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key);
	void STATIC_OnKeyDown(class UWindowHandle* a_WindowHandle, TEnumAsByte<EInputKey> Key);
	void STATIC_OnRegisterEvent();
	void STATIC_OnDefaultPosition();
	void STATIC_OnSendPacketWhenHiding();
	void STATIC_OnExitState(const struct FName& a_NextStateName);
	void STATIC_OnEnterState(const struct FName& a_PreStateName);
	void STATIC_OnMinimize();
	void STATIC_OnTimer(int TimerID);
	void STATIC_OnEventWithParamMap(int a_EventID, const struct FParamMap& a_ParamMap);
	void STATIC_OnEvent(int a_EventID, const struct FString& a_Param);
	void STATIC_OnHide();
	void STATIC_OnShow();
	void STATIC_OnTick();
	void STATIC_OnLoad();
	void STATIC_SetItemTextLink(const struct FItemID& a_ID, const struct FString& a_ItemName);
	void STATIC_ReturnTooltipInfo(const struct FCustomTooltip& Info);
	void STATIC_SetOggVoiceVolume(float a_fVolume);
	void STATIC_SetWavVoiceVolume(float a_fVolume);
	void STATIC_SetMusicVolume(float a_fVolume);
	void STATIC_SetSoundVolume(float a_fVolume);
	bool STATIC_GetConstantFloat(int a_nID, float* a_fValue);
	bool STATIC_GetConstantBool(int a_nID, int* a_bValue);
	bool STATIC_GetConstantString(int a_nID, struct FString* a_strValue);
	bool STATIC_GetConstantInt(int a_nID, int* a_nValue);
	void STATIC_SetINIString(const struct FString& section, const struct FString& Key, const struct FString& Value, const struct FString& file);
	void STATIC_SetINIFloat(const struct FString& section, const struct FString& Key, float Value, const struct FString& file);
	void STATIC_SetINIInt(const struct FString& section, const struct FString& Key, int Value, const struct FString& file);
	void STATIC_SetINIBool(const struct FString& section, const struct FString& Key, bool Value, const struct FString& file);
	bool STATIC_GetINIString(const struct FString& section, const struct FString& Key, const struct FString& file, struct FString* Value);
	bool STATIC_GetINIFloat(const struct FString& section, const struct FString& Key, const struct FString& file, float* Value);
	bool STATIC_GetINIInt(const struct FString& section, const struct FString& Key, const struct FString& file, int* Value);
	bool STATIC_GetINIBool(const struct FString& section, const struct FString& Key, const struct FString& file, int* Value);
	void STATIC_RefreshINI(const struct FString& a_INIFileName);
	void STATIC_RequestSaveInventoryOrder(TArray<struct FItemID> a_IDList, TArray<int> a_OrderList);
	struct FString STATIC_GetRaceTicketString(int Blessed);
	struct FString STATIC_GetLottoString(int Enchanted, int Damaged);
	bool STATIC_IsMagicalArmor(const struct FItemID& cID);
	int STATIC_GetMagicalDefense(int CrystalType, int Enchanted, int MagicalDefense);
	int STATIC_GetPhysicalDefense(int CrystalType, int Enchanted, int PhysicalDefense);
	int STATIC_GetShieldDefense(int CrystalType, int Enchanted, int ShieldDefense);
	struct FString STATIC_GetAttackSpeedString(int AttackSpeed);
	int STATIC_GetMagicalDamage(int WeaponType, int SlotBitType, int CrystalType, int Enchanted, int MagicalDamage);
	int STATIC_GetPhysicalDamage(int WeaponType, int SlotBitType, int CrystalType, int Enchanted, int PhysicalDamage);
	struct FString STATIC_GetWeaponTypeString(int WeaponType);
	struct FString STATIC_GetSlotTypeString(int ItemType, int SlotBitType, int ArmorType);
	struct FINT64 STATIC_GetInventoryItemCount(const struct FItemID& cID);
	struct FString STATIC_GetOptionString(const struct FString& a_strSection, const struct FString& a_strName);
	float STATIC_GetOptionFloat(const struct FString& a_strSection, const struct FString& a_strName);
	int STATIC_GetOptionInt(const struct FString& a_strSection, const struct FString& a_strName);
	bool STATIC_GetOptionBool(const struct FString& a_strSection, const struct FString& a_strName);
	void STATIC_SetOptionString(const struct FString& a_strSection, const struct FString& a_strName, const struct FString& a_strValue);
	void STATIC_SetOptionFloat(const struct FString& a_strSection, const struct FString& a_strName, float a_fValue);
	void STATIC_SetOptionInt(const struct FString& a_strSection, const struct FString& a_strName, int a_nValue);
	void STATIC_SetOptionBool(const struct FString& a_strSection, const struct FString& a_strName, bool a_bValue);
	void STATIC_StopMacro();
	bool STATIC_IsStackableItem(int ConsumeType);
	void STATIC_UseSkill(const struct FItemID& cID);
	void STATIC_DoAction(const struct FItemID& cID);
	void STATIC_ExecuteCommandFromAction(const struct FString& strCmd);
	void STATIC_ExecuteCommand(const struct FString& a_strCmd);
	void STATIC_SetFixedDefaultCamera(bool a_bFixed);
	void STATIC_SetIgnorePartyInviting(bool a_bIgnore);
	void STATIC_SetRenderCharacterCount(int a_NewLimitAcotor);
	void STATIC_SetShaderWaterEffect(bool a_bWater);
	void STATIC_SetDepthBufferShadow(bool a_bShadow);
	void STATIC_SetDOF(bool a_bDof);
	void STATIC_SetL2Shader(bool a_bShader);
	void STATIC_SetWeatherEffect(int a_nWeatherEffect);
	void STATIC_SetHDR(int a_nHDR);
	void STATIC_SetReflectionEffect(int a_nReflectionEffect);
	void STATIC_SetPawnClippingRange(int a_nPawnClippingRange);
	void STATIC_SetTerrainClippingRange(int a_nTerrainClippingRange);
	void STATIC_SetBackgroundEffect(bool a_bBackgroundEffect);
	void STATIC_SetShadow(bool a_bShadow);
	void STATIC_SetMotionDetail(int a_nMotionDetail);
	void STATIC_SetModelingDetail(int a_nModelingDetail);
	void STATIC_SetTextureDetail(int a_nTextureDetail);
	void STATIC_SetKeyCrypt(bool a_bOnOff);
	void STATIC_SetDefaultPosition();
	void STATIC_GetShaderVersion(int* a_nPixelShaderVersion, int* a_nVertexShaderVersion);
	int STATIC_GetResolutionIndex();
	int STATIC_GetMultiSample();
	void STATIC_SetResolution(int a_nResolutionIndex, int a_nRefreshRateIndex);
	void STATIC_GetRefreshRateList(int a_nWidth, int a_nHeight, TArray<int>* a_RefreshRateList);
	void STATIC_GetResolutionList(TArray<struct FResolutionInfo>* a_ResolutionList);
	TEnumAsByte<ELanguageType> STATIC_GetLanguage();
	bool STATIC_IsEnableKeyCrypt();
	bool STATIC_IsCheckKeyCrypt();
	bool STATIC_IsUseKeyCrypt();
	bool STATIC_IsEnableEngSelection();
	bool STATIC_CanUseHDR();
	bool STATIC_CanUseJoystick();
	bool STATIC_CanUseAudio();
	int STATIC_GetServerType();
	int STATIC_GetServerNo();
	TEnumAsByte<EServerAgeLimit> STATIC_GetServerAgeLimit();
	void STATIC_ExecQuit();
	void STATIC_ExecRestart();
	struct FString STATIC_EndSystemMessageParam(int MsgNum, bool bGetMsg);
	void STATIC_AddSystemMessageParam(const struct FString& strParam);
	void STATIC_AddSystemMessageString(const struct FString& Msg);
	void STATIC_AddSystemMessage(int Index);
	struct FString STATIC_GetPrivateShopMessage(const struct FString& type);
	void STATIC_SetPrivateShopMessage(const struct FString& type, const struct FString& Message);
	bool STATIC_IsSameChatPrefix(TEnumAsByte<EChatType> type, const struct FString& InputPrefix);
	struct FString STATIC_GetChatPrefix(TEnumAsByte<EChatType> type);
	int STATIC_GetMaxLevel();
	void STATIC_GetCurrentResolution(int* ScreenWidth, int* ScreenHeight);
	struct FVector STATIC_GetClickLocation();
	float STATIC_GetExpRate(const struct FINT64& a_Exp, int a_Level);
	bool STATIC_CheckItemLimit(const struct FItemID& cID, const struct FINT64& Count);
	bool STATIC_IsSongDance(const struct FItemID& cID, int SkillLevel);
	bool STATIC_IsDebuff(const struct FItemID& cID, int SkillLevel);
	struct FString STATIC_GetRoutingString(int RoutingType);
	struct FString STATIC_GetUserRankString(int Rank);
	void STATIC_RequestBypassToServer(const struct FString& strPass);
	class UTexture* STATIC_GetAllianceCrestTexFromAllianceCrestID(int AllianceCrestID);
	class UTexture* STATIC_GetPledgeCrestTexFromPledgeCrestID(int PledgeCrestID);
	TEnumAsByte<EIMEType> STATIC_GetCurrentIMELang();
	void STATIC_PlayConsoleSound(TEnumAsByte<EInterfaceSoundType> eType);
	struct FColor STATIC_GetNumericColor(const struct FString& strCommaAdena);
	struct FString STATIC_ConvertNumToTextNoAdena(const struct FString& strInput);
	struct FString STATIC_ConvertNumToText(const struct FString& strInput);
	struct FString STATIC_MakeCostString(const struct FString& strInput);
	struct FString STATIC_MakeCostStringINT64(const struct FINT64& a_Input);
	struct FString STATIC_GetItemGradeTextureName(int nCrystalType);
	struct FString STATIC_GetItemGradeString(int nCrystalType);
	struct FString STATIC_MakeFullItemName(int Id);
	void STATIC_GetTextSize(const struct FString& strInput, const struct FString& sFontName, int* nWidth, int* nHeight);
	void STATIC_GetTextSizeDefault(const struct FString& strInput, int* nWidth, int* nHeight);
	struct FString STATIC_MakeFullSystemMsg(const struct FString& sMsg, const struct FString& sArg1, const struct FString& sArg2);
	class UUIScript* STATIC_GetScript(const struct FString& Window);
	struct FString STATIC_GetSystemMessageWithParamNumber(int Id, int param);
	void STATIC_GetSystemMsgInfo(int Id, struct FSystemMsgData* SysMsgData);
	struct FString STATIC_GetSystemMessage(int Id);
	struct FString STATIC_GetSystemString(int Id);
	bool STATIC_IsKeyDown(TEnumAsByte<EInputKey> Key);
	void STATIC_Debug(const struct FString& strMsg);
	struct FString STATIC_ConvertTimetoStr(int Time);
	struct FString STATIC_GetTimeString();
	struct FString STATIC_MakeBuffTimeStr(int Time);
	int STATIC_GetTeleportFlagCount();
	int STATIC_GetTeleportBookMarkCount();
	struct FINT64 STATIC_GetAdena();
	int STATIC_GetClanNameValue(int iClanID);
	struct FString STATIC_GetClanName(int clanID);
	bool STATIC_IsBuilderPC();
	int STATIC_GetClassStep(int a_ClassID);
	int STATIC_GetDecoIndex(const struct FItemID& DecoID);
	bool STATIC_GetAccessoryItemID(struct FItemID* a_LEar, struct FItemID* a_REar, struct FItemID* a_LFinger, struct FItemID* a_RFinger);
	struct FINT64 STATIC_GetExpByPlayerLevel(int iLevel);
	bool STATIC_GetSkillInfo(int a_SkillID, int a_SkillLevel, struct FSkillInfo* a_SkillInfo);
	bool STATIC_GetPetInfo(struct FPetInfo* a_PetInfo);
	bool STATIC_GetUserInfo(int UserID, struct FUserInfo* a_UserInfo);
	bool STATIC_GetTargetInfo(struct FUserInfo* a_UserInfo);
	bool STATIC_GetPlayerInfo(struct FUserInfo* a_UserInfo);
	struct FString STATIC_GetClassIconName(int ClassID);
	struct FString STATIC_GetClassStr(int ClassID);
	struct FString STATIC_GetClassType(int ClassID);
	void STATIC_RequestInviteMpcc(const struct FString& Name);
	void STATIC_RequestInviteParty(const struct FString& sName);
	bool STATIC_HasClanEmblem();
	bool STATIC_HasClanCrest();
	struct FString STATIC_GetCastleName(int castleID);
	void STATIC_RequestPCCafeCouponUse(const struct FString& a_CouponKey);
	void STATIC_RequestClanMemberAuth(int clanType, const struct FString& sName);
	void STATIC_RequestEditClanAuth(int gradeID, TArray<int> powers);
	void STATIC_RequestClanAuth(int gradeID);
	void STATIC_RequestClanWarList(int page, int State);
	void STATIC_RequestClanChangeNickName(const struct FString& sName, const struct FString& sNickName);
	void STATIC_RequestClanUnregisterEmblem();
	void STATIC_RequestClanRegisterEmblem();
	void STATIC_RequestClanUnregisterCrest();
	void STATIC_RequestClanRegisterCrest();
	void STATIC_RequestClanReorganizeMember(int type, const struct FString& memberName, int clanType, const struct FString& targetMemberName);
	void STATIC_RequestClanWithdrawWarWithClanName(const struct FString& sClanName);
	void STATIC_RequestClanWithdrawWar();
	void STATIC_RequestClanDeclareWarWithClanName(const struct FString& sName);
	void STATIC_RequestClanDeclareWarWithUserID(int Id);
	void STATIC_RequestClanDeclareWar();
	void STATIC_RequestClanAskJoin(int Id, int clanType);
	void STATIC_RequestClanExpelMember(int clanType, const struct FString& sName);
	void STATIC_RequestClanLeave(const struct FString& ClanName, int clanType);
	void STATIC_RequestClanDeletePupil(const struct FString& sMaster, const struct FString& sPupil);
	void STATIC_RequestClanAssignPupil(const struct FString& sMaster, const struct FString& sPupil);
	void STATIC_RequestClanChangeGrade(const struct FString& sName, int grade);
	void STATIC_RequestClanGradeList();
	void STATIC_RequestClanMemberInfo(int type, const struct FString& Name);
	bool STATIC_GetPartyMemberLocationWithID(int a_PartyMemberSID, struct FVector* a_Location);
	bool STATIC_GetPartyMemberLocation(int a_PartyMemberIndex, struct FVector* a_Location);
	int STATIC_GetPartyMemberCount();
	void STATIC_SendPrivateShopList(const struct FString& type, const struct FString& param);
	void STATIC_RequestQuitPrivateShop(const struct FString& type);
	void STATIC_RequestDispel(const struct FItemID& sID, int SkillLevel);
	void STATIC_RequestDuelSurrender();
	void STATIC_RequestDuelAnswerStart(int duelType, int Option, int answer);
	void STATIC_RequestDuelStart(const struct FString& sTargetName, int duelType);
	void STATIC_RequestItemList();
	void STATIC_RequestCrystallizeItem(const struct FItemID& sID, const struct FINT64& Number);
	void STATIC_RequestUnequipItem(const struct FItemID& sID, int SlotBitType);
	void STATIC_RequestDropItem(const struct FItemID& sID, const struct FINT64& Num, const struct FVector& Location);
	void STATIC_RequestDestroyItem(const struct FItemID& sID, const struct FINT64& Num);
	void STATIC_RequestUseItem(const struct FItemID& sID);
	void STATIC_RequestRestartPoint(TEnumAsByte<ERestartPointType> type);
	void STATIC_RequestMultiSellChoose(const struct FString& param);
	void STATIC_RequestBBSBoard();
	void STATIC_RequestPreviewItem(const struct FString& param);
	void STATIC_RequestPackageSend(const struct FString& param);
	void STATIC_RequestPackageSendableItemList(int targetID);
	void STATIC_RequestChangePetName(const struct FString& Name);
	void STATIC_RequestWarehouseWithdraw(const struct FString& param);
	void STATIC_RequestWarehouseDeposit(const struct FString& param);
	void STATIC_RequestTargetUser(int ServerID);
	void STATIC_RequestAssist(int ServerID, const struct FVector& Loc);
	void STATIC_RequestAction(int ServerID, const struct FVector& Loc);
	void STATIC_RequestAttack(int ServerID, const struct FVector& Loc);
	void STATIC_RequestSetCrop(const struct FString& param);
	void STATIC_RequestSetSeed(const struct FString& param);
	void STATIC_RequestProcureCrop(const struct FString& param);
	void STATIC_RequestBuySeed(const struct FString& param);
	void STATIC_RequestBuyItem(const struct FString& param);
	void STATIC_RequestSellItem(const struct FString& param);
	void STATIC_AnswerTradeRequest(bool bOK);
	void STATIC_RequestAddTradeItem(const struct FItemID& sID, const struct FINT64& Num);
	void STATIC_RequestStartTrade(int targetID);
	void STATIC_RequestTradeDone(bool bDone);
	void STATIC_RequestRaidRecord();
	void STATIC_RequestSkillList();
	void STATIC_RequestTargetCancel();
	void STATIC_RequestSelfTarget();
	void STATIC_RequestAuthCardKeyLogin(int uid, const struct FString& Value);
	void STATIC_RequestExit();
	bool STATIC_IsPKMode();
};


// Class NWindow.UIAPI_RADAR
// 0x0000 (0x003C - 0x003C)
class UUIAPI_RADAR : public UUIScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_RADAR");
		return ptr;
	}

};


// Class NWindow.UIAPI_MULTISELLNEEDEDITEM
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_MULTISELLNEEDEDITEM : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_MULTISELLNEEDEDITEM");
		return ptr;
	}


	void Clear(const struct FString& ControlName);
	void STATIC_AddData(const struct FString& ControlName, const struct FString& param);
};


// Class NWindow.UIAPI_MULTISELLITEMINFO
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_MULTISELLITEMINFO : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_MULTISELLITEMINFO");
		return ptr;
	}


	void Clear(const struct FString& ControlName);
	void STATIC_SetItemInfo(const struct FString& ControlName, int Index, const struct FItemInfo& item);
};


// Class NWindow.UIAPI_MINIMAPCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_MINIMAPCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_MINIMAPCTRL");
		return ptr;
	}


	void STATIC_DeleteAllCursedWeaponIcon(const struct FString& a_ControlID);
	bool STATIC_IsOverlapped(const struct FString& a_ControlID, int FirstX, int FirstY, int SecondX, int SecondY);
	void STATIC_RequestReduceBtn(const struct FString& a_ControlID);
	void STATIC_DrawGridIcon(const struct FString& a_ControlID, const struct FString& a_IconName, const struct FString& a_DupIconName, const struct FVector& a_Loc, bool a_Refresh, int a_XOffset, int a_YOffset, const struct FString& TooltipString);
	void STATIC_SetSSQStatus(const struct FString& a_ControlID, int a_SSQStatus);
	void STATIC_SetShowQuest(const struct FString& a_ControlID, bool a_ShowQuest);
	void STATIC_DeleteAllTarget(const struct FString& a_ControlID);
	void STATIC_DeleteTarget(const struct FString& a_ControlID, const struct FVector& a_Loc);
	void STATIC_AddTarget(const struct FString& a_ControlID, const struct FVector& a_Loc);
	void STATIC_AdjustMapView(const struct FString& a_ControlID, const struct FVector& Loc, bool a_ZoomToTownMap, bool a_UseGridLocation);
};


// Class NWindow.UIAPI_LISTBOX
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_LISTBOX : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_LISTBOX");
		return ptr;
	}

};


// Class NWindow.UIAPI_ITEMWINDOW
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_ITEMWINDOW : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_ITEMWINDOW");
		return ptr;
	}


	void STATIC_ShowScrollBar(const struct FString& ControlName, bool bShow);
	void STATIC_SetFaded(const struct FString& ControlName, bool bOn);
	int STATIC_FindItem(const struct FString& ControlName, const struct FItemID& Id);
	void Clear(const struct FString& ControlName);
	bool STATIC_GetItem(const struct FString& ControlName, int Index, struct FItemInfo* Info);
	bool STATIC_GetSelectedItem(const struct FString& ControlName, struct FItemInfo* Info);
	void STATIC_DeleteItem(const struct FString& ControlName, int Index);
	void STATIC_SetItem(const struct FString& ControlName, int Index, const struct FItemInfo& Info);
	void STATIC_AddItem(const struct FString& ControlName, const struct FItemInfo& Info);
	void STATIC_ClearSelect(const struct FString& ControlName);
	int STATIC_GetItemNum(const struct FString& ControlName);
	int STATIC_GetSelectedNum(const struct FString& ControlName);
};


// Class NWindow.UIAPI_INVENWEIGHT
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_INVENWEIGHT : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_INVENWEIGHT");
		return ptr;
	}


	void STATIC_ZeroWeight(const struct FString& ControlName);
	void STATIC_ReduceWeight(const struct FString& ControlName, const struct FINT64& Weight);
	void STATIC_AddWeight(const struct FString& ControlName, const struct FINT64& Weight);
};


// Class NWindow.UIAPI_HTMLCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_HTMLCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_HTMLCTRL");
		return ptr;
	}


	bool STATIC_IsPageLock(const struct FString& ControlName);
	void STATIC_SetPageLock(const struct FString& ControlName, bool bLock);
	void STATIC_SetHtmlBuffData(const struct FString& ControlName, const struct FString& strData);
	TEnumAsByte<EControlReturnType> STATIC_ControllerExecution(const struct FString& ControlName, const struct FString& strBypass);
	int STATIC_GetFrameMaxHeight(const struct FString& ControlName);
	void Clear(const struct FString& ControlName);
	void STATIC_LoadHtmlFromString(const struct FString& ControlName, const struct FString& HtmlString);
	void STATIC_LoadHtml(const struct FString& ControlName, const struct FString& Filename);
};


// Class NWindow.UIAPI_EFFECTBUTTON
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_EFFECTBUTTON : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_EFFECTBUTTON");
		return ptr;
	}


	void STATIC_BeginEffect(const struct FString& ControlName, int iEffectNumber);
};


// Class NWindow.UIAPI_BARCTRL
// 0x0000 (0x0034 - 0x0034)
class UUIAPI_BARCTRL : public UUIAPI_WINDOW
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.UIAPI_BARCTRL");
		return ptr;
	}

};


// Class NWindow.CAbstractMain
// 0x0000 (0x0034 - 0x0034)
class UCAbstractMain : public UCObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CAbstractMain");
		return ptr;
	}

};


// Class NWindow.CVirtualWndMain
// 0x0090 (0x00C4 - 0x0034)
class UCVirtualWndMain : public UCAbstractMain
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0034(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CVirtualWndMain");
		return ptr;
	}

};


// Class NWindow.CIME
// 0x2028 (0x2218 - 0x01F0)
class UCIME : public UControl
{
public:
	unsigned char                                      UnknownData00[0x2028];                                    // 0x01F0(0x2028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CIME");
		return ptr;
	}

};


// Class NWindow.TSFIME
// 0x0000 (0x2218 - 0x2218)
class UTSFIME : public UCIME
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.TSFIME");
		return ptr;
	}

};


// Class NWindow.CShortcutItemManager
// 0x0248 (0x027C - 0x0034)
class UCShortcutItemManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0034(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CShortcutItemManager");
		return ptr;
	}

};


// Class NWindow.ShortcutItemInfo
// 0x0014 (0x0048 - 0x0034)
class UShortcutItemInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0034(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ShortcutItemInfo");
		return ptr;
	}

};


// Class NWindow.CShortCutItem
// 0x0014 (0x0238 - 0x0224)
class UCShortCutItem : public UCItem
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0224(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CShortCutItem");
		return ptr;
	}

};


// Class NWindow.CIMEMessageInterface
// 0x0004 (0x221C - 0x2218)
class UCIMEMessageInterface : public UCIME
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2218(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CIMEMessageInterface");
		return ptr;
	}

};


// Class NWindow.CRussiaIME
// 0x0000 (0x221C - 0x221C)
class UCRussiaIME : public UCIMEMessageInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CRussiaIME");
		return ptr;
	}

};


// Class NWindow.CThaiIME
// 0x0000 (0x221C - 0x221C)
class UCThaiIME : public UCIMEMessageInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CThaiIME");
		return ptr;
	}

};


// Class NWindow.CChineseIME
// 0x0018 (0x2234 - 0x221C)
class UCChineseIME : public UCIMEMessageInterface
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x221C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CChineseIME");
		return ptr;
	}

};


// Class NWindow.CTaiwanIME
// 0x0000 (0x221C - 0x221C)
class UCTaiwanIME : public UCIMEMessageInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CTaiwanIME");
		return ptr;
	}

};


// Class NWindow.CJapaneseIME
// 0x0000 (0x221C - 0x221C)
class UCJapaneseIME : public UCIMEMessageInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CJapaneseIME");
		return ptr;
	}

};


// Class NWindow.CKoreanIME
// 0x0000 (0x221C - 0x221C)
class UCKoreanIME : public UCIMEMessageInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CKoreanIME");
		return ptr;
	}

};


// Class NWindow.CIMEManager
// 0x0008 (0x01F8 - 0x01F0)
class UCIMEManager : public UControl
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CIMEManager");
		return ptr;
	}

};


// Class NWindow.CHennaData
// 0x000C (0x0040 - 0x0034)
class UCHennaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CHennaData");
		return ptr;
	}

};


// Class NWindow.CGMData
// 0x0404 (0x0438 - 0x0034)
class UCGMData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x404];                                     // 0x0034(0x0404) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CGMData");
		return ptr;
	}

};


// Class NWindow.CGDevice
// 0x0050 (0x0084 - 0x0034)
class UCGDevice : public UCObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0034(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CGDevice");
		return ptr;
	}

};


// Class NWindow.L2Font
// 0x001C (0x0054 - 0x0038)
class NUL2Font : public UL2Font
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0038(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.L2Font");
		return ptr;
	}

};


// Class NWindow.CEventMatchData
// 0x05E0 (0x0614 - 0x0034)
class UCEventMatchData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0034(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CEventMatchData");
		return ptr;
	}

};


// Class NWindow.CDataManager
// 0xCDB8 (0xCDEC - 0x0034)
class UCDataManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xCDB8];                                    // 0x0034(0xCDB8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CDataManager");
		return ptr;
	}

};


// Class NWindow.CCooltimeManager
// 0x0028 (0x005C - 0x0034)
class UCCooltimeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0034(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CCooltimeManager");
		return ptr;
	}

};


// Class NWindow.ConsoleWnd
// 0x0958 (0x7A1C - 0x70C4)
class UConsoleWnd : public UL2ConsoleWnd
{
public:
	unsigned char                                      UnknownData00[0x958];                                     // 0x70C4(0x0958) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.ConsoleWnd");
		return ptr;
	}

};


// Class NWindow.CConsole
// 0x0094 (0x026C - 0x01D8)
class UCConsole : public UCWnd
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x01D8(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NWindow.CConsole");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

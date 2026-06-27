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

// Class WinDrv.WindowsViewport
// 0x0080 (0x0240 - 0x01C0)
class UWindowsViewport : public UViewport
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x01C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsViewport");
		return ptr;
	}

};


// Class WinDrv.WindowsClient
// 0x003C (0x00F4 - 0x00B8)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B8(0x0004) MISSED OFFSET
	unsigned long                                      UseJoystick : 1;                                          // 0x00BC(0x0004) (Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	unsigned long                                      UseWindowFrame : 1;                                       // 0x00C4(0x0004) (Config)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x00C8(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

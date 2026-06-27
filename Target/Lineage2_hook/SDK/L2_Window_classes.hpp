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

// Class Window.WindowManager
// 0x0004 (0x0038 - 0x0034)
class UWindowManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Window.WindowManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

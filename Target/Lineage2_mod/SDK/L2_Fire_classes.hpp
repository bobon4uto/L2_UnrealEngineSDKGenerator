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

// Class Fire.FractalTexture
// 0x0018 (0x0128 - 0x0110)
class UFractalTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0110(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.FractalTexture");
		return ptr;
	}

};


// Class Fire.IceTexture
// 0x0044 (0x016C - 0x0128)
class UIceTexture : public UFractalTexture
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0128(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.IceTexture");
		return ptr;
	}

};


// Class Fire.WaterTexture
// 0x1220 (0x1348 - 0x0128)
class UWaterTexture : public UFractalTexture
{
public:
	unsigned char                                      UnknownData00[0x1220];                                    // 0x0128(0x1220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.WaterTexture");
		return ptr;
	}

};


// Class Fire.WetTexture
// 0x000C (0x1354 - 0x1348)
class UWetTexture : public UWaterTexture
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x1348(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.WetTexture");
		return ptr;
	}

};


// Class Fire.FluidTexture
// 0x0000 (0x1348 - 0x1348)
class UFluidTexture : public UWaterTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.FluidTexture");
		return ptr;
	}

};


// Class Fire.WaveTexture
// 0x0004 (0x134C - 0x1348)
class UWaveTexture : public UWaterTexture
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1348(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.WaveTexture");
		return ptr;
	}

};


// Class Fire.FireTexture
// 0x0434 (0x055C - 0x0128)
class UFireTexture : public UFractalTexture
{
public:
	unsigned char                                      UnknownData00[0x434];                                     // 0x0128(0x0434) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Fire.FireTexture");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class D3DDrv.ShaderCommandlet
// 0x0094 (0x027C - 0x01E8)
class UShaderCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x01E8(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class D3DDrv.ShaderCommandlet");
		return ptr;
	}

};


// Class D3DDrv.D3DRenderDevice
// 0x78E80 (0x78F4C - 0x00CC)
class UD3DRenderDevice : public URenderDevice
{
public:
	unsigned char                                      UnknownData00[0x4030];                                    // 0x00CC(0x4030) MISSED OFFSET
	unsigned long                                      UsePrecaching : 1;                                        // 0x40FC(0x0004) (Config)
	unsigned long                                      UnknownData01 : 31;                                       // 0x40FC(0x0001)
	unsigned long                                      UseTrilinear : 1;                                         // 0x4100(0x0004) (Config)
	unsigned char                                      UnknownData02[0x4];                                       // 0x4104(0x0004) MISSED OFFSET
	unsigned long                                      UseVSync : 1;                                             // 0x4108(0x0004) (Config)
	unsigned long                                      UnknownData03 : 31;                                       // 0x4108(0x0001)
	unsigned long                                      UseHardwareTL : 1;                                        // 0x410C(0x0004) (Config)
	unsigned long                                      UnknownData04 : 31;                                       // 0x410C(0x0001)
	unsigned long                                      UseHardwareVS : 1;                                        // 0x4110(0x0004) (Config)
	unsigned long                                      UnknownData05 : 31;                                       // 0x4110(0x0001)
	unsigned long                                      UseCubemaps : 1;                                          // 0x4114(0x0004) (Config)
	unsigned char                                      UnknownData06[0x10];                                      // 0x4118(0x0010) MISSED OFFSET
	unsigned long                                      UseTripleBuffering : 1;                                   // 0x4128(0x0004) (Config)
	unsigned long                                      UnknownData07 : 31;                                       // 0x4128(0x0001)
	unsigned long                                      ReduceMouseLag : 1;                                       // 0x412C(0x0004) (Config)
	unsigned long                                      UnknownData08 : 31;                                       // 0x412C(0x0001)
	unsigned long                                      UseXBoxFSAA : 1;                                          // 0x4130(0x0004) (Config)
	unsigned char                                      UnknownData09[0x10];                                      // 0x4134(0x0010) MISSED OFFSET
	unsigned long                                      CheckForOverflow : 1;                                     // 0x4144(0x0004) (Config)
	unsigned long                                      UnknownData10 : 31;                                       // 0x4144(0x0001)
	unsigned long                                      UseNPatches : 1;                                          // 0x4148(0x0004) (Config)
	unsigned char                                      UnknownData11[0x8];                                       // 0x414C(0x0008) MISSED OFFSET
	unsigned long                                      DecompressTextures : 1;                                   // 0x4154(0x0004) (Config)
	unsigned char                                      UnknownData12[0x8];                                       // 0x4158(0x0008) MISSED OFFSET
	int                                                AdapterNumber;                                            // 0x4160(0x0004) (Config)
	unsigned char                                      UnknownData13[0x4];                                       // 0x4164(0x0004) MISSED OFFSET
	int                                                MaxPixelShaderVersion;                                    // 0x4168(0x0004) (Config)
	int                                                LevelOfAnisotropy;                                        // 0x416C(0x0004) (Config)
	float                                              DetailTexMipBias;                                         // 0x4170(0x0004) (Config)
	float                                              DefaultTexMipBias;                                        // 0x4174(0x0004) (Config)
	float                                              TesselationFactor;                                        // 0x4178(0x0004) (Config)
	int                                                DesiredRefreshRate;                                       // 0x417C(0x0004) (Config)
	unsigned char                                      UnknownData14[0x74DCC];                                   // 0x4180(0x74DCC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class D3DDrv.D3DRenderDevice");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

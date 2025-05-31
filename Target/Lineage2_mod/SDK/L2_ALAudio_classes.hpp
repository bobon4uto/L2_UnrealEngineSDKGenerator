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

// Class ALAudio.ALAudioSubsystem
// 0x0124 (0x015C - 0x0038)
class UALAudioSubsystem : public UAudioSubsystem
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET
	float                                              DopplerFactor;                                            // 0x00B8(0x0004) (Config)
	float                                              MusicVolume;                                              // 0x00BC(0x0004) (Config)
	float                                              AmbientVolume;                                            // 0x00C0(0x0004) (Config)
	float                                              SoundVolume;                                              // 0x00C4(0x0004) (Config)
	float                                              TimeBetweenHWUpdates;                                     // 0x00C8(0x0004) (Config)
	float                                              RollOff;                                                  // 0x00CC(0x0004) (Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	int                                                Channels;                                                 // 0x00D8(0x0004) (Config)
	unsigned long                                      ReverseStereo : 1;                                        // 0x00DC(0x0004) (Config)
	unsigned long                                      UnknownData02 : 31;                                       // 0x00DC(0x0001)
	unsigned long                                      UsePrecache : 1;                                          // 0x00E0(0x0004) (Config)
	unsigned long                                      UnknownData03 : 31;                                       // 0x00E0(0x0001)
	unsigned long                                      UseEAX : 1;                                               // 0x00E4(0x0004) (Config)
	unsigned long                                      UnknownData04 : 31;                                       // 0x00E4(0x0001)
	unsigned long                                      Use3DSound : 1;                                           // 0x00E8(0x0004) (Config)
	unsigned long                                      UnknownData05 : 31;                                       // 0x00E8(0x0001)
	unsigned long                                      CompatibilityMode : 1;                                    // 0x00EC(0x0004) (Config)
	unsigned long                                      UnknownData06 : 31;                                       // 0x00EC(0x0001)
	unsigned long                                      UseDefaultDriver : 1;                                     // 0x00F0(0x0004) (Config)
	unsigned long                                      UnknownData07 : 31;                                       // 0x00F0(0x0001)
	unsigned long                                      DisablePitch : 1;                                         // 0x00F4(0x0004) (Config)
	unsigned long                                      UnknownData08 : 31;                                       // 0x00F4(0x0001)
	unsigned long                                      LowQualitySound : 1;                                      // 0x00F8(0x0004) (Config)
	unsigned char                                      UnknownData09[0x60];                                      // 0x00FC(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ALAudio.ALAudioSubsystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

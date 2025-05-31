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

#define CONST_IDC_SIZEWE                                         5
#define CONST_MINFLOORZ                                           0.7
#define CONST_IDC_SIZENS                                         3
#define CONST_MAXSTEPHEIGHT                                       10.0
#define CONST_IDC_SIZENWSE                                       4
#define CONST_IDC_ARROW                                          0
#define CONST_IDC_WAIT                                           6
#define CONST_IDC_SIZENESW                                       2
#define CONST_IDC_SIZEALL                                        1
#define CONST_LATENT_MOVETOWARD                                   503
#define CONST_FilterFrames                                        5
#define CONST_MaxHistory                                         16

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.Client.ETextureDetail
enum class ETextureDetail : uint8_t
{
	UltraHigh                      = 0,
	VeryHigh                       = 1,
	High                           = 2,
	Higher                         = 3,
	Normal                         = 4,
	Lower                          = 5,
	Low                            = 6,
	VeryLow                        = 7,
	UltraLow                       = 8
};


// Enum Engine.Interactions.EInputKey
enum class EInputKey : uint8_t
{
	IK_None                        = 0,
	IK_LeftMouse                   = 1,
	IK_RightMouse                  = 2,
	IK_Cancel                      = 3,
	IK_MiddleMouse                 = 4,
	IK_Unknown05                   = 5,
	IK_Unknown06                   = 6,
	IK_Unknown07                   = 7,
	IK_Backspace                   = 8,
	IK_Tab                         = 9,
	IK_Unknown0A                   = 10,
	IK_Unknown0B                   = 11,
	IK_Unknown0C                   = 12,
	IK_Enter                       = 13,
	IK_Unknown0E                   = 14,
	IK_Unknown0F                   = 15,
	IK_Shift                       = 16,
	IK_Ctrl                        = 17,
	IK_Alt                         = 18,
	IK_Pause                       = 19,
	IK_CapsLock                    = 20,
	IK_Unknown15                   = 21,
	IK_Unknown16                   = 22,
	IK_Unknown17                   = 23,
	IK_Unknown18                   = 24,
	IK_Unknown19                   = 25,
	IK_Unknown1A                   = 26,
	IK_Escape                      = 27,
	IK_Unknown1C                   = 28,
	IK_Unknown1D                   = 29,
	IK_Unknown1E                   = 30,
	IK_Unknown1F                   = 31,
	IK_Space                       = 32,
	IK_PageUp                      = 33,
	IK_PageDown                    = 34,
	IK_End                         = 35,
	IK_Home                        = 36,
	IK_Left                        = 37,
	IK_Up                          = 38,
	IK_Right                       = 39,
	IK_Down                        = 40,
	IK_Select                      = 41,
	IK_Print                       = 42,
	IK_Execute                     = 43,
	IK_PrintScrn                   = 44,
	IK_Insert                      = 45,
	IK_Delete                      = 46,
	IK_Help                        = 47,
	IK_0                           = 48,
	IK_1                           = 49,
	IK_2                           = 50,
	IK_3                           = 51,
	IK_4                           = 52,
	IK_5                           = 53,
	IK_6                           = 54,
	IK_7                           = 55,
	IK_8                           = 56,
	IK_9                           = 57,
	IK_Unknown3A                   = 58,
	IK_Unknown3B                   = 59,
	IK_Unknown3C                   = 60,
	IK_Unknown3D                   = 61,
	IK_Unknown3E                   = 62,
	IK_Unknown3F                   = 63,
	IK_Unknown40                   = 64,
	IK_A                           = 65,
	IK_B                           = 66,
	IK_C                           = 67,
	IK_D                           = 68,
	IK_E                           = 69,
	IK_F                           = 70,
	IK_G                           = 71,
	IK_H                           = 72,
	IK_I                           = 73,
	IK_J                           = 74,
	IK_K                           = 75,
	IK_L                           = 76,
	IK_M                           = 77,
	IK_N                           = 78,
	IK_O                           = 79,
	IK_P                           = 80,
	IK_Q                           = 81,
	IK_R                           = 82,
	IK_S                           = 83,
	IK_T                           = 84,
	IK_U                           = 85,
	IK_V                           = 86,
	IK_W                           = 87,
	IK_X                           = 88,
	IK_Y                           = 89,
	IK_Z                           = 90,
	IK_Unknown5B                   = 91,
	IK_Unknown5C                   = 92,
	IK_Unknown5D                   = 93,
	IK_Unknown5E                   = 94,
	IK_Unknown5F                   = 95,
	IK_NumPad0                     = 96,
	IK_NumPad1                     = 97,
	IK_NumPad2                     = 98,
	IK_NumPad3                     = 99,
	IK_NumPad4                     = 100,
	IK_NumPad5                     = 101,
	IK_NumPad6                     = 102,
	IK_NumPad7                     = 103,
	IK_NumPad8                     = 104,
	IK_NumPad9                     = 105,
	IK_GreyStar                    = 106,
	IK_GreyPlus                    = 107,
	IK_Separator                   = 108,
	IK_GreyMinus                   = 109,
	IK_NumPadPeriod                = 110,
	IK_GreySlash                   = 111,
	IK_F1                          = 112,
	IK_F2                          = 113,
	IK_F3                          = 114,
	IK_F4                          = 115,
	IK_F5                          = 116,
	IK_F6                          = 117,
	IK_F7                          = 118,
	IK_F8                          = 119,
	IK_F9                          = 120,
	IK_F10                         = 121,
	IK_F11                         = 122,
	IK_F12                         = 123,
	IK_F13                         = 124,
	IK_F14                         = 125,
	IK_F15                         = 126,
	IK_F16                         = 127,
	IK_F17                         = 128,
	IK_F18                         = 129,
	IK_F19                         = 130,
	IK_F20                         = 131,
	IK_F21                         = 132,
	IK_F22                         = 133,
	IK_F23                         = 134,
	IK_F24                         = 135,
	IK_Unknown88                   = 136,
	IK_Unknown89                   = 137,
	IK_Unknown8A                   = 138,
	IK_Unknown8B                   = 139,
	IK_Unknown8C                   = 140,
	IK_Unknown8D                   = 141,
	IK_Unknown8E                   = 142,
	IK_Unknown8F                   = 143,
	IK_NumLock                     = 144,
	IK_ScrollLock                  = 145,
	IK_Unknown92                   = 146,
	IK_Unknown93                   = 147,
	IK_Unknown94                   = 148,
	IK_Unknown95                   = 149,
	IK_Unknown96                   = 150,
	IK_Unknown97                   = 151,
	IK_Unknown98                   = 152,
	IK_Unknown99                   = 153,
	IK_Unknown9A                   = 154,
	IK_Unknown9B                   = 155,
	IK_Unknown9C                   = 156,
	IK_Unknown9D                   = 157,
	IK_Unknown9E                   = 158,
	IK_Unknown9F                   = 159,
	IK_LShift                      = 160,
	IK_RShift                      = 161,
	IK_LControl                    = 162,
	IK_RControl                    = 163,
	IK_UnknownA4                   = 164,
	IK_UnknownA5                   = 165,
	IK_UnknownA6                   = 166,
	IK_UnknownA7                   = 167,
	IK_UnknownA8                   = 168,
	IK_UnknownA9                   = 169,
	IK_UnknownAA                   = 170,
	IK_UnknownAB                   = 171,
	IK_UnknownAC                   = 172,
	IK_UnknownAD                   = 173,
	IK_UnknownAE                   = 174,
	IK_UnknownAF                   = 175,
	IK_UnknownB0                   = 176,
	IK_UnknownB1                   = 177,
	IK_UnknownB2                   = 178,
	IK_UnknownB3                   = 179,
	IK_UnknownB4                   = 180,
	IK_UnknownB5                   = 181,
	IK_UnknownB6                   = 182,
	IK_UnknownB7                   = 183,
	IK_UnknownB8                   = 184,
	IK_Unicode                     = 185,
	IK_Semicolon                   = 186,
	IK_Equals                      = 187,
	IK_Comma                       = 188,
	IK_Minus                       = 189,
	IK_Period                      = 190,
	IK_Slash                       = 191,
	IK_Tilde                       = 192,
	IK_UnknownC1                   = 193,
	IK_UnknownC2                   = 194,
	IK_UnknownC3                   = 195,
	IK_UnknownC4                   = 196,
	IK_UnknownC5                   = 197,
	IK_UnknownC6                   = 198,
	IK_UnknownC7                   = 199,
	IK_Joy1                        = 200,
	IK_Joy2                        = 201,
	IK_Joy3                        = 202,
	IK_Joy4                        = 203,
	IK_Joy5                        = 204,
	IK_Joy6                        = 205,
	IK_Joy7                        = 206,
	IK_Joy8                        = 207,
	IK_Joy9                        = 208,
	IK_Joy10                       = 209,
	IK_Joy11                       = 210,
	IK_Joy12                       = 211,
	IK_Joy13                       = 212,
	IK_Joy14                       = 213,
	IK_Joy15                       = 214,
	IK_Joy16                       = 215,
	IK_UnknownD8                   = 216,
	IK_UnknownD9                   = 217,
	IK_UnknownDA                   = 218,
	IK_LeftBracket                 = 219,
	IK_Backslash                   = 220,
	IK_RightBracket                = 221,
	IK_SingleQuote                 = 222,
	IK_UnknownDF                   = 223,
	IK_UnknownE0                   = 224,
	IK_UnknownE1                   = 225,
	IK_UnknownE2                   = 226,
	IK_UnknownE3                   = 227,
	IK_MouseX                      = 228,
	IK_MouseY                      = 229,
	IK_MouseZ                      = 230,
	IK_MouseW                      = 231,
	IK_JoyU                        = 232,
	IK_JoyV                        = 233,
	IK_JoySlider1                  = 234,
	IK_JoySlider2                  = 235,
	IK_MouseWheelUp                = 236,
	IK_MouseWheelDown              = 237,
	IK_Unknown10E                  = 238,
	UK_Unknown10F                  = 239,
	IK_JoyX                        = 240,
	IK_JoyY                        = 241,
	IK_JoyZ                        = 242,
	IK_JoyR                        = 243,
	IK_UnknownF4                   = 244,
	IK_UnknownF5                   = 245,
	IK_Attn                        = 246,
	IK_CrSel                       = 247,
	IK_ExSel                       = 248,
	IK_ErEof                       = 249,
	IK_Play                        = 250,
	IK_Zoom                        = 251,
	IK_NoName                      = 252,
	IK_PA1                         = 253,
	IK_OEMClear                    = 254
};


// Enum Engine.Interactions.EInputAction
enum class EInputAction : uint8_t
{
	IST_None                       = 0,
	IST_Press                      = 1,
	IST_Hold                       = 2,
	IST_Release                    = 3,
	IST_Axis                       = 4
};


// Enum Engine.Actor.ERenderStyle
enum class ERenderStyle : uint8_t
{
	STY_None                       = 0,
	STY_Normal                     = 1,
	STY_Masked                     = 2,
	STY_Translucent                = 3,
	STY_Modulated                  = 4,
	STY_Alpha                      = 5,
	STY_Additive                   = 6,
	STY_Subtractive                = 7,
	STY_Particle                   = 8,
	STY_AlphaZ                     = 9,
	STY_Capture                    = 10
};


// Enum Engine.Actor.ESoundSlot
enum class ESoundSlot : uint8_t
{
	SLOT_None                      = 0,
	SLOT_Misc                      = 1,
	SLOT_Pain                      = 2,
	SLOT_Interact                  = 3,
	SLOT_Ambient                   = 4,
	SLOT_Talk                      = 5,
	SLOT_Interface                 = 6
};


// Enum Engine.Actor.eKillZType
enum class EeKillZType : uint8_t
{
	KILLZ_None                     = 0,
	KILLZ_Lava                     = 1,
	KILLZ_Suicide                  = 2
};


// Enum Engine.Actor.EActorViewType
enum class EActorViewType : uint8_t
{
	EAVT_None                      = 0,
	EAVT_InSight                   = 1,
	EAVT_InSighting                = 2,
	EAVT_OutSight                  = 3,
	EAVT_OutSighting               = 4,
	EAVT_Spawning                  = 5,
	EAVT_Deleting                  = 6,
	EAVT_Hiding                    = 7,
	EAVT_Showing                   = 8,
	EAVT_Controller                = 9,
	EAVT_HighLight                 = 10,
	EAVT_Despawning                = 11,
	EAVT_GotoAlpha                 = 12,
	EAVT_BacktoAlpha               = 13
};


// Enum Engine.Actor.EPhysics
enum class EPhysics : uint8_t
{
	PHYS_None                      = 0,
	PHYS_Walking                   = 1,
	PHYS_Falling                   = 2,
	PHYS_Swimming                  = 3,
	PHYS_Flying                    = 4,
	PHYS_Rotating                  = 5,
	PHYS_Projectile                = 6,
	PHYS_Interpolating             = 7,
	PHYS_MovingBrush               = 8,
	PHYS_Spider                    = 9,
	PHYS_Trailer                   = 10,
	PHYS_Ladder                    = 11,
	PHYS_RootMotion                = 12,
	PHYS_Karma                     = 13,
	PHYS_KarmaRagDoll              = 14,
	PHYS_MovingTrailer             = 15,
	PHYS_EffectTrailer             = 16,
	PHYS_NProjectile               = 17,
	PHYS_NMover                    = 18,
	PHYS_L2Movement                = 19
};


// Enum Engine.Actor.EL2GameAction
enum class EL2GameAction : uint8_t
{
	LGA_SaintConsensusOpening      = 0,
	LGA_SaintConsensusOpened       = 1,
	LGA_SaintConsensusClosing      = 2,
	LGA_SaintConsensusClosed       = 3
};


// Enum Engine.Actor.EDrawType
enum class EDrawType : uint8_t
{
	DT_None                        = 0,
	DT_Sprite                      = 1,
	DT_Mesh                        = 2,
	DT_Brush                       = 3,
	DT_RopeSprite                  = 4,
	DT_VerticalSprite              = 5,
	DT_Terraform                   = 6,
	DT_SpriteAnimOnce              = 7,
	DT_StaticMesh                  = 8,
	DT_DrawType                    = 9,
	DT_Particle                    = 10,
	DT_AntiPortal                  = 11,
	DT_FluidSurface                = 12,
	DT_Sun                         = 13,
	DT_MusicVolume                 = 14,
	DT_Custom                      = 15,
	DT_Native                      = 16
};


// Enum Engine.Actor.EActorEffectType
enum class EActorEffectType : uint8_t
{
	EAST_None                      = 0,
	EAST_Silhouette                = 1,
	EAST_CubemapSilhouette         = 2,
	EAST_WeaponSilhouette          = 3
};


// Enum Engine.Actor.EDoubleClickDir
enum class EDoubleClickDir : uint8_t
{
	DCLICK_None                    = 0,
	DCLICK_Left                    = 1,
	DCLICK_Right                   = 2,
	DCLICK_Forward                 = 3,
	DCLICK_Back                    = 4,
	DCLICK_Active                  = 5,
	DCLICK_Done                    = 6
};


// Enum Engine.Actor.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2
};


// Enum Engine.Actor.ESpawnPos
enum class ESpawnPos : uint8_t
{
	SPN_Normal                     = 0,
	SPN_Top                        = 1,
	SPN_Mid                        = 2,
	SPN_Btm                        = 3
};


// Enum Engine.Actor.ENAttackStatus
enum class ENAttackStatus : uint8_t
{
	NAST_None                      = 0,
	NAST_AttackStart               = 1,
	NAST_AttackDelay               = 2,
	NAST_AttackShot                = 3,
	NAST_AttackDemage              = 4,
	NAST_AttackEnd                 = 5
};


// Enum Engine.Actor.ENMagicAniStatus
enum class ENMagicAniStatus : uint8_t
{
	NMAS_None                      = 0,
	NMAS_RotationTo                = 1,
	NMAS_CastStart                 = 2,
	NMAS_Cast                      = 3,
	NMAS_CastEnd                   = 4,
	NMAS_ShotStart                 = 5,
	NMAS_Shot                      = 6,
	NMAS_ShotEnd                   = 7
};


// Enum Engine.Actor.EForceType
enum class EForceType : uint8_t
{
	FT_None                        = 0,
	FT_DragAlong                   = 1
};


// Enum Engine.Actor.EMusicTransition
enum class EMusicTransition : uint8_t
{
	MTRAN_None                     = 0,
	MTRAN_Instant                  = 1,
	MTRAN_Segue                    = 2,
	MTRAN_Fade                     = 3,
	MTRAN_FastFade                 = 4,
	MTRAN_SlowFade                 = 5
};


// Enum Engine.Actor.ETargetSpineStatus
enum class ETargetSpineStatus : uint8_t
{
	TSR_None                       = 0,
	TSR_START                      = 1,
	TSR_END                        = 2
};


// Enum Engine.Actor.EAttachType
enum class EAttachType : uint8_t
{
	EATP_Relative                  = 0,
	EATP_Absolute                  = 1
};


// Enum Engine.Actor.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_DumbProxy                 = 1,
	ROLE_SimulatedProxy            = 2,
	ROLE_AutonomousProxy           = 3,
	ROLE_Authority                 = 4
};


// Enum Engine.Actor.EL2ObjectType
enum class EL2ObjectType : uint8_t
{
	EL2_NORMAL                     = 0,
	EL2_DOOR                       = 1,
	EL2_CHAIR                      = 2,
	EL2_AIRSHIPKEY                 = 3
};


// Enum Engine.Actor.ELodBlendViewType
enum class ELodBlendViewType : uint8_t
{
	ELBT_None                      = 0,
	ELBT_Normal                    = 1,
	ELBT_Downing                   = 2,
	ELBT_Upping                    = 3
};


// Enum Engine.Actor.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_High                        = 1,
	DM_SuperHigh                   = 2
};


// Enum Engine.Actor.EL2EventCmd
enum class EL2EventCmd : uint8_t
{
	LEC_None                       = 0,
	LEC_Show                       = 1,
	LEC_Play                       = 2
};


// Enum Engine.Actor.EFilterState
enum class EFilterState : uint8_t
{
	FS_Maybe                       = 0,
	FS_Yes                         = 1,
	FS_No                          = 2
};


// Enum Engine.BitmapMaterial.ETexClampMode
enum class ETexClampMode : uint8_t
{
	TC_Wrap                        = 0,
	TC_Clamp                       = 1
};


// Enum Engine.BitmapMaterial.ETextureFormat
enum class ETextureFormat : uint8_t
{
	TEXF_P8                        = 0,
	TEXF_RGBA7                     = 1,
	TEXF_RGB16                     = 2,
	TEXF_DXT1                      = 3,
	TEXF_RGB8                      = 4,
	TEXF_RGBA8                     = 5,
	TEXF_NODATA                    = 6,
	TEXF_DXT3                      = 7,
	TEXF_DXT5                      = 8,
	TEXF_L8                        = 9,
	TEXF_G16                       = 10,
	TEXF_RRRGGGBBB                 = 11
};


// Enum Engine.Texture.ELODSet
enum class ELODSet : uint8_t
{
	LODSET_None                    = 0,
	LODSET_World                   = 1,
	LODSET_PlayerSkin              = 2,
	LODSET_WeaponSkin              = 3,
	LODSET_Terrain                 = 4,
	LODSET_Interface               = 5,
	LODSET_RenderMap               = 6,
	LODSET_Lightmap                = 7
};


// Enum Engine.Texture.EEnvMapTransformType
enum class EEnvMapTransformType : uint8_t
{
	EMTT_ViewSpace                 = 0,
	EMTT_WorldSpace                = 1,
	EMTT_LightSpace                = 2
};


// Enum Engine.LevelInfo.ENetMode
enum class ENetMode : uint8_t
{
	NM_Standalone                  = 0,
	NM_DedicatedServer             = 1,
	NM_ListenServer                = 2,
	NM_Client                      = 3
};


// Enum Engine.LevelInfo.ELevelAction
enum class ELevelAction : uint8_t
{
	LEVACT_None                    = 0,
	LEVACT_Loading                 = 1,
	LEVACT_Saving                  = 2,
	LEVACT_Connecting              = 3,
	LEVACT_Precaching              = 4
};


// Enum Engine.LevelInfo.EPhysicsDetailLevel
enum class EPhysicsDetailLevel : uint8_t
{
	PDL_Low                        = 0,
	PDL_Medium                     = 1,
	PDL_High                       = 2
};


// Enum Engine.Controller.PStopType
enum class EPStopType : uint8_t
{
	STP_SIT                        = 0,
	STP_STAND                      = 1,
	STP_FAKE_DEAD                  = 2,
	STP_FAKE_DEAD_STAND            = 3,
	STP_CHAIR_SIT                  = 4
};


// Enum Engine.Controller.PMoveType
enum class EPMoveType : uint8_t
{
	PMT_SLOW                       = 0,
	PMT_FAST                       = 1
};


// Enum Engine.Brush.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4
};


// Enum Engine.Pawn.ESamePoseStat
enum class ESamePoseStat : uint8_t
{
	SPS_NONE                       = 0,
	SPS_ONCE                       = 1,
	SPS_TWICE                      = 2
};


// Enum Engine.Pawn.FishingType
enum class EFishingType : uint8_t
{
	FST_NONE                       = 0,
	FST_WAIT                       = 1,
	FST_BATTLE                     = 2
};


// Enum Engine.Pawn.FlyType
enum class EFlyType : uint8_t
{
	FLY_NONE                       = 0,
	FLY_BIRD                       = 1,
	FLY_FLOATING_A                 = 2,
	FLY_FLOATING_B                 = 3
};


// Enum Engine.Pawn.RideType
enum class ERideType : uint8_t
{
	RD_NONE                        = 0,
	RD_STRIDER                     = 1,
	RD_WYVERN                      = 2,
	RD_WOLF                        = 3,
	RD_TRANSFORM_HORSE             = 4,
	RD_TRANSFORM_LION              = 5,
	RD_TRANSFORM_SLEDGE            = 6
};


// Enum Engine.Pawn.WeaponType
enum class EWeaponType : uint8_t
{
	WT_HAND                        = 0,
	WT_1HS                         = 1,
	WT_2HS                         = 2,
	WT_DUAL                        = 3,
	WT_POLE                        = 4,
	WT_BOW                         = 5,
	WT_THROW                       = 6,
	WT_DUALFIST                    = 7,
	WT_CROSSBOW                    = 8,
	WT_RAPIER                      = 9,
	WT_DUALDAGGER                  = 10
};


// Enum Engine.Pawn.EUpdateMovementAnimType
enum class EUpdateMovementAnimType : uint8_t
{
	UM_NONE                        = 0,
	UM_ONCE                        = 1,
	UM_FORCE                       = 2
};


// Enum Engine.Pawn.NActionList
enum class ENActionList : uint8_t
{
	NACT_NONE                      = 0,
	NACT_MELEEATTACK               = 1,
	NACT_RANGEDATTACK              = 2,
	NACT_PICITEM                   = 3,
	NACT_CHANGEITEM                = 4,
	NACT_SKILLUSE                  = 5,
	NACT_SKILLINPUTWAIT            = 6,
	NACT_THROWATTACK               = 7,
	NACT_SHOTATTACK                = 8,
	NACT_PRIVATESTORE              = 9,
	NACT_OBSERVING                 = 10
};


// Enum Engine.GameReplicationInfo.ECarriedObjectState
enum class ECarriedObjectState : uint8_t
{
	COS_Home                       = 0,
	COS_HeldFriendly               = 1,
	COS_HeldEnemy                  = 2,
	COS_Down                       = 3
};


// Enum Engine.TerrainInfo.ESortOrder
enum class ESortOrder : uint8_t
{
	SORT_NoSort                    = 0,
	SORT_BackToFront               = 1,
	SORT_FrontToBack               = 2
};


// Enum Engine.TerrainInfo.ETexMapAxis
enum class ETexMapAxis : uint8_t
{
	TEXMAPAXIS_XY                  = 0,
	TEXMAPAXIS_XZ                  = 1,
	TEXMAPAXIS_YZ                  = 2
};


// Enum Engine.Mover.EBumpType
enum class EBumpType : uint8_t
{
	BT_PlayerBump                  = 0,
	BT_PawnBump                    = 1,
	BT_AnyBump                     = 2
};


// Enum Engine.Mover.EMoverGlideType
enum class EMoverGlideType : uint8_t
{
	MV_MoveByTime                  = 0,
	MV_GlideByTime                 = 1
};


// Enum Engine.Mover.EMoverEncroachType
enum class EMoverEncroachType : uint8_t
{
	ME_StopWhenEncroach            = 0,
	ME_ReturnWhenEncroach          = 1,
	ME_CrushWhenEncroach           = 2,
	ME_IgnoreWhenEncroach          = 3
};


// Enum Engine.Trigger.ETriggerType
enum class ETriggerType : uint8_t
{
	TT_PlayerProximity             = 0,
	TT_PawnProximity               = 1,
	TT_ClassProximity              = 2,
	TT_AnyProximity                = 3,
	TT_Shoot                       = 4,
	TT_HumanPlayerProximity        = 5
};


// Enum Engine.L2Float.TagState
enum class ETagState : uint8_t
{
	L2TAG_NONE                     = 0,
	L2TAG_WAIT                     = 1,
	L2TAG_BATTLE                   = 2
};


// Enum Engine.ViewportWindowController.ECALCSTEP
enum class ECALCSTEP : uint8_t
{
	STEP_TARGET_PLAYER             = 0,
	STEP_MOVE_BACK                 = 1,
	STEP_ROTATE_FLOAT              = 2,
	STEP_TARGET_FLOAT              = 3,
	STEP_MOVE_FLOAT                = 4
};


// Enum Engine.Projector.EProjectorBlending
enum class EProjectorBlending : uint8_t
{
	PB_None                        = 0,
	PB_Modulate                    = 1,
	PB_AlphaBlend                  = 2,
	PB_Add                         = 3
};


// Enum Engine.NCubics.ECubicMovementType
enum class ECubicMovementType : uint8_t
{
	ECMT_FOLLOW                    = 0,
	ECMT_FLOAT                     = 1,
	ECMT_SKILLUSE                  = 2,
	ECMT_BUFF                      = 3,
	ECMT_FLOATSTART                = 4,
	ECMT_ONVEHICLE                 = 5
};


// Enum Engine.NCubics.ESummonCubicType
enum class ESummonCubicType : uint8_t
{
	CUBIC_DO_NOT_EXIST             = 0,
	CUBIC_DD                       = 1,
	CUBIC_DRAIN                    = 2,
	CUBIC_HEAL                     = 3,
	CUBIC_POISON                   = 4,
	CUBIC_DEBUF                    = 5,
	CUBIC_PARALYZE                 = 6,
	CUBIC_WATER_DOT                = 7,
	CUBIC_SHOCK                    = 8,
	CUBIC_ATTRACT                  = 9,
	CUBIC_TEMPLEK_SMART            = 10,
	CUBIC_SHILLIENK_SMART          = 11,
	CUBIC_WARLOCK_SMART            = 12,
	CUBIC_ELEMENTALS_SMART         = 13,
	CUBIC_PHANTOMS_SMART           = 14
};


// Enum Engine.NAgathion.EAgathionMovementType
enum class EAgathionMovementType : uint8_t
{
	EAMT_FOLLOW                    = 0,
	EAMT_FLOAT                     = 1,
	EAMT_ONVEHICLE                 = 2
};


// Enum Engine.L2EffectEmitter.AttachMethod
enum class EAttachMethod : uint8_t
{
	AM_None                        = 0,
	AM_Location                    = 1,
	AM_RH                          = 2,
	AM_LH                          = 3,
	AM_RA                          = 4,
	AM_LA                          = 5,
	AM_Wing                        = 6,
	AM_BoneSpecified               = 7,
	AM_AliasSpecified              = 8,
	AM_Trail                       = 9
};


// Enum Engine.L2EffectEmitter.EGPawnLightType
enum class EGPawnLightType : uint8_t
{
	EPLT_DAMAGE                    = 0,
	EPLT_ABNORMAL                  = 1,
	EPLT_SKILL                     = 2
};


// Enum Engine.Light.ELightType
enum class ELightType : uint8_t
{
	LT_None                        = 0,
	LT_Steady                      = 1,
	LT_Pulse                       = 2,
	LT_Blink                       = 3,
	LT_Flicker                     = 4,
	LT_Strobe                      = 5,
	LT_BackdropLight               = 6,
	LT_SubtlePulse                 = 7,
	LT_TexturePaletteOnce          = 8,
	LT_TexturePaletteLoop          = 9,
	LT_FadeOut                     = 10,
	LT_Fade                        = 11
};


// Enum Engine.Light.ELightEffect
enum class ELightEffect : uint8_t
{
	LE_None                        = 0,
	LE_TorchWaver                  = 1,
	LE_FireWaver                   = 2,
	LE_WateryShimmer               = 3,
	LE_Searchlight                 = 4,
	LE_SlowWave                    = 5,
	LE_FastWave                    = 6,
	LE_CloudCast                   = 7,
	LE_StaticSpot                  = 8,
	LE_Shock                       = 9,
	LE_Disco                       = 10,
	LE_Warp                        = 11,
	LE_Spotlight                   = 12,
	LE_NonIncidence                = 13,
	LE_Shell                       = 14,
	LE_OmniBumpMap                 = 15,
	LE_Interference                = 16,
	LE_Cylinder                    = 17,
	LE_Rotor                       = 18,
	LE_Sunlight                    = 19,
	LE_QuadraticNonIncidence       = 20
};


// Enum Engine.ParticleEmitter.EParticleCoordinateSystem
enum class EParticleCoordinateSystem : uint8_t
{
	PTCS_Independent               = 0,
	PTCS_Relative                  = 1,
	PTCS_Absolute                  = 2,
	PTCS_RelativeRotation          = 3,
	PTCS_Spray                     = 4
};


// Enum Engine.L2EffectEmitter.EtcEffectType
enum class EtcEffectType : uint8_t
{
	EET_None                       = 0,
	EET_FireCracker                = 1,
	EET_SoulShot                   = 2,
	EET_SpiritShot                 = 3,
	EET_Cubic                      = 4,
	EET_SoundCrystal               = 5
};


// Enum Engine.L2EffectEmitter.EtcEffectParam
enum class EtcEffectParam : uint8_t
{
	EEP_None                       = 0,
	EEP_FireCrackerSmall           = 1,
	EEP_FireCrackerMiddle          = 2,
	EEP_FireCrackerLarge           = 3,
	EEP_SoulGradeNone              = 4,
	EEP_SoulGradeD                 = 5,
	EEP_SoulGradeC                 = 6,
	EEP_SoulGradeB                 = 7,
	EEP_SoulGradeA                 = 8,
	EEP_SoulGradeS                 = 9,
	EEP_SpiritGradeNone            = 10,
	EEP_SpiritGradeD               = 11,
	EEP_SpiritGradeC               = 12,
	EEP_SpiritGradeB               = 13,
	EEP_SpiritGradeA               = 14,
	EEP_SpiritGradeS               = 15
};


// Enum Engine.MeshComponent.EMeshSimulationType
enum class EMeshSimulationType : uint8_t
{
	EMST_None                      = 0,
	EMST_HAIR                      = 1,
	EMST_CLOTH                     = 2
};


// Enum Engine.MeshComponent.EMeshComponentStatus
enum class EMeshComponentStatus : uint8_t
{
	MCS_None                       = 0,
	MCS_FADEIN                     = 1,
	MCS_FADEOUT                    = 2,
	MCS_READYTOFADEOUT             = 3,
	MCS_CREATED                    = 4,
	MCS_DELETEME                   = 5
};


// Enum Engine.ParticleEmitter.EParticleEffectAxis
enum class EParticleEffectAxis : uint8_t
{
	PTEA_NegativeX                 = 0,
	PTEA_PositiveZ                 = 1
};


// Enum Engine.ParticleEmitter.EParticleParticleChoice
enum class EParticleParticleChoice : uint8_t
{
	PTWC_MaxParticle               = 0,
	PTWC_ParticlePerSecond         = 1
};


// Enum Engine.ParticleEmitter.EParticleStartLocationShape
enum class EParticleStartLocationShape : uint8_t
{
	PTLS_Box                       = 0,
	PTLS_Sphere                    = 1,
	PTLS_Polar                     = 2,
	PTLS_All                       = 3
};


// Enum Engine.ParticleEmitter.EParticleMeshSpawning
enum class EParticleMeshSpawning : uint8_t
{
	PTMS_None                      = 0,
	PTMS_Linear                    = 1,
	PTMS_Random                    = 2
};


// Enum Engine.ParticleEmitter.EParticleRotationSource
enum class EParticleRotationSource : uint8_t
{
	PTRS_None                      = 0,
	PTRS_Actor                     = 1,
	PTRS_Offset                    = 2,
	PTRS_Normal                    = 3
};


// Enum Engine.ParticleEmitter.ESkelLocationUpdate
enum class ESkelLocationUpdate : uint8_t
{
	PTSU_None                      = 0,
	PTSU_SpawnOffset               = 1,
	PTSU_Location                  = 2
};


// Enum Engine.ParticleEmitter.EParticleCollisionSound
enum class EParticleCollisionSound : uint8_t
{
	PTSC_None                      = 0,
	PTSC_LinearGlobal              = 1,
	PTSC_LinearLocal               = 2,
	PTSC_Random                    = 3
};


// Enum Engine.ParticleEmitter.EParticleDrawStyle
enum class EParticleDrawStyle : uint8_t
{
	PTDS_Regular                   = 0,
	PTDS_AlphaBlend                = 1,
	PTDS_Modulated                 = 2,
	PTDS_Translucent               = 3,
	PTDS_AlphaModulate_MightNotFogCorrectly = 4,
	PTDS_Darken                    = 5,
	PTDS_Brighten                  = 6
};


// Enum Engine.ParticleEmitter.EParticleVelocityDirection
enum class EParticleVelocityDirection : uint8_t
{
	PTVD_None                      = 0,
	PTVD_StartPositionAndOwner     = 1,
	PTVD_OwnerAndStartPosition     = 2,
	PTVD_AddRadial                 = 3
};


// Enum Engine.ParticleEmitter.EBlendMode
enum class EBlendMode : uint8_t
{
	BM_MODULATE                    = 0,
	BM_MODULATE2X                  = 1,
	BM_MODULATE4X                  = 2,
	BM_ADD                         = 3,
	BM_ADDSIGNED                   = 4,
	BM_ADDSIGNED2X                 = 5,
	BM_SUBTRACT                    = 6,
	BM_ADDSMOOTH                   = 7,
	BM_BLENDDIFFUSEALPHA           = 8,
	BM_BLENDTEXTUREALPHA           = 9,
	BM_BLENDFACTORALPHA            = 10,
	BM_BLENDTEXTUREALPHAPM         = 11,
	BM_BLENDCURRENTALPHA           = 12,
	BM_PREMODULATE                 = 13,
	BM_MODULATEALPHA_ADDCOLOR      = 14,
	BM_MODULATEINVALPHA_ADDCOLOR   = 15,
	BM_MODULATEINVCOLOR_ADDALPHA   = 16,
	BM_HACK                        = 17
};


// Enum Engine.EmitterLight.EEmitterLightType
enum class EEmitterLightType : uint8_t
{
	EEL_PawnOnly                   = 0,
	EEL_WorldOnly                  = 1,
	EEL_All                        = 2
};


// Enum Engine.TrailEmitter.ETrailShadeType
enum class ETrailShadeType : uint8_t
{
	PTTST_None                     = 0,
	PTTST_RandomStatic             = 1,
	PTTST_RandomDynamic            = 2,
	PTTST_Linear                   = 3,
	PTTST_PointLife                = 4
};


// Enum Engine.TrailEmitter.ETrailLocation
enum class ETrailLocation : uint8_t
{
	PTTL_AttachedToParticle        = 0,
	PTTL_FollowEmitter             = 1
};


// Enum Engine.SpriteEmitter.EParticleDirectionUsage
enum class EParticleDirectionUsage : uint8_t
{
	PTDU_None                      = 0,
	PTDU_Up                        = 1,
	PTDU_Right                     = 2,
	PTDU_Forward                   = 3,
	PTDU_Normal                    = 4,
	PTDU_UpAndNormal               = 5,
	PTDU_RightAndNormal            = 6,
	PTDU_Scale                     = 7
};


// Enum Engine.MatSubAction.ESAStatus
enum class ESAStatus : uint8_t
{
	SASTATUS_Waiting               = 0,
	SASTATUS_Running               = 1,
	SASTATUS_Ending                = 2,
	SASTATUS_Expired               = 3
};


// Enum Engine.AnimNotify_Sound.L2PawnSoundType
enum class EL2PawnSoundType : uint8_t
{
	LPST_GRASS                     = 0,
	LPST_LAND                      = 1,
	LPST_WATER                     = 2,
	LPST_ACTOR                     = 3
};


// Enum Engine.AnimNotify_ViewShake.EViewShakeType
enum class EViewShakeType : uint8_t
{
	VST_DAMAGE                     = 0,
	VST_VIBRATION                  = 1,
	VST_USER                       = 2,
	VST_UP                         = 3,
	VST_DOWN                       = 4,
	VST_UPDOWN                     = 5,
	VST_DOWNUP                     = 6,
	VST_TERRAIN                    = 7,
	VST_ABNORMAL                   = 8
};


// Enum Engine.AnimNotify_BoneScale.L2PartialBoneScalerType
enum class EL2PartialBoneScalerType : uint8_t
{
	LPBST_LINEAR                   = 0,
	LPBST_SIN_SOUT                 = 1,
	LPBST_SIN_FOUT                 = 2,
	LPBST_FIN_SOUT                 = 3
};


// Enum Engine.ActionMoveCamera.EPathStyle
enum class EPathStyle : uint8_t
{
	PATHSTYLE_Linear               = 0,
	PATHSTYLE_Bezier               = 1
};


// Enum Engine.MeshObject.EMeshSectionMethod
enum class EMeshSectionMethod : uint8_t
{
	MSM_SmoothOnly                 = 0,
	MSM_RigidOnly                  = 1,
	MSM_Mixed                      = 2,
	MSM_SinglePiece                = 3,
	MSM_ForcedRigid                = 4
};


// Enum Engine.MeshObject.EImpLightMode
enum class EImpLightMode : uint8_t
{
	ILM_Unlit                      = 0,
	ILM_PseudoShaded               = 1,
	ILM_Uniform                    = 2
};


// Enum Engine.MeshObject.EImpDrawMode
enum class EImpDrawMode : uint8_t
{
	IDM_Normal                     = 0,
	IDM_Fading                     = 1
};


// Enum Engine.MeshObject.EImpSpaceMode
enum class EImpSpaceMode : uint8_t
{
	ISM_Sprite                     = 0,
	ISM_Fixed                      = 1,
	ISM_PivotVertical              = 2,
	ISM_PivotHorizontal            = 3
};


// Enum Engine.SceneManager.EAffect
enum class EAffect : uint8_t
{
	AFFECT_ViewportCamera          = 0,
	AFFECT_Actor                   = 1
};


// Enum Engine.RibbonEmitter.EAccDrop
enum class EAccDrop : uint8_t
{
	ADRP_NONE                      = 0,
	ADRP_BYPOINT                   = 1,
	ADRP_BYTIME                    = 2,
	ADRP_BYTIME_DUAL               = 3
};


// Enum Engine.RibbonEmitter.EGetPointAxis
enum class EGetPointAxis : uint8_t
{
	PAXIS_OwnerX                   = 0,
	PAXIS_OwnerY                   = 1,
	PAXIS_OwnerZ                   = 2,
	PAXIS_BoneNormal               = 3,
	PAXIS_StartBoneDirection       = 4,
	PAXIS_AxisNormal               = 5
};


// Enum Engine.LineagePlayerController.EFixedCameraType
enum class EFixedCameraType : uint8_t
{
	FCT_Pawn                       = 0,
	FCT_VehicleRider               = 1,
	FCT_VehicleController          = 2,
	FCT_FlightTransform            = 3
};


// Enum Engine.MaterialSequence.EMaterialSequenceAction
enum class EMaterialSequenceAction : uint8_t
{
	MSA_ShowMaterial               = 0,
	MSA_FadeToMaterial             = 1
};


// Enum Engine.MaterialSequence.EMaterialSequenceTriggerActon
enum class EMaterialSequenceTriggerActon : uint8_t
{
	MSTA_Ignore                    = 0,
	MSTA_Reset                     = 1,
	MSTA_Pause                     = 2,
	MSTA_Stop                      = 3
};


// Enum Engine.FinalBlend.EFrameBufferBlending
enum class EFrameBufferBlending : uint8_t
{
	FB_Overwrite                   = 0,
	FB_Modulate                    = 1,
	FB_AlphaBlend                  = 2,
	FB_AlphaModulate_MightNotFogCorrectly = 3,
	FB_Translucent                 = 4,
	FB_Darken                      = 5,
	FB_Brighten                    = 6,
	FB_Invisible                   = 7,
	FB_Add                         = 8,
	FB_InWaterBlend                = 9,
	FB_Capture                     = 10,
	FB_OverwriteAlpha              = 11
};


// Enum Engine.TexModifier.ETexCoordCount
enum class ETexCoordCount : uint8_t
{
	TCN_2DCoords                   = 0,
	TCN_3DCoords                   = 1,
	TCN_4DCoords                   = 2
};


// Enum Engine.TexModifier.ETexCoordSrc
enum class ETexCoordSrc : uint8_t
{
	TCS_Stream0                    = 0,
	TCS_Stream1                    = 1,
	TCS_Stream2                    = 2,
	TCS_Stream3                    = 3,
	TCS_Stream4                    = 4,
	TCS_Stream5                    = 5,
	TCS_Stream6                    = 6,
	TCS_Stream7                    = 7,
	TCS_WorldCoords                = 8,
	TCS_CameraCoords               = 9,
	TCS_WorldEnvMapCoords          = 10,
	TCS_CameraEnvMapCoords         = 11,
	TCS_ProjectorCoords            = 12,
	TCS_SphereMap                  = 13,
	TCS_SphereMapModulateOpacity   = 14,
	TCS_NoChange                   = 15
};


// Enum Engine.TexEnvMap.ETexEnvMapType
enum class ETexEnvMapType : uint8_t
{
	EM_WorldSpace                  = 0,
	EM_CameraSpace                 = 1,
	EM_SphereMap                   = 2,
	EM_SphereMapModulateOpacity    = 3
};


// Enum Engine.TexOscillator.ETexOscillationType
enum class ETexOscillationType : uint8_t
{
	OT_Pan                         = 0,
	OT_Stretch                     = 1,
	OT_StretchRepeat               = 2,
	OT_Jitter                      = 3
};


// Enum Engine.TexOscillatorTriggered.ERetriggerAction
enum class ERetriggerAction : uint8_t
{
	RTA_Reverse                    = 0,
	RTA_Reset                      = 1,
	RTA_Ignore                     = 2,
	RTA_Retrigger                  = 3
};


// Enum Engine.TexRotator.ETexRotationType
enum class ETexRotationType : uint8_t
{
	TR_FixedRotation               = 0,
	TR_ConstantlyRotating          = 1,
	TR_OscillatingRotation         = 2
};


// Enum Engine.FadeColor.EColorFadeType
enum class EColorFadeType : uint8_t
{
	FC_Linear                      = 0,
	FC_Sinusoidal                  = 1
};


// Enum Engine.Combiner.EColorOperation
enum class EColorOperation : uint8_t
{
	CO_Use_Color_From_Material1    = 0,
	CO_Use_Color_From_Material2    = 1,
	CO_Multiply                    = 2,
	CO_Add                         = 3,
	CO_Subtract                    = 4,
	CO_AlphaBlend_With_Mask        = 5,
	CO_Add_With_Mask_Modulation    = 6,
	CO_Use_Color_From_Mask         = 7
};


// Enum Engine.Combiner.EAlphaOperation
enum class EAlphaOperation : uint8_t
{
	AO_Use_Mask                    = 0,
	AO_Multiply                    = 1,
	AO_Add                         = 2,
	AO_Use_Alpha_From_Material1    = 3,
	AO_Use_Alpha_From_Material2    = 4
};


// Enum Engine.Shader.EOutputBlending
enum class EOutputBlending : uint8_t
{
	OB_Normal                      = 0,
	OB_Masked                      = 1,
	OB_Modulate                    = 2,
	OB_Translucent                 = 3,
	OB_Invisible                   = 4,
	OB_Brighten                    = 5,
	OB_Darken                      = 6
};


// Enum Engine.L2ColorModifier.EL2TextureOp
enum class EL2TextureOp : uint8_t
{
	P_DISABLE                      = 0,
	P_SELECTARG1                   = 1,
	P_SELECTARG2                   = 2,
	P_MODULATE                     = 3,
	P_MODULATE2X                   = 4,
	P_MODULATE4X                   = 5,
	P_ADD                          = 6,
	P_ADDSIGNED                    = 7,
	P_ADDSIGNED2X                  = 8,
	P_SUBTRACT                     = 9,
	P_ADDSMOOTH                    = 10,
	P_BLENDDIFFUSEALPHA            = 11,
	P_BLENDTEXTUREALPHA            = 12,
	P_BLENDFACTORALPHA             = 13,
	P_BLENDTEXTUREALPHAPM          = 14,
	P_BLENDCURRENTALPHA            = 15,
	P_PREMODULATE                  = 16,
	P_MODULATEALPHA_ADDCOLOR       = 17,
	P_MODULATECOLOR_ADDALPHA       = 18,
	P_MODULATEINVALPHA_ADDCOLOR    = 19,
	P_MODULATEINVCOLOR_ADDALPHA    = 20,
	P_BUMPENVMAP                   = 21,
	P_BUMPENVMAPLUMINANCE          = 22,
	P_DOTPRODUCT3                  = 23,
	P_MULTIPLYADD                  = 24,
	P_BLENDENFORCEALPHA            = 25
};


// Enum Engine.FluidSurfaceInfo.EFluidGridType
enum class EFluidGridType : uint8_t
{
	FGT_Square                     = 0,
	FGT_Hexagonal                  = 1
};


// Enum Engine.BeamEmitter.EBeamEndPointType
enum class EBeamEndPointType : uint8_t
{
	PTEP_Velocity                  = 0,
	PTEP_Distance                  = 1,
	PTEP_Offset                    = 2,
	PTEP_Actor                     = 3,
	PTEP_TraceOffset               = 4,
	PTEP_OffsetAsAbsolute          = 5
};


// Enum Engine.Vehicle.EVehicleType
enum class EVehicleType : uint8_t
{
	VT_NONE                        = 0,
	VT_PASSENGER_SHIP              = 1,
	VT_AIR_SHIP                    = 2
};


// Enum Engine.SuperPointInfo.SuperPointMoveType
enum class ESuperPointMoveType : uint8_t
{
	Follow_Rail                    = 0,
	Move_Random                    = 1
};


// Enum Engine.AmbientSound.ESoundOcclusion
enum class ESoundOcclusion : uint8_t
{
	OCCLUSION_Default              = 0,
	OCCLUSION_None                 = 1,
	OCCLUSION_BSP                  = 2,
	OCCLUSION_StaticMeshes         = 3
};


// Enum Engine.AmbientSound.ASType
enum class EASType : uint8_t
{
	AST_Always                     = 0,
	AST_Day                        = 1,
	AST_Night                      = 2,
	AST_Water                      = 3
};


// Enum Engine.TerritoryInfo.InitalSpawn
enum class EInitalSpawn : uint8_t
{
	All                            = 0,
	random1                        = 1,
	random2                        = 2
};


// Enum Engine.AmbientSoundObject.ASType1
enum class EASType1 : uint8_t
{
	AST1_Always                    = 0,
	AST1_Day                       = 1,
	AST1_Night                     = 2,
	AST1_Water                     = 3
};


// Enum Engine.L2SceneItem.NpcItemType
enum class ENpcItemType : uint8_t
{
	NIT_SPAWN                      = 0,
	NIT_DESPAWN                    = 1,
	NIT_MOVE                       = 2,
	NIT_USE_SKILL                  = 3,
	NIT_PLAY_ANIMATION             = 4,
	NIT_AIRSHIP_SPAWN              = 5,
	NIT_AIRSHIP_MOVE               = 6,
	NIT_ABNORMAL                   = 7,
	NIT_EFFECT_SPAWN               = 8
};


// Enum Engine.L2SceneItem.ScreenItemType
enum class EScreenItemType : uint8_t
{
	SIT_NONE                       = 0,
	SIT_FADE                       = 1,
	SIT_MESSAGE                    = 2
};


// Enum Engine.KHinge.EHingeType
enum class EHingeType : uint8_t
{
	HT_Normal                      = 0,
	HT_Springy                     = 1,
	HT_Motor                       = 2,
	HT_Controlled                  = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// Struct Engine.Actor.KRBVec
// 0x000C
struct FKRBVec
{
	float                                              X;                                                        // 0x0000(0x0004)
	float                                              Y;                                                        // 0x0004(0x0004)
	float                                              Z;                                                        // 0x0008(0x0004)
};

// Struct Engine.Actor.KRigidBodyState
// 0x0034
struct FKRigidBodyState
{
	struct FKRBVec                                     Position;                                                 // 0x0000(0x000C)
	struct FQuat                                       Quaternion;                                               // 0x000C(0x0010)
	struct FKRBVec                                     LinVel;                                                   // 0x001C(0x000C)
	struct FKRBVec                                     AngVel;                                                   // 0x0028(0x000C)
};

// Struct Engine.Actor.ActorRenderDataPtr
// 0x0004
struct FActorRenderDataPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Actor.LightRenderDataPtr
// 0x0004
struct FLightRenderDataPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Actor.PointRegion
// 0x000C
struct AActor_FPointRegion
{
	class AZoneInfo*                                   Zone;                                                     // 0x0000(0x0004)
	int                                                iLeaf;                                                    // 0x0004(0x0004)
	unsigned char                                      ZoneNumber;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// Struct Engine.Actor.L2Event
// 0x0008
struct FL2Event
{
	int                                                EventID;                                                  // 0x0000(0x0004) (Edit)
	TEnumAsByte<EL2EventCmd>                           EventCmd;                                                 // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// Struct Engine.Actor.ProjectorRenderInfoPtr
// 0x0004
struct FProjectorRenderInfoPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Actor.StaticMeshProjectorRenderInfoPtr
// 0x0004
struct FStaticMeshProjectorRenderInfoPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Actor.NMoverPtr
// 0x0004
struct FNMoverPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Actor.AnimRep
// 0x000C
struct FAnimRep
{
	struct FName                                       AnimSequence;                                             // 0x0000(0x0004)
	unsigned long                                      bAnimLoop : 1;                                            // 0x0004(0x0004)
	unsigned char                                      AnimRate;                                                 // 0x0008(0x0001)
	unsigned char                                      AnimFrame;                                                // 0x0009(0x0001)
	unsigned char                                      TweenRate;                                                // 0x000A(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// Struct Engine.Actor.TextureModifyinfo
// 0x0010
struct FTextureModifyinfo
{
	unsigned long                                      bUseModify : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bTwoSide : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bAlphaBlend : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bDummy : 1;                                               // 0x0000(0x0004)
	struct FColor                                      Color;                                                    // 0x0004(0x0004)
	int                                                AlphaOp;                                                  // 0x0008(0x0004)
	int                                                ColorOp;                                                  // 0x000C(0x0004)
};

// Struct Engine.DecorationList.DecorationType
// 0x0024
struct FDecorationType
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (Edit)
	struct FRange                                      Count;                                                    // 0x0004(0x0008) (Edit)
	struct FRange                                      DrawScale;                                                // 0x000C(0x0008) (Edit)
	int                                                bAlign;                                                   // 0x0014(0x0004) (Edit)
	int                                                bRandomPitch;                                             // 0x0018(0x0004) (Edit)
	int                                                bRandomYaw;                                               // 0x001C(0x0004) (Edit)
	int                                                bRandomRoll;                                              // 0x0020(0x0004) (Edit)
};

// Struct Engine.ParticleEmitter.ParticleColorScale
// 0x0008
struct FParticleColorScale
{
	float                                              RelativeTime;                                             // 0x0000(0x0004) (Edit)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (Edit)
};

// Struct Engine.ParticleEmitter.ParticleRevolutionScale
// 0x0010
struct FParticleRevolutionScale
{
	float                                              RelativeTime;                                             // 0x0000(0x0004) (Edit)
	struct FVector                                     RelativeRevolution;                                       // 0x0004(0x000C) (Edit)
};

// Struct Engine.ParticleEmitter.ParticleTimeScale
// 0x0008
struct FParticleTimeScale
{
	float                                              RelativeTime;                                             // 0x0000(0x0004) (Edit)
	float                                              RelativeSize;                                             // 0x0004(0x0004) (Edit)
};

// Struct Engine.ParticleEmitter.ParticleSound
// 0x0028
struct FParticleSound
{
	class USound*                                      Sound;                                                    // 0x0000(0x0004) (Edit)
	struct FRange                                      Radius;                                                   // 0x0004(0x0008) (Edit)
	struct FRange                                      Pitch;                                                    // 0x000C(0x0008) (Edit)
	int                                                Weight;                                                   // 0x0014(0x0004) (Edit)
	struct FRange                                      Volume;                                                   // 0x0018(0x0008) (Edit)
	struct FRange                                      Probability;                                              // 0x0020(0x0008) (Edit)
};

// Struct Engine.ParticleEmitter.ParticleVelocityScale
// 0x0010
struct FParticleVelocityScale
{
	float                                              RelativeTime;                                             // 0x0000(0x0004) (Edit)
	struct FVector                                     RelativeVelocity;                                         // 0x0004(0x000C) (Edit)
};

// Struct Engine.ParticleEmitter.Particle
// 0x00E0
struct FParticle
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     OldLocation;                                              // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C)
	struct FVector                                     StartSize;                                                // 0x0024(0x000C)
	struct FVector                                     SpinsPerSecond;                                           // 0x0030(0x000C)
	struct FVector                                     StartSpin;                                                // 0x003C(0x000C)
	struct FVector                                     RevolutionCenter;                                         // 0x0048(0x000C)
	struct FVector                                     RevolutionsPerSecond;                                     // 0x0054(0x000C)
	struct FVector                                     RevolutionsMultiplier;                                    // 0x0060(0x000C)
	struct FVector                                     Size;                                                     // 0x006C(0x000C)
	struct FVector                                     StartLocation;                                            // 0x0078(0x000C)
	struct FVector                                     ColorMultiplier;                                          // 0x0084(0x000C)
	struct FVector                                     VelocityMultiplier;                                       // 0x0090(0x000C)
	struct FVector                                     OldMeshLocation;                                          // 0x009C(0x000C)
	struct FColor                                      Color;                                                    // 0x00A8(0x0004)
	float                                              Time;                                                     // 0x00AC(0x0004)
	float                                              MaxLifetime;                                              // 0x00B0(0x0004)
	float                                              Mass;                                                     // 0x00B4(0x0004)
	int                                                HitCount;                                                 // 0x00B8(0x0004)
	int                                                flags;                                                    // 0x00BC(0x0004)
	int                                                Subdivision;                                              // 0x00C0(0x0004)
	int                                                BoneIndex;                                                // 0x00C4(0x0004)
	struct FRotator                                    Rotation;                                                 // 0x00C8(0x000C)
	struct FVector                                     Acceleration;                                             // 0x00D4(0x000C)
};

// Struct Engine.TrailEmitter.ParticleTrailData
// 0x001C
struct FParticleTrailData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FColor                                      Color;                                                    // 0x000C(0x0004)
	float                                              Size;                                                     // 0x0010(0x0004)
	int                                                DoubleDummy1;                                             // 0x0014(0x0004)
	int                                                DoubleDummy2;                                             // 0x0018(0x0004)
};

// Struct Engine.TrailEmitter.ParticleTrailInfo
// 0x0020
struct FParticleTrailInfo
{
	int                                                TrailIndex;                                               // 0x0000(0x0004)
	int                                                NumPoints;                                                // 0x0004(0x0004)
	struct FVector                                     LastLocation;                                             // 0x0008(0x000C)
	struct FVector                                     LastEmitterLocation;                                      // 0x0014(0x000C)
};

// Struct Engine.TerrainMaterial.TerrainMaterialLayer
// 0x0048
struct FTerrainMaterialLayer
{
	class UMaterial*                                   Texture;                                                  // 0x0000(0x0004)
	class UBitmapMaterial*                             AlphaWeight;                                              // 0x0004(0x0004)
	struct FMatrix                                     TextureMatrix;                                            // 0x0008(0x0040)
};

// Struct Engine.TerrainInfo.TerrainLayer
// 0x00E8
struct FTerrainLayer
{
	class UMaterial*                                   Texture;                                                  // 0x0000(0x0004) (Edit)
	class UTexture*                                    AlphaMap;                                                 // 0x0004(0x0004) (Edit)
	float                                              UScale;                                                   // 0x0008(0x0004) (Edit)
	float                                              VScale;                                                   // 0x000C(0x0004) (Edit)
	float                                              UPan;                                                     // 0x0010(0x0004) (Edit)
	float                                              VPan;                                                     // 0x0014(0x0004) (Edit)
	TEnumAsByte<ETexMapAxis>                           TextureMapAxis;                                           // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              TextureRotation;                                          // 0x001C(0x0004) (Edit)
	struct FRotator                                    LayerRotation;                                            // 0x0020(0x000C) (Edit)
	struct FMatrix                                     TerrainMatrix;                                            // 0x002C(0x0040)
	float                                              KFriction;                                                // 0x006C(0x0004) (Edit)
	float                                              KRestitution;                                             // 0x0070(0x0004) (Edit)
	class UTexture*                                    LayerWeightMap;                                           // 0x0074(0x0004)
	struct FVector                                     Scale;                                                    // 0x0078(0x000C)
	struct FVector                                     ToWorld[0x4];                                             // 0x0084(0x000C)
	struct FVector                                     ToMaskmap[0x4];                                           // 0x00B4(0x000C)
	unsigned long                                      bUseAlpha : 1;                                            // 0x00E4(0x0004) (Edit)
};

// Struct Engine.TerrainInfo.DecorationLayer
// 0x0060
struct FDecorationLayer
{
	int                                                ShowOnTerrain;                                            // 0x0000(0x0004) (Edit)
	class UTexture*                                    ScaleMap;                                                 // 0x0004(0x0004) (Edit)
	class UTexture*                                    DensityMap;                                               // 0x0008(0x0004) (Edit)
	class UTexture*                                    ColorMap;                                                 // 0x000C(0x0004) (Edit)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0010(0x0004) (Edit)
	struct FRangeVector                                ScaleMultiplier;                                          // 0x0014(0x0018) (Edit)
	struct FRange                                      FadeoutRadius;                                            // 0x002C(0x0008) (Edit)
	struct FRange                                      DensityMultiplier;                                        // 0x0034(0x0008) (Edit)
	int                                                MaxPerQuad;                                               // 0x003C(0x0004) (Edit)
	int                                                Seed;                                                     // 0x0040(0x0004) (Edit)
	int                                                AlignToTerrain;                                           // 0x0044(0x0004) (Edit)
	TEnumAsByte<ESortOrder>                            DrawOrder;                                                // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                ShowOnInvisibleTerrain;                                   // 0x004C(0x0004) (Edit)
	int                                                LitDirectional;                                           // 0x0050(0x0004) (Edit)
	int                                                DisregardTerrainLighting;                                 // 0x0054(0x0004) (Edit)
	int                                                RandomYaw;                                                // 0x0058(0x0004) (Edit)
	int                                                bForceRender;                                             // 0x005C(0x0004) (Edit)
};

// Struct Engine.TerrainInfo.DecoInfo
// 0x0050
struct FDecoInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FVector                                     Scale;                                                    // 0x0018(0x000C)
	struct FVector                                     TempScale;                                                // 0x0024(0x000C)
	struct FColor                                      Color;                                                    // 0x0030(0x0004)
	int                                                Distance;                                                 // 0x0034(0x0004)
	struct FRotator                                    OrigRotation;                                             // 0x0038(0x000C)
	int                                                VertexPos;                                                // 0x0044(0x0004)
	float                                              Speed;                                                    // 0x0048(0x0004)
	float                                              Accel;                                                    // 0x004C(0x0004)
};

// Struct Engine.TerrainInfo.DecoSectorInfo
// 0x0020
struct FDecoSectorInfo
{
	TArray<struct FDecoInfo>                           DecoInfo;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FVector                                     Location;                                                 // 0x000C(0x000C)
	float                                              Radius;                                                   // 0x0018(0x0004)
	int                                                bDecoGenerated;                                           // 0x001C(0x0004)
};

// Struct Engine.TerrainInfo.DecorationLayerData
// 0x000C
struct FDecorationLayerData
{
	TArray<struct FDecoSectorInfo>                     Sectors;                                                  // 0x0000(0x000C) (NeedCtorLink)
};

// Struct Engine.TerrainInfo.NormalPair
// 0x0018
struct FNormalPair
{
	struct FVector                                     Normal1;                                                  // 0x0000(0x000C)
	struct FVector                                     Normal2;                                                  // 0x000C(0x000C)
};

// Struct Engine.TerrainInfo.TerrainIntensityMap
// 0x0010
struct FTerrainIntensityMap
{
	float                                              Time;                                                     // 0x0000(0x0004)
	TArray<unsigned char>                              Intensity;                                                // 0x0004(0x000C) (NeedCtorLink)
};

// Struct Engine.StaticMeshActor.AccessoryType
// 0x0008
struct FAccessoryType
{
	int                                                Depth;                                                    // 0x0000(0x0004) (Edit)
	class UStaticMesh*                                 Mesh;                                                     // 0x0004(0x0004) (Edit)
};

// Struct Engine.MovableStaticMeshActor.L2RotatorTime
// 0x000C
struct FL2RotatorTime
{
	float                                              PitchTime;                                                // 0x0000(0x0004) (Edit, Config)
	float                                              RollTime;                                                 // 0x0004(0x0004) (Edit, Config)
	float                                              YawTime;                                                  // 0x0008(0x0004) (Edit, Config)
};

// Struct Engine.StaticMesh.StaticMeshMaterial
// 0x0014
struct FStaticMeshMaterial
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      EnableCollision : 1;                                      // 0x0004(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	unsigned long                                      EnableCollisionforShadow : 1;                             // 0x000C(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x000C(0x0001)
	unsigned long                                      bNoDynamicShadowCast : 1;                                 // 0x0010(0x0004) (Edit)
};

// Struct Engine.SparkEmitter.ParticleSparkData
// 0x0020
struct FParticleSparkData
{
	float                                              TimeBeforeVisible;                                        // 0x0000(0x0004)
	float                                              TimeBetweenSegments;                                      // 0x0004(0x0004)
	struct FVector                                     StartLocation;                                            // 0x0008(0x000C)
	struct FVector                                     StartVelocity;                                            // 0x0014(0x000C)
};

// Struct Engine.MatObject.Orientation
// 0x0034
struct UMatObject_FOrientation
{
	TEnumAsByte<ECamOrientation>                       CamOrientation;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      LookAt;                                                   // 0x0004(0x0004) (Edit)
	float                                              EaseIntime;                                               // 0x0008(0x0004) (Edit)
	int                                                bReversePitch;                                            // 0x000C(0x0004) (Edit)
	int                                                bReverseYaw;                                              // 0x0010(0x0004) (Edit)
	int                                                bReverseRoll;                                             // 0x0014(0x0004) (Edit)
	int                                                MA;                                                       // 0x0018(0x0004)
	float                                              PctInStart;                                               // 0x001C(0x0004)
	float                                              PctInEnd;                                                 // 0x0020(0x0004)
	float                                              PctInDuration;                                            // 0x0024(0x0004)
	struct FRotator                                    StartingRotation;                                         // 0x0028(0x000C)
};

// Struct Engine.SceneManager.Orientation
// 0x0034
struct ASceneManager_FOrientation
{
	TEnumAsByte<ECamOrientation>                       CamOrientation;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      LookAt;                                                   // 0x0004(0x0004) (Edit)
	float                                              EaseIntime;                                               // 0x0008(0x0004) (Edit)
	int                                                bReversePitch;                                            // 0x000C(0x0004) (Edit)
	int                                                bReverseYaw;                                              // 0x0010(0x0004) (Edit)
	int                                                bReverseRoll;                                             // 0x0014(0x0004) (Edit)
	int                                                MA;                                                       // 0x0018(0x0004)
	float                                              PctInStart;                                               // 0x001C(0x0004)
	float                                              PctInEnd;                                                 // 0x0020(0x0004)
	float                                              PctInDuration;                                            // 0x0024(0x0004)
	struct FRotator                                    StartingRotation;                                         // 0x0028(0x000C)
};

// Struct Engine.SceneManager.Interpolator
// 0x0018
struct FInterpolator
{
	int                                                bDone;                                                    // 0x0000(0x0004) (Edit)
	float                                              _value;                                                   // 0x0004(0x0004) (Edit)
	float                                              _remainingTime;                                           // 0x0008(0x0004) (Edit)
	float                                              _totalTime;                                               // 0x000C(0x0004) (Edit)
	float                                              _speed;                                                   // 0x0010(0x0004) (Edit)
	float                                              _acceleration;                                            // 0x0014(0x0004) (Edit)
};

// Struct Engine.RibbonEmitter.RibbonPoint
// 0x0034
struct FRibbonPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit)
	struct FVector                                     LocationUnder;                                            // 0x000C(0x000C) (Edit)
	struct FVector                                     MovingDirection;                                          // 0x0018(0x000C) (Edit)
	struct FVector                                     MovingDirectionUnder;                                     // 0x0024(0x000C) (Edit)
	float                                              Width;                                                    // 0x0030(0x0004) (Edit)
};

// Struct Engine.Actor.NpcPrivate
// 0x000C
struct FNpcPrivate
{
	struct FName                                       Name;                                                     // 0x0000(0x0004) (Edit)
	struct FName                                       ai;                                                       // 0x0004(0x0004) (Edit)
	float                                              Num;                                                      // 0x0008(0x0004) (Edit)
};

// Struct Engine.Actor.WhenExtinctionCreate
// 0x0018
struct FWhenExtinctionCreate
{
	struct FString                                     respawn;                                                  // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.Actor.WayPoint
// 0x0018
struct FWayPoint
{
	struct FVector                                     point;                                                    // 0x0000(0x000C) (Edit)
	struct FString                                     Delay;                                                    // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.Actor.NMagicInfo
// 0x00B8
struct FNMagicInfo
{
	class UL2SkillEffect*                              EffectInfo;                                               // 0x0000(0x0004)
	int                                                DummyPtr;                                                 // 0x0004(0x0004)
	int                                                MagicID;                                                  // 0x0008(0x0004)
	int                                                LevelID;                                                  // 0x000C(0x0004)
	int                                                AniIndex;                                                 // 0x0010(0x0004)
	int                                                FlexibleAniIndex;                                         // 0x0014(0x0004)
	int                                                StageShot;                                                // 0x0018(0x0004)
	int                                                StagePreshot;                                             // 0x001C(0x0004)
	float                                              SkillHitTime;                                             // 0x0020(0x0004)
	float                                              ShotTime;                                                 // 0x0024(0x0004)
	float                                              TweenTime;                                                // 0x0028(0x0004)
	float                                              ActiveTime;                                               // 0x002C(0x0004)
	class AActor*                                      TargetPawn;                                               // 0x0030(0x0004)
	float                                              MagicSpeed;                                               // 0x0034(0x0004)
	int                                                MagicAniStatus;                                           // 0x0038(0x0004)
	int                                                MagicType;                                                // 0x003C(0x0004)
	unsigned long                                      bTargetExcepted : 1;                                      // 0x0040(0x0004)
	int                                                nSlice;                                                   // 0x0044(0x0004)
	struct FRotator                                    NormalRotationRate;                                       // 0x0048(0x000C)
	struct FRotator                                    SkillRotationRate;                                        // 0x0054(0x000C)
	TArray<class AActor*>                              AssociatedActor;                                          // 0x0060(0x000C) (Transient, NeedCtorLink)
	TArray<class AActor*>                              EffectActor;                                              // 0x006C(0x000C) (Transient, NeedCtorLink)
	TArray<int>                                        EffectID;                                                 // 0x0078(0x000C) (Transient, NeedCtorLink)
	TArray<struct FVector>                             LocLIst;                                                  // 0x0084(0x000C) (Transient, NeedCtorLink)
	struct FName                                       Anis[0x3];                                                // 0x0090(0x0004)
	float                                              AniDues[0x3];                                             // 0x009C(0x0004)
	struct FName                                       LastShotName;                                             // 0x00A8(0x0004)
	int                                                PendingNotify;                                            // 0x00AC(0x0004)
	int                                                PendingPreshotNotify;                                     // 0x00B0(0x0004)
	int                                                PendingChannelingNotify;                                  // 0x00B4(0x0004)
};

// Struct Engine.Pawn.NSilhouetteParam
// 0x0004
struct FNSilhouetteParam
{
	unsigned char                                      type;                                                     // 0x0000(0x0001)
	unsigned char                                      R;                                                        // 0x0001(0x0001)
	unsigned char                                      G;                                                        // 0x0002(0x0001)
	unsigned char                                      B;                                                        // 0x0003(0x0001)
};

// Struct Engine.Pawn.NAttackActionParam
// 0x0010
struct FNAttackActionParam
{
	int                                                Damage;                                                   // 0x0000(0x0004)
	unsigned long                                      bMiss : 1;                                                // 0x0004(0x0004)
	unsigned long                                      bCritical : 1;                                            // 0x0004(0x0004)
	unsigned long                                      bShieldDefense : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bSpirit : 1;                                              // 0x0004(0x0004)
	int                                                SoulshotGrade;                                            // 0x0008(0x0004)
	class AActor*                                      ActionTarget;                                             // 0x000C(0x0004)
};

// Struct Engine.Pawn.NPrimeActionParam
// 0x002C
struct FNPrimeActionParam
{
	int                                                ActionID;                                                 // 0x0000(0x0004)
	int                                                Damage;                                                   // 0x0004(0x0004)
	unsigned long                                      bMiss : 1;                                                // 0x0008(0x0004)
	unsigned long                                      bCritical : 1;                                            // 0x0008(0x0004)
	unsigned long                                      bShieldDefense : 1;                                       // 0x0008(0x0004)
	unsigned long                                      bSpirit : 1;                                              // 0x0008(0x0004)
	int                                                SoulshotGrade;                                            // 0x000C(0x0004)
	class AActor*                                      ActionTarget;                                             // 0x0010(0x0004)
	int                                                MaxAtkShotNum;                                            // 0x0014(0x0004)
	int                                                CurAtkShotNum;                                            // 0x0018(0x0004)
	int                                                SkillID;                                                  // 0x001C(0x0004)
	TArray<struct FNAttackActionParam>                 NAssociatedAttackParam;                                   // 0x0020(0x000C) (NeedCtorLink)
};

// Struct Engine.Pawn.NActionPtr
// 0x0004
struct APawn_FNActionPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NAtkConsumeItemParam
// 0x0008
struct FNAtkConsumeItemParam
{
	int                                                RangedAttackItemID;                                       // 0x0000(0x0004)
	int                                                RangedAttackConsumeItemID;                                // 0x0004(0x0004)
};

// Struct Engine.Pawn.NPawnLightPtr
// 0x0004
struct FNPawnLightPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NAbnormalStatPtr
// 0x0004
struct FNAbnormalStatPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NBoneScalerStatPtr
// 0x0004
struct FNBoneScalerStatPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NAppendixEffectPtr
// 0x0004
struct FNAppendixEffectPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NWeaponEffectPtr
// 0x0004
struct FNWeaponEffectPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NCursedWeaponEffectPtr
// 0x0004
struct FNCursedWeaponEffectPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Pawn.NCollisionInfo
// 0x0014
struct FNCollisionInfo
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C)
	float                                              CollisionRadius;                                          // 0x000C(0x0004)
	float                                              CollisionHeight;                                          // 0x0010(0x0004)
};

// Struct Engine.Pawn.NIllusionParam
// 0x0028
struct FNIllusionParam
{
	float                                              RemainTime;                                               // 0x0000(0x0004)
	float                                              SpawnDelay;                                               // 0x0004(0x0004)
	struct FVector                                     SpawnLocation;                                            // 0x0008(0x000C)
	float                                              AnimFrame;                                                // 0x0014(0x0004)
	struct FName                                       SeqName;                                                  // 0x0018(0x0004)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C)
};

// Struct Engine.Pawn.NIllusionPawnParam
// 0x0008
struct FNIllusionPawnParam
{
	class APawn*                                       IllusionPawn;                                             // 0x0000(0x0004)
	float                                              RemainTime;                                               // 0x0004(0x0004)
};

// Struct Engine.ParticleMaterial.ParticleProjectorInfo
// 0x004C
struct FParticleProjectorInfo
{
	class UBitmapMaterial*                             BitmapMaterial;                                           // 0x0000(0x0004)
	struct FMatrix                                     Matrix;                                                   // 0x0004(0x0040)
	int                                                Projected;                                                // 0x0044(0x0004)
	int                                                BlendMode;                                                // 0x0048(0x0004)
};

// Struct Engine.MeshContainer.MeshComponentArrayPtr
// 0x0004
struct FMeshComponentArrayPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.MeshComponent.MeshComponentData
// 0x0048
struct FMeshComponentData
{
	struct FName                                       MeshName;                                                 // 0x0000(0x0004)
	TArray<struct FName>                               TexNames;                                                 // 0x0004(0x000C) (NeedCtorLink)
	int                                                BodyPart;                                                 // 0x0010(0x0004)
	unsigned long                                      bAnimOwner : 1;                                           // 0x0014(0x0004)
	int                                                SimulationType;                                           // 0x0018(0x0004)
	int                                                AttachType;                                               // 0x001C(0x0004)
	struct FName                                       AttachBoneName;                                           // 0x0020(0x0004)
	struct FVector                                     AttachOrigin;                                             // 0x0024(0x000C)
	struct FRotator                                    AttachRotOrigin;                                          // 0x0030(0x000C)
	struct FVector                                     RenderScale;                                              // 0x003C(0x000C)
};

// Struct Engine.MaterialSequence.MaterialSequenceItem
// 0x000C
struct FMaterialSequenceItem
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0004) (Edit, EditInline, EditInlineUse)
	float                                              Time;                                                     // 0x0004(0x0004) (Edit)
	TEnumAsByte<EMaterialSequenceAction>               Action;                                                   // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// Struct Engine.Input.Alias
// 0x0010
struct FAlias
{
	struct FName                                       Alias;                                                    // 0x0000(0x0004) (Config)
	struct FString                                     Command;                                                  // 0x0004(0x000C) (Config, NeedCtorLink)
};

// Struct Engine.Engine.FWind
// 0x003C
struct FFWind
{
	float                                              LifeTime;                                                 // 0x0000(0x0004)
	struct FBox                                        Area;                                                     // 0x0004(0x001C)
	struct FVector                                     Direction;                                                // 0x0020(0x000C)
	float                                              Force;                                                    // 0x002C(0x0004)
	float                                              Speed;                                                    // 0x0030(0x0004)
	float                                              AccelSpeed;                                               // 0x0034(0x0004)
	float                                              DeltaSeconds;                                             // 0x0038(0x0004)
};

// Struct Engine.GameEngine.URL
// 0x0044
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Host;                                                     // 0x000C(0x000C) (NeedCtorLink)
	int                                                Port;                                                     // 0x0018(0x0004)
	struct FString                                     Map;                                                      // 0x001C(0x000C) (NeedCtorLink)
	TArray<struct FString>                             Op;                                                       // 0x0028(0x000C) (NeedCtorLink)
	struct FString                                     Portal;                                                   // 0x0034(0x000C) (NeedCtorLink)
	int                                                Valid;                                                    // 0x0040(0x0004)
};

// Struct Engine.BeamEmitter.ParticleBeamEndPoint
// 0x0024
struct FParticleBeamEndPoint
{
	struct FName                                       ActorTag;                                                 // 0x0000(0x0004) (Edit)
	struct FRangeVector                                offset;                                                   // 0x0004(0x0018) (Edit)
	float                                              Weight;                                                   // 0x001C(0x0004) (Edit)
	int                                                CreatureID;                                               // 0x0020(0x0004) (Edit)
};

// Struct Engine.BeamEmitter.ParticleBeamScale
// 0x0010
struct FParticleBeamScale
{
	struct FVector                                     FrequencyScale;                                           // 0x0000(0x000C) (Edit)
	float                                              RelativeLength;                                           // 0x000C(0x0004) (Edit)
};

// Struct Engine.BeamEmitter.ParticleBeamData
// 0x0010
struct FParticleBeamData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	float                                              t;                                                        // 0x000C(0x0004)
};

// Struct Engine.Vehicle.VehiclePartInfo
// 0x0020
struct FVehiclePartInfo
{
	class AActor*                                      PartActor;                                                // 0x0000(0x0004)
	int                                                PartID;                                                   // 0x0004(0x0004)
	int                                                MeshID;                                                   // 0x0008(0x0004)
	int                                                ServerID;                                                 // 0x000C(0x0004)
	struct FVector                                     offset;                                                   // 0x0010(0x000C)
	unsigned long                                      bAnimation : 1;                                           // 0x001C(0x0004)
};

// Struct Engine.ServerPrimitive.ServerPointStruct
// 0x0028
struct FServerPointStruct
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     point;                                                    // 0x000C(0x000C) (Edit)
	struct FPlane                                      Color;                                                    // 0x0018(0x0010) (Edit)
};

// Struct Engine.ServerPrimitive.ServerLineStruct
// 0x0034
struct FServerLineStruct
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     Start;                                                    // 0x000C(0x000C) (Edit)
	struct FVector                                     End;                                                      // 0x0018(0x000C) (Edit)
	struct FPlane                                      Color;                                                    // 0x0024(0x0010) (Edit)
};

// Struct Engine.L2Dice.NActionPtr
// 0x0004
struct AL2Dice_FNActionPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.NpcPosInfo.NpcPos
// 0x0014
struct FNpcPos
{
	struct FVector                                     Delta;                                                    // 0x0000(0x000C) (Edit)
	int                                                Yaw;                                                      // 0x000C(0x0004) (Edit)
	int                                                Percent;                                                  // 0x0010(0x0004) (Edit)
};

// Struct Engine.TerritoryInfo.AnywhereNpc
// 0x0058
struct FAnywhereNpc
{
	struct FName                                       NpcName;                                                  // 0x0000(0x0004) (Edit)
	int                                                total;                                                    // 0x0004(0x0004) (Edit)
	struct FString                                     respawn;                                                  // 0x0008(0x000C) (Edit, NeedCtorLink)
	struct FString                                     nickname;                                                 // 0x0014(0x000C) (Edit, NeedCtorLink)
	struct FName                                       ai;                                                       // 0x0020(0x0004) (Edit)
	TArray<struct FNpcPrivate>                         Privates;                                                 // 0x0024(0x000C) (Edit, NeedCtorLink)
	struct FWhenExtinctionCreate                       when_extinction_create;                                   // 0x0030(0x0018) (Edit, NeedCtorLink)
	unsigned long                                      bWayPointsShow : 1;                                       // 0x0048(0x0004) (Edit)
	TArray<struct FWayPoint>                           WayPoints;                                                // 0x004C(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.TerritoryInfo.AnywhereNpcMaker
// 0x0018
struct FAnywhereNpcMaker
{
	unsigned long                                      bGroup : 1;                                               // 0x0000(0x0004) (Edit)
	TEnumAsByte<EInitalSpawn>                          inital_spawn;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                maximum_npc;                                              // 0x0008(0x0004) (Edit)
	TArray<struct FAnywhereNpc>                        Npc;                                                      // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.LineagePlayerController.NViewShakePtr
// 0x0004
struct FNViewShakePtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.LineagePlayerController.NViewShakeMgrPtr
// 0x0004
struct FNViewShakeMgrPtr
{
	int                                                Ptr;                                                      // 0x0000(0x0004)
};

// Struct Engine.Info.KeyValuePair
// 0x0018
struct FKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.Info.PlayerResponseLine
// 0x002C
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                                // 0x0000(0x0004) (Edit)
	int                                                PlayerID;                                                 // 0x0004(0x0004) (Edit)
	struct FString                                     PlayerName;                                               // 0x0008(0x000C) (Edit, NeedCtorLink)
	int                                                Ping;                                                     // 0x0014(0x0004) (Edit)
	int                                                Score;                                                    // 0x0018(0x0004) (Edit)
	int                                                StatsID;                                                  // 0x001C(0x0004) (Edit)
	TArray<struct FKeyValuePair>                       PlayerInfo;                                               // 0x0020(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.Info.ServerResponseLine
// 0x0060
struct FServerResponseLine
{
	int                                                ServerID;                                                 // 0x0000(0x0004) (Edit)
	struct FString                                     IP;                                                       // 0x0004(0x000C) (Edit, NeedCtorLink)
	int                                                Port;                                                     // 0x0010(0x0004) (Edit)
	int                                                QueryPort;                                                // 0x0014(0x0004) (Edit)
	struct FString                                     ServerName;                                               // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FString                                     MapName;                                                  // 0x0024(0x000C) (Edit, NeedCtorLink)
	struct FString                                     GameType;                                                 // 0x0030(0x000C) (Edit, NeedCtorLink)
	int                                                CurrentPlayers;                                           // 0x003C(0x0004) (Edit)
	int                                                MaxPlayers;                                               // 0x0040(0x0004) (Edit)
	int                                                Ping;                                                     // 0x0044(0x0004) (Edit)
	TArray<struct FKeyValuePair>                       ServerInfo;                                               // 0x0048(0x000C) (Edit, NeedCtorLink)
	TArray<struct FPlayerResponseLine>                 PlayerInfo;                                               // 0x0054(0x000C) (Edit, NeedCtorLink)
};

// Struct Engine.HUD.HUDLocalizedMessage
// 0x0040
struct FHUDLocalizedMessage
{
	class UClass*                                      Message;                                                  // 0x0000(0x0004)
	int                                                Switch;                                                   // 0x0004(0x0004)
	class APlayerReplicationInfo*                      RelatedPRI;                                               // 0x0008(0x0004)
	class UObject*                                     OptionalObject;                                           // 0x000C(0x0004)
	float                                              EndOfLife;                                                // 0x0010(0x0004)
	float                                              LifeTime;                                                 // 0x0014(0x0004)
	unsigned long                                      bDrawing : 1;                                             // 0x0018(0x0004)
	int                                                numLines;                                                 // 0x001C(0x0004)
	struct FString                                     StringMessage;                                            // 0x0020(0x000C) (NeedCtorLink)
	struct FColor                                      DrawColor;                                                // 0x002C(0x0004)
	class UFont*                                       StringFont;                                               // 0x0030(0x0004)
	float                                              XL;                                                       // 0x0034(0x0004)
	float                                              YL;                                                       // 0x0038(0x0004)
	float                                              YPos;                                                     // 0x003C(0x0004)
};

// Struct Engine.HUD.ConsoleMessage
// 0x0018
struct FConsoleMessage
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FColor                                      TextColor;                                                // 0x000C(0x0004)
	float                                              MessageLife;                                              // 0x0010(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0014(0x0004)
};

// Struct Engine.GameInfo.VoiceChatterInfo
// 0x000C
struct FVoiceChatterInfo
{
	class AController*                                 Controller;                                               // 0x0000(0x0004)
	int                                                IpAddr;                                                   // 0x0004(0x0004)
	int                                                Handle;                                                   // 0x0008(0x0004)
};

// Struct Engine.LevelObject.PointRegion
// 0x000C
struct ULevelObject_FPointRegion
{
	class AZoneInfo*                                   Zone;                                                     // 0x0000(0x0004)
	int                                                iLeaf;                                                    // 0x0004(0x0004)
	unsigned char                                      ZoneNumber;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// Struct Engine.L2NTimeLight.NTimeHSV
// 0x000C
struct FNTimeHSV
{
	int                                                Time;                                                     // 0x0000(0x0004)
	unsigned char                                      Hue;                                                      // 0x0004(0x0001)
	unsigned char                                      Sat;                                                      // 0x0005(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              Bri;                                                      // 0x0008(0x0004)
};

// Struct Engine.L2NTimeLight.NTimeColor
// 0x0008
struct FNTimeColor
{
	int                                                Time;                                                     // 0x0000(0x0004)
	unsigned char                                      R;                                                        // 0x0004(0x0001)
	unsigned char                                      G;                                                        // 0x0005(0x0001)
	unsigned char                                      B;                                                        // 0x0006(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// Struct Engine.L2NTimeLight.NTimeScale
// 0x0008
struct FNTimeScale
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              Scale;                                                    // 0x0004(0x0004)
};

// Struct Engine.L2EffectEmitter.EffectPawnLightParam
// 0x0020
struct FEffectPawnLightParam
{
	TEnumAsByte<EGPawnLightType>                       PawnLightType;                                            // 0x0000(0x0001) (Edit)
	TEnumAsByte<ELightType>                            LightType;                                                // 0x0001(0x0001) (Edit)
	TEnumAsByte<ELightEffect>                          LightEffectType;                                          // 0x0002(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FPlane                                      LightColor;                                               // 0x0004(0x0010) (Edit)
	float                                              LightLifeTime;                                            // 0x0014(0x0004) (Edit)
	float                                              LightRadius;                                              // 0x0018(0x0004) (Edit)
	TEnumAsByte<EParticleCoordinateSystem>             LightCoordSystem;                                         // 0x001C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// Struct Engine.L2NMover.NMoverTarget
// 0x0018
struct FNMoverTarget
{
	int                                                bTarget;                                                  // 0x0000(0x0004)
	int                                                bOwnedTarget;                                             // 0x0004(0x0004)
	struct FVector                                     Loc;                                                      // 0x0008(0x000C)
	class AActor*                                      Target;                                                   // 0x0014(0x0004)
};

// Struct Engine.L2SceneItem.CameraItem
// 0x0030
struct FCameraItem
{
	unsigned long                                      UseCamera : 1;                                            // 0x0000(0x0004)
	int                                                TargetIndex;                                              // 0x0004(0x0004)
	int                                                dist;                                                     // 0x0008(0x0004)
	int                                                Yaw;                                                      // 0x000C(0x0004)
	int                                                Pitch;                                                    // 0x0010(0x0004)
	int                                                Time;                                                     // 0x0014(0x0004)
	int                                                Duration;                                                 // 0x0018(0x0004)
	int                                                RelYaw;                                                   // 0x001C(0x0004)
	int                                                RelPitch;                                                 // 0x0020(0x0004)
	int                                                RelRoll;                                                  // 0x0024(0x0004)
	unsigned long                                      IsWide : 1;                                               // 0x0028(0x0004)
	unsigned long                                      IsRelAngle : 1;                                           // 0x0028(0x0004)
	unsigned long                                      IsImmTarget : 1;                                          // 0x0028(0x0004)
	float                                              CameraFov;                                                // 0x002C(0x0004)
};

// Struct Engine.L2SceneItem.ScreenItem
// 0x0034
struct FScreenItem
{
	TEnumAsByte<EScreenItemType>                       ScreenType;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FadeOutDuration;                                          // 0x0004(0x0004)
	float                                              FadeInDuration;                                           // 0x0008(0x0004)
	float                                              BlackOutDuration;                                         // 0x000C(0x0004)
	struct FColor                                      FadeColor;                                                // 0x0010(0x0004)
	int                                                WindowType;                                               // 0x0014(0x0004)
	int                                                AnimationType;                                            // 0x0018(0x0004)
	int                                                FontType;                                                 // 0x001C(0x0004)
	int                                                BackgroundType;                                           // 0x0020(0x0004)
	int                                                MsgNo;                                                    // 0x0024(0x0004)
	struct FString                                     MsgText;                                                  // 0x0028(0x000C) (NeedCtorLink)
};

// Struct Engine.L2SceneItem.MusicItem
// 0x0020
struct FMusicItem
{
	unsigned long                                      UseMusic : 1;                                             // 0x0000(0x0004)
	struct FString                                     MusicName;                                                // 0x0004(0x000C) (NeedCtorLink)
	unsigned long                                      StopMapMusic : 1;                                         // 0x0010(0x0004)
	int                                                FadeInTime;                                               // 0x0014(0x0004)
	int                                                FadeOutTime;                                              // 0x0018(0x0004)
	unsigned long                                      IsSound : 1;                                              // 0x001C(0x0004)
};

// Struct Engine.L2SceneItem.NpcItem
// 0x0040
struct FNpcItem
{
	struct FString                                     Description;                                              // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<ENpcItemType>                          NpcItemType;                                              // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                NpcID;                                                    // 0x0010(0x0004)
	int                                                NpcIndex;                                                 // 0x0014(0x0004)
	int                                                TargetIndex;                                              // 0x0018(0x0004)
	struct FVector                                     Location;                                                 // 0x001C(0x000C)
	int                                                Yaw;                                                      // 0x0028(0x0004)
	int                                                SkillID;                                                  // 0x002C(0x0004)
	struct FString                                     AnimName;                                                 // 0x0030(0x000C) (NeedCtorLink)
	unsigned long                                      IsFly : 1;                                                // 0x003C(0x0004)
	unsigned long                                      IsRun : 1;                                                // 0x003C(0x0004)
	unsigned long                                      IsLoop : 1;                                               // 0x003C(0x0004)
};

// Struct Engine.L2FogInfo.L2EnvironmentColorInfo
// 0x0024
struct FL2EnvironmentColorInfo
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	struct FColor                                      FogColor;                                                 // 0x0004(0x0004) (Edit)
	struct FColor                                      SkyColor;                                                 // 0x0008(0x0004) (Edit)
	TArray<struct FColor>                              CloudColor;                                               // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FColor>                              HazeRingColor;                                            // 0x0018(0x000C) (Edit, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

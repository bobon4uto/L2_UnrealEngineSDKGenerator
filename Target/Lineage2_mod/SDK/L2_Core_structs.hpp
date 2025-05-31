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

#define CONST_MaxInt                                              0x7fffffff
#define CONST_Pi                                                  3.1415926535897932
#define CONST_RF_NotForEdit                                       0x00400000
#define CONST_RF_NotForServer                                     0x00200000
#define CONST_RF_NotForClient                                     0x00100000
#define CONST_RF_Transient                                        0x00004000
#define CONST_RF_Transactional                                    0x00000001
#define CONST_RF_Public                                           0x00000004

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Core.Object.ESkeletalMeshSimulType
enum class ESkeletalMeshSimulType : uint8_t
{
	SMST_None                      = 0,
	SMST_Cloak1                    = 1,
	SMST_LongHair1                 = 2,
	SMST_ShortHair1                = 3,
	SMST_OnlyAttach                = 4,
	SMST_ForeHair1                 = 5,
	SMST_PonyTail1                 = 6,
	SMST_LongHair2                 = 7,
	SMST_MAX                       = 8
};


// Enum Core.Object.ECamOrientation
enum class ECamOrientation : uint8_t
{
	CAMORIENT_None                 = 0,
	CAMORIENT_LookAtActor          = 1,
	CAMORIENT_FacePath             = 2,
	CAMORIENT_Interpolate          = 3,
	CAMORIENT_Dolly                = 4
};


// Enum Core.Object.Scale.ESheerAxis
enum class ESheerAxis : uint8_t
{
	SHEER_None                     = 0,
	SHEER_XY                       = 1,
	SHEER_XZ                       = 2,
	SHEER_YX                       = 3,
	SHEER_YZ                       = 4,
	SHEER_ZX                       = 5,
	SHEER_ZY                       = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// Struct Core.Object.ParamMap
// 0x0008
struct FParamMap
{
	int                                                paramMapSize1;                                            // 0x0000(0x0004)
	int                                                paramMapSize2;                                            // 0x0004(0x0004)
};

// Struct Core.Object.INT64
// 0x0008
struct FINT64
{
	int                                                Left;                                                     // 0x0000(0x0004)
	int                                                Right;                                                    // 0x0004(0x0004)
};

// Struct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, Config)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, Config)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, Config)
};

// Struct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, Config)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, Config)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, Config)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, Config)
};

// Struct Core.Object.InterpCurvePoint
// 0x0008
struct FInterpCurvePoint
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit)
	float                                              OutVal;                                                   // 0x0004(0x0004) (Edit)
};

// Struct Core.Object.InterpCurve
// 0x000C
struct FInterpCurve
{
	TArray<struct FInterpCurvePoint>                   Points;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// Struct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                                    // 0x0000(0x0004) (Edit, Config)
	int                                                Yaw;                                                      // 0x0004(0x0004) (Edit, Config)
	int                                                Roll;                                                     // 0x0008(0x0004) (Edit, Config)
};

// Struct Core.Object.CompressedPosition
// 0x0024
struct FCompressedPosition
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C)
};

// Struct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004)
	int                                                B;                                                        // 0x0004(0x0004)
	int                                                C;                                                        // 0x0008(0x0004)
	int                                                D;                                                        // 0x000C(0x0004)
};

// Struct Core.Object.Coords
// 0x0030
struct FCoords
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (Edit, Config)
	struct FVector                                     XAxis;                                                    // 0x000C(0x000C) (Edit, Config)
	struct FVector                                     YAxis;                                                    // 0x0018(0x000C) (Edit, Config)
	struct FVector                                     ZAxis;                                                    // 0x0024(0x000C) (Edit, Config)
};

// Struct Core.Object.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004) (Edit, Config)
};

// Struct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit)
};

// Struct Core.Object.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C)
	struct FVector                                     Max;                                                      // 0x000C(0x000C)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// Struct Core.Object.BoundingVolume
// 0x0010 (0x002C - 0x001C)
struct FBoundingVolume : public FBox
{
	struct FPlane                                      Sphere;                                                   // 0x001C(0x0010)
};

// Struct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001) (Edit, Config)
	unsigned char                                      G;                                                        // 0x0001(0x0001) (Edit, Config)
	unsigned char                                      R;                                                        // 0x0002(0x0001) (Edit, Config)
	unsigned char                                      A;                                                        // 0x0003(0x0001) (Edit, Config)

	FColor()
		: R(0), G(0), B(0), A(0)
	{ }

	FColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// Struct Core.Object.Scale
// 0x0014
struct FScale
{
	struct FVector                                     Scale;                                                    // 0x0000(0x000C) (Edit, Config)
	float                                              SheerRate;                                                // 0x000C(0x0004) (Edit, Config)
	TEnumAsByte<ESheerAxis>                            SheerAxis;                                                // 0x0010(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// Struct Core.Object.Range
// 0x0008
struct FRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, Config)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, Config)
};

// Struct Core.Object.RangeVector
// 0x0018
struct FRangeVector
{
	struct FRange                                      X;                                                        // 0x0000(0x0008) (Edit, Config)
	struct FRange                                      Y;                                                        // 0x0008(0x0008) (Edit, Config)
	struct FRange                                      Z;                                                        // 0x0010(0x0008) (Edit, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

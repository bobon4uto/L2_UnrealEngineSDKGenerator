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

// Class Core.Object
// 0x0034
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
	int                                                ObjectInternal[0x6];                                      // 0x0000(0x0004) (Const, Native)
	class UObject*                                     Outer;                                                    // 0x0018(0x0004) (Const, Native)
	int                                                ObjectFlags;                                              // 0x001C(0x0004) (Const, Native)
	struct FName                                       Name;                                                     // 0x0020(0x0004) (Edit, Const, Native, EditConst)
	class UClass*                                      Class;                                                    // 0x0024(0x0004) (Const, Native, EditConst)
	int                                                CacheIndex;                                               // 0x0028(0x0004) (Native)
	int                                                HashNextBuffer;                                           // 0x002C(0x0004) (Native)
	int                                                IndexBuffer;                                              // 0x0030(0x0004) (Native)

	static TArray<UObject*>& GetGlobalObjects();

	inline std::string UObject::GetName() const
	{
		return Name.GetName();
	}

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (auto i = 0u; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(__thiscall *)(UObject*, class UFunction*, void*, void*)>(this, 4)(this, function, parms, nullptr);
	}


	void EndState();
	void BeginState();
	bool STATIC_GetParamString(const struct FParamMap& a_ParamMap, const struct FString& a_Key, struct FString* a_Result);
	bool STATIC_GetParamFloat(const struct FParamMap& a_ParamMap, const struct FString& a_Key, float* a_Result);
	bool STATIC_GetParamINT64(const struct FParamMap& a_ParamMap, const struct FString& a_Key, struct FINT64* a_Result);
	bool STATIC_GetParamInt(const struct FParamMap& a_ParamMap, const struct FString& a_Key, int* a_Result);
	void STATIC_AddParamString(const struct FParamMap& a_ParamMap, const struct FString& a_Key, const struct FString& a_Value);
	void STATIC_AddParamFloat(const struct FParamMap& a_ParamMap, const struct FString& a_Key, float a_Value);
	void STATIC_AddParamINT64(const struct FParamMap& a_ParamMap, const struct FString& a_Key, const struct FINT64& a_Value);
	void STATIC_AddParamInt(const struct FParamMap& a_ParamMap, const struct FString& a_Key, int a_Value);
	float STATIC_RandRange(float Min, float Max);
	void STATIC_ResetConfig();
	void STATIC_StaticSaveConfig();
	void STATIC_SaveConfig();
	class UObject* STATIC_FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	class UObject* STATIC_DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	struct FName STATIC_GetEnum(class UObject* E, int i);
	void STATIC_SetPropertyText(const struct FString& PropName, const struct FString& PropValue);
	struct FString STATIC_GetPropertyText(const struct FString& PropName);
	void STATIC_Disable(const struct FName& ProbeFunc);
	void STATIC_Enable(const struct FName& ProbeFunc);
	bool STATIC_IsA(const struct FName& ClassName);
	bool STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	struct FName STATIC_GetStateName();
	bool STATIC_IsInState(const struct FName& TestState);
	void STATIC_GotoState(const struct FName& NewState, const struct FName& Label);
	struct FString Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName);
	void STATIC_Warn(const struct FString& S);
	void Log(const struct FString& S, const struct FName& Tag);
	struct FINT64 STATIC_Min64(const struct FINT64& A, const struct FINT64& B);
	bool STATIC_IsPlus(const struct FINT64& A, bool bZero);
	bool STATIC_NotEqual_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	bool STATIC_EqualEqual_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	bool STATIC_GreaterEqual_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	bool STATIC_LessEqual_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	bool STATIC_Greater_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	bool STATIC_Less_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	struct FINT64 STATIC_SubtractEqual_INT64INT64(const struct FINT64& B, struct FINT64* A);
	struct FINT64 STATIC_AddEqual_INT64INT64(const struct FINT64& B, struct FINT64* A);
	struct FINT64 Subtract_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	struct FINT64 Add_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	struct FINT64 STATIC_Divide_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	struct FINT64 Multiply_INT64Float(const struct FINT64& A, float B);
	struct FINT64 Multiply_INT64INT64(const struct FINT64& A, const struct FINT64& B);
	struct FINT64 Subtract_PreINT64(const struct FINT64& A);
	struct FQuat STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FQuat STATIC_QuatFindBetween(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	struct FQuat STATIC_QuatInvert(const struct FQuat& A);
	struct FQuat STATIC_QuatProduct(const struct FQuat& A, const struct FQuat& B);
	void STATIC_InterpCurveGetInputDomain(const struct FInterpCurve& curve, float* Min, float* Max);
	void STATIC_InterpCurveGetOutputRange(const struct FInterpCurve& curve, float* Min, float* Max);
	float STATIC_InterpCurveEval(const struct FInterpCurve& curve, float Input);
	bool STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	int STATIC_Asc(const struct FString& S);
	struct FString STATIC_Chr(int i);
	struct FString STATIC_Caps(const struct FString& S);
	struct FString STATIC_Right(const struct FString& S, int i);
	struct FString STATIC_Left(const struct FString& S, int i);
	struct FString STATIC_Mid(const struct FString& S, int i, int j);
	int STATIC_InStr(const struct FString& S, const struct FString& t);
	int STATIC_Len(const struct FString& S);
	bool STATIC_ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_LessEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_Greater_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_Less_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_At_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FVector STATIC_Rotator2Vector(const struct FRotator& R);
	struct FRotator STATIC_Vector2Rotator(const struct FVector& V);
	bool STATIC_ClockwiseFrom_IntInt(int A, int B);
	struct FRotator STATIC_Normalize(const struct FRotator& Rot);
	struct FRotator STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator STATIC_RotRand(bool bRoll);
	void STATIC_GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	struct FRotator STATIC_SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator STATIC_AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator STATIC_DivideEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator STATIC_MultiplyEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator STATIC_Divide_RotatorFloat(const struct FRotator& A, float B);
	struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	bool STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FVector STATIC_MirrorVectorByNormal(const struct FVector& Vect, const struct FVector& Normal);
	struct FVector STATIC_VRand();
	void STATIC_Invert(struct FVector* X, struct FVector* Y, struct FVector* Z);
	struct FVector Normal(const struct FVector& A);
	float VSize(const struct FVector& A);
	struct FVector STATIC_SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_AddEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_DivideEqual_VectorFloat(float B, struct FVector* A);
	struct FVector STATIC_MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_MultiplyEqual_VectorFloat(float B, struct FVector* A);
	struct FVector STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	bool STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector Subtract_PreVector(const struct FVector& A);
	float STATIC_Smerp(float Alpha, float A, float B);
	float STATIC_Lerp(float Alpha, float A, float B);
	float STATIC_FClamp(float V, float A, float B);
	float STATIC_FMax(float A, float B);
	float STATIC_FMin(float A, float B);
	float STATIC_FRand();
	float STATIC_Square(float A);
	float STATIC_Sqrt(float A);
	float STATIC_Loge(float A);
	float STATIC_Exp(float A);
	float STATIC_Atan(float A, float B);
	float STATIC_Tan(float A);
	float STATIC_Acos(float A);
	float STATIC_Cos(float A);
	float STATIC_Asin(float A);
	float STATIC_Sin(float A);
	float STATIC_Abs(float A);
	float STATIC_SubtractEqual_FloatFloat(float B, float* A);
	float STATIC_AddEqual_FloatFloat(float B, float* A);
	float STATIC_DivideEqual_FloatFloat(float B, float* A);
	float STATIC_MultiplyEqual_FloatFloat(float B, float* A);
	bool STATIC_NotEqual_FloatFloat(float A, float B);
	bool STATIC_ComplementEqual_FloatFloat(float A, float B);
	bool STATIC_EqualEqual_FloatFloat(float A, float B);
	bool STATIC_GreaterEqual_FloatFloat(float A, float B);
	bool STATIC_LessEqual_FloatFloat(float A, float B);
	bool STATIC_Greater_FloatFloat(float A, float B);
	bool STATIC_Less_FloatFloat(float A, float B);
	float Subtract_FloatFloat(float A, float B);
	float Add_FloatFloat(float A, float B);
	float STATIC_Percent_FloatFloat(float A, float B);
	float STATIC_Divide_FloatFloat(float A, float B);
	float Multiply_FloatFloat(float A, float B);
	float STATIC_MultiplyMultiply_FloatFloat(float A, float B);
	float Subtract_PreFloat(float A);
	int STATIC_Clamp(int V, int A, int B);
	int Max(int A, int B);
	int Min(int A, int B);
	int STATIC_Rand(int Max);
	int STATIC_SubtractSubtract_Int(int* A);
	int STATIC_AddAdd_Int(int* A);
	int STATIC_SubtractSubtract_PreInt(int* A);
	int STATIC_AddAdd_PreInt(int* A);
	int STATIC_SubtractEqual_IntInt(int B, int* A);
	int STATIC_AddEqual_IntInt(int B, int* A);
	int STATIC_DivideEqual_IntFloat(float B, int* A);
	int STATIC_MultiplyEqual_IntFloat(float B, int* A);
	int STATIC_Or_IntInt(int A, int B);
	int STATIC_Xor_IntInt(int A, int B);
	int STATIC_And_IntInt(int A, int B);
	bool STATIC_NotEqual_IntInt(int A, int B);
	bool STATIC_EqualEqual_IntInt(int A, int B);
	bool STATIC_GreaterEqual_IntInt(int A, int B);
	bool STATIC_LessEqual_IntInt(int A, int B);
	bool STATIC_Greater_IntInt(int A, int B);
	bool STATIC_Less_IntInt(int A, int B);
	int STATIC_GreaterGreaterGreater_IntInt(int A, int B);
	int STATIC_GreaterGreater_IntInt(int A, int B);
	int STATIC_LessLess_IntInt(int A, int B);
	int Subtract_IntInt(int A, int B);
	int Add_IntInt(int A, int B);
	int STATIC_Divide_IntInt(int A, int B);
	int Multiply_IntFloat(int A, float B);
	int Multiply_IntInt(int A, int B);
	int Subtract_PreInt(int A);
	int STATIC_Complement_PreInt(int A);
	unsigned char STATIC_SubtractSubtract_Byte(unsigned char* A);
	unsigned char STATIC_AddAdd_Byte(unsigned char* A);
	unsigned char STATIC_SubtractSubtract_PreByte(unsigned char* A);
	unsigned char STATIC_AddAdd_PreByte(unsigned char* A);
	unsigned char STATIC_SubtractEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_AddEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_DivideEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_MultiplyEqual_ByteByte(unsigned char B, unsigned char* A);
	bool STATIC_OrOr_BoolBool(bool A, bool B);
	bool STATIC_XorXor_BoolBool(bool A, bool B);
	bool STATIC_AndAnd_BoolBool(bool A, bool B);
	bool STATIC_NotEqual_BoolBool(bool A, bool B);
	bool STATIC_EqualEqual_BoolBool(bool A, bool B);
	bool STATIC_Not_PreBool(bool A);
};


// Class Core.Subsystem
// 0x0004 (0x0038 - 0x0034)
class USubsystem : public UObject
{
public:
	int                                                ExecVtbl;                                                 // 0x0034(0x0004) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.PackageMap
// 0x0048 (0x007C - 0x0034)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0034(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.Commandlet
// 0x01B4 (0x01E8 - 0x0034)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpCmd;                                                  // 0x0034(0x000C) (Localized, NeedCtorLink)
	struct FString                                     HelpOneLiner;                                             // 0x0040(0x000C) (Localized, NeedCtorLink)
	struct FString                                     HelpUsage;                                                // 0x004C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     HelpWebLink;                                              // 0x0058(0x000C) (Localized, NeedCtorLink)
	struct FString                                     HelpParm[0x10];                                           // 0x0064(0x000C) (Localized, NeedCtorLink)
	struct FString                                     HelpDesc[0x10];                                           // 0x0124(0x000C) (Localized, NeedCtorLink)
	unsigned long                                      LogToStdout : 1;                                          // 0x01E4(0x0004)
	unsigned long                                      IsServer : 1;                                             // 0x01E4(0x0004)
	unsigned long                                      IsClient : 1;                                             // 0x01E4(0x0004)
	unsigned long                                      IsEditor : 1;                                             // 0x01E4(0x0004)
	unsigned long                                      LazyLoad : 1;                                             // 0x01E4(0x0004)
	unsigned long                                      ShowErrorCount : 1;                                       // 0x01E4(0x0004)
	unsigned long                                      ShowBanner : 1;                                           // 0x01E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	int Main(const struct FString& Parms);
};


// Class Core.Factory
// 0x0040 (0x0074 - 0x0034)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0034(0x0008) MISSED OFFSET
	struct FString                                     Description;                                              // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     InContextCommand;                                         // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     OutOfContextCommand;                                      // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FString>                             Formats;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                                       // 0x006C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.System
// 0x0044 (0x007C - 0x0038)
class USystem : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	int                                                PurgeCacheDays;                                           // 0x003C(0x0004) (Config)
	struct FString                                     SavePath;                                                 // 0x0040(0x000C) (Config, NeedCtorLink)
	struct FString                                     CachePath;                                                // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FString                                     CacheExt;                                                 // 0x0058(0x000C) (Config, NeedCtorLink)
	TArray<struct FString>                             Paths;                                                    // 0x0064(0x000C) (Config, NeedCtorLink)
	TArray<struct FName>                               Suppress;                                                 // 0x0070(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.Field
// 0x000C (0x0040 - 0x0034)
class UField : public UObject
{
public:
	class UField*                                      SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      HashNext;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}

};


// Class Core.Property
// 0x0040 (0x0080 - 0x0040)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.RefLinkProperty
// 0x0004 (0x0084 - 0x0080)
class URefLinkProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0080(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.RefLinkProperty");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0004 (0x0088 - 0x0084)
class UStructProperty : public URefLinkProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.MapProperty
// 0x0008 (0x0088 - 0x0080)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0004 (0x0088 - 0x0084)
class UArrayProperty : public URefLinkProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.FixedArrayProperty
// 0x0008 (0x0088 - 0x0080)
class UFixedArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FixedArrayProperty");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000 (0x0080 - 0x0080)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000 (0x0084 - 0x0084)
class UNameProperty : public URefLinkProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}

};


// Class Core.ObjectProperty
// 0x0004 (0x0088 - 0x0084)
class UObjectProperty : public URefLinkProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.ClassProperty
// 0x0004 (0x008C - 0x0088)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000 (0x0080 - 0x0080)
class UFloatProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0004 (0x0084 - 0x0080)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0080(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.DelegateProperty
// 0x0004 (0x0088 - 0x0084)
class UDelegateProperty : public URefLinkProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0000 (0x0080 - 0x0080)
class UIntProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0004 (0x0084 - 0x0080)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0080(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.Language
// 0x0004 (0x0038 - 0x0034)
class ULanguage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Language");
		return ptr;
	}

};


// Class Core.ParamStack
// 0x0004 (0x0038 - 0x0034)
class UParamStack : public UObject
{
public:
	int                                                stack;                                                    // 0x0034(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ParamStack");
		return ptr;
	}


	void STATIC_PushString(const struct FString& item);
	void STATIC_PushInt(int item);
	float STATIC_GetFloat();
	int STATIC_GetInt();
	struct FString GetString();
};


// Class Core.TextBufferFactory
// 0x0000 (0x0074 - 0x0074)
class UTextBufferFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}

};


// Class Core.Package
// 0x0010 (0x0044 - 0x0034)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0034(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.Linker
// 0x008C (0x00C0 - 0x0034)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0034(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x0058 (0x0118 - 0x00C0)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x0464 (0x0524 - 0x00C0)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x464];                                     // 0x00C0(0x0464) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Enum
// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0040(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.TextBuffer
// 0x0018 (0x004C - 0x0034)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0034(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Const
// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0040(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.Struct
// 0x004C (0x008C - 0x0040)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[0x08];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned long                                      PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}

};


// Class Core.Function
// 0x0024 (0x00B0 - 0x008C)
class UFunction : public UStruct
{
public:
	uint32_t                                           FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           iNative;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            OperPrecedence;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               UnknownData00[0x02];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}

};


// Class Core.State
// 0x0418 (0x04A4 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x418];                                     // 0x008C(0x0418) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Class
// 0x0088 (0x052C - 0x04A4)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x04A4(0x0088) MISSED OFFSET

	template<typename T>
	T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*);
		//UClass::GetDefaultObject can be found with the sig
		//56 8B F1 8B 06 57 8B BE ?? ?? ?? ?? FF
		static Fn fn = nullptr;
		
		return fn(this);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}

};


// Class Core.Exporter
// 0x0018 (0x004C - 0x0034)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FString>                             Formats;                                                  // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0044(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.ObjectExporterT3D
// 0x0000 (0x004C - 0x004C)
class UObjectExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectExporterT3D");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

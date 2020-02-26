// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/RichCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichCurve() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveCompressionFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRealCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
// End Cross Module References
	static UEnum* ERichCurveKeyTimeCompressionFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveKeyTimeCompressionFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveKeyTimeCompressionFormat>()
	{
		return ERichCurveKeyTimeCompressionFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveKeyTimeCompressionFormat(ERichCurveKeyTimeCompressionFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveKeyTimeCompressionFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Hash() { return 35111218U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveKeyTimeCompressionFormat"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCKTCF_uint16", (int64)RCKTCF_uint16 },
				{ "RCKTCF_float32", (int64)RCKTCF_float32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCKTCF_float32.DisplayName", "float32" },
				{ "RCKTCF_float32.ToolTip", "Key time uses full precision" },
				{ "RCKTCF_uint16.DisplayName", "uint16" },
				{ "RCKTCF_uint16.ToolTip", "Key time is quantized to 16 bits" },
				{ "ToolTip", "Enumerates key time compression options." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERichCurveKeyTimeCompressionFormat",
				"ERichCurveKeyTimeCompressionFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERichCurveCompressionFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveCompressionFormat, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveCompressionFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveCompressionFormat>()
	{
		return ERichCurveCompressionFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveCompressionFormat(ERichCurveCompressionFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveCompressionFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Hash() { return 3870495278U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveCompressionFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveCompressionFormat"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCCF_Empty", (int64)RCCF_Empty },
				{ "RCCF_Constant", (int64)RCCF_Constant },
				{ "RCCF_Linear", (int64)RCCF_Linear },
				{ "RCCF_Cubic", (int64)RCCF_Cubic },
				{ "RCCF_Mixed", (int64)RCCF_Mixed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCCF_Constant.DisplayName", "Constant" },
				{ "RCCF_Constant.ToolTip", "All keys use constant interpolation" },
				{ "RCCF_Cubic.DisplayName", "Cubic" },
				{ "RCCF_Cubic.ToolTip", "All keys use cubic interpolation" },
				{ "RCCF_Empty.DisplayName", "Empty" },
				{ "RCCF_Empty.ToolTip", "No keys are present" },
				{ "RCCF_Linear.DisplayName", "Linear" },
				{ "RCCF_Linear.ToolTip", "All keys use linear interpolation" },
				{ "RCCF_Mixed.DisplayName", "Mixed" },
				{ "RCCF_Mixed.ToolTip", "Keys use mixed interpolation modes" },
				{ "ToolTip", "Enumerates curve compression options." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERichCurveCompressionFormat",
				"ERichCurveCompressionFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERichCurveTangentWeightMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveTangentWeightMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveTangentWeightMode>()
	{
		return ERichCurveTangentWeightMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveTangentWeightMode(ERichCurveTangentWeightMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveTangentWeightMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Hash() { return 1120779691U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveTangentWeightMode"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCTWM_WeightedNone", (int64)RCTWM_WeightedNone },
				{ "RCTWM_WeightedArrive", (int64)RCTWM_WeightedArrive },
				{ "RCTWM_WeightedLeave", (int64)RCTWM_WeightedLeave },
				{ "RCTWM_WeightedBoth", (int64)RCTWM_WeightedBoth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCTWM_WeightedArrive.DisplayName", "Arrive" },
				{ "RCTWM_WeightedArrive.ToolTip", "Only take the arrival tangent weight into account for evaluation." },
				{ "RCTWM_WeightedBoth.DisplayName", "Both" },
				{ "RCTWM_WeightedBoth.ToolTip", "Take both the arrival and leaving tangent weights into account for evaluation." },
				{ "RCTWM_WeightedLeave.DisplayName", "Leave" },
				{ "RCTWM_WeightedLeave.ToolTip", "Only take the leaving tangent weight into account for evaluation." },
				{ "RCTWM_WeightedNone.DisplayName", "None" },
				{ "RCTWM_WeightedNone.ToolTip", "Don't take tangent weights into account." },
				{ "ToolTip", "Enumerates tangent weight modes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERichCurveTangentWeightMode",
				"ERichCurveTangentWeightMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERichCurveTangentMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveTangentMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveTangentMode>()
	{
		return ERichCurveTangentMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveTangentMode(ERichCurveTangentMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveTangentMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveTangentMode_Hash() { return 1053832991U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveTangentMode"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveTangentMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCTM_Auto", (int64)RCTM_Auto },
				{ "RCTM_User", (int64)RCTM_User },
				{ "RCTM_Break", (int64)RCTM_Break },
				{ "RCTM_None", (int64)RCTM_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCTM_Auto.DisplayName", "Auto" },
				{ "RCTM_Auto.ToolTip", "Automatically calculates tangents to create smooth curves between values." },
				{ "RCTM_Break.DisplayName", "Break" },
				{ "RCTM_Break.ToolTip", "User specifies the tangent as two separate broken tangents on each side of the key which can allow a sharp change in evaluation before or after." },
				{ "RCTM_None.Hidden", "" },
				{ "RCTM_None.ToolTip", "No tangents." },
				{ "RCTM_User.DisplayName", "User" },
				{ "RCTM_User.ToolTip", "User specifies the tangent as a unified tangent where the two tangents are locked to each other, presenting a consistent curve before and after." },
				{ "ToolTip", "If using RCIM_Cubic, this enum describes how the tangents should be controlled in editor." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERichCurveTangentMode",
				"ERichCurveTangentMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCompressedRichCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompressedRichCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedRichCurve, Z_Construct_UPackage__Script_Engine(), TEXT("CompressedRichCurve"), sizeof(FCompressedRichCurve), Get_Z_Construct_UScriptStruct_FCompressedRichCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompressedRichCurve>()
{
	return FCompressedRichCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompressedRichCurve(FCompressedRichCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("CompressedRichCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompressedRichCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFCompressedRichCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompressedRichCurve")),new UScriptStruct::TCppStructOps<FCompressedRichCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompressedRichCurve;
	struct Z_Construct_UScriptStruct_FCompressedRichCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "A runtime optimized representation of a FRichCurve. It consumes less memory and evaluates faster." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedRichCurve>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CompressedRichCurve",
		sizeof(FCompressedRichCurve),
		alignof(FCompressedRichCurve),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompressedRichCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompressedRichCurve"), sizeof(FCompressedRichCurve), Get_Z_Construct_UScriptStruct_FCompressedRichCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompressedRichCurve_Hash() { return 602436383U; }
class UScriptStruct* FRichCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRichCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurve, Z_Construct_UPackage__Script_Engine(), TEXT("RichCurve"), sizeof(FRichCurve), Get_Z_Construct_UScriptStruct_FRichCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRichCurve>()
{
	return FRichCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichCurve(FRichCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("RichCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRichCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFRichCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichCurve")),new UScriptStruct::TCppStructOps<FRichCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRichCurve;
	struct Z_Construct_UScriptStruct_FRichCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "A rich, editable float curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurve, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRealCurve,
		&NewStructOps,
		"RichCurve",
		sizeof(FRichCurve),
		alignof(FRichCurve),
		Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichCurve"), sizeof(FRichCurve), Get_Z_Construct_UScriptStruct_FRichCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichCurve_Hash() { return 2387360771U; }
class UScriptStruct* FRichCurveKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRichCurveKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurveKey, Z_Construct_UPackage__Script_Engine(), TEXT("RichCurveKey"), sizeof(FRichCurveKey), Get_Z_Construct_UScriptStruct_FRichCurveKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRichCurveKey>()
{
	return FRichCurveKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichCurveKey(FRichCurveKey::StaticStruct, TEXT("/Script/Engine"), TEXT("RichCurveKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRichCurveKey
{
	FScriptStruct_Engine_StaticRegisterNativesFRichCurveKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichCurveKey")),new UScriptStruct::TCppStructOps<FRichCurveKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRichCurveKey;
	struct Z_Construct_UScriptStruct_FRichCurveKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "One key in a rich, editable float curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurveKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, LeaveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCIM_Cubic, the leaving tangent at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, LeaveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, ArriveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCIM_Cubic, the arriving tangent at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, ArriveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If either tangent at this key is 'weighted'" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Mode for tangents at this key" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Interpolation mode between this key and the next" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichCurveKey, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RichCurveKey",
		sizeof(FRichCurveKey),
		alignof(FRichCurveKey),
		Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurveKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichCurveKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichCurveKey"), sizeof(FRichCurveKey), Get_Z_Construct_UScriptStruct_FRichCurveKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichCurveKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichCurveKey_Hash() { return 1126077808U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

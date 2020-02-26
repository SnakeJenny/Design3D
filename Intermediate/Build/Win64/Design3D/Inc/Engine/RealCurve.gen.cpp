// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/RealCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealCurve() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRealCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
// End Cross Module References
	static UEnum* ERichCurveExtrapolation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveExtrapolation, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveExtrapolation"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveExtrapolation>()
	{
		return ERichCurveExtrapolation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveExtrapolation(ERichCurveExtrapolation_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveExtrapolation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Hash() { return 1050482979U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveExtrapolation"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCCE_Cycle", (int64)RCCE_Cycle },
				{ "RCCE_CycleWithOffset", (int64)RCCE_CycleWithOffset },
				{ "RCCE_Oscillate", (int64)RCCE_Oscillate },
				{ "RCCE_Linear", (int64)RCCE_Linear },
				{ "RCCE_Constant", (int64)RCCE_Constant },
				{ "RCCE_None", (int64)RCCE_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
				{ "RCCE_Constant.DisplayName", "Constant" },
				{ "RCCE_Constant.ToolTip", "Use a constant value for extrapolation" },
				{ "RCCE_Cycle.DisplayName", "Cycle" },
				{ "RCCE_Cycle.ToolTip", "Repeat the curve without an offset." },
				{ "RCCE_CycleWithOffset.DisplayName", "CycleWithOffset" },
				{ "RCCE_CycleWithOffset.ToolTip", "Repeat the curve with an offset relative to the first or last key's value." },
				{ "RCCE_Linear.DisplayName", "Linear" },
				{ "RCCE_Linear.ToolTip", "Use a linearly increasing value for extrapolation." },
				{ "RCCE_None.DisplayName", "None" },
				{ "RCCE_None.ToolTip", "No Extrapolation" },
				{ "RCCE_Oscillate.DisplayName", "Oscillate" },
				{ "RCCE_Oscillate.ToolTip", "Sinusoidally extrapolate." },
				{ "ToolTip", "Enumerates extrapolation options." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERichCurveExtrapolation",
				"ERichCurveExtrapolation",
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
	static UEnum* ERichCurveInterpMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveInterpMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveInterpMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveInterpMode>()
	{
		return ERichCurveInterpMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveInterpMode(ERichCurveInterpMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveInterpMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveInterpMode_Hash() { return 1696645992U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveInterpMode"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveInterpMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCIM_Linear", (int64)RCIM_Linear },
				{ "RCIM_Constant", (int64)RCIM_Constant },
				{ "RCIM_Cubic", (int64)RCIM_Cubic },
				{ "RCIM_None", (int64)RCIM_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
				{ "RCIM_Constant.DisplayName", "Constant" },
				{ "RCIM_Constant.ToolTip", "Use a constant value. Represents stepped values." },
				{ "RCIM_Cubic.DisplayName", "Cubic" },
				{ "RCIM_Cubic.ToolTip", "Cubic interpolation. See TangentMode for different cubic interpolation options." },
				{ "RCIM_Linear.DisplayName", "Linear" },
				{ "RCIM_Linear.ToolTip", "Use linear interpolation between values." },
				{ "RCIM_None.Hidden", "" },
				{ "RCIM_None.ToolTip", "No interpolation." },
				{ "ToolTip", "Method of interpolation between this key and the next." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERichCurveInterpMode",
				"ERichCurveInterpMode",
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
class UScriptStruct* FRealCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRealCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealCurve, Z_Construct_UPackage__Script_Engine(), TEXT("RealCurve"), sizeof(FRealCurve), Get_Z_Construct_UScriptStruct_FRealCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRealCurve>()
{
	return FRealCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRealCurve(FRealCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("RealCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRealCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFRealCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RealCurve")),new UScriptStruct::TCppStructOps<FRealCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRealCurve;
	struct Z_Construct_UScriptStruct_FRealCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "A rich, editable float curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "Default value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealCurve, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "Post-infinity extrapolation state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealCurve, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "Pre-infinity extrapolation state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealCurve, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"RealCurve",
		sizeof(FRealCurve),
		alignof(FRealCurve),
		Z_Construct_UScriptStruct_FRealCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealCurve"), sizeof(FRealCurve), Get_Z_Construct_UScriptStruct_FRealCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealCurve_Hash() { return 3008539282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

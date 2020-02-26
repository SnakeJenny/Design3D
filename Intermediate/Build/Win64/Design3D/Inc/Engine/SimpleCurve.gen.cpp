// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/SimpleCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRealCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurveKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
// End Cross Module References
class UScriptStruct* FSimpleCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSimpleCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurve, Z_Construct_UPackage__Script_Engine(), TEXT("SimpleCurve"), sizeof(FSimpleCurve), Get_Z_Construct_UScriptStruct_FSimpleCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleCurve>()
{
	return FSimpleCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleCurve(FSimpleCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("SimpleCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSimpleCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFSimpleCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleCurve")),new UScriptStruct::TCppStructOps<FSimpleCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSimpleCurve;
	struct Z_Construct_UScriptStruct_FSimpleCurve_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "A rich, editable float curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCurve, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleCurveKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Interpolation mode between this key and the next" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCurve, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRealCurve,
		&NewStructOps,
		"SimpleCurve",
		sizeof(FSimpleCurve),
		alignof(FSimpleCurve),
		Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleCurve"), sizeof(FSimpleCurve), Get_Z_Construct_UScriptStruct_FSimpleCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleCurve_Hash() { return 687103834U; }
class UScriptStruct* FSimpleCurveKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSimpleCurveKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurveKey, Z_Construct_UPackage__Script_Engine(), TEXT("SimpleCurveKey"), sizeof(FSimpleCurveKey), Get_Z_Construct_UScriptStruct_FSimpleCurveKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleCurveKey>()
{
	return FSimpleCurveKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleCurveKey(FSimpleCurveKey::StaticStruct, TEXT("/Script/Engine"), TEXT("SimpleCurveKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSimpleCurveKey
{
	FScriptStruct_Engine_StaticRegisterNativesFSimpleCurveKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleCurveKey")),new UScriptStruct::TCppStructOps<FSimpleCurveKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSimpleCurveKey;
	struct Z_Construct_UScriptStruct_FSimpleCurveKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "One key in a rich, editable float curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCurveKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCurveKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCurveKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SimpleCurveKey",
		sizeof(FSimpleCurveKey),
		alignof(FSimpleCurveKey),
		Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurveKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleCurveKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleCurveKey"), sizeof(FSimpleCurveKey), Get_Z_Construct_UScriptStruct_FSimpleCurveKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleCurveKey_Hash() { return 2366761722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

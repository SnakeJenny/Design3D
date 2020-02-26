// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/NameCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNameCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey();
// End Cross Module References
class UScriptStruct* FNameCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNameCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurve, Z_Construct_UPackage__Script_Engine(), TEXT("NameCurve"), sizeof(FNameCurve), Get_Z_Construct_UScriptStruct_FNameCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameCurve>()
{
	return FNameCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNameCurve(FNameCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("NameCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNameCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFNameCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NameCurve")),new UScriptStruct::TCppStructOps<FNameCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNameCurve;
	struct Z_Construct_UScriptStruct_FNameCurve_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Implements a curve of FNames." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNameCurve, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNameCurveKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"NameCurve",
		sizeof(FNameCurve),
		alignof(FNameCurve),
		Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNameCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNameCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NameCurve"), sizeof(FNameCurve), Get_Z_Construct_UScriptStruct_FNameCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNameCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNameCurve_Hash() { return 41207098U; }
class UScriptStruct* FNameCurveKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNameCurveKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurveKey, Z_Construct_UPackage__Script_Engine(), TEXT("NameCurveKey"), sizeof(FNameCurveKey), Get_Z_Construct_UScriptStruct_FNameCurveKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameCurveKey>()
{
	return FNameCurveKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNameCurveKey(FNameCurveKey::StaticStruct, TEXT("/Script/Engine"), TEXT("NameCurveKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNameCurveKey
{
	FScriptStruct_Engine_StaticRegisterNativesFNameCurveKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NameCurveKey")),new UScriptStruct::TCppStructOps<FNameCurveKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNameCurveKey;
	struct Z_Construct_UScriptStruct_FNameCurveKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "One key in a curve of FNames." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurveKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNameCurveKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNameCurveKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NameCurveKey",
		sizeof(FNameCurveKey),
		alignof(FNameCurveKey),
		Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNameCurveKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NameCurveKey"), sizeof(FNameCurveKey), Get_Z_Construct_UScriptStruct_FNameCurveKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNameCurveKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNameCurveKey_Hash() { return 1538456871U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

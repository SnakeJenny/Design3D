// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Curve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
// End Cross Module References
class UScriptStruct* FHapticFeedbackDetails_Curve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve, Z_Construct_UPackage__Script_Engine(), TEXT("HapticFeedbackDetails_Curve"), sizeof(FHapticFeedbackDetails_Curve), Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHapticFeedbackDetails_Curve>()
{
	return FHapticFeedbackDetails_Curve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHapticFeedbackDetails_Curve(FHapticFeedbackDetails_Curve::StaticStruct, TEXT("/Script/Engine"), TEXT("HapticFeedbackDetails_Curve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHapticFeedbackDetails_Curve
{
	FScriptStruct_Engine_StaticRegisterNativesFHapticFeedbackDetails_Curve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HapticFeedbackDetails_Curve")),new UScriptStruct::TCppStructOps<FHapticFeedbackDetails_Curve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHapticFeedbackDetails_Curve;
	struct Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticFeedbackDetails_Curve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "HapticDetails" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
		{ "ToolTip", "The amplitude to vibrate the haptic device at.  Amplitudes are normalized over the range [0.0, 1.0], with 1.0 being the max setting of the device" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFeedbackDetails_Curve, Amplitude), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "HapticDetails" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
		{ "ToolTip", "The frequency to vibrate the haptic device at.  Frequency ranges vary by device!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHapticFeedbackDetails_Curve, Frequency), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HapticFeedbackDetails_Curve",
		sizeof(FHapticFeedbackDetails_Curve),
		alignof(FHapticFeedbackDetails_Curve),
		Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HapticFeedbackDetails_Curve"), sizeof(FHapticFeedbackDetails_Curve), Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Hash() { return 913756384U; }
	void UHapticFeedbackEffect_Curve::StaticRegisterNativesUHapticFeedbackEffect_Curve()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve_NoRegister()
	{
		return UHapticFeedbackEffect_Curve::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapticDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HapticDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Curve.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails_MetaData[] = {
		{ "Category", "HapticFeedbackEffect" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails = { "HapticDetails", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHapticFeedbackEffect_Curve, HapticDetails), Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve, METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Curve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::ClassParams = {
		&UHapticFeedbackEffect_Curve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticFeedbackEffect_Curve, 3341267388);
	template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Curve>()
	{
		return UHapticFeedbackEffect_Curve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_Curve(Z_Construct_UClass_UHapticFeedbackEffect_Curve, &UHapticFeedbackEffect_Curve::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_Curve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Curve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

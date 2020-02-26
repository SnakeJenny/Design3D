// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/MaterialStatsOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialStatsOptions() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialStatsOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialStatsOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialStatsOptions::StaticRegisterNativesUMaterialStatsOptions()
	{
	}
	UClass* Z_Construct_UClass_UMaterialStatsOptions_NoRegister()
	{
		return UMaterialStatsOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialStatsOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaterialQualityUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bMaterialQualityUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlatformUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bPlatformUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialStatsOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialStatsOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/MaterialStatsOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialStatsOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialStatsOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed = { "bMaterialQualityUsed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(bMaterialQualityUsed, UMaterialStatsOptions), STRUCT_OFFSET(UMaterialStatsOptions, bMaterialQualityUsed), METADATA_PARAMS(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialStatsOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed = { "bPlatformUsed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(bPlatformUsed, UMaterialStatsOptions), STRUCT_OFFSET(UMaterialStatsOptions, bPlatformUsed), METADATA_PARAMS(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialStatsOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialStatsOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialStatsOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialStatsOptions_Statics::ClassParams = {
		&UMaterialStatsOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialStatsOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialStatsOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialStatsOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialStatsOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialStatsOptions, 1599816105);
	template<> UNREALED_API UClass* StaticClass<UMaterialStatsOptions>()
	{
		return UMaterialStatsOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialStatsOptions(Z_Construct_UClass_UMaterialStatsOptions, &UMaterialStatsOptions::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialStatsOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialStatsOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/CookCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCookCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCookCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCookCommandlet::StaticRegisterNativesUCookCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UCookCommandlet_NoRegister()
	{
		return UCookCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCookCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullGCAssetClassNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullGCAssetClassNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullGCAssetClassNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CookCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CookCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/CookCommandlet.h" },
		{ "ToolTip", "List of asset types that will force GC after loading them during cook" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames = { "FullGCAssetClassNames", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookCommandlet, FullGCAssetClassNames), METADATA_PARAMS(Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames_Inner = { "FullGCAssetClassNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookCommandlet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookCommandlet_Statics::NewProp_FullGCAssetClassNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCookCommandlet_Statics::ClassParams = {
		&UCookCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCookCommandlet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCookCommandlet_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UCookCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCookCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCookCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookCommandlet, 2795365883);
	template<> UNREALED_API UClass* StaticClass<UCookCommandlet>()
	{
		return UCookCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookCommandlet(Z_Construct_UClass_UCookCommandlet, &UCookCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCookCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

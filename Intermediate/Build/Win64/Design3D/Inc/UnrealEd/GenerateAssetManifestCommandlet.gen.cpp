// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GenerateAssetManifestCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateAssetManifestCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateAssetManifestCommandlet::StaticRegisterNativesUGenerateAssetManifestCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister()
	{
		return UGenerateAssetManifestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GenerateAssetManifestCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateAssetManifestCommandlet.h" },
		{ "ToolTip", "Commandlet for generating a filtered list of assets from the asset registry (intended use is for replacing assets with cooked version)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateAssetManifestCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::ClassParams = {
		&UGenerateAssetManifestCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenerateAssetManifestCommandlet, 4010873950);
	template<> UNREALED_API UClass* StaticClass<UGenerateAssetManifestCommandlet>()
	{
		return UGenerateAssetManifestCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenerateAssetManifestCommandlet(Z_Construct_UClass_UGenerateAssetManifestCommandlet, &UGenerateAssetManifestCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGenerateAssetManifestCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateAssetManifestCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

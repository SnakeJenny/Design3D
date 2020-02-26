// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/DiffAssetRegistriesCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiffAssetRegistriesCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDiffAssetRegistriesCommandlet::StaticRegisterNativesUDiffAssetRegistriesCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister()
	{
		return UDiffAssetRegistriesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistrySearchPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistrySearchPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetRegistrySearchPath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DiffAssetRegistriesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath = { "AssetRegistrySearchPath", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, AssetRegistrySearchPath), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_Inner = { "AssetRegistrySearchPath", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiffAssetRegistriesCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::ClassParams = {
		&UDiffAssetRegistriesCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiffAssetRegistriesCommandlet, 23038152);
	template<> UNREALED_API UClass* StaticClass<UDiffAssetRegistriesCommandlet>()
	{
		return UDiffAssetRegistriesCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiffAssetRegistriesCommandlet(Z_Construct_UClass_UDiffAssetRegistriesCommandlet, &UDiffAssetRegistriesCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDiffAssetRegistriesCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiffAssetRegistriesCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

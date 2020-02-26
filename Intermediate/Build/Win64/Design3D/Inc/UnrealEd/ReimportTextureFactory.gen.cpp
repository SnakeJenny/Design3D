// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/ReimportTextureFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportTextureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UReimportTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UReimportTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	void UReimportTextureFactory::StaticRegisterNativesUReimportTextureFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportTextureFactory_NoRegister()
	{
		return UReimportTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOriginalTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOriginalTex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "LightMap DitherMipMaps LODGroup Object" },
		{ "IncludePath", "Factories/ReimportTextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportTextureFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/ReimportTextureFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex = { "pOriginalTex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReimportTextureFactory, pOriginalTex), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReimportTextureFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportTextureFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportTextureFactory_Statics::ClassParams = {
		&UReimportTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReimportTextureFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UReimportTextureFactory_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportTextureFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportTextureFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportTextureFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportTextureFactory, 3315542168);
	template<> UNREALED_API UClass* StaticClass<UReimportTextureFactory>()
	{
		return UReimportTextureFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportTextureFactory(Z_Construct_UClass_UReimportTextureFactory, &UReimportTextureFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UReimportTextureFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportTextureFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
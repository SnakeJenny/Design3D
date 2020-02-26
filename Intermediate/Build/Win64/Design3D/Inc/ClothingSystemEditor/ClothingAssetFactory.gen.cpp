// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemEditor/Public/ClothingAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetFactory() {}
// Cross Module References
	CLOTHINGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UClothingAssetFactory_NoRegister();
	CLOTHINGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UClothingAssetFactory();
	CLOTHINGSYSTEMEDITORINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetFactoryBase();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemEditor();
// End Cross Module References
	void UClothingAssetFactory::StaticRegisterNativesUClothingAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetFactory_NoRegister()
	{
		return UClothingAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingAssetFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ClothingAssetFactory.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetFactory_Statics::ClassParams = {
		&UClothingAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothingAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetFactory, 1866462153);
	template<> CLOTHINGSYSTEMEDITOR_API UClass* StaticClass<UClothingAssetFactory>()
	{
		return UClothingAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetFactory(Z_Construct_UClass_UClothingAssetFactory, &UClothingAssetFactory::StaticClass, TEXT("/Script/ClothingSystemEditor"), TEXT("UClothingAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

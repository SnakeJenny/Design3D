// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/DataAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAssetFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDataAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
// End Cross Module References
	void UDataAssetFactory::StaticRegisterNativesUDataAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UDataAssetFactory_NoRegister()
	{
		return UDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DataAssetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DataAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DataAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass_MetaData[] = {
		{ "Category", "DataAsset" },
		{ "ModuleRelativePath", "Classes/Factories/DataAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass = { "DataAssetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataAssetFactory, DataAssetClass), Z_Construct_UClass_UDataAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAssetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataAssetFactory_Statics::ClassParams = {
		&UDataAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAssetFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDataAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataAssetFactory, 4216820201);
	template<> UNREALED_API UClass* StaticClass<UDataAssetFactory>()
	{
		return UDataAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataAssetFactory(Z_Construct_UClass_UDataAssetFactory, &UDataAssetFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDataAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

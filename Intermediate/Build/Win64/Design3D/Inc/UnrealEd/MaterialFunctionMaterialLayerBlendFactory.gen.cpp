// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/MaterialFunctionMaterialLayerBlendFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayerBlendFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialFunctionMaterialLayerBlendFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendFactory()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlendFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFunctionMaterialLayerBlendFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionMaterialLayerBlendFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlendFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerBlendFactory, 660525747);
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendFactory>()
	{
		return UMaterialFunctionMaterialLayerBlendFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerBlendFactory(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory, &UMaterialFunctionMaterialLayerBlendFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialFunctionMaterialLayerBlendFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

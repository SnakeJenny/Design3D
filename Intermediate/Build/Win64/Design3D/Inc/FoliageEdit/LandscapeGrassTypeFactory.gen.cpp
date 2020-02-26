// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageEdit/Private/LandscapeGrassTypeFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassTypeFactory() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory_NoRegister();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void ULandscapeGrassTypeFactory::StaticRegisterNativesULandscapeGrassTypeFactory()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory_NoRegister()
	{
		return ULandscapeGrassTypeFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGrassTypeFactory.h" },
		{ "ModuleRelativePath", "Private/LandscapeGrassTypeFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGrassTypeFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::ClassParams = {
		&ULandscapeGrassTypeFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeGrassTypeFactory, 4224766492);
	template<> FOLIAGEEDIT_API UClass* StaticClass<ULandscapeGrassTypeFactory>()
	{
		return ULandscapeGrassTypeFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeGrassTypeFactory(Z_Construct_UClass_ULandscapeGrassTypeFactory, &ULandscapeGrassTypeFactory::StaticClass, TEXT("/Script/FoliageEdit"), TEXT("ULandscapeGrassTypeFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassTypeFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

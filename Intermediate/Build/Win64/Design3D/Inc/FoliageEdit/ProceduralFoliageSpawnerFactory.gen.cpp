// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageEdit/Private/ProceduralFoliageSpawnerFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawnerFactory() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UProceduralFoliageSpawnerFactory::StaticRegisterNativesUProceduralFoliageSpawnerFactory()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister()
	{
		return UProceduralFoliageSpawnerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralFoliageSpawnerFactory.h" },
		{ "ModuleRelativePath", "Private/ProceduralFoliageSpawnerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageSpawnerFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::ClassParams = {
		&UProceduralFoliageSpawnerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFoliageSpawnerFactory, 454137611);
	template<> FOLIAGEEDIT_API UClass* StaticClass<UProceduralFoliageSpawnerFactory>()
	{
		return UProceduralFoliageSpawnerFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageSpawnerFactory(Z_Construct_UClass_UProceduralFoliageSpawnerFactory, &UProceduralFoliageSpawnerFactory::StaticClass, TEXT("/Script/FoliageEdit"), TEXT("UProceduralFoliageSpawnerFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageSpawnerFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

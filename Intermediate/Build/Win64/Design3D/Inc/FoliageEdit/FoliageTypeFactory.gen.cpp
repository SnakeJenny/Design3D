// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageEdit/Private/FoliageTypeFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageTypeFactory() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageTypeFactory_NoRegister();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageTypeFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UFoliageTypeFactory::StaticRegisterNativesUFoliageTypeFactory()
	{
	}
	UClass* Z_Construct_UClass_UFoliageTypeFactory_NoRegister()
	{
		return UFoliageTypeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageTypeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageTypeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageTypeFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageTypeFactory.h" },
		{ "ModuleRelativePath", "Private/FoliageTypeFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageTypeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageTypeFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageTypeFactory_Statics::ClassParams = {
		&UFoliageTypeFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFoliageTypeFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFoliageTypeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageTypeFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageTypeFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageTypeFactory, 3809967323);
	template<> FOLIAGEEDIT_API UClass* StaticClass<UFoliageTypeFactory>()
	{
		return UFoliageTypeFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageTypeFactory(Z_Construct_UClass_UFoliageTypeFactory, &UFoliageTypeFactory::StaticClass, TEXT("/Script/FoliageEdit"), TEXT("UFoliageTypeFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageTypeFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CurveImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurveImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveImportFactory::StaticRegisterNativesUCurveImportFactory()
	{
	}
	UClass* Z_Construct_UClass_UCurveImportFactory_NoRegister()
	{
		return UCurveImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CurveImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveImportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveImportFactory_Statics::ClassParams = {
		&UCurveImportFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurveImportFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveImportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveImportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveImportFactory, 2205982625);
	template<> UNREALED_API UClass* StaticClass<UCurveImportFactory>()
	{
		return UCurveImportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveImportFactory(Z_Construct_UClass_UCurveImportFactory, &UCurveImportFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCurveImportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveImportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

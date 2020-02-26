// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/ReimportCurveFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportCurveFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UReimportCurveFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UReimportCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportCurveFactory::StaticRegisterNativesUReimportCurveFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportCurveFactory_NoRegister()
	{
		return UReimportCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSVImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportCurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportCurveFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportCurveFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportCurveFactory_Statics::ClassParams = {
		&UReimportCurveFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportCurveFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportCurveFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportCurveFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportCurveFactory, 3343063014);
	template<> UNREALED_API UClass* StaticClass<UReimportCurveFactory>()
	{
		return UReimportCurveFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportCurveFactory(Z_Construct_UClass_UReimportCurveFactory, &UReimportCurveFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UReimportCurveFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportCurveFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

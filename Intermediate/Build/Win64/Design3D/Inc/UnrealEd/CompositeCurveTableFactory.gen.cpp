// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CompositeCurveTableFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCurveTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCompositeCurveTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCompositeCurveTableFactory::StaticRegisterNativesUCompositeCurveTableFactory()
	{
	}
	UClass* Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister()
	{
		return UCompositeCurveTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCurveTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCurveTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CompositeCurveTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CompositeCurveTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCurveTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCurveTableFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCurveTableFactory_Statics::ClassParams = {
		&UCompositeCurveTableFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTableFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCurveTableFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeCurveTableFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeCurveTableFactory, 35481522);
	template<> UNREALED_API UClass* StaticClass<UCompositeCurveTableFactory>()
	{
		return UCompositeCurveTableFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeCurveTableFactory(Z_Construct_UClass_UCompositeCurveTableFactory, &UCompositeCurveTableFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCompositeCurveTableFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCurveTableFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

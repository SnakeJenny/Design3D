// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/AnimCurveCompressionSettingsFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionSettingsFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettingsFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimCurveCompressionSettingsFactory::StaticRegisterNativesUAnimCurveCompressionSettingsFactory()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_NoRegister()
	{
		return UAnimCurveCompressionSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AnimCurveCompressionSettingsFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AnimCurveCompressionSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionSettingsFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::ClassParams = {
		&UAnimCurveCompressionSettingsFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionSettingsFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionSettingsFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionSettingsFactory, 3115368363);
	template<> UNREALED_API UClass* StaticClass<UAnimCurveCompressionSettingsFactory>()
	{
		return UAnimCurveCompressionSettingsFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionSettingsFactory(Z_Construct_UClass_UAnimCurveCompressionSettingsFactory, &UAnimCurveCompressionSettingsFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAnimCurveCompressionSettingsFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionSettingsFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

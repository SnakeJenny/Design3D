// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/HapticFeedbackEffectCurveFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffectCurveFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UHapticFeedbackEffectCurveFactory::StaticRegisterNativesUHapticFeedbackEffectCurveFactory()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_NoRegister()
	{
		return UHapticFeedbackEffectCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/HapticFeedbackEffectCurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/HapticFeedbackEffectCurveFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffectCurveFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::ClassParams = {
		&UHapticFeedbackEffectCurveFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticFeedbackEffectCurveFactory, 3527824501);
	template<> UNREALED_API UClass* StaticClass<UHapticFeedbackEffectCurveFactory>()
	{
		return UHapticFeedbackEffectCurveFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffectCurveFactory(Z_Construct_UClass_UHapticFeedbackEffectCurveFactory, &UHapticFeedbackEffectCurveFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UHapticFeedbackEffectCurveFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffectCurveFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/ForceFeedbackEffectFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackEffectFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackEffectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UForceFeedbackEffectFactory::StaticRegisterNativesUForceFeedbackEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister()
	{
		return UForceFeedbackEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ForceFeedbackEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ForceFeedbackEffectFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackEffectFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::ClassParams = {
		&UForceFeedbackEffectFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceFeedbackEffectFactory, 760227040);
	template<> UNREALED_API UClass* StaticClass<UForceFeedbackEffectFactory>()
	{
		return UForceFeedbackEffectFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackEffectFactory(Z_Construct_UClass_UForceFeedbackEffectFactory, &UForceFeedbackEffectFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UForceFeedbackEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackEffectFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloatParticleParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatParticleParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatParticleParameter::StaticRegisterNativesUDistributionFloatParticleParameter()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister()
	{
		return UDistributionFloatParticleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatParticleParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloatParameterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatParticleParameter.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParticleParameter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatParticleParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::ClassParams = {
		&UDistributionFloatParticleParameter::StaticClass,
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
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatParticleParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionFloatParticleParameter, 3952459215);
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatParticleParameter>()
	{
		return UDistributionFloatParticleParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatParticleParameter(Z_Construct_UClass_UDistributionFloatParticleParameter, &UDistributionFloatParticleParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatParticleParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatParticleParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

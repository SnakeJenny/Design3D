// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRateMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleRotationRateMultiplyLife::StaticRegisterNativesUParticleModuleRotationRateMultiplyLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_NoRegister()
	{
		return UParticleModuleRotationRateMultiplyLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation Rate * Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
		{ "ToolTip", "The scale factor that should be applied to the rotation rate.\nThe value is retrieved using the RelativeTime of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRotationRateMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationRateMultiplyLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::ClassParams = {
		&UParticleModuleRotationRateMultiplyLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleRotationRateMultiplyLife, 3672399730);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationRateMultiplyLife>()
	{
		return UParticleModuleRotationRateMultiplyLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRotationRateMultiplyLife(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife, &UParticleModuleRotationRateMultiplyLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRotationRateMultiplyLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRateMultiplyLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotationRateMultiplyLife::StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_NoRegister()
	{
		return UParticleModuleMeshRotationRateMultiplyLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics
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
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Rotation Rate * Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
		{ "ToolTip", "The scale factor that should be applied to the rotation rate.\nThe value is retrieved using the RelativeTime of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleMeshRotationRateMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::NewProp_LifeMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRateMultiplyLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::ClassParams = {
		&UParticleModuleMeshRotationRateMultiplyLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleMeshRotationRateMultiplyLife, 1311462502);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRateMultiplyLife>()
	{
		return UParticleModuleMeshRotationRateMultiplyLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotationRateMultiplyLife(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife, &UParticleModuleMeshRotationRateMultiplyLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotationRateMultiplyLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateMultiplyLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

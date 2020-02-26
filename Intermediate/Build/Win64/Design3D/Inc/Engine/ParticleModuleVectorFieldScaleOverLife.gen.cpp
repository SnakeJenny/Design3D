// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleVectorFieldScaleOverLife::StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister()
	{
		return UParticleModuleVectorFieldScaleOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLifeRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleOverLifeRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorFieldScaleOverLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "VF Scale/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw = { "VectorFieldScaleOverLifeRaw", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife = { "VectorFieldScaleOverLife", nullptr, (EPropertyFlags)0x0010000020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldScaleOverLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::ClassParams = {
		&UParticleModuleVectorFieldScaleOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVectorFieldScaleOverLife, 343044139);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldScaleOverLife>()
	{
		return UParticleModuleVectorFieldScaleOverLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldScaleOverLife(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife, &UParticleModuleVectorFieldScaleOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldScaleOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScaleOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

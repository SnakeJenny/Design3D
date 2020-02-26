// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotationRateOverLife::StaticRegisterNativesUParticleModuleMeshRotationRateOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister()
	{
		return UParticleModuleMeshRotationRateOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleRotRate_MetaData[];
#endif
		static void NewProp_bScaleRotRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleRotRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Rotation Rate over Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ToolTip", "If true, scale the current rotation rate by the value retrieved.\nOtherwise, set the rotation rate to the value retrieved." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_SetBit(void* Obj)
	{
		((UParticleModuleMeshRotationRateOverLife*)Obj)->bScaleRotRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate = { "bScaleRotRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleMeshRotationRateOverLife), &Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ToolTip", "The rotation rate desired.\nThe value is retrieved using the RelativeTime of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate = { "RotRate", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleMeshRotationRateOverLife, RotRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRateOverLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::ClassParams = {
		&UParticleModuleMeshRotationRateOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleMeshRotationRateOverLife, 464765127);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRateOverLife>()
	{
		return UParticleModuleMeshRotationRateOverLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotationRateOverLife(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife, &UParticleModuleMeshRotationRateOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotationRateOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

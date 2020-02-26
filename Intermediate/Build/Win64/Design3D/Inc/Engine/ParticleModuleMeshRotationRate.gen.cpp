// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotationRate::StaticRegisterNativesUParticleModuleMeshRotationRate()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister()
	{
		return UParticleModuleMeshRotationRate::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Init Mesh Rotation Rate" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
		{ "ToolTip", "Initial rotation rate, in rotations per second.\nThe value is retrieved using the EmitterTime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate = { "StartRotationRate", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleMeshRotationRate, StartRotationRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::ClassParams = {
		&UParticleModuleMeshRotationRate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleMeshRotationRate, 4075078084);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRate>()
	{
		return UParticleModuleMeshRotationRate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotationRate(Z_Construct_UClass_UParticleModuleMeshRotationRate, &UParticleModuleMeshRotationRate::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotationRate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

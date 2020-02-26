// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationOverLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleAccelerationOverLifetime::StaticRegisterNativesUParticleModuleAccelerationOverLifetime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister()
	{
		return UParticleModuleAccelerationOverLifetime::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelOverLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
		{ "ToolTip", "The acceleration of the particle over its lifetime.\nValue is obtained using the RelativeTime of the partice.\nThe current and base velocity values of the particle\nare then updated using the formula\n        velocity += acceleration* DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife = { "AccelOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAccelerationOverLifetime, AccelOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationOverLifetime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::ClassParams = {
		&UParticleModuleAccelerationOverLifetime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAccelerationOverLifetime, 2264811182);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationOverLifetime>()
	{
		return UParticleModuleAccelerationOverLifetime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationOverLifetime(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime, &UParticleModuleAccelerationOverLifetime::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationOverLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationOverLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

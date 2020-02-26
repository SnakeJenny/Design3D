// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
// End Cross Module References
	void UParticleModuleSpawn::StaticRegisterNativesUParticleModuleSpawn()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister()
	{
		return UParticleModuleSpawn::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyGlobalSpawnRateScale_MetaData[];
#endif
		static void NewProp_bApplyGlobalSpawnRateScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyGlobalSpawnRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurstScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BurstList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSpawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn" },
		{ "HideCategories", "Object ParticleModuleSpawnBase Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_SetBit(void* Obj)
	{
		((UParticleModuleSpawn*)Obj)->bApplyGlobalSpawnRateScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale = { "bApplyGlobalSpawnRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSpawn), &Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale_MetaData[] = {
		{ "Category", "Burst" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "Scale all burst entries by this amount." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale = { "BurstScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, BurstScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_MetaData[] = {
		{ "Category", "Burst" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The array of burst entries." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList = { "BurstList", nullptr, (EPropertyFlags)0x0010000002000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, BurstList), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_Inner = { "BurstList", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod_MetaData[] = {
		{ "Category", "Burst" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The method to utilize when burst-emitting particles." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod = { "ParticleBurstMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The scalar to apply to the rate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, RateScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The rate at which to spawn particles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, Rate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawn_Statics::ClassParams = {
		&UParticleModuleSpawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSpawn, 1081120037);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawn>()
	{
		return UParticleModuleSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSpawn(Z_Construct_UClass_UParticleModuleSpawn, &UParticleModuleSpawn::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

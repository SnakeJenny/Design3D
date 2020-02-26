// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleLODLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleLODLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
// End Cross Module References
	void UParticleLODLevel::StaticRegisterNativesUParticleLODLevel()
	{
	}
	UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister()
	{
		return UParticleLODLevel::StaticClass();
	}
	struct Z_Construct_UClass_UParticleLODLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakActiveParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PeakActiveParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvertedModules_MetaData[];
#endif
		static void NewProp_ConvertedModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConvertedModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceiverModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceiverModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventReceiverModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrbitModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrbitModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdateModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawningModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeDataModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TypeDataModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modules_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleLODLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleLODLevel.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles = { "PeakActiveParticles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, PeakActiveParticles), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
	};
#endif
	void Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_SetBit(void* Obj)
	{
		((UParticleLODLevel*)Obj)->ConvertedModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules = { "ConvertedModules", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleLODLevel), &Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "Event receiver modules only!" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules = { "EventReceiverModules", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, EventReceiverModules), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_Inner = { "EventReceiverModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "OrbitModules\n    These are used to do offsets of the sprite from the particle location." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules = { "OrbitModules", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, OrbitModules), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_Inner = { "OrbitModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModuleOrbit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "UpdateModules - These are called when particles are updated." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules = { "UpdateModules", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, UpdateModules), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_Inner = { "UpdateModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "SpawnModules - These are called when particles are spawned." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules = { "SpawnModules", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, SpawnModules), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_Inner = { "SpawnModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "SpawningModules - These are called to determine how many particles to spawn." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules = { "SpawningModules", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, SpawningModules), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_Inner = { "SpawningModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The optional EventGenerator module." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator = { "EventGenerator", nullptr, (EPropertyFlags)0x0010000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, EventGenerator), Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The SpawnRate/Burst module - required by all emitters." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule = { "SpawnModule", nullptr, (EPropertyFlags)0x0010000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "Module<SINGULAR> used for emitter type \"extension\"." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule = { "TypeDataModule", nullptr, (EPropertyFlags)0x0010000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, TypeDataModule), Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "An array of particle modules that contain the adjusted data for the LOD level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, Modules), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "An array of particle modules that contain the adjusted data for the LOD level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The required module for this LOD level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule = { "RequiredModule", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "True if the LOD level is enabled, meaning it should be updated and rendered." },
	};
#endif
	void Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UParticleLODLevel*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleLODLevel), &Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The index value of the LOD level" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleLODLevel, Level), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleLODLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleLODLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleLODLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleLODLevel_Statics::ClassParams = {
		&UParticleLODLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleLODLevel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::PropPointers),
		0,
		0x008830A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleLODLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleLODLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleLODLevel, 3862212874);
	template<> ENGINE_API UClass* StaticClass<UParticleLODLevel>()
	{
		return UParticleLODLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleLODLevel(Z_Construct_UClass_UParticleLODLevel, &UParticleLODLevel::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleLODLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleLODLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

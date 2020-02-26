// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleEventReceiverSpawn::StaticRegisterNativesUParticleModuleEventReceiverSpawn()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister()
	{
		return UParticleModuleEventReceiverSpawn::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBanPhysicalMaterials_MetaData[];
#endif
		static void NewProp_bBanPhysicalMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanPhysicalMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InheritVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritVelocity_MetaData[];
#endif
		static void NewProp_bInheritVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePSysLocation_MetaData[];
#endif
		static void NewProp_bUsePSysLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePSysLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseParticleTime_MetaData[];
#endif
		static void NewProp_bUseParticleTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseParticleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventReceiverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "EventReceiver Spawn" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others.\nWhen false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bBanPhysicalMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials = { "bBanPhysicalMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, PhysicalMaterials), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If bInheritVelocity is true, scale the velocity with this." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, InheritVelocityScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If true, use the velocity of the dying particle as the start velocity of\nthe spawned particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bInheritVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity = { "bInheritVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If true, use the location of the particle system component for spawning.\nif false (default), use the location of the particle event." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bUsePSysLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation = { "bUsePSysLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "For Death-based event receiving, if this is true, it indicates that the\nParticleTime of the event should be used to look-up the SpawnCount.\nOtherwise (and in all other events received), use the emitter time of\nthe event." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bUseParticleTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime = { "bUseParticleTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "The number of particles to spawn." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, SpawnCount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::ClassParams = {
		&UParticleModuleEventReceiverSpawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleEventReceiverSpawn, 2084214331);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverSpawn>()
	{
		return UParticleModuleEventReceiverSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventReceiverSpawn(Z_Construct_UClass_UParticleModuleEventReceiverSpawn, &UParticleModuleEventReceiverSpawn::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventReceiverSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

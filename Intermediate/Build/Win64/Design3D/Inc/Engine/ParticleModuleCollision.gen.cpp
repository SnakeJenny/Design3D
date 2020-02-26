// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Collision/ParticleModuleCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollision() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollision_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollision();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleCollision::StaticRegisterNativesUParticleModuleCollision()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCollision_NoRegister()
	{
		return UParticleModuleCollision::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCollisionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSourceActor_MetaData[];
#endif
		static void NewProp_bIgnoreSourceActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollideOnlyIfVisible_MetaData[];
#endif
		static void NewProp_bCollideOnlyIfVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollideOnlyIfVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropDetail_MetaData[];
#endif
		static void NewProp_bDropDetail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropDetail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalFudgeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalFudgeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyVerticalNormalsDecrementCount_MetaData[];
#endif
		static void NewProp_bOnlyVerticalNormalsDecrementCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyVerticalNormalsDecrementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPawnsDoNotDecrementCount_MetaData[];
#endif
		static void NewProp_bPawnsDoNotDecrementCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPawnsDoNotDecrementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTriggerVolumes_MetaData[];
#endif
		static void NewProp_bIgnoreTriggerVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTriggerVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyPhysics_MetaData[];
#endif
		static void NewProp_bApplyPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCompletionOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionCompletionOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingFactorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DampingFactorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DampingFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleCollisionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Actor Collision" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Collision/ParticleModuleCollision.h" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "Max distance at which particle collision will occur." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance = { "MaxCollisionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, MaxCollisionDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, then the source actor is ignored in collision checks.\nDefaults to true." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bIgnoreSourceActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor = { "bIgnoreSourceActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, Particle collision only if particle system is currently being rendered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bCollideOnlyIfVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible = { "bCollideOnlyIfVisible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, when the World->bDropDetail flag is set, the module will be ignored." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bDropDetail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail = { "bDropDetail", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "How long to delay before checking a particle for collisions.\nValue is retrieved using the EmitterTime.\nDuring update, the particle flag IgnoreCollisions will be\nset until the particle RelativeTime has surpassed the\nDelayAmount." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount = { "DelayAmount", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, DelayAmount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The fudge factor to use to determine vertical.\nTrue vertical will have a Hit.Normal.Z == 1.0\nThis will allow for Z components in the range of\n[1.0-VerticalFudgeFactor..1.0]\nto count as vertical collisions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor = { "VerticalFudgeFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, VerticalFudgeFactor), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, then collisions that do not have a vertical hit\nnormal will still react, but UsedMaxCollisions count will\nnot be decremented. (ie., They don't 'count' as collisions)\nUseful for having particles come to rest on floors." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bOnlyVerticalNormalsDecrementCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount = { "bOnlyVerticalNormalsDecrementCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, then collisions with Pawns will still react, but\nthe UsedMaxCollisions count will not be decremented.\n(ie., They don't 'count' as collisions)\nNOTE: Having this on prevents the code from running in parallel." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bPawnsDoNotDecrementCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount = { "bPawnsDoNotDecrementCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The directional scalar value - used to scale the bounds to\n'assist' in avoiding inter-penetration or large gaps." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar = { "DirScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, DirScalar), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The mass of the particle - for use when bApplyPhysics is true.\nValue is obtained using the EmitterTime at particle spawn." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass = { "ParticleMass", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, ParticleMass), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "Any trigger volumes that are hit will be ignored. NOTE: This can be turned off if the TrigerVolume physics object type is not in the CollisionTypes array.\nTurning this off is strongly recommended as having it on prevents the code from running off the game thread." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bIgnoreTriggerVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes = { "bIgnoreTriggerVolumes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, physic will be applied between a particle and the\nobject it collides with.\nThis is one-way - particle --> object. The particle does\nnot have physics applied to it - it just generates an\nimpulse applied to the object it collides with.\nNOTE: having this on prevents the code from running off the game thread." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_SetBit(void* Obj)
	{
		((UParticleModuleCollision*)Obj)->bApplyPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics = { "bApplyPhysics", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "Which ObjectTypes to collide with" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes = { "CollisionTypes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, CollisionTypes), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_Inner = { "CollisionTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "What to do once a particles MaxCollisions is reached.\nOne of the following:\nEPCC_Kill\n        Kill the particle when MaxCollisions is reached\nEPCC_Freeze\n        Freeze in place, NO MORE UPDATES\nEPCC_HaltCollisions,\n        Stop collision checks, keep updating everything\nEPCC_FreezeTranslation,\n        Stop translations, keep updating everything else\nEPCC_FreezeRotation,\n        Stop rotations, keep updating everything else\nEPCC_FreezeMovement\n        Stop all movement, keep updating" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption = { "CollisionCompletionOption", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, CollisionCompletionOption), Z_Construct_UEnum_Engine_EParticleCollisionComplete, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The maximum number of collisions a particle can have.\nValue is obtained using the EmitterTime at particle spawn." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions = { "MaxCollisions", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, MaxCollisions), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "How much to `slow' the rotation of the particle after a collision.\nValue is obtained using the EmitterTime at particle spawn." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation = { "DampingFactorRotation", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, DampingFactorRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "How much to `slow' the velocity of the particle after a collision.\nValue is obtained using the EmitterTime at particle spawn." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor = { "DampingFactor", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollision, DampingFactor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCollision_Statics::ClassParams = {
		&UParticleModuleCollision::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollision_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCollision, 1316927665);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCollision>()
	{
		return UParticleModuleCollision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCollision(Z_Construct_UClass_UParticleModuleCollision, &UParticleModuleCollision::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

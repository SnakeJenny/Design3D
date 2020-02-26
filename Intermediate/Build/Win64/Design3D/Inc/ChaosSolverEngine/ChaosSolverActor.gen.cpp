// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosSolverActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverActor() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AChaosSolverActor::StaticRegisterNativesAChaosSolverActor()
	{
	}
	UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister()
	{
		return AChaosSolverActor::StaticClass();
	}
	struct Z_Construct_UClass_AChaosSolverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasFloor_MetaData[];
#endif
		static void NewProp_HasFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingMinVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailingMinVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingMinSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailingMinSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingDataTimeWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailingDataTimeWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingDataSizeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrailingDataSizeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBreakingPerCell_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBreakingPerCell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingDataSpatialHashRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakingDataSpatialHashRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoBreakingDataSpatialHash_MetaData[];
#endif
		static void NewProp_DoBreakingDataSpatialHash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoBreakingDataSpatialHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingDataTimeWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakingDataTimeWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingDataSizeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BreakingDataSizeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionPerCell_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCollisionPerCell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionDataSpatialHashRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionDataSpatialHashRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoCollisionDataSpatialHash_MetaData[];
#endif
		static void NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoCollisionDataSpatialHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionDataTimeWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionDataTimeWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionDataSizeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionDataSizeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushOutPairIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PushOutPairIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushOutIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PushOutIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStepMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStepMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaosSolverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosSolverActor.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Display icon in the editor\n// A UBillboardComponent to hold Icon sprite" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData[] = {
		{ "Category", "ChaosPhysics|Floor" },
		{ "DisplayName", "Floor Height" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, FloorHeight), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor_MetaData[] = {
		{ "Category", "ChaosPhysics|Floor" },
		{ "DisplayName", "Use Floor" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->HasFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor = { "HasFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinVolumeThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinVolumeThreshold = { "TrailingMinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TrailingMinVolumeThreshold), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinVolumeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinSpeedThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinSpeedThreshold = { "TrailingMinSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TrailingMinSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinSpeedThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataTimeWindow_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "DisplayName", "Time Window" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Width of the time window in seconds for collecting trailings in a buffer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataTimeWindow = { "TrailingDataTimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TrailingDataTimeWindow), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataTimeWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataTimeWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataSizeMax_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "DisplayName", "Maximum Data Size" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Maximum number of trailings passed in a buffer to the ChaosNiagara dataInterface" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataSizeMax = { "TrailingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TrailingDataSizeMax), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataSizeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxBreakingPerCell_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Max Number Breakings Per Cell" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxBreakingPerCell = { "MaxBreakingPerCell", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, MaxBreakingPerCell), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxBreakingPerCell_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxBreakingPerCell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSpatialHashRadius_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Spatial Hash Radius" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSpatialHashRadius = { "BreakingDataSpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, BreakingDataSpatialHashRadius), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSpatialHashRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSpatialHashRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Use Spatial Hash" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoBreakingDataSpatialHash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash = { "DoBreakingDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataTimeWindow_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Time Window" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Width of the time window in seconds for collecting breakings in a buffer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataTimeWindow = { "BreakingDataTimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, BreakingDataTimeWindow), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataTimeWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataTimeWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSizeMax_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Maximum Data Size" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Maximum number of breakings passed in a buffer to the ChaosNiagara dataInterface" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSizeMax = { "BreakingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, BreakingDataSizeMax), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSizeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxCollisionPerCell_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "DisplayName", "Max Number Collisions Per Cell" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxCollisionPerCell = { "MaxCollisionPerCell", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, MaxCollisionPerCell), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxCollisionPerCell_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxCollisionPerCell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSpatialHashRadius_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "DisplayName", "Spatial Hash Radius" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSpatialHashRadius = { "CollisionDataSpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionDataSpatialHashRadius), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSpatialHashRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSpatialHashRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "DisplayName", "Use Spatial Hash" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoCollisionDataSpatialHash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash = { "DoCollisionDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataTimeWindow_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "DisplayName", "Time Window" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Width of the time window in seconds for collecting collisions in a buffer" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataTimeWindow = { "CollisionDataTimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionDataTimeWindow), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataTimeWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataTimeWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSizeMax_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "DisplayName", "Maximum Data Size" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Maximum number of collisions passed in a buffer to the ChaosNiagara dataInterface" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSizeMax = { "CollisionDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionDataSizeMax), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSizeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|Iterations" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "PushOut Iteration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations = { "PushOutPairIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, PushOutPairIterations), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|Iterations" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "PushOut Iteration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations = { "PushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, PushOutIterations), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|Iterations" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Collision Iteration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations = { "CollisionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, CollisionIterations), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "NumberOfSubSteps" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier = { "TimeStepMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChaosSolverActor, TimeStepMultiplier), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_HasFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingMinSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataTimeWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingDataSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxBreakingPerCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSpatialHashRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoBreakingDataSpatialHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataTimeWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingDataSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MaxCollisionPerCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSpatialHashRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoCollisionDataSpatialHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataTimeWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionDataSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaosSolverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosSolverActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams = {
		&AChaosSolverActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChaosSolverActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChaosSolverActor, 109998003);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<AChaosSolverActor>()
	{
		return AChaosSolverActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChaosSolverActor(Z_Construct_UClass_AChaosSolverActor, &AChaosSolverActor::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("AChaosSolverActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosSolverActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

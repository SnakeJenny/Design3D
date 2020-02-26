// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionComponent() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomComponentCacheParameters();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
	GEOMETRYCOLLECTIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
// End Cross Module References
class UScriptStruct* FGeomComponentCacheParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomComponentCacheParameters, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeomComponentCacheParameters"), sizeof(FGeomComponentCacheParameters), Get_Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeomComponentCacheParameters>()
{
	return FGeomComponentCacheParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeomComponentCacheParameters(FGeomComponentCacheParameters::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("GeomComponentCacheParameters"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeomComponentCacheParameters
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeomComponentCacheParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeomComponentCacheParameters")),new UScriptStruct::TCppStructOps<FGeomComponentCacheParameters>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeomComponentCacheParameters;
	struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingMinVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailingMinVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingMinSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailingMinSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailingDataSizeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrailingDataSizeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveTrailingData_MetaData[];
#endif
		static void NewProp_SaveTrailingData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveTrailingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionPerCell_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCollisionPerCell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialHashRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpatialHashRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoCollisionDataSpatialHash_MetaData[];
#endif
		static void NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoCollisionDataSpatialHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionDataMaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionDataMaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveCollisionData_MetaData[];
#endif
		static void NewProp_SaveCollisionData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveCollisionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseCacheBeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseCacheBeginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CacheMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CacheMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomComponentCacheParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Minimum volume to record trailing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold = { "TrailingMinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingMinVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Minimum speed to record trailing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold = { "TrailingMinSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingMinSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the trailing buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax = { "TrailingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingDataSizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer trailing during recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->SaveTrailingData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData = { "SaveTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum number of collisions per cell" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell = { "MaxCollisionPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, MaxCollisionPerCell), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SpatialHashRadius_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash radius for collision data" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SpatialHashRadius = { "SpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, SpatialHashRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SpatialHashRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SpatialHashRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash collision data" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->DoCollisionDataSpatialHash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash = { "DoCollisionDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataMaxSize_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the collision buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataMaxSize = { "CollisionDataMaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, CollisionDataMaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataMaxSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataMaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer collisions during recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->SaveCollisionData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData = { "SaveCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Cache mode, whether disabled, playing or recording" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime = { "ReverseCacheBeginTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, ReverseCacheBeginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "The cache to target when recording or playing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache = { "TargetCache", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TargetCache), Z_Construct_UClass_UGeometryCollectionCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Cache mode, whether disabled, playing or recording" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode = { "CacheMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, CacheMode), Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SpatialHashRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataMaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeomComponentCacheParameters",
		sizeof(FGeomComponentCacheParameters),
		alignof(FGeomComponentCacheParameters),
		Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeomComponentCacheParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeomComponentCacheParameters"), sizeof(FGeomComponentCacheParameters), Get_Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Hash() { return 2971975437U; }
	void UGeometryCollectionComponent::StaticRegisterNativesUGeometryCollectionComponent()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister()
	{
		return UGeometryCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterialID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BoneSelectedMaterialID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorMaterialID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InteriorMaterialID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyBoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialVelocityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialVelocityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSleepingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularSleepingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearSleepingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearSleepingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bouncyness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bouncyness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumMassClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumMassClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassAsDensity_MetaData[];
#endif
		static void NewProp_MassAsDensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MassAsDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageThreshold;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableClustering_MetaData[];
#endif
		static void NewProp_EnableClustering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableClustering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Simulating_MetaData[];
#endif
		static void NewProp_Simulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Simulating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "GeometryCollectionComponent" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Tracked editor actor that owns the original component so we can write back recorded caches\nfrom PIE." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor = { "EditorActor", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, EditorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_BoneSelectedMaterialID_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_BoneSelectedMaterialID = { "BoneSelectedMaterialID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, BoneSelectedMaterialID), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_BoneSelectedMaterialID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_BoneSelectedMaterialID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InteriorMaterialID_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InteriorMaterialID = { "InteriorMaterialID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InteriorMaterialID), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InteriorMaterialID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InteriorMaterialID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBoxComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBoxComponent = { "DummyBoxComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DummyBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters_MetaData[] = {
		{ "Category", "ChaosPhysics|Caching" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters = { "CacheParameters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CacheParameters), Z_Construct_UScriptStruct_FGeomComponentCacheParameters, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitialVelocityType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularSleepingThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Coefficient of Restitution (aka Bouncyness)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularSleepingThreshold = { "AngularSleepingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, AngularSleepingThreshold), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularSleepingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularSleepingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearSleepingThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Uniform Friction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearSleepingThreshold = { "LinearSleepingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, LinearSleepingThreshold), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearSleepingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearSleepingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Bouncyness_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Coefficient of Restitution (aka Bouncyness)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Bouncyness = { "Bouncyness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, Bouncyness), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Bouncyness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Bouncyness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Uniform Friction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, Friction), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Friction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionParticlesFraction), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionParticlesFraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionParticlesFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinimumMassClamp_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Smallest allowable mass (def:0.1)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinimumMassClamp = { "MinimumMassClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, MinimumMassClamp), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinimumMassClamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinimumMassClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Total Mass of Collection (def : 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, Mass), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Mass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Mass As Density (def:false)" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->MassAsDensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity = { "MassAsDensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxLevelSetResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinLevelSetResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ImplicitType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionType), Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Damage threshold for clusters at differnet levels." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DamageThreshold), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_Inner = { "DamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum level for cluster breaks" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel = { "MaxClusterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, MaxClusterLevel), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->EnableClustering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering = { "EnableClustering", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "*  ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ObjectType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "When Simulating is enabled the Component will initialize its rigid bodies within the solver." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->Simulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating = { "Simulating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_FieldSystem_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "FieldSystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, FieldSystem), Z_Construct_UClass_AFieldSystemActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_FieldSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_FieldSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DynamicCollection_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "DynamicCollection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DynamicCollection = { "DynamicCollection", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DynamicCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DynamicCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DynamicCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection = { "RestCollection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RestCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Chaos RBD Solver" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_BoneSelectedMaterialID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InteriorMaterialID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularSleepingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearSleepingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Bouncyness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionParticlesFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinimumMassClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MassAsDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MinLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ImplicitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_FieldSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DynamicCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::ClassParams = {
		&UGeometryCollectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCollectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCollectionComponent, 3495104232);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionComponent>()
	{
		return UGeometryCollectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCollectionComponent(Z_Construct_UClass_UGeometryCollectionComponent, &UGeometryCollectionComponent::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UGeometryCollectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

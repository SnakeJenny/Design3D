// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavMesh/RecastNavMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastNavMesh() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ERecastPartitioning();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ERecastPartitioning_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ERecastPartitioning"));
		}
		return Singleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERecastPartitioning::Type>()
	{
		return ERecastPartitioning_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERecastPartitioning(ERecastPartitioning_StaticEnum, TEXT("/Script/NavigationSystem"), TEXT("ERecastPartitioning"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Hash() { return 71652846U; }
	UEnum* Z_Construct_UEnum_NavigationSystem_ERecastPartitioning()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERecastPartitioning"), 0, Get_Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERecastPartitioning::Monotone", (int64)ERecastPartitioning::Monotone },
				{ "ERecastPartitioning::Watershed", (int64)ERecastPartitioning::Watershed },
				{ "ERecastPartitioning::ChunkyMonotone", (int64)ERecastPartitioning::ChunkyMonotone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
				{ "ToolTip", "keep in sync with rcRegionPartitioning enum!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
				nullptr,
				"ERecastPartitioning",
				"ERecastPartitioning::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ARecastNavMesh::StaticRegisterNativesARecastNavMesh()
	{
	}
	UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister()
	{
		return ARecastNavMesh::StaticClass();
	}
	struct Z_Construct_UClass_ARecastNavMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalDeviationFromGroundCompensation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalDeviationFromGroundCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeuristicScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeuristicScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSetUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSetUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVoxelCache_MetaData[];
#endif
		static void NewProp_bUseVoxelCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVoxelCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNavLinkAsPathEnd_MetaData[];
#endif
		static void NewProp_bAllowNavLinkAsPathEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNavLinkAsPathEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVirtualFilters_MetaData[];
#endif
		static void NewProp_bUseVirtualFilters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVirtualFilters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreEmptyTileLayers_MetaData[];
#endif
		static void NewProp_bStoreEmptyTileLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreEmptyTileLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBetterOffsetsFromCorners_MetaData[];
#endif
		static void NewProp_bUseBetterOffsetsFromCorners_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBetterOffsetsFromCorners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFullyAsyncNavDataGathering_MetaData[];
#endif
		static void NewProp_bDoFullyAsyncNavDataGathering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFullyAsyncNavDataGathering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanFromTileCache_MetaData[];
#endif
		static void NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanFromTileCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanSequences_MetaData[];
#endif
		static void NewProp_bFilterLowSpanSequences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanSequences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMarkLowHeightAreas_MetaData[];
#endif
		static void NewProp_bMarkLowHeightAreas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkLowHeightAreas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformVoxelFiltering_MetaData[];
#endif
		static void NewProp_bPerformVoxelFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformVoxelFiltering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortNavigationAreasByCost_MetaData[];
#endif
		static void NewProp_bSortNavigationAreasByCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortNavigationAreasByCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerChunkSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerChunkSplits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionChunkSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegionChunkSplits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerPartitioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerPartitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionPartitioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RegionPartitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxHierarchicalSearchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxHierarchicalSearchNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxSearchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxSearchNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshOriginOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshOriginOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefSaltBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefSaltBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefNavPolyBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefNavPolyBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyRefTileBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyRefTileBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileNumberHardLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileNumberHardLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousTileGenerationJobsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimplificationError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimplificationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeRegionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MergeRegionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRegionArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRegionArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeUU_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSizeUU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedTilePoolSize_MetaData[];
#endif
		static void NewProp_bFixedTilePoolSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedTilePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMesh_MetaData[];
#endif
		static void NewProp_bDrawNavMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData[];
#endif
		static void NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDistinctlyDrawTilesBeingBuilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOctreeDetails_MetaData[];
#endif
		static void NewProp_bDrawOctreeDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOctreeDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOctree_MetaData[];
#endif
		static void NewProp_bDrawOctree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOctree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawClusters_MetaData[];
#endif
		static void NewProp_bDrawClusters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawClusters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedNavLinks_MetaData[];
#endif
		static void NewProp_bDrawFailedNavLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedNavLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavLinks_MetaData[];
#endif
		static void NewProp_bDrawNavLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawLabelsOnPathNodes_MetaData[];
#endif
		static void NewProp_bDrawLabelsOnPathNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLabelsOnPathNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDefaultPolygonCost_MetaData[];
#endif
		static void NewProp_bDrawDefaultPolygonCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDefaultPolygonCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPolygonLabels_MetaData[];
#endif
		static void NewProp_bDrawPolygonLabels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPolygonLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTileLabels_MetaData[];
#endif
		static void NewProp_bDrawTileLabels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTileLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPathCollidingGeometry_MetaData[];
#endif
		static void NewProp_bDrawPathCollidingGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPathCollidingGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTileBounds_MetaData[];
#endif
		static void NewProp_bDrawTileBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTileBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMeshEdges_MetaData[];
#endif
		static void NewProp_bDrawNavMeshEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMeshEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFilledPolys_MetaData[];
#endif
		static void NewProp_bDrawFilledPolys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFilledPolys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPolyEdges_MetaData[];
#endif
		static void NewProp_bDrawPolyEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPolyEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTriangleEdges_MetaData[];
#endif
		static void NewProp_bDrawTriangleEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTriangleEdges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecastNavMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationData,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Tags Transform Utilities|Transformation Actor Layers Replication" },
		{ "IncludePath", "NavMesh/RecastNavMesh.h" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation_MetaData[] = {
		{ "Category", "Query" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Value added to each search height to compensate for error between navmesh polys and walkable geometry" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation = { "VerticalDeviationFromGroundCompensation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, VerticalDeviationFromGroundCompensation), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale_MetaData[] = {
		{ "Category", "Query" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Euclidean distance heuristic scale used while pathfinding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale = { "HeuristicScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, HeuristicScale), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "indicates how often we will sort navigation tiles to mach players position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval = { "TileSetUpdateInterval", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TileSetUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Cache rasterized voxels instead of just collision vertices/indices in navigation octree" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bUseVoxelCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache = { "bUseVoxelCache", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, paths can end at navlink poly (not the ground one!)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bAllowNavLinkAsPathEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd = { "bAllowNavLinkAsPathEnd", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Indicates whether default navigation filters will use virtual functions. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bUseVirtualFilters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters = { "bUseVirtualFilters", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false." },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bStoreEmptyTileLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers = { "bStoreEmptyTileLayers", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bUseBetterOffsetsFromCorners = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners = { "bUseBetterOffsetsFromCorners", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDoFullyAsyncNavDataGathering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering = { "bDoFullyAsyncNavDataGathering", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bFilterLowSpanFromTileCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache = { "bFilterLowSpanFromTileCache", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only single low height span will be allowed under valid one" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bFilterLowSpanSequences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences = { "bFilterLowSpanSequences", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bMarkLowHeightAreas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas = { "bMarkLowHeightAreas", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "controls whether voxel filterring will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n    Results in generated navemesh better fitting navigation bounds, but hits (a bit) generation performance" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bPerformVoxelFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering = { "bPerformVoxelFiltering", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Controls whether Navigation Areas will be sorted by cost before application\n    to navmesh during navmesh generation. This is relevant then there are\n    areas overlapping and we want to have area cost express area relevancy\n    as well. Setting it to true will result in having area sorted by cost,\n    but it will also increase navmesh generation cost a bit" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bSortNavigationAreasByCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost = { "bSortNavigationAreasByCost", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits = { "LayerChunkSplits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, LayerChunkSplits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits = { "RegionChunkSplits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, RegionChunkSplits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating tile layers" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning = { "LayerPartitioning", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, LayerPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating navmesh polys" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning = { "RegionPartitioning", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, RegionPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "specifes default limit to A* nodes used when performing hierarchical navigation queries." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes = { "DefaultMaxHierarchicalSearchNodes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxHierarchicalSearchNodes), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "specifes default limit to A* nodes used when performing navigation queries.\n    Can be overridden by passing custom FNavigationQueryFilter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes = { "DefaultMaxSearchNodes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxSearchNodes), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "navmesh draw distance in game (always visible in editor)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance = { "DefaultDrawDistance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Use this if you don't want your tiles to start at (0,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset = { "NavMeshOriginOffset", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, NavMeshOriginOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits = { "PolyRefSaltBits", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefSaltBits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits = { "PolyRefNavPolyBits", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefNavPolyBits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits = { "PolyRefTileBits", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefTileBits), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n    having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n    allocated up front (subject to change, but that's where it's at now)\n    @note TileNumberHardLimit is always rounded up to the closest power of 2" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit = { "TileNumberHardLimit", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TileNumberHardLimit), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount = { "MaxSimultaneousTileGenerationJobsCount", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MaxSimultaneousTileGenerationJobsCount), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "How much navigable shapes can get simplified - the higher the value the more freedom" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError = { "MaxSimplificationError", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MaxSimplificationError), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The size limit of regions to be merged with bigger regions (watershed partitioning only)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize = { "MergeRegionSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MergeRegionSize), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The minimum dimension of area. Areas smaller than this will be discarded" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea = { "MinRegionArea", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, MinRegionArea), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight = { "AgentMaxStepHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxStepHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The maximum slope (angle) that the agent can move on." },
		{ "UIMax", "89.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope = { "AgentMaxSlope", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxSlope), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Size of the tallest agent that will path with this navmesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight = { "AgentMaxHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Radius of smallest agent to traverse this navmesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, AgentRadius), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical size of voxelization cell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, CellHeight), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "horizontal size of voxelization cell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, CellSize), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "300.0" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "size of single tile, expressed in uu" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU = { "TileSizeUU", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TileSizeUU), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "editcondition", "bFixedTilePoolSize" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "maximum number of tiles NavMesh can hold" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize = { "TilePoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, TilePoolSize), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bFixedTilePoolSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize = { "bFixedTilePoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical offset added to navmesh's debug representation for better readability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset = { "DrawOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecastNavMesh, DrawOffset), METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawNavMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh = { "bDrawNavMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDistinctlyDrawTilesBeingBuilt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt = { "bDistinctlyDrawTilesBeingBuilt", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_MetaData[] = {
		{ "Category", "Display" },
		{ "editcondition", "bDrawOctree" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawOctreeDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails = { "bDrawOctreeDetails", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw edges of every navmesh's triangle" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawOctree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree = { "bDrawOctree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawClusters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters = { "bDrawClusters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawFailedNavLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks = { "bDrawFailedNavLinks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawNavLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks = { "bDrawNavLinks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawLabelsOnPathNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes = { "bDrawLabelsOnPathNodes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawDefaultPolygonCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost = { "bDrawDefaultPolygonCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawPolygonLabels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels = { "bDrawPolygonLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawTileLabels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels = { "bDrawTileLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor." },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawPathCollidingGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry = { "bDrawPathCollidingGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw the tile boundaries" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawTileBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds = { "bDrawTileBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw border-edges" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawNavMeshEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges = { "bDrawNavMeshEdges", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if disabled skips filling drawn navmesh polygons" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawFilledPolys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys = { "bDrawFilledPolys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw edges of every poly (i.e. not only border-edges)" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawPolyEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges = { "bDrawPolyEdges", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "should we draw edges of every navmesh's triangle" },
	};
#endif
	void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit(void* Obj)
	{
		((ARecastNavMesh*)Obj)->bDrawTriangleEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges = { "bDrawTriangleEdges", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecastNavMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecastNavMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams = {
		&ARecastNavMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers),
		0,
		0x009002A6u,
		METADATA_PARAMS(Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecastNavMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARecastNavMesh, 543717506);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ARecastNavMesh>()
	{
		return ARecastNavMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecastNavMesh(Z_Construct_UClass_ARecastNavMesh, &ARecastNavMesh::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ARecastNavMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecastNavMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ARecastNavMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

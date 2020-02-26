// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANavigationData;
class AController;
struct FVector;
class AActor;
class UObject;
class UNavigationQueryFilter;
class ANavMeshBoundsVolume;
enum class ENavDataGatheringModeConfig : uint8;
class UNavigationPath;
class UNavigationSystemV1;
#ifdef NAVIGATIONSYSTEM_NavigationSystem_generated_h
#error "NavigationSystem.generated.h already included, missing '#pragma once' in NavigationSystem.h"
#endif
#define NAVIGATIONSYSTEM_NavigationSystem_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_45_DELEGATE \
struct _Script_NavigationSystem_eventOnNavDataGenericEvent_Parms \
{ \
	ANavigationData* NavData; \
}; \
static inline void FOnNavDataGenericEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavDataGenericEvent, ANavigationData* NavData) \
{ \
	_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms Parms; \
	Parms.NavData=NavData; \
	OnNavDataGenericEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystemV1::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystemV1::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystemV1::GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystemV1::GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystemV1::ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated) \
	{ \
		P_GET_OBJECT(ANavMeshBoundsVolume,Z_Param_NavVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNavigationBoundsUpdated(Z_Param_NavVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryGatheringMode) \
	{ \
		P_GET_ENUM(ENavDataGatheringModeConfig,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGeometryGatheringMode(ENavDataGatheringModeConfig(Z_Param_NewMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterNavigationInvoker(Z_Param_Invoker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileGenerationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileRemovalRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterNavigationInvoker(Z_Param_Invoker,Z_Param_TileGenerationRadius,Z_Param_TileRemovalRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetMaxSimultaneousTileGenerationJobsCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxNumberOfJobs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxSimultaneousTileGenerationJobsCount(Z_Param_MaxNumberOfJobs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigationRaycast) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_OBJECT(AController,Z_Param_Querier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::NavigationRaycast(Z_Param_WorldContextObject,Z_Param_Out_RayStart,Z_Param_Out_RayEnd,Z_Param_Out_HitLocation,Z_Param_FilterClass,Z_Param_Querier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToActorSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TetherDistance); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystemV1::FindPathToActorSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_GoalActor,Z_Param_TetherDistance,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystemV1::FindPathToLocationSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::IsNavigationBeingBuilt(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathLength) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathLength); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystemV1::GetPathLength(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathLength,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathCost) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathCost); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystemV1::GetPathCost(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathCost,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedLocation); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_Out_ProjectedLocation,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavigationSystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationSystemV1**)Z_Param__Result=UNavigationSystemV1::GetNavigationSystem(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystemV1::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystemV1::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystemV1::GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystemV1::GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UNavigationSystemV1::ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated) \
	{ \
		P_GET_OBJECT(ANavMeshBoundsVolume,Z_Param_NavVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNavigationBoundsUpdated(Z_Param_NavVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryGatheringMode) \
	{ \
		P_GET_ENUM(ENavDataGatheringModeConfig,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGeometryGatheringMode(ENavDataGatheringModeConfig(Z_Param_NewMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterNavigationInvoker(Z_Param_Invoker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNavigationInvoker) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Invoker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileGenerationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TileRemovalRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterNavigationInvoker(Z_Param_Invoker,Z_Param_TileGenerationRadius,Z_Param_TileRemovalRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetMaxSimultaneousTileGenerationJobsCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxNumberOfJobs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxSimultaneousTileGenerationJobsCount(Z_Param_MaxNumberOfJobs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigationRaycast) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_OBJECT(AController,Z_Param_Querier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::NavigationRaycast(Z_Param_WorldContextObject,Z_Param_Out_RayStart,Z_Param_Out_RayEnd,Z_Param_Out_HitLocation,Z_Param_FilterClass,Z_Param_Querier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToActorSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TetherDistance); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystemV1::FindPathToActorSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_GoalActor,Z_Param_TetherDistance,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationPath**)Z_Param__Result=UNavigationSystemV1::FindPathToLocationSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_PathfindingContext,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::IsNavigationBeingBuilt(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathLength) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathLength); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystemV1::GetPathLength(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathLength,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathCost) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PathCost); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystemV1::GetPathCost(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathCost,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedLocation); \
		P_GET_OBJECT(ANavigationData,Z_Param_NavData); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_STRUCT(FVector,Z_Param_QueryExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_Out_ProjectedLocation,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavigationSystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNavigationSystemV1**)Z_Param__Result=UNavigationSystemV1::GetNavigationSystem(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemV1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemV1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemV1(UNavigationSystemV1&&); \
	NO_API UNavigationSystemV1(const UNavigationSystemV1&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemV1(UNavigationSystemV1&&); \
	NO_API UNavigationSystemV1(const UNavigationSystemV1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemV1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrowdManagerClass() { return STRUCT_OFFSET(UNavigationSystemV1, CrowdManagerClass); } \
	FORCEINLINE static uint32 __PPO__DataGatheringMode() { return STRUCT_OFFSET(UNavigationSystemV1, DataGatheringMode); } \
	FORCEINLINE static uint32 __PPO__ActiveTilesUpdateInterval() { return STRUCT_OFFSET(UNavigationSystemV1, ActiveTilesUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__SupportedAgents() { return STRUCT_OFFSET(UNavigationSystemV1, SupportedAgents); } \
	FORCEINLINE static uint32 __PPO__OperationMode() { return STRUCT_OFFSET(UNavigationSystemV1, OperationMode); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_97_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemV1>();

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemModuleConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemModuleConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	NO_API UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	NO_API UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemModuleConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_997_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1000_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemModuleConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

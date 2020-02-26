// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FVector;
struct FVector2D;
class UObject;
class UStaticMesh;
struct FIntVector;
struct FPredictProjectilePathParams;
struct FPredictProjectilePathResult;
struct FHitResult;
class AActor;
class USaveGame;
class UBlueprint;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UMaterialInterface;
class USceneComponent;
struct FRotator;
class UDecalComponent;
class UReverbEffect;
class USoundMix;
class USoundClass;
class UForceFeedbackEffect;
class UForceFeedbackAttenuation;
class UForceFeedbackComponent;
class UDialogueWave;
struct FDialogueContext;
class USoundAttenuation;
class UAudioComponent;
class USoundBase;
class USoundConcurrency;
class UParticleSystem;
enum class EPSCPoolMethod : uint8;
class UParticleSystemComponent;
class UCameraShake;
class AController;
class UDamageType;
class AGameStateBase;
class AGameModeBase;
class ULevelStreaming;
struct FLatentActionInfo;
class APlayerCameraManager;
class ACharacter;
class APawn;
class UGameInstance;
class UInterface;
struct FTransform;
enum class ESpawnActorCollisionHandlingMethod : uint8;
#ifdef ENGINE_GameplayStatics_generated_h
#error "GameplayStatics.generated.h already included, missing '#pragma once' in GameplayStatics.h"
#endif
#define ENGINE_GameplayStatics_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasLaunchOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OptionToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::HasLaunchOption(Z_Param_OptionToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DefaultValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GetIntOption(Z_Param_Options,Z_Param_Key,Z_Param_DefaultValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::HasOption(Z_Param_Options,Z_Param_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameplayStatics::ParseOption(Z_Param_Options,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Pair); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Key); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetKeyValue(Z_Param_Pair,Z_Param_Out_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldToScreen) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::ProjectWorldToScreen(Z_Param_Player,Z_Param_Out_WorldPosition,Z_Param_Out_ScreenPosition,Z_Param_bPlayerViewportRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeprojectScreenToWorld) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::DeprojectScreenToWorld(Z_Param_Player,Z_Param_Out_ScreenPosition,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrassOverlappingSphereCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_CenterPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GrassOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebaseZeroOriginOntoLocal) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UGameplayStatics::RebaseZeroOriginOntoLocal(Z_Param_WorldContextObject,Z_Param_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebaseLocalOriginOntoZero) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UGameplayStatics::RebaseLocalOriginOntoZero(Z_Param_WorldContextObject,Z_Param_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOriginLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FIntVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetWorldOriginLocation(Z_Param_WorldContextObject,Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldOriginLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGameplayStatics::GetWorldOriginLocation(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuggestProjectileVelocity_CustomArc) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLaunchVelocity); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArcParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::SuggestProjectileVelocity_CustomArc(Z_Param_WorldContextObject,Z_Param_Out_OutLaunchVelocity,Z_Param_StartPos,Z_Param_EndPos,Z_Param_OverrideGravityZ,Z_Param_ArcParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_Advanced) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FPredictProjectilePathParams,Z_Param_Out_PredictParams); \
		P_GET_STRUCT_REF(FPredictProjectilePathResult,Z_Param_Out_PredictResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_Advanced(Z_Param_WorldContextObject,Z_Param_Out_PredictParams,Z_Param_Out_PredictResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByTraceChannel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPathPositions); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLastTraceDestination); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bTracePath); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ProjectileRadius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SimFrequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSimTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(Z_Param_WorldContextObject,Z_Param_Out_OutHit,Z_Param_Out_OutPathPositions,Z_Param_Out_OutLastTraceDestination,Z_Param_StartPos,Z_Param_LaunchVelocity,Z_Param_bTracePath,Z_Param_ProjectileRadius,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_DrawDebugTime,Z_Param_SimFrequency,Z_Param_MaxSimTime,Z_Param_OverrideGravityZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByObjectType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPathPositions); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLastTraceDestination); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bTracePath); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ProjectileRadius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SimFrequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSimTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(Z_Param_WorldContextObject,Z_Param_Out_OutHit,Z_Param_Out_OutPathPositions,Z_Param_Out_OutLastTraceDestination,Z_Param_StartPos,Z_Param_LaunchVelocity,Z_Param_bTracePath,Z_Param_ProjectileRadius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_DrawDebugTime,Z_Param_SimFrequency,Z_Param_MaxSimTime,Z_Param_OverrideGravityZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSuggestProjectileVelocity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TossVelocity); \
		P_GET_STRUCT(FVector,Z_Param_StartLocation); \
		P_GET_STRUCT(FVector,Z_Param_EndLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaunchSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceOption); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionRadius); \
		P_GET_UBOOL(Z_Param_bFavorHighArc); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::BlueprintSuggestProjectileVelocity(Z_Param_WorldContextObject,Z_Param_Out_TossVelocity,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_LaunchSpeed,Z_Param_OverrideGravityZ,ESuggestProjVelocityTraceOption::Type(Z_Param_TraceOption),Z_Param_CollisionRadius,Z_Param_bFavorHighArc,Z_Param_bDrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlatformName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameplayStatics::GetPlatformName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLiveStreaming) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::EnableLiveStreaming(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAccurateRealTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PartialSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAccurateRealTime(Z_Param_WorldContextObject,Z_Param_Out_Seconds,Z_Param_Out_PartialSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetAudioTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetRealTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetUnpausedTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldDeltaSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetWorldDeltaSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteGameInSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::DeleteGameInSlot(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameFromSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UGameplayStatics::LoadGameFromSlot(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSaveGameExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::DoesSaveGameExist(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::SaveGameToSlot(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSaveGameObjectFromBlueprint) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_SaveGameBlueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UGameplayStatics::CreateSaveGameObjectFromBlueprint(Z_Param_SaveGameBlueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSaveGameObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SaveGameClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UGameplayStatics::CreateSaveGameObject(Z_Param_SaveGameClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCollisionUV) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannel); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::FindCollisionUV(Z_Param_Out_Hit,Z_Param_UVChannel,Z_Param_Out_UV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSurfaceType) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=UGameplayStatics::GetSurfaceType(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeHitResult) \
	{ \
		P_GET_UBOOL(Z_Param_bBlockingHit); \
		P_GET_UBOOL(Z_Param_bInitialOverlap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_GET_STRUCT(FVector,Z_Param_ImpactNormal); \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMat); \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HitItem); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FaceIndex); \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=UGameplayStatics::MakeHitResult(Z_Param_bBlockingHit,Z_Param_bInitialOverlap,Z_Param_Time,Z_Param_Distance,Z_Param_Location,Z_Param_ImpactPoint,Z_Param_Normal,Z_Param_ImpactNormal,Z_Param_PhysMat,Z_Param_HitActor,Z_Param_HitComponent,Z_Param_HitBoneName,Z_Param_HitItem,Z_Param_FaceIndex,Z_Param_TraceStart,Z_Param_TraceEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakHitResult) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_UBOOL_REF(Z_Param_Out_bBlockingHit); \
		P_GET_UBOOL_REF(Z_Param_Out_bInitialOverlap); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Time); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal); \
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_PhysMat); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_HitActor); \
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_HitComponent); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_HitBoneName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_HitItem); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_FaceIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::BreakHitResult(Z_Param_Out_Hit,Z_Param_Out_bBlockingHit,Z_Param_Out_bInitialOverlap,Z_Param_Out_Time,Z_Param_Out_Distance,Z_Param_Out_Location,Z_Param_Out_ImpactPoint,Z_Param_Out_Normal,Z_Param_Out_ImpactNormal,Z_Param_Out_PhysMat,Z_Param_Out_HitActor,Z_Param_Out_HitComponent,Z_Param_Out_HitBoneName,Z_Param_Out_HitItem,Z_Param_Out_FaceIndex,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecalAttached) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial); \
		P_GET_STRUCT(FVector,Z_Param_DecalSize); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDecalComponent**)Z_Param__Result=UGameplayStatics::SpawnDecalAttached(Z_Param_DecalMaterial,Z_Param_DecalSize,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_LifeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecalAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial); \
		P_GET_STRUCT(FVector,Z_Param_DecalSize); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDecalComponent**)Z_Param__Result=UGameplayStatics::SpawnDecalAtLocation(Z_Param_WorldContextObject,Z_Param_DecalMaterial,Z_Param_DecalSize,Z_Param_Location,Z_Param_Rotation,Z_Param_LifeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAudioChannelCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GetMaxAudioChannelCount(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxAudioChannelsScaled) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxChannelCountScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetMaxAudioChannelsScaled(Z_Param_WorldContextObject,Z_Param_MaxChannelCountScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReverbEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UReverbEffect**)Z_Param__Result=UGameplayStatics::GetCurrentReverbEffect(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateReverbEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::DeactivateReverbEffect(Z_Param_WorldContextObject,Z_Param_TagName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateReverbEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UReverbEffect,Z_Param_ReverbEffect); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::ActivateReverbEffect(Z_Param_WorldContextObject,Z_Param_ReverbEffect,Z_Param_TagName,Z_Param_Priority,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSoundMixModifiers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::ClearSoundMixModifiers(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopSoundMixModifier) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PopSoundMixModifier(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushSoundMixModifier) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PushSoundMixModifier(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSoundMixClassOverride) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_GET_OBJECT(USoundClass,Z_Param_InSoundClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::ClearSoundMixClassOverride(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier,Z_Param_InSoundClass,Z_Param_FadeOutTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundMixClassOverride) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_GET_OBJECT(USoundClass,Z_Param_InSoundClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInTime); \
		P_GET_UBOOL(Z_Param_bApplyToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetSoundMixClassOverride(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier,Z_Param_InSoundClass,Z_Param_Volume,Z_Param_Pitch,Z_Param_FadeInTime,Z_Param_bApplyToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseSoundMix) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetBaseSoundMix(Z_Param_WorldContextObject,Z_Param_InSoundMix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreSubtitlesEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::AreSubtitlesEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubtitlesEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetSubtitlesEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnForceFeedbackAttached) \
	{ \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IntensityMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UForceFeedbackComponent**)Z_Param__Result=UGameplayStatics::SpawnForceFeedbackAttached(Z_Param_ForceFeedbackEffect,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bLooping,Z_Param_IntensityMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnForceFeedbackAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IntensityMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UForceFeedbackComponent**)Z_Param__Result=UGameplayStatics::SpawnForceFeedbackAtLocation(Z_Param_WorldContextObject,Z_Param_ForceFeedbackEffect,Z_Param_Location,Z_Param_Rotation,Z_Param_bLooping,Z_Param_IntensityMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDialogueAttached) \
	{ \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogueAttached(Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDialogueAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogueAtLocation(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDialogueAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlayDialogueAtLocation(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDialogue2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogue2D(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDialogue2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlayDialogue2D(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSoundAttached) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSoundAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSound2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::CreateSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSound2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlaySound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalListenerFocusParameters) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusAzimuthScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusAzimuthScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusDistanceScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusDistanceScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusVolumeScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusVolumeScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusPriorityScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusPriorityScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetGlobalListenerFocusParameters(Z_Param_WorldContextObject,Z_Param_FocusAzimuthScale,Z_Param_NonFocusAzimuthScale,Z_Param_FocusDistanceScale,Z_Param_NonFocusDistanceScale,Z_Param_FocusVolumeScale,Z_Param_NonFocusVolumeScale,Z_Param_FocusPriorityScale,Z_Param_NonFocusPriorityScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalPitchModulation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchModulation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeSec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetGlobalPitchModulation(Z_Param_WorldContextObject,Z_Param_PitchModulation,Z_Param_TimeSec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaximumRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::AreAnyListenersWithinRange(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_MaximumRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEmitterAttached) \
	{ \
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolingMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystemComponent**)Z_Param__Result=UGameplayStatics::SpawnEmitterAttached(Z_Param_EmitterTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy,EPSCPoolMethod(Z_Param_PoolingMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEmitterAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolingMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystemComponent**)Z_Param__Result=UGameplayStatics::SpawnEmitterAtLocation(Z_Param_WorldContextObject,Z_Param_EmitterTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,Z_Param_bAutoDestroy,EPSCPoolMethod(Z_Param_PoolingMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayWorldCameraShake) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_STRUCT(FVector,Z_Param_Epicenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InnerRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OuterRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bOrientShakeTowardsEpicenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlayWorldCameraShake(Z_Param_WorldContextObject,Z_Param_Shake,Z_Param_Epicenter,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_Falloff,Z_Param_bOrientShakeTowardsEpicenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::ApplyDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPointDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitFromDirection); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::ApplyPointDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_Out_HitFromDirection,Z_Param_Out_HitInfo,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialDamageWithFalloff) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageInnerRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageOuterRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageFalloff); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(AController,Z_Param_InstigatedByController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamagePreventionChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::ApplyRadialDamageWithFalloff(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_MinimumDamage,Z_Param_Out_Origin,Z_Param_DamageInnerRadius,Z_Param_DamageOuterRadius,Z_Param_DamageFalloff,Z_Param_DamageTypeClass,Z_Param_Out_IgnoreActors,Z_Param_DamageCauser,Z_Param_InstigatedByController,ECollisionChannel(Z_Param_DamagePreventionChannel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialDamage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageRadius); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(AController,Z_Param_InstigatedByController); \
		P_GET_UBOOL(Z_Param_bDoFullDamage); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamagePreventionChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::ApplyRadialDamage(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_Out_Origin,Z_Param_DamageRadius,Z_Param_DamageTypeClass,Z_Param_Out_IgnoreActors,Z_Param_DamageCauser,Z_Param_InstigatedByController,Z_Param_bDoFullDamage,ECollisionChannel(Z_Param_DamagePreventionChannel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnableWorldRendering) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::GetEnableWorldRendering(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableWorldRendering) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetEnableWorldRendering(Z_Param_WorldContextObject,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGamePaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::IsGamePaused(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamePaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::SetGamePaused(Z_Param_WorldContextObject,Z_Param_bPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalTimeDilation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetGlobalTimeDilation(Z_Param_WorldContextObject,Z_Param_TimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalTimeDilation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetGlobalTimeDilation(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UGameplayStatics::GetObjectClass(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameState) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGameStateBase**)Z_Param__Result=UGameplayStatics::GetGameState(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGameModeBase**)Z_Param__Result=UGameplayStatics::GetGameMode(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLevelName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bRemovePrefixString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameplayStatics::GetCurrentLevelName(Z_Param_WorldContextObject,Z_Param_bRemovePrefixString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_UBOOL(Z_Param_bAbsolute); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::OpenLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_bAbsolute,Z_Param_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelAsyncLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::CancelAsyncLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLevelStreaming) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::FlushLevelStreaming(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStreamingLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=UGameplayStatics::GetStreamingLevel(Z_Param_WorldContextObject,Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadStreamLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_UBOOL(Z_Param_bShouldBlockOnUnload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::UnloadStreamLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_LatentInfo,Z_Param_bShouldBlockOnUnload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStreamLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_UBOOL(Z_Param_bMakeVisibleAfterLoad); \
		P_GET_UBOOL(Z_Param_bShouldBlockOnLoad); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::LoadStreamLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_bMakeVisibleAfterLoad,Z_Param_bShouldBlockOnLoad,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerControllerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetPlayerControllerID(Z_Param_Player,Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerControllerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GetPlayerControllerID(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_bDestroyPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::RemovePlayer(Z_Param_Player,Z_Param_bDestroyPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePlayer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_GET_UBOOL(Z_Param_bSpawnPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UGameplayStatics::CreatePlayer(Z_Param_WorldContextObject,Z_Param_ControllerId,Z_Param_bSpawnPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerCameraManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerCameraManager**)Z_Param__Result=UGameplayStatics::GetPlayerCameraManager(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerCharacter) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=UGameplayStatics::GetPlayerCharacter(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerPawn) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=UGameplayStatics::GetPlayerPawn(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerController) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UGameplayStatics::GetPlayerController(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameInstance**)Z_Param__Result=UGameplayStatics::GetGameInstance(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsWithTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAllActorsWithTag(Z_Param_WorldContextObject,Z_Param_Tag,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsWithInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAllActorsWithInterface(Z_Param_WorldContextObject,Z_Param_Interface,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAllActorsOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorArrayBounds) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetActorArrayBounds(Z_Param_Out_Actors,Z_Param_bOnlyCollidingComponents,Z_Param_Out_Center,Z_Param_Out_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorArrayAverageLocation) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UGameplayStatics::GetActorArrayAverageLocation(Z_Param_Out_Actors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::FinishSpawningActor(Z_Param_Actor,Z_Param_Out_SpawnTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginDeferredActorSpawnFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingOverride); \
		P_GET_OBJECT(AActor,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginDeferredActorSpawnFromClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingOverride),Z_Param_Owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActorFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_GET_UBOOL(Z_Param_bNoCollisionFail); \
		P_GET_OBJECT(AActor,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginSpawningActorFromClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,Z_Param_bNoCollisionFail,Z_Param_Owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActorFromBlueprint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_GET_UBOOL(Z_Param_bNoCollisionFail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginSpawningActorFromBlueprint(Z_Param_WorldContextObject,Z_Param_Blueprint,Z_Param_Out_SpawnTransform,Z_Param_bNoCollisionFail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UGameplayStatics::SpawnObject(Z_Param_ObjectClass,Z_Param_Outer); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasLaunchOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OptionToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::HasLaunchOption(Z_Param_OptionToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DefaultValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GetIntOption(Z_Param_Options,Z_Param_Key,Z_Param_DefaultValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::HasOption(Z_Param_Options,Z_Param_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameplayStatics::ParseOption(Z_Param_Options,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Pair); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Key); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetKeyValue(Z_Param_Pair,Z_Param_Out_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldToScreen) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::ProjectWorldToScreen(Z_Param_Player,Z_Param_Out_WorldPosition,Z_Param_Out_ScreenPosition,Z_Param_bPlayerViewportRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeprojectScreenToWorld) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::DeprojectScreenToWorld(Z_Param_Player,Z_Param_Out_ScreenPosition,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrassOverlappingSphereCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_CenterPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GrassOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebaseZeroOriginOntoLocal) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UGameplayStatics::RebaseZeroOriginOntoLocal(Z_Param_WorldContextObject,Z_Param_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebaseLocalOriginOntoZero) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UGameplayStatics::RebaseLocalOriginOntoZero(Z_Param_WorldContextObject,Z_Param_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOriginLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FIntVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetWorldOriginLocation(Z_Param_WorldContextObject,Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldOriginLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UGameplayStatics::GetWorldOriginLocation(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuggestProjectileVelocity_CustomArc) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLaunchVelocity); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArcParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::SuggestProjectileVelocity_CustomArc(Z_Param_WorldContextObject,Z_Param_Out_OutLaunchVelocity,Z_Param_StartPos,Z_Param_EndPos,Z_Param_OverrideGravityZ,Z_Param_ArcParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_Advanced) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FPredictProjectilePathParams,Z_Param_Out_PredictParams); \
		P_GET_STRUCT_REF(FPredictProjectilePathResult,Z_Param_Out_PredictResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_Advanced(Z_Param_WorldContextObject,Z_Param_Out_PredictParams,Z_Param_Out_PredictResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByTraceChannel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPathPositions); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLastTraceDestination); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bTracePath); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ProjectileRadius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SimFrequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSimTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(Z_Param_WorldContextObject,Z_Param_Out_OutHit,Z_Param_Out_OutPathPositions,Z_Param_Out_OutLastTraceDestination,Z_Param_StartPos,Z_Param_LaunchVelocity,Z_Param_bTracePath,Z_Param_ProjectileRadius,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_DrawDebugTime,Z_Param_SimFrequency,Z_Param_MaxSimTime,Z_Param_OverrideGravityZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByObjectType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPathPositions); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLastTraceDestination); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bTracePath); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ProjectileRadius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDebugTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SimFrequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSimTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(Z_Param_WorldContextObject,Z_Param_Out_OutHit,Z_Param_Out_OutPathPositions,Z_Param_Out_OutLastTraceDestination,Z_Param_StartPos,Z_Param_LaunchVelocity,Z_Param_bTracePath,Z_Param_ProjectileRadius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_DrawDebugTime,Z_Param_SimFrequency,Z_Param_MaxSimTime,Z_Param_OverrideGravityZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSuggestProjectileVelocity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TossVelocity); \
		P_GET_STRUCT(FVector,Z_Param_StartLocation); \
		P_GET_STRUCT(FVector,Z_Param_EndLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaunchSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceOption); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionRadius); \
		P_GET_UBOOL(Z_Param_bFavorHighArc); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::BlueprintSuggestProjectileVelocity(Z_Param_WorldContextObject,Z_Param_Out_TossVelocity,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_LaunchSpeed,Z_Param_OverrideGravityZ,ESuggestProjVelocityTraceOption::Type(Z_Param_TraceOption),Z_Param_CollisionRadius,Z_Param_bFavorHighArc,Z_Param_bDrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlatformName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameplayStatics::GetPlatformName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLiveStreaming) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::EnableLiveStreaming(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAccurateRealTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PartialSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAccurateRealTime(Z_Param_WorldContextObject,Z_Param_Out_Seconds,Z_Param_Out_PartialSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetAudioTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetRealTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetUnpausedTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetTimeSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldDeltaSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetWorldDeltaSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteGameInSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::DeleteGameInSlot(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameFromSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UGameplayStatics::LoadGameFromSlot(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSaveGameExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::DoesSaveGameExist(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameToSlot) \
	{ \
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::SaveGameToSlot(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSaveGameObjectFromBlueprint) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_SaveGameBlueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UGameplayStatics::CreateSaveGameObjectFromBlueprint(Z_Param_SaveGameBlueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSaveGameObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_SaveGameClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGame**)Z_Param__Result=UGameplayStatics::CreateSaveGameObject(Z_Param_SaveGameClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCollisionUV) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannel); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::FindCollisionUV(Z_Param_Out_Hit,Z_Param_UVChannel,Z_Param_Out_UV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSurfaceType) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=UGameplayStatics::GetSurfaceType(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeHitResult) \
	{ \
		P_GET_UBOOL(Z_Param_bBlockingHit); \
		P_GET_UBOOL(Z_Param_bInitialOverlap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_ImpactPoint); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_GET_STRUCT(FVector,Z_Param_ImpactNormal); \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMat); \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HitItem); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FaceIndex); \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=UGameplayStatics::MakeHitResult(Z_Param_bBlockingHit,Z_Param_bInitialOverlap,Z_Param_Time,Z_Param_Distance,Z_Param_Location,Z_Param_ImpactPoint,Z_Param_Normal,Z_Param_ImpactNormal,Z_Param_PhysMat,Z_Param_HitActor,Z_Param_HitComponent,Z_Param_HitBoneName,Z_Param_HitItem,Z_Param_FaceIndex,Z_Param_TraceStart,Z_Param_TraceEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakHitResult) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_UBOOL_REF(Z_Param_Out_bBlockingHit); \
		P_GET_UBOOL_REF(Z_Param_Out_bInitialOverlap); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Time); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal); \
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_PhysMat); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_HitActor); \
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_HitComponent); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_HitBoneName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_HitItem); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_FaceIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::BreakHitResult(Z_Param_Out_Hit,Z_Param_Out_bBlockingHit,Z_Param_Out_bInitialOverlap,Z_Param_Out_Time,Z_Param_Out_Distance,Z_Param_Out_Location,Z_Param_Out_ImpactPoint,Z_Param_Out_Normal,Z_Param_Out_ImpactNormal,Z_Param_Out_PhysMat,Z_Param_Out_HitActor,Z_Param_Out_HitComponent,Z_Param_Out_HitBoneName,Z_Param_Out_HitItem,Z_Param_Out_FaceIndex,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecalAttached) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial); \
		P_GET_STRUCT(FVector,Z_Param_DecalSize); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDecalComponent**)Z_Param__Result=UGameplayStatics::SpawnDecalAttached(Z_Param_DecalMaterial,Z_Param_DecalSize,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_LifeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecalAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial); \
		P_GET_STRUCT(FVector,Z_Param_DecalSize); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDecalComponent**)Z_Param__Result=UGameplayStatics::SpawnDecalAtLocation(Z_Param_WorldContextObject,Z_Param_DecalMaterial,Z_Param_DecalSize,Z_Param_Location,Z_Param_Rotation,Z_Param_LifeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAudioChannelCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GetMaxAudioChannelCount(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxAudioChannelsScaled) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxChannelCountScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetMaxAudioChannelsScaled(Z_Param_WorldContextObject,Z_Param_MaxChannelCountScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReverbEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UReverbEffect**)Z_Param__Result=UGameplayStatics::GetCurrentReverbEffect(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateReverbEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::DeactivateReverbEffect(Z_Param_WorldContextObject,Z_Param_TagName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateReverbEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UReverbEffect,Z_Param_ReverbEffect); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::ActivateReverbEffect(Z_Param_WorldContextObject,Z_Param_ReverbEffect,Z_Param_TagName,Z_Param_Priority,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSoundMixModifiers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::ClearSoundMixModifiers(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopSoundMixModifier) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PopSoundMixModifier(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushSoundMixModifier) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PushSoundMixModifier(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSoundMixClassOverride) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_GET_OBJECT(USoundClass,Z_Param_InSoundClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::ClearSoundMixClassOverride(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier,Z_Param_InSoundClass,Z_Param_FadeOutTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundMixClassOverride) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMixModifier); \
		P_GET_OBJECT(USoundClass,Z_Param_InSoundClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInTime); \
		P_GET_UBOOL(Z_Param_bApplyToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetSoundMixClassOverride(Z_Param_WorldContextObject,Z_Param_InSoundMixModifier,Z_Param_InSoundClass,Z_Param_Volume,Z_Param_Pitch,Z_Param_FadeInTime,Z_Param_bApplyToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseSoundMix) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundMix,Z_Param_InSoundMix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetBaseSoundMix(Z_Param_WorldContextObject,Z_Param_InSoundMix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreSubtitlesEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::AreSubtitlesEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubtitlesEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetSubtitlesEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnForceFeedbackAttached) \
	{ \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IntensityMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UForceFeedbackComponent**)Z_Param__Result=UGameplayStatics::SpawnForceFeedbackAttached(Z_Param_ForceFeedbackEffect,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bLooping,Z_Param_IntensityMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnForceFeedbackAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IntensityMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UForceFeedbackComponent**)Z_Param__Result=UGameplayStatics::SpawnForceFeedbackAtLocation(Z_Param_WorldContextObject,Z_Param_ForceFeedbackEffect,Z_Param_Location,Z_Param_Rotation,Z_Param_bLooping,Z_Param_IntensityMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDialogueAttached) \
	{ \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogueAttached(Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDialogueAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogueAtLocation(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDialogueAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlayDialogueAtLocation(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDialogue2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnDialogue2D(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDialogue2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UDialogueWave,Z_Param_Dialogue); \
		P_GET_STRUCT_REF(FDialogueContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlayDialogue2D(Z_Param_WorldContextObject,Z_Param_Dialogue,Z_Param_Out_Context,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSoundAttached) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSoundAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSound2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::CreateSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSound2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UGameplayStatics::SpawnSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings); \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlaySound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalListenerFocusParameters) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusAzimuthScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusAzimuthScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusDistanceScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusDistanceScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusVolumeScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusVolumeScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FocusPriorityScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NonFocusPriorityScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetGlobalListenerFocusParameters(Z_Param_WorldContextObject,Z_Param_FocusAzimuthScale,Z_Param_NonFocusAzimuthScale,Z_Param_FocusDistanceScale,Z_Param_NonFocusDistanceScale,Z_Param_FocusVolumeScale,Z_Param_NonFocusVolumeScale,Z_Param_FocusPriorityScale,Z_Param_NonFocusPriorityScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalPitchModulation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchModulation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeSec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetGlobalPitchModulation(Z_Param_WorldContextObject,Z_Param_PitchModulation,Z_Param_TimeSec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaximumRange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::AreAnyListenersWithinRange(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_MaximumRange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEmitterAttached) \
	{ \
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolingMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystemComponent**)Z_Param__Result=UGameplayStatics::SpawnEmitterAttached(Z_Param_EmitterTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy,EPSCPoolMethod(Z_Param_PoolingMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEmitterAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_GET_ENUM(EPSCPoolMethod,Z_Param_PoolingMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystemComponent**)Z_Param__Result=UGameplayStatics::SpawnEmitterAtLocation(Z_Param_WorldContextObject,Z_Param_EmitterTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,Z_Param_bAutoDestroy,EPSCPoolMethod(Z_Param_PoolingMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayWorldCameraShake) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_STRUCT(FVector,Z_Param_Epicenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InnerRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OuterRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bOrientShakeTowardsEpicenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::PlayWorldCameraShake(Z_Param_WorldContextObject,Z_Param_Shake,Z_Param_Epicenter,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_Falloff,Z_Param_bOrientShakeTowardsEpicenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::ApplyDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPointDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitFromDirection); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::ApplyPointDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_Out_HitFromDirection,Z_Param_Out_HitInfo,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialDamageWithFalloff) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageInnerRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageOuterRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageFalloff); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(AController,Z_Param_InstigatedByController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamagePreventionChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::ApplyRadialDamageWithFalloff(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_MinimumDamage,Z_Param_Out_Origin,Z_Param_DamageInnerRadius,Z_Param_DamageOuterRadius,Z_Param_DamageFalloff,Z_Param_DamageTypeClass,Z_Param_Out_IgnoreActors,Z_Param_DamageCauser,Z_Param_InstigatedByController,ECollisionChannel(Z_Param_DamagePreventionChannel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialDamage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageRadius); \
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(AController,Z_Param_InstigatedByController); \
		P_GET_UBOOL(Z_Param_bDoFullDamage); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamagePreventionChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::ApplyRadialDamage(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_Out_Origin,Z_Param_DamageRadius,Z_Param_DamageTypeClass,Z_Param_Out_IgnoreActors,Z_Param_DamageCauser,Z_Param_InstigatedByController,Z_Param_bDoFullDamage,ECollisionChannel(Z_Param_DamagePreventionChannel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnableWorldRendering) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::GetEnableWorldRendering(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableWorldRendering) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetEnableWorldRendering(Z_Param_WorldContextObject,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGamePaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::IsGamePaused(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamePaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameplayStatics::SetGamePaused(Z_Param_WorldContextObject,Z_Param_bPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalTimeDilation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetGlobalTimeDilation(Z_Param_WorldContextObject,Z_Param_TimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalTimeDilation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGameplayStatics::GetGlobalTimeDilation(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UGameplayStatics::GetObjectClass(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameState) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGameStateBase**)Z_Param__Result=UGameplayStatics::GetGameState(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGameModeBase**)Z_Param__Result=UGameplayStatics::GetGameMode(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLevelName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bRemovePrefixString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameplayStatics::GetCurrentLevelName(Z_Param_WorldContextObject,Z_Param_bRemovePrefixString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_UBOOL(Z_Param_bAbsolute); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::OpenLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_bAbsolute,Z_Param_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelAsyncLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::CancelAsyncLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLevelStreaming) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::FlushLevelStreaming(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStreamingLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=UGameplayStatics::GetStreamingLevel(Z_Param_WorldContextObject,Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadStreamLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_UBOOL(Z_Param_bShouldBlockOnUnload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::UnloadStreamLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_LatentInfo,Z_Param_bShouldBlockOnUnload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStreamLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_UBOOL(Z_Param_bMakeVisibleAfterLoad); \
		P_GET_UBOOL(Z_Param_bShouldBlockOnLoad); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::LoadStreamLevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_bMakeVisibleAfterLoad,Z_Param_bShouldBlockOnLoad,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerControllerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::SetPlayerControllerID(Z_Param_Player,Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerControllerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameplayStatics::GetPlayerControllerID(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_bDestroyPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::RemovePlayer(Z_Param_Player,Z_Param_bDestroyPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePlayer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_GET_UBOOL(Z_Param_bSpawnPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UGameplayStatics::CreatePlayer(Z_Param_WorldContextObject,Z_Param_ControllerId,Z_Param_bSpawnPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerCameraManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerCameraManager**)Z_Param__Result=UGameplayStatics::GetPlayerCameraManager(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerCharacter) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=UGameplayStatics::GetPlayerCharacter(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerPawn) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=UGameplayStatics::GetPlayerPawn(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerController) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UGameplayStatics::GetPlayerController(Z_Param_WorldContextObject,Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameInstance**)Z_Param__Result=UGameplayStatics::GetGameInstance(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsWithTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAllActorsWithTag(Z_Param_WorldContextObject,Z_Param_Tag,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsWithInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAllActorsWithInterface(Z_Param_WorldContextObject,Z_Param_Interface,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActorsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetAllActorsOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorArrayBounds) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_UBOOL(Z_Param_bOnlyCollidingComponents); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameplayStatics::GetActorArrayBounds(Z_Param_Out_Actors,Z_Param_bOnlyCollidingComponents,Z_Param_Out_Center,Z_Param_Out_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorArrayAverageLocation) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UGameplayStatics::GetActorArrayAverageLocation(Z_Param_Out_Actors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::FinishSpawningActor(Z_Param_Actor,Z_Param_Out_SpawnTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginDeferredActorSpawnFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingOverride); \
		P_GET_OBJECT(AActor,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginDeferredActorSpawnFromClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingOverride),Z_Param_Owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActorFromClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_GET_UBOOL(Z_Param_bNoCollisionFail); \
		P_GET_OBJECT(AActor,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginSpawningActorFromClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,Z_Param_bNoCollisionFail,Z_Param_Owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActorFromBlueprint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_GET_UBOOL(Z_Param_bNoCollisionFail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UGameplayStatics::BeginSpawningActorFromBlueprint(Z_Param_WorldContextObject,Z_Param_Blueprint,Z_Param_Out_SpawnTransform,Z_Param_bNoCollisionFail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UGameplayStatics::SpawnObject(Z_Param_ObjectClass,Z_Param_Outer); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayStatics(); \
	friend struct Z_Construct_UClass_UGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameplayStatics)


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayStatics(); \
	friend struct Z_Construct_UClass_UGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameplayStatics)


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayStatics(UGameplayStatics&&); \
	NO_API UGameplayStatics(const UGameplayStatics&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayStatics(UGameplayStatics&&); \
	NO_API UGameplayStatics(const UGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayStatics)


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

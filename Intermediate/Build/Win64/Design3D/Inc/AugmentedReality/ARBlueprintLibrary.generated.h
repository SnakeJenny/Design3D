// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARSessionConfig;
class UTexture2D;
class UARCandidateImage;
enum class EARSessionType : uint8;
struct FARVideoFormat;
struct FVector;
enum class EARWorldMappingState : uint8;
class UAREnvironmentCaptureProbe;
class UARTrackedImage;
class UARTrackedPoint;
class UARPlaneGeometry;
class UARPin;
class USceneComponent;
struct FARTraceResult;
struct FTransform;
class UARTrackedGeometry;
class UARLightEstimate;
class UObject;
struct FLinearColor;
class UARTextureCameraDepth;
class UARTextureCameraImage;
enum class EARTrackingQuality : uint8;
struct FVector2D;
struct FARSessionStatus;
enum class EARLineTraceChannels : uint8;
#ifdef AUGMENTEDREALITY_ARBlueprintLibrary_generated_h
#error "ARBlueprintLibrary.generated.h already included, missing '#pragma once' in ARBlueprintLibrary.h"
#endif
#define AUGMENTEDREALITY_ARBlueprintLibrary_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRuntimeCandidateImage) \
	{ \
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig); \
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicalWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARCandidateImage**)Z_Param__Result=UARBlueprintLibrary::AddRuntimeCandidateImage(Z_Param_SessionConfig,Z_Param_CandidateTexture,Z_Param_FriendlyName,Z_Param_PhysicalWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedVideoFormats) \
	{ \
		P_GET_ENUM(EARSessionType,Z_Param_SessionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FARVideoFormat>*)Z_Param__Result=UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType(Z_Param_SessionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCloud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UARBlueprintLibrary::GetPointCloud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldMappingStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARWorldMappingState*)Z_Param__Result=UARBlueprintLibrary::GetWorldMappingStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddManualEnvironmentCaptureProbe) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(Z_Param_Location,Z_Param_Extent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedEnvironmentCaptureProbes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UAREnvironmentCaptureProbe*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedImages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARTrackedImage*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedImages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARTrackedPoint*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedPlanes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARPlaneGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPlanes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllPins) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARPin*>*)Z_Param__Result=UARBlueprintLibrary::GetAllPins(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePin) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_PinToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::RemovePin(Z_Param_PinToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpinComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToUnpin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::UnpinComponent(Z_Param_ComponentToUnpin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPinComponentToTraceResult) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin); \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_GET_PROPERTY(UNameProperty,Z_Param_DebugName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponentToTraceResult(Z_Param_ComponentToPin,Z_Param_Out_TraceResult,Z_Param_DebugName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPinComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PinToWorldTransform); \
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry); \
		P_GET_PROPERTY(UNameProperty,Z_Param_DebugName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponent(Z_Param_ComponentToPin,Z_Param_Out_PinToWorldTransform,Z_Param_TrackedGeometry,Z_Param_DebugName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLightEstimate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARLightEstimate**)Z_Param__Result=UARBlueprintLibrary::GetCurrentLightEstimate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugDrawPin) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_ARPin); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PersistForSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::DebugDrawPin(Z_Param_ARPin,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_Scale,Z_Param_PersistForSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugDrawTrackedGeometry) \
	{ \
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutlineThickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PersistForSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::DebugDrawTrackedGeometry(Z_Param_TrackedGeometry,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_OutlineThickness,Z_Param_PersistForSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionTypeSupported) \
	{ \
		P_GET_ENUM(EARSessionType,Z_Param_SessionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType(Z_Param_SessionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraDepth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTextureCameraDepth**)Z_Param__Result=UARBlueprintLibrary::GetCameraDepth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraImage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTextureCameraImage**)Z_Param__Result=UARBlueprintLibrary::GetCameraImage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllGeometries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARTrackedGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllGeometries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingQuality*)Z_Param__Result=UARBlueprintLibrary::GetTrackingQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceTrackedObjects3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_UBOOL(Z_Param_bTestFeaturePoints); \
		P_GET_UBOOL(Z_Param_bTestGroundPlane); \
		P_GET_UBOOL(Z_Param_bTestPlaneExtents); \
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects3D(Z_Param_Start,Z_Param_End,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceTrackedObjects) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenCoord); \
		P_GET_UBOOL(Z_Param_bTestFeaturePoints); \
		P_GET_UBOOL(Z_Param_bTestGroundPlane); \
		P_GET_UBOOL(Z_Param_bTestPlaneExtents); \
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects(Z_Param_ScreenCoord,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignmentTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InAlignmentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::SetAlignmentTransform(Z_Param_Out_InAlignmentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARSessionConfig**)Z_Param__Result=UARBlueprintLibrary::GetSessionConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetARSessionStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARSessionStatus*)Z_Param__Result=UARBlueprintLibrary::GetARSessionStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopARSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::StopARSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseARSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::PauseARSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartARSession) \
	{ \
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::StartARSession(Z_Param_SessionConfig); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRuntimeCandidateImage) \
	{ \
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig); \
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicalWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARCandidateImage**)Z_Param__Result=UARBlueprintLibrary::AddRuntimeCandidateImage(Z_Param_SessionConfig,Z_Param_CandidateTexture,Z_Param_FriendlyName,Z_Param_PhysicalWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedVideoFormats) \
	{ \
		P_GET_ENUM(EARSessionType,Z_Param_SessionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FARVideoFormat>*)Z_Param__Result=UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType(Z_Param_SessionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCloud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UARBlueprintLibrary::GetPointCloud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldMappingStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARWorldMappingState*)Z_Param__Result=UARBlueprintLibrary::GetWorldMappingStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddManualEnvironmentCaptureProbe) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(Z_Param_Location,Z_Param_Extent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedEnvironmentCaptureProbes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UAREnvironmentCaptureProbe*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedImages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARTrackedImage*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedImages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARTrackedPoint*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTrackedPlanes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARPlaneGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPlanes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllPins) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARPin*>*)Z_Param__Result=UARBlueprintLibrary::GetAllPins(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePin) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_PinToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::RemovePin(Z_Param_PinToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpinComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToUnpin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::UnpinComponent(Z_Param_ComponentToUnpin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPinComponentToTraceResult) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin); \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_GET_PROPERTY(UNameProperty,Z_Param_DebugName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponentToTraceResult(Z_Param_ComponentToPin,Z_Param_Out_TraceResult,Z_Param_DebugName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPinComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PinToWorldTransform); \
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry); \
		P_GET_PROPERTY(UNameProperty,Z_Param_DebugName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponent(Z_Param_ComponentToPin,Z_Param_Out_PinToWorldTransform,Z_Param_TrackedGeometry,Z_Param_DebugName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLightEstimate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARLightEstimate**)Z_Param__Result=UARBlueprintLibrary::GetCurrentLightEstimate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugDrawPin) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_ARPin); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PersistForSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::DebugDrawPin(Z_Param_ARPin,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_Scale,Z_Param_PersistForSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugDrawTrackedGeometry) \
	{ \
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutlineThickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PersistForSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::DebugDrawTrackedGeometry(Z_Param_TrackedGeometry,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_OutlineThickness,Z_Param_PersistForSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionTypeSupported) \
	{ \
		P_GET_ENUM(EARSessionType,Z_Param_SessionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType(Z_Param_SessionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraDepth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTextureCameraDepth**)Z_Param__Result=UARBlueprintLibrary::GetCameraDepth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraImage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTextureCameraImage**)Z_Param__Result=UARBlueprintLibrary::GetCameraImage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllGeometries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARTrackedGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllGeometries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingQuality*)Z_Param__Result=UARBlueprintLibrary::GetTrackingQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceTrackedObjects3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_UBOOL(Z_Param_bTestFeaturePoints); \
		P_GET_UBOOL(Z_Param_bTestGroundPlane); \
		P_GET_UBOOL(Z_Param_bTestPlaneExtents); \
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects3D(Z_Param_Start,Z_Param_End,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceTrackedObjects) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenCoord); \
		P_GET_UBOOL(Z_Param_bTestFeaturePoints); \
		P_GET_UBOOL(Z_Param_bTestGroundPlane); \
		P_GET_UBOOL(Z_Param_bTestPlaneExtents); \
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects(Z_Param_ScreenCoord,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignmentTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InAlignmentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::SetAlignmentTransform(Z_Param_Out_InAlignmentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARSessionConfig**)Z_Param__Result=UARBlueprintLibrary::GetSessionConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetARSessionStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARSessionStatus*)Z_Param__Result=UARBlueprintLibrary::GetARSessionStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopARSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::StopARSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseARSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::PauseARSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartARSession) \
	{ \
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UARBlueprintLibrary::StartARSession(Z_Param_SessionConfig); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UARBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UARBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBlueprintLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUARBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UARBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UARBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBlueprintLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBlueprintLibrary(UARBlueprintLibrary&&); \
	NO_API UARBlueprintLibrary(const UARBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBlueprintLibrary(UARBlueprintLibrary&&); \
	NO_API UARBlueprintLibrary(const UARBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBlueprintLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_15_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARBlueprintLibrary>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTraceChannel) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARLineTraceChannels*)Z_Param__Result=UARTraceResultLibrary::GetTraceChannel(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedGeometry) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTrackedGeometry**)Z_Param__Result=UARTraceResultLibrary::GetTrackedGeometry(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToWorldTransform(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToTrackingTransform(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceFromCamera) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UARTraceResultLibrary::GetDistanceFromCamera(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTraceChannel) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARLineTraceChannels*)Z_Param__Result=UARTraceResultLibrary::GetTraceChannel(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedGeometry) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTrackedGeometry**)Z_Param__Result=UARTraceResultLibrary::GetTrackedGeometry(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToWorldTransform(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToTrackingTransform(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceFromCamera) \
	{ \
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UARTraceResultLibrary::GetDistanceFromCamera(Z_Param_Out_TraceResult); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTraceResultLibrary(); \
	friend struct Z_Construct_UClass_UARTraceResultLibrary_Statics; \
public: \
	DECLARE_CLASS(UARTraceResultLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_INCLASS \
private: \
	static void StaticRegisterNativesUARTraceResultLibrary(); \
	friend struct Z_Construct_UClass_UARTraceResultLibrary_Statics; \
public: \
	DECLARE_CLASS(UARTraceResultLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTraceResultLibrary(UARTraceResultLibrary&&); \
	NO_API UARTraceResultLibrary(const UARTraceResultLibrary&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTraceResultLibrary(UARTraceResultLibrary&&); \
	NO_API UARTraceResultLibrary(const UARTraceResultLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultLibrary)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_230_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_233_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTraceResultLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

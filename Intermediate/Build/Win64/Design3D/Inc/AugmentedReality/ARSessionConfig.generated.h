// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARFaceTrackingUpdate : uint8;
enum class EARFaceTrackingDirection : uint8;
struct FARVideoFormat;
class UARCandidateObject;
enum class EAREnvironmentCaptureProbeType : uint8;
class UARCandidateImage;
enum class EARFrameSyncMode : uint8;
enum class EARLightEstimationMode : uint8;
enum class EARPlaneDetectionMode : uint8;
enum class EARSessionType : uint8;
enum class EARWorldAlignment : uint8;
#ifdef AUGMENTEDREALITY_ARSessionConfig_generated_h
#error "ARSessionConfig.generated.h already included, missing '#pragma once' in ARSessionConfig.h"
#endif
#define AUGMENTEDREALITY_ARSessionConfig_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate) \
	{ \
		P_GET_ENUM(EARFaceTrackingUpdate,Z_Param_InUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceTrackingUpdate(EARFaceTrackingUpdate(Z_Param_InUpdate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARFaceTrackingUpdate*)Z_Param__Result=P_THIS->GetFaceTrackingUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceTrackingDirection) \
	{ \
		P_GET_ENUM(EARFaceTrackingDirection,Z_Param_InDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceTrackingDirection(EARFaceTrackingDirection(Z_Param_InDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceTrackingDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARFaceTrackingDirection*)Z_Param__Result=P_THIS->GetFaceTrackingDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredVideoFormat) \
	{ \
		P_GET_STRUCT(FARVideoFormat,Z_Param_NewFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredVideoFormat(Z_Param_NewFormat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredVideoFormat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARVideoFormat*)Z_Param__Result=P_THIS->GetDesiredVideoFormat(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCandidateObject) \
	{ \
		P_GET_OBJECT(UARCandidateObject,Z_Param_CandidateObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCandidateObject(Z_Param_CandidateObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCandidateObjectList) \
	{ \
		P_GET_TARRAY_REF(UARCandidateObject*,Z_Param_Out_InCandidateObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCandidateObjectList(Z_Param_Out_InCandidateObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateObjectList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARCandidateObject*>*)Z_Param__Result=P_THIS->GetCandidateObjectList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldMapData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_WorldMapData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldMapData(Z_Param_WorldMapData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldMapData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetWorldMapData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAREnvironmentCaptureProbeType*)Z_Param__Result=P_THIS->GetEnvironmentCaptureProbeType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumSimultaneousImagesTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCandidateImage) \
	{ \
		P_GET_OBJECT(UARCandidateImage,Z_Param_NewCandidateImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCandidateImage(Z_Param_NewCandidateImage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateImageList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARCandidateImage*>*)Z_Param__Result=P_THIS->GetCandidateImageList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResetTrackedObjects) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResetTrackedObjects(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldResetTrackedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldResetTrackedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResetCameraTracking) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResetCameraTracking(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldResetCameraTracking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldResetCameraTracking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableAutoFocus) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableAutoFocus(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldEnableAutoFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableAutoFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldEnableCameraTracking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableCameraTracking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldRenderCameraOverlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameSyncMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARFrameSyncMode*)Z_Param__Result=P_THIS->GetFrameSyncMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLightEstimationMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARLightEstimationMode*)Z_Param__Result=P_THIS->GetLightEstimationMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneDetectionMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARPlaneDetectionMode*)Z_Param__Result=P_THIS->GetPlaneDetectionMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARSessionType*)Z_Param__Result=P_THIS->GetSessionType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARWorldAlignment*)Z_Param__Result=P_THIS->GetWorldAlignment(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate) \
	{ \
		P_GET_ENUM(EARFaceTrackingUpdate,Z_Param_InUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceTrackingUpdate(EARFaceTrackingUpdate(Z_Param_InUpdate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARFaceTrackingUpdate*)Z_Param__Result=P_THIS->GetFaceTrackingUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceTrackingDirection) \
	{ \
		P_GET_ENUM(EARFaceTrackingDirection,Z_Param_InDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceTrackingDirection(EARFaceTrackingDirection(Z_Param_InDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceTrackingDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARFaceTrackingDirection*)Z_Param__Result=P_THIS->GetFaceTrackingDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredVideoFormat) \
	{ \
		P_GET_STRUCT(FARVideoFormat,Z_Param_NewFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredVideoFormat(Z_Param_NewFormat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredVideoFormat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARVideoFormat*)Z_Param__Result=P_THIS->GetDesiredVideoFormat(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCandidateObject) \
	{ \
		P_GET_OBJECT(UARCandidateObject,Z_Param_CandidateObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCandidateObject(Z_Param_CandidateObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCandidateObjectList) \
	{ \
		P_GET_TARRAY_REF(UARCandidateObject*,Z_Param_Out_InCandidateObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCandidateObjectList(Z_Param_Out_InCandidateObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateObjectList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARCandidateObject*>*)Z_Param__Result=P_THIS->GetCandidateObjectList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldMapData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_WorldMapData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldMapData(Z_Param_WorldMapData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldMapData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetWorldMapData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAREnvironmentCaptureProbeType*)Z_Param__Result=P_THIS->GetEnvironmentCaptureProbeType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumSimultaneousImagesTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCandidateImage) \
	{ \
		P_GET_OBJECT(UARCandidateImage,Z_Param_NewCandidateImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCandidateImage(Z_Param_NewCandidateImage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateImageList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UARCandidateImage*>*)Z_Param__Result=P_THIS->GetCandidateImageList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResetTrackedObjects) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResetTrackedObjects(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldResetTrackedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldResetTrackedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResetCameraTracking) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResetCameraTracking(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldResetCameraTracking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldResetCameraTracking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableAutoFocus) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableAutoFocus(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldEnableAutoFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableAutoFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldEnableCameraTracking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableCameraTracking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldRenderCameraOverlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameSyncMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARFrameSyncMode*)Z_Param__Result=P_THIS->GetFrameSyncMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLightEstimationMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARLightEstimationMode*)Z_Param__Result=P_THIS->GetLightEstimationMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaneDetectionMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARPlaneDetectionMode*)Z_Param__Result=P_THIS->GetPlaneDetectionMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARSessionType*)Z_Param__Result=P_THIS->GetSessionType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARWorldAlignment*)Z_Param__Result=P_THIS->GetWorldAlignment(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig, NO_API)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct Z_Construct_UClass_UARSessionConfig_Statics; \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_ARCHIVESERIALIZER


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct Z_Construct_UClass_UARSessionConfig_Statics; \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_ARCHIVESERIALIZER


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSessionConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSessionConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARSessionConfig)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldAlignment() { return STRUCT_OFFSET(UARSessionConfig, WorldAlignment); } \
	FORCEINLINE static uint32 __PPO__SessionType() { return STRUCT_OFFSET(UARSessionConfig, SessionType); } \
	FORCEINLINE static uint32 __PPO__PlaneDetectionMode_DEPRECATED() { return STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bHorizontalPlaneDetection() { return STRUCT_OFFSET(UARSessionConfig, bHorizontalPlaneDetection); } \
	FORCEINLINE static uint32 __PPO__bVerticalPlaneDetection() { return STRUCT_OFFSET(UARSessionConfig, bVerticalPlaneDetection); } \
	FORCEINLINE static uint32 __PPO__bEnableAutoFocus() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutoFocus); } \
	FORCEINLINE static uint32 __PPO__LightEstimationMode() { return STRUCT_OFFSET(UARSessionConfig, LightEstimationMode); } \
	FORCEINLINE static uint32 __PPO__FrameSyncMode() { return STRUCT_OFFSET(UARSessionConfig, FrameSyncMode); } \
	FORCEINLINE static uint32 __PPO__bEnableAutomaticCameraOverlay() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutomaticCameraOverlay); } \
	FORCEINLINE static uint32 __PPO__bEnableAutomaticCameraTracking() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutomaticCameraTracking); } \
	FORCEINLINE static uint32 __PPO__bResetCameraTracking() { return STRUCT_OFFSET(UARSessionConfig, bResetCameraTracking); } \
	FORCEINLINE static uint32 __PPO__bResetTrackedObjects() { return STRUCT_OFFSET(UARSessionConfig, bResetTrackedObjects); } \
	FORCEINLINE static uint32 __PPO__CandidateImages() { return STRUCT_OFFSET(UARSessionConfig, CandidateImages); } \
	FORCEINLINE static uint32 __PPO__MaxNumSimultaneousImagesTracked() { return STRUCT_OFFSET(UARSessionConfig, MaxNumSimultaneousImagesTracked); } \
	FORCEINLINE static uint32 __PPO__EnvironmentCaptureProbeType() { return STRUCT_OFFSET(UARSessionConfig, EnvironmentCaptureProbeType); } \
	FORCEINLINE static uint32 __PPO__WorldMapData() { return STRUCT_OFFSET(UARSessionConfig, WorldMapData); } \
	FORCEINLINE static uint32 __PPO__CandidateObjects() { return STRUCT_OFFSET(UARSessionConfig, CandidateObjects); } \
	FORCEINLINE static uint32 __PPO__DesiredVideoFormat() { return STRUCT_OFFSET(UARSessionConfig, DesiredVideoFormat); } \
	FORCEINLINE static uint32 __PPO__FaceTrackingDirection() { return STRUCT_OFFSET(UARSessionConfig, FaceTrackingDirection); } \
	FORCEINLINE static uint32 __PPO__FaceTrackingUpdate() { return STRUCT_OFFSET(UARSessionConfig, FaceTrackingUpdate); } \
	FORCEINLINE static uint32 __PPO__SerializedARCandidateImageDatabase() { return STRUCT_OFFSET(UARSessionConfig, SerializedARCandidateImageDatabase); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_112_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARSessionConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h


#define FOREACH_ENUM_EARFACETRACKINGUPDATE(op) \
	op(EARFaceTrackingUpdate::CurvesAndGeo) \
	op(EARFaceTrackingUpdate::CurvesOnly) 

enum class EARFaceTrackingUpdate : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingUpdate>();

#define FOREACH_ENUM_EARENVIRONMENTCAPTUREPROBETYPE(op) \
	op(EAREnvironmentCaptureProbeType::None) \
	op(EAREnvironmentCaptureProbeType::Manual) \
	op(EAREnvironmentCaptureProbeType::Automatic) 

enum class EAREnvironmentCaptureProbeType : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>();

#define FOREACH_ENUM_EARFRAMESYNCMODE(op) \
	op(EARFrameSyncMode::SyncTickWithCameraImage) \
	op(EARFrameSyncMode::SyncTickWithoutCameraImage) 

enum class EARFrameSyncMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFrameSyncMode>();

#define FOREACH_ENUM_EARLIGHTESTIMATIONMODE(op) \
	op(EARLightEstimationMode::None) \
	op(EARLightEstimationMode::AmbientLightEstimate) \
	op(EARLightEstimationMode::DirectionalLightEstimate) 

enum class EARLightEstimationMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLightEstimationMode>();

#define FOREACH_ENUM_EARPLANEDETECTIONMODE(op) \
	op(EARPlaneDetectionMode::None) \
	op(EARPlaneDetectionMode::HorizontalPlaneDetection) \
	op(EARPlaneDetectionMode::VerticalPlaneDetection) 

enum class EARPlaneDetectionMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneDetectionMode>();

#define FOREACH_ENUM_EARSESSIONTYPE(op) \
	op(EARSessionType::None) \
	op(EARSessionType::Orientation) \
	op(EARSessionType::World) \
	op(EARSessionType::Face) \
	op(EARSessionType::Image) \
	op(EARSessionType::ObjectScanning) 

enum class EARSessionType : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionType>();

#define FOREACH_ENUM_EARWORLDALIGNMENT(op) \
	op(EARWorldAlignment::Gravity) \
	op(EARWorldAlignment::GravityAndHeading) \
	op(EARWorldAlignment::Camera) 

enum class EARWorldAlignment : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

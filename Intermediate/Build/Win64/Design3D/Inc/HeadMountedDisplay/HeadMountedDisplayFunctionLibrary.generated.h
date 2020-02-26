// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FXRDeviceId;
class UObject;
struct FRotator;
struct FVector;
enum class EXRTrackedDeviceType : uint8;
struct FVector2D;
class UTexture;
enum class ESpectatorScreenMode : uint8;
struct FTransform;
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayFunctionLibrary_generated_h
#error "HeadMountedDisplayFunctionLibrary.generated.h already included, missing '#pragma once' in HeadMountedDisplayFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayFunctionLibrary_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDeviceTracking) \
	{ \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(Z_Param_Out_XRDeviceId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceWorldPose) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(Z_Param_WorldContext,Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDevicePose) \
	{ \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetDevicePose(Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateTrackedDevices) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SystemId); \
		P_GET_ENUM(EXRTrackedDeviceType,Z_Param_DeviceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FXRDeviceId>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(Z_Param_SystemId,EXRTrackedDeviceType(Z_Param_DeviceType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMin); \
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMax); \
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMin); \
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMax); \
		P_GET_UBOOL(Z_Param_bDrawEyeFirst); \
		P_GET_UBOOL(Z_Param_bClearBlack); \
		P_GET_UBOOL(Z_Param_bUseAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(Z_Param_EyeRectMin,Z_Param_EyeRectMax,Z_Param_TextureRectMin,Z_Param_TextureRectMax,Z_Param_bDrawEyeFirst,Z_Param_bClearBlack,Z_Param_bUseAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_InTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(Z_Param_InTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectatorScreenMode) \
	{ \
		P_GET_ENUM(ESpectatorScreenMode,Z_Param_Mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode(Z_Param_Mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRFocusState) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bUseFocus); \
		P_GET_UBOOL_REF(Z_Param_Out_bHasFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetVRFocusState(Z_Param_Out_bUseFocus,Z_Param_Out_bHasFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(Z_Param_Out_ExternalTrackingTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(Z_Param_Out_ExternalTrackingTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHMDTrackingOrigin::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackingOrigin) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Origin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Type(Z_Param_Origin)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldToMetersScale) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldToMetersScale) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(Z_Param_WorldContext,Z_Param_NewScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPixelDensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetPixelDensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetScreenPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClippingPlanes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Near); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Far); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(Z_Param_Near,Z_Param_Far); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientationAndPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(Z_Param_Yaw,EOrientPositionSelector::Type(Z_Param_Options)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLowPersistenceMode) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInLowPersistenceMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPositionalTrackingCameraParameters) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraOrigin); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_HFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_VFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CameraDistance); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NearPlane); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FarPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(Z_Param_Out_CameraOrigin,Z_Param_Out_CameraRotation,Z_Param_Out_HFOV,Z_Param_Out_VFOV,Z_Param_Out_CameraDistance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingSensorParameters) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LeftFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RightFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TopFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_BottomFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NearPlane); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FarPlane); \
		P_GET_UBOOL_REF(Z_Param_Out_IsActive); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(Z_Param_Out_Origin,Z_Param_Out_Rotation,Z_Param_Out_LeftFOV,Z_Param_Out_RightFOV,Z_Param_Out_TopFOV,Z_Param_Out_BottomFOV,Z_Param_Out_Distance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane,Z_Param_Out_IsActive,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasValidTrackingPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrientationAndPosition) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDWornState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHMDWornState::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDWornState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableHMD) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnableHMD(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDeviceTracking) \
	{ \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(Z_Param_Out_XRDeviceId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceWorldPose) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(Z_Param_WorldContext,Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDevicePose) \
	{ \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetDevicePose(Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateTrackedDevices) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SystemId); \
		P_GET_ENUM(EXRTrackedDeviceType,Z_Param_DeviceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FXRDeviceId>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(Z_Param_SystemId,EXRTrackedDeviceType(Z_Param_DeviceType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMin); \
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMax); \
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMin); \
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMax); \
		P_GET_UBOOL(Z_Param_bDrawEyeFirst); \
		P_GET_UBOOL(Z_Param_bClearBlack); \
		P_GET_UBOOL(Z_Param_bUseAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(Z_Param_EyeRectMin,Z_Param_EyeRectMax,Z_Param_TextureRectMin,Z_Param_TextureRectMax,Z_Param_bDrawEyeFirst,Z_Param_bClearBlack,Z_Param_bUseAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_InTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(Z_Param_InTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectatorScreenMode) \
	{ \
		P_GET_ENUM(ESpectatorScreenMode,Z_Param_Mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode(Z_Param_Mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRFocusState) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bUseFocus); \
		P_GET_UBOOL_REF(Z_Param_Out_bHasFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetVRFocusState(Z_Param_Out_bUseFocus,Z_Param_Out_bHasFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(Z_Param_Out_ExternalTrackingTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(Z_Param_Out_ExternalTrackingTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHMDTrackingOrigin::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackingOrigin) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Origin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Type(Z_Param_Origin)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldToMetersScale) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(Z_Param_WorldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldToMetersScale) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContext); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(Z_Param_WorldContext,Z_Param_NewScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPixelDensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetPixelDensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetScreenPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClippingPlanes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Near); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Far); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(Z_Param_Near,Z_Param_Far); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientationAndPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(Z_Param_Yaw,EOrientPositionSelector::Type(Z_Param_Options)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLowPersistenceMode) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInLowPersistenceMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPositionalTrackingCameraParameters) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraOrigin); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_HFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_VFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CameraDistance); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NearPlane); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FarPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(Z_Param_Out_CameraOrigin,Z_Param_Out_CameraRotation,Z_Param_Out_HFOV,Z_Param_Out_VFOV,Z_Param_Out_CameraDistance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingSensorParameters) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LeftFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RightFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TopFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_BottomFOV); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_NearPlane); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FarPlane); \
		P_GET_UBOOL_REF(Z_Param_Out_IsActive); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(Z_Param_Out_Origin,Z_Param_Out_Rotation,Z_Param_Out_LeftFOV,Z_Param_Out_RightFOV,Z_Param_Out_TopFOV,Z_Param_Out_BottomFOV,Z_Param_Out_Distance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane,Z_Param_Out_IsActive,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasValidTrackingPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrientationAndPosition) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDWornState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHMDWornState::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDWornState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableHMD) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnableHMD(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadMountedDisplayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&); \
	NO_API UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&); \
	NO_API UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadMountedDisplayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_12_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HeadMountedDisplayFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UHeadMountedDisplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

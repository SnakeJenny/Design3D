// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionControllerComponent;
enum class EControllerHand : uint8;
#ifdef HEADMOUNTEDDISPLAY_MotionTrackedDeviceFunctionLibrary_generated_h
#error "MotionTrackedDeviceFunctionLibrary.generated.h already included, missing '#pragma once' in MotionTrackedDeviceFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionTrackedDeviceFunctionLibrary_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMotionSourceTracking) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveTrackingSystemName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateMotionSources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfControllersForPlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfAllControllers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingForComponent) \
	{ \
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(Z_Param_MotionControllerComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMotionTrackingForComponent) \
	{ \
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(Z_Param_MotionControllerComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMotionTrackingOfSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMotionTrackingOfDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForComponent) \
	{ \
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(Z_Param_MotionControllerComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionTrackingEnabledControllerCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaximumMotionTrackedControllerCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsControllerMotionTrackingEnabledByDefault) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackedDeviceCountManagementNecessary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMotionSourceTracking) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveTrackingSystemName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateMotionSources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfControllersForPlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(Z_Param_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfAllControllers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingForComponent) \
	{ \
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(Z_Param_MotionControllerComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMotionTrackingOfDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMotionTrackingForComponent) \
	{ \
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(Z_Param_MotionControllerComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMotionTrackingOfSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMotionTrackingOfDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForComponent) \
	{ \
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(Z_Param_MotionControllerComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(Z_Param_PlayerIndex,Z_Param_SourceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionTrackingEnabledControllerCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaximumMotionTrackedControllerCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsControllerMotionTrackingEnabledByDefault) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionTrackedDeviceCountManagementNecessary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionTrackedDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrackedDeviceFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionTrackedDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrackedDeviceFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrackedDeviceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrackedDeviceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrackedDeviceFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(UMotionTrackedDeviceFunctionLibrary&&); \
	NO_API UMotionTrackedDeviceFunctionLibrary(const UMotionTrackedDeviceFunctionLibrary&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrackedDeviceFunctionLibrary(UMotionTrackedDeviceFunctionLibrary&&); \
	NO_API UMotionTrackedDeviceFunctionLibrary(const UMotionTrackedDeviceFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrackedDeviceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrackedDeviceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrackedDeviceFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_14_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionTrackedDeviceFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UMotionTrackedDeviceFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

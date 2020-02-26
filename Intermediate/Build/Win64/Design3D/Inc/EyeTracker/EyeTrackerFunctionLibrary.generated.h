// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FEyeTrackerStereoGazeData;
struct FEyeTrackerGazeData;
#ifdef EYETRACKER_EyeTrackerFunctionLibrary_generated_h
#error "EyeTrackerFunctionLibrary.generated.h already included, missing '#pragma once' in EyeTrackerFunctionLibrary.h"
#endif
#define EYETRACKER_EyeTrackerFunctionLibrary_generated_h

#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEyeTrackedPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStereoGazeData) \
	{ \
		P_GET_STRUCT_REF(FEyeTrackerStereoGazeData,Z_Param_Out_OutGazeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::GetStereoGazeData(Z_Param_Out_OutGazeData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeData) \
	{ \
		P_GET_STRUCT_REF(FEyeTrackerGazeData,Z_Param_Out_OutGazeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::GetGazeData(Z_Param_Out_OutGazeData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStereoGazeDataAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEyeTrackerConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::IsEyeTrackerConnected(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEyeTrackedPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStereoGazeData) \
	{ \
		P_GET_STRUCT_REF(FEyeTrackerStereoGazeData,Z_Param_Out_OutGazeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::GetStereoGazeData(Z_Param_Out_OutGazeData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGazeData) \
	{ \
		P_GET_STRUCT_REF(FEyeTrackerGazeData,Z_Param_Out_OutGazeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::GetGazeData(Z_Param_Out_OutGazeData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStereoGazeDataAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEyeTrackerConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::IsEyeTrackerConnected(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEyeTrackerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EyeTracker"), NO_API) \
	DECLARE_SERIALIZER(UEyeTrackerFunctionLibrary)


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEyeTrackerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EyeTracker"), NO_API) \
	DECLARE_SERIALIZER(UEyeTrackerFunctionLibrary)


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEyeTrackerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEyeTrackerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEyeTrackerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEyeTrackerFunctionLibrary(UEyeTrackerFunctionLibrary&&); \
	NO_API UEyeTrackerFunctionLibrary(const UEyeTrackerFunctionLibrary&); \
public:


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEyeTrackerFunctionLibrary(UEyeTrackerFunctionLibrary&&); \
	NO_API UEyeTrackerFunctionLibrary(const UEyeTrackerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEyeTrackerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEyeTrackerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEyeTrackerFunctionLibrary)


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_12_PROLOG
#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EYETRACKER_API UClass* StaticClass<class UEyeTrackerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

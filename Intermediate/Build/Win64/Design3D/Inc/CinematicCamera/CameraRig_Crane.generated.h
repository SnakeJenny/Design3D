// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CINEMATICCAMERA_CameraRig_Crane_generated_h
#error "CameraRig_Crane.generated.h already included, missing '#pragma once' in CameraRig_Crane.h"
#endif
#define CINEMATICCAMERA_CameraRig_Crane_generated_h

#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraRig_Crane(); \
	friend struct Z_Construct_UClass_ACameraRig_Crane_Statics; \
public: \
	DECLARE_CLASS(ACameraRig_Crane, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(ACameraRig_Crane)


#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACameraRig_Crane(); \
	friend struct Z_Construct_UClass_ACameraRig_Crane_Statics; \
public: \
	DECLARE_CLASS(ACameraRig_Crane, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(ACameraRig_Crane)


#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraRig_Crane(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraRig_Crane) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraRig_Crane); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraRig_Crane); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraRig_Crane(ACameraRig_Crane&&); \
	NO_API ACameraRig_Crane(const ACameraRig_Crane&); \
public:


#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraRig_Crane(ACameraRig_Crane&&); \
	NO_API ACameraRig_Crane(const ACameraRig_Crane&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraRig_Crane); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraRig_Crane); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraRig_Crane)


#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformComponent() { return STRUCT_OFFSET(ACameraRig_Crane, TransformComponent); } \
	FORCEINLINE static uint32 __PPO__CraneYawControl() { return STRUCT_OFFSET(ACameraRig_Crane, CraneYawControl); } \
	FORCEINLINE static uint32 __PPO__CranePitchControl() { return STRUCT_OFFSET(ACameraRig_Crane, CranePitchControl); } \
	FORCEINLINE static uint32 __PPO__CraneCameraMount() { return STRUCT_OFFSET(ACameraRig_Crane, CraneCameraMount); }


#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_17_PROLOG
#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_INCLASS \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class ACameraRig_Crane>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

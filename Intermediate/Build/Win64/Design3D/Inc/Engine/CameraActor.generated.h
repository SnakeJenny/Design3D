// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraActor_generated_h
#error "CameraActor.generated.h already included, missing '#pragma once' in CameraActor.h"
#endif
#define ENGINE_CameraActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAutoActivatePlayerIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAutoActivatePlayerIndex(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAutoActivatePlayerIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAutoActivatePlayerIndex(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACameraActor, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraActor(); \
	friend struct Z_Construct_UClass_ACameraActor_Statics; \
public: \
	DECLARE_CLASS(ACameraActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACameraActor) \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACameraActor(); \
	friend struct Z_Construct_UClass_ACameraActor_Statics; \
public: \
	DECLARE_CLASS(ACameraActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACameraActor) \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraActor(ACameraActor&&); \
	NO_API ACameraActor(const ACameraActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraActor(ACameraActor&&); \
	NO_API ACameraActor(const ACameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraActor)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AutoActivateForPlayer() { return STRUCT_OFFSET(ACameraActor, AutoActivateForPlayer); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ACameraActor, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ACameraActor, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__AspectRatio_DEPRECATED() { return STRUCT_OFFSET(ACameraActor, AspectRatio_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__FOVAngle_DEPRECATED() { return STRUCT_OFFSET(ACameraActor, FOVAngle_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PostProcessBlendWeight_DEPRECATED() { return STRUCT_OFFSET(ACameraActor, PostProcessBlendWeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PostProcessSettings_DEPRECATED() { return STRUCT_OFFSET(ACameraActor, PostProcessSettings_DEPRECATED); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

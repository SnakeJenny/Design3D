// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
#ifdef ENGINE_LevelScriptActor_generated_h
#error "LevelScriptActor.generated.h already included, missing '#pragma once' in LevelScriptActor.h"
#endif
#define ENGINE_LevelScriptActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCinematicMode) \
	{ \
		P_GET_UBOOL(Z_Param_bCinematicMode); \
		P_GET_UBOOL(Z_Param_bHidePlayer); \
		P_GET_UBOOL(Z_Param_bAffectsHUD); \
		P_GET_UBOOL(Z_Param_bAffectsMovement); \
		P_GET_UBOOL(Z_Param_bAffectsTurning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCinematicMode(Z_Param_bCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoteEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoteEvent(Z_Param_EventName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCinematicMode) \
	{ \
		P_GET_UBOOL(Z_Param_bCinematicMode); \
		P_GET_UBOOL(Z_Param_bHidePlayer); \
		P_GET_UBOOL(Z_Param_bAffectsHUD); \
		P_GET_UBOOL(Z_Param_bAffectsMovement); \
		P_GET_UBOOL(Z_Param_bAffectsTurning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCinematicMode(Z_Param_bCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoteEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoteEvent(Z_Param_EventName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_EVENT_PARMS \
	struct LevelScriptActor_eventWorldOriginLocationChanged_Parms \
	{ \
		FIntVector OldOriginLocation; \
		FIntVector NewOriginLocation; \
	};


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelScriptActor(); \
	friend struct Z_Construct_UClass_ALevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ALevelScriptActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelScriptActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesALevelScriptActor(); \
	friend struct Z_Construct_UClass_ALevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ALevelScriptActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelScriptActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelScriptActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelScriptActor(ALevelScriptActor&&); \
	NO_API ALevelScriptActor(const ALevelScriptActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelScriptActor(ALevelScriptActor&&); \
	NO_API ALevelScriptActor(const ALevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelScriptActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelScriptActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_24_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelScriptActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

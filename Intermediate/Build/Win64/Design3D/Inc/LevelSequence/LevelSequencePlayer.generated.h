// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UObject;
class ULevelSequence;
struct FMovieSceneSequencePlaybackSettings;
class ALevelSequenceActor;
class ULevelSequencePlayer;
#ifdef LEVELSEQUENCE_LevelSequencePlayer_generated_h
#error "LevelSequencePlayer.generated.h already included, missing '#pragma once' in LevelSequencePlayer.h"
#endif
#define LEVELSEQUENCE_LevelSequencePlayer_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequencePlayerSnapshot>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceSnapshotSettings>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_29_DELEGATE \
struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms \
{ \
	UCameraComponent* CameraComponent; \
}; \
static inline void FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLevelSequencePlayerCameraCutEvent, UCameraComponent* CameraComponent) \
{ \
	_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms Parms; \
	Parms.CameraComponent=CameraComponent; \
	OnLevelSequencePlayerCameraCutEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveCameraComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetActiveCameraComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateLevelSequencePlayer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence); \
		P_GET_STRUCT(FMovieSceneSequencePlaybackSettings,Z_Param_Settings); \
		P_GET_OBJECT_REF(ALevelSequenceActor,Z_Param_Out_OutActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelSequencePlayer**)Z_Param__Result=ULevelSequencePlayer::CreateLevelSequencePlayer(Z_Param_WorldContextObject,Z_Param_LevelSequence,Z_Param_Settings,Z_Param_Out_OutActor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveCameraComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetActiveCameraComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateLevelSequencePlayer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence); \
		P_GET_STRUCT(FMovieSceneSequencePlaybackSettings,Z_Param_Settings); \
		P_GET_OBJECT_REF(ALevelSequenceActor,Z_Param_Out_OutActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelSequencePlayer**)Z_Param__Result=ULevelSequencePlayer::CreateLevelSequencePlayer(Z_Param_WorldContextObject,Z_Param_LevelSequence,Z_Param_Settings,Z_Param_Out_OutActor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequencePlayer(); \
	friend struct Z_Construct_UClass_ULevelSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequencePlayer)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequencePlayer(); \
	friend struct Z_Construct_UClass_ULevelSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequencePlayer)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequencePlayer(ULevelSequencePlayer&&); \
	NO_API ULevelSequencePlayer(const ULevelSequencePlayer&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequencePlayer(ULevelSequencePlayer&&); \
	NO_API ULevelSequencePlayer(const ULevelSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlayer)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_101_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_108_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

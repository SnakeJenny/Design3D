// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCERECORDER_ActorRecording_generated_h
#error "ActorRecording.generated.h already included, missing '#pragma once' in ActorRecording.h"
#endif
#define SEQUENCERECORDER_ActorRecording_generated_h

#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_RPC_WRAPPERS
#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorRecording(); \
	friend struct Z_Construct_UClass_UActorRecording_Statics; \
public: \
	DECLARE_CLASS(UActorRecording, USequenceRecordingBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), SEQUENCERECORDER_API) \
	DECLARE_SERIALIZER(UActorRecording)


#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUActorRecording(); \
	friend struct Z_Construct_UClass_UActorRecording_Statics; \
public: \
	DECLARE_CLASS(UActorRecording, USequenceRecordingBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), SEQUENCERECORDER_API) \
	DECLARE_SERIALIZER(UActorRecording)


#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDER_API UActorRecording(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorRecording) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDER_API, UActorRecording); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorRecording); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SEQUENCERECORDER_API UActorRecording(UActorRecording&&); \
	SEQUENCERECORDER_API UActorRecording(const UActorRecording&); \
public:


#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDER_API UActorRecording(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SEQUENCERECORDER_API UActorRecording(UActorRecording&&); \
	SEQUENCERECORDER_API UActorRecording(const UActorRecording&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDER_API, UActorRecording); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorRecording); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorRecording)


#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorToRecord() { return STRUCT_OFFSET(UActorRecording, ActorToRecord); }


#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_22_PROLOG
#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_RPC_WRAPPERS \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_INCLASS \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ActorRecording."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERECORDER_API UClass* StaticClass<class UActorRecording>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

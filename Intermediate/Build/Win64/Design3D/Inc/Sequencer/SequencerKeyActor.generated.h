// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerKeyActor_generated_h
#error "SequencerKeyActor.generated.h already included, missing '#pragma once' in SequencerKeyActor.h"
#endif
#define SEQUENCER_SequencerKeyActor_generated_h

#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASequencerKeyActor(); \
	friend struct Z_Construct_UClass_ASequencerKeyActor_Statics; \
public: \
	DECLARE_CLASS(ASequencerKeyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(ASequencerKeyActor)


#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASequencerKeyActor(); \
	friend struct Z_Construct_UClass_ASequencerKeyActor_Statics; \
public: \
	DECLARE_CLASS(ASequencerKeyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(ASequencerKeyActor)


#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASequencerKeyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASequencerKeyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASequencerKeyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASequencerKeyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASequencerKeyActor(ASequencerKeyActor&&); \
	NO_API ASequencerKeyActor(const ASequencerKeyActor&); \
public:


#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASequencerKeyActor(ASequencerKeyActor&&); \
	NO_API ASequencerKeyActor(const ASequencerKeyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASequencerKeyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASequencerKeyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASequencerKeyActor)


#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KeyMeshComponent() { return STRUCT_OFFSET(ASequencerKeyActor, KeyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__AssociatedActor() { return STRUCT_OFFSET(ASequencerKeyActor, AssociatedActor); } \
	FORCEINLINE static uint32 __PPO__TrackSection() { return STRUCT_OFFSET(ASequencerKeyActor, TrackSection); } \
	FORCEINLINE static uint32 __PPO__KeyTime() { return STRUCT_OFFSET(ASequencerKeyActor, KeyTime); }


#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_8_PROLOG
#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_INCLASS \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class ASequencerKeyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

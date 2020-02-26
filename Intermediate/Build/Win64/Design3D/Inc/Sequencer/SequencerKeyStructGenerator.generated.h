// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerKeyStructGenerator_generated_h
#error "SequencerKeyStructGenerator.generated.h already included, missing '#pragma once' in SequencerKeyStructGenerator.h"
#endif
#define SEQUENCER_SequencerKeyStructGenerator_generated_h

#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneKeyStructType(); \
	friend struct Z_Construct_UClass_UMovieSceneKeyStructType_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneKeyStructType, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneKeyStructType)


#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneKeyStructType(); \
	friend struct Z_Construct_UClass_UMovieSceneKeyStructType_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneKeyStructType, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneKeyStructType)


#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneKeyStructType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneKeyStructType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneKeyStructType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneKeyStructType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneKeyStructType(UMovieSceneKeyStructType&&); \
	NO_API UMovieSceneKeyStructType(const UMovieSceneKeyStructType&); \
public:


#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneKeyStructType(UMovieSceneKeyStructType&&); \
	NO_API UMovieSceneKeyStructType(const UMovieSceneKeyStructType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneKeyStructType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneKeyStructType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneKeyStructType)


#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_19_PROLOG
#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_INCLASS \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class UMovieSceneKeyStructType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

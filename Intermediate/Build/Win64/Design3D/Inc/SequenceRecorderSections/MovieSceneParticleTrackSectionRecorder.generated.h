// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
#ifdef SEQUENCERECORDERSECTIONS_MovieSceneParticleTrackSectionRecorder_generated_h
#error "MovieSceneParticleTrackSectionRecorder.generated.h already included, missing '#pragma once' in MovieSceneParticleTrackSectionRecorder.h"
#endif
#define SEQUENCERECORDERSECTIONS_MovieSceneParticleTrackSectionRecorder_generated_h

#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggered) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_Component); \
		P_GET_UBOOL(Z_Param_bActivating); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggered(Z_Param_Component,Z_Param_bActivating); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggered) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_Component); \
		P_GET_UBOOL(Z_Param_bActivating); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggered(Z_Param_Component,Z_Param_bActivating); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleTrackSectionRecorder(); \
	friend struct Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParticleTrackSectionRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorderSections"), SEQUENCERECORDERSECTIONS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleTrackSectionRecorder)


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleTrackSectionRecorder(); \
	friend struct Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParticleTrackSectionRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorderSections"), SEQUENCERECORDERSECTIONS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleTrackSectionRecorder)


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDERSECTIONS_API UMovieSceneParticleTrackSectionRecorder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleTrackSectionRecorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDERSECTIONS_API, UMovieSceneParticleTrackSectionRecorder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleTrackSectionRecorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SEQUENCERECORDERSECTIONS_API UMovieSceneParticleTrackSectionRecorder(UMovieSceneParticleTrackSectionRecorder&&); \
	SEQUENCERECORDERSECTIONS_API UMovieSceneParticleTrackSectionRecorder(const UMovieSceneParticleTrackSectionRecorder&); \
public:


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SEQUENCERECORDERSECTIONS_API UMovieSceneParticleTrackSectionRecorder(UMovieSceneParticleTrackSectionRecorder&&); \
	SEQUENCERECORDERSECTIONS_API UMovieSceneParticleTrackSectionRecorder(const UMovieSceneParticleTrackSectionRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDERSECTIONS_API, UMovieSceneParticleTrackSectionRecorder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleTrackSectionRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneParticleTrackSectionRecorder)


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_25_PROLOG
#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_RPC_WRAPPERS \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_INCLASS \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERECORDERSECTIONS_API UClass* StaticClass<class UMovieSceneParticleTrackSectionRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

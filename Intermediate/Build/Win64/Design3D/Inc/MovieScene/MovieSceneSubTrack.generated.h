// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSubTrack_generated_h
#error "MovieSceneSubTrack.generated.h already included, missing '#pragma once' in MovieSceneSubTrack.h"
#endif
#define MOVIESCENE_MovieSceneSubTrack_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSubTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneSubTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubTrack)


#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSubTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneSubTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubTrack)


#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSubTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubTrack(UMovieSceneSubTrack&&); \
	NO_API UMovieSceneSubTrack(const UMovieSceneSubTrack&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubTrack(UMovieSceneSubTrack&&); \
	NO_API UMovieSceneSubTrack(const UMovieSceneSubTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubTrack)


#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sections() { return STRUCT_OFFSET(UMovieSceneSubTrack, Sections); }


#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_18_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSubTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

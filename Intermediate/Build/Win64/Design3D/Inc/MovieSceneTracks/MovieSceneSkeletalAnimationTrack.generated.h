// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneSkeletalAnimationTrack_generated_h
#error "MovieSceneSkeletalAnimationTrack.generated.h already included, missing '#pragma once' in MovieSceneSkeletalAnimationTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSkeletalAnimationTrack_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSkeletalAnimationTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSkeletalAnimationTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(UMovieSceneSkeletalAnimationTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(const UMovieSceneSkeletalAnimationTrack&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(UMovieSceneSkeletalAnimationTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(const UMovieSceneSkeletalAnimationTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimationSections() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, AnimationSections); } \
	FORCEINLINE static uint32 __PPO__bUseLegacySectionIndexBlend() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, bUseLegacySectionIndexBlend); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_13_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneSkeletalAnimationTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneSkeletalAnimationTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

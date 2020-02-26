// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEventTrack_generated_h
#error "MovieSceneEventTrack.generated.h already included, missing '#pragma once' in MovieSceneEventTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventTrack_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneEventTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneEventTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEventTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEventTrack(UMovieSceneEventTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneEventTrack(const UMovieSceneEventTrack&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEventTrack(UMovieSceneEventTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneEventTrack(const UMovieSceneEventTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneEventTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sections() { return STRUCT_OFFSET(UMovieSceneEventTrack, Sections); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_29_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEventTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h


#define FOREACH_ENUM_EFIREEVENTSATPOSITION(op) \
	op(EFireEventsAtPosition::AtStartOfEvaluation) \
	op(EFireEventsAtPosition::AtEndOfEvaluation) \
	op(EFireEventsAtPosition::AfterSpawn) 

enum class EFireEventsAtPosition : uint8;
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EFireEventsAtPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

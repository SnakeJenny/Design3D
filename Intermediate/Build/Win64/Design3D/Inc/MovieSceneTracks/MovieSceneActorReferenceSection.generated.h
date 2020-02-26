// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneActorReferenceSection_generated_h
#error "MovieSceneActorReferenceSection.generated.h already included, missing '#pragma once' in MovieSceneActorReferenceSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneActorReferenceSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__KeyTimes() { return STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyTimes); } \
	FORCEINLINE static uint32 __PPO__KeyValues() { return STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyValues); } \
	typedef FMovieSceneChannel Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneActorReferenceData>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneActorReferenceKey>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneActorReferenceSection(); \
	friend struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneActorReferenceSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneActorReferenceSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneActorReferenceSection(); \
	friend struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneActorReferenceSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneActorReferenceSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneActorReferenceSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneActorReferenceSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneActorReferenceSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(UMovieSceneActorReferenceSection&&); \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(const UMovieSceneActorReferenceSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(UMovieSceneActorReferenceSection&&); \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(const UMovieSceneActorReferenceSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneActorReferenceSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneActorReferenceSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneActorReferenceSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorReferenceData() { return STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorReferenceData); } \
	FORCEINLINE static uint32 __PPO__ActorGuidIndexCurve_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidIndexCurve_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__ActorGuidStrings_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidStrings_DEPRECATED); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_151_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_155_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneActorReferenceSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneActorReferenceSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

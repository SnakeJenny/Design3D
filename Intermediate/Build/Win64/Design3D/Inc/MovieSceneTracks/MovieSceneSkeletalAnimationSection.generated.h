// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneSkeletalAnimationSection_generated_h
#error "MovieSceneSkeletalAnimationSection.generated.h already included, missing '#pragma once' in MovieSceneSkeletalAnimationSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSkeletalAnimationSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneSkeletalAnimationParams>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSkeletalAnimationSection, MOVIESCENETRACKS_API)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSkeletalAnimationSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSkeletalAnimationSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(UMovieSceneSkeletalAnimationSection&&); \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(const UMovieSceneSkeletalAnimationSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(UMovieSceneSkeletalAnimationSection&&); \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(const UMovieSceneSkeletalAnimationSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimSequence_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, AnimSequence_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__Animation_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Animation_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__StartOffset_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartOffset_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__EndOffset_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, EndOffset_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PlayRate_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, PlayRate_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SlotName_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, SlotName_DEPRECATED); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_71_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_75_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneSkeletalAnimationSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneSkeletalAnimationSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

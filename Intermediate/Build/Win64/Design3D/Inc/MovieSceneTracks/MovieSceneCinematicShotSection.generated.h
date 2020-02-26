// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneCinematicShotSection_generated_h
#error "MovieSceneCinematicShotSection.generated.h already included, missing '#pragma once' in MovieSceneCinematicShotSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCinematicShotSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetShotDisplayName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InShotDisplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShotDisplayName(Z_Param_InShotDisplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShotDisplayName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetShotDisplayName(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetShotDisplayName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InShotDisplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShotDisplayName(Z_Param_InShotDisplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShotDisplayName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetShotDisplayName(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCinematicShotSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCinematicShotSection, UMovieSceneSubSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCinematicShotSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCinematicShotSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCinematicShotSection, UMovieSceneSubSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCinematicShotSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCinematicShotSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCinematicShotSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCinematicShotSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCinematicShotSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCinematicShotSection(UMovieSceneCinematicShotSection&&); \
	NO_API UMovieSceneCinematicShotSection(const UMovieSceneCinematicShotSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCinematicShotSection(UMovieSceneCinematicShotSection&&); \
	NO_API UMovieSceneCinematicShotSection(const UMovieSceneCinematicShotSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCinematicShotSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCinematicShotSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneCinematicShotSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShotDisplayName() { return STRUCT_OFFSET(UMovieSceneCinematicShotSection, ShotDisplayName); } \
	FORCEINLINE static uint32 __PPO__DisplayName_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneCinematicShotSection, DisplayName_DEPRECATED); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_13_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneCinematicShotSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELevelVisibility : uint8;
#ifdef MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h
#error "MovieSceneLevelVisibilitySection.generated.h already included, missing '#pragma once' in MovieSceneLevelVisibilitySection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLevelNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_InLevelNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelNames(Z_Param_Out_InLevelNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetLevelNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_ENUM(ELevelVisibility,Z_Param_InVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(ELevelVisibility(Z_Param_InVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ELevelVisibility*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLevelNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_InLevelNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelNames(Z_Param_Out_InLevelNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetLevelNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_ENUM(ELevelVisibility,Z_Param_InVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(ELevelVisibility(Z_Param_InVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ELevelVisibility*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySection(); \
	friend struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLevelVisibilitySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySection(); \
	friend struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLevelVisibilitySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneLevelVisibilitySection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneLevelVisibilitySection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneLevelVisibilitySection(UMovieSceneLevelVisibilitySection&&); \
	NO_API UMovieSceneLevelVisibilitySection(const UMovieSceneLevelVisibilitySection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneLevelVisibilitySection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneLevelVisibilitySection(UMovieSceneLevelVisibilitySection&&); \
	NO_API UMovieSceneLevelVisibilitySection(const UMovieSceneLevelVisibilitySection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneLevelVisibilitySection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Visibility() { return STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, Visibility); } \
	FORCEINLINE static uint32 __PPO__LevelNames() { return STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, LevelNames); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_29_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneLevelVisibilitySection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneLevelVisibilitySection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h


#define FOREACH_ENUM_ELEVELVISIBILITY(op) \
	op(ELevelVisibility::Visible) \
	op(ELevelVisibility::Hidden) 

enum class ELevelVisibility : uint8;
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<ELevelVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

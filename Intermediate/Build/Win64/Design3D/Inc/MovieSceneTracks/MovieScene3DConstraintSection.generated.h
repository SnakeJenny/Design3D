// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
#ifdef MOVIESCENETRACKS_MovieScene3DConstraintSection_generated_h
#error "MovieScene3DConstraintSection.generated.h already included, missing '#pragma once' in MovieScene3DConstraintSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DConstraintSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConstraintBindingID) \
	{ \
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InConstraintBindingID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintBindingID(Z_Param_Out_InConstraintBindingID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstraintBindingID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetConstraintBindingID(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetConstraintBindingID) \
	{ \
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InConstraintBindingID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintBindingID(Z_Param_Out_InConstraintBindingID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstraintBindingID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetConstraintBindingID(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DConstraintSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DConstraintSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DConstraintSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DConstraintSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DConstraintSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DConstraintSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DConstraintSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DConstraintSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DConstraintSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(UMovieScene3DConstraintSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const UMovieScene3DConstraintSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(UMovieScene3DConstraintSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const UMovieScene3DConstraintSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DConstraintSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DConstraintSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DConstraintSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConstraintId_DEPRECATED() { return STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintId_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__ConstraintBindingID() { return STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintBindingID); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_17_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene3DConstraintSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DConstraintSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

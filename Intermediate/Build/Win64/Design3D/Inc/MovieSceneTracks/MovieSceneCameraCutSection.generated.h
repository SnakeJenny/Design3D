// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
#ifdef MOVIESCENETRACKS_MovieSceneCameraCutSection_generated_h
#error "MovieSceneCameraCutSection.generated.h already included, missing '#pragma once' in MovieSceneCameraCutSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCameraCutSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraBindingID) \
	{ \
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InCameraBindingID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraBindingID(Z_Param_Out_InCameraBindingID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraBindingID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetCameraBindingID(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraBindingID) \
	{ \
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InCameraBindingID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraBindingID(Z_Param_Out_InCameraBindingID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraBindingID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetCameraBindingID(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraCutSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCameraCutSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneCameraCutSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraCutSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCameraCutSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneCameraCutSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraCutSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCameraCutSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraCutSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(UMovieSceneCameraCutSection&&); \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(const UMovieSceneCameraCutSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(UMovieSceneCameraCutSection&&); \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(const UMovieSceneCameraCutSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCameraCutSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraCutSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraCutSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraGuid_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraGuid_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__CameraBindingID() { return STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraBindingID); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_21_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneCameraCutSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

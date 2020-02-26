// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;
#ifdef MOVIESCENECAPTURE_MovieSceneCaptureEnvironment_generated_h
#error "MovieSceneCaptureEnvironment.generated.h already included, missing '#pragma once' in MovieSceneCaptureEnvironment.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCaptureEnvironment_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindAudioCaptureProtocol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMovieSceneAudioCaptureProtocolBase**)Z_Param__Result=UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindImageCaptureProtocol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMovieSceneImageCaptureProtocolBase**)Z_Param__Result=UMovieSceneCaptureEnvironment::FindImageCaptureProtocol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCaptureInProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMovieSceneCaptureEnvironment::IsCaptureInProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCaptureElapsedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMovieSceneCaptureEnvironment::GetCaptureElapsedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCaptureFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMovieSceneCaptureEnvironment::GetCaptureFrameNumber(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindAudioCaptureProtocol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMovieSceneAudioCaptureProtocolBase**)Z_Param__Result=UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindImageCaptureProtocol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMovieSceneImageCaptureProtocolBase**)Z_Param__Result=UMovieSceneCaptureEnvironment::FindImageCaptureProtocol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCaptureInProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMovieSceneCaptureEnvironment::IsCaptureInProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCaptureElapsedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMovieSceneCaptureEnvironment::GetCaptureElapsedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCaptureFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMovieSceneCaptureEnvironment::GetCaptureFrameNumber(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureEnvironment(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureEnvironment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureEnvironment)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureEnvironment(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureEnvironment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureEnvironment)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCaptureEnvironment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureEnvironment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCaptureEnvironment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureEnvironment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCaptureEnvironment(UMovieSceneCaptureEnvironment&&); \
	NO_API UMovieSceneCaptureEnvironment(const UMovieSceneCaptureEnvironment&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCaptureEnvironment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCaptureEnvironment(UMovieSceneCaptureEnvironment&&); \
	NO_API UMovieSceneCaptureEnvironment(const UMovieSceneCaptureEnvironment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCaptureEnvironment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureEnvironment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureEnvironment)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_13_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneCaptureEnvironment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

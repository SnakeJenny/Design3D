// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneCaptureProtocolState : uint8;
#ifdef MOVIESCENECAPTURE_MovieSceneCaptureProtocolBase_generated_h
#error "MovieSceneCaptureProtocolBase.generated.h already included, missing '#pragma once' in MovieSceneCaptureProtocolBase.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCaptureProtocolBase_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFrameMetrics_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<struct FFrameMetrics>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCapturing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCapturing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMovieSceneCaptureProtocolState*)Z_Param__Result=P_THIS->GetState(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCapturing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCapturing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMovieSceneCaptureProtocolState*)Z_Param__Result=P_THIS->GetState(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureProtocolBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureProtocolBase) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureProtocolBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureProtocolBase) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCaptureProtocolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureProtocolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCaptureProtocolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureProtocolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCaptureProtocolBase(UMovieSceneCaptureProtocolBase&&); \
	NO_API UMovieSceneCaptureProtocolBase(const UMovieSceneCaptureProtocolBase&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCaptureProtocolBase(UMovieSceneCaptureProtocolBase&&); \
	NO_API UMovieSceneCaptureProtocolBase(const UMovieSceneCaptureProtocolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCaptureProtocolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureProtocolBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UMovieSceneCaptureProtocolBase, State); }


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_56_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneCaptureProtocolBase>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneImageCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneImageCaptureProtocolBase, UMovieSceneCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneImageCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneImageCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneImageCaptureProtocolBase, UMovieSceneCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneImageCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneImageCaptureProtocolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneImageCaptureProtocolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneImageCaptureProtocolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneImageCaptureProtocolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneImageCaptureProtocolBase(UMovieSceneImageCaptureProtocolBase&&); \
	NO_API UMovieSceneImageCaptureProtocolBase(const UMovieSceneImageCaptureProtocolBase&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneImageCaptureProtocolBase(UMovieSceneImageCaptureProtocolBase&&); \
	NO_API UMovieSceneImageCaptureProtocolBase(const UMovieSceneImageCaptureProtocolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneImageCaptureProtocolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneImageCaptureProtocolBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneImageCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_281_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneImageCaptureProtocolBase>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioCaptureProtocolBase, UMovieSceneCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioCaptureProtocolBase, UMovieSceneCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioCaptureProtocolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioCaptureProtocolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioCaptureProtocolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioCaptureProtocolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioCaptureProtocolBase(UMovieSceneAudioCaptureProtocolBase&&); \
	NO_API UMovieSceneAudioCaptureProtocolBase(const UMovieSceneAudioCaptureProtocolBase&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioCaptureProtocolBase(UMovieSceneAudioCaptureProtocolBase&&); \
	NO_API UMovieSceneAudioCaptureProtocolBase(const UMovieSceneAudioCaptureProtocolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioCaptureProtocolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioCaptureProtocolBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioCaptureProtocolBase)


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_296_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneAudioCaptureProtocolBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h


#define FOREACH_ENUM_EMOVIESCENECAPTUREPROTOCOLSTATE(op) \
	op(EMovieSceneCaptureProtocolState::Idle) \
	op(EMovieSceneCaptureProtocolState::Initialized) \
	op(EMovieSceneCaptureProtocolState::Capturing) \
	op(EMovieSceneCaptureProtocolState::Finalizing) 

enum class EMovieSceneCaptureProtocolState : uint8;
template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EMovieSceneCaptureProtocolState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

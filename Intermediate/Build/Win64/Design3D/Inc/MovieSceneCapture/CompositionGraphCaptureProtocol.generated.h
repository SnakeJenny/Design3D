// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h
#error "CompositionGraphCaptureProtocol.generated.h already included, missing '#pragma once' in CompositionGraphCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<struct FCompositionGraphCapturePasses>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositionGraphCaptureProtocol(); \
	friend struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UCompositionGraphCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UCompositionGraphCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUCompositionGraphCaptureProtocol(); \
	friend struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UCompositionGraphCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UCompositionGraphCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositionGraphCaptureProtocol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositionGraphCaptureProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositionGraphCaptureProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositionGraphCaptureProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositionGraphCaptureProtocol(UCompositionGraphCaptureProtocol&&); \
	NO_API UCompositionGraphCaptureProtocol(const UCompositionGraphCaptureProtocol&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositionGraphCaptureProtocol(UCompositionGraphCaptureProtocol&&); \
	NO_API UCompositionGraphCaptureProtocol(const UCompositionGraphCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositionGraphCaptureProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositionGraphCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositionGraphCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PostProcessingMaterialPtr() { return STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr); }


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_40_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UCompositionGraphCaptureProtocol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h


#define FOREACH_ENUM_EHDRCAPTUREGAMUT(op) \
	op(HCGM_Rec709) \
	op(HCGM_P3DCI) \
	op(HCGM_Rec2020) \
	op(HCGM_ACES) \
	op(HCGM_ACEScg) \
	op(HCGM_Linear) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

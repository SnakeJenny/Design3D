// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCurveCompressionCodec_generated_h
#error "AnimCurveCompressionCodec.generated.h already included, missing '#pragma once' in AnimCurveCompressionCodec.h"
#endif
#define ENGINE_AnimCurveCompressionCodec_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimCurveCompressionCodec, NO_API)


#else
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCurveCompressionCodec(); \
	friend struct Z_Construct_UClass_UAnimCurveCompressionCodec_Statics; \
public: \
	DECLARE_CLASS(UAnimCurveCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimCurveCompressionCodec) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCurveCompressionCodec(); \
	friend struct Z_Construct_UClass_UAnimCurveCompressionCodec_Statics; \
public: \
	DECLARE_CLASS(UAnimCurveCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimCurveCompressionCodec) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCurveCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCurveCompressionCodec) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCurveCompressionCodec); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCurveCompressionCodec); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimCurveCompressionCodec(UAnimCurveCompressionCodec&&); \
	NO_API UAnimCurveCompressionCodec(const UAnimCurveCompressionCodec&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCurveCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimCurveCompressionCodec(UAnimCurveCompressionCodec&&); \
	NO_API UAnimCurveCompressionCodec(const UAnimCurveCompressionCodec&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCurveCompressionCodec); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCurveCompressionCodec); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCurveCompressionCodec)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_31_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimCurveCompressionCodec."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimCurveCompressionCodec>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

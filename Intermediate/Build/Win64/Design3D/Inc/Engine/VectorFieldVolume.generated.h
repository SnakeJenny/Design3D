// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorFieldVolume_generated_h
#error "VectorFieldVolume.generated.h already included, missing '#pragma once' in VectorFieldVolume.h"
#endif
#define ENGINE_VectorFieldVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVectorFieldVolume(); \
	friend struct Z_Construct_UClass_AVectorFieldVolume_Statics; \
public: \
	DECLARE_CLASS(AVectorFieldVolume, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVectorFieldVolume)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVectorFieldVolume(); \
	friend struct Z_Construct_UClass_AVectorFieldVolume_Statics; \
public: \
	DECLARE_CLASS(AVectorFieldVolume, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVectorFieldVolume)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVectorFieldVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVectorFieldVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVectorFieldVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVectorFieldVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AVectorFieldVolume(AVectorFieldVolume&&); \
	ENGINE_API AVectorFieldVolume(const AVectorFieldVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVectorFieldVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AVectorFieldVolume(AVectorFieldVolume&&); \
	ENGINE_API AVectorFieldVolume(const AVectorFieldVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVectorFieldVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVectorFieldVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVectorFieldVolume)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VectorFieldComponent() { return STRUCT_OFFSET(AVectorFieldVolume, VectorFieldComponent); }


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorFieldVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AVectorFieldVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

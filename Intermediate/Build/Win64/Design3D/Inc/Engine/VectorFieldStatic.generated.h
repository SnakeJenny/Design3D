// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorFieldStatic_generated_h
#error "VectorFieldStatic.generated.h already included, missing '#pragma once' in VectorFieldStatic.h"
#endif
#define ENGINE_VectorFieldStatic_generated_h

#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVectorFieldStatic, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVectorFieldStatic(); \
	friend struct Z_Construct_UClass_UVectorFieldStatic_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldStatic, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldStatic) \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldStatic(); \
	friend struct Z_Construct_UClass_UVectorFieldStatic_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldStatic, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldStatic) \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldStatic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldStatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldStatic(UVectorFieldStatic&&); \
	ENGINE_API UVectorFieldStatic(const UVectorFieldStatic&); \
public:


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldStatic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldStatic(UVectorFieldStatic&&); \
	ENGINE_API UVectorFieldStatic(const UVectorFieldStatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldStatic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldStatic)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorFieldStatic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVectorFieldStatic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

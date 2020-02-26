// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorFieldAnimated_generated_h
#error "VectorFieldAnimated.generated.h already included, missing '#pragma once' in VectorFieldAnimated.h"
#endif
#define ENGINE_VectorFieldAnimated_generated_h

#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVectorFieldAnimated(); \
	friend struct Z_Construct_UClass_UVectorFieldAnimated_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldAnimated, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldAnimated)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldAnimated(); \
	friend struct Z_Construct_UClass_UVectorFieldAnimated_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldAnimated, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldAnimated)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldAnimated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldAnimated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldAnimated); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldAnimated); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldAnimated(UVectorFieldAnimated&&); \
	ENGINE_API UVectorFieldAnimated(const UVectorFieldAnimated&); \
public:


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldAnimated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldAnimated(UVectorFieldAnimated&&); \
	ENGINE_API UVectorFieldAnimated(const UVectorFieldAnimated&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldAnimated); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldAnimated); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldAnimated)


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_27_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorFieldAnimated."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVectorFieldAnimated>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h


#define FOREACH_ENUM_EVECTORFIELDCONSTRUCTIONOP(op) \
	op(VFCO_Extrude) \
	op(VFCO_Revolve) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

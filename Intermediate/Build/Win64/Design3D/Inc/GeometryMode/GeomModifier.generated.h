// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYMODE_GeomModifier_generated_h
#error "GeomModifier.generated.h already included, missing '#pragma once' in GeomModifier.h"
#endif
#define GEOMETRYMODE_GeomModifier_generated_h

#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_RPC_WRAPPERS
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeomModifier(); \
	friend struct Z_Construct_UClass_UGeomModifier_Statics; \
public: \
	DECLARE_CLASS(UGeomModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GeometryMode"), NO_API) \
	DECLARE_SERIALIZER(UGeomModifier)


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier(); \
	friend struct Z_Construct_UClass_UGeomModifier_Statics; \
public: \
	DECLARE_CLASS(UGeomModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GeometryMode"), NO_API) \
	DECLARE_SERIALIZER(UGeomModifier)


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeomModifier(UGeomModifier&&); \
	NO_API UGeomModifier(const UGeomModifier&); \
public:


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeomModifier(UGeomModifier&&); \
	NO_API UGeomModifier(const UGeomModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier)


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedPolys() { return STRUCT_OFFSET(UGeomModifier, CachedPolys); }


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_25_PROLOG
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_RPC_WRAPPERS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_INCLASS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeomModifier."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMODE_API UClass* StaticClass<class UGeomModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_GeometryMode_Classes_GeomModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

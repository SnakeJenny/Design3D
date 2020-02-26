// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicalMaterial_generated_h
#error "PhysicalMaterial.generated.h already included, missing '#pragma once' in PhysicalMaterial.h"
#endif
#define ENGINE_PhysicalMaterial_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTireFrictionScalePair>();

#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicalMaterial(); \
	friend struct Z_Construct_UClass_UPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(UPhysicalMaterial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalMaterial)


#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalMaterial(); \
	friend struct Z_Construct_UClass_UPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(UPhysicalMaterial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalMaterial)


#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalMaterial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalMaterial(UPhysicalMaterial&&); \
	NO_API UPhysicalMaterial(const UPhysicalMaterial&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalMaterial(UPhysicalMaterial&&); \
	NO_API UPhysicalMaterial(const UPhysicalMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalMaterial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalMaterial)


#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_47_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicalMaterial."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicalMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

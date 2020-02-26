// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpression_generated_h
#error "MaterialExpression.generated.h already included, missing '#pragma once' in MaterialExpression.h"
#endif
#define ENGINE_MaterialExpression_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpression, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpression(); \
	friend struct Z_Construct_UClass_UMaterialExpression_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpression) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpression(); \
	friend struct Z_Construct_UClass_UMaterialExpression_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpression) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpression); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpression); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpression(UMaterialExpression&&); \
	NO_API UMaterialExpression(const UMaterialExpression&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpression(UMaterialExpression&&); \
	NO_API UMaterialExpression(const UMaterialExpression&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpression); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpression); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpression)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_99_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpression."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpression>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ShapeComponent_generated_h
#error "ShapeComponent.generated.h already included, missing '#pragma once' in ShapeComponent.h"
#endif
#define ENGINE_ShapeComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShapeComponent(); \
	friend struct Z_Construct_UClass_UShapeComponent_Statics; \
public: \
	DECLARE_CLASS(UShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UShapeComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUShapeComponent(); \
	friend struct Z_Construct_UClass_UShapeComponent_Statics; \
public: \
	DECLARE_CLASS(UShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UShapeComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShapeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShapeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShapeComponent(UShapeComponent&&); \
	NO_API UShapeComponent(const UShapeComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShapeComponent(UShapeComponent&&); \
	NO_API UShapeComponent(const UShapeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShapeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShapeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShapeComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShapeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UShapeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

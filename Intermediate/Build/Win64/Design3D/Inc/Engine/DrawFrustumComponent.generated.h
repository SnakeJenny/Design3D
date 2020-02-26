// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DrawFrustumComponent_generated_h
#error "DrawFrustumComponent.generated.h already included, missing '#pragma once' in DrawFrustumComponent.h"
#endif
#define ENGINE_DrawFrustumComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrawFrustumComponent(); \
	friend struct Z_Construct_UClass_UDrawFrustumComponent_Statics; \
public: \
	DECLARE_CLASS(UDrawFrustumComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDrawFrustumComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDrawFrustumComponent(); \
	friend struct Z_Construct_UClass_UDrawFrustumComponent_Statics; \
public: \
	DECLARE_CLASS(UDrawFrustumComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDrawFrustumComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDrawFrustumComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrawFrustumComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDrawFrustumComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrawFrustumComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDrawFrustumComponent(UDrawFrustumComponent&&); \
	ENGINE_API UDrawFrustumComponent(const UDrawFrustumComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDrawFrustumComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDrawFrustumComponent(UDrawFrustumComponent&&); \
	ENGINE_API UDrawFrustumComponent(const UDrawFrustumComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDrawFrustumComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrawFrustumComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrawFrustumComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DrawFrustumComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDrawFrustumComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

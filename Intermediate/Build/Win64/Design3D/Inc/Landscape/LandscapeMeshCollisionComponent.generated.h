// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeMeshCollisionComponent_generated_h
#error "LandscapeMeshCollisionComponent.generated.h already included, missing '#pragma once' in LandscapeMeshCollisionComponent.h"
#endif
#define LANDSCAPE_LandscapeMeshCollisionComponent_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeMeshCollisionComponent, NO_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeMeshCollisionComponent(); \
	friend struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeMeshCollisionComponent, ULandscapeHeightfieldCollisionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeMeshCollisionComponent) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeMeshCollisionComponent(); \
	friend struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeMeshCollisionComponent, ULandscapeHeightfieldCollisionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeMeshCollisionComponent) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeMeshCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMeshCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeMeshCollisionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMeshCollisionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeMeshCollisionComponent(ULandscapeMeshCollisionComponent&&); \
	NO_API ULandscapeMeshCollisionComponent(const ULandscapeMeshCollisionComponent&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeMeshCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeMeshCollisionComponent(ULandscapeMeshCollisionComponent&&); \
	NO_API ULandscapeMeshCollisionComponent(const ULandscapeMeshCollisionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeMeshCollisionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMeshCollisionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMeshCollisionComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_27_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeMeshCollisionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeMeshCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeMeshProxyActor_generated_h
#error "LandscapeMeshProxyActor.generated.h already included, missing '#pragma once' in LandscapeMeshProxyActor.h"
#endif
#define LANDSCAPE_LandscapeMeshProxyActor_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeMeshProxyActor(); \
	friend struct Z_Construct_UClass_ALandscapeMeshProxyActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeMeshProxyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeMeshProxyActor)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeMeshProxyActor(); \
	friend struct Z_Construct_UClass_ALandscapeMeshProxyActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeMeshProxyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeMeshProxyActor)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeMeshProxyActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeMeshProxyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeMeshProxyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeMeshProxyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeMeshProxyActor(ALandscapeMeshProxyActor&&); \
	LANDSCAPE_API ALandscapeMeshProxyActor(const ALandscapeMeshProxyActor&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeMeshProxyActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeMeshProxyActor(ALandscapeMeshProxyActor&&); \
	LANDSCAPE_API ALandscapeMeshProxyActor(const ALandscapeMeshProxyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeMeshProxyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeMeshProxyActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeMeshProxyActor)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LandscapeMeshProxyComponent() { return STRUCT_OFFSET(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_11_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeMeshProxyActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeMeshProxyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

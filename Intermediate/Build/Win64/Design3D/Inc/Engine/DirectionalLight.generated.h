// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DirectionalLight_generated_h
#error "DirectionalLight.generated.h already included, missing '#pragma once' in DirectionalLight.h"
#endif
#define ENGINE_DirectionalLight_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADirectionalLight(); \
	friend struct Z_Construct_UClass_ADirectionalLight_Statics; \
public: \
	DECLARE_CLASS(ADirectionalLight, ALight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADirectionalLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADirectionalLight(); \
	friend struct Z_Construct_UClass_ADirectionalLight_Statics; \
public: \
	DECLARE_CLASS(ADirectionalLight, ALight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADirectionalLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADirectionalLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADirectionalLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADirectionalLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirectionalLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ADirectionalLight(ADirectionalLight&&); \
	ENGINE_API ADirectionalLight(const ADirectionalLight&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADirectionalLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ADirectionalLight(ADirectionalLight&&); \
	ENGINE_API ADirectionalLight(const ADirectionalLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADirectionalLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirectionalLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADirectionalLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DirectionalLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADirectionalLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

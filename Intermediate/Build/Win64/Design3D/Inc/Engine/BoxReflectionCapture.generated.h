// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BoxReflectionCapture_generated_h
#error "BoxReflectionCapture.generated.h already included, missing '#pragma once' in BoxReflectionCapture.h"
#endif
#define ENGINE_BoxReflectionCapture_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxReflectionCapture(); \
	friend struct Z_Construct_UClass_ABoxReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(ABoxReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABoxReflectionCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABoxReflectionCapture(); \
	friend struct Z_Construct_UClass_ABoxReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(ABoxReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABoxReflectionCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABoxReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABoxReflectionCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxReflectionCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ABoxReflectionCapture(ABoxReflectionCapture&&); \
	ENGINE_API ABoxReflectionCapture(const ABoxReflectionCapture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABoxReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ABoxReflectionCapture(ABoxReflectionCapture&&); \
	ENGINE_API ABoxReflectionCapture(const ABoxReflectionCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABoxReflectionCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxReflectionCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxReflectionCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BoxReflectionCapture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABoxReflectionCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

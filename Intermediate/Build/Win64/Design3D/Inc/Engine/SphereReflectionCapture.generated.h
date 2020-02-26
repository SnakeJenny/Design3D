// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SphereReflectionCapture_generated_h
#error "SphereReflectionCapture.generated.h already included, missing '#pragma once' in SphereReflectionCapture.h"
#endif
#define ENGINE_SphereReflectionCapture_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASphereReflectionCapture(); \
	friend struct Z_Construct_UClass_ASphereReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(ASphereReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASphereReflectionCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASphereReflectionCapture(); \
	friend struct Z_Construct_UClass_ASphereReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(ASphereReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASphereReflectionCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASphereReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASphereReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASphereReflectionCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASphereReflectionCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASphereReflectionCapture(ASphereReflectionCapture&&); \
	ENGINE_API ASphereReflectionCapture(const ASphereReflectionCapture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASphereReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASphereReflectionCapture(ASphereReflectionCapture&&); \
	ENGINE_API ASphereReflectionCapture(const ASphereReflectionCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASphereReflectionCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASphereReflectionCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASphereReflectionCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DrawCaptureRadius() { return STRUCT_OFFSET(ASphereReflectionCapture, DrawCaptureRadius); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SphereReflectionCapture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASphereReflectionCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendSpace1D_generated_h
#error "BlendSpace1D.generated.h already included, missing '#pragma once' in BlendSpace1D.h"
#endif
#define ENGINE_BlendSpace1D_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpace1D(); \
	friend struct Z_Construct_UClass_UBlendSpace1D_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace1D, UBlendSpaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace1D)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpace1D(); \
	friend struct Z_Construct_UClass_UBlendSpace1D_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace1D, UBlendSpaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace1D)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace1D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace1D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace1D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace1D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpace1D(UBlendSpace1D&&); \
	ENGINE_API UBlendSpace1D(const UBlendSpace1D&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace1D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpace1D(UBlendSpace1D&&); \
	ENGINE_API UBlendSpace1D(const UBlendSpace1D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace1D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace1D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace1D)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlendSpace1D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendSpace1D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

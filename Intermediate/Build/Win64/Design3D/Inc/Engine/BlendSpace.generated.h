// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendSpace_generated_h
#error "BlendSpace.generated.h already included, missing '#pragma once' in BlendSpace.h"
#endif
#define ENGINE_BlendSpace_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpace(); \
	friend struct Z_Construct_UClass_UBlendSpace_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace, UBlendSpaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpace(); \
	friend struct Z_Construct_UClass_UBlendSpace_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace, UBlendSpaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpace(UBlendSpace&&); \
	ENGINE_API UBlendSpace(const UBlendSpace&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpace(UBlendSpace&&); \
	ENGINE_API UBlendSpace(const UBlendSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AxisToScaleAnimation() { return STRUCT_OFFSET(UBlendSpace, AxisToScaleAnimation); }


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlendSpace."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

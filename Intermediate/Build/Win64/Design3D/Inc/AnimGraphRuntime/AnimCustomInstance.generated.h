// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimCustomInstance_generated_h
#error "AnimCustomInstance.generated.h already included, missing '#pragma once' in AnimCustomInstance.h"
#endif
#define ANIMGRAPHRUNTIME_AnimCustomInstance_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCustomInstance(); \
	friend struct Z_Construct_UClass_UAnimCustomInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimCustomInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimCustomInstance)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCustomInstance(); \
	friend struct Z_Construct_UClass_UAnimCustomInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimCustomInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimCustomInstance)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCustomInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCustomInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCustomInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCustomInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimCustomInstance(UAnimCustomInstance&&); \
	NO_API UAnimCustomInstance(const UAnimCustomInstance&); \
public:


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCustomInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimCustomInstance(UAnimCustomInstance&&); \
	NO_API UAnimCustomInstance(const UAnimCustomInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCustomInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCustomInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCustomInstance)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_14_PROLOG
#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_INCLASS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimCustomInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UAnimCustomInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimCustomInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTComposite_SimpleParallel_generated_h
#error "BTComposite_SimpleParallel.generated.h already included, missing '#pragma once' in BTComposite_SimpleParallel.h"
#endif
#define AIMODULE_BTComposite_SimpleParallel_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTComposite_SimpleParallel(); \
	friend struct Z_Construct_UClass_UBTComposite_SimpleParallel_Statics; \
public: \
	DECLARE_CLASS(UBTComposite_SimpleParallel, UBTCompositeNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTComposite_SimpleParallel)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUBTComposite_SimpleParallel(); \
	friend struct Z_Construct_UClass_UBTComposite_SimpleParallel_Statics; \
public: \
	DECLARE_CLASS(UBTComposite_SimpleParallel, UBTCompositeNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTComposite_SimpleParallel)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTComposite_SimpleParallel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_SimpleParallel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTComposite_SimpleParallel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_SimpleParallel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTComposite_SimpleParallel(UBTComposite_SimpleParallel&&); \
	NO_API UBTComposite_SimpleParallel(const UBTComposite_SimpleParallel&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTComposite_SimpleParallel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTComposite_SimpleParallel(UBTComposite_SimpleParallel&&); \
	NO_API UBTComposite_SimpleParallel(const UBTComposite_SimpleParallel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTComposite_SimpleParallel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_SimpleParallel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_SimpleParallel)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_53_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTComposite_SimpleParallel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTComposite_SimpleParallel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h


#define FOREACH_ENUM_EBTPARALLELMODE(op) \
	op(EBTParallelMode::AbortBackground) \
	op(EBTParallelMode::WaitForBackground) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

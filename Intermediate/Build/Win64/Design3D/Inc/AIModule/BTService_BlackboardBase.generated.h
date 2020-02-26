// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTService_BlackboardBase_generated_h
#error "BTService_BlackboardBase.generated.h already included, missing '#pragma once' in BTService_BlackboardBase.h"
#endif
#define AIMODULE_BTService_BlackboardBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService_BlackboardBase(); \
	friend struct Z_Construct_UClass_UBTService_BlackboardBase_Statics; \
public: \
	DECLARE_CLASS(UBTService_BlackboardBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTService_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBTService_BlackboardBase(); \
	friend struct Z_Construct_UClass_UBTService_BlackboardBase_Statics; \
public: \
	DECLARE_CLASS(UBTService_BlackboardBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTService_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlackboardBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_BlackboardBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlackboardBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService_BlackboardBase(UBTService_BlackboardBase&&); \
	NO_API UBTService_BlackboardBase(const UBTService_BlackboardBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService_BlackboardBase(UBTService_BlackboardBase&&); \
	NO_API UBTService_BlackboardBase(const UBTService_BlackboardBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_BlackboardBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlackboardBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardKey() { return STRUCT_OFFSET(UBTService_BlackboardBase, BlackboardKey); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_11_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTService_BlackboardBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTService_BlackboardBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

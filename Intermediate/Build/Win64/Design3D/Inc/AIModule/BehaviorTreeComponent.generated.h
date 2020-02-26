// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UBehaviorTree;
#ifdef AIMODULE_BehaviorTreeComponent_generated_h
#error "BehaviorTreeComponent.generated.h already included, missing '#pragma once' in BehaviorTreeComponent.h"
#endif
#define AIMODULE_BehaviorTreeComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDynamicSubtree) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_InjectTag); \
		P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicSubtree(Z_Param_InjectTag,Z_Param_BehaviorAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCooldownTagDuration) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CooldownDuration); \
		P_GET_UBOOL(Z_Param_bAddToExistingDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCooldownTagDuration(Z_Param_CooldownTag,Z_Param_CooldownDuration,Z_Param_bAddToExistingDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagCooldownEndTime) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTagCooldownEndTime(Z_Param_CooldownTag); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDynamicSubtree) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_InjectTag); \
		P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicSubtree(Z_Param_InjectTag,Z_Param_BehaviorAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCooldownTagDuration) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CooldownDuration); \
		P_GET_UBOOL(Z_Param_bAddToExistingDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCooldownTagDuration(Z_Param_CooldownTag,Z_Param_CooldownDuration,Z_Param_bAddToExistingDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagCooldownEndTime) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTagCooldownEndTime(Z_Param_CooldownTag); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeComponent(); \
	friend struct Z_Construct_UClass_UBehaviorTreeComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeComponent(); \
	friend struct Z_Construct_UClass_UBehaviorTreeComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeComponent) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeComponent(UBehaviorTreeComponent&&); \
	NO_API UBehaviorTreeComponent(const UBehaviorTreeComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeComponent(UBehaviorTreeComponent&&); \
	NO_API UBehaviorTreeComponent(const UBehaviorTreeComponent&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeInstances() { return STRUCT_OFFSET(UBehaviorTreeComponent, NodeInstances); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_80_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTreeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

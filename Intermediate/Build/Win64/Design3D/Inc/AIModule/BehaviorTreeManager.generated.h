// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTreeManager_generated_h
#error "BehaviorTreeManager.generated.h already included, missing '#pragma once' in BehaviorTreeManager.h"
#endif
#define AIMODULE_BehaviorTreeManager_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBehaviorTreeTemplateInfo>();

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeManager(); \
	friend struct Z_Construct_UClass_UBehaviorTreeManager_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeManager(); \
	friend struct Z_Construct_UClass_UBehaviorTreeManager_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeManager(UBehaviorTreeManager&&); \
	NO_API UBehaviorTreeManager(const UBehaviorTreeManager&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeManager(UBehaviorTreeManager&&); \
	NO_API UBehaviorTreeManager(const UBehaviorTreeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeManager)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadedTemplates() { return STRUCT_OFFSET(UBehaviorTreeManager, LoadedTemplates); } \
	FORCEINLINE static uint32 __PPO__ActiveComponents() { return STRUCT_OFFSET(UBehaviorTreeManager, ActiveComponents); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_32_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTreeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

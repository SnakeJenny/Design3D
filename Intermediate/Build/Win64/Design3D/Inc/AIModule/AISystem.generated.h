// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISystem_generated_h
#error "AISystem.generated.h already included, missing '#pragma once' in AISystem.h"
#endif
#define AIMODULE_AISystem_generated_h

#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAILoggingVerbose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AILoggingVerbose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAIIgnorePlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AIIgnorePlayers(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAILoggingVerbose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AILoggingVerbose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAIIgnorePlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AIIgnorePlayers(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISystem(); \
	friend struct Z_Construct_UClass_UAISystem_Statics; \
public: \
	DECLARE_CLASS(UAISystem, UAISystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISystem)


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAISystem(); \
	friend struct Z_Construct_UClass_UAISystem_Statics; \
public: \
	DECLARE_CLASS(UAISystem, UAISystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISystem)


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISystem(UAISystem&&); \
	NO_API UAISystem(const UAISystem&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISystem(UAISystem&&); \
	NO_API UAISystem(const UAISystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystem)


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PerceptionSystemClassName() { return STRUCT_OFFSET(UAISystem, PerceptionSystemClassName); } \
	FORCEINLINE static uint32 __PPO__HotSpotManagerClassName() { return STRUCT_OFFSET(UAISystem, HotSpotManagerClassName); } \
	FORCEINLINE static uint32 __PPO__BehaviorTreeManager() { return STRUCT_OFFSET(UAISystem, BehaviorTreeManager); } \
	FORCEINLINE static uint32 __PPO__EnvironmentQueryManager() { return STRUCT_OFFSET(UAISystem, EnvironmentQueryManager); } \
	FORCEINLINE static uint32 __PPO__PerceptionSystem() { return STRUCT_OFFSET(UAISystem, PerceptionSystem); } \
	FORCEINLINE static uint32 __PPO__AllProxyObjects() { return STRUCT_OFFSET(UAISystem, AllProxyObjects); } \
	FORCEINLINE static uint32 __PPO__HotSpotManager() { return STRUCT_OFFSET(UAISystem, HotSpotManager); } \
	FORCEINLINE static uint32 __PPO__NavLocalGrids() { return STRUCT_OFFSET(UAISystem, NavLocalGrids); }


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_25_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_AISystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

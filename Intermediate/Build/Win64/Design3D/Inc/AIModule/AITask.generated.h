// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AITask_generated_h
#error "AITask.generated.h already included, missing '#pragma once' in AITask.h"
#endif
#define AIMODULE_AITask_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask(); \
	friend struct Z_Construct_UClass_UAITask_Statics; \
public: \
	DECLARE_CLASS(UAITask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAITask(); \
	friend struct Z_Construct_UClass_UAITask_Statics; \
public: \
	DECLARE_CLASS(UAITask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask(UAITask&&); \
	NO_API UAITask(const UAITask&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask(UAITask&&); \
	NO_API UAITask(const UAITask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerController() { return STRUCT_OFFSET(UAITask, OwnerController); }


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_22_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h


#define FOREACH_ENUM_EAITASKPRIORITY(op) \
	op(EAITaskPriority::Lowest) \
	op(EAITaskPriority::Low) \
	op(EAITaskPriority::AutonomousAI) \
	op(EAITaskPriority::High) \
	op(EAITaskPriority::Ultimate) 

enum class EAITaskPriority : uint8;
template<> AIMODULE_API UEnum* StaticEnum<EAITaskPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

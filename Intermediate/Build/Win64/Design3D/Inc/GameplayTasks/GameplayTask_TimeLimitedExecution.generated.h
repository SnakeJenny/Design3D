// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTask_TimeLimitedExecution_generated_h
#error "GameplayTask_TimeLimitedExecution.generated.h already included, missing '#pragma once' in GameplayTask_TimeLimitedExecution.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_TimeLimitedExecution_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_22_DELEGATE \
static inline void FTaskFinishDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskFinishDelegate) \
{ \
	TaskFinishDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_TimeLimitedExecution(); \
	friend struct Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_TimeLimitedExecution, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_TimeLimitedExecution)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask_TimeLimitedExecution(); \
	friend struct Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_TimeLimitedExecution, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_TimeLimitedExecution)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTask_TimeLimitedExecution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_TimeLimitedExecution) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_TimeLimitedExecution); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_TimeLimitedExecution); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_TimeLimitedExecution(UGameplayTask_TimeLimitedExecution&&); \
	GAMEPLAYTASKS_API UGameplayTask_TimeLimitedExecution(const UGameplayTask_TimeLimitedExecution&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_TimeLimitedExecution(UGameplayTask_TimeLimitedExecution&&); \
	GAMEPLAYTASKS_API UGameplayTask_TimeLimitedExecution(const UGameplayTask_TimeLimitedExecution&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_TimeLimitedExecution); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_TimeLimitedExecution); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_TimeLimitedExecution)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_17_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTask_TimeLimitedExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

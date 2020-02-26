// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UGameplayTask_WaitDelay;
#ifdef GAMEPLAYTASKS_GameplayTask_WaitDelay_generated_h
#error "GameplayTask_WaitDelay.generated.h already included, missing '#pragma once' in GameplayTask_WaitDelay.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_WaitDelay_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_16_DELEGATE \
static inline void FTaskDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelayDelegate) \
{ \
	TaskDelayDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTaskWaitDelay) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time,Z_Param_Priority); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTaskWaitDelay) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time,Z_Param_Priority); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_WaitDelay(); \
	friend struct Z_Construct_UClass_UGameplayTask_WaitDelay_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_WaitDelay, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_WaitDelay)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask_WaitDelay(); \
	friend struct Z_Construct_UClass_UGameplayTask_WaitDelay_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_WaitDelay, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_WaitDelay)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_WaitDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_WaitDelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_WaitDelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(UGameplayTask_WaitDelay&&); \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(const UGameplayTask_WaitDelay&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(UGameplayTask_WaitDelay&&); \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(const UGameplayTask_WaitDelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_WaitDelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_WaitDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_WaitDelay)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_11_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTask_WaitDelay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

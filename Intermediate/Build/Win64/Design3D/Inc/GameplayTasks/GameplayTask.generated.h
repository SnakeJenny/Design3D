// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTask_generated_h
#error "GameplayTask.generated.h already included, missing '#pragma once' in GameplayTask.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayResourceSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTASKS_API UScriptStruct* StaticStruct<struct FGameplayResourceSet>();

#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_146_DELEGATE \
static inline void FGenericGameplayTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& GenericGameplayTaskDelegate) \
{ \
	GenericGameplayTaskDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTask(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyForActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadyForActivation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTask(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyForActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadyForActivation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend struct Z_Construct_UClass_UGameplayTask_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask*>(this); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend struct Z_Construct_UClass_UGameplayTask_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask*>(this); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask(UGameplayTask&&); \
	NO_API UGameplayTask(const UGameplayTask&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask(UGameplayTask&&); \
	NO_API UGameplayTask(const UGameplayTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask)


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstanceName() { return STRUCT_OFFSET(UGameplayTask, InstanceName); } \
	FORCEINLINE static uint32 __PPO__ResourceOverlapPolicy() { return STRUCT_OFFSET(UGameplayTask, ResourceOverlapPolicy); } \
	FORCEINLINE static uint32 __PPO__ChildTask() { return STRUCT_OFFSET(UGameplayTask, ChildTask); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_139_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h


#define FOREACH_ENUM_ETASKRESOURCEOVERLAPPOLICY(op) \
	op(ETaskResourceOverlapPolicy::StartOnTop) \
	op(ETaskResourceOverlapPolicy::StartAtEnd) 

enum class ETaskResourceOverlapPolicy : uint8;
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<ETaskResourceOverlapPolicy>();

#define FOREACH_ENUM_EGAMEPLAYTASKSTATE(op) \
	op(EGameplayTaskState::Uninitialized) \
	op(EGameplayTaskState::AwaitingActivation) \
	op(EGameplayTaskState::Paused) \
	op(EGameplayTaskState::Active) \
	op(EGameplayTaskState::Finished) 

enum class EGameplayTaskState : uint8;
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

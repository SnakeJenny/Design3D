// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UGameplayTaskResource;
class UGameplayTask_ClaimResource;
#ifdef GAMEPLAYTASKS_GameplayTask_ClaimResource_generated_h
#error "GameplayTask_ClaimResource.generated.h already included, missing '#pragma once' in GameplayTask_ClaimResource.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_ClaimResource_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClaimResources) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_InTaskOwner); \
		P_GET_TARRAY(TSubclassOf<UGameplayTaskResource> ,Z_Param_ResourceClasses); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameplayTask_ClaimResource**)Z_Param__Result=UGameplayTask_ClaimResource::ClaimResources(Z_Param_InTaskOwner,Z_Param_ResourceClasses,Z_Param_Priority,Z_Param_TaskInstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClaimResource) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_InTaskOwner); \
		P_GET_OBJECT(UClass,Z_Param_ResourceClass); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameplayTask_ClaimResource**)Z_Param__Result=UGameplayTask_ClaimResource::ClaimResource(Z_Param_InTaskOwner,Z_Param_ResourceClass,Z_Param_Priority,Z_Param_TaskInstanceName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClaimResources) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_InTaskOwner); \
		P_GET_TARRAY(TSubclassOf<UGameplayTaskResource> ,Z_Param_ResourceClasses); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameplayTask_ClaimResource**)Z_Param__Result=UGameplayTask_ClaimResource::ClaimResources(Z_Param_InTaskOwner,Z_Param_ResourceClasses,Z_Param_Priority,Z_Param_TaskInstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClaimResource) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_InTaskOwner); \
		P_GET_OBJECT(UClass,Z_Param_ResourceClass); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameplayTask_ClaimResource**)Z_Param__Result=UGameplayTask_ClaimResource::ClaimResource(Z_Param_InTaskOwner,Z_Param_ResourceClass,Z_Param_Priority,Z_Param_TaskInstanceName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_ClaimResource(); \
	friend struct Z_Construct_UClass_UGameplayTask_ClaimResource_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_ClaimResource, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_ClaimResource)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask_ClaimResource(); \
	friend struct Z_Construct_UClass_UGameplayTask_ClaimResource_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_ClaimResource, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_ClaimResource)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTask_ClaimResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_ClaimResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_ClaimResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_ClaimResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_ClaimResource(UGameplayTask_ClaimResource&&); \
	NO_API UGameplayTask_ClaimResource(const UGameplayTask_ClaimResource&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_ClaimResource(UGameplayTask_ClaimResource&&); \
	NO_API UGameplayTask_ClaimResource(const UGameplayTask_ClaimResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_ClaimResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_ClaimResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_ClaimResource)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_14_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTask_ClaimResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

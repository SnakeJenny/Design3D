// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBTNode;
class AActor;
struct FBlackboardKeySelector;
struct FRotator;
struct FVector;
class UObject;
class UBehaviorTreeComponent;
class UBlackboardComponent;
#ifdef AIMODULE_BTFunctionLibrary_generated_h
#error "BTFunctionLibrary.generated.h already included, missing '#pragma once' in BTFunctionLibrary.h"
#endif
#define AIMODULE_BTFunctionLibrary_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopUsingExternalEvent) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::StopUsingExternalEvent(Z_Param_NodeOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartUsingExternalEvent) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::StartUsingExternalEvent(Z_Param_NodeOwner,Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBlackboardValue) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::ClearBlackboardValue(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsRotator) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsRotator(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBlackboardValueAsVector) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::ClearBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsName) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsName(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsString) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsString(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsBool(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsFloat) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsFloat(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsInt(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsEnum) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsEnum(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsClass) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_OBJECT(UClass,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsClass(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsObject(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsRotator) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsRotator(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsVector) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsName) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsName(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsString) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsString(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsBool) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsBool(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsFloat) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsFloat(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsInt) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsInt(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsEnum) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsEnum(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsClass) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsClass(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsActor) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsActor(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsObject) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsObject(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerComponent) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBehaviorTreeComponent**)Z_Param__Result=UBTFunctionLibrary::GetOwnerComponent(Z_Param_NodeOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnersBlackboard) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlackboardComponent**)Z_Param__Result=UBTFunctionLibrary::GetOwnersBlackboard(Z_Param_NodeOwner); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopUsingExternalEvent) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::StopUsingExternalEvent(Z_Param_NodeOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartUsingExternalEvent) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_OBJECT(AActor,Z_Param_OwningActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::StartUsingExternalEvent(Z_Param_NodeOwner,Z_Param_OwningActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBlackboardValue) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::ClearBlackboardValue(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsRotator) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsRotator(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBlackboardValueAsVector) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::ClearBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsName) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsName(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsString) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsString(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsBool(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsFloat) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsFloat(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsInt(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsEnum) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsEnum(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsClass) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_OBJECT(UClass,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsClass(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBTFunctionLibrary::SetBlackboardValueAsObject(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsRotator) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsRotator(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsVector) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsName) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsName(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsString) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsString(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsBool) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsBool(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsFloat) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsFloat(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsInt) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsInt(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsEnum) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsEnum(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsClass) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsClass(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsActor) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsActor(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsObject) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsObject(Z_Param_NodeOwner,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerComponent) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBehaviorTreeComponent**)Z_Param__Result=UBTFunctionLibrary::GetOwnerComponent(Z_Param_NodeOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnersBlackboard) \
	{ \
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlackboardComponent**)Z_Param__Result=UBTFunctionLibrary::GetOwnersBlackboard(Z_Param_NodeOwner); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBTFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBTFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTFunctionLibrary)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUBTFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBTFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBTFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTFunctionLibrary)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTFunctionLibrary(UBTFunctionLibrary&&); \
	NO_API UBTFunctionLibrary(const UBTFunctionLibrary&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTFunctionLibrary(UBTFunctionLibrary&&); \
	NO_API UBTFunctionLibrary(const UBTFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTFunctionLibrary)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

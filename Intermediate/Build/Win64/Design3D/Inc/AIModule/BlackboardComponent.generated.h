// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
class UObject;
#ifdef AIMODULE_BlackboardComponent_generated_h
#error "BlackboardComponent.generated.h already included, missing '#pragma once' in BlackboardComponent.h"
#endif
#define AIMODULE_BlackboardComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearValue) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearValue(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationFromEntry) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ResultRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRotationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationFromEntry) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLocationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVectorValueSet) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVectorValueSet(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsRotator) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT(FRotator,Z_Param_VectorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsRotator(Z_Param_Out_KeyName,Z_Param_VectorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsVector) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT(FVector,Z_Param_VectorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsVector(Z_Param_Out_KeyName,Z_Param_VectorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsName(Z_Param_Out_KeyName,Z_Param_NameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsString) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsString(Z_Param_Out_KeyName,Z_Param_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsBool) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_UBOOL(Z_Param_BoolValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsBool(Z_Param_Out_KeyName,Z_Param_BoolValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsFloat) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FloatValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsFloat(Z_Param_Out_KeyName,Z_Param_FloatValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsInt) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IntValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsInt(Z_Param_Out_KeyName,Z_Param_IntValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsEnum) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsEnum(Z_Param_Out_KeyName,Z_Param_EnumValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsClass) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_OBJECT(UClass,Z_Param_ClassValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsClass(Z_Param_Out_KeyName,Z_Param_ClassValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsObject) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_OBJECT(UObject,Z_Param_ObjectValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsObject(Z_Param_Out_KeyName,Z_Param_ObjectValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsRotator) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetValueAsRotator(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsVector) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetValueAsVector(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetValueAsName(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsString) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetValueAsString(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsBool) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetValueAsBool(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsFloat) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValueAsFloat(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsInt) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetValueAsInt(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsEnum) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetValueAsEnum(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsClass) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetValueAsClass(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsObject) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->GetValueAsObject(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearValue) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearValue(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationFromEntry) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ResultRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRotationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationFromEntry) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLocationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVectorValueSet) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVectorValueSet(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsRotator) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT(FRotator,Z_Param_VectorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsRotator(Z_Param_Out_KeyName,Z_Param_VectorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsVector) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_STRUCT(FVector,Z_Param_VectorValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsVector(Z_Param_Out_KeyName,Z_Param_VectorValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsName(Z_Param_Out_KeyName,Z_Param_NameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsString) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsString(Z_Param_Out_KeyName,Z_Param_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsBool) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_UBOOL(Z_Param_BoolValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsBool(Z_Param_Out_KeyName,Z_Param_BoolValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsFloat) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FloatValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsFloat(Z_Param_Out_KeyName,Z_Param_FloatValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsInt) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IntValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsInt(Z_Param_Out_KeyName,Z_Param_IntValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsEnum) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EnumValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsEnum(Z_Param_Out_KeyName,Z_Param_EnumValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsClass) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_OBJECT(UClass,Z_Param_ClassValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsClass(Z_Param_Out_KeyName,Z_Param_ClassValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValueAsObject) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_GET_OBJECT(UObject,Z_Param_ObjectValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAsObject(Z_Param_Out_KeyName,Z_Param_ObjectValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsRotator) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetValueAsRotator(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsVector) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetValueAsVector(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetValueAsName(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsString) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetValueAsString(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsBool) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetValueAsBool(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsFloat) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValueAsFloat(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsInt) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetValueAsInt(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsEnum) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetValueAsEnum(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsClass) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetValueAsClass(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValueAsObject) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_KeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->GetValueAsObject(Z_Param_Out_KeyName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardComponent(); \
	friend struct Z_Construct_UClass_UBlackboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBlackboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardComponent(); \
	friend struct Z_Construct_UClass_UBlackboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBlackboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardComponent(UBlackboardComponent&&); \
	NO_API UBlackboardComponent(const UBlackboardComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardComponent(UBlackboardComponent&&); \
	NO_API UBlackboardComponent(const UBlackboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardComponent)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BrainComp() { return STRUCT_OFFSET(UBlackboardComponent, BrainComp); } \
	FORCEINLINE static uint32 __PPO__BlackboardAsset() { return STRUCT_OFFSET(UBlackboardComponent, BlackboardAsset); } \
	FORCEINLINE static uint32 __PPO__KeyInstances() { return STRUCT_OFFSET(UBlackboardComponent, KeyInstances); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_40_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

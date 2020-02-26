// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class AActor;
class UObject;
#ifdef ENGINE_ActorComponent_generated_h
#error "ActorComponent.generated.h already included, missing '#pragma once' in ActorComponent.h"
#endif
#define ENGINE_ActorComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_72_DELEGATE \
struct _Script_Engine_eventActorComponentDeactivateSignature_Parms \
{ \
	UActorComponent* Component; \
}; \
static inline void FActorComponentDeactivateSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentDeactivateSignature, UActorComponent* Component) \
{ \
	_Script_Engine_eventActorComponentDeactivateSignature_Parms Parms; \
	Parms.Component=Component; \
	ActorComponentDeactivateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_71_DELEGATE \
struct _Script_Engine_eventActorComponentActivatedSignature_Parms \
{ \
	UActorComponent* Component; \
	bool bReset; \
}; \
static inline void FActorComponentActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentActivatedSignature, UActorComponent* Component, bool bReset) \
{ \
	_Script_Engine_eventActorComponentActivatedSignature_Parms Parms; \
	Parms.Component=Component; \
	Parms.bReset=bReset ? true : false; \
	ActorComponentActivatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickGroup) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTickGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DestroyComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DestroyComponent(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentTickInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetComponentTickInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentTickInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TickInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComponentTickInterval(Z_Param_TickInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsComponentTickEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsComponentTickEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentTickEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComponentTickEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsReplicated) \
	{ \
		P_GET_UBOOL(Z_Param_ShouldReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsReplicated(Z_Param_ShouldReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickableWhenPaused) \
	{ \
		P_GET_UBOOL(Z_Param_bTickableWhenPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoActivate) \
	{ \
		P_GET_UBOOL(Z_Param_bNewAutoActivate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoActivate(Z_Param_bNewAutoActivate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_bNewActive); \
		P_GET_UBOOL(Z_Param_bReset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_bNewActive,Z_Param_bReset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Deactivate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_GET_UBOOL(Z_Param_bReset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(Z_Param_bReset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentHasTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ComponentHasTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeingDestroyed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeingDestroyed(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickGroup) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTickGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DestroyComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DestroyComponent(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentTickInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetComponentTickInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentTickInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TickInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComponentTickInterval(Z_Param_TickInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsComponentTickEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsComponentTickEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentTickEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComponentTickEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsReplicated) \
	{ \
		P_GET_UBOOL(Z_Param_ShouldReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsReplicated(Z_Param_ShouldReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickableWhenPaused) \
	{ \
		P_GET_UBOOL(Z_Param_bTickableWhenPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoActivate) \
	{ \
		P_GET_UBOOL(Z_Param_bNewAutoActivate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoActivate(Z_Param_bNewAutoActivate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_bNewActive); \
		P_GET_UBOOL(Z_Param_bReset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_bNewActive,Z_Param_bReset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Deactivate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_GET_UBOOL(Z_Param_bReset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(Z_Param_bReset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentHasTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ComponentHasTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeingDestroyed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeingDestroyed(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_EVENT_PARMS \
	struct ActorComponent_eventReceiveEndPlay_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason; \
	}; \
	struct ActorComponent_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponent(); \
	friend struct Z_Construct_UClass_UActorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUActorComponent(); \
	friend struct Z_Construct_UClass_UActorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponent(UActorComponent&&); \
	NO_API UActorComponent(const UActorComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponent(UActorComponent&&); \
	NO_API UActorComponent(const UActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UActorComponent, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__UCSModifiedProperties() { return STRUCT_OFFSET(UActorComponent, UCSModifiedProperties); }


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_85_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

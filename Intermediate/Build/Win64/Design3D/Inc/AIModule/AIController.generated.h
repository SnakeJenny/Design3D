// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
class UPathFollowingComponent;
class UAIPerceptionComponent;
struct FGameplayResourceSet;
class AActor;
struct FVector;
class UGameplayTaskResource;
class UBlackboardData;
class UBlackboardComponent;
class UBehaviorTree;
class UNavigationQueryFilter;
#ifdef AIMODULE_AIController_generated_h
#error "AIController.generated.h already included, missing '#pragma once' in AIController.h"
#endif
#define AIMODULE_AIController_generated_h

#define Engine_Source_Runtime_AIModule_Classes_AIController_h_40_DELEGATE \
struct _Script_AIModule_eventAIMoveCompletedSignature_Parms \
{ \
	FAIRequestID RequestID; \
	TEnumAsByte<EPathFollowingResult::Type> Result; \
}; \
static inline void FAIMoveCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& AIMoveCompletedSignature, FAIRequestID RequestID, EPathFollowingResult::Type Result) \
{ \
	_Script_AIModule_eventAIMoveCompletedSignature_Parms Parms; \
	Parms.RequestID=RequestID; \
	Parms.Result=Result; \
	AIMoveCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPathFollowingComponent) \
	{ \
		P_GET_OBJECT(UPathFollowingComponent,Z_Param_NewPFComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathFollowingComponent(Z_Param_NewPFComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAIPerceptionComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAIPerceptionComponent**)Z_Param__Result=P_THIS->GetAIPerceptionComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathFollowingComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPathFollowingComponent**)Z_Param__Result=P_THIS->GetPathFollowingComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGameplayTaskResourcesClaimed) \
	{ \
		P_GET_STRUCT(FGameplayResourceSet,Z_Param_NewlyClaimed); \
		P_GET_STRUCT(FGameplayResourceSet,Z_Param_FreshlyReleased); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGameplayTaskResourcesClaimed(Z_Param_NewlyClaimed,Z_Param_FreshlyReleased); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_ClearFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocusActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetFocusActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetFocus) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetFocus(Z_Param_NewFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetFocalPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_FP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetFocalPoint(Z_Param_FP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocalPointOnActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFocalPointOnActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocalPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFocalPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnclaimTaskResource) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ResourceClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnclaimTaskResource(Z_Param_ResourceClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClaimTaskResource) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ResourceClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClaimTaskResource(Z_Param_ResourceClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseBlackboard) \
	{ \
		P_GET_OBJECT(UBlackboardData,Z_Param_BlackboardAsset); \
		P_GET_OBJECT_REF(UBlackboardComponent,Z_Param_Out_BlackboardComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UseBlackboard(Z_Param_BlackboardAsset,Z_Param_Out_BlackboardComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunBehaviorTree) \
	{ \
		P_GET_OBJECT(UBehaviorTree,Z_Param_BTAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RunBehaviorTree(Z_Param_BTAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoveBlockDetection) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMoveBlockDetection(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImmediateMoveDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetImmediateMoveDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPartialPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPartialPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=P_THIS->GetMoveStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToLocation(Z_Param_Out_Dest,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToActor(Z_Param_Goal,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPathFollowingComponent) \
	{ \
		P_GET_OBJECT(UPathFollowingComponent,Z_Param_NewPFComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathFollowingComponent(Z_Param_NewPFComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAIPerceptionComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAIPerceptionComponent**)Z_Param__Result=P_THIS->GetAIPerceptionComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathFollowingComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPathFollowingComponent**)Z_Param__Result=P_THIS->GetPathFollowingComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGameplayTaskResourcesClaimed) \
	{ \
		P_GET_STRUCT(FGameplayResourceSet,Z_Param_NewlyClaimed); \
		P_GET_STRUCT(FGameplayResourceSet,Z_Param_FreshlyReleased); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGameplayTaskResourcesClaimed(Z_Param_NewlyClaimed,Z_Param_FreshlyReleased); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_ClearFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocusActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetFocusActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetFocus) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetFocus(Z_Param_NewFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetFocalPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_FP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetFocalPoint(Z_Param_FP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocalPointOnActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFocalPointOnActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocalPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFocalPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnclaimTaskResource) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ResourceClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnclaimTaskResource(Z_Param_ResourceClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClaimTaskResource) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ResourceClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClaimTaskResource(Z_Param_ResourceClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseBlackboard) \
	{ \
		P_GET_OBJECT(UBlackboardData,Z_Param_BlackboardAsset); \
		P_GET_OBJECT_REF(UBlackboardComponent,Z_Param_Out_BlackboardComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UseBlackboard(Z_Param_BlackboardAsset,Z_Param_Out_BlackboardComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunBehaviorTree) \
	{ \
		P_GET_OBJECT(UBehaviorTree,Z_Param_BTAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RunBehaviorTree(Z_Param_BTAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoveBlockDetection) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMoveBlockDetection(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImmediateMoveDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetImmediateMoveDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPartialPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPartialPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=P_THIS->GetMoveStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToLocation(Z_Param_Out_Dest,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToActor(Z_Param_Goal,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_EVENT_PARMS \
	struct AIController_eventOnUsingBlackBoard_Parms \
	{ \
		UBlackboardComponent* BlackboardComp; \
		UBlackboardData* BlackboardAsset; \
	};


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIController(); \
	friend struct Z_Construct_UClass_AAIController_Statics; \
public: \
	DECLARE_CLASS(AAIController, AController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AAIController*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS \
private: \
	static void StaticRegisterNativesAAIController(); \
	friend struct Z_Construct_UClass_AAIController_Statics; \
public: \
	DECLARE_CLASS(AAIController, AController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AAIController*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIController(AAIController&&); \
	NO_API AAIController(const AAIController&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIController(AAIController&&); \
	NO_API AAIController(const AAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController)


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PathFollowingComponent() { return STRUCT_OFFSET(AAIController, PathFollowingComponent); } \
	FORCEINLINE static uint32 __PPO__ActionsComp() { return STRUCT_OFFSET(AAIController, ActionsComp); } \
	FORCEINLINE static uint32 __PPO__Blackboard() { return STRUCT_OFFSET(AAIController, Blackboard); } \
	FORCEINLINE static uint32 __PPO__CachedGameplayTasksComponent() { return STRUCT_OFFSET(AAIController, CachedGameplayTasksComponent); } \
	FORCEINLINE static uint32 __PPO__DefaultNavigationFilterClass() { return STRUCT_OFFSET(AAIController, DefaultNavigationFilterClass); }


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_84_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AIController_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AIController_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class AAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

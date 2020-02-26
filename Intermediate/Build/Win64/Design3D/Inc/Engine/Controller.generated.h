// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
class AActor;
class APawn;
struct FRotator;
struct FVector;
class APlayerController;
#ifdef ENGINE_Controller_generated_h
#error "Controller.generated.h already included, missing '#pragma once' in Controller.h"
#endif
#define ENGINE_Controller_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_19_DELEGATE \
struct _Script_Engine_eventInstigatedAnyDamageSignature_Parms \
{ \
	float Damage; \
	const UDamageType* DamageType; \
	AActor* DamagedActor; \
	AActor* DamageCauser; \
}; \
static inline void FInstigatedAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstigatedAnyDamageSignature, float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) \
{ \
	_Script_Engine_eventInstigatedAnyDamageSignature_Parms Parms; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.DamagedActor=DamagedActor; \
	Parms.DamageCauser=DamageCauser; \
	InstigatedAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetIgnoreInputFlags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLookInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLookInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreLookInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetIgnoreLookInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreLookInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLookInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreLookInput(Z_Param_bNewLookInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMoveInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreMoveInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetIgnoreMoveInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreMoveInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewMoveInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreMoveInput(Z_Param_bNewMoveInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnPossess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnPossess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Possess(Z_Param_InPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocalController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocalPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->K2_GetPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bResetCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastToPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->CastToPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlayerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Pawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineOfSightTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_ViewPoint); \
		P_GET_UBOOL(Z_Param_bAlternateChecks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControlRotation(Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetIgnoreInputFlags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLookInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLookInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreLookInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetIgnoreLookInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreLookInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLookInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreLookInput(Z_Param_bNewLookInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMoveInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreMoveInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetIgnoreMoveInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreMoveInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewMoveInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreMoveInput(Z_Param_bNewMoveInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnPossess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnPossess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Possess(Z_Param_InPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocalController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocalPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=P_THIS->K2_GetPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bResetCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastToPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->CastToPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlayerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Pawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineOfSightTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_ViewPoint); \
		P_GET_UBOOL(Z_Param_bAlternateChecks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControlRotation(Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_EVENT_PARMS \
	struct Controller_eventClientSetLocation_Parms \
	{ \
		FVector NewLocation; \
		FRotator NewRotation; \
	}; \
	struct Controller_eventClientSetRotation_Parms \
	{ \
		FRotator NewRotation; \
		bool bResetCamera; \
	}; \
	struct Controller_eventReceiveInstigatedAnyDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		AActor* DamagedActor; \
		AActor* DamageCauser; \
	}; \
	struct Controller_eventReceivePossess_Parms \
	{ \
		APawn* PossessedPawn; \
	}; \
	struct Controller_eventReceiveUnPossess_Parms \
	{ \
		APawn* UnpossessedPawn; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAController(); \
	friend struct Z_Construct_UClass_AController_Statics; \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAController(); \
	friend struct Z_Construct_UClass_AController_Statics; \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(AController, Pawn); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(AController, Character); } \
	FORCEINLINE static uint32 __PPO__TransformComponent() { return STRUCT_OFFSET(AController, TransformComponent); } \
	FORCEINLINE static uint32 __PPO__ControlRotation() { return STRUCT_OFFSET(AController, ControlRotation); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_39_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AController;
class APawn;
class AActor;
class UPawnMovementComponent;
#ifdef ENGINE_Pawn_generated_h
#error "Pawn.generated.h already included, missing '#pragma once' in Pawn.h"
#endif
#define ENGINE_Pawn_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->K2_GetMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchPawn) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bXYOverride); \
		P_GET_UBOOL(Z_Param_bZOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchPawn(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride); \
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
	DECLARE_FUNCTION(execAddControllerRollInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddControllerRollInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddControllerYawInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddControllerYawInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddControllerPitchInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddControllerPitchInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConsumeMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPendingMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMovementInput) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDefaultController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDefaultController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachFromControllerPendingDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetachFromControllerPendingDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseAimRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBaseAimRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBotControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBotControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavAgentLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetNavAgentLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanAffectNavigationGeneration) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_GET_UBOOL(Z_Param_bForceUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanAffectNavigationGeneration(Z_Param_bNewValue,Z_Param_bForceUpdate); \
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
	DECLARE_FUNCTION(execOnRep_Controller) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Controller(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBaseActor) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=APawn::GetMovementBaseActor(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPawnMakeNoise) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation); \
		P_GET_UBOOL(Z_Param_bUseNoiseMakerLocation); \
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PawnMakeNoise(Z_Param_Loudness,Z_Param_NoiseLocation,Z_Param_bUseNoiseMakerLocation,Z_Param_NoiseMaker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPawnMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->K2_GetMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchPawn) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bXYOverride); \
		P_GET_UBOOL(Z_Param_bZOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchPawn(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride); \
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
	DECLARE_FUNCTION(execAddControllerRollInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddControllerRollInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddControllerYawInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddControllerYawInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddControllerPitchInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddControllerPitchInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConsumeMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingMovementInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPendingMovementInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMovementInput) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDefaultController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDefaultController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachFromControllerPendingDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetachFromControllerPendingDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseAimRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBaseAimRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBotControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBotControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNavAgentLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetNavAgentLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanAffectNavigationGeneration) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_GET_UBOOL(Z_Param_bForceUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanAffectNavigationGeneration(Z_Param_bNewValue,Z_Param_bForceUpdate); \
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
	DECLARE_FUNCTION(execOnRep_Controller) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Controller(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBaseActor) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=APawn::GetMovementBaseActor(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPawnMakeNoise) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation); \
		P_GET_UBOOL(Z_Param_bUseNoiseMakerLocation); \
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PawnMakeNoise(Z_Param_Loudness,Z_Param_NoiseLocation,Z_Param_bUseNoiseMakerLocation,Z_Param_NoiseMaker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPawnMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_EVENT_PARMS \
	struct Pawn_eventReceivePossessed_Parms \
	{ \
		AController* NewController; \
	}; \
	struct Pawn_eventReceiveUnpossessed_Parms \
	{ \
		AController* OldController; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawn(); \
	friend struct Z_Construct_UClass_APawn_Statics; \
public: \
	DECLARE_CLASS(APawn, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_APawn, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<APawn*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_INCLASS \
private: \
	static void StaticRegisterNativesAPawn(); \
	friend struct Z_Construct_UClass_APawn_Statics; \
public: \
	DECLARE_CLASS(APawn, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_APawn, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<APawn*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawn(APawn&&); \
	NO_API APawn(const APawn&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawn(APawn&&); \
	NO_API APawn(const APawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerState() { return STRUCT_OFFSET(APawn, PlayerState); } \
	FORCEINLINE static uint32 __PPO__ControlInputVector() { return STRUCT_OFFSET(APawn, ControlInputVector); } \
	FORCEINLINE static uint32 __PPO__LastControlInputVector() { return STRUCT_OFFSET(APawn, LastControlInputVector); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_36_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

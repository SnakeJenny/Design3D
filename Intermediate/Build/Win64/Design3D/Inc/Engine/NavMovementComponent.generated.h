// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavMovementComponent_generated_h
#error "NavMovementComponent.generated.h already included, missing '#pragma once' in NavMovementComponent.h"
#endif
#define ENGINE_NavMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsFlying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFlying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSwimming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSwimming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingOnGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingOnGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFalling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFalling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCrouching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCrouching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovementKeepPathing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovementKeepPathing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopActiveMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopActiveMovement(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsFlying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFlying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSwimming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSwimming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingOnGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingOnGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFalling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFalling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCrouching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCrouching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovementKeepPathing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovementKeepPathing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopActiveMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopActiveMovement(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend struct Z_Construct_UClass_UNavMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend struct Z_Construct_UClass_UNavMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavMovementComponent(UNavMovementComponent&&); \
	NO_API UNavMovementComponent(const UNavMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavMovementComponent(UNavMovementComponent&&); \
	NO_API UNavMovementComponent(const UNavMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FixedPathBrakingDistance() { return STRUCT_OFFSET(UNavMovementComponent, FixedPathBrakingDistance); } \
	FORCEINLINE static uint32 __PPO__PathFollowingComp() { return STRUCT_OFFSET(UNavMovementComponent, PathFollowingComp); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

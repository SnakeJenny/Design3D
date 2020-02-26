// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DefaultPawn_generated_h
#error "DefaultPawn.generated.h already included, missing '#pragma once' in DefaultPawn.h"
#endif
#define ENGINE_DefaultPawn_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLookUpAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUpAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUp_World) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveUp_World(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Val); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLookUpAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUpAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUp_World) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveUp_World(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Val); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultPawn(); \
	friend struct Z_Construct_UClass_ADefaultPawn_Statics; \
public: \
	DECLARE_CLASS(ADefaultPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADefaultPawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_INCLASS \
private: \
	static void StaticRegisterNativesADefaultPawn(); \
	friend struct Z_Construct_UClass_ADefaultPawn_Statics; \
public: \
	DECLARE_CLASS(ADefaultPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADefaultPawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultPawn(ADefaultPawn&&); \
	NO_API ADefaultPawn(const ADefaultPawn&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultPawn(ADefaultPawn&&); \
	NO_API ADefaultPawn(const ADefaultPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultPawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ADefaultPawn, MovementComponent); } \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ADefaultPawn, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ADefaultPawn, MeshComponent); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DefaultPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADefaultPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

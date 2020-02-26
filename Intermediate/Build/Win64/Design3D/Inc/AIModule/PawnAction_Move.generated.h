// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_PawnAction_Move_generated_h
#error "PawnAction_Move.generated.h already included, missing '#pragma once' in PawnAction_Move.h"
#endif
#define AIMODULE_PawnAction_Move_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnAction_Move(); \
	friend struct Z_Construct_UClass_UPawnAction_Move_Statics; \
public: \
	DECLARE_CLASS(UPawnAction_Move, UPawnAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction_Move)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPawnAction_Move(); \
	friend struct Z_Construct_UClass_UPawnAction_Move_Statics; \
public: \
	DECLARE_CLASS(UPawnAction_Move, UPawnAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction_Move)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_Move(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_Move) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_Move); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_Move); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction_Move(UPawnAction_Move&&); \
	NO_API UPawnAction_Move(const UPawnAction_Move&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_Move(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction_Move(UPawnAction_Move&&); \
	NO_API UPawnAction_Move(const UPawnAction_Move&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_Move); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_Move); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_Move)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GoalActor() { return STRUCT_OFFSET(UPawnAction_Move, GoalActor); } \
	FORCEINLINE static uint32 __PPO__GoalLocation() { return STRUCT_OFFSET(UPawnAction_Move, GoalLocation); } \
	FORCEINLINE static uint32 __PPO__AcceptableRadius() { return STRUCT_OFFSET(UPawnAction_Move, AcceptableRadius); } \
	FORCEINLINE static uint32 __PPO__FilterClass() { return STRUCT_OFFSET(UPawnAction_Move, FilterClass); }


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_26_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnAction_Move."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnAction_Move>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h


#define FOREACH_ENUM_EPAWNACTIONMOVEMODE(op) \
	op(EPawnActionMoveMode::UsePathfinding) \
	op(EPawnActionMoveMode::StraightLine) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

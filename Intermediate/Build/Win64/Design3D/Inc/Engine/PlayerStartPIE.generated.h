// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlayerStartPIE_generated_h
#error "PlayerStartPIE.generated.h already included, missing '#pragma once' in PlayerStartPIE.h"
#endif
#define ENGINE_PlayerStartPIE_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerStartPIE(); \
	friend struct Z_Construct_UClass_APlayerStartPIE_Statics; \
public: \
	DECLARE_CLASS(APlayerStartPIE, APlayerStart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlayerStartPIE)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerStartPIE(); \
	friend struct Z_Construct_UClass_APlayerStartPIE_Statics; \
public: \
	DECLARE_CLASS(APlayerStartPIE, APlayerStart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlayerStartPIE)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlayerStartPIE(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStartPIE) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerStartPIE); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStartPIE); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APlayerStartPIE(APlayerStartPIE&&); \
	ENGINE_API APlayerStartPIE(const APlayerStartPIE&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlayerStartPIE(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APlayerStartPIE(APlayerStartPIE&&); \
	ENGINE_API APlayerStartPIE(const APlayerStartPIE&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerStartPIE); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStartPIE); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStartPIE)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerStartPIE."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerStartPIE>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

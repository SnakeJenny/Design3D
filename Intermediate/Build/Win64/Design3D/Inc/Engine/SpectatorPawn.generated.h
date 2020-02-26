// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpectatorPawn_generated_h
#error "SpectatorPawn.generated.h already included, missing '#pragma once' in SpectatorPawn.h"
#endif
#define ENGINE_SpectatorPawn_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpectatorPawn(); \
	friend struct Z_Construct_UClass_ASpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASpectatorPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ASpectatorPawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASpectatorPawn(); \
	friend struct Z_Construct_UClass_ASpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASpectatorPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ASpectatorPawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpectatorPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpectatorPawn(ASpectatorPawn&&); \
	NO_API ASpectatorPawn(const ASpectatorPawn&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpectatorPawn(ASpectatorPawn&&); \
	NO_API ASpectatorPawn(const ASpectatorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpectatorPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorPawn)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpectatorPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASpectatorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

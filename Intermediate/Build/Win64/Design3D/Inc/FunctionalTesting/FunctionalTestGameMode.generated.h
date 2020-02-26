// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_FunctionalTestGameMode_generated_h
#error "FunctionalTestGameMode.generated.h already included, missing '#pragma once' in FunctionalTestGameMode.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestGameMode_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_RPC_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalTestGameMode(); \
	friend struct Z_Construct_UClass_AFunctionalTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTestGameMode)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalTestGameMode(); \
	friend struct Z_Construct_UClass_AFunctionalTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTestGameMode)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalTestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalTestGameMode(AFunctionalTestGameMode&&); \
	NO_API AFunctionalTestGameMode(const AFunctionalTestGameMode&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalTestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalTestGameMode(AFunctionalTestGameMode&&); \
	NO_API AFunctionalTestGameMode(const AFunctionalTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTestGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTestGameMode)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_10_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FunctionalTestGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FUNCTIONALTESTING_FunctionalTestingManager_generated_h
#error "FunctionalTestingManager.generated.h already included, missing '#pragma once' in FunctionalTestingManager.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestingManager_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunAllFunctionalTests) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bNewLog); \
		P_GET_UBOOL(Z_Param_bRunLooped); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FailedTestsReproString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFunctionalTestingManager::RunAllFunctionalTests(Z_Param_WorldContextObject,Z_Param_bNewLog,Z_Param_bRunLooped,Z_Param_FailedTestsReproString); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunAllFunctionalTests) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bNewLog); \
		P_GET_UBOOL(Z_Param_bRunLooped); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FailedTestsReproString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFunctionalTestingManager::RunAllFunctionalTests(Z_Param_WorldContextObject,Z_Param_bNewLog,Z_Param_bRunLooped,Z_Param_FailedTestsReproString); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionalTestingManager(); \
	friend struct Z_Construct_UClass_UFunctionalTestingManager_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestingManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(UFunctionalTestingManager)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionalTestingManager(); \
	friend struct Z_Construct_UClass_UFunctionalTestingManager_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestingManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(UFunctionalTestingManager)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UFunctionalTestingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UFunctionalTestingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API UFunctionalTestingManager(UFunctionalTestingManager&&); \
	FUNCTIONALTESTING_API UFunctionalTestingManager(const UFunctionalTestingManager&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UFunctionalTestingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API UFunctionalTestingManager(UFunctionalTestingManager&&); \
	FUNCTIONALTESTING_API UFunctionalTestingManager(const UFunctionalTestingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UFunctionalTestingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestingManager)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_21_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FunctionalTestingManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UFunctionalTestingManager>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_RPC_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_EVENT_PARMS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_CALLBACK_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhasedAutomationActorBase(); \
	friend struct Z_Construct_UClass_APhasedAutomationActorBase_Statics; \
public: \
	DECLARE_CLASS(APhasedAutomationActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(APhasedAutomationActorBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_INCLASS \
private: \
	static void StaticRegisterNativesAPhasedAutomationActorBase(); \
	friend struct Z_Construct_UClass_APhasedAutomationActorBase_Statics; \
public: \
	DECLARE_CLASS(APhasedAutomationActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(APhasedAutomationActorBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhasedAutomationActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, APhasedAutomationActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasedAutomationActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(APhasedAutomationActorBase&&); \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(const APhasedAutomationActorBase&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(APhasedAutomationActorBase&&); \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(const APhasedAutomationActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, APhasedAutomationActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasedAutomationActorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhasedAutomationActorBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_95_PROLOG \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_EVENT_PARMS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_CALLBACK_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_CALLBACK_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class APhasedAutomationActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

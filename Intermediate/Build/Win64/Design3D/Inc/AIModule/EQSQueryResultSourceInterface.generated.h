// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EQSQueryResultSourceInterface_generated_h
#error "EQSQueryResultSourceInterface.generated.h already included, missing '#pragma once' in EQSQueryResultSourceInterface.h"
#endif
#define AIMODULE_EQSQueryResultSourceInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEQSQueryResultSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEQSQueryResultSourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEQSQueryResultSourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEQSQueryResultSourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UEQSQueryResultSourceInterface(UEQSQueryResultSourceInterface&&); \
	AIMODULE_API UEQSQueryResultSourceInterface(const UEQSQueryResultSourceInterface&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEQSQueryResultSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UEQSQueryResultSourceInterface(UEQSQueryResultSourceInterface&&); \
	AIMODULE_API UEQSQueryResultSourceInterface(const UEQSQueryResultSourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEQSQueryResultSourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEQSQueryResultSourceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEQSQueryResultSourceInterface)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEQSQueryResultSourceInterface(); \
	friend struct Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics; \
public: \
	DECLARE_CLASS(UEQSQueryResultSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEQSQueryResultSourceInterface)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEQSQueryResultSourceInterface() {} \
public: \
	typedef UEQSQueryResultSourceInterface UClassType; \
	typedef IEQSQueryResultSourceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEQSQueryResultSourceInterface() {} \
public: \
	typedef UEQSQueryResultSourceInterface UClassType; \
	typedef IEQSQueryResultSourceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_10_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEQSQueryResultSourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

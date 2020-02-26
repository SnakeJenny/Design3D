// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ControlRigInterface_generated_h
#error "ControlRigInterface.generated.h already included, missing '#pragma once' in ControlRigInterface.h"
#endif
#define ENGINE_ControlRigInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigInterface(UControlRigInterface&&); \
	NO_API UControlRigInterface(const UControlRigInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigInterface(UControlRigInterface&&); \
	NO_API UControlRigInterface(const UControlRigInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUControlRigInterface(); \
	friend struct Z_Construct_UClass_UControlRigInterface_Statics; \
public: \
	DECLARE_CLASS(UControlRigInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UControlRigInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IControlRigInterface() {} \
public: \
	typedef UControlRigInterface UClassType; \
	typedef IControlRigInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IControlRigInterface() {} \
public: \
	typedef UControlRigInterface UClassType; \
	typedef IControlRigInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UControlRigInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_ControlRigInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

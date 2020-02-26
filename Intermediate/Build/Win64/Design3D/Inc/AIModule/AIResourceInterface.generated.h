// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIResourceInterface_generated_h
#error "AIResourceInterface.generated.h already included, missing '#pragma once' in AIResourceInterface.h"
#endif
#define AIMODULE_AIResourceInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIResourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIResourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIResourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIResourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UAIResourceInterface(UAIResourceInterface&&); \
	AIMODULE_API UAIResourceInterface(const UAIResourceInterface&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIResourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UAIResourceInterface(UAIResourceInterface&&); \
	AIMODULE_API UAIResourceInterface(const UAIResourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIResourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIResourceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIResourceInterface)


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAIResourceInterface(); \
	friend struct Z_Construct_UClass_UAIResourceInterface_Statics; \
public: \
	DECLARE_CLASS(UAIResourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIResourceInterface)


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAIResourceInterface() {} \
public: \
	typedef UAIResourceInterface UClassType; \
	typedef IAIResourceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IAIResourceInterface() {} \
public: \
	typedef UAIResourceInterface UClassType; \
	typedef IAIResourceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_11_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIResourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

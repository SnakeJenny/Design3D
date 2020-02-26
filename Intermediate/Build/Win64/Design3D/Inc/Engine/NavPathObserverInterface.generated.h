// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavPathObserverInterface_generated_h
#error "NavPathObserverInterface.generated.h already included, missing '#pragma once' in NavPathObserverInterface.h"
#endif
#define ENGINE_NavPathObserverInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavPathObserverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavPathObserverInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavPathObserverInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavPathObserverInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavPathObserverInterface(UNavPathObserverInterface&&); \
	ENGINE_API UNavPathObserverInterface(const UNavPathObserverInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavPathObserverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavPathObserverInterface(UNavPathObserverInterface&&); \
	ENGINE_API UNavPathObserverInterface(const UNavPathObserverInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavPathObserverInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavPathObserverInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavPathObserverInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavPathObserverInterface(); \
	friend struct Z_Construct_UClass_UNavPathObserverInterface_Statics; \
public: \
	DECLARE_CLASS(UNavPathObserverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavPathObserverInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavPathObserverInterface() {} \
public: \
	typedef UNavPathObserverInterface UClassType; \
	typedef INavPathObserverInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~INavPathObserverInterface() {} \
public: \
	typedef UNavPathObserverInterface UClassType; \
	typedef INavPathObserverInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavPathObserverInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

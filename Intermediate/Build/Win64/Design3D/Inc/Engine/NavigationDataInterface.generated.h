// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationDataInterface_generated_h
#error "NavigationDataInterface.generated.h already included, missing '#pragma once' in NavigationDataInterface.h"
#endif
#define ENGINE_NavigationDataInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavigationDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationDataInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationDataInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationDataInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavigationDataInterface(UNavigationDataInterface&&); \
	ENGINE_API UNavigationDataInterface(const UNavigationDataInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavigationDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavigationDataInterface(UNavigationDataInterface&&); \
	ENGINE_API UNavigationDataInterface(const UNavigationDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationDataInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationDataInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavigationDataInterface(); \
	friend struct Z_Construct_UClass_UNavigationDataInterface_Statics; \
public: \
	DECLARE_CLASS(UNavigationDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavigationDataInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavigationDataInterface() {} \
public: \
	typedef UNavigationDataInterface UClassType; \
	typedef INavigationDataInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~INavigationDataInterface() {} \
public: \
	typedef UNavigationDataInterface UClassType; \
	typedef INavigationDataInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationPathGenerator_generated_h
#error "NavigationPathGenerator.generated.h already included, missing '#pragma once' in NavigationPathGenerator.h"
#endif
#define NAVIGATIONSYSTEM_NavigationPathGenerator_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationPathGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationPathGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationPathGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(UNavigationPathGenerator&&); \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(const UNavigationPathGenerator&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(UNavigationPathGenerator&&); \
	NAVIGATIONSYSTEM_API UNavigationPathGenerator(const UNavigationPathGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationPathGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationPathGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationPathGenerator)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavigationPathGenerator(); \
	friend struct Z_Construct_UClass_UNavigationPathGenerator_Statics; \
public: \
	DECLARE_CLASS(UNavigationPathGenerator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationPathGenerator)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavigationPathGenerator() {} \
public: \
	typedef UNavigationPathGenerator UClassType; \
	typedef INavigationPathGenerator ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INavigationPathGenerator() {} \
public: \
	typedef UNavigationPathGenerator UClassType; \
	typedef INavigationPathGenerator ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_11_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationPathGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

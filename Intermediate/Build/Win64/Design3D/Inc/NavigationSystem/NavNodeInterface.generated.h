// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavNodeInterface_generated_h
#error "NavNodeInterface.generated.h already included, missing '#pragma once' in NavNodeInterface.h"
#endif
#define NAVIGATIONSYSTEM_NavNodeInterface_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavNodeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavNodeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(UNavNodeInterface&&); \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const UNavNodeInterface&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(UNavNodeInterface&&); \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const UNavNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavNodeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavNodeInterface)


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavNodeInterface(); \
	friend struct Z_Construct_UClass_UNavNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UNavNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavNodeInterface)


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavNodeInterface() {} \
public: \
	typedef UNavNodeInterface UClassType; \
	typedef INavNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INavNodeInterface() {} \
public: \
	typedef UNavNodeInterface UClassType; \
	typedef INavNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_11_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

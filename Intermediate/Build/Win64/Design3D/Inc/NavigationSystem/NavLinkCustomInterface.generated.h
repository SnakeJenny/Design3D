// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkCustomInterface_generated_h
#error "NavLinkCustomInterface.generated.h already included, missing '#pragma once' in NavLinkCustomInterface.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkCustomInterface_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkCustomInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(UNavLinkCustomInterface&&); \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(const UNavLinkCustomInterface&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(UNavLinkCustomInterface&&); \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(const UNavLinkCustomInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkCustomInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomInterface)


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavLinkCustomInterface(); \
	friend struct Z_Construct_UClass_UNavLinkCustomInterface_Statics; \
public: \
	DECLARE_CLASS(UNavLinkCustomInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavLinkCustomInterface)


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavLinkCustomInterface() {} \
public: \
	typedef UNavLinkCustomInterface UClassType; \
	typedef INavLinkCustomInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_INCLASS_IINTERFACE \
protected: \
	virtual ~INavLinkCustomInterface() {} \
public: \
	typedef UNavLinkCustomInterface UClassType; \
	typedef INavLinkCustomInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_27_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkCustomInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

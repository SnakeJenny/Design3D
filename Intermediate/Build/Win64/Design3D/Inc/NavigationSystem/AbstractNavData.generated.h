// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_AbstractNavData_generated_h
#error "AbstractNavData.generated.h already included, missing '#pragma once' in AbstractNavData.h"
#endif
#define NAVIGATIONSYSTEM_AbstractNavData_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbstractNavData(); \
	friend struct Z_Construct_UClass_AAbstractNavData_Statics; \
public: \
	DECLARE_CLASS(AAbstractNavData, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(AAbstractNavData)


#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAAbstractNavData(); \
	friend struct Z_Construct_UClass_AAbstractNavData_Statics; \
public: \
	DECLARE_CLASS(AAbstractNavData, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(AAbstractNavData)


#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbstractNavData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbstractNavData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbstractNavData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbstractNavData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbstractNavData(AAbstractNavData&&); \
	NO_API AAbstractNavData(const AAbstractNavData&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbstractNavData(AAbstractNavData&&); \
	NO_API AAbstractNavData(const AAbstractNavData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbstractNavData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbstractNavData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbstractNavData)


#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_41_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class AAbstractNavData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

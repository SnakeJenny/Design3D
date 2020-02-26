// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavAreaMeta_generated_h
#error "NavAreaMeta.generated.h already included, missing '#pragma once' in NavAreaMeta.h"
#endif
#define NAVIGATIONSYSTEM_NavAreaMeta_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavAreaMeta(); \
	friend struct Z_Construct_UClass_UNavAreaMeta_Statics; \
public: \
	DECLARE_CLASS(UNavAreaMeta, UNavArea, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavAreaMeta)


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNavAreaMeta(); \
	friend struct Z_Construct_UClass_UNavAreaMeta_Statics; \
public: \
	DECLARE_CLASS(UNavAreaMeta, UNavArea, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavAreaMeta)


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavAreaMeta(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaMeta) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavAreaMeta); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaMeta); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavAreaMeta(UNavAreaMeta&&); \
	NO_API UNavAreaMeta(const UNavAreaMeta&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavAreaMeta(UNavAreaMeta&&); \
	NO_API UNavAreaMeta(const UNavAreaMeta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavAreaMeta); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaMeta); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaMeta)


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_16_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavAreaMeta>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

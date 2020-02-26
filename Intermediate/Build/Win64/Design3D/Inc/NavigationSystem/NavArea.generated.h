// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavArea_generated_h
#error "NavArea.generated.h already included, missing '#pragma once' in NavArea.h"
#endif
#define NAVIGATIONSYSTEM_NavArea_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNavArea, NO_API)


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavArea(); \
	friend struct Z_Construct_UClass_UNavArea_Statics; \
public: \
	DECLARE_CLASS(UNavArea, UNavAreaBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavArea) \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_ARCHIVESERIALIZER


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNavArea(); \
	friend struct Z_Construct_UClass_UNavArea_Statics; \
public: \
	DECLARE_CLASS(UNavArea, UNavAreaBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavArea) \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_ARCHIVESERIALIZER


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavArea(UNavArea&&); \
	NO_API UNavArea(const UNavArea&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavArea(UNavArea&&); \
	NO_API UNavArea(const UNavArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea)


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FixedAreaEnteringCost() { return STRUCT_OFFSET(UNavArea, FixedAreaEnteringCost); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_13_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

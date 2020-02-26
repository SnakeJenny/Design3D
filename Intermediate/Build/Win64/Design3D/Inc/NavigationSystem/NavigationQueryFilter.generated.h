// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationQueryFilter_generated_h
#error "NavigationQueryFilter.generated.h already included, missing '#pragma once' in NavigationQueryFilter.h"
#endif
#define NAVIGATIONSYSTEM_NavigationQueryFilter_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavigationFilterFlags>();

#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationFilterArea_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavigationFilterArea>();

#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationQueryFilter(); \
	friend struct Z_Construct_UClass_UNavigationQueryFilter_Statics; \
public: \
	DECLARE_CLASS(UNavigationQueryFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationQueryFilter)


#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationQueryFilter(); \
	friend struct Z_Construct_UClass_UNavigationQueryFilter_Statics; \
public: \
	DECLARE_CLASS(UNavigationQueryFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationQueryFilter)


#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationQueryFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationQueryFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationQueryFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationQueryFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationQueryFilter(UNavigationQueryFilter&&); \
	NO_API UNavigationQueryFilter(const UNavigationQueryFilter&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationQueryFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationQueryFilter(UNavigationQueryFilter&&); \
	NO_API UNavigationQueryFilter(const UNavigationQueryFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationQueryFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationQueryFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationQueryFilter)


#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_103_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_106_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationQueryFilter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationQueryFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

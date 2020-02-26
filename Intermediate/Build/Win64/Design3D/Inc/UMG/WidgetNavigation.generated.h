// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EUINavigation : uint8;
#ifdef UMG_WidgetNavigation_generated_h
#error "WidgetNavigation.generated.h already included, missing '#pragma once' in WidgetNavigation.h"
#endif
#define UMG_WidgetNavigation_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FWidgetNavigationData>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_15_DELEGATE \
struct _Script_UMG_eventCustomWidgetNavigationDelegate_Parms \
{ \
	EUINavigation Navigation; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_UMG_eventCustomWidgetNavigationDelegate_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FCustomWidgetNavigationDelegate_DelegateWrapper(const FScriptDelegate& CustomWidgetNavigationDelegate, EUINavigation Navigation) \
{ \
	_Script_UMG_eventCustomWidgetNavigationDelegate_Parms Parms; \
	Parms.Navigation=Navigation; \
	CustomWidgetNavigationDelegate.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetNavigation(); \
	friend struct Z_Construct_UClass_UWidgetNavigation_Statics; \
public: \
	DECLARE_CLASS(UWidgetNavigation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetNavigation)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetNavigation(); \
	friend struct Z_Construct_UClass_UWidgetNavigation_Statics; \
public: \
	DECLARE_CLASS(UWidgetNavigation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetNavigation)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetNavigation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetNavigation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetNavigation(UWidgetNavigation&&); \
	NO_API UWidgetNavigation(const UWidgetNavigation&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetNavigation(UWidgetNavigation&&); \
	NO_API UWidgetNavigation(const UWidgetNavigation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetNavigation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetNavigation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetNavigation)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_49_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetNavigation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetNavigation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

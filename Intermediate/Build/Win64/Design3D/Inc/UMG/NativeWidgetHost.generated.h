// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_NativeWidgetHost_generated_h
#error "NativeWidgetHost.generated.h already included, missing '#pragma once' in NativeWidgetHost.h"
#endif
#define UMG_NativeWidgetHost_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNativeWidgetHost(); \
	friend struct Z_Construct_UClass_UNativeWidgetHost_Statics; \
public: \
	DECLARE_CLASS(UNativeWidgetHost, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UNativeWidgetHost)


#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNativeWidgetHost(); \
	friend struct Z_Construct_UClass_UNativeWidgetHost_Statics; \
public: \
	DECLARE_CLASS(UNativeWidgetHost, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UNativeWidgetHost)


#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNativeWidgetHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNativeWidgetHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNativeWidgetHost); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNativeWidgetHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNativeWidgetHost(UNativeWidgetHost&&); \
	NO_API UNativeWidgetHost(const UNativeWidgetHost&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNativeWidgetHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNativeWidgetHost(UNativeWidgetHost&&); \
	NO_API UNativeWidgetHost(const UNativeWidgetHost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNativeWidgetHost); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNativeWidgetHost); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNativeWidgetHost)


#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NativeWidgetHost."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UNativeWidgetHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVERLAY_LocalizedOverlays_generated_h
#error "LocalizedOverlays.generated.h already included, missing '#pragma once' in LocalizedOverlays.h"
#endif
#define OVERLAY_LocalizedOverlays_generated_h

#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalizedOverlays(); \
	friend struct Z_Construct_UClass_ULocalizedOverlays_Statics; \
public: \
	DECLARE_CLASS(ULocalizedOverlays, UOverlays, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Overlay"), NO_API) \
	DECLARE_SERIALIZER(ULocalizedOverlays)


#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULocalizedOverlays(); \
	friend struct Z_Construct_UClass_ULocalizedOverlays_Statics; \
public: \
	DECLARE_CLASS(ULocalizedOverlays, UOverlays, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Overlay"), NO_API) \
	DECLARE_SERIALIZER(ULocalizedOverlays)


#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizedOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizedOverlays) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizedOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizedOverlays); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalizedOverlays(ULocalizedOverlays&&); \
	NO_API ULocalizedOverlays(const ULocalizedOverlays&); \
public:


#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizedOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalizedOverlays(ULocalizedOverlays&&); \
	NO_API ULocalizedOverlays(const ULocalizedOverlays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizedOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizedOverlays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizedOverlays)


#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_22_PROLOG
#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_INCLASS \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVERLAY_API UClass* StaticClass<class ULocalizedOverlays>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

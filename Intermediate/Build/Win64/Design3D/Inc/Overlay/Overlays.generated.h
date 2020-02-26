// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVERLAY_Overlays_generated_h
#error "Overlays.generated.h already included, missing '#pragma once' in Overlays.h"
#endif
#define OVERLAY_Overlays_generated_h

#define Engine_Source_Runtime_Overlay_Public_Overlays_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVERLAY_API UScriptStruct* StaticStruct<struct FOverlayItem>();

#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_RPC_WRAPPERS
#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlays(); \
	friend struct Z_Construct_UClass_UOverlays_Statics; \
public: \
	DECLARE_CLASS(UOverlays, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Overlay"), NO_API) \
	DECLARE_SERIALIZER(UOverlays)


#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUOverlays(); \
	friend struct Z_Construct_UClass_UOverlays_Statics; \
public: \
	DECLARE_CLASS(UOverlays, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Overlay"), NO_API) \
	DECLARE_SERIALIZER(UOverlays)


#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlays) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlays); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlays(UOverlays&&); \
	NO_API UOverlays(const UOverlays&); \
public:


#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlays(UOverlays&&); \
	NO_API UOverlays(const UOverlays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlays)


#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Overlay_Public_Overlays_h_46_PROLOG
#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_RPC_WRAPPERS \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_INCLASS \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Overlay_Public_Overlays_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Overlay_Public_Overlays_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVERLAY_API UClass* StaticClass<class UOverlays>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Overlay_Public_Overlays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

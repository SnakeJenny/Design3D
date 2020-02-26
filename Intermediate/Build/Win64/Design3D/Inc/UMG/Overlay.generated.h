// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UOverlaySlot;
#ifdef UMG_Overlay_generated_h
#error "Overlay.generated.h already included, missing '#pragma once' in Overlay.h"
#endif
#define UMG_Overlay_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToOverlay) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOverlaySlot**)Z_Param__Result=P_THIS->AddChildToOverlay(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToOverlay) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOverlaySlot**)Z_Param__Result=P_THIS->AddChildToOverlay(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlay(); \
	friend struct Z_Construct_UClass_UOverlay_Statics; \
public: \
	DECLARE_CLASS(UOverlay, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UOverlay)


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOverlay(); \
	friend struct Z_Construct_UClass_UOverlay_Statics; \
public: \
	DECLARE_CLASS(UOverlay, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UOverlay)


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlay(UOverlay&&); \
	NO_API UOverlay(const UOverlay&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlay(UOverlay&&); \
	NO_API UOverlay(const UOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlay)


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Overlay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Overlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

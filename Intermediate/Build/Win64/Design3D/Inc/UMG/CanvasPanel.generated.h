// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UCanvasPanelSlot;
#ifdef UMG_CanvasPanel_generated_h
#error "CanvasPanel.generated.h already included, missing '#pragma once' in CanvasPanel.h"
#endif
#define UMG_CanvasPanel_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToCanvas) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCanvasPanelSlot**)Z_Param__Result=P_THIS->AddChildToCanvas(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToCanvas) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCanvasPanelSlot**)Z_Param__Result=P_THIS->AddChildToCanvas(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend struct Z_Construct_UClass_UCanvasPanel_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanel)


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend struct Z_Construct_UClass_UCanvasPanel_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanel)


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanel(UCanvasPanel&&); \
	NO_API UCanvasPanel(const UCanvasPanel&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanel(UCanvasPanel&&); \
	NO_API UCanvasPanel(const UCanvasPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel)


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_24_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CanvasPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCanvasPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

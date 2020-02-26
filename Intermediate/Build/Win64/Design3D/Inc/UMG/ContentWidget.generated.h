// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UPanelSlot;
#ifdef UMG_ContentWidget_generated_h
#error "ContentWidget.generated.h already included, missing '#pragma once' in ContentWidget.h"
#endif
#define UMG_ContentWidget_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetContent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContent) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=P_THIS->SetContent(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContentSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=P_THIS->GetContentSlot(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetContent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContent) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=P_THIS->SetContent(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContentSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=P_THIS->GetContentSlot(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentWidget(); \
	friend struct Z_Construct_UClass_UContentWidget_Statics; \
public: \
	DECLARE_CLASS(UContentWidget, UPanelWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UContentWidget)


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUContentWidget(); \
	friend struct Z_Construct_UClass_UContentWidget_Statics; \
public: \
	DECLARE_CLASS(UContentWidget, UPanelWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UContentWidget)


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentWidget(UContentWidget&&); \
	NO_API UContentWidget(const UContentWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentWidget(UContentWidget&&); \
	NO_API UContentWidget(const UContentWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentWidget)


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ContentWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UContentWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

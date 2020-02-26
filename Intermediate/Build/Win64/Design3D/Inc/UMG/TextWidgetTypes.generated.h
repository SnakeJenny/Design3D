// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_TextWidgetTypes_generated_h
#error "TextWidgetTypes.generated.h already included, missing '#pragma once' in TextWidgetTypes.h"
#endif
#define UMG_TextWidgetTypes_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShapedTextOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FShapedTextOptions>();

#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextLayoutWidget(); \
	friend struct Z_Construct_UClass_UTextLayoutWidget_Statics; \
public: \
	DECLARE_CLASS(UTextLayoutWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextLayoutWidget)


#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUTextLayoutWidget(); \
	friend struct Z_Construct_UClass_UTextLayoutWidget_Statics; \
public: \
	DECLARE_CLASS(UTextLayoutWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextLayoutWidget)


#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextLayoutWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextLayoutWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextLayoutWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextLayoutWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextLayoutWidget(UTextLayoutWidget&&); \
	NO_API UTextLayoutWidget(const UTextLayoutWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextLayoutWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextLayoutWidget(UTextLayoutWidget&&); \
	NO_API UTextLayoutWidget(const UTextLayoutWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextLayoutWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextLayoutWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextLayoutWidget)


#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShapedTextOptions() { return STRUCT_OFFSET(UTextLayoutWidget, ShapedTextOptions); } \
	FORCEINLINE static uint32 __PPO__Justification() { return STRUCT_OFFSET(UTextLayoutWidget, Justification); } \
	FORCEINLINE static uint32 __PPO__WrappingPolicy() { return STRUCT_OFFSET(UTextLayoutWidget, WrappingPolicy); } \
	FORCEINLINE static uint32 __PPO__WrapTextAt() { return STRUCT_OFFSET(UTextLayoutWidget, WrapTextAt); } \
	FORCEINLINE static uint32 __PPO__Margin() { return STRUCT_OFFSET(UTextLayoutWidget, Margin); } \
	FORCEINLINE static uint32 __PPO__LineHeightPercentage() { return STRUCT_OFFSET(UTextLayoutWidget, LineHeightPercentage); }


#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_56_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextLayoutWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextLayoutWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

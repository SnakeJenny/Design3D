// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
struct FSlateBrush;
struct FSlateFontInfo;
struct FVector2D;
struct FLinearColor;
struct FSlateColor;
#ifdef UMG_TextBlock_generated_h
#error "TextBlock.generated.h already included, missing '#pragma once' in TextBlock.h"
#endif
#define UMG_TextBlock_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicOutlineMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicOutlineMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicFontMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicFontMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoWrapText) \
	{ \
		P_GET_UBOOL(Z_Param_InAutoTextWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrikeBrush) \
	{ \
		P_GET_STRUCT(FSlateBrush,Z_Param_InStrikeBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrikeBrush(Z_Param_InStrikeBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicOutlineMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicOutlineMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicFontMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicFontMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoWrapText) \
	{ \
		P_GET_UBOOL(Z_Param_InAutoTextWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrikeBrush) \
	{ \
		P_GET_STRUCT(FSlateBrush,Z_Param_InStrikeBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrikeBrush(Z_Param_InStrikeBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextBlock(); \
	friend struct Z_Construct_UClass_UTextBlock_Statics; \
public: \
	DECLARE_CLASS(UTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTextBlock(); \
	friend struct Z_Construct_UClass_UTextBlock_Statics; \
public: \
	DECLARE_CLASS(UTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextBlock(UTextBlock&&); \
	NO_API UTextBlock(const UTextBlock&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextBlock(UTextBlock&&); \
	NO_API UTextBlock(const UTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSimpleTextMode() { return STRUCT_OFFSET(UTextBlock, bSimpleTextMode); }


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_21_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextBlock."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

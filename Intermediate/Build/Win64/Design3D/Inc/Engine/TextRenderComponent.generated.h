// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FColor;
class UFont;
class UMaterialInterface;
#ifdef ENGINE_TextRenderComponent_generated_h
#error "TextRenderComponent.generated.h already included, missing '#pragma once' in TextRenderComponent.h"
#endif
#define ENGINE_TextRenderComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTextWorldSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTextWorldSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextLocalSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTextLocalSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldSize(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertSpacingAdjust) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVertSpacingAdjust(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizSpacingAdjust) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizSpacingAdjust(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetYScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetYScale(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetXScale(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextRenderColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextRenderColor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalTextAligment(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizTextAligment(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFont(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetText(Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTextWorldSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTextWorldSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextLocalSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTextLocalSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldSize(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertSpacingAdjust) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVertSpacingAdjust(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizSpacingAdjust) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizSpacingAdjust(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetYScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetYScale(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetXScale(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextRenderColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextRenderColor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalTextAligment(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizTextAligment(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFont(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_SetText(Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextRenderComponent(); \
	friend struct Z_Construct_UClass_UTextRenderComponent_Statics; \
public: \
	DECLARE_CLASS(UTextRenderComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTextRenderComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUTextRenderComponent(); \
	friend struct Z_Construct_UClass_UTextRenderComponent_Statics; \
public: \
	DECLARE_CLASS(UTextRenderComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTextRenderComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextRenderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextRenderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextRenderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextRenderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextRenderComponent(UTextRenderComponent&&); \
	NO_API UTextRenderComponent(const UTextRenderComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextRenderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextRenderComponent(UTextRenderComponent&&); \
	NO_API UTextRenderComponent(const UTextRenderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextRenderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextRenderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextRenderComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_43_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextRenderComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextRenderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h


#define FOREACH_ENUM_EVERTICALTEXTALIGMENT(op) \
	op(EVRTA_TextTop) \
	op(EVRTA_TextCenter) \
	op(EVRTA_TextBottom) \
	op(EVRTA_QuadTop) 
#define FOREACH_ENUM_EHORIZTEXTALIGMENT(op) \
	op(EHTA_Left) \
	op(EHTA_Center) \
	op(EHTA_Right) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

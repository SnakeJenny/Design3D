// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
struct FSlateBrush;
struct FLinearColor;
struct FMargin;
#ifdef UMG_Border_generated_h
#error "Border.generated.h already included, missing '#pragma once' in Border.h"
#endif
#define UMG_Border_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDesiredSizeScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredSizeScale(Z_Param_InScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromTexture(Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromAsset(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrush(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InBrushColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushColor(Z_Param_InBrushColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContentColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InContentColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetContentColorAndOpacity(Z_Param_InContentColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDesiredSizeScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredSizeScale(Z_Param_InScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromTexture(Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromAsset(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrush(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InBrushColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushColor(Z_Param_InBrushColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContentColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InContentColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetContentColorAndOpacity(Z_Param_InContentColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBorder(); \
	friend struct Z_Construct_UClass_UBorder_Statics; \
public: \
	DECLARE_CLASS(UBorder, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorder)


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBorder(); \
	friend struct Z_Construct_UClass_UBorder_Statics; \
public: \
	DECLARE_CLASS(UBorder, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorder)


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorder(UBorder&&); \
	NO_API UBorder(const UBorder&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorder(UBorder&&); \
	NO_API UBorder(const UBorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorder)


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Border_h_28_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Border."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Border_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

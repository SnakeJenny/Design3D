// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class UTexture2DDynamic;
class ISlateTextureAtlasInterface;
class USlateBrushAsset;
struct FSlateBrush;
struct FSlateColor;
struct FVector2D;
struct FLinearColor;
#ifdef UMG_Image_generated_h
#error "Image.generated.h already included, missing '#pragma once' in Image.h"
#endif
#define UMG_Image_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromSoftMaterial) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_SoftMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromSoftMaterial(Z_Param_SoftMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromSoftTexture) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_SoftTexture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromSoftTexture(Z_Param_SoftTexture,Z_Param_bMatchSize); \
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
	DECLARE_FUNCTION(execSetBrushFromTextureDynamic) \
	{ \
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromTextureDynamic(Z_Param_Texture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAtlasInterface) \
	{ \
		P_GET_TINTERFACE(ISlateTextureAtlasInterface,Z_Param_AtlasRegion); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromAtlasInterface(Z_Param_AtlasRegion,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize); \
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
	DECLARE_FUNCTION(execSetBrushTintColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_TintColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushTintColor(Z_Param_TintColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_DesiredSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushSize(Z_Param_DesiredSize); \
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
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromSoftMaterial) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_SoftMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromSoftMaterial(Z_Param_SoftMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromSoftTexture) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_SoftTexture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromSoftTexture(Z_Param_SoftTexture,Z_Param_bMatchSize); \
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
	DECLARE_FUNCTION(execSetBrushFromTextureDynamic) \
	{ \
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromTextureDynamic(Z_Param_Texture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAtlasInterface) \
	{ \
		P_GET_TINTERFACE(ISlateTextureAtlasInterface,Z_Param_AtlasRegion); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromAtlasInterface(Z_Param_AtlasRegion,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize); \
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
	DECLARE_FUNCTION(execSetBrushTintColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_TintColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushTintColor(Z_Param_TintColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_DesiredSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushSize(Z_Param_DesiredSize); \
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
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImage(); \
	friend struct Z_Construct_UClass_UImage_Statics; \
public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UImage)


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUImage(); \
	friend struct Z_Construct_UClass_UImage_Statics; \
public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UImage)


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImage(UImage&&); \
	NO_API UImage(const UImage&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImage(UImage&&); \
	NO_API UImage(const UImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage)


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Image_h_29_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Image."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Image_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
struct FVector2D;
struct FVector;
class UTexture;
struct FLinearColor;
class UMaterialInterface;
struct FCanvasUVTri;
#ifdef ENGINE_Canvas_generated_h
#error "Canvas.generated.h already included, missing '#pragma once' in Canvas.h"
#endif
#define ENGINE_Canvas_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCanvasIcon_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCanvasIcon>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_TextSize) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_RenderFont); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RenderText); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->K2_TextSize(Z_Param_RenderFont,Z_Param_RenderText,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_StrLen) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_RenderFont); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RenderText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->K2_StrLen(Z_Param_RenderFont,Z_Param_RenderText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_Deproject) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_Deproject(Z_Param_ScreenPosition,Z_Param_Out_WorldOrigin,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_Project) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->K2_Project(Z_Param_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawPolygon) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfSides); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawPolygon(Z_Param_RenderTexture,Z_Param_ScreenPosition,Z_Param_Radius,Z_Param_NumberOfSides,Z_Param_RenderColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawMaterialTriangle) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_RenderMaterial); \
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawMaterialTriangle(Z_Param_RenderMaterial,Z_Param_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawTriangle) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture); \
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawTriangle(Z_Param_RenderTexture,Z_Param_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawBox) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawBox(Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_Thickness,Z_Param_RenderColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawBorder) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_BorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_BackgroundTexture); \
		P_GET_OBJECT(UTexture,Z_Param_LeftBorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_RightBorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_TopBorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_BottomBorderTexture); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_GET_STRUCT(FVector2D,Z_Param_BorderScale); \
		P_GET_STRUCT(FVector2D,Z_Param_BackgroundScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint); \
		P_GET_STRUCT(FVector2D,Z_Param_CornerSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawBorder(Z_Param_BorderTexture,Z_Param_BackgroundTexture,Z_Param_LeftBorderTexture,Z_Param_RightBorderTexture,Z_Param_TopBorderTexture,Z_Param_BottomBorderTexture,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_RenderColor,Z_Param_BorderScale,Z_Param_BackgroundScale,Z_Param_Rotation,Z_Param_PivotPoint,Z_Param_CornerSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawText) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_RenderFont); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RenderText); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Kerning); \
		P_GET_STRUCT(FLinearColor,Z_Param_ShadowColor); \
		P_GET_STRUCT(FVector2D,Z_Param_ShadowOffset); \
		P_GET_UBOOL(Z_Param_bCentreX); \
		P_GET_UBOOL(Z_Param_bCentreY); \
		P_GET_UBOOL(Z_Param_bOutlined); \
		P_GET_STRUCT(FLinearColor,Z_Param_OutlineColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawText(Z_Param_RenderFont,Z_Param_RenderText,Z_Param_ScreenPosition,Z_Param_Scale,Z_Param_RenderColor,Z_Param_Kerning,Z_Param_ShadowColor,Z_Param_ShadowOffset,Z_Param_bCentreX,Z_Param_bCentreY,Z_Param_bOutlined,Z_Param_OutlineColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_RenderMaterial); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawMaterial(Z_Param_RenderMaterial,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_Rotation,Z_Param_PivotPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BlendMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawTexture(Z_Param_RenderTexture,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_RenderColor,EBlendMode(Z_Param_BlendMode),Z_Param_Rotation,Z_Param_PivotPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawLine) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPositionA); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPositionB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawLine(Z_Param_ScreenPositionA,Z_Param_ScreenPositionB,Z_Param_Thickness,Z_Param_RenderColor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_TextSize) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_RenderFont); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RenderText); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->K2_TextSize(Z_Param_RenderFont,Z_Param_RenderText,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_StrLen) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_RenderFont); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RenderText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->K2_StrLen(Z_Param_RenderFont,Z_Param_RenderText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_Deproject) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_Deproject(Z_Param_ScreenPosition,Z_Param_Out_WorldOrigin,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_Project) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->K2_Project(Z_Param_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawPolygon) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfSides); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawPolygon(Z_Param_RenderTexture,Z_Param_ScreenPosition,Z_Param_Radius,Z_Param_NumberOfSides,Z_Param_RenderColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawMaterialTriangle) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_RenderMaterial); \
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawMaterialTriangle(Z_Param_RenderMaterial,Z_Param_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawTriangle) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture); \
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawTriangle(Z_Param_RenderTexture,Z_Param_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawBox) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawBox(Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_Thickness,Z_Param_RenderColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawBorder) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_BorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_BackgroundTexture); \
		P_GET_OBJECT(UTexture,Z_Param_LeftBorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_RightBorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_TopBorderTexture); \
		P_GET_OBJECT(UTexture,Z_Param_BottomBorderTexture); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_GET_STRUCT(FVector2D,Z_Param_BorderScale); \
		P_GET_STRUCT(FVector2D,Z_Param_BackgroundScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint); \
		P_GET_STRUCT(FVector2D,Z_Param_CornerSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawBorder(Z_Param_BorderTexture,Z_Param_BackgroundTexture,Z_Param_LeftBorderTexture,Z_Param_RightBorderTexture,Z_Param_TopBorderTexture,Z_Param_BottomBorderTexture,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_RenderColor,Z_Param_BorderScale,Z_Param_BackgroundScale,Z_Param_Rotation,Z_Param_PivotPoint,Z_Param_CornerSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawText) \
	{ \
		P_GET_OBJECT(UFont,Z_Param_RenderFont); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RenderText); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Kerning); \
		P_GET_STRUCT(FLinearColor,Z_Param_ShadowColor); \
		P_GET_STRUCT(FVector2D,Z_Param_ShadowOffset); \
		P_GET_UBOOL(Z_Param_bCentreX); \
		P_GET_UBOOL(Z_Param_bCentreY); \
		P_GET_UBOOL(Z_Param_bOutlined); \
		P_GET_STRUCT(FLinearColor,Z_Param_OutlineColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawText(Z_Param_RenderFont,Z_Param_RenderText,Z_Param_ScreenPosition,Z_Param_Scale,Z_Param_RenderColor,Z_Param_Kerning,Z_Param_ShadowColor,Z_Param_ShadowOffset,Z_Param_bCentreX,Z_Param_bCentreY,Z_Param_bOutlined,Z_Param_OutlineColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_RenderMaterial); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawMaterial(Z_Param_RenderMaterial,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_Rotation,Z_Param_PivotPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BlendMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawTexture(Z_Param_RenderTexture,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_RenderColor,EBlendMode(Z_Param_BlendMode),Z_Param_Rotation,Z_Param_PivotPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DrawLine) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPositionA); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPositionB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_DrawLine(Z_Param_ScreenPositionA,Z_Param_ScreenPositionB,Z_Param_Thickness,Z_Param_RenderColor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvas(); \
	friend struct Z_Construct_UClass_UCanvas_Statics; \
public: \
	DECLARE_CLASS(UCanvas, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCanvas)


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUCanvas(); \
	friend struct Z_Construct_UClass_UCanvas_Statics; \
public: \
	DECLARE_CLASS(UCanvas, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCanvas)


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvas(UCanvas&&); \
	NO_API UCanvas(const UCanvas&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvas(UCanvas&&); \
	NO_API UCanvas(const UCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvas)


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_153_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_157_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Canvas."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCanvas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector2D;
struct FGeometry;
struct FSlateBrush;
#ifdef UMG_SlateBlueprintLibrary_generated_h
#error "SlateBlueprintLibrary.generated.h already included, missing '#pragma once' in SlateBlueprintLibrary.h"
#endif
#define UMG_SlateBlueprintLibrary_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScreenToViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::ScreenToViewport(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_ViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenToWidgetAbsolute) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::ScreenToWidgetAbsolute(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_AbsoluteCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenToWidgetLocal) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::ScreenToWidgetLocal(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_ScreenPosition,Z_Param_Out_LocalCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbsoluteToViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteDesktopCoordinate); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::AbsoluteToViewport(Z_Param_WorldContextObject,Z_Param_AbsoluteDesktopCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalToViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::LocalToViewport(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_LocalCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_SlateBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::EqualEqual_SlateBrush(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorLocalToAbsolute) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_LocalVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorAbsoluteToLocal) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformScalarLocalToAbsolute) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocalScalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalScalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformScalarAbsoluteToLocal) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AbsoluteScalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteScalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbsoluteSize) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetAbsoluteSize(Z_Param_Out_Geometry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalSize) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalSize(Z_Param_Out_Geometry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalToAbsolute) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::LocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbsoluteToLocal) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::AbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUnderLocation) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::IsUnderLocation(Z_Param_Out_Geometry,Z_Param_Out_AbsoluteCoordinate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScreenToViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::ScreenToViewport(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_ViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenToWidgetAbsolute) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::ScreenToWidgetAbsolute(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_AbsoluteCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenToWidgetLocal) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::ScreenToWidgetLocal(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_ScreenPosition,Z_Param_Out_LocalCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbsoluteToViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteDesktopCoordinate); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::AbsoluteToViewport(Z_Param_WorldContextObject,Z_Param_AbsoluteDesktopCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalToViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USlateBlueprintLibrary::LocalToViewport(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_LocalCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_SlateBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::EqualEqual_SlateBrush(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorLocalToAbsolute) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_LocalVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorAbsoluteToLocal) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformScalarLocalToAbsolute) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocalScalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalScalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformScalarAbsoluteToLocal) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AbsoluteScalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteScalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbsoluteSize) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetAbsoluteSize(Z_Param_Out_Geometry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalSize) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalSize(Z_Param_Out_Geometry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalToAbsolute) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::LocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbsoluteToLocal) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::AbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteCoordinate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUnderLocation) \
	{ \
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::IsUnderLocation(Z_Param_Out_Geometry,Z_Param_Out_AbsoluteCoordinate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USlateBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USlateBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlateBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSlateBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USlateBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USlateBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlateBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateBlueprintLibrary(USlateBlueprintLibrary&&); \
	NO_API USlateBlueprintLibrary(const USlateBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateBlueprintLibrary(USlateBlueprintLibrary&&); \
	NO_API USlateBlueprintLibrary(const USlateBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SlateBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USlateBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWidget;
class UVerticalBoxSlot;
class UUniformGridSlot;
class UOverlaySlot;
class UHorizontalBoxSlot;
class UGridSlot;
class UCanvasPanelSlot;
class UBorderSlot;
class APlayerController;
struct FVector2D;
struct FGeometry;
struct FVector;
#ifdef UMG_WidgetLayoutLibrary_generated_h
#error "WidgetLayoutLibrary.generated.h already included, missing '#pragma once' in WidgetLayoutLibrary.h"
#endif
#define UMG_WidgetLayoutLibrary_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllWidgets) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetLayoutLibrary::RemoveAllWidgets(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVerticalBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformGridSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsUniformGridSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsOverlaySlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOverlaySlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsOverlaySlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHorizontalBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsGridSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsGridSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsCanvasSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCanvasPanelSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsCanvasSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsBorderSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBorderSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsBorderSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionScaledByDPI(Z_Param_Player,Z_Param_Out_LocationX,Z_Param_Out_LocationY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionOnViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionOnViewport(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionOnPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGeometry*)Z_Param__Result=UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGeometry*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportWidgetGeometry(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportSize) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportSize(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportScale) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportScale(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(Z_Param_PlayerController,Z_Param_WorldLocation,Z_Param_Out_ScreenPosition); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllWidgets) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetLayoutLibrary::RemoveAllWidgets(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVerticalBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformGridSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsUniformGridSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsOverlaySlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOverlaySlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsOverlaySlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHorizontalBoxSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsGridSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsGridSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsCanvasSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCanvasPanelSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsCanvasSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotAsBorderSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBorderSlot**)Z_Param__Result=UWidgetLayoutLibrary::SlotAsBorderSlot(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionScaledByDPI(Z_Param_Player,Z_Param_Out_LocationX,Z_Param_Out_LocationY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionOnViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionOnViewport(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetMousePositionOnPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGeometry*)Z_Param__Result=UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGeometry*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportWidgetGeometry(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportSize) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportSize(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportScale) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWidgetLayoutLibrary::GetViewportScale(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(Z_Param_PlayerController,Z_Param_WorldLocation,Z_Param_Out_ScreenPosition); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLayoutLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLayoutLibrary(UWidgetLayoutLibrary&&); \
	NO_API UWidgetLayoutLibrary(const UWidgetLayoutLibrary&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLayoutLibrary(UWidgetLayoutLibrary&&); \
	NO_API UWidgetLayoutLibrary(const UWidgetLayoutLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLayoutLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetLayoutLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetLayoutLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

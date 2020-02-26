// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetLayoutLibrary() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot();
	UMG_API UClass* Z_Construct_UClass_UBorderSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot();
	UMG_API UClass* Z_Construct_UClass_UOverlaySlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
// End Cross Module References
	void UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary()
	{
		UClass* Class = UWidgetLayoutLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMousePositionOnPlatform", &UWidgetLayoutLibrary::execGetMousePositionOnPlatform },
			{ "GetMousePositionOnViewport", &UWidgetLayoutLibrary::execGetMousePositionOnViewport },
			{ "GetMousePositionScaledByDPI", &UWidgetLayoutLibrary::execGetMousePositionScaledByDPI },
			{ "GetPlayerScreenWidgetGeometry", &UWidgetLayoutLibrary::execGetPlayerScreenWidgetGeometry },
			{ "GetViewportScale", &UWidgetLayoutLibrary::execGetViewportScale },
			{ "GetViewportSize", &UWidgetLayoutLibrary::execGetViewportSize },
			{ "GetViewportWidgetGeometry", &UWidgetLayoutLibrary::execGetViewportWidgetGeometry },
			{ "ProjectWorldLocationToWidgetPosition", &UWidgetLayoutLibrary::execProjectWorldLocationToWidgetPosition },
			{ "RemoveAllWidgets", &UWidgetLayoutLibrary::execRemoveAllWidgets },
			{ "SlotAsBorderSlot", &UWidgetLayoutLibrary::execSlotAsBorderSlot },
			{ "SlotAsCanvasSlot", &UWidgetLayoutLibrary::execSlotAsCanvasSlot },
			{ "SlotAsGridSlot", &UWidgetLayoutLibrary::execSlotAsGridSlot },
			{ "SlotAsHorizontalBoxSlot", &UWidgetLayoutLibrary::execSlotAsHorizontalBoxSlot },
			{ "SlotAsOverlaySlot", &UWidgetLayoutLibrary::execSlotAsOverlaySlot },
			{ "SlotAsUniformGridSlot", &UWidgetLayoutLibrary::execSlotAsUniformGridSlot },
			{ "SlotAsVerticalBoxSlot", &UWidgetLayoutLibrary::execSlotAsVerticalBoxSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics
	{
		struct WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the platform's mouse cursor position.  This is the 'absolute' desktop location of the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetMousePositionOnPlatform", sizeof(WidgetLayoutLibrary_eventGetMousePositionOnPlatform_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics
	{
		struct WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the platform's mouse cursor position in the local space of the viewport widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetMousePositionOnViewport", sizeof(WidgetLayoutLibrary_eventGetMousePositionOnViewport_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics
	{
		struct WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms
		{
			APlayerController* Player;
			float LocationX;
			float LocationY;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationX;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms), &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_LocationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the mouse position of the player controller, scaled by the DPI.  If you're trying to go from raw mouse screenspace coordinates\nto fullscreen widget space, you'll need to transform the mouse into DPI Scaled space.  This function performs that scaling.\n\nMousePositionScaledByDPI = MousePosition * (1 / ViewportScale).\n        //UE_DEPRECATED(4.17, \"Use GetMousePositionOnViewport() instead.  Optionally and for more options, you can use GetViewportWidgetGeometry and GetPlayerScreenWidgetGeometry are newly introduced to give you the geometry of the viewport and the player screen for widgets to help convert between spaces.\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetMousePositionScaledByDPI", sizeof(WidgetLayoutLibrary_eventGetMousePositionScaledByDPI_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics
	{
		struct WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms
		{
			APlayerController* PlayerController;
			FGeometry ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the geometry of the widget holding all widgets added to the \"Player Screen\". You\ncan use this geometry to convert between absolute and local space of widgets held on this\nwidget." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetPlayerScreenWidgetGeometry", sizeof(WidgetLayoutLibrary_eventGetPlayerScreenWidgetGeometry_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics
	{
		struct WidgetLayoutLibrary_eventGetViewportScale_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the current DPI Scale being applied to the viewport and all the Widgets." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetViewportScale", sizeof(WidgetLayoutLibrary_eventGetViewportScale_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics
	{
		struct WidgetLayoutLibrary_eventGetViewportSize_Parms
		{
			UObject* WorldContextObject;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportSize_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the size of the game viewport." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetViewportSize", sizeof(WidgetLayoutLibrary_eventGetViewportSize_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics
	{
		struct WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms
		{
			UObject* WorldContextObject;
			FGeometry ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the geometry of the widget holding all widgets added to the \"Viewport\".  You\ncan use this geometry to convert between absolute and local space of widgets held on this\nwidget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "GetViewportWidgetGeometry", sizeof(WidgetLayoutLibrary_eventGetViewportWidgetGeometry_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics
	{
		struct WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms
		{
			APlayerController* PlayerController;
			FVector WorldLocation;
			FVector2D ScreenPosition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the projected world to screen position for a player, then converts it into a widget\nposition, which takes into account any quality scaling.\n@param PlayerController The player controller to project the position in the world to their screen.\n@param WorldLocation The world location to project from.\n@param ScreenPosition The position in the viewport with quality scale removed and DPI scale remove.\n@return true if the position projects onto the screen." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "ProjectWorldLocationToWidgetPosition", sizeof(WidgetLayoutLibrary_eventProjectWorldLocationToWidgetPosition_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics
	{
		struct WidgetLayoutLibrary_eventRemoveAllWidgets_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventRemoveAllWidgets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Removes all widgets from the viewport." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "RemoveAllWidgets", sizeof(WidgetLayoutLibrary_eventRemoveAllWidgets_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms
		{
			UWidget* Widget;
			UBorderSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms, ReturnValue), Z_Construct_UClass_UBorderSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Border Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a border panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsBorderSlot", sizeof(WidgetLayoutLibrary_eventSlotAsBorderSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms
		{
			UWidget* Widget;
			UCanvasPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Canvas Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a canvas panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsCanvasSlot", sizeof(WidgetLayoutLibrary_eventSlotAsCanvasSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsGridSlot_Parms
		{
			UWidget* Widget;
			UGridSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms, ReturnValue), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Grid Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a grid panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsGridSlot", sizeof(WidgetLayoutLibrary_eventSlotAsGridSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms
		{
			UWidget* Widget;
			UHorizontalBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UHorizontalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Horizontal Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Horizontal Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsHorizontalBoxSlot", sizeof(WidgetLayoutLibrary_eventSlotAsHorizontalBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms
		{
			UWidget* Widget;
			UOverlaySlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms, ReturnValue), Z_Construct_UClass_UOverlaySlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Overlay Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a overlay panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsOverlaySlot", sizeof(WidgetLayoutLibrary_eventSlotAsOverlaySlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms
		{
			UWidget* Widget;
			UUniformGridSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms, ReturnValue), Z_Construct_UClass_UUniformGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Uniform Grid Slot, allowing you to manipulate layout information.\n@param Widget The child widget of a uniform grid panel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsUniformGridSlot", sizeof(WidgetLayoutLibrary_eventSlotAsUniformGridSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics
	{
		struct WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms
		{
			UWidget* Widget;
			UVerticalBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms, ReturnValue), Z_Construct_UClass_UVerticalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
		{ "ToolTip", "Gets the slot object on the child widget as a Vertical Box Slot, allowing you to manipulate its information.\n@param Widget The child widget of a Vertical Box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetLayoutLibrary, nullptr, "SlotAsVerticalBoxSlot", sizeof(WidgetLayoutLibrary_eventSlotAsVerticalBoxSlot_Parms), Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister()
	{
		return UWidgetLayoutLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetLayoutLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetLayoutLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform, "GetMousePositionOnPlatform" }, // 3675277312
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport, "GetMousePositionOnViewport" }, // 874223451
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI, "GetMousePositionScaledByDPI" }, // 747254008
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry, "GetPlayerScreenWidgetGeometry" }, // 1040256961
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale, "GetViewportScale" }, // 2279282774
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize, "GetViewportSize" }, // 1783772012
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry, "GetViewportWidgetGeometry" }, // 1886524023
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition, "ProjectWorldLocationToWidgetPosition" }, // 2034160993
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets, "RemoveAllWidgets" }, // 774582218
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot, "SlotAsBorderSlot" }, // 2922886607
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot, "SlotAsCanvasSlot" }, // 3672309308
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot, "SlotAsGridSlot" }, // 4120586400
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot, "SlotAsHorizontalBoxSlot" }, // 1678105672
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot, "SlotAsOverlaySlot" }, // 2033982727
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot, "SlotAsUniformGridSlot" }, // 3055716504
		{ &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot, "SlotAsVerticalBoxSlot" }, // 1468049913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/WidgetLayoutLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetLayoutLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetLayoutLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetLayoutLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetLayoutLibrary_Statics::ClassParams = {
		&UWidgetLayoutLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetLayoutLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetLayoutLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetLayoutLibrary, 2603954634);
	template<> UMG_API UClass* StaticClass<UWidgetLayoutLibrary>()
	{
		return UWidgetLayoutLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetLayoutLibrary(Z_Construct_UClass_UWidgetLayoutLibrary, &UWidgetLayoutLibrary::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetLayoutLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetLayoutLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

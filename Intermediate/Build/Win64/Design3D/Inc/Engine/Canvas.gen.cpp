// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Canvas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvas() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_Deproject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBorder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawLine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasUVTri();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawPolygon();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawText();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTriangle();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_Project();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_StrLen();
	ENGINE_API UFunction* Z_Construct_UFunction_UCanvas_K2_TextSize();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FCanvasIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCanvasIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanvasIcon, Z_Construct_UPackage__Script_Engine(), TEXT("CanvasIcon"), sizeof(FCanvasIcon), Get_Z_Construct_UScriptStruct_FCanvasIcon_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCanvasIcon>()
{
	return FCanvasIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCanvasIcon(FCanvasIcon::StaticStruct, TEXT("/Script/Engine"), TEXT("CanvasIcon"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCanvasIcon
{
	FScriptStruct_Engine_StaticRegisterNativesFCanvasIcon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CanvasIcon")),new UScriptStruct::TCppStructOps<FCanvasIcon>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCanvasIcon;
	struct Z_Construct_UScriptStruct_FCanvasIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Holds texture information with UV coordinates as well." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanvasIcon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL = { "VL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCanvasIcon, VL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL = { "UL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCanvasIcon, UL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCanvasIcon, V), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "UV coords" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCanvasIcon, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Source texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCanvasIcon, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanvasIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CanvasIcon",
		sizeof(FCanvasIcon),
		alignof(FCanvasIcon),
		Z_Construct_UScriptStruct_FCanvasIcon_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCanvasIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CanvasIcon"), sizeof(FCanvasIcon), Get_Z_Construct_UScriptStruct_FCanvasIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCanvasIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCanvasIcon_Hash() { return 979307091U; }
	void UCanvas::StaticRegisterNativesUCanvas()
	{
		UClass* Class = UCanvas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_Deproject", &UCanvas::execK2_Deproject },
			{ "K2_DrawBorder", &UCanvas::execK2_DrawBorder },
			{ "K2_DrawBox", &UCanvas::execK2_DrawBox },
			{ "K2_DrawLine", &UCanvas::execK2_DrawLine },
			{ "K2_DrawMaterial", &UCanvas::execK2_DrawMaterial },
			{ "K2_DrawMaterialTriangle", &UCanvas::execK2_DrawMaterialTriangle },
			{ "K2_DrawPolygon", &UCanvas::execK2_DrawPolygon },
			{ "K2_DrawText", &UCanvas::execK2_DrawText },
			{ "K2_DrawTexture", &UCanvas::execK2_DrawTexture },
			{ "K2_DrawTriangle", &UCanvas::execK2_DrawTriangle },
			{ "K2_Project", &UCanvas::execK2_Project },
			{ "K2_StrLen", &UCanvas::execK2_StrLen },
			{ "K2_TextSize", &UCanvas::execK2_TextSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvas_K2_Deproject_Statics
	{
		struct Canvas_eventK2_Deproject_Parms
		{
			FVector2D ScreenPosition;
			FVector WorldOrigin;
			FVector WorldDirection;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_ScreenPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "DisplayName", "Deproject" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "Deproject" },
		{ "ToolTip", "Performs a deprojection of a screen space coordinate using the projection matrix set up for the Canvas.\n\n@param ScreenPosition                        Screen space position to deproject to the World.\n@param WorldOrigin                           Vector which is the world position of the screen space position.\n@param WorldDirection                        Vector which can be used in a trace to determine what is \"behind\" the screen space position. Useful for object picking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_Deproject", sizeof(Canvas_eventK2_Deproject_Parms), Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_Deproject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics
	{
		struct Canvas_eventK2_DrawBorder_Parms
		{
			UTexture* BorderTexture;
			UTexture* BackgroundTexture;
			UTexture* LeftBorderTexture;
			UTexture* RightBorderTexture;
			UTexture* TopBorderTexture;
			UTexture* BottomBorderTexture;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			FLinearColor RenderColor;
			FVector2D BorderScale;
			FVector2D BackgroundScale;
			float Rotation;
			FVector2D PivotPoint;
			FVector2D CornerSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomBorderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopBorderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightBorderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftBorderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BorderTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CornerSize = { "CornerSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CornerSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundScale = { "BackgroundScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BackgroundScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderScale = { "BorderScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BorderScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinateSize = { "CoordinateSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinatePosition = { "CoordinatePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BottomBorderTexture = { "BottomBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BottomBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_TopBorderTexture = { "TopBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, TopBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RightBorderTexture = { "RightBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, RightBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_LeftBorderTexture = { "LeftBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, LeftBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BackgroundTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderTexture = { "BorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CornerSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinateSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinatePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BottomBorderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_TopBorderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RightBorderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_LeftBorderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_BackgroundScale", "(X=0.100,Y=0.100)" },
		{ "CPP_Default_BorderScale", "(X=0.100,Y=0.100)" },
		{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_CornerSize", "" },
		{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "DisplayName", "Draw Border" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawBorder" },
		{ "ToolTip", "Draws a 3x3 grid border with tiled frame and tiled interior on the Canvas.\n\n@param BorderTexture                         Texture to use for border.\n@param BackgroundTexture                     Texture to use for border background.\n@param LeftBorderTexture                     Texture to use for the tiling left border.\n@param RightBorderTexture            Texture to use for the tiling right border.\n@param TopBorderTexture                      Texture to use for the tiling top border.\n@param BottomBorderTexture           Texture to use for the tiling bottom border.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the border texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the border texture.\n@param RenderColor                           Color to tint the border.\n@param BorderScale                           Scale of the border.\n@param BackgroundScale                       Scale of the background.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture.\n@param CornerSize                            Frame corner size in percent of frame texture (should be < 0.5f)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawBorder", sizeof(Canvas_eventK2_DrawBorder_Parms), Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics
	{
		struct Canvas_eventK2_DrawBox_Parms
		{
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			float Thickness;
			FLinearColor RenderColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_RenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DisplayName", "Draw Box" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawBox" },
		{ "ToolTip", "Draws an unfilled box on the Canvas.\n\n@param ScreenPosition                        Screen space position to render the text.\n@param ScreenSize                            Screen space size to render the texture.\n@param Thickness                                     How many pixels thick the box lines should be." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawBox", sizeof(Canvas_eventK2_DrawBox_Parms), Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics
	{
		struct Canvas_eventK2_DrawLine_Parms
		{
			FVector2D ScreenPositionA;
			FVector2D ScreenPositionB;
			float Thickness;
			FLinearColor RenderColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPositionB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPositionA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionB = { "ScreenPositionB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, ScreenPositionB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionA = { "ScreenPositionA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, ScreenPositionA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_RenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_ScreenPositionA", "" },
		{ "CPP_Default_ScreenPositionB", "" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DisplayName", "Draw Line" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawLine" },
		{ "ToolTip", "Draws a line on the Canvas.\n\n@param ScreenPositionA               Starting position of the line in screen space.\n@param ScreenPositionB               Ending position of the line in screen space.\n@param Thickness                             How many pixels thick this line should be.\n@param RenderColor                   Color to render the line." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawLine", sizeof(Canvas_eventK2_DrawLine_Parms), Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics
	{
		struct Canvas_eventK2_DrawMaterial_Parms
		{
			UMaterialInterface* RenderMaterial;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			float Rotation;
			FVector2D PivotPoint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinateSize = { "CoordinateSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinatePosition = { "CoordinatePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_RenderMaterial = { "RenderMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, RenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinateSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinatePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_RenderMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "DisplayName", "Draw Material" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawMaterial" },
		{ "ToolTip", "Draws a material on the Canvas.\n\n@param RenderMaterial                        Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the texture.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawMaterial", sizeof(Canvas_eventK2_DrawMaterial_Parms), Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics
	{
		struct Canvas_eventK2_DrawMaterialTriangle_Parms
		{
			UMaterialInterface* RenderMaterial;
			TArray<FCanvasUVTri> Triangles;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterialTriangle_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_RenderMaterial = { "RenderMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawMaterialTriangle_Parms, RenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_RenderMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "DisplayName", "Draw Material Triangles" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawMaterialTriangles" },
		{ "ToolTip", "Draws a set of triangles on the Canvas.\n\n@param RenderMaterial                        Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n@param Triangles                                     Triangles to render." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawMaterialTriangle", sizeof(Canvas_eventK2_DrawMaterialTriangle_Parms), Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics
	{
		struct Canvas_eventK2_DrawPolygon_Parms
		{
			UTexture* RenderTexture;
			FVector2D ScreenPosition;
			FVector2D Radius;
			int32 NumberOfSides;
			FLinearColor RenderColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_NumberOfSides = { "NumberOfSides", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, NumberOfSides), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, Radius), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_NumberOfSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_NumberOfSides", "3" },
		{ "CPP_Default_Radius", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "DisplayName", "Draw Polygon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawPolygon" },
		{ "ToolTip", "Draws a polygon on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n@param ScreenPosition                        Screen space position to render the text.\n@param Radius                                        How large in pixels this polygon should be.\n@param NumberOfSides                         How many sides this polygon should have. This should be above or equal to three.\n@param RenderColor                           Color to tint the polygon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawPolygon", sizeof(Canvas_eventK2_DrawPolygon_Parms), Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawText_Statics
	{
		struct Canvas_eventK2_DrawText_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D ScreenPosition;
			FVector2D Scale;
			FLinearColor RenderColor;
			float Kerning;
			FLinearColor ShadowColor;
			FVector2D ShadowOffset;
			bool bCentreX;
			bool bCentreY;
			bool bOutlined;
			FLinearColor OutlineColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
		static void NewProp_bOutlined_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutlined;
		static void NewProp_bCentreY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCentreY;
		static void NewProp_bCentreX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCentreX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Kerning;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined_SetBit(void* Obj)
	{
		((Canvas_eventK2_DrawText_Parms*)Obj)->bOutlined = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined = { "bOutlined", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Canvas_eventK2_DrawText_Parms), &Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY_SetBit(void* Obj)
	{
		((Canvas_eventK2_DrawText_Parms*)Obj)->bCentreY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY = { "bCentreY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Canvas_eventK2_DrawText_Parms), &Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX_SetBit(void* Obj)
	{
		((Canvas_eventK2_DrawText_Parms*)Obj)->bCentreX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX = { "bCentreX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Canvas_eventK2_DrawText_Parms), &Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, Kerning), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText = { "RenderText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderText), METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderFont = { "RenderFont", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_OutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Kerning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderFont,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_bCentreX", "false" },
		{ "CPP_Default_bCentreY", "false" },
		{ "CPP_Default_bOutlined", "false" },
		{ "CPP_Default_Kerning", "0.000000" },
		{ "CPP_Default_OutlineColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_ShadowColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_ShadowOffset", "(X=1.000,Y=1.000)" },
		{ "DisplayName", "Draw Text" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawText" },
		{ "ToolTip", "Draws text on the Canvas.\n\n@param RenderFont                            Font to use when rendering the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to render on the Canvas.\n@param ScreenPosition                        Screen space position to render the text.\n@param RenderColor                           Color to render the text.\n@param Kerning                                       Horizontal spacing adjustment to modify the spacing between each letter.\n@param ShadowColor                           Color to render the shadow of the text.\n@param ShadowOffset                          Pixel offset relative to the screen space position to render the shadow of the text.\n@param bCentreX                                      If true, then interpret the screen space position X coordinate as the center of the rendered text.\n@param bCentreY                                      If true, then interpret the screen space position Y coordinate as the center of the rendered text.\n@param bOutlined                                     If true, then the text should be rendered with an outline.\n@param OutlineColor                          Color to render the outline for the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawText", sizeof(Canvas_eventK2_DrawText_Parms), Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics
	{
		struct Canvas_eventK2_DrawTexture_Parms
		{
			UTexture* RenderTexture;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			FLinearColor RenderColor;
			TEnumAsByte<EBlendMode> BlendMode;
			float Rotation;
			FVector2D PivotPoint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinateSize = { "CoordinateSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinatePosition = { "CoordinatePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinateSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinatePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_BlendMode", "BLEND_Translucent" },
		{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "DisplayName", "Draw Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawTexture" },
		{ "ToolTip", "Draws a texture on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering. If no texture is set then this will use the default white texture.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the texture.\n@param RenderColor                           Color to use when rendering the texture.\n@param BlendMode                                     Blending mode to use when rendering the texture.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawTexture", sizeof(Canvas_eventK2_DrawTexture_Parms), Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics
	{
		struct Canvas_eventK2_DrawTriangle_Parms
		{
			UTexture* RenderTexture;
			TArray<FCanvasUVTri> Triangles;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTriangle_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_DrawTriangle_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_RenderTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "DisplayName", "Draw Triangles" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawTriangles" },
		{ "ToolTip", "Draws a set of triangles on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n@param Triangles                                     Triangles to render." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawTriangle", sizeof(Canvas_eventK2_DrawTriangle_Parms), Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_Project_Statics
	{
		struct Canvas_eventK2_Project_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_Project_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_Project_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_Project_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "DisplayName", "Project" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "Project" },
		{ "ToolTip", "Performs a projection of a world space coordinates using the projection matrix set up for the Canvas.\n\n@param WorldLocation                         World space location to project onto the Canvas rendering plane.\n@return                                                      Returns a vector where X, Y defines a screen space position representing the world space location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_Project", sizeof(Canvas_eventK2_Project_Parms), Z_Construct_UFunction_UCanvas_K2_Project_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_Project_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_StrLen_Statics
	{
		struct Canvas_eventK2_StrLen_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText = { "RenderText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, RenderText), METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderFont = { "RenderFont", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderFont,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "DisplayName", "Wrapped Text Size" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "WrappedTextSize" },
		{ "ToolTip", "Returns the wrapped text size in screen space coordinates.\n\n@param RenderFont                            Font to use when determining the size of the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to determine the size of.\n@return                                                      Returns the screen space size of the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_StrLen", sizeof(Canvas_eventK2_StrLen_Parms), Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_StrLen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_TextSize_Statics
	{
		struct Canvas_eventK2_TextSize_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D Scale;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText = { "RenderText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, RenderText), METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderFont = { "RenderFont", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderFont,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "DisplayName", "Clipped Text Size" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "ClippedTextSize" },
		{ "ToolTip", "Returns the clipped text size in screen space coordinates.\n\n@param RenderFont                            Font to use when determining the size of the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to determine the size of.\n@param Scale                                         Scale of the font to use when determining the size of the text.\n@return                                                      Returns the screen space size of the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_TextSize", sizeof(Canvas_eventK2_TextSize_Parms), Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_TextSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvas_NoRegister()
	{
		return UCanvas::StaticClass();
	}
	struct Z_Construct_UClass_UCanvas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReporterGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReporterGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientTexture0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GradientTexture0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorModulate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorModulate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoSmooth_MetaData[];
#endif
		static void NewProp_bNoSmooth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterY_MetaData[];
#endif
		static void NewProp_bCenterY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterX_MetaData[];
#endif
		static void NewProp_bCenterX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrgY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrgY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrgX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrgX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvas_K2_Deproject, "K2_Deproject" }, // 1067262978
		{ &Z_Construct_UFunction_UCanvas_K2_DrawBorder, "K2_DrawBorder" }, // 1446354445
		{ &Z_Construct_UFunction_UCanvas_K2_DrawBox, "K2_DrawBox" }, // 2226680836
		{ &Z_Construct_UFunction_UCanvas_K2_DrawLine, "K2_DrawLine" }, // 2460122526
		{ &Z_Construct_UFunction_UCanvas_K2_DrawMaterial, "K2_DrawMaterial" }, // 172817197
		{ &Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle, "K2_DrawMaterialTriangle" }, // 1488358624
		{ &Z_Construct_UFunction_UCanvas_K2_DrawPolygon, "K2_DrawPolygon" }, // 4003923911
		{ &Z_Construct_UFunction_UCanvas_K2_DrawText, "K2_DrawText" }, // 3095429007
		{ &Z_Construct_UFunction_UCanvas_K2_DrawTexture, "K2_DrawTexture" }, // 1121114034
		{ &Z_Construct_UFunction_UCanvas_K2_DrawTriangle, "K2_DrawTriangle" }, // 1604352914
		{ &Z_Construct_UFunction_UCanvas_K2_Project, "K2_Project" }, // 1859116346
		{ &Z_Construct_UFunction_UCanvas_K2_StrLen, "K2_StrLen" }, // 1648090374
		{ &Z_Construct_UFunction_UCanvas_K2_TextSize, "K2_TextSize" }, // 112718961
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/Canvas.h" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "A drawing canvas." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Helper class to render 2d graphs on canvas" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph = { "ReporterGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, ReporterGraph), Z_Construct_UClass_UReporterGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Default texture to use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0 = { "GradientTexture0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, GradientTexture0), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture = { "DefaultTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Internal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate = { "ColorModulate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, ColorModulate), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Zero-based actual dimensions X." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, SizeY), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Don't bilinear filter." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, SizeX), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Whether to center the text vertically (about CurY)" },
	};
#endif
	void Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_SetBit(void* Obj)
	{
		((UCanvas*)Obj)->bNoSmooth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth = { "bNoSmooth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCanvas), &Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Whether to center the text horizontally (about CurX)" },
	};
#endif
	void Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_SetBit(void* Obj)
	{
		((UCanvas*)Obj)->bCenterY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY = { "bCenterY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCanvas), &Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Color for drawing." },
	};
#endif
	void Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_SetBit(void* Obj)
	{
		((UCanvas*)Obj)->bCenterX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX = { "bCenterX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCanvas), &Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Bottom right clipping region." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Bottom right clipping region." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY = { "ClipY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, ClipY), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Origin for drawing in Y." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX = { "ClipX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, ClipX), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Origin for drawing in X." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY = { "OrgY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, OrgY), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Modifiable properties." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX = { "OrgX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCanvas, OrgX), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanvas_Statics::ClassParams = {
		&UCanvas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCanvas_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanvas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanvas, 3815581816);
	template<> ENGINE_API UClass* StaticClass<UCanvas>()
	{
		return UCanvas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvas(Z_Construct_UClass_UCanvas, &UCanvas::StaticClass, TEXT("/Script/Engine"), TEXT("UCanvas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

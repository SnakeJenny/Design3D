// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RetainerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetainerBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URetainerBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_GetEffectMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_RequestRender();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_SetEffectMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_SetRenderingPhase();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_SetTextureParameter();
// End Cross Module References
	void URetainerBox::StaticRegisterNativesURetainerBox()
	{
		UClass* Class = URetainerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectMaterial", &URetainerBox::execGetEffectMaterial },
			{ "RequestRender", &URetainerBox::execRequestRender },
			{ "SetEffectMaterial", &URetainerBox::execSetEffectMaterial },
			{ "SetRenderingPhase", &URetainerBox::execSetRenderingPhase },
			{ "SetTextureParameter", &URetainerBox::execSetTextureParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics
	{
		struct RetainerBox_eventGetEffectMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RetainerBox_eventGetEffectMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Get the current dynamic effect material applied to the retainer box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "GetEffectMaterial", sizeof(RetainerBox_eventGetEffectMaterial_Parms), Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_GetEffectMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_RequestRender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Requests the retainer redrawn the contents it has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_RequestRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "RequestRender", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_RequestRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URetainerBox_RequestRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics
	{
		struct RetainerBox_eventSetEffectMaterial_Parms
		{
			UMaterialInterface* EffectMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::NewProp_EffectMaterial = { "EffectMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RetainerBox_eventSetEffectMaterial_Parms, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::NewProp_EffectMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Set a new effect material to the retainer widget." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetEffectMaterial", sizeof(RetainerBox_eventSetEffectMaterial_Parms), Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetEffectMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics
	{
		struct RetainerBox_eventSetRenderingPhase_Parms
		{
			int32 RenderPhase;
			int32 TotalPhases;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPhases;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RenderPhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_TotalPhases = { "TotalPhases", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RetainerBox_eventSetRenderingPhase_Parms, TotalPhases), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_RenderPhase = { "RenderPhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RetainerBox_eventSetRenderingPhase_Parms, RenderPhase), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_TotalPhases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_RenderPhase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Requests the retainer redrawn the contents it has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetRenderingPhase", sizeof(RetainerBox_eventSetRenderingPhase_Parms), Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetRenderingPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics
	{
		struct RetainerBox_eventSetTextureParameter_Parms
		{
			FName TextureParameter;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::NewProp_TextureParameter = { "TextureParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RetainerBox_eventSetTextureParameter_Parms, TextureParameter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::NewProp_TextureParameter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Sets the name of the texture parameter to set the render target to on the material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetTextureParameter", sizeof(RetainerBox_eventSetTextureParameter_Parms), Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URetainerBox_NoRegister()
	{
		return URetainerBox::StaticClass();
	}
	struct Z_Construct_UClass_URetainerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhaseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PhaseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOnPhase_MetaData[];
#endif
		static void NewProp_RenderOnPhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderOnPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOnInvalidation_MetaData[];
#endif
		static void NewProp_RenderOnInvalidation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderOnInvalidation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetainerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URetainerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URetainerBox_GetEffectMaterial, "GetEffectMaterial" }, // 2133162422
		{ &Z_Construct_UFunction_URetainerBox_RequestRender, "RequestRender" }, // 648057840
		{ &Z_Construct_UFunction_URetainerBox_SetEffectMaterial, "SetEffectMaterial" }, // 2920977638
		{ &Z_Construct_UFunction_URetainerBox_SetRenderingPhase, "SetRenderingPhase" }, // 569696129
		{ &Z_Construct_UFunction_URetainerBox_SetTextureParameter, "SetTextureParameter" }, // 1813810220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/RetainerBox.h" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The Retainer Box renders children widgets to a render target first before\nlater rendering that render target to the screen.  This allows both frequency\nand phase to be controlled so that the UI can actually render less often than the\nfrequency of the main game render.  It also has the side benefit of allow materials\nto be applied to the render target after drawing the widgets to apply a simple post process.\n\n* Single Child\n* Caching / Performance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The texture sampler parameter of the @EffectMaterial, that we'll set to the render target." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter = { "TextureParameter", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetainerBox, TextureParameter), METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter_MetaData, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The effect to optionally apply to the render target.  We will set the texture sampler based on the name\nset in the @TextureParameter property.\n\nIf you want to adjust transparency of the final image, make sure you set Blend Mode to AlphaComposite (Pre-Multiplied Alpha)\nand make sure to multiply the alpha you're apply across the surface to the color and the alpha of the render target, otherwise\nyou won't see the expected color." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial = { "EffectMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetainerBox, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount_MetaData[] = {
		{ "Category", "RenderRules" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The PhaseCount controls how many phases are possible know what to modulus the current frame\ncount by to determine if this is the current frame to draw the widget on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount = { "PhaseCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetainerBox, PhaseCount), METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "RenderRules" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The Phase this widget will draw on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetainerBox, Phase), METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase_MetaData, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_MetaData[] = {
		{ "Category", "RenderRules" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Should this widget redraw the contents it has every time the phase occurs." },
	};
#endif
	void Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_SetBit(void* Obj)
	{
		((URetainerBox*)Obj)->RenderOnPhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase = { "RenderOnPhase", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_MetaData, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_MetaData[] = {
		{ "Category", "RenderRules" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Should this widget redraw the contents it has every time it receives an invalidation request\nfrom it's children, similar to the invalidation panel." },
	};
#endif
	void Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_SetBit(void* Obj)
	{
		((URetainerBox*)Obj)->RenderOnInvalidation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation = { "RenderOnInvalidation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_MetaData, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetainerBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetainerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetainerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URetainerBox_Statics::ClassParams = {
		&URetainerBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URetainerBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetainerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URetainerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URetainerBox, 192841562);
	template<> UMG_API UClass* StaticClass<URetainerBox>()
	{
		return URetainerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URetainerBox(Z_Construct_UClass_URetainerBox, &URetainerBox::StaticClass, TEXT("/Script/UMG"), TEXT("URetainerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetainerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

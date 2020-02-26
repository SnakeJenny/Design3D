// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlock() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetAutoWrapText();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetColorAndOpacity();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetJustification();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetShadowOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetStrikeBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetText();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	void UTextBlock::StaticRegisterNativesUTextBlock()
	{
		UClass* Class = UTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicFontMaterial", &UTextBlock::execGetDynamicFontMaterial },
			{ "GetDynamicOutlineMaterial", &UTextBlock::execGetDynamicOutlineMaterial },
			{ "GetText", &UTextBlock::execGetText },
			{ "SetAutoWrapText", &UTextBlock::execSetAutoWrapText },
			{ "SetColorAndOpacity", &UTextBlock::execSetColorAndOpacity },
			{ "SetFont", &UTextBlock::execSetFont },
			{ "SetJustification", &UTextBlock::execSetJustification },
			{ "SetMinDesiredWidth", &UTextBlock::execSetMinDesiredWidth },
			{ "SetOpacity", &UTextBlock::execSetOpacity },
			{ "SetShadowColorAndOpacity", &UTextBlock::execSetShadowColorAndOpacity },
			{ "SetShadowOffset", &UTextBlock::execSetShadowOffset },
			{ "SetStrikeBrush", &UTextBlock::execSetStrikeBrush },
			{ "SetText", &UTextBlock::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics
	{
		struct TextBlock_eventGetDynamicFontMaterial_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventGetDynamicFontMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetDynamicFontMaterial", sizeof(TextBlock_eventGetDynamicFontMaterial_Parms), Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics
	{
		struct TextBlock_eventGetDynamicOutlineMaterial_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventGetDynamicOutlineMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetDynamicOutlineMaterial", sizeof(TextBlock_eventGetDynamicOutlineMaterial_Parms), Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_GetText_Statics
	{
		struct TextBlock_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBlock_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "GetText (Text)" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetText", sizeof(TextBlock_eventGetText_Parms), Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics
	{
		struct TextBlock_eventSetAutoWrapText_Parms
		{
			bool InAutoTextWrap;
		};
		static void NewProp_InAutoTextWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoTextWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit(void* Obj)
	{
		((TextBlock_eventSetAutoWrapText_Parms*)Obj)->InAutoTextWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap = { "InAutoTextWrap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextBlock_eventSetAutoWrapText_Parms), &Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the auto wrap for this text block.\n\n@param InAutoTextWrap to turn wrap on or off." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetAutoWrapText", sizeof(TextBlock_eventSetAutoWrapText_Parms), Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetAutoWrapText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics
	{
		struct TextBlock_eventSetColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity             The new text color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetColorAndOpacity", sizeof(TextBlock_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetFont_Statics
	{
		struct TextBlock_eventSetFont_Parms
		{
			FSlateFontInfo InFontInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetFont_Statics::NewProp_InFontInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Dynamically set the font info for this text block\n\n@param InFontInfo THe new font info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetFont", sizeof(TextBlock_eventSetFont_Parms), Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetJustification_Statics
	{
		struct TextBlock_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> InJustification;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InJustification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextBlock_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetJustification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetJustification_Statics::NewProp_InJustification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetJustification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the text justification for this text block\n\n@param InJustification new justification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetJustification", sizeof(TextBlock_eventSetJustification_Parms), Z_Construct_UFunction_UTextBlock_SetJustification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetJustification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics
	{
		struct TextBlock_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the minimum desired width for this text block\n\n@param InMinDesiredWidth new minimum desired width" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetMinDesiredWidth", sizeof(TextBlock_eventSetMinDesiredWidth_Parms), Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetOpacity_Statics
	{
		struct TextBlock_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::NewProp_InOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetOpacity", sizeof(TextBlock_eventSetOpacity_Parms), Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics
	{
		struct TextBlock_eventSetShadowColorAndOpacity_Parms
		{
			FLinearColor InShadowColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity = { "InShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the text drop shadow\nNote: if opacity is zero no shadow will be drawn\n\n@param InShadowColorAndOpacity               The new drop shadow color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetShadowColorAndOpacity", sizeof(TextBlock_eventSetShadowColorAndOpacity_Parms), Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics
	{
		struct TextBlock_eventSetShadowOffset_Parms
		{
			FVector2D InShadowOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::NewProp_InShadowOffset = { "InShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::NewProp_InShadowOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the offset that the text drop shadow should be drawn at\n\n@param InShadowOffset                The new offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetShadowOffset", sizeof(TextBlock_eventSetShadowOffset_Parms), Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics
	{
		struct TextBlock_eventSetStrikeBrush_Parms
		{
			FSlateBrush InStrikeBrush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStrikeBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::NewProp_InStrikeBrush = { "InStrikeBrush", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetStrikeBrush_Parms, InStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::NewProp_InStrikeBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Dynamically set the strike brush for this text block\n\n@param InStrikeBrush The new brush to use to strike through text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetStrikeBrush", sizeof(TextBlock_eventSetStrikeBrush_Parms), Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetStrikeBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetText_Statics
	{
		struct TextBlock_eventSetText_Parms
		{
			FText InText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBlock_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetText (Text)" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetText", sizeof(TextBlock_eventSetText_Parms), Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextBlock_NoRegister()
	{
		return UTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimpleTextMode_MetaData[];
#endif
		static void NewProp_bSimpleTextMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimpleTextMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoWrapText_MetaData[];
#endif
		static void NewProp_bAutoWrapText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoWrapText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWrapWithInvalidationPanel_MetaData[];
#endif
		static void NewProp_bWrapWithInvalidationPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrapWithInvalidationPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ShadowColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial, "GetDynamicFontMaterial" }, // 3876391288
		{ &Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial, "GetDynamicOutlineMaterial" }, // 2641118936
		{ &Z_Construct_UFunction_UTextBlock_GetText, "GetText" }, // 1841130270
		{ &Z_Construct_UFunction_UTextBlock_SetAutoWrapText, "SetAutoWrapText" }, // 4122119704
		{ &Z_Construct_UFunction_UTextBlock_SetColorAndOpacity, "SetColorAndOpacity" }, // 2384514703
		{ &Z_Construct_UFunction_UTextBlock_SetFont, "SetFont" }, // 3565988526
		{ &Z_Construct_UFunction_UTextBlock_SetJustification, "SetJustification" }, // 2628987299
		{ &Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 775656774
		{ &Z_Construct_UFunction_UTextBlock_SetOpacity, "SetOpacity" }, // 437319245
		{ &Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity, "SetShadowColorAndOpacity" }, // 1582860532
		{ &Z_Construct_UFunction_UTextBlock_SetShadowOffset, "SetShadowOffset" }, // 4226326654
		{ &Z_Construct_UFunction_UTextBlock_SetStrikeBrush, "SetStrikeBrush" }, // 3751374853
		{ &Z_Construct_UFunction_UTextBlock_SetText, "SetText" }, // 656354532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Text" },
		{ "IncludePath", "Components/TextBlock.h" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A simple static text widget.\n\n* No Children\n* Text" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Performance" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "If this is enabled, text shaping, wrapping, justification are disabled in favor of much faster text layout and measurement.\nThis feature is only suitable for \"simple\" text (ie, text containing only numbers or basic ASCII) as it disables the complex text rendering support required for certain languages (such as Arabic and Thai).\nIt is significantly faster for text that can take advantage of it (particularly if that text changes frequently), but shouldn't be used for localized user-facing text." },
	};
#endif
	void Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_SetBit(void* Obj)
	{
		((UTextBlock*)Obj)->bSimpleTextMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode = { "bSimpleTextMode", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bAutoWrapText is deprecated. Please use AutoWrapText instead." },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Whether the text should automatically wrap" },
	};
#endif
	void Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_SetBit(void* Obj)
	{
		((UTextBlock*)Obj)->bAutoWrapText_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText = { "bAutoWrapText", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "If true, it will automatically wrap this text widget with an invalidation panel" },
	};
#endif
	void Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_SetBit(void* Obj)
	{
		((UTextBlock*)Obj)->bWrapWithInvalidationPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel = { "bWrapWithInvalidationPanel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The minimum desired size for the text" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate for the ShadowColorAndOpacity." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate = { "ShadowColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "DisplayName", "Shadow Color" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The color of the shadow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The direction the shadow is cast" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The brush to strike through text with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The font to render the text with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate = { "ColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The color of the text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate = { "TextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text to display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, Text), METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextBlock_Statics::ClassParams = {
		&UTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextBlock_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextBlock, 994159029);
	template<> UMG_API UClass* StaticClass<UTextBlock>()
	{
		return UTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBlock(Z_Construct_UClass_UTextBlock, &UTextBlock::StaticClass, TEXT("/Script/UMG"), TEXT("UTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

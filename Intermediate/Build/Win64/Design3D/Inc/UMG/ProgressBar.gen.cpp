// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ProgressBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressBar() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UProgressBar_SetIsMarquee();
	UMG_API UFunction* Z_Construct_UFunction_UProgressBar_SetPercent();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
// End Cross Module References
	void UProgressBar::StaticRegisterNativesUProgressBar()
	{
		UClass* Class = UProgressBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillColorAndOpacity", &UProgressBar::execSetFillColorAndOpacity },
			{ "SetIsMarquee", &UProgressBar::execSetIsMarquee },
			{ "SetPercent", &UProgressBar::execSetPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics
	{
		struct ProgressBar_eventSetFillColorAndOpacity_Parms
		{
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProgressBar_eventSetFillColorAndOpacity_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the fill color of the progress bar." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetFillColorAndOpacity", sizeof(ProgressBar_eventSetFillColorAndOpacity_Parms), Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics
	{
		struct ProgressBar_eventSetIsMarquee_Parms
		{
			bool InbIsMarquee;
		};
		static void NewProp_InbIsMarquee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsMarquee;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee_SetBit(void* Obj)
	{
		((ProgressBar_eventSetIsMarquee_Parms*)Obj)->InbIsMarquee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee = { "InbIsMarquee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProgressBar_eventSetIsMarquee_Parms), &Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the progress bar to show as a marquee." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetIsMarquee", sizeof(ProgressBar_eventSetIsMarquee_Parms), Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressBar_SetIsMarquee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProgressBar_SetPercent_Statics
	{
		struct ProgressBar_eventSetPercent_Parms
		{
			float InPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProgressBar_SetPercent_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProgressBar_eventSetPercent_Parms, InPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetPercent_Statics::NewProp_InPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the current value of the ProgressBar." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetPercent", sizeof(ProgressBar_eventSetPercent_Parms), Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressBar_SetPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProgressBar_SetPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProgressBar_NoRegister()
	{
		return UProgressBar::StaticClass();
	}
	struct Z_Construct_UClass_UProgressBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_FillColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FillColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PercentDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMarquee_MetaData[];
#endif
		static void NewProp_bIsMarquee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMarquee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarFillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BarFillType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarqueeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarqueeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FillImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProgressBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity, "SetFillColorAndOpacity" }, // 1388420708
		{ &Z_Construct_UFunction_UProgressBar_SetIsMarquee, "SetIsMarquee" }, // 1833792657
		{ &Z_Construct_UFunction_UProgressBar_SetPercent, "SetPercent" }, // 3932509971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ProgressBar.h" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate = { "FillColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, FillColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Fill Color and Opacity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity = { "FillColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, FillColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate = { "PercentDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, PercentDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BorderPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_SetBit(void* Obj)
	{
		((UProgressBar*)Obj)->bIsMarquee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee = { "bIsMarquee", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProgressBar), &Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Defines if this progress bar fills Left to right or right to left" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType = { "BarFillType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BarFillType), Z_Construct_UEnum_Slate_EProgressBarFillType, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Used to determine the fill position of the progress bar ranging 0..1" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, Percent), METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The brush to use as the marquee image" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage = { "MarqueeImage", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, MarqueeImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The brush to use as the fill image" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage = { "FillImage", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, FillImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The brush to use as the background of the progress bar" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BackgroundImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Style used for the progress bar" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The progress bar style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, WidgetStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProgressBar_Statics::ClassParams = {
		&UProgressBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProgressBar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProgressBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProgressBar, 66293714);
	template<> UMG_API UClass* StaticClass<UProgressBar>()
	{
		return UProgressBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressBar(Z_Construct_UClass_UProgressBar, &UProgressBar::StaticClass, TEXT("/Script/UMG"), TEXT("UProgressBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

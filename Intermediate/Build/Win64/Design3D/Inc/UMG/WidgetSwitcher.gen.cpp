// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WidgetSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSwitcher() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex();
// End Cross Module References
	void UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher()
	{
		UClass* Class = UWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveWidget", &UWidgetSwitcher::execGetActiveWidget },
			{ "GetActiveWidgetIndex", &UWidgetSwitcher::execGetActiveWidgetIndex },
			{ "GetNumWidgets", &UWidgetSwitcher::execGetNumWidgets },
			{ "GetWidgetAtIndex", &UWidgetSwitcher::execGetWidgetAtIndex },
			{ "SetActiveWidget", &UWidgetSwitcher::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &UWidgetSwitcher::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics
	{
		struct WidgetSwitcher_eventGetActiveWidget_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get the reference of the currently active widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidget", sizeof(WidgetSwitcher_eventGetActiveWidget_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics
	{
		struct WidgetSwitcher_eventGetActiveWidgetIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the slot index of the currently active widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidgetIndex", sizeof(WidgetSwitcher_eventGetActiveWidgetIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics
	{
		struct WidgetSwitcher_eventGetNumWidgets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetNumWidgets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the number of widgets that this switcher manages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetNumWidgets", sizeof(WidgetSwitcher_eventGetNumWidgets_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics
	{
		struct WidgetSwitcher_eventGetWidgetAtIndex_Parms
		{
			int32 Index;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get a widget at the provided index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetWidgetAtIndex", sizeof(WidgetSwitcher_eventGetWidgetAtIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics
	{
		struct WidgetSwitcher_eventSetActiveWidget_Parms
		{
			UWidget* Widget;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget and makes it the active index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidget", sizeof(WidgetSwitcher_eventSetActiveWidget_Parms), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics
	{
		struct WidgetSwitcher_eventSetActiveWidgetIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget at the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidgetIndex", sizeof(WidgetSwitcher_eventSetActiveWidgetIndex_Parms), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister()
	{
		return UWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget, "GetActiveWidget" }, // 3247121248
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 275332456
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets, "GetNumWidgets" }, // 2666271693
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 3316356644
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget, "SetActiveWidget" }, // 3634123353
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 3307980750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/WidgetSwitcher.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "A widget switcher is like a tab control, but without tabs. At most one widget is visible at time." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "Category", "Switcher" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "The slot index to display" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex = { "ActiveWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetSwitcher, ActiveWidgetIndex), METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSwitcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams = {
		&UWidgetSwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetSwitcher, 73557988);
	template<> UMG_API UClass* StaticClass<UWidgetSwitcher>()
	{
		return UWidgetSwitcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetSwitcher(Z_Construct_UClass_UWidgetSwitcher, &UWidgetSwitcher::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

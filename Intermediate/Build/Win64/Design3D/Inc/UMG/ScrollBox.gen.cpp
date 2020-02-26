// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnUserScrolledEvent_Parms
		{
			float CurrentOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::NewProp_CurrentOffset = { "CurrentOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnUserScrolledEvent_Parms, CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::NewProp_CurrentOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnUserScrolledEvent__DelegateSignature", sizeof(_Script_UMG_eventOnUserScrolledEvent_Parms), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UScrollBox::StaticRegisterNativesUScrollBox()
	{
		UClass* Class = UScrollBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScrollOffset", &UScrollBox::execGetScrollOffset },
			{ "GetViewOffsetFraction", &UScrollBox::execGetViewOffsetFraction },
			{ "ScrollToEnd", &UScrollBox::execScrollToEnd },
			{ "ScrollToStart", &UScrollBox::execScrollToStart },
			{ "ScrollWidgetIntoView", &UScrollBox::execScrollWidgetIntoView },
			{ "SetAllowOverscroll", &UScrollBox::execSetAllowOverscroll },
			{ "SetAlwaysShowScrollbar", &UScrollBox::execSetAlwaysShowScrollbar },
			{ "SetConsumeMouseWheel", &UScrollBox::execSetConsumeMouseWheel },
			{ "SetOrientation", &UScrollBox::execSetOrientation },
			{ "SetScrollbarThickness", &UScrollBox::execSetScrollbarThickness },
			{ "SetScrollBarVisibility", &UScrollBox::execSetScrollBarVisibility },
			{ "SetScrollOffset", &UScrollBox::execSetScrollOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics
	{
		struct ScrollBox_eventGetScrollOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventGetScrollOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Gets the scroll offset of the scrollbox in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "GetScrollOffset", sizeof(ScrollBox_eventGetScrollOffset_Parms), Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics
	{
		struct ScrollBox_eventGetViewOffsetFraction_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventGetViewOffsetFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "GetViewOffsetFraction", sizeof(ScrollBox_eventGetViewOffsetFraction_Parms), Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the bottom instantly during the next layout pass." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "ScrollToEnd", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the top instantly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "ScrollToStart", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics
	{
		struct ScrollBox_eventScrollWidgetIntoView_Parms
		{
			UWidget* WidgetToFind;
			bool AnimateScroll;
			EDescendantScrollDestination ScrollDestination;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollDestination_Underlying;
		static void NewProp_AnimateScroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AnimateScroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetToFind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination = { "ScrollDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, ScrollDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll_SetBit(void* Obj)
	{
		((ScrollBox_eventScrollWidgetIntoView_Parms*)Obj)->AnimateScroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll = { "AnimateScroll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind = { "WidgetToFind", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, WidgetToFind), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "CPP_Default_AnimateScroll", "true" },
		{ "CPP_Default_ScrollDestination", "IntoView" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the widget during the next layout pass." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "ScrollWidgetIntoView", sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics
	{
		struct ScrollBox_eventSetAllowOverscroll_Parms
		{
			bool NewAllowOverscroll;
		};
		static void NewProp_NewAllowOverscroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAllowOverscroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAllowOverscroll_Parms*)Obj)->NewAllowOverscroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll = { "NewAllowOverscroll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventSetAllowOverscroll_Parms), &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetAllowOverscroll", sizeof(ScrollBox_eventSetAllowOverscroll_Parms), Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics
	{
		struct ScrollBox_eventSetAlwaysShowScrollbar_Parms
		{
			bool NewAlwaysShowScrollbar;
		};
		static void NewProp_NewAlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAlwaysShowScrollbar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAlwaysShowScrollbar_Parms*)Obj)->NewAlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar = { "NewAlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetAlwaysShowScrollbar", sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics
	{
		struct ScrollBox_eventSetConsumeMouseWheel_Parms
		{
			EConsumeMouseWheel NewConsumeMouseWheel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewConsumeMouseWheel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewConsumeMouseWheel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel = { "NewConsumeMouseWheel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetConsumeMouseWheel_Parms, NewConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::NewProp_NewConsumeMouseWheel_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetConsumeMouseWheel", sizeof(ScrollBox_eventSetConsumeMouseWheel_Parms), Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetOrientation_Statics
	{
		struct ScrollBox_eventSetOrientation_Parms
		{
			TEnumAsByte<EOrientation> NewOrientation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::NewProp_NewOrientation = { "NewOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetOrientation_Parms, NewOrientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::NewProp_NewOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetOrientation", sizeof(ScrollBox_eventSetOrientation_Parms), Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics
	{
		struct ScrollBox_eventSetScrollbarThickness_Parms
		{
			FVector2D NewScrollbarThickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewScrollbarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScrollbarThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness = { "NewScrollbarThickness", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollbarThickness_Parms, NewScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollbarThickness", sizeof(ScrollBox_eventSetScrollbarThickness_Parms), Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics
	{
		struct ScrollBox_eventSetScrollBarVisibility_Parms
		{
			ESlateVisibility NewScrollBarVisibility;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewScrollBarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewScrollBarVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility = { "NewScrollBarVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollBarVisibility_Parms, NewScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollBarVisibility", sizeof(ScrollBox_eventSetScrollBarVisibility_Parms), Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics
	{
		struct ScrollBox_eventSetScrollOffset_Parms
		{
			float NewScrollOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScrollOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::NewProp_NewScrollOffset = { "NewScrollOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBox_eventSetScrollOffset_Parms, NewScrollOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::NewProp_NewScrollOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Updates the scroll offset of the scrollbox.\n@param NewScrollOffset is in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, nullptr, "SetScrollOffset", sizeof(ScrollBox_eventSetScrollOffset_Parms), Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBox_NoRegister()
	{
		return UScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserScrolled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserScrolled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRightClickDragScrolling_MetaData[];
#endif
		static void NewProp_bAllowRightClickDragScrolling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRightClickDragScrolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationScrollPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigationScrollPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationDestination_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowOverscroll_MetaData[];
#endif
		static void NewProp_AllowOverscroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverscroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysShowScrollbarTrack_MetaData[];
#endif
		static void NewProp_AlwaysShowScrollbarTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysShowScrollbarTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysShowScrollbar_MetaData[];
#endif
		static void NewProp_AlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysShowScrollbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollbarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollbarThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollBarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollBarVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetBarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetBarStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScrollBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScrollBox_GetScrollOffset, "GetScrollOffset" }, // 3053395018
		{ &Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction, "GetViewOffsetFraction" }, // 1953707966
		{ &Z_Construct_UFunction_UScrollBox_ScrollToEnd, "ScrollToEnd" }, // 404939239
		{ &Z_Construct_UFunction_UScrollBox_ScrollToStart, "ScrollToStart" }, // 2535441865
		{ &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView, "ScrollWidgetIntoView" }, // 2471784411
		{ &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll, "SetAllowOverscroll" }, // 1460312918
		{ &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar, "SetAlwaysShowScrollbar" }, // 3245146999
		{ &Z_Construct_UFunction_UScrollBox_SetConsumeMouseWheel, "SetConsumeMouseWheel" }, // 422955926
		{ &Z_Construct_UFunction_UScrollBox_SetOrientation, "SetOrientation" }, // 1190212160
		{ &Z_Construct_UFunction_UScrollBox_SetScrollbarThickness, "SetScrollbarThickness" }, // 1570703799
		{ &Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility, "SetScrollBarVisibility" }, // 1977407671
		{ &Z_Construct_UFunction_UScrollBox_SetScrollOffset, "SetScrollOffset" }, // 2442767464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ScrollBox.h" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Called when the scroll has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled = { "OnUserScrolled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, OnUserScrolled), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Option to disable right-click-drag scrolling" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->bAllowRightClickDragScrolling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling = { "bAllowRightClickDragScrolling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The amount of padding to ensure exists between the item being navigated to, at the edge of the\nscrollbox.  Use this if you want to ensure there's a preview of the next item the user could scroll to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding = { "NavigationScrollPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, NavigationScrollPadding), METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination = { "NavigationDestination", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, NavigationDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Disable to stop scrollbars from activating inertial overscrolling" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AllowOverscroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll = { "AllowOverscroll", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AlwaysShowScrollbarTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack = { "AlwaysShowScrollbarTrack", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar = { "AlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness = { "ScrollbarThickness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "When mouse wheel events should be consumed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel = { "ConsumeMouseWheel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Visibility" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility = { "ScrollBarVisibility", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, ScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The orientation of the scrolling and stacking in the box." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle = { "BarStyle", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, BarStyle_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Bar Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The bar style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle = { "WidgetBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, WidgetBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBox, WidgetStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbarTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScrollBox_Statics::ClassParams = {
		&UScrollBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScrollBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScrollBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBox, 170852066);
	template<> UMG_API UClass* StaticClass<UScrollBox>()
	{
		return UScrollBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBox(Z_Construct_UClass_UScrollBox, &UScrollBox::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

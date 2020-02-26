// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/MultiLineEditableText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableText() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetText();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "OnMultiLineEditableTextCommittedEvent__DelegateSignature", sizeof(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "OnMultiLineEditableTextChangedEvent__DelegateSignature", sizeof(MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMultiLineEditableText::StaticRegisterNativesUMultiLineEditableText()
	{
		UClass* Class = UMultiLineEditableText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UMultiLineEditableText::execGetText },
			{ "SetIsReadOnly", &UMultiLineEditableText::execSetIsReadOnly },
			{ "SetText", &UMultiLineEditableText::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics
	{
		struct MultiLineEditableText_eventGetText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "GetText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "GetText", sizeof(MultiLineEditableText_eventGetText_Parms), Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics
	{
		struct MultiLineEditableText_eventSetIsReadOnly_Parms
		{
			bool bReadOnly;
		};
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((MultiLineEditableText_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiLineEditableText_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetIsReadOnly (Multi-Line Editable Text" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetIsReadOnly", sizeof(MultiLineEditableText_eventSetIsReadOnly_Parms), Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics
	{
		struct MultiLineEditableText_eventSetText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetText", sizeof(MultiLineEditableText_eventSetText_Parms), Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister()
	{
		return UMultiLineEditableText::StaticClass();
	}
	struct Z_Construct_UClass_UMultiLineEditableText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[];
#endif
		static void NewProp_AllowContextMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[];
#endif
		static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[];
#endif
		static void NewProp_RevertTextOnEscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearTextSelectionOnFocusLoss_MetaData[];
#endif
		static void NewProp_ClearTextSelectionOnFocusLoss_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearTextSelectionOnFocusLoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[];
#endif
		static void NewProp_SelectAllTextWhenFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HintText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiLineEditableText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiLineEditableText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiLineEditableText_GetText, "GetText" }, // 1519470089
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, "OnMultiLineEditableTextChangedEvent__DelegateSignature" }, // 1801025903
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, "OnMultiLineEditableTextCommittedEvent__DelegateSignature" }, // 592624403
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 2869779090
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetText, "SetText" }, // 2572638175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Editable Text (Multi-Line)" },
		{ "IncludePath", "Components/MultiLineEditableText.h" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Editable text box widget" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "DisplayName", "OnTextCommitted (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "DisplayName", "OnTextChanged (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Called whenever the text is changed interactively by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Additional options for the virtual keyboard" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->AllowContextMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->ClearKeyboardFocusOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->RevertTextOnEscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape = { "RevertTextOnEscape", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to clear text selection when focus is lost" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->ClearTextSelectionOnFocusLoss = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss = { "ClearTextSelectionOnFocusLoss", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->SelectAllTextWhenFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused = { "SelectAllTextWhenFocused", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Font color and opacity (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Sets whether this text block can be modified interactively by the user" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->bIsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, WidgetStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, HintText), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, Text), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiLineEditableText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiLineEditableText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiLineEditableText_Statics::ClassParams = {
		&UMultiLineEditableText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiLineEditableText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiLineEditableText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiLineEditableText, 2052335430);
	template<> UMG_API UClass* StaticClass<UMultiLineEditableText>()
	{
		return UMultiLineEditableText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiLineEditableText(Z_Construct_UClass_UMultiLineEditableText, &UMultiLineEditableText::StaticClass, TEXT("/Script/UMG"), TEXT("UMultiLineEditableText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

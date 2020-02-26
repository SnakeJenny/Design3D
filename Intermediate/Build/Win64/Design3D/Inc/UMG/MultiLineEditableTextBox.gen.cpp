// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/MultiLineEditableTextBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableTextBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetError();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature", sizeof(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature", sizeof(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMultiLineEditableTextBox::StaticRegisterNativesUMultiLineEditableTextBox()
	{
		UClass* Class = UMultiLineEditableTextBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UMultiLineEditableTextBox::execGetText },
			{ "SetError", &UMultiLineEditableTextBox::execSetError },
			{ "SetIsReadOnly", &UMultiLineEditableTextBox::execSetIsReadOnly },
			{ "SetText", &UMultiLineEditableTextBox::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics
	{
		struct MultiLineEditableTextBox_eventGetText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "GetText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "GetText", sizeof(MultiLineEditableTextBox_eventGetText_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics
	{
		struct MultiLineEditableTextBox_eventSetError_Parms
		{
			FText InError;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::NewProp_InError = { "InError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetError_Parms, InError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::NewProp_InError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetError (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetError", sizeof(MultiLineEditableTextBox_eventSetError_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics
	{
		struct MultiLineEditableTextBox_eventSetIsReadOnly_Parms
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
	void Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((MultiLineEditableTextBox_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiLineEditableTextBox_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetIsReadOnly (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetIsReadOnly", sizeof(MultiLineEditableTextBox_eventSetIsReadOnly_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics
	{
		struct MultiLineEditableTextBox_eventSetText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetText", sizeof(MultiLineEditableTextBox_eventSetText_Parms), Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister()
	{
		return UMultiLineEditableTextBox::StaticClass();
	}
	struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadOnlyForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle;
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
	UObject* (*const Z_Construct_UClass_UMultiLineEditableTextBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiLineEditableTextBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_GetText, "GetText" }, // 3341471092
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature" }, // 626473171
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature" }, // 537899069
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetError, "SetError" }, // 2584409501
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly, "SetIsReadOnly" }, // 3687344070
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetText, "SetText" }, // 3502455836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Text Box (Multi-Line)" },
		{ "IncludePath", "Components/MultiLineEditableTextBox.h" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Allows a user to enter multiple lines of text" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "DisplayName", "OnTextCommitted (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "DisplayName", "OnTextChanged (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is changed interactively by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ReadOnlyForegroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Text color and opacity when read-only (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ReadOnlyForegroundColor = { "ReadOnlyForegroundColor", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, ReadOnlyForegroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ReadOnlyForegroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ReadOnlyForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The color of the background/border around the editable text (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, BackgroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Text color and opacity (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, ForegroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ForegroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Font color and opacity (overrides Style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Additional options to be used by the virtual keyboard summoned from this widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
	{
		((UMultiLineEditableTextBox*)Obj)->AllowContextMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Sets whether this text block can be modified interactively by the user" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UMultiLineEditableTextBox*)Obj)->bIsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The text style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, HintText), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, Text), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ReadOnlyForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_ForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiLineEditableTextBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiLineEditableTextBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::ClassParams = {
		&UMultiLineEditableTextBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiLineEditableTextBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiLineEditableTextBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiLineEditableTextBox, 805391290);
	template<> UMG_API UClass* StaticClass<UMultiLineEditableTextBox>()
	{
		return UMultiLineEditableTextBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiLineEditableTextBox(Z_Construct_UClass_UMultiLineEditableTextBox, &UMultiLineEditableTextBox::StaticClass, TEXT("/Script/UMG"), TEXT("UMultiLineEditableTextBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableTextBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

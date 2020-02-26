// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/InputKeySelector.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeySelector() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetSelectedKey();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "OnIsSelectingKeyChanged__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics
	{
		struct InputKeySelector_eventOnKeySelected_Parms
		{
			FInputChord SelectedKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputKeySelector_eventOnKeySelected_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::NewProp_SelectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "OnKeySelected__DelegateSignature", sizeof(InputKeySelector_eventOnKeySelected_Parms), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UInputKeySelector::StaticRegisterNativesUInputKeySelector()
	{
		UClass* Class = UInputKeySelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSelectingKey", &UInputKeySelector::execGetIsSelectingKey },
			{ "SetAllowGamepadKeys", &UInputKeySelector::execSetAllowGamepadKeys },
			{ "SetAllowModifierKeys", &UInputKeySelector::execSetAllowModifierKeys },
			{ "SetEscapeKeys", &UInputKeySelector::execSetEscapeKeys },
			{ "SetKeySelectionText", &UInputKeySelector::execSetKeySelectionText },
			{ "SetNoKeySpecifiedText", &UInputKeySelector::execSetNoKeySpecifiedText },
			{ "SetSelectedKey", &UInputKeySelector::execSetSelectedKey },
			{ "SetTextBlockVisibility", &UInputKeySelector::execSetTextBlockVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics
	{
		struct InputKeySelector_eventGetIsSelectingKey_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputKeySelector_eventGetIsSelectingKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputKeySelector_eventGetIsSelectingKey_Parms), &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Returns true if the widget is currently selecting a key, otherwise returns false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "GetIsSelectingKey", sizeof(InputKeySelector_eventGetIsSelectingKey_Parms), Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics
	{
		struct InputKeySelector_eventSetAllowGamepadKeys_Parms
		{
			bool bInAllowGamepadKeys;
		};
		static void NewProp_bInAllowGamepadKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowGamepadKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys_SetBit(void* Obj)
	{
		((InputKeySelector_eventSetAllowGamepadKeys_Parms*)Obj)->bInAllowGamepadKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys = { "bInAllowGamepadKeys", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputKeySelector_eventSetAllowGamepadKeys_Parms), &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets whether or not gamepad keys are allowed in the selected key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetAllowGamepadKeys", sizeof(InputKeySelector_eventSetAllowGamepadKeys_Parms), Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics
	{
		struct InputKeySelector_eventSetAllowModifierKeys_Parms
		{
			bool bInAllowModifierKeys;
		};
		static void NewProp_bInAllowModifierKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowModifierKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys_SetBit(void* Obj)
	{
		((InputKeySelector_eventSetAllowModifierKeys_Parms*)Obj)->bInAllowModifierKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys = { "bInAllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputKeySelector_eventSetAllowModifierKeys_Parms), &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets whether or not modifier keys are allowed in the selected key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetAllowModifierKeys", sizeof(InputKeySelector_eventSetAllowModifierKeys_Parms), Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics
	{
		struct InputKeySelector_eventSetEscapeKeys_Parms
		{
			TArray<FKey> InKeys;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputKeySelector_eventSetEscapeKeys_Parms, InKeys), METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets escape keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetEscapeKeys", sizeof(InputKeySelector_eventSetEscapeKeys_Parms), Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics
	{
		struct InputKeySelector_eventSetKeySelectionText_Parms
		{
			FText InKeySelectionText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InKeySelectionText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::NewProp_InKeySelectionText = { "InKeySelectionText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputKeySelector_eventSetKeySelectionText_Parms, InKeySelectionText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::NewProp_InKeySelectionText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text which is displayed while selecting keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetKeySelectionText", sizeof(InputKeySelector_eventSetKeySelectionText_Parms), Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics
	{
		struct InputKeySelector_eventSetNoKeySpecifiedText_Parms
		{
			FText InNoKeySpecifiedText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InNoKeySpecifiedText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::NewProp_InNoKeySpecifiedText = { "InNoKeySpecifiedText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputKeySelector_eventSetNoKeySpecifiedText_Parms, InNoKeySpecifiedText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::NewProp_InNoKeySpecifiedText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetNoKeySpecifiedText", sizeof(InputKeySelector_eventSetNoKeySpecifiedText_Parms), Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics
	{
		struct InputKeySelector_eventSetSelectedKey_Parms
		{
			FInputChord InSelectedKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSelectedKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey = { "InSelectedKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputKeySelector_eventSetSelectedKey_Parms, InSelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the currently selected key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetSelectedKey", sizeof(InputKeySelector_eventSetSelectedKey_Parms), Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetSelectedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics
	{
		struct InputKeySelector_eventSetTextBlockVisibility_Parms
		{
			ESlateVisibility InVisibility;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputKeySelector_eventSetTextBlockVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the visibility of the text block." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetTextBlockVisibility", sizeof(InputKeySelector_eventSetTextBlockVisibility_Parms), Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputKeySelector_NoRegister()
	{
		return UInputKeySelector::StaticClass();
	}
	struct Z_Construct_UClass_UInputKeySelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsSelectingKeyChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsSelectingKeyChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeySelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EscapeKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EscapeKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowGamepadKeys_MetaData[];
#endif
		static void NewProp_bAllowGamepadKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowGamepadKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowModifierKeys_MetaData[];
#endif
		static void NewProp_bAllowModifierKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowModifierKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoKeySpecifiedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NoKeySpecifiedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeySelectionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KeySelectionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputKeySelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputKeySelector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey, "GetIsSelectingKey" }, // 1196258600
		{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, "OnIsSelectingKeyChanged__DelegateSignature" }, // 3206730294
		{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, "OnKeySelected__DelegateSignature" }, // 1766521810
		{ &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys, "SetAllowGamepadKeys" }, // 512139829
		{ &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys, "SetAllowModifierKeys" }, // 993705075
		{ &Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys, "SetEscapeKeys" }, // 1960190393
		{ &Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText, "SetKeySelectionText" }, // 2796338588
		{ &Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText, "SetNoKeySpecifiedText" }, // 1076000052
		{ &Z_Construct_UFunction_UInputKeySelector_SetSelectedKey, "SetSelectedKey" }, // 3421449693
		{ &Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility, "SetTextBlockVisibility" }, // 885974275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/InputKeySelector.h" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A widget for selecting a single key or a single key with a modifier." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Called whenever the key selection mode starts or stops." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged = { "OnIsSelectingKeyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, OnIsSelectingKeyChanged), Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Called whenever a new key is selected by the user." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected = { "OnKeySelected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, OnKeySelected), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_MetaData[] = {
		{ "Category", "Key Selection" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys = { "EscapeKeys", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, EscapeKeys), METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_Inner = { "EscapeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_MetaData[] = {
		{ "Category", "Key Selection" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
	};
#endif
	void Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_SetBit(void* Obj)
	{
		((UInputKeySelector*)Obj)->bAllowGamepadKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys = { "bAllowGamepadKeys", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputKeySelector), &Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_MetaData[] = {
		{ "Category", "Key Selection" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "input chord representing the selected key, if false modifier keys are ignored." },
	};
#endif
	void Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_SetBit(void* Obj)
	{
		((UInputKeySelector*)Obj)->bAllowModifierKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys = { "bAllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputKeySelector), &Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText = { "NoKeySpecifiedText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, NoKeySpecifiedText), METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text which is displayed while selecting keys." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText = { "KeySelectionText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, KeySelectionText), METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, ColorAndOpacity_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The amount of blank space around the text used to display the currently selected key." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey_MetaData[] = {
		{ "Category", "Key Selection" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The currently selected key chord." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeySelector, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputKeySelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputKeySelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputKeySelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputKeySelector_Statics::ClassParams = {
		&UInputKeySelector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputKeySelector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputKeySelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputKeySelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputKeySelector, 2404315961);
	template<> UMG_API UClass* StaticClass<UInputKeySelector>()
	{
		return UInputKeySelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputKeySelector(Z_Construct_UClass_UInputKeySelector, &UInputKeySelector::StaticClass, TEXT("/Script/UMG"), TEXT("UInputKeySelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeySelector);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInputKeySelector)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

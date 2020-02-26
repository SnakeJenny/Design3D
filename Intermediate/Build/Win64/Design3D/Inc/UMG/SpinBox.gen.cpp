// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SpinBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_USpinBox();
	UMG_API UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_ClearMaxSliderValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_ClearMaxValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_ClearMinSliderValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_ClearMinValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_GetMaxSliderValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_GetMaxValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_GetMinSliderValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_GetMinValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_GetValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_SetForegroundColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_SetMaxSliderValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_SetMaxValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_SetMinSliderValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_SetMinValue();
	UMG_API UFunction* Z_Construct_UFunction_USpinBox_SetValue();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "OnSpinBoxBeginSliderMovement__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics
	{
		struct SpinBox_eventOnSpinBoxValueCommittedEvent_Parms
		{
			float InValue;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventOnSpinBoxValueCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventOnSpinBoxValueCommittedEvent_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "OnSpinBoxValueCommittedEvent__DelegateSignature", sizeof(SpinBox_eventOnSpinBoxValueCommittedEvent_Parms), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics
	{
		struct SpinBox_eventOnSpinBoxValueChangedEvent_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventOnSpinBoxValueChangedEvent_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "OnSpinBoxValueChangedEvent__DelegateSignature", sizeof(SpinBox_eventOnSpinBoxValueChangedEvent_Parms), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USpinBox::StaticRegisterNativesUSpinBox()
	{
		UClass* Class = USpinBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMaxSliderValue", &USpinBox::execClearMaxSliderValue },
			{ "ClearMaxValue", &USpinBox::execClearMaxValue },
			{ "ClearMinSliderValue", &USpinBox::execClearMinSliderValue },
			{ "ClearMinValue", &USpinBox::execClearMinValue },
			{ "GetMaxSliderValue", &USpinBox::execGetMaxSliderValue },
			{ "GetMaxValue", &USpinBox::execGetMaxValue },
			{ "GetMinSliderValue", &USpinBox::execGetMinSliderValue },
			{ "GetMinValue", &USpinBox::execGetMinValue },
			{ "GetValue", &USpinBox::execGetValue },
			{ "SetForegroundColor", &USpinBox::execSetForegroundColor },
			{ "SetMaxSliderValue", &USpinBox::execSetMaxSliderValue },
			{ "SetMaxValue", &USpinBox::execSetMaxValue },
			{ "SetMinSliderValue", &USpinBox::execSetMinSliderValue },
			{ "SetMinValue", &USpinBox::execSetMinValue },
			{ "SetValue", &USpinBox::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the maximum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMaxSliderValue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_ClearMaxSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the maximum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMaxValue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_ClearMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the minimum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMinSliderValue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_ClearMinSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_ClearMinValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the minimum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMinValue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_ClearMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics
	{
		struct SpinBox_eventGetMaxSliderValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventGetMaxSliderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current maximum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMaxSliderValue", sizeof(SpinBox_eventGetMaxSliderValue_Parms), Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_GetMaxSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_GetMaxValue_Statics
	{
		struct SpinBox_eventGetMaxValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventGetMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current maximum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMaxValue", sizeof(SpinBox_eventGetMaxValue_Parms), Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_GetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics
	{
		struct SpinBox_eventGetMinSliderValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventGetMinSliderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current minimum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMinSliderValue", sizeof(SpinBox_eventGetMinSliderValue_Parms), Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_GetMinSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_GetMinValue_Statics
	{
		struct SpinBox_eventGetMinValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventGetMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMinValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_GetMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current minimum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMinValue", sizeof(SpinBox_eventGetMinValue_Parms), Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_GetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_GetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_GetValue_Statics
	{
		struct SpinBox_eventGetValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current value of the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetValue", sizeof(SpinBox_eventGetValue_Parms), Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics
	{
		struct SpinBox_eventSetForegroundColor_Parms
		{
			FSlateColor InForegroundColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InForegroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::NewProp_InForegroundColor = { "InForegroundColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventSetForegroundColor_Parms, InForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::NewProp_InForegroundColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetForegroundColor", sizeof(SpinBox_eventSetForegroundColor_Parms), Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_SetForegroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics
	{
		struct SpinBox_eventSetMaxSliderValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventSetMaxSliderValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the maximum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMaxSliderValue", sizeof(SpinBox_eventSetMaxSliderValue_Parms), Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_SetMaxSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_SetMaxValue_Statics
	{
		struct SpinBox_eventSetMaxValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventSetMaxValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the maximum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMaxValue", sizeof(SpinBox_eventSetMaxValue_Parms), Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_SetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics
	{
		struct SpinBox_eventSetMinSliderValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventSetMinSliderValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the minimum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMinSliderValue", sizeof(SpinBox_eventSetMinSliderValue_Parms), Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_SetMinSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_SetMinValue_Statics
	{
		struct SpinBox_eventSetMinValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMinValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventSetMinValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMinValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_SetMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the minimum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMinValue", sizeof(SpinBox_eventSetMinValue_Parms), Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_SetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_SetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinBox_SetValue_Statics
	{
		struct SpinBox_eventSetValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinBox_eventSetValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinBox_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the value of the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetValue", sizeof(SpinBox_eventSetValue_Parms), Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinBox_SetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinBox_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinBox_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpinBox_NoRegister()
	{
		return USpinBox::StaticClass();
	}
	struct Z_Construct_UClass_USpinBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxSliderValue_MetaData[];
#endif
		static void NewProp_bOverride_MaxSliderValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinSliderValue_MetaData[];
#endif
		static void NewProp_bOverride_MinSliderValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxValue_MetaData[];
#endif
		static void NewProp_bOverride_MaxValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinValue_MetaData[];
#endif
		static void NewProp_bOverride_MinValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndSliderMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndSliderMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginSliderMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginSliderMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueCommitted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueCommitted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[];
#endif
		static void NewProp_SelectAllTextOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[];
#endif
		static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpinBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpinBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpinBox_ClearMaxSliderValue, "ClearMaxSliderValue" }, // 766907003
		{ &Z_Construct_UFunction_USpinBox_ClearMaxValue, "ClearMaxValue" }, // 195792784
		{ &Z_Construct_UFunction_USpinBox_ClearMinSliderValue, "ClearMinSliderValue" }, // 2586751307
		{ &Z_Construct_UFunction_USpinBox_ClearMinValue, "ClearMinValue" }, // 1039783022
		{ &Z_Construct_UFunction_USpinBox_GetMaxSliderValue, "GetMaxSliderValue" }, // 1634589717
		{ &Z_Construct_UFunction_USpinBox_GetMaxValue, "GetMaxValue" }, // 1573120288
		{ &Z_Construct_UFunction_USpinBox_GetMinSliderValue, "GetMinSliderValue" }, // 3309629347
		{ &Z_Construct_UFunction_USpinBox_GetMinValue, "GetMinValue" }, // 1314038413
		{ &Z_Construct_UFunction_USpinBox_GetValue, "GetValue" }, // 1706067419
		{ &Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature, "OnSpinBoxBeginSliderMovement__DelegateSignature" }, // 1858501201
		{ &Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature, "OnSpinBoxValueChangedEvent__DelegateSignature" }, // 227283257
		{ &Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature, "OnSpinBoxValueCommittedEvent__DelegateSignature" }, // 2855647650
		{ &Z_Construct_UFunction_USpinBox_SetForegroundColor, "SetForegroundColor" }, // 2095296083
		{ &Z_Construct_UFunction_USpinBox_SetMaxSliderValue, "SetMaxSliderValue" }, // 461508906
		{ &Z_Construct_UFunction_USpinBox_SetMaxValue, "SetMaxValue" }, // 3630589407
		{ &Z_Construct_UFunction_USpinBox_SetMinSliderValue, "SetMinSliderValue" }, // 2613619768
		{ &Z_Construct_UFunction_USpinBox_SetMinValue, "SetMinValue" }, // 4004803713
		{ &Z_Construct_UFunction_USpinBox_SetValue, "SetValue" }, // 1978768880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SpinBox.h" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "A numerical entry box that allows for direct entry of the number or allows the user to click and slide the number." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "DisplayName", "Maximum Slider Value" },
		{ "editcondition", "bOverride_MaxSliderValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The maximum allowable value that can be specified using the slider" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue = { "MaxSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, MaxSliderValue), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "DisplayName", "Minimum Slider Value" },
		{ "editcondition", "bOverride_MinSliderValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum allowable value that can be specified using the slider" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue = { "MinSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, MinSliderValue), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Content" },
		{ "DisplayName", "Maximum Value" },
		{ "editcondition", "bOverride_MaxValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The maximum allowable value that can be manually entered into the spin box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, MaxValue), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "Content" },
		{ "DisplayName", "Minimum Value" },
		{ "editcondition", "bOverride_MinValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum allowable value that can be manually entered into the spin box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, MinValue), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MaxSliderValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_SetBit(void* Obj)
	{
		((USpinBox*)Obj)->bOverride_MaxSliderValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue = { "bOverride_MaxSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MinSliderValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_SetBit(void* Obj)
	{
		((USpinBox*)Obj)->bOverride_MinSliderValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue = { "bOverride_MinSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_MetaData[] = {
		{ "Category", "Content" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MaxValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_SetBit(void* Obj)
	{
		((USpinBox*)Obj)->bOverride_MaxValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue = { "bOverride_MaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_MetaData[] = {
		{ "Category", "Content" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MinValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_SetBit(void* Obj)
	{
		((USpinBox*)Obj)->bOverride_MinValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue = { "bOverride_MinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called right after the slider handle is released by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement = { "OnEndSliderMovement", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, OnEndSliderMovement), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called right before the slider begins to move" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement = { "OnBeginSliderMovement", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, OnBeginSliderMovement), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called when the value is committed. Occurs when the user presses Enter or the text box loses focus." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted = { "OnValueCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, OnValueCommitted), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called when the value is changed interactively by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, OnValueChanged), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether to select the text in the spin box when the value is committed" },
	};
#endif
	void Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_SetBit(void* Obj)
	{
		((USpinBox*)Obj)->SelectAllTextOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit = { "SelectAllTextOnCommit", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether to remove the keyboard focus from the spin box when the value is committed" },
	};
#endif
	void Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
	{
		((USpinBox*)Obj)->ClearKeyboardFocusOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Display" },
		{ "DisplayName", "Minimum Desired Width" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum width of the spin box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_Justification_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The justification the value text should appear as." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_Justification_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_Justification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Font color and opacity (overrides style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent_MetaData[] = {
		{ "Category", "Slider" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The exponent by which to increase the delta as the mouse moves. 1 is constant (never increases the delta)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent = { "SliderExponent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, SliderExponent), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Slider" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The amount by which to change the spin box value as the slider moves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, Delta), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_Delta_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The Style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, WidgetStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBox_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Value stored in this spin box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBox, Value), METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Justification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpinBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpinBox_Statics::ClassParams = {
		&USpinBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpinBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpinBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpinBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpinBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpinBox, 2443996265);
	template<> UMG_API UClass* StaticClass<USpinBox>()
	{
		return USpinBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinBox(Z_Construct_UClass_USpinBox, &USpinBox::StaticClass, TEXT("/Script/UMG"), TEXT("USpinBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

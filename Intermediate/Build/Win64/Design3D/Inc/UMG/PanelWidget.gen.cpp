// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/PanelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_AddChild();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_ClearChildren();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_GetAllChildren();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_GetChildAt();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_GetChildIndex();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_GetChildrenCount();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_HasAnyChildren();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_HasChild();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_RemoveChild();
	UMG_API UFunction* Z_Construct_UFunction_UPanelWidget_RemoveChildAt();
// End Cross Module References
	void UPanelWidget::StaticRegisterNativesUPanelWidget()
	{
		UClass* Class = UPanelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChild", &UPanelWidget::execAddChild },
			{ "ClearChildren", &UPanelWidget::execClearChildren },
			{ "GetAllChildren", &UPanelWidget::execGetAllChildren },
			{ "GetChildAt", &UPanelWidget::execGetChildAt },
			{ "GetChildIndex", &UPanelWidget::execGetChildIndex },
			{ "GetChildrenCount", &UPanelWidget::execGetChildrenCount },
			{ "HasAnyChildren", &UPanelWidget::execHasAnyChildren },
			{ "HasChild", &UPanelWidget::execHasChild },
			{ "RemoveChild", &UPanelWidget::execRemoveChild },
			{ "RemoveChildAt", &UPanelWidget::execRemoveChildAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPanelWidget_AddChild_Statics
	{
		struct PanelWidget_eventAddChild_Parms
		{
			UWidget* Content;
			UPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventAddChild_Parms, ReturnValue), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventAddChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_AddChild_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_AddChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Adds a new child widget to the container.  Returns the base slot type,\nrequires casting to turn it into the type specific to the container." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_AddChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "AddChild", sizeof(PanelWidget_eventAddChild_Parms), Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_AddChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_AddChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_AddChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Remove all child widgets from the panel widget." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "ClearChildren", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_ClearChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_ClearChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics
	{
		struct PanelWidget_eventGetAllChildren_Parms
		{
			TArray<UWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventGetAllChildren_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets all widgets in the container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetAllChildren", sizeof(PanelWidget_eventGetAllChildren_Parms), Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetAllChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetAllChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics
	{
		struct PanelWidget_eventGetChildAt_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventGetChildAt_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventGetChildAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets the widget at an index.\n@param Index The index of the widget.\n@return The widget at the given index, or nothing if there is no widget there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetChildAt", sizeof(PanelWidget_eventGetChildAt_Parms), Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics
	{
		struct PanelWidget_eventGetChildIndex_Parms
		{
			const UWidget* Content;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventGetChildIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventGetChildIndex_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets the index of a specific child widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetChildIndex", sizeof(PanelWidget_eventGetChildIndex_Parms), Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetChildIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetChildIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics
	{
		struct PanelWidget_eventGetChildrenCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventGetChildrenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Gets number of child widgets in the container." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "GetChildrenCount", sizeof(PanelWidget_eventGetChildrenCount_Parms), Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_GetChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_GetChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics
	{
		struct PanelWidget_eventHasAnyChildren_Parms
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
	void Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventHasAnyChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PanelWidget_eventHasAnyChildren_Parms), &Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Returns true if there are any child widgets in the panel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "HasAnyChildren", sizeof(PanelWidget_eventHasAnyChildren_Parms), Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_HasAnyChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_HasAnyChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_HasChild_Statics
	{
		struct PanelWidget_eventHasChild_Parms
		{
			UWidget* Content;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventHasChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PanelWidget_eventHasChild_Parms), &Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventHasChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_HasChild_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_HasChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Returns true if panel contains this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_HasChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "HasChild", sizeof(PanelWidget_eventHasChild_Parms), Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_HasChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_HasChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_HasChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics
	{
		struct PanelWidget_eventRemoveChild_Parms
		{
			UWidget* Content;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventRemoveChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PanelWidget_eventRemoveChild_Parms), &Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventRemoveChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Removes a specific widget from the container.\n@return true if the widget was found and removed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "RemoveChild", sizeof(PanelWidget_eventRemoveChild_Parms), Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_RemoveChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_RemoveChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics
	{
		struct PanelWidget_eventRemoveChildAt_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PanelWidget_eventRemoveChildAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PanelWidget_eventRemoveChildAt_Parms), &Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelWidget_eventRemoveChildAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "Removes a child by it's index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelWidget, nullptr, "RemoveChildAt", sizeof(PanelWidget_eventRemoveChildAt_Parms), Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelWidget_RemoveChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelWidget_RemoveChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPanelWidget_NoRegister()
	{
		return UPanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Slots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPanelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPanelWidget_AddChild, "AddChild" }, // 1167023213
		{ &Z_Construct_UFunction_UPanelWidget_ClearChildren, "ClearChildren" }, // 2095461707
		{ &Z_Construct_UFunction_UPanelWidget_GetAllChildren, "GetAllChildren" }, // 2773744558
		{ &Z_Construct_UFunction_UPanelWidget_GetChildAt, "GetChildAt" }, // 2950500090
		{ &Z_Construct_UFunction_UPanelWidget_GetChildIndex, "GetChildIndex" }, // 918645512
		{ &Z_Construct_UFunction_UPanelWidget_GetChildrenCount, "GetChildrenCount" }, // 3201501221
		{ &Z_Construct_UFunction_UPanelWidget_HasAnyChildren, "HasAnyChildren" }, // 3857423488
		{ &Z_Construct_UFunction_UPanelWidget_HasChild, "HasChild" }, // 56259548
		{ &Z_Construct_UFunction_UPanelWidget_RemoveChild, "RemoveChild" }, // 1489228069
		{ &Z_Construct_UFunction_UPanelWidget_RemoveChildAt, "RemoveChildAt" }, // 360145308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/PanelWidget.h" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "The base class for all UMG panel widgets.  Panel widgets layout a collection of child widgets." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "The slots in the widget holding the child widgets of this panel." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPanelWidget, Slots), METADATA_PARAMS(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelWidget.h" },
		{ "ToolTip", "The slots in the widget holding the child widgets of this panel." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPanelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelWidget_Statics::NewProp_Slots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPanelWidget_Statics::ClassParams = {
		&UPanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPanelWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPanelWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPanelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPanelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPanelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPanelWidget, 3790209534);
	template<> UMG_API UClass* StaticClass<UPanelWidget>()
	{
		return UPanelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPanelWidget(Z_Construct_UClass_UPanelWidget, &UPanelWidget::StaticClass, TEXT("/Script/UMG"), TEXT("UPanelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

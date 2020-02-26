// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/GridPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPanel() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UGridPanel_AddChildToGrid();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UGridPanel_SetColumnFill();
	UMG_API UFunction* Z_Construct_UFunction_UGridPanel_SetRowFill();
// End Cross Module References
	void UGridPanel::StaticRegisterNativesUGridPanel()
	{
		UClass* Class = UGridPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToGrid", &UGridPanel::execAddChildToGrid },
			{ "SetColumnFill", &UGridPanel::execSetColumnFill },
			{ "SetRowFill", &UGridPanel::execSetRowFill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics
	{
		struct GridPanel_eventAddChildToGrid_Parms
		{
			UWidget* Content;
			UGridSlot* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, ReturnValue), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, nullptr, "AddChildToGrid", sizeof(GridPanel_eventAddChildToGrid_Parms), Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPanel_AddChildToGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics
	{
		struct GridPanel_eventSetColumnFill_Parms
		{
			int32 ColumnIndex;
			float Coefficient;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPanel_eventSetColumnFill_Parms, Coefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_ColumnIndex = { "ColumnIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPanel_eventSetColumnFill_Parms, ColumnIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_Coefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_ColumnIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, nullptr, "SetColumnFill", sizeof(GridPanel_eventSetColumnFill_Parms), Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPanel_SetColumnFill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridPanel_SetRowFill_Statics
	{
		struct GridPanel_eventSetRowFill_Parms
		{
			int32 ColumnIndex;
			float Coefficient;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPanel_eventSetRowFill_Parms, Coefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_ColumnIndex = { "ColumnIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPanel_eventSetRowFill_Parms, ColumnIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_Coefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_ColumnIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, nullptr, "SetRowFill", sizeof(GridPanel_eventSetRowFill_Parms), Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridPanel_SetRowFill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridPanel_NoRegister()
	{
		return UGridPanel::StaticClass();
	}
	struct Z_Construct_UClass_UGridPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowFill;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RowFill_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColumnFill;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColumnFill_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridPanel_AddChildToGrid, "AddChildToGrid" }, // 2745315805
		{ &Z_Construct_UFunction_UGridPanel_SetColumnFill, "SetColumnFill" }, // 1273543623
		{ &Z_Construct_UFunction_UGridPanel_SetRowFill, "SetRowFill" }, // 3328816395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/GridPanel.h" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
		{ "ToolTip", "A panel that evenly divides up available space between all of its children.\n\n* Many Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_MetaData[] = {
		{ "Category", "Fill Rules" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
		{ "ToolTip", "The row fill rules" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill = { "RowFill", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPanel, RowFill), METADATA_PARAMS(Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_Inner = { "RowFill", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_MetaData[] = {
		{ "Category", "Fill Rules" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
		{ "ToolTip", "The column fill rules" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill = { "ColumnFill", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridPanel, ColumnFill), METADATA_PARAMS(Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_Inner = { "ColumnFill", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridPanel_Statics::ClassParams = {
		&UGridPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridPanel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridPanel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridPanel, 2968701826);
	template<> UMG_API UClass* StaticClass<UGridPanel>()
	{
		return UGridPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPanel(Z_Construct_UClass_UGridPanel, &UGridPanel::StaticClass, TEXT("/Script/UMG"), TEXT("UGridPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

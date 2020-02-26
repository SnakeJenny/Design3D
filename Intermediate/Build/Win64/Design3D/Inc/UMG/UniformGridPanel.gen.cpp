// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/UniformGridPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniformGridPanel() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	void UUniformGridPanel::StaticRegisterNativesUUniformGridPanel()
	{
		UClass* Class = UUniformGridPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToUniformGrid", &UUniformGridPanel::execAddChildToUniformGrid },
			{ "SetMinDesiredSlotHeight", &UUniformGridPanel::execSetMinDesiredSlotHeight },
			{ "SetMinDesiredSlotWidth", &UUniformGridPanel::execSetMinDesiredSlotWidth },
			{ "SetSlotPadding", &UUniformGridPanel::execSetSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics
	{
		struct UniformGridPanel_eventAddChildToUniformGrid_Parms
		{
			UWidget* Content;
			UUniformGridSlot* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, ReturnValue), Z_Construct_UClass_UUniformGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "AddChildToUniformGrid", sizeof(UniformGridPanel_eventAddChildToUniformGrid_Parms), Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics
	{
		struct UniformGridPanel_eventSetMinDesiredSlotHeight_Parms
		{
			float InMinDesiredSlotHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredSlotHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::NewProp_InMinDesiredSlotHeight = { "InMinDesiredSlotHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridPanel_eventSetMinDesiredSlotHeight_Parms, InMinDesiredSlotHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::NewProp_InMinDesiredSlotHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Child Layout" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "SetMinDesiredSlotHeight", sizeof(UniformGridPanel_eventSetMinDesiredSlotHeight_Parms), Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics
	{
		struct UniformGridPanel_eventSetMinDesiredSlotWidth_Parms
		{
			float InMinDesiredSlotWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredSlotWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::NewProp_InMinDesiredSlotWidth = { "InMinDesiredSlotWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridPanel_eventSetMinDesiredSlotWidth_Parms, InMinDesiredSlotWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::NewProp_InMinDesiredSlotWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Child Layout" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "SetMinDesiredSlotWidth", sizeof(UniformGridPanel_eventSetMinDesiredSlotWidth_Parms), Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics
	{
		struct UniformGridPanel_eventSetSlotPadding_Parms
		{
			FMargin InSlotPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::NewProp_InSlotPadding = { "InSlotPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniformGridPanel_eventSetSlotPadding_Parms, InSlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::NewProp_InSlotPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Child Layout" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "SetSlotPadding", sizeof(UniformGridPanel_eventSetSlotPadding_Parms), Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister()
	{
		return UUniformGridPanel::StaticClass();
	}
	struct Z_Construct_UClass_UUniformGridPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredSlotHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredSlotHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredSlotWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredSlotWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformGridPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniformGridPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid, "AddChildToUniformGrid" }, // 3235104335
		{ &Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight, "SetMinDesiredSlotHeight" }, // 155640460
		{ &Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth, "SetMinDesiredSlotWidth" }, // 1556176953
		{ &Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding, "SetSlotPadding" }, // 3749619023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/UniformGridPanel.h" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "A panel that evenly divides up available space between all of its children." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "The minimum desired height of the slots" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight = { "MinDesiredSlotHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridPanel, MinDesiredSlotHeight), METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "The minimum desired width of the slots" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth = { "MinDesiredSlotWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridPanel, MinDesiredSlotWidth), METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "Padding given to each slot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding = { "SlotPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUniformGridPanel, SlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformGridPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformGridPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformGridPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniformGridPanel_Statics::ClassParams = {
		&UUniformGridPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUniformGridPanel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformGridPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniformGridPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniformGridPanel, 1580542343);
	template<> UMG_API UClass* StaticClass<UUniformGridPanel>()
	{
		return UUniformGridPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniformGridPanel(Z_Construct_UClass_UUniformGridPanel, &UUniformGridPanel::StaticClass, TEXT("/Script/UMG"), TEXT("UUniformGridPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformGridPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

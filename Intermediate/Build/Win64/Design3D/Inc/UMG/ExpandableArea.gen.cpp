// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ExpandableArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandableArea() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UFunction_UExpandableArea_GetIsExpanded();
	UMG_API UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded();
	UMG_API UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnExpandableAreaExpansionChanged_Parms
		{
			UExpandableArea* Area;
			bool bIsExpanded;
		};
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Area;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms*)Obj)->bIsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), &Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms, Area), Z_Construct_UClass_UExpandableArea_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnExpandableAreaExpansionChanged__DelegateSignature", sizeof(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UExpandableArea::StaticRegisterNativesUExpandableArea()
	{
		UClass* Class = UExpandableArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsExpanded", &UExpandableArea::execGetIsExpanded },
			{ "SetIsExpanded", &UExpandableArea::execSetIsExpanded },
			{ "SetIsExpanded_Animated", &UExpandableArea::execSetIsExpanded_Animated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics
	{
		struct ExpandableArea_eventGetIsExpanded_Parms
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
	void Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandableArea_eventGetIsExpanded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExpandableArea_eventGetIsExpanded_Parms), &Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "GetIsExpanded", sizeof(ExpandableArea_eventGetIsExpanded_Parms), Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandableArea_GetIsExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics
	{
		struct ExpandableArea_eventSetIsExpanded_Parms
		{
			bool IsExpanded;
		};
		static void NewProp_IsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded_SetBit(void* Obj)
	{
		((ExpandableArea_eventSetIsExpanded_Parms*)Obj)->IsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExpandableArea_eventSetIsExpanded_Parms), &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "SetIsExpanded", sizeof(ExpandableArea_eventSetIsExpanded_Parms), Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics
	{
		struct ExpandableArea_eventSetIsExpanded_Animated_Parms
		{
			bool IsExpanded;
		};
		static void NewProp_IsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded_SetBit(void* Obj)
	{
		((ExpandableArea_eventSetIsExpanded_Animated_Parms*)Obj)->IsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExpandableArea_eventSetIsExpanded_Animated_Parms), &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "SetIsExpanded_Animated", sizeof(ExpandableArea_eventSetIsExpanded_Animated_Parms), Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExpandableArea_NoRegister()
	{
		return UExpandableArea::StaticClass();
	}
	struct Z_Construct_UClass_UExpandableArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeaderContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExpansionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpansionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AreaPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Style;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandableArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpandableArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandableArea_GetIsExpanded, "GetIsExpanded" }, // 1136228133
		{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded, "SetIsExpanded" }, // 2505641517
		{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated, "SetIsExpanded_Animated" }, // 1833378751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ExpandableArea.h" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent = { "BodyContent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, BodyContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent = { "HeaderContent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, HeaderContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged_MetaData[] = {
		{ "Category", "ExpandableArea|Event" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
		{ "ToolTip", "A bindable delegate for the IsChecked." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged = { "OnExpansionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, OnExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding = { "AreaPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, AreaPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding = { "HeaderPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, HeaderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
		{ "ToolTip", "The maximum height of the area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	void Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UExpandableArea*)Obj)->bIsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExpandableArea), &Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, BorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, Style), Z_Construct_UScriptStruct_FExpandableAreaStyle, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandableArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UExpandableArea_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNamedSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UExpandableArea, INamedSlotInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandableArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandableArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExpandableArea_Statics::ClassParams = {
		&UExpandableArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExpandableArea_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandableArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExpandableArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExpandableArea, 3224237678);
	template<> UMG_API UClass* StaticClass<UExpandableArea>()
	{
		return UExpandableArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExpandableArea(Z_Construct_UClass_UExpandableArea, &UExpandableArea::StaticClass, TEXT("/Script/UMG"), TEXT("UExpandableArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandableArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

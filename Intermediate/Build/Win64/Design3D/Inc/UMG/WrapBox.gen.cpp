// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WrapBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBox_AddChildToWrapBox();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UWrapBox::StaticRegisterNativesUWrapBox()
	{
		UClass* Class = UWrapBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToWrapBox", &UWrapBox::execAddChildToWrapBox },
			{ "SetInnerSlotPadding", &UWrapBox::execSetInnerSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics
	{
		struct WrapBox_eventAddChildToWrapBox_Parms
		{
			UWidget* Content;
			UWrapBoxSlot* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventAddChildToWrapBox_Parms, ReturnValue), Z_Construct_UClass_UWrapBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventAddChildToWrapBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "AddChildToWrapBox", sizeof(WrapBox_eventAddChildToWrapBox_Parms), Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_AddChildToWrapBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics
	{
		struct WrapBox_eventSetInnerSlotPadding_Parms
		{
			FVector2D InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventSetInnerSlotPadding_Parms, InPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Sets the inner slot padding goes between slots sharing borders" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "SetInnerSlotPadding", sizeof(WrapBox_eventSetInnerSlotPadding_Parms), Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrapBox_NoRegister()
	{
		return UWrapBox::StaticClass();
	}
	struct Z_Construct_UClass_UWrapBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapWidth_MetaData[];
#endif
		static void NewProp_bExplicitWrapWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerSlotPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerSlotPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrapBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrapBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrapBox_AddChildToWrapBox, "AddChildToWrapBox" }, // 1570237545
		{ &Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding, "SetInnerSlotPadding" }, // 100254903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/WrapBox.h" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Arranges widgets left-to-right.  When the widgets exceed the Width it will place widgets on the next line.\n\n* Many Children\n* Flows\n* Wraps" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Use explicit wrap width whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\"" },
	};
#endif
	void Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_SetBit(void* Obj)
	{
		((UWrapBox*)Obj)->bExplicitWrapWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth = { "bExplicitWrapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWrapBox), &Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "EditCondition", "bExplicitWrapWidth" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "When this width is exceeded, elements will start appearing on the next line." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth = { "WrapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, WrapWidth), METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "The inner slot padding goes between slots sharing borders" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding = { "InnerSlotPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, InnerSlotPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrapBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrapBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrapBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWrapBox_Statics::ClassParams = {
		&UWrapBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWrapBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrapBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWrapBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWrapBox, 1820711484);
	template<> UMG_API UClass* StaticClass<UWrapBox>()
	{
		return UWrapBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrapBox(Z_Construct_UClass_UWrapBox, &UWrapBox::StaticClass, TEXT("/Script/UMG"), TEXT("UWrapBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

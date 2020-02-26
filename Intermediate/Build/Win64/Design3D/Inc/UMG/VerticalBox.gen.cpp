// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/VerticalBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UVerticalBox::StaticRegisterNativesUVerticalBox()
	{
		UClass* Class = UVerticalBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToVerticalBox", &UVerticalBox::execAddChildToVerticalBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics
	{
		struct VerticalBox_eventAddChildToVerticalBox_Parms
		{
			UWidget* Content;
			UVerticalBoxSlot* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VerticalBox_eventAddChildToVerticalBox_Parms, ReturnValue), Z_Construct_UClass_UVerticalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VerticalBox_eventAddChildToVerticalBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "ModuleRelativePath", "Public/Components/VerticalBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBox, nullptr, "AddChildToVerticalBox", sizeof(VerticalBox_eventAddChildToVerticalBox_Parms), Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVerticalBox_NoRegister()
	{
		return UVerticalBox::StaticClass();
	}
	struct Z_Construct_UClass_UVerticalBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVerticalBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVerticalBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVerticalBox_AddChildToVerticalBox, "AddChildToVerticalBox" }, // 3454087905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/VerticalBox.h" },
		{ "ModuleRelativePath", "Public/Components/VerticalBox.h" },
		{ "ToolTip", "A vertical box widget is a layout panel allowing child widgets to be automatically laid out\nvertically.\n\n* Many Children\n* Flows Vertical" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVerticalBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerticalBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVerticalBox_Statics::ClassParams = {
		&UVerticalBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVerticalBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVerticalBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVerticalBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVerticalBox, 2283527875);
	template<> UMG_API UClass* StaticClass<UVerticalBox>()
	{
		return UVerticalBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVerticalBox(Z_Construct_UClass_UVerticalBox, &UVerticalBox::StaticClass, TEXT("/Script/UMG"), TEXT("UVerticalBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVerticalBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

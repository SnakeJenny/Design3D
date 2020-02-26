// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ContentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UContentWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UContentWidget_GetContent();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UContentWidget_GetContentSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UContentWidget_SetContent();
// End Cross Module References
	void UContentWidget::StaticRegisterNativesUContentWidget()
	{
		UClass* Class = UContentWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContent", &UContentWidget::execGetContent },
			{ "GetContentSlot", &UContentWidget::execGetContentSlot },
			{ "SetContent", &UContentWidget::execSetContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContentWidget_GetContent_Statics
	{
		struct ContentWidget_eventGetContent_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_GetContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentWidget_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentWidget_eventGetContent_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_GetContent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_GetContent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentWidget_GetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentWidget_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/ContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentWidget_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentWidget, nullptr, "GetContent", sizeof(ContentWidget_eventGetContent_Parms), Z_Construct_UFunction_UContentWidget_GetContent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_GetContent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentWidget_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentWidget_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics
	{
		struct ContentWidget_eventGetContentSlot_Parms
		{
			UPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentWidget_eventGetContentSlot_Parms, ReturnValue), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/ContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentWidget, nullptr, "GetContentSlot", sizeof(ContentWidget_eventGetContentSlot_Parms), Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentWidget_GetContentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentWidget_GetContentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentWidget_SetContent_Statics
	{
		struct ContentWidget_eventSetContent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentWidget_eventSetContent_Parms, ReturnValue), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentWidget_eventSetContent_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentWidget_SetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentWidget_SetContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentWidget_SetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Panel" },
		{ "ModuleRelativePath", "Public/Components/ContentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentWidget_SetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentWidget, nullptr, "SetContent", sizeof(ContentWidget_eventSetContent_Parms), Z_Construct_UFunction_UContentWidget_SetContent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_SetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentWidget_SetContent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UContentWidget_SetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentWidget_SetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentWidget_SetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UContentWidget_NoRegister()
	{
		return UContentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UContentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentWidget_GetContent, "GetContent" }, // 1550448573
		{ &Z_Construct_UFunction_UContentWidget_GetContentSlot, "GetContentSlot" }, // 1450192412
		{ &Z_Construct_UFunction_UContentWidget_SetContent, "SetContent" }, // 42740745
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ContentWidget.h" },
		{ "ModuleRelativePath", "Public/Components/ContentWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContentWidget_Statics::ClassParams = {
		&UContentWidget::StaticClass,
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
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContentWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UContentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContentWidget, 2980151728);
	template<> UMG_API UClass* StaticClass<UContentWidget>()
	{
		return UContentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContentWidget(Z_Construct_UClass_UContentWidget, &UContentWidget::StaticClass, TEXT("/Script/UMG"), TEXT("UContentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

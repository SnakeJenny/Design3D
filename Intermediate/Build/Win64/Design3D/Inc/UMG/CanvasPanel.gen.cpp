// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/CanvasPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanel() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UCanvasPanel::StaticRegisterNativesUCanvasPanel()
	{
		UClass* Class = UCanvasPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToCanvas", &UCanvasPanel::execAddChildToCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics
	{
		struct CanvasPanel_eventAddChildToCanvas_Parms
		{
			UWidget* Content;
			UCanvasPanelSlot* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanel_eventAddChildToCanvas_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CanvasPanel_eventAddChildToCanvas_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Panel" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanel, nullptr, "AddChildToCanvas", sizeof(CanvasPanel_eventAddChildToCanvas_Parms), Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvasPanel_NoRegister()
	{
		return UCanvasPanel::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvasPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvasPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas, "AddChildToCanvas" }, // 183798249
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CanvasPanel.h" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanel.h" },
		{ "ToolTip", "The canvas panel is a designer friendly panel that allows widgets to be laid out at arbitrary\nlocations, anchored and z-ordered with other children of the canvas.  The canvas is a great widget\nfor manual layout, but bad when you want to procedurally just generate widgets and place them in a\ncontainer (unless you want absolute layout).\n\n* Many Children\n* Absolute Layout\n* Anchors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanvasPanel_Statics::ClassParams = {
		&UCanvasPanel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanvasPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanvasPanel, 1647981242);
	template<> UMG_API UClass* StaticClass<UCanvasPanel>()
	{
		return UCanvasPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasPanel(Z_Construct_UClass_UCanvasPanel, &UCanvasPanel::StaticClass, TEXT("/Script/UMG"), TEXT("UCanvasPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

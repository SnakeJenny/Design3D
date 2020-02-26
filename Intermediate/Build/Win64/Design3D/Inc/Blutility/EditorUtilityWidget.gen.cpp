// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Classes/EditorUtilityWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Blutility();
	BLUTILITY_API UFunction* Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked();
// End Cross Module References
	static FName NAME_UEditorUtilityWidget_OnDefaultActionClicked = FName(TEXT("OnDefaultActionClicked"));
	void UEditorUtilityWidget::OnDefaultActionClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityWidget_OnDefaultActionClicked),NULL);
	}
	void UEditorUtilityWidget::StaticRegisterNativesUEditorUtilityWidget()
	{
	}
	struct Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "The default action called when the widget is invoked if bAutoRunDefaultAction=true (it is never called otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityWidget, nullptr, "OnDefaultActionClicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister()
	{
		return UEditorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRunDefaultAction_MetaData[];
#endif
		static void NewProp_bAutoRunDefaultAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRunDefaultAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysReregisterWithWindowsMenu_MetaData[];
#endif
		static void NewProp_bAlwaysReregisterWithWindowsMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysReregisterWithWindowsMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUtilityWidget_OnDefaultActionClicked, "OnDefaultActionClicked" }, // 525197929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityWidget.h" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_SetBit(void* Obj)
	{
		((UEditorUtilityWidget*)Obj)->bAutoRunDefaultAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction = { "bAutoRunDefaultAction", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorUtilityWidget), &Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "Should this widget always be re-added to the windows menu once it's opened" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_SetBit(void* Obj)
	{
		((UEditorUtilityWidget*)Obj)->bAlwaysReregisterWithWindowsMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu = { "bAlwaysReregisterWithWindowsMenu", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorUtilityWidget), &Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0020090000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorUtilityWidget, HelpText), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityWidget_Statics::ClassParams = {
		&UEditorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorUtilityWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUtilityWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUtilityWidget, 1074776996);
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityWidget>()
	{
		return UEditorUtilityWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUtilityWidget(Z_Construct_UClass_UEditorUtilityWidget, &UEditorUtilityWidget::StaticClass, TEXT("/Script/Blutility"), TEXT("UEditorUtilityWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

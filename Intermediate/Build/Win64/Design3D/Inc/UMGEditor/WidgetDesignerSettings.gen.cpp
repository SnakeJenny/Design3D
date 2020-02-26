// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Public/Settings/WidgetDesignerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetDesignerSettings() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetDesignerSettings_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetDesignerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetDesignerSettings::StaticRegisterNativesUWidgetDesignerSettings()
	{
	}
	UClass* Z_Construct_UClass_UWidgetDesignerSettings_NoRegister()
	{
		return UWidgetDesignerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetDesignerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRespectLocks_MetaData[];
#endif
		static void NewProp_bRespectLocks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRespectLocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecutePreConstructEvent_MetaData[];
#endif
		static void NewProp_bExecutePreConstructEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecutePreConstructEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOutlines_MetaData[];
#endif
		static void NewProp_bShowOutlines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOutlines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockToPanelOnDragByDefault_MetaData[];
#endif
		static void NewProp_bLockToPanelOnDragByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockToPanelOnDragByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSnapSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridSnapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSnapEnabled_MetaData[];
#endif
		static void NewProp_GridSnapEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GridSnapEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetDesignerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/WidgetDesignerSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Implements the settings for the Widget Blueprint Designer." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Should the designer respect locked widgets?  If true, the designer by default\nwill not allow you to select locked widgets in the designer view." },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bRespectLocks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks = { "bRespectLocks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Should the designer run the design event?  Disable this if you're seeing crashes in the designer,\nyou may have some unsafe code running in the designer." },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bExecutePreConstructEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent = { "bExecutePreConstructEvent", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_MetaData[] = {
		{ "Category", "Visuals" },
		{ "DisplayName", "Show Dashed Outlines By Default" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Should the designer show outlines by default?" },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bShowOutlines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines = { "bShowOutlines", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_MetaData[] = {
		{ "Category", "Dragging" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bLockToPanelOnDragByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault = { "bLockToPanelOnDragByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize = { "GridSnapSize", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetDesignerSettings, GridSnapSize), METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "DisplayName", "Enable Grid Snapping" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "If enabled, actor positions will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->GridSnapEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled = { "GridSnapEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetDesignerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetDesignerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetDesignerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::ClassParams = {
		&UWidgetDesignerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetDesignerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetDesignerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetDesignerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetDesignerSettings, 2880593869);
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetDesignerSettings>()
	{
		return UWidgetDesignerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetDesignerSettings(Z_Construct_UClass_UWidgetDesignerSettings, &UWidgetDesignerSettings::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UWidgetDesignerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetDesignerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

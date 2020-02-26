// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorStyle/Public/Classes/EditorStyleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorStyleSettings() {}
// Cross Module References
	EDITORSTYLE_API UEnum* Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation();
	UPackage* Z_Construct_UPackage__Script_EditorStyle();
	EDITORSTYLE_API UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister();
	EDITORSTYLE_API UClass* Z_Construct_UClass_UEditorStyleSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELogTimes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
// End Cross Module References
	static UEnum* EAssetEditorOpenLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation, Z_Construct_UPackage__Script_EditorStyle(), TEXT("EAssetEditorOpenLocation"));
		}
		return Singleton;
	}
	template<> EDITORSTYLE_API UEnum* StaticEnum<EAssetEditorOpenLocation>()
	{
		return EAssetEditorOpenLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssetEditorOpenLocation(EAssetEditorOpenLocation_StaticEnum, TEXT("/Script/EditorStyle"), TEXT("EAssetEditorOpenLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation_Hash() { return 975455200U; }
	UEnum* Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorStyle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssetEditorOpenLocation"), 0, Get_Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAssetEditorOpenLocation::Default", (int64)EAssetEditorOpenLocation::Default },
				{ "EAssetEditorOpenLocation::NewWindow", (int64)EAssetEditorOpenLocation::NewWindow },
				{ "EAssetEditorOpenLocation::MainWindow", (int64)EAssetEditorOpenLocation::MainWindow },
				{ "EAssetEditorOpenLocation::ContentBrowser", (int64)EAssetEditorOpenLocation::ContentBrowser },
				{ "EAssetEditorOpenLocation::LastDockedWindowOrNewWindow", (int64)EAssetEditorOpenLocation::LastDockedWindowOrNewWindow },
				{ "EAssetEditorOpenLocation::LastDockedWindowOrMainWindow", (int64)EAssetEditorOpenLocation::LastDockedWindowOrMainWindow },
				{ "EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser", (int64)EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ContentBrowser.ToolTip", "Docks tabs into the content browser's window." },
				{ "Default.ToolTip", "Attempts to dock asset editors into either a new window, or the main window if they were docked there." },
				{ "LastDockedWindowOrContentBrowser.ToolTip", "Docks tabs into the last window that was docked into, or the content browser window if there is no last docked window." },
				{ "LastDockedWindowOrMainWindow.ToolTip", "Docks tabs into the last window that was docked into, or the main window if there is no last docked window." },
				{ "LastDockedWindowOrNewWindow.ToolTip", "Docks tabs into the last window that was docked into, or a new window if there is no last docked window." },
				{ "MainWindow.ToolTip", "Docks tabs into the main window." },
				{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
				{ "NewWindow.ToolTip", "Docks tabs into new windows." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorStyle,
				nullptr,
				"EAssetEditorOpenLocation",
				"EAssetEditorOpenLocation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEditorStyleSettings::StaticRegisterNativesUEditorStyleSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister()
	{
		return UEditorStyleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorStyleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableColorizedEditorTabs_MetaData[];
#endif
		static void NewProp_bEnableColorizedEditorTabs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableColorizedEditorTabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetEditorOpenLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetEditorOpenLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetEditorOpenLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData[];
#endif
		static void NewProp_bPromoteOutputLogWarningsDuringPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPromoteOutputLogWarningsDuringPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogTimestampMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogTimestampMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LogFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHiddenPropertiesWhilePlaying_MetaData[];
#endif
		static void NewProp_bShowHiddenPropertiesWhilePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHiddenPropertiesWhilePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAllAdvancedDetails_MetaData[];
#endif
		static void NewProp_bShowAllAdvancedDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAllAdvancedDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogErrorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogErrorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogWarningColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogWarningColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogCommandColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogCommandColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogNormalColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogNormalColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogSelectionBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogSelectionBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLaunchMenus_MetaData[];
#endif
		static void NewProp_bShowLaunchMenus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLaunchMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowProjectMenus_MetaData[];
#endif
		static void NewProp_bShowProjectMenus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowProjectMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpandConfigurationMenus_MetaData[];
#endif
		static void NewProp_bExpandConfigurationMenus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandConfigurationMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFriendlyNames_MetaData[];
#endif
		static void NewProp_bShowFriendlyNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFriendlyNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWindowAnimations_MetaData[];
#endif
		static void NewProp_bEnableWindowAnimations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWindowAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSnapSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GridSnapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegularColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[];
#endif
		static void NewProp_bUseGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSmallToolBarIcons_MetaData[];
#endif
		static void NewProp_bUseSmallToolBarIcons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSmallToolBarIcons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetEditorWindowBackgroundSettings_MetaData[];
#endif
		static void NewProp_bResetEditorWindowBackgroundSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetEditorWindowBackgroundSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorChildWindowBackgroundOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorChildWindowBackgroundOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorMainWindowBackgroundOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorMainWindowBackgroundOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorWindowBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorWindowBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardFocusColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyboardFocusColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveSelectionColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveSelectionColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSelectionColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedSelectionColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData[];
#endif
		static void NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColorVisionDeficiencyCorrection_MetaData[];
#endif
		static void NewProp_bColorVisionDeficiencyCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColorVisionDeficiencyCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorVisionDeficiencySeverity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorVisionDeficiencySeverity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorVisionDeficiencyPreviewType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorVisionDeficiencyPreviewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorVisionDeficiencyPreviewType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHighDPIAwareness_MetaData[];
#endif
		static void NewProp_bEnableHighDPIAwareness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHighDPIAwareness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorStyleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/EditorStyleSettings.h" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Implements the Editor style settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Should editor tabs be colorized according to the asset type" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableColorizedEditorTabs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs = { "bEnableColorizedEditorTabs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "New asset editor tabs will open at the specified location." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation = { "AssetEditorOpenLocation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, AssetEditorOpenLocation), Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData[] = {
		{ "Category", "Output Log" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Should warnings and errors in the Output Log during \"Play in Editor\" be promoted to the message log?" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bPromoteOutputLogWarningsDuringPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE = { "bPromoteOutputLogWarningsDuringPIE", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogTimestampMode_MetaData[] = {
		{ "Category", "Output Log" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The display mode for timestamps in the output log" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogTimestampMode = { "LogTimestampMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogTimestampMode), Z_Construct_UEnum_CoreUObject_ELogTimes, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogTimestampMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogTimestampMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogFontSize_MetaData[] = {
		{ "Category", "Output Log" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Log Font Size" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The font size used in the output log" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogFontSize = { "LogFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogFontSize), METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogFontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "When Playing or Simulating, shows all properties (even non-visible and non-editable properties), if the object belongs to a simulating world.  This is useful for debugging." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowHiddenPropertiesWhilePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying = { "bShowHiddenPropertiesWhilePlaying", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Advanced Details will always auto expand." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowAllAdvancedDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails = { "bShowAllAdvancedDetails", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogErrorColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "DisplayName", "Error Text Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used for error log lines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogErrorColor = { "LogErrorColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogErrorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogErrorColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogErrorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogWarningColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "DisplayName", "Warning Text Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used for warning log lines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogWarningColor = { "LogWarningColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogWarningColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogWarningColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogWarningColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogCommandColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "DisplayName", "Command Text Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used for normal text in the output log" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogCommandColor = { "LogCommandColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogCommandColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogCommandColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogCommandColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogNormalColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "DisplayName", "Normal Text Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used for normal text in the output log" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogNormalColor = { "LogNormalColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogNormalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogNormalColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogNormalColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogSelectionBackgroundColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "DisplayName", "Selection Background Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used for the background of selected text in the output log" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogSelectionBackgroundColor = { "LogSelectionBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogSelectionBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogSelectionBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogSelectionBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogBackgroundColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "DisplayName", "Background Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used for the background in the output log" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogBackgroundColor = { "LogBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, LogBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Launch menu items will be shown." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowLaunchMenus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus = { "bShowLaunchMenus", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowProjectMenus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus = { "bShowProjectMenus", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bExpandConfigurationMenus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus = { "bExpandConfigurationMenus", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "DisplayName", "Show Friendly Variable Names" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the C++ names for properties and functions will be displayed in a format that is easier to read" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowFriendlyNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames = { "bShowFriendlyNames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Enables animated transitions for certain menus and pop-up windows.  Note that animations may be automatically disabled at low frame rates in order to improve responsiveness." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableWindowAnimations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations = { "bEnableWindowAnimations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize_MetaData[] = {
		{ "Category", "Graphs" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The custom grid snap size to use" },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize = { "GridSnapSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, GridSnapSize), METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor_MetaData[] = {
		{ "Category", "Graphs" },
		{ "DisplayName", "Grid Center Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent the center lines in the grid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor = { "CenterColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, CenterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor_MetaData[] = {
		{ "Category", "Graphs" },
		{ "DisplayName", "Grid Ruler Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent ruler lines in the grid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor = { "RuleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, RuleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor_MetaData[] = {
		{ "Category", "Graphs" },
		{ "DisplayName", "Grid Regular Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent regular grid lines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor = { "RegularColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, RegularColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_MetaData[] = {
		{ "Category", "Graphs" },
		{ "DisplayName", "Use Grids In The Material And Blueprint Editor" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "If true the material editor and blueprint editor will show a grid on it's background." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bUseGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid = { "bUseGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Whether to use small toolbar icons without labels or not." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bUseSmallToolBarIcons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons = { "bUseSmallToolBarIcons", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Check to reset the window background settings to editor defaults" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bResetEditorWindowBackgroundSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings = { "bResetEditorWindowBackgroundSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorChildWindowBackgroundOverride_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The override for the background of the child window (if not modified, the defaults will be used)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorChildWindowBackgroundOverride = { "EditorChildWindowBackgroundOverride", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, EditorChildWindowBackgroundOverride), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorChildWindowBackgroundOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorChildWindowBackgroundOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorMainWindowBackgroundOverride_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The override for the background of the main window (if not modified, the defaults will be used)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorMainWindowBackgroundOverride = { "EditorMainWindowBackgroundOverride", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, EditorMainWindowBackgroundOverride), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorMainWindowBackgroundOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorMainWindowBackgroundOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to tint the editor window backgrounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor = { "EditorWindowBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, EditorWindowBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_KeyboardFocusColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Keyboard Focus Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent keyboard input selection focus" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_KeyboardFocusColor = { "KeyboardFocusColor", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, KeyboardFocusColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_KeyboardFocusColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_KeyboardFocusColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_InactiveSelectionColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Inactive Selection Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent selected items that are currently inactive" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_InactiveSelectionColor = { "InactiveSelectionColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, InactiveSelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_InactiveSelectionColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_InactiveSelectionColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_PressedSelectionColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Pressed Selection Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent a pressed item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_PressedSelectionColor = { "PressedSelectionColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, PressedSelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_PressedSelectionColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_PressedSelectionColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Selection Color" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent selection" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor = { "SelectionColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, SelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "If you're correcting the color deficiency, you can use this to visualize what the correction looks like with the deficiency." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bColorVisionDeficiencyCorrectionPreviewWithDeficiency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency = { "bColorVisionDeficiencyCorrectionPreviewWithDeficiency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Shifts the color spectrum to the visible range based on the current ColorVisionDeficiencyPreviewType" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bColorVisionDeficiencyCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection = { "bColorVisionDeficiencyCorrection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity = { "ColorVisionDeficiencySeverity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, ColorVisionDeficiencySeverity), METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Applies a color vision deficiency filter to the entire editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType = { "ColorVisionDeficiencyPreviewType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorStyleSettings, ColorVisionDeficiencyPreviewType), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable High DPI Support" },
		{ "ModuleRelativePath", "Public/Classes/EditorStyleSettings.h" },
		{ "ToolTip", "Enables high dpi support in the editor which will adjust the scale of elements in the UI to account for high DPI monitors\nThe editor must be restarted for changes to take effect." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableHighDPIAwareness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness = { "bEnableHighDPIAwareness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorStyleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogTimestampMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogErrorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogWarningColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogCommandColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogNormalColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogSelectionBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_LogBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableWindowAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bResetEditorWindowBackgroundSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorChildWindowBackgroundOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorMainWindowBackgroundOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_KeyboardFocusColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_InactiveSelectionColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_PressedSelectionColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorStyleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorStyleSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorStyleSettings_Statics::ClassParams = {
		&UEditorStyleSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorStyleSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorStyleSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorStyleSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorStyleSettings, 2308144472);
	template<> EDITORSTYLE_API UClass* StaticClass<UEditorStyleSettings>()
	{
		return UEditorStyleSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorStyleSettings(Z_Construct_UClass_UEditorStyleSettings, &UEditorStyleSettings::StaticClass, TEXT("/Script/EditorStyle"), TEXT("UEditorStyleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorStyleSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

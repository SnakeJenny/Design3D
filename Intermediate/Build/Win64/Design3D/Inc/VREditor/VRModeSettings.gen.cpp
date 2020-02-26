// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/Public/VRModeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRModeSettings() {}
// Cross Module References
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_EInteractorHand();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVRModeSettings_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVRModeSettings();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
// End Cross Module References
	static UEnum* EInteractorHand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VREditor_EInteractorHand, Z_Construct_UPackage__Script_VREditor(), TEXT("EInteractorHand"));
		}
		return Singleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<EInteractorHand>()
	{
		return EInteractorHand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractorHand(EInteractorHand_StaticEnum, TEXT("/Script/VREditor"), TEXT("EInteractorHand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VREditor_EInteractorHand_Hash() { return 1829064444U; }
	UEnum* Z_Construct_UEnum_VREditor_EInteractorHand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VREditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractorHand"), 0, Get_Z_Construct_UEnum_VREditor_EInteractorHand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractorHand::Right", (int64)EInteractorHand::Right },
				{ "EInteractorHand::Left", (int64)EInteractorHand::Left },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Left.ToolTip", "Left hand" },
				{ "ModuleRelativePath", "Public/VRModeSettings.h" },
				{ "Right.ToolTip", "Right hand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
				nullptr,
				"EInteractorHand",
				"EInteractorHand",
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
	void UVRModeSettings::StaticRegisterNativesUVRModeSettings()
	{
	}
	UClass* Z_Construct_UClass_UVRModeSettings_NoRegister()
	{
		return UVRModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVRModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleporterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TeleporterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InteractorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerPressedThreshold_Rift_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerPressedThreshold_Rift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerPressedThreshold_Vive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerPressedThreshold_Vive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GizmoScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UIBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWorldScaleProgressBar_MetaData[];
#endif
		static void NewProp_bShowWorldScaleProgressBar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWorldScaleProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWorldMovementPostProcess_MetaData[];
#endif
		static void NewProp_bShowWorldMovementPostProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWorldMovementPostProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWorldMovementGrid_MetaData[];
#endif
		static void NewProp_bShowWorldMovementGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWorldMovementGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractorHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractorHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractorHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutokeySequences_MetaData[];
#endif
		static void NewProp_bAutokeySequences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutokeySequences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoVREditMode_MetaData[];
#endif
		static void NewProp_bEnableAutoVREditMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoVREditMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVISettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRModeSettings.h" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Implements the settings for VR Mode." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The class we'll create our interactors from" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass = { "TeleporterClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, TeleporterClass), Z_Construct_UClass_AVREditorTeleporter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The class we'll create our interactors from" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass = { "InteractorClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, InteractorClass), Z_Construct_UClass_UVREditorInteractor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "DisplayName", "Trigger Pressed Threshold (Oculus Touch)" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The amount (between 0-1) you have to depress the Oculus Touch controller trigger to register a press" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift = { "TriggerPressedThreshold_Rift", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, TriggerPressedThreshold_Rift), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "DisplayName", "Trigger Pressed Threshold (Vive)" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The amount (between 0-1) you have to depress the Vive controller trigger to register a press" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive = { "TriggerPressedThreshold_Vive", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, TriggerPressedThreshold_Vive), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The maximum time in seconds between two clicks for a double-click to register" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime = { "DoubleClickTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, DoubleClickTime), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale_MetaData[] = {
		{ "Category", "UI Customization" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The size of the transform gizmo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale = { "GizmoScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, GizmoScale), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness_MetaData[] = {
		{ "Category", "UI Customization" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.010000" },
		{ "DisplayName", "UI Panel Brightness" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Adjusts the brightness of the UI panels" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness = { "UIBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, UIBrightness), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_MetaData[] = {
		{ "Category", "UI Customization" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Display a progress bar while scaling that shows your current scale" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bShowWorldScaleProgressBar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar = { "bShowWorldScaleProgressBar", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_MetaData[] = {
		{ "Category", "World Movement" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Dim the surroundings while moving through the world" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bShowWorldMovementPostProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess = { "bShowWorldMovementPostProcess", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_MetaData[] = {
		{ "Category", "World Movement" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Show the movement grid for orientation while moving through the world" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bShowWorldMovementGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid = { "bShowWorldMovementGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Which hand should have the primary interactor laser on it" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand = { "InteractorHand", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRModeSettings, InteractorHand), Z_Construct_UEnum_VREditor_EInteractorHand, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Whether or not sequences should be autokeyed" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bAutokeySequences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences = { "bAutokeySequences", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Enable VR Mode Auto-Entry" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "If true, wearing a Vive or Oculus Rift headset will automatically enter VR Editing mode" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bEnableAutoVREditMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode = { "bEnableAutoVREditMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRModeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRModeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRModeSettings_Statics::ClassParams = {
		&UVRModeSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRModeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRModeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRModeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRModeSettings, 3372368835);
	template<> VREDITOR_API UClass* StaticClass<UVRModeSettings>()
	{
		return UVRModeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRModeSettings(Z_Construct_UClass_UVRModeSettings, &UVRModeSettings::StaticClass, TEXT("/Script/VREditor"), TEXT("UVRModeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRModeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

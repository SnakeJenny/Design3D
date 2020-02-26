// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VREditorUISystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorUISystem() {}
// Cross Module References
	VREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVRButton();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VREDITOR_API UClass* Z_Construct_UClass_UVRRadialMenuHandler_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
class UScriptStruct* FVRButton::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVRButton_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRButton, Z_Construct_UPackage__Script_VREditor(), TEXT("VRButton"), sizeof(FVRButton), Get_Z_Construct_UScriptStruct_FVRButton_Hash());
	}
	return Singleton;
}
template<> VREDITOR_API UScriptStruct* StaticStruct<FVRButton>()
{
	return FVRButton::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRButton(FVRButton::StaticStruct, TEXT("/Script/VREditor"), TEXT("VRButton"), false, nullptr, nullptr);
static struct FScriptStruct_VREditor_StaticRegisterNativesFVRButton
{
	FScriptStruct_VREditor_StaticRegisterNativesFVRButton()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRButton")),new UScriptStruct::TCppStructOps<FVRButton>);
	}
} ScriptStruct_VREditor_StaticRegisterNativesFVRButton;
	struct Z_Construct_UScriptStruct_FVRButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRButton_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Structure to keep track of all relevant interaction and animation elements of a VR Button" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRButton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRButton>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Pointer to button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget = { "ButtonWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRButton, ButtonWidget), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRButton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		&NewStructOps,
		"VRButton",
		sizeof(FVRButton),
		alignof(FVRButton),
		Z_Construct_UScriptStruct_FVRButton_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVRButton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRButton_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRButton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRButton()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRButton_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VREditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRButton"), sizeof(FVRButton), Get_Z_Construct_UScriptStruct_FVRButton_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRButton_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRButton_Hash() { return 1416835461U; }
	void UVREditorUISystem::StaticRegisterNativesUVREditorUISystem()
	{
	}
	UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister()
	{
		return UVREditorUISystem::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorUISystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialMenuHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialMenuHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VRButtons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorPickerUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorPickerUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DraggingUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DraggingUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuickRadialMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuickRadialMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoDisplayPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoDisplayPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWindowInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PreviewWindowInfo;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviewWindowInfo_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewWindowInfo_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingUIs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FloatingUIs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatingUIs_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingUIs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorUISystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorUISystem.h" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "VR Editor user interface manager" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The add-on that handles radial menu switching" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler = { "RadialMenuHandler", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, RadialMenuHandler), Z_Construct_UClass_UVRRadialMenuHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "All buttons created for the radial and quick menus" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons = { "VRButtons", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, VRButtons), METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_Inner = { "VRButtons", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRButton, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Interactor that usually accesses UI and other helper functionality" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor = { "UIInteractor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, UIInteractor), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Interactor that has a laser and is generally interacting with the scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor = { "LaserInteractor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, LaserInteractor), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The color picker dockable window" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI = { "ColorPickerUI", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, ColorPickerUI), Z_Construct_UClass_AVREditorDockableWindow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The current UI that is being dragged" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI = { "DraggingUI", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, DraggingUI), Z_Construct_UClass_AVREditorDockableWindow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The Radial Menu UI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu = { "QuickRadialMenu", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, QuickRadialMenu), Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Our Quick Menu UI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel = { "InfoDisplayPanel", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, InfoDisplayPanel), Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "All of the preview window info." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo = { "PreviewWindowInfo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, PreviewWindowInfo), METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_Key_KeyProp = { "PreviewWindowInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_ValueProp = { "PreviewWindowInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "All of the floating UIs.  These may or may not be visible (spawned)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs = { "FloatingUIs", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, FloatingUIs), METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_Key_KeyProp = { "FloatingUIs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_ValueProp = { "FloatingUIs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorUISystem, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorUISystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorUISystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorUISystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorUISystem_Statics::ClassParams = {
		&UVREditorUISystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorUISystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorUISystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorUISystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorUISystem, 1039871174);
	template<> VREDITOR_API UClass* StaticClass<UVREditorUISystem>()
	{
		return UVREditorUISystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorUISystem(Z_Construct_UClass_UVREditorUISystem, &UVREditorUISystem::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorUISystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorUISystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

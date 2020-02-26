// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VREditorFloatingUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorFloatingUI() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AVREditorFloatingUI::StaticRegisterNativesAVREditorFloatingUI()
	{
	}
	UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister()
	{
		return AVREditorFloatingUI::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorFloatingUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UserWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindowMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorFloatingUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorFloatingUI.h" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Represents an interactive floating UI panel in the VR Editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Class of the UMG widget we're spawning" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass = { "UserWidgetClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorFloatingUI, UserWidgetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "The floating window mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent = { "WindowMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorFloatingUI, WindowMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "When in a spawned state, this is the widget component to represent the widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorFloatingUI, WidgetComponent), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "UMG user widget we're drawing, or nullptr if we're drawing a Slate widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorFloatingUI, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorFloatingUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorFloatingUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorFloatingUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVREditorFloatingUI_Statics::ClassParams = {
		&AVREditorFloatingUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorFloatingUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorFloatingUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVREditorFloatingUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVREditorFloatingUI, 119113031);
	template<> VREDITOR_API UClass* StaticClass<AVREditorFloatingUI>()
	{
		return AVREditorFloatingUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVREditorFloatingUI(Z_Construct_UClass_AVREditorFloatingUI, &AVREditorFloatingUI::StaticClass, TEXT("/Script/VREditor"), TEXT("AVREditorFloatingUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorFloatingUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

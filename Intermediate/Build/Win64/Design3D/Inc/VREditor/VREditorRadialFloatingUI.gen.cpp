// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VREditorRadialFloatingUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorRadialFloatingUI() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorRadialFloatingUI();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVREditorRadialFloatingUI::StaticRegisterNativesAVREditorRadialFloatingUI()
	{
	}
	UClass* Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister()
	{
		return AVREditorRadialFloatingUI::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorRadialFloatingUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentralWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CentralWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindowMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "Represents an interactive floating UI panel in the VR Editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "The central helper widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent = { "CentralWidgetComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorRadialFloatingUI, CentralWidgetComponent), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "The arrow indicator mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent = { "ArrowMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorRadialFloatingUI, ArrowMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "The floating window mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent = { "WindowMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorRadialFloatingUI, WindowMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "When in a spawned state, this is the widget component to represent the widget" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents = { "WidgetComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorRadialFloatingUI, WidgetComponents), METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_Inner = { "WidgetComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorRadialFloatingUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::ClassParams = {
		&AVREditorRadialFloatingUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorRadialFloatingUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVREditorRadialFloatingUI, 2290837912);
	template<> VREDITOR_API UClass* StaticClass<AVREditorRadialFloatingUI>()
	{
		return AVREditorRadialFloatingUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVREditorRadialFloatingUI(Z_Construct_UClass_AVREditorRadialFloatingUI, &AVREditorRadialFloatingUI::StaticClass, TEXT("/Script/VREditor"), TEXT("AVREditorRadialFloatingUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorRadialFloatingUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

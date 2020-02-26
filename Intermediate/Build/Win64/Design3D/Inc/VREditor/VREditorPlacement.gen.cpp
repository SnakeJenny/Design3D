// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/VREditorPlacement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorPlacement() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorPlacement_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorPlacement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
	void UVREditorPlacement::StaticRegisterNativesUVREditorPlacement()
	{
	}
	UClass* Z_Construct_UClass_UVREditorPlacement_NoRegister()
	{
		return UVREditorPlacement::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacingMaterialOrTextureAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlacingMaterialOrTextureAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingUIAssetDraggedFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingUIAssetDraggedFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportWorldInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportWorldInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VREditorPlacement.h" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "VR Editor interaction with the 3D world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset_MetaData[] = {
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "The material or texture asset we're dragging to place on an object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset = { "PlacingMaterialOrTextureAsset", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorPlacement, PlacingMaterialOrTextureAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "The UI used to drag an asset into the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom = { "FloatingUIAssetDraggedFrom", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorPlacement, FloatingUIAssetDraggedFrom), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction_MetaData[] = {
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "The actual ViewportWorldInteraction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction = { "ViewportWorldInteraction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorPlacement, ViewportWorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode_MetaData[] = {
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorPlacement, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorPlacement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorPlacement_Statics::ClassParams = {
		&UVREditorPlacement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorPlacement_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorPlacement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorPlacement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorPlacement, 2582877506);
	template<> VREDITOR_API UClass* StaticClass<UVREditorPlacement>()
	{
		return UVREditorPlacement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorPlacement(Z_Construct_UClass_UVREditorPlacement, &UVREditorPlacement::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorPlacement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorPlacement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

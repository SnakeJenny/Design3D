// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Overlay/Public/BasicOverlays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicOverlays() {}
// Cross Module References
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	UPackage* Z_Construct_UPackage__Script_Overlay();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
// End Cross Module References
	void UBasicOverlays::StaticRegisterNativesUBasicOverlays()
	{
	}
	UClass* Z_Construct_UClass_UBasicOverlays_NoRegister()
	{
		return UBasicOverlays::StaticClass();
	}
	struct Z_Construct_UClass_UBasicOverlays_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overlays_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Overlays;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Overlays_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicOverlays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlays,
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlays_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BasicOverlays.h" },
		{ "ModuleRelativePath", "Public/BasicOverlays.h" },
		{ "ToolTip", "Implements an asset that contains a set of overlay data (which includes timing, text, and position) to be displayed for any\ngiven source (including, but not limited to, audio, dialog, and movies)" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicOverlays.h" },
		{ "ToolTip", "The import data used to make this overlays asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "ModuleRelativePath", "Public/BasicOverlays.h" },
		{ "ToolTip", "The overlay data held by this asset. Contains info on timing, position, and the subtitle to display" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays = { "Overlays", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicOverlays, Overlays), METADATA_PARAMS(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_Inner = { "Overlays", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOverlayItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicOverlays_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicOverlays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicOverlays>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasicOverlays_Statics::ClassParams = {
		&UBasicOverlays::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicOverlays_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicOverlays_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicOverlays()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasicOverlays_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasicOverlays, 2377286968);
	template<> OVERLAY_API UClass* StaticClass<UBasicOverlays>()
	{
		return UBasicOverlays::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasicOverlays(Z_Construct_UClass_UBasicOverlays, &UBasicOverlays::StaticClass, TEXT("/Script/Overlay"), TEXT("UBasicOverlays"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicOverlays);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

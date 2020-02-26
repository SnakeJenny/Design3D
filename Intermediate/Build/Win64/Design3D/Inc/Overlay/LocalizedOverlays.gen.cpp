// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Overlay/Public/LocalizedOverlays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizedOverlays() {}
// Cross Module References
	OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	UPackage* Z_Construct_UPackage__Script_Overlay();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
// End Cross Module References
	void ULocalizedOverlays::StaticRegisterNativesULocalizedOverlays()
	{
	}
	UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister()
	{
		return ULocalizedOverlays::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizedOverlays_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleToOverlaysMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocaleToOverlaysMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleToOverlaysMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocaleToOverlaysMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOverlays_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultOverlays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizedOverlays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlays,
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalizedOverlays.h" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with\nthe current locale, or a default set if an appropriate locale is not found" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "The import data used to make this overlays asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizedOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "Maps a set of cultures to specific BasicOverlays assets.\nCultures are comprised of three hyphen-separated parts:\n             A two-letter ISO 639-1 language code (e.g., \"zh\")\n             An optional four-letter ISO 15924 script code (e.g., \"Hans\")\n             An optional two-letter ISO 3166-1 country code  (e.g., \"CN\")" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap = { "LocaleToOverlaysMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizedOverlays, LocaleToOverlaysMap), METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_Key_KeyProp = { "LocaleToOverlaysMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_ValueProp = { "LocaleToOverlaysMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "The overlays to use if no overlays are found for the current culture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays = { "DefaultOverlays", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizedOverlays, DefaultOverlays), Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizedOverlays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizedOverlays>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams = {
		&ULocalizedOverlays::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizedOverlays()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizedOverlays, 464428178);
	template<> OVERLAY_API UClass* StaticClass<ULocalizedOverlays>()
	{
		return ULocalizedOverlays::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizedOverlays(Z_Construct_UClass_ULocalizedOverlays, &ULocalizedOverlays::StaticClass, TEXT("/Script/Overlay"), TEXT("ULocalizedOverlays"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizedOverlays);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

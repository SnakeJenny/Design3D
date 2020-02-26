// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/MaterialEditorOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorOptions() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialEditorOptions::StaticRegisterNativesUMaterialEditorOptions()
	{
	}
	UClass* Z_Construct_UClass_UMaterialEditorOptions_NoRegister()
	{
		return UMaterialEditorOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoriteExpressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FavoriteExpressions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FavoriteExpressions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUnsortedMenus_MetaData[];
#endif
		static void NewProp_bUseUnsortedMenus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnsortedMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRefreshAllPreviews_MetaData[];
#endif
		static void NewProp_bAlwaysRefreshAllPreviews_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRefreshAllPreviews;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLivePreviewUpdate_MetaData[];
#endif
		static void NewProp_bLivePreviewUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLivePreviewUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRealtimeExpressionViewport_MetaData[];
#endif
		static void NewProp_bRealtimeExpressionViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRealtimeExpressionViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRealtimeMaterialViewport_MetaData[];
#endif
		static void NewProp_bRealtimeMaterialViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRealtimeMaterialViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideUnusedConnectors_MetaData[];
#endif
		static void NewProp_bHideUnusedConnectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideUnusedConnectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGrid_MetaData[];
#endif
		static void NewProp_bShowGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/MaterialEditorOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "The users favorite material expressions." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions = { "FavoriteExpressions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorOptions, FavoriteExpressions), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_Inner = { "FavoriteExpressions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If false, use expression categorized menus." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bUseUnsortedMenus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus = { "bUseUnsortedMenus", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, always refresh all expression previews." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bAlwaysRefreshAllPreviews = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews = { "bAlwaysRefreshAllPreviews", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, always refresh the material preview." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bLivePreviewUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate = { "bLivePreviewUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, the linked object viewport updates in realtime." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bRealtimeExpressionViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport = { "bRealtimeExpressionViewport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, the 3D material preview viewport updates in realtime." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bRealtimeMaterialViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport = { "bRealtimeMaterialViewport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, don't render connectors that are not connected to anything." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bHideUnusedConnectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors = { "bHideUnusedConnectors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, render grid the preview scene." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bShowGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid = { "bShowGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorOptions_Statics::ClassParams = {
		&UMaterialEditorOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialEditorOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialEditorOptions, 4049160912);
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorOptions>()
	{
		return UMaterialEditorOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialEditorOptions(Z_Construct_UClass_UMaterialEditorOptions, &UMaterialEditorOptions::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialEditorOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

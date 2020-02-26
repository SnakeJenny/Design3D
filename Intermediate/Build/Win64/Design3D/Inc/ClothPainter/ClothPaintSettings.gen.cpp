// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothPainter/Private/ClothPaintSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPaintSettings() {}
// Cross Module References
	CLOTHPAINTER_API UEnum* Z_Construct_UEnum_ClothPainter_EPaintableClothProperty();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPainterSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPainterSettings();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAsset_NoRegister();
// End Cross Module References
	static UEnum* EPaintableClothProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothPainter_EPaintableClothProperty, Z_Construct_UPackage__Script_ClothPainter(), TEXT("EPaintableClothProperty"));
		}
		return Singleton;
	}
	template<> CLOTHPAINTER_API UEnum* StaticEnum<EPaintableClothProperty>()
	{
		return EPaintableClothProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPaintableClothProperty(EPaintableClothProperty_StaticEnum, TEXT("/Script/ClothPainter"), TEXT("EPaintableClothProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Hash() { return 3118488820U; }
	UEnum* Z_Construct_UEnum_ClothPainter_EPaintableClothProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothPainter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPaintableClothProperty"), 0, Get_Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPaintableClothProperty::MaxDistances", (int64)EPaintableClothProperty::MaxDistances },
				{ "EPaintableClothProperty::BackstopDistances", (int64)EPaintableClothProperty::BackstopDistances },
				{ "EPaintableClothProperty::BackstopRadius", (int64)EPaintableClothProperty::BackstopRadius },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackstopDistances.ToolTip", "Backstop cloth property" },
				{ "BackstopRadius.ToolTip", "Backstop radius property" },
				{ "MaxDistances.ToolTip", "Max distances cloth property" },
				{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothPainter,
				nullptr,
				"EPaintableClothProperty",
				"EPaintableClothProperty",
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
	void UClothPainterSettings::StaticRegisterNativesUClothPainterSettings()
	{
	}
	UClass* Z_Construct_UClass_UClothPainterSettings_NoRegister()
	{
		return UClothPainterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPainterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullBackface_MetaData[];
#endif
		static void NewProp_bCullBackface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullBackface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipNormal_MetaData[];
#endif
		static void NewProp_bFlipNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothingAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClothingAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothingAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCalculatedViewMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoCalculatedViewMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCalculatedViewMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoCalculatedViewMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoViewRange_MetaData[];
#endif
		static void NewProp_bAutoViewRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoViewRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPainterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshPaintSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothPaintSettings.h" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Opacity of the mesh preview" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPainterSettings, Opacity), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Whether to cull backfacing triangles when rendering the mesh preview" },
	};
#endif
	void Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_SetBit(void* Obj)
	{
		((UClothPainterSettings*)Obj)->bCullBackface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface = { "bCullBackface", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClothPainterSettings), &Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Whether to flip normals on the mesh preview" },
	};
#endif
	void Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_SetBit(void* Obj)
	{
		((UClothPainterSettings*)Obj)->bFlipNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal = { "bFlipNormal", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClothPainterSettings), &Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Array of Clothing assets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets = { "ClothingAssets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPainterSettings, ClothingAssets), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_Inner = { "ClothingAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UClothingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax_MetaData[] = {
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Storage for auto calculated view max value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax = { "AutoCalculatedViewMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPainterSettings, AutoCalculatedViewMax), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin_MetaData[] = {
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Storage for auto calculated view min value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin = { "AutoCalculatedViewMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPainterSettings, AutoCalculatedViewMin), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "When set, the view min and max values will be calculated from the values present in the currently editable mask" },
	};
#endif
	void Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_SetBit(void* Obj)
	{
		((UClothPainterSettings*)Obj)->bAutoViewRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange = { "bAutoViewRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClothPainterSettings), &Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bAutoViewRange" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "When painting float/1D values, this is considered the one or white point" },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax = { "ViewMax", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPainterSettings, ViewMax), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bAutoViewRange" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "When painting float/1D values, this is considered the zero or black point" },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin = { "ViewMin", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPainterSettings, ViewMin), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPainterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPainterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPainterSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPainterSettings_Statics::ClassParams = {
		&UClothPainterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPainterSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPainterSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPainterSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPainterSettings, 4821890);
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPainterSettings>()
	{
		return UClothPainterSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPainterSettings(Z_Construct_UClass_UClothPainterSettings, &UClothPainterSettings::StaticClass, TEXT("/Script/ClothPainter"), TEXT("UClothPainterSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPainterSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

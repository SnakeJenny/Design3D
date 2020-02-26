// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaint/Public/MeshPaintSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintSettings() {}
// Cross Module References
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode();
	UPackage* Z_Construct_UPackage__Script_MeshPaint();
	MESHPAINT_API UClass* Z_Construct_UClass_UPaintBrushSettings_NoRegister();
	MESHPAINT_API UClass* Z_Construct_UClass_UPaintBrushSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings_NoRegister();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings();
// End Cross Module References
	static UEnum* EMeshPaintColorViewMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode, Z_Construct_UPackage__Script_MeshPaint(), TEXT("EMeshPaintColorViewMode"));
		}
		return Singleton;
	}
	template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintColorViewMode>()
	{
		return EMeshPaintColorViewMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshPaintColorViewMode(EMeshPaintColorViewMode_StaticEnum, TEXT("/Script/MeshPaint"), TEXT("EMeshPaintColorViewMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Hash() { return 1552534049U; }
	UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshPaint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshPaintColorViewMode"), 0, Get_Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshPaintColorViewMode::Normal", (int64)EMeshPaintColorViewMode::Normal },
				{ "EMeshPaintColorViewMode::RGB", (int64)EMeshPaintColorViewMode::RGB },
				{ "EMeshPaintColorViewMode::Alpha", (int64)EMeshPaintColorViewMode::Alpha },
				{ "EMeshPaintColorViewMode::Red", (int64)EMeshPaintColorViewMode::Red },
				{ "EMeshPaintColorViewMode::Green", (int64)EMeshPaintColorViewMode::Green },
				{ "EMeshPaintColorViewMode::Blue", (int64)EMeshPaintColorViewMode::Blue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.DisplayName", "Alpha Channel" },
				{ "Alpha.ToolTip", "Alpha only" },
				{ "Blue.DisplayName", "Blue Channel" },
				{ "Blue.ToolTip", "Blue only" },
				{ "Green.DisplayName", "Green Channel" },
				{ "Green.ToolTip", "Green only" },
				{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
				{ "Normal.DisplayName", "Off" },
				{ "Normal.ToolTip", "Normal view mode (vertex color visualization off)" },
				{ "Red.DisplayName", "Red Channel" },
				{ "Red.ToolTip", "Red only" },
				{ "RGB.DisplayName", "RGB Channels" },
				{ "RGB.ToolTip", "RGB only" },
				{ "ToolTip", "Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshPaint,
				nullptr,
				"EMeshPaintColorViewMode",
				"EMeshPaintColorViewMode",
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
	void UPaintBrushSettings::StaticRegisterNativesUPaintBrushSettings()
	{
	}
	UClass* Z_Construct_UClass_UPaintBrushSettings_NoRegister()
	{
		return UPaintBrushSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaintBrushSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyFrontFacingTriangles_MetaData[];
#endif
		static void NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFrontFacingTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFlow_MetaData[];
#endif
		static void NewProp_bEnableFlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushFalloffAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushFalloffAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaintBrushSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshPaintSettings.h" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Color view mode used to display Vertex Colors" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode = { "ColorViewMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintBrushSettings, ColorViewMode), Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode, METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData[] = {
		{ "Category", "Brush" },
		{ "DisplayName", "Ignore back-facing" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Whether back-facing triangles should be ignored" },
	};
#endif
	void Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj)
	{
		((UPaintBrushSettings*)Obj)->bOnlyFrontFacingTriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles = { "bOnlyFrontFacingTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaintBrushSettings), &Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_MetaData[] = {
		{ "Category", "Brush" },
		{ "DisplayName", "Enable Brush Flow" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Enables \"Flow\" painting where paint is continually applied from the brush every tick" },
	};
#endif
	void Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_SetBit(void* Obj)
	{
		((UPaintBrushSettings*)Obj)->bEnableFlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow = { "bEnableFlow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaintBrushSettings), &Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount = { "BrushFalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintBrushSettings, BrushFalloffAmount), METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Strength of the brush (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength = { "BrushStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintBrushSettings, BrushStrength), METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "250000.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Radius of the Brush used for Painting" },
		{ "UIMax", "2048.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaintBrushSettings, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaintBrushSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaintBrushSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaintBrushSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaintBrushSettings_Statics::ClassParams = {
		&UPaintBrushSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaintBrushSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaintBrushSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaintBrushSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaintBrushSettings, 3105758065);
	template<> MESHPAINT_API UClass* StaticClass<UPaintBrushSettings>()
	{
		return UPaintBrushSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaintBrushSettings(Z_Construct_UClass_UPaintBrushSettings, &UPaintBrushSettings::StaticClass, TEXT("/Script/MeshPaint"), TEXT("UPaintBrushSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaintBrushSettings);
	void UMeshPaintSettings::StaticRegisterNativesUMeshPaintSettings()
	{
	}
	UClass* Z_Construct_UClass_UMeshPaintSettings_NoRegister()
	{
		return UMeshPaintSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexPreviewSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexPreviewSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshPaintSettings.h" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Size of vertex points drawn when mesh painting is active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize = { "VertexPreviewSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshPaintSettings, VertexPreviewSize), METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintSettings_Statics::ClassParams = {
		&UMeshPaintSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshPaintSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshPaintSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshPaintSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshPaintSettings, 4100404906);
	template<> MESHPAINT_API UClass* StaticClass<UMeshPaintSettings>()
	{
		return UMeshPaintSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshPaintSettings(Z_Construct_UClass_UMeshPaintSettings, &UMeshPaintSettings::StaticClass, TEXT("/Script/MeshPaint"), TEXT("UMeshPaintSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

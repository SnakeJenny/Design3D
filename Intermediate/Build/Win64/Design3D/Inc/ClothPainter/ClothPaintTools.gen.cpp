// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothPainter/Private/ClothPaintTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPaintTools() {}
// Cross Module References
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_FillSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_FillSettings();
// End Cross Module References
	void UClothPaintTool_BrushSettings::StaticRegisterNativesUClothPaintTool_BrushSettings()
	{
	}
	UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings_NoRegister()
	{
		return UClothPaintTool_BrushSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaintValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the Brush tool" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Value to paint onto the mesh for this parameter" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue = { "PaintValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPaintTool_BrushSettings, PaintValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_BrushSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::ClassParams = {
		&UClothPaintTool_BrushSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPaintTool_BrushSettings, 1395219233);
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_BrushSettings>()
	{
		return UClothPaintTool_BrushSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPaintTool_BrushSettings(Z_Construct_UClass_UClothPaintTool_BrushSettings, &UClothPaintTool_BrushSettings::StaticClass, TEXT("/Script/ClothPainter"), TEXT("UClothPaintTool_BrushSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_BrushSettings);
	void UClothPaintTool_GradientSettings::StaticRegisterNativesUClothPaintTool_GradientSettings()
	{
	}
	UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings_NoRegister()
	{
		return UClothPaintTool_GradientSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRegularBrush_MetaData[];
#endif
		static void NewProp_bUseRegularBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRegularBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientEndValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GradientEndValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientStartValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GradientStartValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the Gradient tool" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Enables the painting of selected points using a brush rather than just a point" },
	};
#endif
	void Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_SetBit(void* Obj)
	{
		((UClothPaintTool_GradientSettings*)Obj)->bUseRegularBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush = { "bUseRegularBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClothPaintTool_GradientSettings), &Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Value of the gradient at the end points" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue = { "GradientEndValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPaintTool_GradientSettings, GradientEndValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Value of the gradient at the start points" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue = { "GradientStartValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPaintTool_GradientSettings, GradientStartValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_GradientSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::ClassParams = {
		&UClothPaintTool_GradientSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPaintTool_GradientSettings, 1743811578);
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_GradientSettings>()
	{
		return UClothPaintTool_GradientSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPaintTool_GradientSettings(Z_Construct_UClass_UClothPaintTool_GradientSettings, &UClothPaintTool_GradientSettings::StaticClass, TEXT("/Script/ClothPainter"), TEXT("UClothPaintTool_GradientSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_GradientSettings);
	void UClothPaintTool_SmoothSettings::StaticRegisterNativesUClothPaintTool_SmoothSettings()
	{
	}
	UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings_NoRegister()
	{
		return UClothPaintTool_SmoothSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the smoothing tool" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Strength of the smoothing effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPaintTool_SmoothSettings, Strength), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_SmoothSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::ClassParams = {
		&UClothPaintTool_SmoothSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPaintTool_SmoothSettings, 2887635680);
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_SmoothSettings>()
	{
		return UClothPaintTool_SmoothSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPaintTool_SmoothSettings(Z_Construct_UClass_UClothPaintTool_SmoothSettings, &UClothPaintTool_SmoothSettings::StaticClass, TEXT("/Script/ClothPainter"), TEXT("UClothPaintTool_SmoothSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_SmoothSettings);
	void UClothPaintTool_FillSettings::StaticRegisterNativesUClothPaintTool_FillSettings()
	{
	}
	UClass* Z_Construct_UClass_UClothPaintTool_FillSettings_NoRegister()
	{
		return UClothPaintTool_FillSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_FillSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FillValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the fill tool" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "The value to fill all selected verts to" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue = { "FillValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPaintTool_FillSettings, FillValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Threshold for fill operation, will keep filling until sampled verts aren't within this range of the original vertex" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPaintTool_FillSettings, Threshold), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_FillSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::ClassParams = {
		&UClothPaintTool_FillSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_FillSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPaintTool_FillSettings, 1653876577);
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_FillSettings>()
	{
		return UClothPaintTool_FillSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPaintTool_FillSettings(Z_Construct_UClass_UClothPaintTool_FillSettings, &UClothPaintTool_FillSettings::StaticClass, TEXT("/Script/ClothPainter"), TEXT("UClothPaintTool_FillSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_FillSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

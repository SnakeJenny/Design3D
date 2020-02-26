// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Slate/SlateBrushAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrushAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void USlateBrushAsset::StaticRegisterNativesUSlateBrushAsset()
	{
	}
	UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister()
	{
		return USlateBrushAsset::StaticClass();
	}
	struct Z_Construct_UClass_USlateBrushAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateBrushAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/SlateBrushAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/SlateBrushAsset.h" },
		{ "ToolTip", "An asset describing how a texture can exist in slate's DPI-aware environment\nand how this texture responds to resizing. e.g. Scale9-stretching? Tiling?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Classes/Slate/SlateBrushAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The slate brush resource describing the texture's behavior." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateBrushAsset, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateBrushAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateBrushAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBrushAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateBrushAsset_Statics::ClassParams = {
		&USlateBrushAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateBrushAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USlateBrushAsset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateBrushAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateBrushAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateBrushAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateBrushAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateBrushAsset, 1120924753);
	template<> ENGINE_API UClass* StaticClass<USlateBrushAsset>()
	{
		return USlateBrushAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateBrushAsset(Z_Construct_UClass_USlateBrushAsset, &USlateBrushAsset::StaticClass, TEXT("/Script/Engine"), TEXT("USlateBrushAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBrushAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

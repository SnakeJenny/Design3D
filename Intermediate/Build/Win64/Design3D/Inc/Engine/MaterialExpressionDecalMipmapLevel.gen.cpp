// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDecalMipmapLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalMipmapLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDecalMipmapLevel::StaticRegisterNativesUMaterialExpressionDecalMipmapLevel()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister()
	{
		return UMaterialExpressionDecalMipmapLevel::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight_MetaData[] = {
		{ "Category", "MaterialExpressionDecalMipmapLevel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "OverridingInputProperty", "TextureSize" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight = { "ConstHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstHeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth_MetaData[] = {
		{ "Category", "MaterialExpressionDecalMipmapLevel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "OverridingInputProperty", "TextureSize" },
		{ "ToolTip", "only used if TextureSize is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth = { "ConstWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstWidth), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to '(Const Width, Const Height)' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, TextureSize), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalMipmapLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::ClassParams = {
		&UMaterialExpressionDecalMipmapLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionDecalMipmapLevel, 2958316174);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalMipmapLevel>()
	{
		return UMaterialExpressionDecalMipmapLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDecalMipmapLevel(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel, &UMaterialExpressionDecalMipmapLevel::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDecalMipmapLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalMipmapLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

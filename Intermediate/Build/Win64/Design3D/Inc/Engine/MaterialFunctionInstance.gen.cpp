// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialFunctionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
// End Cross Module References
	void UMaterialFunctionInstance::StaticRegisterNativesUMaterialFunctionInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister()
	{
		return UMaterialFunctionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticSwitchParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object" },
		{ "IncludePath", "Materials/MaterialFunctionInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "A material function instance defines parameter overrides for a parent material function." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Static component mask parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues = { "StaticComponentMaskParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, StaticComponentMaskParameterValues), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_Inner = { "StaticComponentMaskParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticComponentMaskParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Static switch parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues = { "StaticSwitchParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, StaticSwitchParameterValues), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_Inner = { "StaticSwitchParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticSwitchParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Font parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues = { "FontParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, FontParameterValues), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_Inner = { "FontParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Texture parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, TextureParameterValues), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_Inner = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Vector parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, VectorParameterValues), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_Inner = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Scalar parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, ScalarParameterValues), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_Inner = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Base function." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, Base), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Parent function." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstance, Parent), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::ClassParams = {
		&UMaterialFunctionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionInstance, 3282279353);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInstance>()
	{
		return UMaterialFunctionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionInstance(Z_Construct_UClass_UMaterialFunctionInstance, &UMaterialFunctionInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

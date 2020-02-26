// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/MaterialEditorPreviewParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorPreviewParameters() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterGroup();
// End Cross Module References
	void UMaterialEditorPreviewParameters::StaticRegisterNativesUMaterialEditorPreviewParameters()
	{
	}
	UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister()
	{
		return UMaterialEditorPreviewParameters::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterGroups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialEditor/MaterialEditorPreviewParameters.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorPreviewParameters, OriginalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction = { "OriginalFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorPreviewParameters, OriginalFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorPreviewParameters, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_MetaData[] = {
		{ "Category", "UMaterialEditorPreviewParameters" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups = { "ParameterGroups", nullptr, (EPropertyFlags)0x0010008000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorPreviewParameters, ParameterGroups), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_Inner = { "ParameterGroups", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorParameterGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorPreviewParameters>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::ClassParams = {
		&UMaterialEditorPreviewParameters::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialEditorPreviewParameters, 3053045241);
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorPreviewParameters>()
	{
		return UMaterialEditorPreviewParameters::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialEditorPreviewParameters(Z_Construct_UClass_UMaterialEditorPreviewParameters, &UMaterialEditorPreviewParameters::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialEditorPreviewParameters"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorPreviewParameters);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialFunction.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
// End Cross Module References
	void UMaterialFunction::StaticRegisterNativesUMaterialFunction()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunction_NoRegister()
	{
		return UMaterialFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReentrantFlag_MetaData[];
#endif
		static void NewProp_bReentrantFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReentrantFlag;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionEditorComments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionEditorComments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionEditorComments_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionExpressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionExpressions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionExpressions_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryCategoriesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LibraryCategoriesText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LibraryCategoriesText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LibraryCategories;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LibraryCategories_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrefixParameterNames_MetaData[];
#endif
		static void NewProp_bPrefixParameterNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrefixParameterNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentFunction;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object object" },
		{ "IncludePath", "Materials/MaterialFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Transient flag used to track re-entrance in recursive functions like IsDependent." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bReentrantFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag = { "bReentrantFlag", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments = { "FunctionEditorComments", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, FunctionEditorComments), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_Inner = { "FunctionEditorComments", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions = { "FunctionExpressions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, FunctionExpressions), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_Inner = { "FunctionExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText = { "LibraryCategoriesText", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, LibraryCategoriesText), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_Inner = { "LibraryCategoriesText", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories = { "LibraryCategories", nullptr, (EPropertyFlags)0x0010010820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, LibraryCategories_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_Inner = { "LibraryCategories", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "If true, parameters in this function will have a prefix added to their group name." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bPrefixParameterNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames = { "bPrefixParameterNames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bExposeToLibrary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Description of the function which will be displayed as a tooltip wherever the function is used." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Used in the material editor, points to the function asset being edited, which this function is just a preview for." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction = { "ParentFunction", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, ParentFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunction_Statics::ClassParams = {
		&UMaterialFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunction, 2213028578);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunction>()
	{
		return UMaterialFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunction(Z_Construct_UClass_UMaterialFunction, &UMaterialFunction::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunction);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunction)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

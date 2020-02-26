// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionCollectionParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCollectionParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UMaterialExpressionCollectionParameter::StaticRegisterNativesUMaterialExpressionCollectionParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter_NoRegister()
	{
		return UMaterialExpressionCollectionParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCollectionParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
		{ "ToolTip", "Id that is set from the name, and used to handle renaming of collection parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId = { "ParameterId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, ParameterId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionCollectionParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
		{ "ToolTip", "Name of the parameter being referenced." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection_MetaData[] = {
		{ "Category", "MaterialExpressionCollectionParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
		{ "ToolTip", "The Parameter Collection to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCollectionParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::ClassParams = {
		&UMaterialExpressionCollectionParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionCollectionParameter, 1504179282);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCollectionParameter>()
	{
		return UMaterialExpressionCollectionParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCollectionParameter(Z_Construct_UClass_UMaterialExpressionCollectionParameter, &UMaterialExpressionCollectionParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCollectionParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCollectionParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

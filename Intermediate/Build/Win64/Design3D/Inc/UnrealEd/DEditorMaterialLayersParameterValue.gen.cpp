// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorMaterialLayersParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorMaterialLayersParameterValue() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
// End Cross Module References
	void UDEditorMaterialLayersParameterValue::StaticRegisterNativesUDEditorMaterialLayersParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue_NoRegister()
	{
		return UDEditorMaterialLayersParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorMaterialLayersParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorMaterialLayersParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorMaterialLayersParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorMaterialLayersParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorMaterialLayersParameterValue, ParameterValue), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorMaterialLayersParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::ClassParams = {
		&UDEditorMaterialLayersParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorMaterialLayersParameterValue, 1662813060);
	template<> UNREALED_API UClass* StaticClass<UDEditorMaterialLayersParameterValue>()
	{
		return UDEditorMaterialLayersParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorMaterialLayersParameterValue(Z_Construct_UClass_UDEditorMaterialLayersParameterValue, &UDEditorMaterialLayersParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorMaterialLayersParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorMaterialLayersParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

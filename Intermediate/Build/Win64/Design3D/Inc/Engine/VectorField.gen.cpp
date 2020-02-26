// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VectorField/VectorField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorField() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	void UVectorField::StaticRegisterNativesUVectorField()
	{
	}
	UClass* Z_Construct_UClass_UVectorField_NoRegister()
	{
		return UVectorField::StaticClass();
	}
	struct Z_Construct_UClass_UVectorField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorField_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VectorField/VectorField.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
		{ "ToolTip", "The intensity with which to multiplie vectors in this field." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorField, Intensity), METADATA_PARAMS(Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "VectorFieldBounds" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
		{ "ToolTip", "Bounds of the volume in local space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorField, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVectorField_Statics::ClassParams = {
		&UVectorField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVectorField_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorField_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVectorField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVectorField, 1028845868);
	template<> ENGINE_API UClass* StaticClass<UVectorField>()
	{
		return UVectorField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorField(Z_Construct_UClass_UVectorField, &UVectorField::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

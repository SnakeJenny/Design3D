// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackVectorMaterialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVectorMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UInterpTrackVectorMaterialParam::StaticRegisterNativesUInterpTrackVectorMaterialParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister()
	{
		return UInterpTrackVectorMaterialParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vector Material Parameter Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackVectorMaterialParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorMaterialParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "InterpTrackVectorMaterialParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorMaterialParam.h" },
		{ "ToolTip", "Name of parameter in the MaterialInstance which this track will modify over time." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorMaterialParam, ParamName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials_MetaData[] = {
		{ "Category", "InterpTrackVectorMaterialParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorMaterialParam.h" },
		{ "ToolTip", "Materials whose parameters we want to change and the references to those materials." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials = { "TargetMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorMaterialParam, TargetMaterials), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials_Inner = { "TargetMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::NewProp_TargetMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackVectorMaterialParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::ClassParams = {
		&UInterpTrackVectorMaterialParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackVectorMaterialParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackVectorMaterialParam, 4293535252);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackVectorMaterialParam>()
	{
		return UInterpTrackVectorMaterialParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVectorMaterialParam(Z_Construct_UClass_UInterpTrackVectorMaterialParam, &UInterpTrackVectorMaterialParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVectorMaterialParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVectorMaterialParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

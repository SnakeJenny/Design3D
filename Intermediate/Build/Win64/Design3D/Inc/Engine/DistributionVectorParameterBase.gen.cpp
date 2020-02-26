// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionVectorParameterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorParameterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDistributionVectorParameterBase::StaticRegisterNativesUDistributionVectorParameterBase()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorParameterBase_NoRegister()
	{
		return UDistributionVectorParameterBase::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorParameterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorParameterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVectorConstant,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorParameterBase.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes = { "ParamModes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ParamModes, UDistributionVectorParameterBase), STRUCT_OFFSET(UDistributionVectorParameterBase, ParamModes), Z_Construct_UEnum_Engine_DistributionParamMode, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput = { "MaxOutput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MaxOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput = { "MinOutput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MinOutput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput = { "MaxInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MaxInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput = { "MinInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, MinInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "DistributionVectorParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParameterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorParameterBase, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParamModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MaxInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_MinInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorParameterBase_Statics::NewProp_ParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorParameterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorParameterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorParameterBase_Statics::ClassParams = {
		&UDistributionVectorParameterBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParameterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorParameterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionVectorParameterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionVectorParameterBase, 3866808153);
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorParameterBase>()
	{
		return UDistributionVectorParameterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorParameterBase(Z_Construct_UClass_UDistributionVectorParameterBase, &UDistributionVectorParameterBase::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorParameterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorParameterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

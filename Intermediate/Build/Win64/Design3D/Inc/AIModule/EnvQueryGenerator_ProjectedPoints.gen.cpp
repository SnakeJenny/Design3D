// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ProjectedPoints() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
// End Cross Module References
	void UEnvQueryGenerator_ProjectedPoints::StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister()
	{
		return UEnvQueryGenerator_ProjectedPoints::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
		{ "ToolTip", "trace params" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData = { "ProjectionData", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_ProjectedPoints, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_ProjectedPoints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams = {
		&UEnvQueryGenerator_ProjectedPoints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_ProjectedPoints, 3772105834);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_ProjectedPoints>()
	{
		return UEnvQueryGenerator_ProjectedPoints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_ProjectedPoints(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints, &UEnvQueryGenerator_ProjectedPoints::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_ProjectedPoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ProjectedPoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

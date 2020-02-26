// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/DataProviders/AIDataProvider_Random.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_Random() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_Random_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_Random();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIDataProvider_Random::StaticRegisterNativesUAIDataProvider_Random()
	{
	}
	UClass* Z_Construct_UClass_UAIDataProvider_Random_NoRegister()
	{
		return UAIDataProvider_Random::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataProvider_Random_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteger_MetaData[];
#endif
		static void NewProp_bInteger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataProvider_Random_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider_QueryParams,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "DisplayName", "Random number" },
		{ "IncludePath", "DataProviders/AIDataProvider_Random.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
	};
#endif
	void Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_SetBit(void* Obj)
	{
		((UAIDataProvider_Random*)Obj)->bInteger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger = { "bInteger", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAIDataProvider_Random), &Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataProvider_Random, Max), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataProvider_Random, Min), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIDataProvider_Random_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataProvider_Random_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider_Random>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_Random_Statics::ClassParams = {
		&UAIDataProvider_Random::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIDataProvider_Random_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataProvider_Random()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIDataProvider_Random_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIDataProvider_Random, 3986271513);
	template<> AIMODULE_API UClass* StaticClass<UAIDataProvider_Random>()
	{
		return UAIDataProvider_Random::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataProvider_Random(Z_Construct_UClass_UAIDataProvider_Random, &UAIDataProvider_Random::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIDataProvider_Random"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_Random);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

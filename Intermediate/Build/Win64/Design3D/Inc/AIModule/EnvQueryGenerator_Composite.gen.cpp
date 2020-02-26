// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Composite() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
// End Cross Module References
	void UEnvQueryGenerator_Composite::StaticRegisterNativesUEnvQueryGenerator_Composite()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister()
	{
		return UEnvQueryGenerator_Composite::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForcedItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMatchingItemType_MetaData[];
#endif
		static void NewProp_bHasMatchingItemType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMatchingItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDifferentItemTypes_MetaData[];
#endif
		static void NewProp_bAllowDifferentItemTypes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDifferentItemTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Generators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generators_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Composite" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ToolTip", "Composite generator allows using multiple generators in single query option\nAll child generators must produce exactly the same item type!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType = { "ForcedItemType", nullptr, (EPropertyFlags)0x0014040000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Composite, ForcedItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Composite*)Obj)->bHasMatchingItemType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType = { "bHasMatchingItemType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_Composite), &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ToolTip", "allow generators with different item types, use at own risk!\n\nWARNING:\ngenerator will use ForcedItemType for raw data, you MUST ensure proper memory layout\nchild generators will be writing to memory block through their own item types:\n- data must fit info block allocated by ForcedItemType\n- tests will read item location/properties through ForcedItemType" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Composite*)Obj)->bAllowDifferentItemTypes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes = { "bAllowDifferentItemTypes", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_Composite), &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Composite, Generators), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Composite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams = {
		&UEnvQueryGenerator_Composite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Composite, 1495783349);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Composite>()
	{
		return UEnvQueryGenerator_Composite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Composite(Z_Construct_UClass_UEnvQueryGenerator_Composite, &UEnvQueryGenerator_Composite::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_Composite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Composite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

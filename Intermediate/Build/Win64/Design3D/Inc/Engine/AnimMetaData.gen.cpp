// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMetaData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimMetaData::StaticRegisterNativesUAnimMetaData()
	{
	}
	UClass* Z_Construct_UClass_UAnimMetaData_NoRegister()
	{
		return UAnimMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimMetaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMetaData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMetaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimMetaData_Statics::ClassParams = {
		&UAnimMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimMetaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimMetaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimMetaData, 1134646304);
	template<> ENGINE_API UClass* StaticClass<UAnimMetaData>()
	{
		return UAnimMetaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimMetaData(Z_Construct_UClass_UAnimMetaData, &UAnimMetaData::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimMetaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMetaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

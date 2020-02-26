// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress_RemoveTrivialKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveTrivialKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveTrivialKeys::StaticRegisterNativesUAnimCompress_RemoveTrivialKeys()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister()
	{
		return UAnimCompress_RemoveTrivialKeys::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveTrivialKeys.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff = { "MaxScaleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxScaleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff = { "MaxAngleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxAngleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff = { "MaxPosDiff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxPosDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveTrivialKeys>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams = {
		&UAnimCompress_RemoveTrivialKeys::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress_RemoveTrivialKeys, 4183445466);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveTrivialKeys>()
	{
		return UAnimCompress_RemoveTrivialKeys::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_RemoveTrivialKeys(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys, &UAnimCompress_RemoveTrivialKeys::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_RemoveTrivialKeys"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveTrivialKeys);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

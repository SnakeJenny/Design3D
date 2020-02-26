// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/AnimationCompressionPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCompressionPanel() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCompressionHolder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCompressionHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
// End Cross Module References
	void UCompressionHolder::StaticRegisterNativesUCompressionHolder()
	{
	}
	UClass* Z_Construct_UClass_UCompressionHolder_NoRegister()
	{
		return UCompressionHolder::StaticClass();
	}
	struct Z_Construct_UClass_UCompressionHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Compression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompressionHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressionHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationCompressionPanel.h" },
		{ "ModuleRelativePath", "Public/AnimationCompressionPanel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressionHolder_Statics::NewProp_Compression_MetaData[] = {
		{ "Category", "Compression" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimationCompressionPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompressionHolder_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0012000002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompressionHolder, Compression), Z_Construct_UClass_UAnimCompress_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompressionHolder_Statics::NewProp_Compression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompressionHolder_Statics::NewProp_Compression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompressionHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompressionHolder_Statics::NewProp_Compression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompressionHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompressionHolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompressionHolder_Statics::ClassParams = {
		&UCompressionHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompressionHolder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCompressionHolder_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompressionHolder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompressionHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompressionHolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompressionHolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompressionHolder, 2274879856);
	template<> UNREALED_API UClass* StaticClass<UCompressionHolder>()
	{
		return UCompressionHolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompressionHolder(Z_Construct_UClass_UCompressionHolder, &UCompressionHolder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCompressionHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompressionHolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

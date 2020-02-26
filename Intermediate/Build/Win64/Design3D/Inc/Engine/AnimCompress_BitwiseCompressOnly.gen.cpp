// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress_BitwiseCompressOnly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_BitwiseCompressOnly() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_BitwiseCompressOnly::StaticRegisterNativesUAnimCompress_BitwiseCompressOnly()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister()
	{
		return UAnimCompress_BitwiseCompressOnly::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCompress_BitwiseCompressOnly.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_BitwiseCompressOnly.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_BitwiseCompressOnly>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams = {
		&UAnimCompress_BitwiseCompressOnly::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress_BitwiseCompressOnly, 2633858233);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_BitwiseCompressOnly>()
	{
		return UAnimCompress_BitwiseCompressOnly::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_BitwiseCompressOnly(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly, &UAnimCompress_BitwiseCompressOnly::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_BitwiseCompressOnly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_BitwiseCompressOnly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

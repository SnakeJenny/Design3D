// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/MergeShaderPipelineCachesCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergeShaderPipelineCachesCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMergeShaderPipelineCachesCommandlet::StaticRegisterNativesUMergeShaderPipelineCachesCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_NoRegister()
	{
		return UMergeShaderPipelineCachesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/MergeShaderPipelineCachesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/MergeShaderPipelineCachesCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergeShaderPipelineCachesCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::ClassParams = {
		&UMergeShaderPipelineCachesCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMergeShaderPipelineCachesCommandlet, 2393386752);
	template<> UNREALED_API UClass* StaticClass<UMergeShaderPipelineCachesCommandlet>()
	{
		return UMergeShaderPipelineCachesCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMergeShaderPipelineCachesCommandlet(Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet, &UMergeShaderPipelineCachesCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMergeShaderPipelineCachesCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergeShaderPipelineCachesCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

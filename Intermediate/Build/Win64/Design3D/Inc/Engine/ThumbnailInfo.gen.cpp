// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EditorFramework/ThumbnailInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UThumbnailInfo::StaticRegisterNativesUThumbnailInfo()
	{
	}
	UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister()
	{
		return UThumbnailInfo::StaticClass();
	}
	struct Z_Construct_UClass_UThumbnailInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThumbnailInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorFramework/ThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/EditorFramework/ThumbnailInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThumbnailInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailInfo_Statics::ClassParams = {
		&UThumbnailInfo::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThumbnailInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThumbnailInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThumbnailInfo, 2653446493);
	template<> ENGINE_API UClass* StaticClass<UThumbnailInfo>()
	{
		return UThumbnailInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThumbnailInfo(Z_Construct_UClass_UThumbnailInfo, &UThumbnailInfo::StaticClass, TEXT("/Script/Engine"), TEXT("UThumbnailInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

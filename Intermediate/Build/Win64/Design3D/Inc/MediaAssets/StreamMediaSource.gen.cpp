// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/StreamMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UStreamMediaSource::StaticRegisterNativesUStreamMediaSource()
	{
	}
	UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister()
	{
		return UStreamMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UStreamMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "StreamMediaSource.h" },
		{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl_MetaData[] = {
		{ "Category", "Stream" },
		{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
		{ "ToolTip", "The URL to the media stream to be played." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl = { "StreamUrl", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamMediaSource, StreamUrl), METADATA_PARAMS(Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams = {
		&UStreamMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamMediaSource, 2410185302);
	template<> MEDIAASSETS_API UClass* StaticClass<UStreamMediaSource>()
	{
		return UStreamMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamMediaSource(Z_Construct_UClass_UStreamMediaSource, &UStreamMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UStreamMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

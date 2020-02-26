// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/PlatformMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
// End Cross Module References
	void UPlatformMediaSource::StaticRegisterNativesUPlatformMediaSource()
	{
	}
	UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister()
	{
		return UPlatformMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMediaSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformMediaSources;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformMediaSources_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMediaSources_ValueProp;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlatformMediaSource.h" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A media source that selects other media sources based on target platform.\n\nUse this asset to override media sources on a per-platform basis." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "Default media source.\n\nThis media source will be used if no source was specified for a target platform." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformMediaSource, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_MetaData[] = {
		{ "Category", "Sources" },
		{ "DisplayName", "Media Sources" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "Media sources per platform." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources = { "PlatformMediaSources", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformMediaSource, PlatformMediaSources), METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_Key_KeyProp = { "PlatformMediaSources_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_ValueProp = { "PlatformMediaSources", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_ValueProp,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams = {
		&UPlatformMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformMediaSource, 47641957);
	template<> MEDIAASSETS_API UClass* StaticClass<UPlatformMediaSource>()
	{
		return UPlatformMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformMediaSource(Z_Construct_UClass_UPlatformMediaSource, &UPlatformMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UPlatformMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformMediaSource);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPlatformMediaSource)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/BaseMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UBaseMediaSource::StaticRegisterNativesUBaseMediaSource()
	{
	}
	UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister()
	{
		return UBaseMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformPlayerNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformPlayerNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformPlayerNames_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformPlayerNames_ValueProp;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "BaseMediaSource.h" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base class for concrete media sources." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Name of the desired native media player (Empty = find one automatically)." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseMediaSource, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_MetaData[] = {
		{ "Category", "Platforms" },
		{ "DisplayName", "Player Overrides" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Override native media player plug-ins per platform (Empty = find one automatically)." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames = { "PlatformPlayerNames", nullptr, (EPropertyFlags)0x0010000800002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseMediaSource, PlatformPlayerNames), METADATA_PARAMS(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_Key_KeyProp = { "PlatformPlayerNames_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_ValueProp = { "PlatformPlayerNames", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_ValueProp,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams = {
		&UBaseMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseMediaSource, 1686488359);
	template<> MEDIAASSETS_API UClass* StaticClass<UBaseMediaSource>()
	{
		return UBaseMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseMediaSource(Z_Construct_UClass_UBaseMediaSource, &UBaseMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UBaseMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMediaSource);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBaseMediaSource)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

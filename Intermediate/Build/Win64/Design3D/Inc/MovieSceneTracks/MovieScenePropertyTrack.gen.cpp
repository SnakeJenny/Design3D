// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieScenePropertyTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieScenePropertyTrack::StaticRegisterNativesUMovieScenePropertyTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister()
	{
		return UMovieScenePropertyTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePropertyTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionToKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionToKey;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueTrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueTrackName;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePropertyTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieScenePropertyTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Base class for tracks that animate an object property" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "All the sections in this list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, Sections), METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Path to the property from the source object being changed" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyPath), METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Name of the property being changed" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Section we should Key" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey = { "SectionToKey", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, SectionToKey), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Unique name for this track to afford multiple tracks on a given object (i.e. for array properties)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName = { "UniqueTrackName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, UniqueTrackName), METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePropertyTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertyTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::ClassParams = {
		&UMovieScenePropertyTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePropertyTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePropertyTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePropertyTrack, 1472408399);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertyTrack>()
	{
		return UMovieScenePropertyTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePropertyTrack(Z_Construct_UClass_UMovieScenePropertyTrack, &UMovieScenePropertyTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePropertyTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertyTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneSkeletalAnimationTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneSkeletalAnimationTrack::StaticRegisterNativesUMovieSceneSkeletalAnimationTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySectionIndexBlend_MetaData[];
#endif
		static void NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySectionIndexBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bUseLegacySectionIndexBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend = { "bUseLegacySectionIndexBlend", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, AnimationSections), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams = {
		&UMovieSceneSkeletalAnimationTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSkeletalAnimationTrack, 3126048753);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationTrack>()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSkeletalAnimationTrack(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, &UMovieSceneSkeletalAnimationTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSkeletalAnimationTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

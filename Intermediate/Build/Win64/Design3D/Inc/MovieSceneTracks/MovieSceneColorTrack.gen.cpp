// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneColorTrack::StaticRegisterNativesUMovieSceneColorTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister()
	{
		return UMovieSceneColorTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneColorTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSlateColor_MetaData[];
#endif
		static void NewProp_bIsSlateColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlateColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneColorTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneColorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit(void* Obj)
	{
		((UMovieSceneColorTrack*)Obj)->bIsSlateColor_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor = { "bIsSlateColor", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneColorTrack), &Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneColorTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneColorTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams = {
		&UMovieSceneColorTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneColorTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneColorTrack, 2592385951);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneColorTrack>()
	{
		return UMovieSceneColorTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneColorTrack(Z_Construct_UClass_UMovieSceneColorTrack, &UMovieSceneColorTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneColorTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

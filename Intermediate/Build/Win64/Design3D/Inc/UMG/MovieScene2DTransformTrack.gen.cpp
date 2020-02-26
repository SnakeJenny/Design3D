// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/MovieScene2DTransformTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTrack() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieScene2DTransformTrack::StaticRegisterNativesUMovieScene2DTransformTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister()
	{
		return UMovieScene2DTransformTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene2DTransformTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieScene2DTransformTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of 2D transforms in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::ClassParams = {
		&UMovieScene2DTransformTrack::StaticClass,
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
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene2DTransformTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene2DTransformTrack, 1961530815);
	template<> UMG_API UClass* StaticClass<UMovieScene2DTransformTrack>()
	{
		return UMovieScene2DTransformTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene2DTransformTrack(Z_Construct_UClass_UMovieScene2DTransformTrack, &UMovieScene2DTransformTrack::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieScene2DTransformTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

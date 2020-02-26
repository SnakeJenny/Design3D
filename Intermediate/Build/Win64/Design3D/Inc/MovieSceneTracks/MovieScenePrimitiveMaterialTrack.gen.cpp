// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieScenePrimitiveMaterialTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePrimitiveMaterialTrack::StaticRegisterNativesUMovieScenePrimitiveMaterialTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister()
	{
		return UMovieScenePrimitiveMaterialTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieScenePrimitiveMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePrimitiveMaterialTrack, MaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams = {
		&UMovieScenePrimitiveMaterialTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePrimitiveMaterialTrack, 1024752654);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePrimitiveMaterialTrack>()
	{
		return UMovieScenePrimitiveMaterialTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePrimitiveMaterialTrack(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack, &UMovieScenePrimitiveMaterialTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePrimitiveMaterialTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

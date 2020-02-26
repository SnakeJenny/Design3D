// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/IMovieScenePlaybackClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieScenePlaybackClient() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieScenePlaybackClient::StaticRegisterNativesUMovieScenePlaybackClient()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister()
	{
		return UMovieScenePlaybackClient::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePlaybackClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePlaybackClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovieScenePlaybackClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePlaybackClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieScenePlaybackClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePlaybackClient_Statics::ClassParams = {
		&UMovieScenePlaybackClient::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePlaybackClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePlaybackClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePlaybackClient, 1451947193);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePlaybackClient>()
	{
		return UMovieScenePlaybackClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePlaybackClient(Z_Construct_UClass_UMovieScenePlaybackClient, &UMovieScenePlaybackClient::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieScenePlaybackClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePlaybackClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

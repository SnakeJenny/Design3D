// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UMovieSceneMaterialParameterCollectionTrack::StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister()
	{
		return UMovieSceneMaterialParameterCollectionTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of material parameter collections in a movie scene." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Material Parameter Collection" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
		{ "ToolTip", "The material parameter collection to manipulate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneMaterialParameterCollectionTrack, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialParameterCollectionTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::ClassParams = {
		&UMovieSceneMaterialParameterCollectionTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMaterialParameterCollectionTrack, 2168790831);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialParameterCollectionTrack>()
	{
		return UMovieSceneMaterialParameterCollectionTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMaterialParameterCollectionTrack(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack, &UMovieSceneMaterialParameterCollectionTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneMaterialParameterCollectionTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterCollectionTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

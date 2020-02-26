// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Private/MovieSceneCopyableTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCopyableTrack() {}
// Cross Module References
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
// End Cross Module References
	void UMovieSceneCopyableTrack::StaticRegisterNativesUMovieSceneCopyableTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister()
	{
		return UMovieSceneCopyableTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCopyableTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAMasterTrack_MetaData[];
#endif
		static void NewProp_bIsAMasterTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAMasterTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCopyableTrack.h" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack_SetBit(void* Obj)
	{
		((UMovieSceneCopyableTrack*)Obj)->bIsAMasterTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack = { "bIsAMasterTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneCopyableTrack), &Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCopyableTrack, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsAMasterTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCopyableTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::ClassParams = {
		&UMovieSceneCopyableTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCopyableTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCopyableTrack, 2303077571);
	template<> SEQUENCER_API UClass* StaticClass<UMovieSceneCopyableTrack>()
	{
		return UMovieSceneCopyableTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCopyableTrack(Z_Construct_UClass_UMovieSceneCopyableTrack, &UMovieSceneCopyableTrack::StaticClass, TEXT("/Script/Sequencer"), TEXT("UMovieSceneCopyableTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCopyableTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

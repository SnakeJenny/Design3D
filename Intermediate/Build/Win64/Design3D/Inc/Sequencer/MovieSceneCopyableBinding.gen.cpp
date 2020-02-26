// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Private/MovieSceneCopyableBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCopyableBinding() {}
// Cross Module References
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UMovieSceneCopyableBinding::StaticRegisterNativesUMovieSceneCopyableBinding()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister()
	{
		return UMovieSceneCopyableBinding::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCopyableBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Possessable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Possessable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawnable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnableObjectTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnableObjectTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCopyableBinding.h" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable = { "Possessable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCopyableBinding, Possessable), Z_Construct_UScriptStruct_FMovieScenePossessable, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable = { "Spawnable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCopyableBinding, Spawnable), Z_Construct_UScriptStruct_FMovieSceneSpawnable, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCopyableBinding, Binding), Z_Construct_UScriptStruct_FMovieSceneBinding, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
		{ "ToolTip", "Tracks are also owned by the owning Movie Sequence. We manually copy the tracks out of a binding when we copy,\nbecause the binding stores them as a reference to a privately owned object. We store these copied tracks here,\nand then restore them upon paste to re-create the tracks with the correct owner." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCopyableBinding, Tracks), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
		{ "ToolTip", "Spawnables need to know about their Object Template but we cannot rely on automatic serialization due to the object\ntemplate belonging to the Movie Scene (it gets serialized as a reference). Instead we manually serialize the object\nso that we can duplicate it into a new object (which is stored in this variable) but we don't want this exported with\nthe rest of the text as it'll fall back to the same reference issue. Marking this as TextExportTransient solves this." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate = { "SpawnableObjectTemplate", nullptr, (EPropertyFlags)0x0010400000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCopyableBinding, SpawnableObjectTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCopyableBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::ClassParams = {
		&UMovieSceneCopyableBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCopyableBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCopyableBinding, 3477588326);
	template<> SEQUENCER_API UClass* StaticClass<UMovieSceneCopyableBinding>()
	{
		return UMovieSceneCopyableBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCopyableBinding(Z_Construct_UClass_UMovieSceneCopyableBinding, &UMovieSceneCopyableBinding::StaticClass, TEXT("/Script/Sequencer"), TEXT("UMovieSceneCopyableBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCopyableBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

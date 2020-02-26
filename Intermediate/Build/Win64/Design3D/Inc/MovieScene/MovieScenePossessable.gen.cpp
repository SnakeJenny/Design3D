// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieScenePossessable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePossessable() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieScenePossessable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePossessable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePossessable, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePossessable"), sizeof(FMovieScenePossessable), Get_Z_Construct_UScriptStruct_FMovieScenePossessable_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePossessable>()
{
	return FMovieScenePossessable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePossessable(FMovieScenePossessable::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePossessable"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePossessable
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePossessable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePossessable")),new UScriptStruct::TCppStructOps<FMovieScenePossessable>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePossessable;
	struct Z_Construct_UScriptStruct_FMovieScenePossessable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PossessedObjectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "MovieScenePossessable is a \"typed slot\" used to allow the MovieScene to control an already-existing object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePossessable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "GUID relating to this possessable's parent, if applicable." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid = { "ParentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePossessable, ParentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Type of the object we'll be possessing // @todo sequencer: Might be able to be editor-only.  We'll see.\n// @todo sequencer: This isn't used for anything yet.  We could use it to gate which types of objects can be bound to a\n// possessable \"slot\" though.  Or we could use it to generate a \"preview\" spawnable puppet when previewing with no\n// possessable object available." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass = { "PossessedObjectClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePossessable, PossessedObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Name label for this slot // @todo sequencer: Should be editor-only probably" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePossessable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Unique identifier of the possessable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePossessable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePossessable, Tags), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieScenePossessable",
		sizeof(FMovieScenePossessable),
		alignof(FMovieScenePossessable),
		Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePossessable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePossessable"), sizeof(FMovieScenePossessable), Get_Z_Construct_UScriptStruct_FMovieScenePossessable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePossessable_Hash() { return 1143446964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

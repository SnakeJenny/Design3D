// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationField() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationField, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationField"), sizeof(FMovieSceneEvaluationField), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationField>()
{
	return FMovieSceneEvaluationField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationField(FMovieSceneEvaluationField::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationField"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationField")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ranges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Signature;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Memory layout optimized primarily for speed of searching the applicable ranges" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Meta data that maps to entries in the 'Ranges' array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, MetaData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Groups), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Ranges), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_Inner = { "Ranges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Signature that uniquely identifies any state this field can be in - regenerated on mutation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Signature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationField",
		sizeof(FMovieSceneEvaluationField),
		alignof(FMovieSceneEvaluationField),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationField"), sizeof(FMovieSceneEvaluationField), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash() { return 219124273U; }
class UScriptStruct* FMovieSceneEvaluationMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationMetaData"), sizeof(FMovieSceneEvaluationMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationMetaData>()
{
	return FMovieSceneEvaluationMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationMetaData(FMovieSceneEvaluationMetaData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationMetaData")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTemplateSerialNumbers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubTemplateSerialNumbers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubTemplateSerialNumbers_Key_KeyProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SubTemplateSerialNumbers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEntities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveEntities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveEntities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveSequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSequences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Informational meta-data that applies to a given time range" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Map of sub sequence IDs to FMovieSceneEvaluationTemplate::TemplateSerialNumber that this meta data was generated with (not including root)." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers = { "SubTemplateSerialNumbers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, SubTemplateSerialNumbers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_Key_KeyProp = { "SubTemplateSerialNumbers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_ValueProp = { "SubTemplateSerialNumbers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of entities (tracks and/or sections) that are active in this time range." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities = { "ActiveEntities", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveEntities), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_Inner = { "ActiveEntities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of sequences that are active in this time range." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences = { "ActiveSequences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveSequences), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_Inner = { "ActiveSequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_SubTemplateSerialNumbers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationMetaData",
		sizeof(FMovieSceneEvaluationMetaData),
		alignof(FMovieSceneEvaluationMetaData),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationMetaData"), sizeof(FMovieSceneEvaluationMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash() { return 707960007U; }
class UScriptStruct* FMovieSceneOrderedEvaluationKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneOrderedEvaluationKey"), sizeof(FMovieSceneOrderedEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneOrderedEvaluationKey>()
{
	return FMovieSceneOrderedEvaluationKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneOrderedEvaluationKey(FMovieSceneOrderedEvaluationKey::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneOrderedEvaluationKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneOrderedEvaluationKey")),new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey;
	struct Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EvaluationIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Struct that stores the key for an evaluated entity, and the index at which it was (or is to be) evaluated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_EvaluationIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_EvaluationIndex = { "EvaluationIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, EvaluationIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_EvaluationIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_EvaluationIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, Key), Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_EvaluationIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneOrderedEvaluationKey",
		sizeof(FMovieSceneOrderedEvaluationKey),
		alignof(FMovieSceneOrderedEvaluationKey),
		Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneOrderedEvaluationKey"), sizeof(FMovieSceneOrderedEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash() { return 411143877U; }
class UScriptStruct* FMovieSceneEvaluationGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroup"), sizeof(FMovieSceneEvaluationGroup), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationGroup>()
{
	return FMovieSceneEvaluationGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationGroup(FMovieSceneEvaluationGroup::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationGroup"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationGroup")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentPtrLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentPtrLUT;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentPtrLUT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LUTIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LUTIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Holds segment pointers for all segments that are active for a given range of the sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A grouping of evaluation pointers that occur in this range of the sequence" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT = { "SegmentPtrLUT", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, SegmentPtrLUT), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT_Inner = { "SegmentPtrLUT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of indices that define all the flush groups in the range." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices = { "LUTIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, LUTIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_Inner = { "LUTIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SegmentPtrLUT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationGroup",
		sizeof(FMovieSceneEvaluationGroup),
		alignof(FMovieSceneEvaluationGroup),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationGroup"), sizeof(FMovieSceneEvaluationGroup), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash() { return 2677488681U; }
class UScriptStruct* FMovieSceneEvaluationGroupLUTIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroupLUTIndex"), sizeof(FMovieSceneEvaluationGroupLUTIndex), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationGroupLUTIndex>()
{
	return FMovieSceneEvaluationGroupLUTIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex(FMovieSceneEvaluationGroupLUTIndex::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationGroupLUTIndex"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationGroupLUTIndex")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumEvalPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumEvalPtrs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInitPtrs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LUTOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Lookup table index for a group of evaluation templates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs = { "NumEvalPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs = { "NumInitPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_LUTOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The offset within FMovieSceneEvaluationGroup::SegmentPtrLUT that this index starts" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_LUTOffset = { "LUTOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, LUTOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_LUTOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_LUTOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_LUTOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationGroupLUTIndex",
		sizeof(FMovieSceneEvaluationGroupLUTIndex),
		alignof(FMovieSceneEvaluationGroupLUTIndex),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationGroupLUTIndex"), sizeof(FMovieSceneEvaluationGroupLUTIndex), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash() { return 140841194U; }
class UScriptStruct* FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldSegmentPtr"), sizeof(FMovieSceneEvaluationFieldSegmentPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldSegmentPtr>()
{
	return FMovieSceneEvaluationFieldSegmentPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr(FMovieSceneEvaluationFieldSegmentPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldSegmentPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldSegmentPtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A pointer to a particular segment of a track held within an evaluation template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The identifier of the segment within the track (see FMovieSceneEvaluationTrack::Segments)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID = { "SegmentID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldSegmentPtr, SegmentID), Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr,
		&NewStructOps,
		"MovieSceneEvaluationFieldSegmentPtr",
		sizeof(FMovieSceneEvaluationFieldSegmentPtr),
		alignof(FMovieSceneEvaluationFieldSegmentPtr),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldSegmentPtr"), sizeof(FMovieSceneEvaluationFieldSegmentPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash() { return 2667434580U; }
class UScriptStruct* FMovieSceneEvaluationFieldTrackPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldTrackPtr"), sizeof(FMovieSceneEvaluationFieldTrackPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldTrackPtr>()
{
	return FMovieSceneEvaluationFieldTrackPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr(FMovieSceneEvaluationFieldTrackPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldTrackPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldTrackPtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A pointer to a track held within an evaluation template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The Identifier of the track inside the track map (see FMovieSceneEvaluationTemplate::Tracks)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier = { "TrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The sequence ID that identifies to which sequence the track belongs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldTrackPtr",
		sizeof(FMovieSceneEvaluationFieldTrackPtr),
		alignof(FMovieSceneEvaluationFieldTrackPtr),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldTrackPtr"), sizeof(FMovieSceneEvaluationFieldTrackPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash() { return 3565912993U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

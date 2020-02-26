// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTrack() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationDataTree();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment();
// End Cross Module References
	static UEnum* EEvaluationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EEvaluationMethod, Z_Construct_UPackage__Script_MovieScene(), TEXT("EEvaluationMethod"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EEvaluationMethod>()
	{
		return EEvaluationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEvaluationMethod(EEvaluationMethod_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EEvaluationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EEvaluationMethod_Hash() { return 2356843718U; }
	UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEvaluationMethod"), 0, Get_Z_Construct_UEnum_MovieScene_EEvaluationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEvaluationMethod::Static", (int64)EEvaluationMethod::Static },
				{ "EEvaluationMethod::Swept", (int64)EEvaluationMethod::Swept },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "Static.ToolTip", "Evaluation only ever occurs at a single time. Delta is irrelevant. Example: Basic curve eval, animation" },
				{ "Swept.ToolTip", "Evaluation from one frame to the next must consider the entire swept delta range on the track. Example: Events" },
				{ "ToolTip", "Enumeration to determine how a track should be evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EEvaluationMethod",
				"EEvaluationMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneEvaluationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTrack"), sizeof(FMovieSceneEvaluationTrack), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTrack>()
{
	return FMovieSceneEvaluationTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTrack(FMovieSceneEvaluationTrack::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrack
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTrack")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrack>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrack;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPostroll_MetaData[];
#endif
		static void NewProp_bEvaluateInPostroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPostroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPreroll_MetaData[];
#endif
		static void NewProp_bEvaluateInPreroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPreroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EvaluationGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildTemplates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildTemplates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EvaluationMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EvaluationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_EvaluationPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation track that is stored within an evaluation template for a sequence.\nContains user-defined evaluation templates, and an optional track implementation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether this track is evaluated in postroll" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPostroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll = { "bEvaluateInPostroll", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether this track is evaluated in preroll" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPreroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll = { "bEvaluateInPreroll", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Flush group that determines whether this track belongs to a group of tracks" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup = { "EvaluationGroup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Domain-specific track implementation override." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate = { "TrackTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, TrackTemplate), Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Domain-specific evaluation templates (normally 1 per section)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates = { "ChildTemplates", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ChildTemplates), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_Inner = { "ChildTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation tree specifying what happens at any given time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationTree = { "EvaluationTree", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationTree), Z_Construct_UScriptStruct_FSectionEvaluationDataTree, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationTree_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The movie scene track that created this evaluation track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack = { "SourceTrack", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, SourceTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Array of segmented ranges contained within the track." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, Segments), Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_Segments_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation method - static or swept" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod = { "EvaluationMethod", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationMethod), Z_Construct_UEnum_MovieScene_EEvaluationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation priority. Highest is evaluated first" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority = { "EvaluationPriority", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "ID of the possessable or spawnable within the UMovieScene this track belongs to, if any. Zero guid where this relates to a master track." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTrack",
		sizeof(FMovieSceneEvaluationTrack),
		alignof(FMovieSceneEvaluationTrack),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTrack"), sizeof(FMovieSceneEvaluationTrack), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Hash() { return 2192294563U; }
class UScriptStruct* FMovieSceneEvaluationTrackSegments::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTrackSegments"), sizeof(FMovieSceneEvaluationTrackSegments), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTrackSegments>()
{
	return FMovieSceneEvaluationTrackSegments::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTrackSegments(FMovieSceneEvaluationTrackSegments::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTrackSegments"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrackSegments
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrackSegments()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTrackSegments")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrackSegments>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrackSegments;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedSegments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentIdentifierToIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentIdentifierToIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SegmentIdentifierToIndex_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Structure that references a sorted array of segments by indirect identifiers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrackSegments>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Array of segmented ranges contained within the track." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments = { "SortedSegments", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrackSegments, SortedSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments_Inner = { "SortedSegments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Array of indices into SortedSegments where each FMovieSceneSegmentIdentifier represents and index into SegmentIdentifierToIndex. Never shuffled until the container is reset." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex = { "SegmentIdentifierToIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrackSegments, SegmentIdentifierToIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex_Inner = { "SegmentIdentifierToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SortedSegments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::NewProp_SegmentIdentifierToIndex_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTrackSegments",
		sizeof(FMovieSceneEvaluationTrackSegments),
		alignof(FMovieSceneEvaluationTrackSegments),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTrackSegments"), sizeof(FMovieSceneEvaluationTrackSegments), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Hash() { return 2077265233U; }
class UScriptStruct* FSectionEvaluationDataTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationDataTree, Z_Construct_UPackage__Script_MovieScene(), TEXT("SectionEvaluationDataTree"), sizeof(FSectionEvaluationDataTree), Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FSectionEvaluationDataTree>()
{
	return FSectionEvaluationDataTree::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSectionEvaluationDataTree(FSectionEvaluationDataTree::StaticStruct, TEXT("/Script/MovieScene"), TEXT("SectionEvaluationDataTree"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationDataTree
{
	FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationDataTree()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SectionEvaluationDataTree")),new UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationDataTree;
	struct Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Custom serialized tree of section evaluation data for a track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"SectionEvaluationDataTree",
		sizeof(FSectionEvaluationDataTree),
		alignof(FSectionEvaluationDataTree),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationDataTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SectionEvaluationDataTree"), sizeof(FSectionEvaluationDataTree), Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Hash() { return 2881304090U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

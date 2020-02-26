// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneSegment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSegment() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier();
// End Cross Module References
	static UEnum* ESectionEvaluationFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, Z_Construct_UPackage__Script_MovieScene(), TEXT("ESectionEvaluationFlags"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<ESectionEvaluationFlags>()
	{
		return ESectionEvaluationFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESectionEvaluationFlags(ESectionEvaluationFlags_StaticEnum, TEXT("/Script/MovieScene"), TEXT("ESectionEvaluationFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Hash() { return 1813251492U; }
	UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESectionEvaluationFlags"), 0, Get_Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESectionEvaluationFlags::None", (int64)ESectionEvaluationFlags::None },
				{ "ESectionEvaluationFlags::PreRoll", (int64)ESectionEvaluationFlags::PreRoll },
				{ "ESectionEvaluationFlags::PostRoll", (int64)ESectionEvaluationFlags::PostRoll },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "None.ToolTip", "No special flags - normal evaluation" },
				{ "PostRoll.ToolTip", "Segment resides inside the 'post-roll' time for the section" },
				{ "PreRoll.ToolTip", "Segment resides inside the 'pre-roll' time for the section" },
				{ "ToolTip", "Enumeration specifying how to evaluate a particular section when inside a segment" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"ESectionEvaluationFlags",
				"ESectionEvaluationFlags",
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
class UScriptStruct* FMovieSceneSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSegment, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSegment"), sizeof(FMovieSceneSegment), Get_Z_Construct_UScriptStruct_FMovieSceneSegment_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSegment>()
{
	return FMovieSceneSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSegment(FMovieSceneSegment::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSegment"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegment
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSegment")),new UScriptStruct::TCppStructOps<FMovieSceneSegment>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegment;
	struct Z_Construct_UScriptStruct_FMovieSceneSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "Information about a single segment of an evaluation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSegment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSegment",
		sizeof(FMovieSceneSegment),
		alignof(FMovieSceneSegment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSegment"), sizeof(FMovieSceneSegment), Get_Z_Construct_UScriptStruct_FMovieSceneSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegment_Hash() { return 1768286687U; }
class UScriptStruct* FSectionEvaluationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationData, Z_Construct_UPackage__Script_MovieScene(), TEXT("SectionEvaluationData"), sizeof(FSectionEvaluationData), Get_Z_Construct_UScriptStruct_FSectionEvaluationData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FSectionEvaluationData>()
{
	return FSectionEvaluationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSectionEvaluationData(FSectionEvaluationData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("SectionEvaluationData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SectionEvaluationData")),new UScriptStruct::TCppStructOps<FSectionEvaluationData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationData;
	struct Z_Construct_UScriptStruct_FSectionEvaluationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImplIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "Evaluation data that specifies information about what to evaluate for a given template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectionEvaluationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "Additional flags for evaluating this section" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSectionEvaluationData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "A forced time to evaluate this section at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSectionEvaluationData, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "The implementation index we should evaluate (index into FMovieSceneEvaluationTrack::ChildTemplates)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex = { "ImplIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSectionEvaluationData, ImplIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"SectionEvaluationData",
		sizeof(FSectionEvaluationData),
		alignof(FSectionEvaluationData),
		Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SectionEvaluationData"), sizeof(FSectionEvaluationData), Get_Z_Construct_UScriptStruct_FSectionEvaluationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationData_Hash() { return 2280551200U; }
class UScriptStruct* FMovieSceneSegmentIdentifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSegmentIdentifier"), sizeof(FMovieSceneSegmentIdentifier), Get_Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSegmentIdentifier>()
{
	return FMovieSceneSegmentIdentifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSegmentIdentifier(FMovieSceneSegmentIdentifier::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSegmentIdentifier"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegmentIdentifier
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegmentIdentifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSegmentIdentifier")),new UScriptStruct::TCppStructOps<FMovieSceneSegmentIdentifier>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegmentIdentifier;
	struct Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentifierIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdentifierIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "A unique identifier for a segment within a FMovieSceneEvaluationTrackSegments container" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSegmentIdentifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex = { "IdentifierIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSegmentIdentifier, IdentifierIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSegmentIdentifier",
		sizeof(FMovieSceneSegmentIdentifier),
		alignof(FMovieSceneSegmentIdentifier),
		Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSegmentIdentifier"), sizeof(FMovieSceneSegmentIdentifier), Get_Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Hash() { return 4107712407U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

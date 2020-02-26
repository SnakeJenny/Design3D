// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionCore/Public/GeometryCollection/RecordedTransformTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordedTransformTrack() {}
// Cross Module References
	GEOMETRYCOLLECTIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionCore();
	GEOMETRYCOLLECTIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedTransformTrack();
	GEOMETRYCOLLECTIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedFrame();
	GEOMETRYCOLLECTIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingData();
	GEOMETRYCOLLECTIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* EGeometryCollectionCacheType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType, Z_Construct_UPackage__Script_GeometryCollectionCore(), TEXT("EGeometryCollectionCacheType"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONCORE_API UEnum* StaticEnum<EGeometryCollectionCacheType>()
	{
		return EGeometryCollectionCacheType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGeometryCollectionCacheType(EGeometryCollectionCacheType_StaticEnum, TEXT("/Script/GeometryCollectionCore"), TEXT("EGeometryCollectionCacheType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType_Hash() { return 819444140U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGeometryCollectionCacheType"), 0, Get_Z_Construct_UEnum_GeometryCollectionCore_EGeometryCollectionCacheType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGeometryCollectionCacheType::None", (int64)EGeometryCollectionCacheType::None },
				{ "EGeometryCollectionCacheType::Record", (int64)EGeometryCollectionCacheType::Record },
				{ "EGeometryCollectionCacheType::Play", (int64)EGeometryCollectionCacheType::Play },
				{ "EGeometryCollectionCacheType::RecordAndPlay", (int64)EGeometryCollectionCacheType::RecordAndPlay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionCore,
				nullptr,
				"EGeometryCollectionCacheType",
				"EGeometryCollectionCacheType",
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
class UScriptStruct* FRecordedTransformTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FRecordedTransformTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordedTransformTrack, Z_Construct_UPackage__Script_GeometryCollectionCore(), TEXT("RecordedTransformTrack"), sizeof(FRecordedTransformTrack), Get_Z_Construct_UScriptStruct_FRecordedTransformTrack_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONCORE_API UScriptStruct* StaticStruct<FRecordedTransformTrack>()
{
	return FRecordedTransformTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordedTransformTrack(FRecordedTransformTrack::StaticStruct, TEXT("/Script/GeometryCollectionCore"), TEXT("RecordedTransformTrack"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFRecordedTransformTrack
{
	FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFRecordedTransformTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecordedTransformTrack")),new UScriptStruct::TCppStructOps<FRecordedTransformTrack>);
	}
} ScriptStruct_GeometryCollectionCore_StaticRegisterNativesFRecordedTransformTrack;
	struct Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordedTransformTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedTransformTrack, Records), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRecordedFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::NewProp_Records_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionCore,
		nullptr,
		&NewStructOps,
		"RecordedTransformTrack",
		sizeof(FRecordedTransformTrack),
		alignof(FRecordedTransformTrack),
		Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordedTransformTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordedTransformTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordedTransformTrack"), sizeof(FRecordedTransformTrack), Get_Z_Construct_UScriptStruct_FRecordedTransformTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordedTransformTrack_Hash() { return 1098402699U; }
class UScriptStruct* FRecordedFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FRecordedFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordedFrame, Z_Construct_UPackage__Script_GeometryCollectionCore(), TEXT("RecordedFrame"), sizeof(FRecordedFrame), Get_Z_Construct_UScriptStruct_FRecordedFrame_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONCORE_API UScriptStruct* StaticStruct<FRecordedFrame>()
{
	return FRecordedFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordedFrame(FRecordedFrame::StaticStruct, TEXT("/Script/GeometryCollectionCore"), TEXT("RecordedFrame"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFRecordedFrame
{
	FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFRecordedFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecordedFrame")),new UScriptStruct::TCppStructOps<FRecordedFrame>);
	}
} ScriptStruct_GeometryCollectionCore_StaticRegisterNativesFRecordedFrame;
	struct Z_Construct_UScriptStruct_FRecordedFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trailings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Trailings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Trailings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Collisions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Collisions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisabledFlags;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisabledFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTransformIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousTransformIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousTransformIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransformIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "Structure describing necessary data to record the results of a physics simulation for rigids.\nPrimarily for recording the results of a geometry collection simulation for later playback" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordedFrame>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings = { "Trailings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, Trailings), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_Inner = { "Trailings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSolverTrailingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions = { "Collisions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, Collisions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_Inner = { "Collisions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSolverCollisionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "Per-particle list of whether or not they were disabled on this frame.\n#BGallagher change this to be event based - expensive on memory and beginframe iterations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags = { "DisabledFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, DisabledFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_Inner = { "DisabledFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "Maps to the position in the Transforms array of the *previous* frame that this entry existed. They can move around as particles\neither become disabled/enabled or if a particle didn't move since the last frame. This allows us to pick up previous positions\nfor velocities etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices = { "PreviousTransformIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, PreviousTransformIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_Inner = { "PreviousTransformIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "After processing, this will map a transform index within this frame out to a body/particle index for the component.\nThis will map back to where the transform was before processing." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices = { "TransformIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, TransformIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_Inner = { "TransformIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
		{ "ToolTip", "List of transforms recorded for this frame.\nDuring execution maps one-to-one with the number of particles. This is handed off for processing when written back to the collection.\nThis processing will remove redundant transforms and populate the indices in FRecordedFrame to handle the remapping" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordedFrame, Transforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Trailings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Collisions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_DisabledFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_PreviousTransformIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_TransformIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordedFrame_Statics::NewProp_Transforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordedFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionCore,
		nullptr,
		&NewStructOps,
		"RecordedFrame",
		sizeof(FRecordedFrame),
		alignof(FRecordedFrame),
		Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordedFrame_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordedFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordedFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordedFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordedFrame"), sizeof(FRecordedFrame), Get_Z_Construct_UScriptStruct_FRecordedFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordedFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordedFrame_Hash() { return 1706271004U; }
class UScriptStruct* FSolverTrailingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FSolverTrailingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverTrailingData, Z_Construct_UPackage__Script_GeometryCollectionCore(), TEXT("SolverTrailingData"), sizeof(FSolverTrailingData), Get_Z_Construct_UScriptStruct_FSolverTrailingData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONCORE_API UScriptStruct* StaticStruct<FSolverTrailingData>()
{
	return FSolverTrailingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSolverTrailingData(FSolverTrailingData::StaticStruct, TEXT("/Script/GeometryCollectionCore"), TEXT("SolverTrailingData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFSolverTrailingData
{
	FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFSolverTrailingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SolverTrailingData")),new UScriptStruct::TCppStructOps<FSolverTrailingData>);
	}
} ScriptStruct_GeometryCollectionCore_StaticRegisterNativesFSolverTrailingData;
	struct Z_Construct_UScriptStruct_FSolverTrailingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverTrailingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverTrailingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverTrailingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionCore,
		nullptr,
		&NewStructOps,
		"SolverTrailingData",
		sizeof(FSolverTrailingData),
		alignof(FSolverTrailingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSolverTrailingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SolverTrailingData"), sizeof(FSolverTrailingData), Get_Z_Construct_UScriptStruct_FSolverTrailingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSolverTrailingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSolverTrailingData_Hash() { return 3543567907U; }
class UScriptStruct* FSolverCollisionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FSolverCollisionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverCollisionData, Z_Construct_UPackage__Script_GeometryCollectionCore(), TEXT("SolverCollisionData"), sizeof(FSolverCollisionData), Get_Z_Construct_UScriptStruct_FSolverCollisionData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONCORE_API UScriptStruct* StaticStruct<FSolverCollisionData>()
{
	return FSolverCollisionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSolverCollisionData(FSolverCollisionData::StaticStruct, TEXT("/Script/GeometryCollectionCore"), TEXT("SolverCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFSolverCollisionData
{
	FScriptStruct_GeometryCollectionCore_StaticRegisterNativesFSolverCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SolverCollisionData")),new UScriptStruct::TCppStructOps<FSolverCollisionData>);
	}
} ScriptStruct_GeometryCollectionCore_StaticRegisterNativesFSolverCollisionData;
	struct Z_Construct_UScriptStruct_FSolverCollisionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/RecordedTransformTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverCollisionData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionCore,
		nullptr,
		&NewStructOps,
		"SolverCollisionData",
		sizeof(FSolverCollisionData),
		alignof(FSolverCollisionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSolverCollisionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SolverCollisionData"), sizeof(FSolverCollisionData), Get_Z_Construct_UScriptStruct_FSolverCollisionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSolverCollisionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSolverCollisionData_Hash() { return 177278243U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

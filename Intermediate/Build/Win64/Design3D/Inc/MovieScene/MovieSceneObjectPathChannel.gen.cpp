// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Channels/MovieSceneObjectPathChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPathChannel() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneObjectPathChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectPathChannel"), sizeof(FMovieSceneObjectPathChannel), Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectPathChannel>()
{
	return FMovieSceneObjectPathChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneObjectPathChannel(FMovieSceneObjectPathChannel::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneObjectPathChannel"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectPathChannel
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectPathChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneObjectPathChannel")),new UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannel>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectPathChannel;
	struct Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PropertyClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectPathChannel, DefaultValue), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_MetaData[] = {
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectPathChannel, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectPathChannel, Times), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectPathChannel, PropertyClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneObjectPathChannel",
		sizeof(FMovieSceneObjectPathChannel),
		alignof(FMovieSceneObjectPathChannel),
		Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneObjectPathChannel"), sizeof(FMovieSceneObjectPathChannel), Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Hash() { return 2431684603U; }
class UScriptStruct* FMovieSceneObjectPathChannelKeyValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectPathChannelKeyValue"), sizeof(FMovieSceneObjectPathChannelKeyValue), Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectPathChannelKeyValue>()
{
	return FMovieSceneObjectPathChannelKeyValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue(FMovieSceneObjectPathChannelKeyValue::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneObjectPathChannelKeyValue"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectPathChannelKeyValue
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectPathChannelKeyValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneObjectPathChannelKeyValue")),new UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannelKeyValue>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectPathChannelKeyValue;
	struct Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HardPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "Key value type for object path channels that stores references to objects as both a hard and soft reference, to ensure compatability with both sub objects and async loading" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannelKeyValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "Hard reference to the loaded object - relevant for any asset type which also hints the async loader to efficiently load the asset in advance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr = { "HardPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectPathChannelKeyValue, HardPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "Persistent storage of the object by path (which allows us to support cross-level actor references, for instance)" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr = { "SoftPtr", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectPathChannelKeyValue, SoftPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneObjectPathChannelKeyValue",
		sizeof(FMovieSceneObjectPathChannelKeyValue),
		alignof(FMovieSceneObjectPathChannelKeyValue),
		Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneObjectPathChannelKeyValue"), sizeof(FMovieSceneObjectPathChannelKeyValue), Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Hash() { return 2465149508U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

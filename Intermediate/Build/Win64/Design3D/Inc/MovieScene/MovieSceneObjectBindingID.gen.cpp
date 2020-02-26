// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneObjectBindingID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectBindingID() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EMovieSceneObjectBindingSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneObjectBindingSpace"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneObjectBindingSpace>()
	{
		return EMovieSceneObjectBindingSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneObjectBindingSpace(EMovieSceneObjectBindingSpace_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneObjectBindingSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Hash() { return 185467768U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneObjectBindingSpace"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneObjectBindingSpace::Local", (int64)EMovieSceneObjectBindingSpace::Local },
				{ "EMovieSceneObjectBindingSpace::Root", (int64)EMovieSceneObjectBindingSpace::Root },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.ToolTip", "The object binding sequence ID resolves from a local sequence (ie, it may need to accumulate a parent sequence ID before it resolves correctly)" },
				{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
				{ "Root.ToolTip", "The object binding sequence ID resolves from the root of the sequence" },
				{ "ToolTip", "Enumeration specifying how a movie scene object binding ID relates to the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneObjectBindingSpace",
				"EMovieSceneObjectBindingSpace",
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
class UScriptStruct* FMovieSceneObjectBindingID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectBindingID"), sizeof(FMovieSceneObjectBindingID), Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectBindingID>()
{
	return FMovieSceneObjectBindingID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneObjectBindingID(FMovieSceneObjectBindingID::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneObjectBindingID"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectBindingID
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectBindingID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneObjectBindingID")),new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingID>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectBindingID;
	struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "Persistent identifier to a specific object binding within a sequence hierarchy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "Identifier for the object binding within the sequence" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectBindingID, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "The binding's resolution space" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectBindingID, Space), Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "Sequence ID stored as an int32 so that it can be used in the blueprint VM" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneObjectBindingID, SequenceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneObjectBindingID",
		sizeof(FMovieSceneObjectBindingID),
		alignof(FMovieSceneObjectBindingID),
		Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneObjectBindingID"), sizeof(FMovieSceneObjectBindingID), Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Hash() { return 650735764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

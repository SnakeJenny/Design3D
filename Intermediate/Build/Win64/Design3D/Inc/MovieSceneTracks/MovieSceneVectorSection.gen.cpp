// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVectorSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVectorSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
class UScriptStruct* FMovieSceneVector4KeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector4KeyStruct"), sizeof(FMovieSceneVector4KeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector4KeyStruct>()
{
	return FMovieSceneVector4KeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVector4KeyStruct(FMovieSceneVector4KeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVector4KeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector4KeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector4KeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVector4KeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneVector4KeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector4KeyStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for vector4 section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector4KeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneVector4KeyStruct, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::NewProp_Vector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::NewProp_Vector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::NewProp_Vector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase,
		&NewStructOps,
		"MovieSceneVector4KeyStruct",
		sizeof(FMovieSceneVector4KeyStruct),
		alignof(FMovieSceneVector4KeyStruct),
		Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVector4KeyStruct"), sizeof(FMovieSceneVector4KeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Hash() { return 4070910019U; }
class UScriptStruct* FMovieSceneVectorKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVectorKeyStruct"), sizeof(FMovieSceneVectorKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVectorKeyStruct>()
{
	return FMovieSceneVectorKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVectorKeyStruct(FMovieSceneVectorKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVectorKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVectorKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for vector section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneVectorKeyStruct, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::NewProp_Vector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::NewProp_Vector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::NewProp_Vector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase,
		&NewStructOps,
		"MovieSceneVectorKeyStruct",
		sizeof(FMovieSceneVectorKeyStruct),
		alignof(FMovieSceneVectorKeyStruct),
		Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVectorKeyStruct"), sizeof(FMovieSceneVectorKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Hash() { return 1960386767U; }
class UScriptStruct* FMovieSceneVector2DKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector2DKeyStruct"), sizeof(FMovieSceneVector2DKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector2DKeyStruct>()
{
	return FMovieSceneVector2DKeyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVector2DKeyStruct(FMovieSceneVector2DKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVector2DKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector2DKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector2DKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVector2DKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneVector2DKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector2DKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for 2D vector section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector2DKeyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneVector2DKeyStruct, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase,
		&NewStructOps,
		"MovieSceneVector2DKeyStruct",
		sizeof(FMovieSceneVector2DKeyStruct),
		alignof(FMovieSceneVector2DKeyStruct),
		Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVector2DKeyStruct"), sizeof(FMovieSceneVector2DKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Hash() { return 794876388U; }
class UScriptStruct* FMovieSceneVectorKeyStructBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVectorKeyStructBase"), sizeof(FMovieSceneVectorKeyStructBase), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVectorKeyStructBase>()
{
	return FMovieSceneVectorKeyStructBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVectorKeyStructBase(FMovieSceneVectorKeyStructBase::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVectorKeyStructBase"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStructBase
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStructBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVectorKeyStructBase")),new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStructBase>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStructBase;
	struct Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Base Proxy structure for vector section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStructBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneVectorKeyStructBase, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieSceneVectorKeyStructBase",
		sizeof(FMovieSceneVectorKeyStructBase),
		alignof(FMovieSceneVectorKeyStructBase),
		Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVectorKeyStructBase"), sizeof(FMovieSceneVectorKeyStructBase), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Hash() { return 2105190141U; }
	void UMovieSceneVectorSection::StaticRegisterNativesUMovieSceneVectorSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneVectorSection_NoRegister()
	{
		return UMovieSceneVectorSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneVectorSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneVectorSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVectorSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneVectorSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A vector section." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_ChannelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "How many curves are actually used" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_ChannelsUsed = { "ChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneVectorSection, ChannelsUsed), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_ChannelsUsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_ChannelsUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_Curves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Float functions for the X,Y,Z,W components of the vector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Curves, UMovieSceneVectorSection), STRUCT_OFFSET(UMovieSceneVectorSection, Curves), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_Curves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_Curves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneVectorSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_ChannelsUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneVectorSection_Statics::NewProp_Curves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneVectorSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneVectorSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneVectorSection_Statics::ClassParams = {
		&UMovieSceneVectorSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneVectorSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVectorSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVectorSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVectorSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneVectorSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneVectorSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneVectorSection, 495835763);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneVectorSection>()
	{
		return UMovieSceneVectorSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneVectorSection(Z_Construct_UClass_UMovieSceneVectorSection, &UMovieSceneVectorSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneVectorSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVectorSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneVectorSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

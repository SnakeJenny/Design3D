// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieScenePropertyTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData();
// End Cross Module References
class UScriptStruct* FMovieScenePropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertySectionTemplate"), sizeof(FMovieScenePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertySectionTemplate>()
{
	return FMovieScenePropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePropertySectionTemplate(FMovieScenePropertySectionTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScenePropertySectionTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData = { "PropertyData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertySectionTemplate, PropertyData), Z_Construct_UScriptStruct_FMovieScenePropertySectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieScenePropertySectionTemplate",
		sizeof(FMovieScenePropertySectionTemplate),
		alignof(FMovieScenePropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePropertySectionTemplate"), sizeof(FMovieScenePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Hash() { return 4275624084U; }
class UScriptStruct* FMovieScenePropertySectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertySectionData"), sizeof(FMovieScenePropertySectionData), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertySectionData>()
{
	return FMovieScenePropertySectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePropertySectionData(FMovieScenePropertySectionData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePropertySectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePropertySectionData")),new UScriptStruct::TCppStructOps<FMovieScenePropertySectionData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionData;
	struct Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertySectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_NotifyFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_NotifyFunctionName = { "NotifyFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertySectionData, NotifyFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_NotifyFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_NotifyFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertySectionData, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertySectionData, PropertyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePropertySectionData, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_NotifyFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieScenePropertySectionData",
		sizeof(FMovieScenePropertySectionData),
		alignof(FMovieScenePropertySectionData),
		Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePropertySectionData"), sizeof(FMovieScenePropertySectionData), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Hash() { return 2016233567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

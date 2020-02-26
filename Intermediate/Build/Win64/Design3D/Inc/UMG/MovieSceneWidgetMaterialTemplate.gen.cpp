// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Private/Animation/MovieSceneWidgetMaterialTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTemplate() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
// End Cross Module References
class UScriptStruct* FMovieSceneWidgetMaterialSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate, Z_Construct_UPackage__Script_UMG(), TEXT("MovieSceneWidgetMaterialSectionTemplate"), sizeof(FMovieSceneWidgetMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FMovieSceneWidgetMaterialSectionTemplate>()
{
	return FMovieSceneWidgetMaterialSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate(FMovieSceneWidgetMaterialSectionTemplate::StaticStruct, TEXT("/Script/UMG"), TEXT("MovieSceneWidgetMaterialSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFMovieSceneWidgetMaterialSectionTemplate
{
	FScriptStruct_UMG_StaticRegisterNativesFMovieSceneWidgetMaterialSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneWidgetMaterialSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneWidgetMaterialSectionTemplate>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFMovieSceneWidgetMaterialSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieSceneWidgetMaterialTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWidgetMaterialSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieSceneWidgetMaterialTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneWidgetMaterialSectionTemplate, BrushPropertyNamePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_Inner = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneWidgetMaterialSectionTemplate",
		sizeof(FMovieSceneWidgetMaterialSectionTemplate),
		alignof(FMovieSceneWidgetMaterialSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneWidgetMaterialSectionTemplate"), sizeof(FMovieSceneWidgetMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Hash() { return 3265169023U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

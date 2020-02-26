// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FColorParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ColorParameterNameAndCurves"), sizeof(FColorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FColorParameterNameAndCurves>()
{
	return FColorParameterNameAndCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorParameterNameAndCurves(FColorParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("ColorParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves;
	struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated vector parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the alpha component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, AlphaCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the blue component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, BlueCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the green component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, GreenCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the red component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, RedCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the vector parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ColorParameterNameAndCurves",
		sizeof(FColorParameterNameAndCurves),
		alignof(FColorParameterNameAndCurves),
		Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorParameterNameAndCurves"), sizeof(FColorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash() { return 3361478909U; }
class UScriptStruct* FVectorParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("VectorParameterNameAndCurves"), sizeof(FVectorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FVectorParameterNameAndCurves>()
{
	return FVectorParameterNameAndCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorParameterNameAndCurves(FVectorParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("VectorParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves;
	struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated vector parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the z component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve = { "ZCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, ZCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the y component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, YCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the x component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, XCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the vector parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"VectorParameterNameAndCurves",
		sizeof(FVectorParameterNameAndCurves),
		alignof(FVectorParameterNameAndCurves),
		Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorParameterNameAndCurves"), sizeof(FVectorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash() { return 3034799475U; }
class UScriptStruct* FScalarParameterNameAndCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ScalarParameterNameAndCurve"), sizeof(FScalarParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FScalarParameterNameAndCurve>()
{
	return FScalarParameterNameAndCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterNameAndCurve(FScalarParameterNameAndCurve::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("ScalarParameterNameAndCurve"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterNameAndCurve")),new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve;
	struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated scalar parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the scalar parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ScalarParameterNameAndCurve",
		sizeof(FScalarParameterNameAndCurve),
		alignof(FScalarParameterNameAndCurve),
		Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterNameAndCurve"), sizeof(FScalarParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash() { return 191634954U; }
	void UMovieSceneParameterSection::StaticRegisterNativesUMovieSceneParameterSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParameterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParameterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneParameterSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A single movie scene section which can contain data for multiple named parameters." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves = { "ColorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, ColorParameterNamesAndCurves), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_Inner = { "ColorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves = { "VectorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, VectorParameterNamesAndCurves), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_Inner = { "VectorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The scalar parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, ScalarParameterNamesAndCurves), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParameterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParameterSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::ClassParams = {
		&UMovieSceneParameterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParameterSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneParameterSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneParameterSection, 3032752983);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneParameterSection>()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParameterSection(Z_Construct_UClass_UMovieSceneParameterSection, &UMovieSceneParameterSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneParameterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParameterSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

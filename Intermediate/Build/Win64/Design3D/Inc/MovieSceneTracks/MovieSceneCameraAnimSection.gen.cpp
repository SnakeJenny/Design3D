// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCameraAnimSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FMovieSceneCameraAnimSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraAnimSectionData"), sizeof(FMovieSceneCameraAnimSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraAnimSectionData>()
{
	return FMovieSceneCameraAnimSectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraAnimSectionData(FMovieSceneCameraAnimSectionData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraAnimSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraAnimSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionData;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FMovieSceneCameraAnimSectionData*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCameraAnimSectionData), &Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "Scalar to control intensity of the animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "How fast to play back the animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "The camera anim to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCameraAnimSectionData",
		sizeof(FMovieSceneCameraAnimSectionData),
		alignof(FMovieSceneCameraAnimSectionData),
		Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraAnimSectionData"), sizeof(FMovieSceneCameraAnimSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Hash() { return 3758911142U; }
	void UMovieSceneCameraAnimSection::StaticRegisterNativesUMovieSceneCameraAnimSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection_NoRegister()
	{
		return UMovieSceneCameraAnimSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCameraAnimSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneCameraAnimSection*)Obj)->bLooping_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneCameraAnimSection), &Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, BlendOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, BlendInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, PlayScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, PlayRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "Deprecated members" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, CameraAnim_DEPRECATED), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, AnimData), Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraAnimSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::ClassParams = {
		&UMovieSceneCameraAnimSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraAnimSection, 3576683363);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraAnimSection>()
	{
		return UMovieSceneCameraAnimSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraAnimSection(Z_Construct_UClass_UMovieSceneCameraAnimSection, &UMovieSceneCameraAnimSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraAnimSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraAnimSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
